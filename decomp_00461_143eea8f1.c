// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143eea8f1 FUN_143eea8f1 body=55 status=ok
// SIG undefined FUN_143eea8f1(void)

void FUN_143eea8f1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb96590 == 0) {
    uVar1 = FUN_140ef4acf();
    DAT_14cb96590 = FUN_14171c317(FUN_14657c763,uVar1,L"EShiftAgeGroup");
  }
  return;
}



// FUNCTION 143eea928 FUN_143eea928 body=55 status=ok
// SIG undefined FUN_143eea928(void)

void FUN_143eea928(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb965a8 == 0) {
    uVar1 = FUN_140ef4acf();
    DAT_14cb965a8 = FUN_14171c317(FUN_14657c792,uVar1,L"EShiftFeaturePrivilege");
  }
  return;
}



// FUNCTION 143eea95f FUN_143eea95f body=55 status=ok
// SIG undefined FUN_143eea95f(void)

void FUN_143eea95f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb965c0 == 0) {
    uVar1 = FUN_140ef4acf();
    DAT_14cb965c0 = FUN_14171c317(FUN_14657c7c1,uVar1,L"EShiftFeatureDefault");
  }
  return;
}



// FUNCTION 143eea996 FUN_143eea996 body=207 status=ok
// SIG undefined FUN_143eea996(void)

undefined8 FUN_143eea996(undefined8 param_1,longlong *param_2)

{
  char *pcVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  longlong local_38;
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_2 + 0x10))(param_2,&local_30);
  if (local_30 != DAT_14cb8e220) {
    (**(code **)(*param_2 + 0x10))(param_2,&local_38);
    FUN_1446f470e(&local_40,L"EPIC",1);
    if (local_38 != local_40) {
      (**(code **)(*param_2 + 0x10))(param_2,&local_30);
      pcVar1 = "";
      if (local_30 == DAT_14cb8e468) {
        pcVar1 = "steam";
      }
      goto LAB_143eeaa3a;
    }
  }
  pcVar1 = "epic";
LAB_143eeaa3a:
  FUN_1400b22c2(param_1,pcVar1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeaa66 FUN_143eeaa66 body=950 status=ok
// SIG undefined FUN_143eeaa66(void)

void FUN_143eeaa66(longlong param_1,undefined4 param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 *puVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 *local_a8;
  int local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88 [2];
  longlong local_78 [2];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if ((*(longlong *)(param_1 + 0x2c0) == 0) ||
     (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x30), lVar5 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(lVar5 + 0x360);
  }
  plVar4 = (longlong *)FUN_14657d87a(uVar6);
  (**(code **)(*plVar4 + 0x10))(plVar4,&local_90);
  if (local_90 == DAT_14cb8e220) {
LAB_143eeaadb:
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_50);
    (**(code **)(*(longlong *)CONCAT44(uStack_4c,local_50) + 0x150))
              ((longlong *)CONCAT44(uStack_4c,local_50),&local_a8,param_2);
    plVar4 = (longlong *)CONCAT44(uStack_44,uStack_48);
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
    puVar3 = local_a8;
    if (local_a0 < 2) {
      if (((int)param_3[1] != 0) && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)) {
        lVar5 = *plVar4;
        uVar6 = 0;
LAB_143eeab4c:
        (**(code **)(lVar5 + 0x60))(plVar4,uVar6);
      }
    }
    else {
      if ((*(longlong *)(param_1 + 0x2c0) == 0) ||
         (lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x2c0) + 0x30), lVar5 == 0)) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar5 + 0x360);
      }
      plVar4 = (longlong *)FUN_14657d87a(uVar6);
      (**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
      if (CONCAT44(uStack_4c,local_50) == DAT_14cb8e220) {
LAB_143eeac89:
        FUN_14006620a(&local_50,puVar3,local_a0 + -1);
        local_b8 = CONCAT44(uStack_4c,local_50);
        uStack_b0 = uStack_48;
        uStack_ac = uStack_44;
      }
      else {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_68);
        FUN_1446f470e(&local_58,L"EPIC",1);
        if (CONCAT44(uStack_64,local_68) == local_58) goto LAB_143eeac89;
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_50);
        if (CONCAT44(uStack_4c,local_50) == DAT_14cb8e468) {
          FUN_14006620a(&local_50,puVar3,local_a0 + -1);
          local_68 = local_50;
          uStack_64 = uStack_4c;
          uStack_60 = uStack_48;
          uStack_5c = uStack_44;
          FUN_1400b22c2(local_78,&DAT_14a179946);
          (**(code **)(*plVar4 + 0x158))(plVar4,local_88);
          FUN_1401c7f3e(&local_50,local_88,local_78);
          FUN_1401c7f3e(&local_b8,&local_50,&local_68);
          if (CONCAT44(uStack_4c,local_50) != 0) {
            FUN_1400020a8();
          }
          if (local_88[0] != 0) {
            FUN_1400020a8();
          }
          if (local_78[0] != 0) {
            FUN_1400020a8();
          }
          if (CONCAT44(uStack_64,local_68) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          FUN_1400b22c2(&local_b8,&DAT_149e02088);
        }
      }
      if ((undefined8 *)(param_1 + 0x270) == &local_b8) {
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (*(longlong *)(param_1 + 0x270) != 0) {
          FUN_1400020a8();
        }
        *(longlong *)(param_1 + 0x270) = local_b8;
        local_b8 = 0;
        *(undefined4 *)(param_1 + 0x278) = uStack_b0;
        *(undefined4 *)(param_1 + 0x27c) = uStack_ac;
      }
      if (((int)param_3[1] != 0) && (plVar4 = (longlong *)*param_3, plVar4 != (longlong *)0x0)) {
        lVar5 = *plVar4;
        uVar6 = 1;
        goto LAB_143eeab4c;
      }
    }
    if (local_a8 != (undefined4 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    FUN_1446f470e(&local_98,L"EPIC",1);
    if ((local_90 == local_98) || (local_90 == DAT_14cb8e468)) goto LAB_143eeaadb;
  }
  puVar7 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_143eeabd0;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar7 = (undefined8 *)*param_3;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eeabd0:
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeae1e FUN_143eeae1e body=137 status=ok
// SIG undefined FUN_143eeae1e(void)

void FUN_143eeae1e(longlong param_1)

{
  undefined1 auStack_68 [40];
  char *local_40;
  char *local_38;
  char *local_30;
  char *local_28;
  undefined1 local_19;
  code *local_18;
  undefined1 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (*(longlong *)(param_1 + 0x50) != 0) {
    local_18 = FUN_143eebe1e;
    local_10 = &local_19;
    local_30 = "client_system_config";
    local_28 = "";
    local_40 = "bifrost_ue4_performance";
    local_38 = "";
    bifrost::telemetry::raiseEvent();
  }
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeaea8 FUN_143eeaea8 body=202 status=ok
// SIG undefined FUN_143eeaea8(void)

void FUN_143eeaea8(longlong param_1,undefined1 param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [40];
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  undefined1 local_40 [8];
  longlong local_38;
  code *local_30;
  undefined1 *local_28;
  ulonglong local_20;
  
  lVar1 = DAT_14cb0d2b0;
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x50);
  if (lVar3 != 0) {
    lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0x2c8);
    if (lVar2 == 0) {
      FUN_145876474(DAT_14cb0d2b0);
      lVar2 = *(longlong *)(lVar1 + 0x2c8);
      if (lVar2 == 0) goto LAB_143eeaf37;
      lVar3 = *(longlong *)(param_1 + 0x50);
    }
    local_28 = local_40;
    local_30 = FUN_143eec6ee;
    local_50 = "client_graphics_config";
    local_48 = "";
    local_60 = "bifrost_ue4_performance";
    local_58 = "";
    local_40[0] = param_2;
    local_38 = lVar2;
    bifrost::telemetry::raiseEvent(lVar3);
  }
LAB_143eeaf37:
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeaf91 FUN_143eeaf91 body=41 status=ok
// SIG undefined FUN_143eeaf91(void)

void FUN_143eeaf91(void)

{
  DAT_14cb966a8 = 0;
  if (DAT_14cb966a0 != 0) {
    FUN_1400020a8();
  }
  FUN_148a5b23c();
  return;
}



// FUNCTION 143eeafba FUN_143eeafba body=1210 status=ok
// SIG undefined FUN_143eeafba(void)

undefined8 * FUN_143eeafba(undefined8 *param_1,undefined8 param_2,wchar_t *param_3)

{
  ushort uVar1;
  void *pvVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  wchar_t *_Src;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  undefined8 **ppuVar9;
  longlong *plVar10;
  size_t sVar11;
  ulonglong uVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  void *local_98;
  ulonglong uStack_90;
  wchar_t *local_88;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined8 local_60;
  undefined8 *local_58;
  wchar_t **local_50;
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uVar5 = (uint)((ulonglong)param_2 >> 0x10);
  uVar13 = (uint)param_2 & 0xffff;
  local_60 = param_2;
  plVar7 = (longlong *)
           FUN_148a5b55c(((uint)param_2 << 0x10 | uVar13) + (int)((ulonglong)param_2 >> 0x20) +
                         (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar13 >> 4));
  if ((int)plVar7[1] == *(int *)((longlong)plVar7 + 0x34)) {
    FUN_1400021e4(&local_60,&local_98);
    uVar4 = uStack_90;
    pvVar2 = local_98;
    uVar5 = (uint)uStack_90;
    uVar8 = (ulonglong)((uint)uStack_90 - 1);
    if ((uint)uStack_90 == 0) {
      uVar8 = 0;
    }
    if (0 < (int)uVar8) {
      uVar12 = 0;
      do {
        uVar1 = *(ushort *)((longlong)local_98 + uVar12 * 2);
        *(ushort *)((longlong)local_98 + uVar12 * 2) = (ushort)(uVar1 - 0x41 < 0x1a) * 0x20 + uVar1;
        uVar12 = uVar12 + 1;
      } while (uVar8 != uVar12);
    }
    local_98 = (void *)0x0;
    uStack_90 = 0;
    local_88 = (wchar_t *)0x0;
    uStack_80 = uVar5;
    if (uVar5 == 0) {
      uStack_7c = 0;
    }
    else {
      FUN_1446dd670(&local_88,uVar4 & 0xffffffff,0);
      memcpy(local_88,pvVar2,(longlong)(int)uVar5 * 2);
    }
    local_50 = &local_88;
    uStack_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_58 = &local_a0;
    local_a0 = 0;
    FUN_148a5be18(plVar7,local_44);
    if (CONCAT44(uStack_74,uStack_78) != 0) {
      FUN_1400020a8();
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (pvVar2 != (void *)0x0) {
      FUN_1400020a8(pvVar2);
    }
    if (local_98 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar5 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
          -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  local_88 = param_3;
  ppuVar9 = (undefined8 **)FUN_148a5c37c(plVar7,uVar5 >> 0x10 ^ uVar5);
  FUN_14482e566(ppuVar9);
  if ((param_3 != (wchar_t *)0x0) && (*(int *)(ppuVar9 + 3) == 0)) {
    if ((int)plVar7[1] != *(int *)((longlong)plVar7 + 0x34)) {
      plVar10 = plVar7 + 7;
      if ((longlong *)plVar7[8] != (longlong *)0x0) {
        plVar10 = (longlong *)plVar7[8];
      }
      iVar6 = (int)*plVar10;
      if (iVar6 != -1) {
        do {
          lVar15 = *plVar7 + (longlong)iVar6 * 0x30;
          if (*(longlong *)(*plVar7 + (longlong)iVar6 * 0x30) == 0) {
            if (lVar15 != 0) {
              local_88 = (wchar_t *)0x0;
              uStack_80 = *(uint *)(lVar15 + 0x10);
              lVar14 = (longlong)(int)uStack_80;
              pvVar2 = *(void **)(lVar15 + 8);
              if (lVar14 == 0) {
                uStack_7c = 0;
              }
              else {
                FUN_1446dd670(&local_88,uStack_80,0);
                memcpy(local_88,pvVar2,lVar14 * 2);
              }
              goto LAB_143eeb24f;
            }
            break;
          }
          iVar6 = *(int *)(lVar15 + 0x28);
        } while (iVar6 != -1);
      }
    }
    local_88 = (wchar_t *)0x0;
    uStack_80 = 0;
    uStack_7c = 0;
LAB_143eeb24f:
    uStack_74 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    sVar11 = wcslen(param_3);
    uVar5 = uStack_80;
    _Src = local_88;
    if ((int)sVar11 == 0) {
      local_58 = (undefined8 *)0x0;
      lVar15 = (longlong)(int)uStack_80;
      local_50 = (wchar_t **)CONCAT44(local_50._4_4_,uStack_80);
      if (lVar15 == 0) {
        local_50 = (wchar_t **)(ulonglong)uStack_80;
      }
      else {
        FUN_1446dd670(&local_58,uStack_80,0);
        memcpy(local_58,_Src,lVar15 * 2);
      }
    }
    else {
      lVar15 = (longlong)(int)uStack_80;
      iVar6 = (int)sVar11 + (uint)(lVar15 == 0);
      local_58 = (undefined8 *)0x0;
      local_50 = (wchar_t **)CONCAT44(local_50._4_4_,uStack_80);
      if (iVar6 == 0 && uStack_80 == 0) {
        local_50 = (wchar_t **)(ulonglong)uStack_80;
      }
      else {
        if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar6 + uStack_80);
        }
        FUN_1446dd670(&local_58,iVar6 + uStack_80,0);
        if (uVar5 != 0) {
          memcpy(local_58,_Src,lVar15 * 2);
        }
      }
      FUN_1400020e8(&local_58,param_3,sVar11 & 0xffffffff);
    }
    puVar3 = local_58;
    if (ppuVar9 != &local_58) {
      iVar6 = (int)local_50;
      lVar15 = (longlong)(int)local_50;
      *(int *)(ppuVar9 + 1) = (int)local_50;
      if ((int)local_50 == 0 && *(int *)((longlong)ppuVar9 + 0xc) == 0) {
        *(undefined4 *)((longlong)ppuVar9 + 0xc) = 0;
      }
      else {
        FUN_1446dd670(ppuVar9,(ulonglong)local_50 & 0xffffffff);
        if (iVar6 != 0) {
          memcpy(*ppuVar9,puVar3,lVar15 * 2);
        }
      }
    }
    if (ppuVar9[2] != (undefined8 *)0x0) {
      FUN_1400020a8();
      ppuVar9[2] = (undefined8 *)0x0;
      *(undefined4 *)(ppuVar9 + 3) = 0;
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_74,uStack_78) != 0) {
      FUN_1400020a8();
      uStack_78 = 0;
      uStack_74 = 0;
      uStack_70 = 0;
    }
    if (local_88 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
  }
  *param_1 = 0;
  iVar6 = *(int *)(ppuVar9 + 1);
  puVar3 = *ppuVar9;
  *(int *)(param_1 + 1) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar6,0);
    memcpy((void *)*param_1,puVar3,(longlong)iVar6 * 2);
  }
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 143eeb5ca FUN_143eeb5ca body=34 status=ok
// SIG undefined FUN_143eeb5ca(void)

void FUN_143eeb5ca(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  
  dVar1 = atof((char *)*param_2);
  *(float *)*param_1 = (float)dVar1;
  return;
}



// FUNCTION 143eeb5ec FUN_143eeb5ec body=34 status=ok
// SIG undefined FUN_143eeb5ec(void)

void FUN_143eeb5ec(undefined8 *param_1,undefined8 *param_2)

{
  double dVar1;
  
  dVar1 = atof((char *)*param_2);
  *(float *)*param_1 = (float)dVar1;
  return;
}



// FUNCTION 143eeb60e FUN_143eeb60e body=933 status=ok
// SIG undefined FUN_143eeb60e(void)

void FUN_143eeb60e(undefined8 param_1,rowBuilder *param_2)

{
  int *piVar1;
  int iVar2;
  void *_Src;
  wchar_t *pwVar3;
  longlong lVar4;
  int *piVar5;
  undefined4 uVar6;
  wchar_t *_Str;
  longlong lVar7;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  longlong local_b0;
  wchar_t *local_a8;
  int local_a0;
  undefined1 local_98 [16];
  int *local_88;
  ulonglong uStack_80;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  bifrost::telemetry::rowBuilder::key(param_2,"gbx_env_guid");
  local_88 = (int *)0x0;
  uStack_80 = 0;
  FUN_1407c869a(param_1,&local_88,0);
  piVar1 = local_88;
  local_78 = (void *)0x0;
  lVar7 = (longlong)(int)uStack_80;
  local_70 = (int)uStack_80;
  if (lVar7 == 0) {
    local_6c = 0;
  }
  else {
    FUN_1446dd670(&local_78,uStack_80 & 0xffffffff,0);
    memcpy(local_78,piVar1,lVar7 * 2);
  }
  local_68 = 0;
  local_60 = 0;
  FUN_14482e566(&local_78);
  local_50 = local_60 + local_68;
  local_58 = local_68;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_68 != 0) {
    FUN_1400020a8();
    local_68 = 0;
    local_60 = 0;
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_88 != (int *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(local_98,&DAT_149dfb77a);
  FUN_141068d3e(&local_88,local_98,0);
  uVar6 = 0;
  if ((longlong)(int)uStack_80 != 0) {
    piVar1 = local_88 + (longlong)(int)uStack_80 * 6;
    piVar5 = local_88;
    do {
      if (1 < (uint)piVar5[4]) {
        iVar2 = *piVar5;
        lVar7 = FUN_14106911f();
        if ((longlong)*(int *)(lVar7 + 0x48) != 0) {
          lVar4 = 0;
          do {
            if (*(longlong *)(*(longlong *)(lVar7 + 0x40) + 8 + lVar4) == (longlong)iVar2) {
              local_78 = *(void **)(*(longlong *)(lVar7 + 0x40) + lVar4);
              goto LAB_143eeb7b5;
            }
            lVar4 = lVar4 + 0x10;
          } while ((longlong)*(int *)(lVar7 + 0x48) * 0x10 != lVar4);
        }
        local_78 = (void *)0x0;
LAB_143eeb7b5:
        FUN_1400021e4(&local_78,&local_a8);
        _Str = L"";
        if (local_a0 != 0) {
          _Str = local_a8;
        }
        pwVar3 = wcsrchr(_Str,L':');
        if ((pwVar3 != (wchar_t *)0x0) && (pwVar3[1] != L'\0')) {
          _Str = pwVar3 + 1;
        }
        FUN_140056680(&local_78,_Str);
        local_68 = 0;
        local_60 = 0;
        FUN_14482e566(&local_78);
        local_b0 = local_60 + local_68;
        local_b8 = local_68;
        bifrost::telemetry::rowBuilder::key(param_2,&local_b8);
        if (local_68 != 0) {
          FUN_1400020a8();
          local_68 = 0;
          local_60 = 0;
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        local_78 = (void *)0x0;
        local_70 = piVar5[4];
        lVar7 = (longlong)local_70;
        _Src = *(void **)(piVar5 + 2);
        if (lVar7 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_70,0);
          memcpy(local_78,_Src,lVar7 * 2);
        }
        local_68 = 0;
        local_60 = 0;
        FUN_14482e566(&local_78);
        local_c0 = local_60 + local_68;
        local_c8 = local_68;
        bifrost::telemetry::rowBuilder::vString(param_2);
        if (local_68 != 0) {
          FUN_1400020a8();
          local_68 = 0;
          local_60 = 0;
        }
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_a8 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      piVar5 = piVar5 + 6;
    } while (piVar5 != piVar1);
    uVar6 = (int)uStack_80;
  }
  FUN_1416b2ca8(local_88,uVar6);
  if (local_88 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeb9b4 FUN_143eeb9b4 body=1129 status=ok
// SIG undefined FUN_143eeb9b4(void)

void FUN_143eeb9b4(undefined8 *param_1,rowBuilder *param_2)

{
  double dVar1;
  double dVar2;
  void *pvVar3;
  double *pdVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_f8 [32];
  void *local_d8;
  int local_d0;
  void *local_c8;
  ulonglong local_c0;
  void *local_b8;
  ulonglong uStack_b0;
  void *local_a0;
  int local_98;
  undefined4 local_94;
  void *local_90;
  int local_88;
  longlong local_80;
  longlong local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (((*(int *)(param_1 + 6) != 0 || *(int *)((longlong)param_1 + 0x2c) != 0) ||
      *(int *)((longlong)param_1 + 0x34) != 0) || *(int *)(param_1 + 7) != 0) {
    bifrost::telemetry::rowBuilder::key(param_2,"gbx_env_guid");
    local_b8 = (void *)0x0;
    uStack_b0 = 0;
    FUN_1407c869a((longlong)param_1 + 0x2c,&local_b8,0);
    pvVar3 = local_b8;
    local_a0 = (void *)0x0;
    lVar5 = (longlong)(int)uStack_b0;
    local_98 = (int)uStack_b0;
    if (lVar5 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,uStack_b0 & 0xffffffff,0);
      memcpy(local_a0,pvVar3,lVar5 * 2);
    }
    local_90 = (void *)0x0;
    local_88 = 0;
    FUN_14482e566(&local_a0);
    local_78 = (longlong)local_88 + (longlong)local_90;
    local_80 = (longlong)local_90;
    bifrost::telemetry::rowBuilder::vString(param_2);
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
      local_90 = (void *)0x0;
      local_88 = 0;
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_b8 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  bifrost::telemetry::rowBuilder::key(param_2,"map_name");
  FUN_141090858(&local_c8,*param_1,1);
  pvVar3 = local_c8;
  local_a0 = (void *)0x0;
  lVar5 = (longlong)(int)local_c0;
  local_98 = (int)local_c0;
  if (lVar5 == 0) {
    local_94 = 0;
  }
  else {
    FUN_1446dd670(&local_a0,local_c0 & 0xffffffff,0);
    memcpy(local_a0,pvVar3,lVar5 * 2);
  }
  local_90 = (void *)0x0;
  local_88 = 0;
  FUN_14482e566(&local_a0);
  uStack_b0 = (longlong)local_88 + (longlong)local_90;
  local_b8 = local_90;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
    local_90 = (void *)0x0;
    local_88 = 0;
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_c8 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"frame_ms_min");
  bifrost::telemetry::rowBuilder::vFloat(param_2,*(float *)(param_1 + 1));
  bifrost::telemetry::rowBuilder::key(param_2,"frame_ms_max");
  bifrost::telemetry::rowBuilder::vFloat(param_2,*(float *)((longlong)param_1 + 0xc));
  bifrost::telemetry::rowBuilder::key(param_2,"frame_ms_avg");
  bifrost::telemetry::rowBuilder::vFloat(param_2,*(float *)(param_1 + 2));
  if (param_1[3] != 0) {
    lVar5 = *(longlong *)(param_1[3] + 0x1c8);
    if (lVar5 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      uVar6 = (undefined4)DAT_14c8464f0;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
      pdVar4 = (double *)(lVar5 + 0x260);
    }
    dVar1 = *pdVar4;
    dVar2 = pdVar4[1];
    bifrost::telemetry::rowBuilder::key(param_2,"position_x");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)dVar1);
    bifrost::telemetry::rowBuilder::key(param_2,"position_y");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)dVar2);
    bifrost::telemetry::rowBuilder::key(param_2,"position_z");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)(double)CONCAT44(uVar7,uVar6));
  }
  if (param_1[4] != 0) {
    bifrost::telemetry::rowBuilder::key(param_2,"server_address");
    (**(code **)(*(longlong *)param_1[4] + 0x2c0))((longlong *)param_1[4],&local_d8,0);
    pvVar3 = local_d8;
    local_a0 = (void *)0x0;
    local_98 = local_d0;
    if ((longlong)local_d0 == 0) {
      local_94 = 0;
    }
    else {
      FUN_1446dd670(&local_a0,local_d0,0);
      memcpy(local_a0,pvVar3,(longlong)local_d0 * 2);
    }
    local_90 = (void *)0x0;
    local_88 = 0;
    FUN_14482e566(&local_a0);
    local_c0 = (longlong)local_88 + (longlong)local_90;
    local_c8 = local_90;
    bifrost::telemetry::rowBuilder::vIp(param_2);
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
      local_90 = (void *)0x0;
      local_88 = 0;
    }
    if (local_a0 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_d8 != (void *)0x0) {
      FUN_1400020a8();
    }
    bifrost::telemetry::rowBuilder::key(param_2,"last_ping_ms");
    bifrost::telemetry::rowBuilder::vInt(param_2,(int)*(float *)(param_1 + 5));
    bifrost::telemetry::rowBuilder::key(param_2,"average_ping_ms");
    bifrost::telemetry::rowBuilder::vInt(param_2,(int)*(float *)(param_1[4] + 0x47c));
  }
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eebe1e FUN_143eebe1e body=2254 status=ok
// SIG undefined FUN_143eebe1e(void)

void FUN_143eebe1e(undefined8 param_1,rowBuilder *param_2)

{
  void *pvVar1;
  int iVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  void *local_178;
  longlong local_170;
  void *local_168;
  int local_160;
  void *local_158;
  longlong local_150;
  void *local_148;
  longlong lStack_140;
  longlong local_138;
  longlong local_130;
  void *local_128;
  int iStack_120;
  int iStack_11c;
  void *local_118;
  int iStack_110;
  undefined4 uStack_10c;
  undefined1 local_108 [16];
  undefined1 local_f8 [16];
  longlong local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  void *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  int local_98;
  undefined4 uStack_94;
  int local_90;
  void *local_78;
  int local_70;
  ulonglong local_48;
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  bifrost::telemetry::rowBuilder::key(param_2,"executable_bit_count");
  bifrost::telemetry::rowBuilder::vInt(param_2,0x40);
  bifrost::telemetry::rowBuilder::key(param_2,"startup_params");
  FUN_1463e2d12(&local_128);
  pvVar1 = local_128;
  local_b0 = (void *)0x0;
  local_a8 = iStack_120;
  if ((longlong)iStack_120 == 0) {
    uStack_a4 = 0;
  }
  else {
    FUN_1446dd670(&local_b0,iStack_120,0);
    memcpy(local_b0,pvVar1,(longlong)iStack_120 * 2);
  }
  local_a0 = 0;
  local_98 = 0;
  FUN_14482e566(&local_b0);
  local_40 = (longlong)local_98 + local_a0;
  local_48 = local_a0;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_a0 != 0) {
    FUN_1400020a8();
    local_a0 = 0;
    local_98 = 0;
  }
  if (local_b0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_1461924c8(&local_128);
  FUN_142797d18(&local_b0,&local_128,1);
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"gr_device");
  local_128 = (void *)0x0;
  lVar3 = (longlong)(int)local_a0;
  pvVar1 = (void *)CONCAT44(uStack_a4,local_a8);
  iStack_120 = (int)local_a0;
  if (lVar3 == 0) {
    iStack_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,local_a0 & 0xffffffff,0);
    memcpy(local_128,pvVar1,lVar3 * 2);
  }
  local_118 = (void *)0x0;
  iStack_110 = 0;
  FUN_14482e566(&local_128);
  local_b8 = (longlong)iStack_110 + (longlong)local_118;
  local_c0 = (longlong)local_118;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    local_118 = (void *)0x0;
    iStack_110 = 0;
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"gr_vendor");
  local_128 = (void *)0x0;
  pvVar1 = (void *)CONCAT44(uStack_94,local_98);
  iStack_120 = local_90;
  if ((longlong)local_90 == 0) {
    iStack_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,local_90,0);
    memcpy(local_128,pvVar1,(longlong)local_90 * 2);
  }
  local_118 = (void *)0x0;
  iStack_110 = 0;
  FUN_14482e566(&local_128);
  local_c8 = (longlong)iStack_110 + (longlong)local_118;
  local_d0 = (longlong)local_118;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    local_118 = (void *)0x0;
    iStack_110 = 0;
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"gr_driver_version");
  local_128 = (void *)0x0;
  iStack_120 = local_70;
  if ((longlong)local_70 == 0) {
    iStack_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,local_70,0);
    memcpy(local_128,local_78,(longlong)local_70 * 2);
  }
  local_118 = (void *)0x0;
  iStack_110 = 0;
  FUN_14482e566(&local_128);
  local_d8 = (longlong)iStack_110 + (longlong)local_118;
  local_e0 = (longlong)local_118;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    local_118 = (void *)0x0;
    iStack_110 = 0;
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (DAT_14ca83900 != (longlong *)0x0) {
    local_118 = (void *)0xffffffffffffffff;
    iStack_110 = -1;
    uStack_10c = 0xffffffff;
    local_128 = (void *)0xffffffffffffffff;
    iStack_120 = -1;
    iStack_11c = -1;
    local_108 = (undefined1  [16])0x0;
    local_f8 = (undefined1  [16])0x0;
    (**(code **)(*DAT_14ca83900 + 400))(DAT_14ca83900,&local_128);
    if (((-1 < (longlong)local_128) && (-1 < iStack_11c)) && (-1 < (longlong)local_118)) {
      bifrost::telemetry::rowBuilder::key(param_2,"gr_memory_capacity_mbs");
      bifrost::telemetry::rowBuilder::vInt
                (param_2,(int)((float)(longlong)local_128 * 0.0009765625 * 0.0009765625));
    }
  }
  bifrost::telemetry::rowBuilder::key(param_2,"cpu_count");
  iVar2 = FUN_140e55850();
  bifrost::telemetry::rowBuilder::vInt(param_2,iVar2);
  bifrost::telemetry::rowBuilder::key(param_2,"cpu_speed_mhz");
  iVar2 = FUN_145dca0fe();
  bifrost::telemetry::rowBuilder::vInt(param_2,iVar2);
  bifrost::telemetry::rowBuilder::key(param_2,"cpu_signature");
  FUN_1400b22c2(&local_148,&DAT_14c8c27d7);
  FUN_140ded312(&local_148);
  iStack_120 = (int)lStack_140;
  pvVar1 = local_148;
  lVar3 = (longlong)(int)lStack_140;
  local_148 = (void *)0x0;
  lStack_140 = 0;
  local_128 = (void *)0x0;
  if (lVar3 == 0) {
    iStack_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,iStack_120,0);
    memcpy(local_128,pvVar1,lVar3 * 2);
  }
  local_118 = (void *)0x0;
  iStack_110 = 0;
  FUN_14482e566(&local_128);
  local_130 = (longlong)iStack_110 + (longlong)local_118;
  local_138 = (longlong)local_118;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    local_118 = (void *)0x0;
    iStack_110 = 0;
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvVar1 != (void *)0x0) {
    FUN_1400020a8(pvVar1);
  }
  if (local_148 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"cpu_vendor");
  FUN_1400b22c2(&local_158,&DAT_14c8c27ca);
  pvVar1 = local_158;
  local_128 = (void *)0x0;
  iStack_120 = (int)local_150;
  if ((longlong)(int)local_150 == 0) {
    iStack_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,(int)local_150,0);
    memcpy(local_128,pvVar1,(longlong)(int)local_150 * 2);
  }
  local_118 = (void *)0x0;
  iStack_110 = 0;
  FUN_14482e566(&local_128);
  lStack_140 = (longlong)iStack_110 + (longlong)local_118;
  local_148 = local_118;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    local_118 = (void *)0x0;
    iStack_110 = 0;
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_158 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"os_version");
  FUN_145c581ca(&local_168);
  pvVar1 = local_168;
  local_128 = (void *)0x0;
  lVar3 = (longlong)local_160;
  iStack_120 = local_160;
  if (lVar3 == 0) {
    iStack_11c = 0;
  }
  else {
    FUN_1446dd670(&local_128,local_160,0);
    memcpy(local_128,pvVar1,lVar3 * 2);
  }
  local_118 = (void *)0x0;
  iStack_110 = 0;
  FUN_14482e566(&local_128);
  local_150 = (longlong)iStack_110 + (longlong)local_118;
  local_158 = local_118;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
    local_118 = (void *)0x0;
    iStack_110 = 0;
  }
  if (local_128 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  bifrost::telemetry::rowBuilder::key(param_2,"os_bit_count");
  bifrost::telemetry::rowBuilder::vInt(param_2,0x40);
  bifrost::telemetry::rowBuilder::key(param_2,"mem_capacity_gbs");
  lVar3 = FUN_14016c8d4();
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(lVar3 + 0x40));
  FUN_1400b22c2(&local_168,&DAT_149e02088);
  if (1 < local_160) {
    bifrost::telemetry::rowBuilder::key(param_2,"hardware_model");
    pvVar1 = local_168;
    local_128 = (void *)0x0;
    iStack_120 = local_160;
    if ((longlong)local_160 == 0) {
      iStack_11c = 0;
    }
    else {
      FUN_1446dd670(&local_128,local_160,0);
      memcpy(local_128,pvVar1,(longlong)local_160 * 2);
    }
    local_118 = (void *)0x0;
    iStack_110 = 0;
    FUN_14482e566(&local_128);
    local_170 = (longlong)iStack_110 + (longlong)local_118;
    local_178 = local_118;
    bifrost::telemetry::rowBuilder::vString(param_2);
    if (local_118 != (void *)0x0) {
      FUN_1400020a8();
      local_118 = (void *)0x0;
      iStack_110 = 0;
    }
    if (local_128 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  if (local_168 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_14626e2bc(&local_b0);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eec6ee FUN_143eec6ee body=499 status=ok
// SIG undefined FUN_143eec6ee(void)

void FUN_143eec6ee(longlong param_1,rowBuilder *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_78 [40];
  undefined *local_50;
  undefined *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bifrost::telemetry::rowBuilder::key(param_2,"auto_detect");
  bifrost::telemetry::rowBuilder::vBool(param_2,*(bool *)param_1);
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0x88);
  iVar2 = *(int *)(*(longlong *)(param_1 + 8) + 0x8c);
  bifrost::telemetry::rowBuilder::key(param_2,"resolution_x");
  bifrost::telemetry::rowBuilder::vInt(param_2,iVar1);
  bifrost::telemetry::rowBuilder::key(param_2,"resolution_y");
  bifrost::telemetry::rowBuilder::vInt(param_2,iVar2);
  bifrost::telemetry::rowBuilder::key(param_2,"shader_quality");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x58));
  bifrost::telemetry::rowBuilder::key(param_2,"texture_quality");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x4c));
  bifrost::telemetry::rowBuilder::key(param_2,"view_distance");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x34));
  bifrost::telemetry::rowBuilder::key(param_2,"shadow_quality");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x3c));
  bifrost::telemetry::rowBuilder::key(param_2,"aa_quality");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x38));
  bifrost::telemetry::rowBuilder::key(param_2,"pp_quality");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x48));
  bifrost::telemetry::rowBuilder::key(param_2,"foliage_quality");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(*(longlong *)(param_1 + 8) + 0x54));
  bifrost::telemetry::rowBuilder::key(param_2,"hdr");
  bifrost::telemetry::rowBuilder::vBool(param_2,*(bool *)(*(longlong *)(param_1 + 8) + 0x10c));
  bifrost::telemetry::rowBuilder::key(param_2,"vertical_sync");
  bifrost::telemetry::rowBuilder::vBool(param_2,*(bool *)(*(longlong *)(param_1 + 8) + 0x28));
  iVar1 = *(int *)(*(longlong *)(param_1 + 8) + 0xa0);
  iVar2 = (iVar1 != 1) + 1;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  iVar1 = *(int *)(&DAT_14b4d9dc8 + (uint)(iVar2 << 2));
  iVar2 = *(int *)(&DAT_14b4d9dd4 + (uint)(iVar2 << 2));
  bifrost::telemetry::rowBuilder::key(param_2,"windowed_mode");
  local_50 = &DAT_14b4d9dc8 + iVar1;
  local_48 = &DAT_14b4d9dd4 + iVar2;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eec8ee FUN_143eec8ee body=767 status=ok
// SIG undefined FUN_143eec8ee(void)

void FUN_143eec8ee(undefined8 *param_1,rowBuilder *param_2)

{
  double dVar1;
  double dVar2;
  void *pvVar3;
  double *pdVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_d8 [40];
  void *local_b0;
  int local_a8;
  void *local_a0;
  ulonglong local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  void *local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bifrost::telemetry::rowBuilder::key(param_2,"map_name");
  FUN_141090858(&local_a0,*param_1,1);
  pvVar3 = local_a0;
  local_90 = (void *)0x0;
  lVar5 = (longlong)(int)local_98;
  local_88 = (int)local_98;
  if (lVar5 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_98 & 0xffffffff,0);
    memcpy(local_90,pvVar3,lVar5 * 2);
  }
  local_80 = (void *)0x0;
  local_78 = 0;
  FUN_14482e566(&local_90);
  local_68 = (longlong)local_78 + (longlong)local_80;
  local_70 = local_80;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
    local_80 = (void *)0x0;
    local_78 = 0;
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    lVar5 = *(longlong *)(param_1[1] + 0x1c8);
    if (lVar5 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      uVar6 = (undefined4)DAT_14c8464f0;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
      pdVar4 = (double *)(lVar5 + 0x260);
    }
    dVar1 = *pdVar4;
    dVar2 = pdVar4[1];
    bifrost::telemetry::rowBuilder::key(param_2,"position_x");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)dVar1);
    bifrost::telemetry::rowBuilder::key(param_2,"position_y");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)dVar2);
    bifrost::telemetry::rowBuilder::key(param_2,"position_z");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)(double)CONCAT44(uVar7,uVar6));
  }
  if (param_1[2] != 0) {
    bifrost::telemetry::rowBuilder::key(param_2,"server_address");
    (**(code **)(*(longlong *)param_1[2] + 0x2c0))((longlong *)param_1[2],&local_b0,0);
    pvVar3 = local_b0;
    local_90 = (void *)0x0;
    local_88 = local_a8;
    if ((longlong)local_a8 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_a8,0);
      memcpy(local_90,pvVar3,(longlong)local_a8 * 2);
    }
    local_80 = (void *)0x0;
    local_78 = 0;
    FUN_14482e566(&local_90);
    local_98 = (longlong)local_78 + (longlong)local_80;
    local_a0 = local_80;
    bifrost::telemetry::rowBuilder::vIp(param_2);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
      local_80 = (void *)0x0;
      local_78 = 0;
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  bifrost::telemetry::rowBuilder::key(param_2,"load_time_ms");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(param_1 + 3));
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eecbee FUN_143eecbee body=767 status=ok
// SIG undefined FUN_143eecbee(void)

void FUN_143eecbee(undefined8 *param_1,rowBuilder *param_2)

{
  double dVar1;
  double dVar2;
  void *pvVar3;
  double *pdVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 auStack_d8 [40];
  void *local_b0;
  int local_a8;
  void *local_a0;
  ulonglong local_98;
  void *local_90;
  int local_88;
  undefined4 local_84;
  void *local_80;
  int local_78;
  void *local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  bifrost::telemetry::rowBuilder::key(param_2,"map_name");
  FUN_141090858(&local_a0,*param_1,1);
  pvVar3 = local_a0;
  local_90 = (void *)0x0;
  lVar5 = (longlong)(int)local_98;
  local_88 = (int)local_98;
  if (lVar5 == 0) {
    local_84 = 0;
  }
  else {
    FUN_1446dd670(&local_90,local_98 & 0xffffffff,0);
    memcpy(local_90,pvVar3,lVar5 * 2);
  }
  local_80 = (void *)0x0;
  local_78 = 0;
  FUN_14482e566(&local_90);
  local_68 = (longlong)local_78 + (longlong)local_80;
  local_70 = local_80;
  bifrost::telemetry::rowBuilder::vString(param_2);
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
    local_80 = (void *)0x0;
    local_78 = 0;
  }
  if (local_90 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_a0 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    lVar5 = *(longlong *)(param_1[1] + 0x1c8);
    if (lVar5 == 0) {
      pdVar4 = (double *)&DAT_14c8464e0;
      uVar6 = (undefined4)DAT_14c8464f0;
      uVar7 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar5 + 0x270);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar5 + 0x270) >> 0x20);
      pdVar4 = (double *)(lVar5 + 0x260);
    }
    dVar1 = *pdVar4;
    dVar2 = pdVar4[1];
    bifrost::telemetry::rowBuilder::key(param_2,"position_x");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)dVar1);
    bifrost::telemetry::rowBuilder::key(param_2,"position_y");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)dVar2);
    bifrost::telemetry::rowBuilder::key(param_2,"position_z");
    bifrost::telemetry::rowBuilder::vFloat(param_2,(float)(double)CONCAT44(uVar7,uVar6));
  }
  if (param_1[2] != 0) {
    bifrost::telemetry::rowBuilder::key(param_2,"server_address");
    (**(code **)(*(longlong *)param_1[2] + 0x2c0))((longlong *)param_1[2],&local_b0,0);
    pvVar3 = local_b0;
    local_90 = (void *)0x0;
    local_88 = local_a8;
    if ((longlong)local_a8 == 0) {
      local_84 = 0;
    }
    else {
      FUN_1446dd670(&local_90,local_a8,0);
      memcpy(local_90,pvVar3,(longlong)local_a8 * 2);
    }
    local_80 = (void *)0x0;
    local_78 = 0;
    FUN_14482e566(&local_90);
    local_98 = (longlong)local_78 + (longlong)local_80;
    local_a0 = local_80;
    bifrost::telemetry::rowBuilder::vIp(param_2);
    if (local_80 != (void *)0x0) {
      FUN_1400020a8();
      local_80 = (void *)0x0;
      local_78 = 0;
    }
    if (local_90 != (void *)0x0) {
      FUN_1400020a8();
    }
    if (local_b0 != (void *)0x0) {
      FUN_1400020a8();
    }
  }
  bifrost::telemetry::rowBuilder::key(param_2,"loaded_time_ms");
  bifrost::telemetry::rowBuilder::vInt(param_2,*(int *)(param_1 + 3));
  if ((local_60 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeceee FUN_143eeceee body=67 status=ok
// SIG undefined FUN_143eeceee(void)

void FUN_143eeceee(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  piVar1 = (int *)*param_1;
  iVar2 = atoi((char *)*param_2);
  if (*piVar1 != iVar2) {
    iVar3 = -1;
    if (iVar2 >= 0) {
      iVar3 = iVar2;
    }
    *piVar1 = iVar3;
    if (iVar2 < 0) {
      fVar4 = -1.0;
    }
    else {
      fVar4 = (float)iVar3;
    }
    piVar1[1] = (int)fVar4;
    *(undefined1 *)(piVar1 + 2) = 1;
  }
  return;
}



// FUNCTION 143eecf36 FUN_143eecf36 body=29 status=ok
// SIG undefined FUN_143eecf36(void)

undefined8 FUN_143eecf36(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eecf68 FUN_143eecf68 body=93 status=ok
// SIG undefined FUN_143eecf68(void)

void FUN_143eecf68(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eecfc6 FUN_143eecfc6 body=93 status=ok
// SIG undefined FUN_143eecfc6(void)

void FUN_143eecfc6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d9260;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eed024 FUN_143eed024 body=126 status=ok
// SIG undefined FUN_143eed024(void)

void FUN_143eed024(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d9260;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eed093. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eed0ac FUN_143eed0ac body=20 status=ok
// SIG undefined FUN_143eed0ac(void)

undefined1 FUN_143eed0ac(longlong param_1)

{
  FUN_143eed0c0(param_1 + 0x18);
  return 1;
}



// FUNCTION 143eed0c0 FUN_143eed0c0 body=244 status=ok
// SIG undefined FUN_143eed0c0(void)

void FUN_143eed0c0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_1;
  local_30 = "Shift";
  local_28 = 5;
  local_24 = 0;
  uVar3 = FUN_14001a6c0(&local_30,1);
  plVar5 = (longlong *)FUN_1447c1074(uVar3);
  if (plVar5 != (longlong *)0x0) {
    lVar6 = (**(code **)(*plVar5 + 0x50))(plVar5);
    if (lVar6 == 0) {
      *(undefined4 *)(lVar2 + 0x14) = 0;
      iVar4 = 0;
    }
    else {
      uVar1 = *(uint *)(lVar6 + 0xc);
      *(uint *)(lVar2 + 0x14) = uVar1;
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
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar7);
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
    *(int *)(lVar2 + 0x18) = iVar4;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eed1b6 FUN_143eed1b6 body=29 status=ok
// SIG undefined FUN_143eed1b6(void)

undefined8 FUN_143eed1b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143eed1e8 FUN_143eed1e8 body=93 status=ok
// SIG undefined FUN_143eed1e8(void)

void FUN_143eed1e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d92d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eed246 FUN_143eed246 body=93 status=ok
// SIG undefined FUN_143eed246(void)

void FUN_143eed246(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4d92d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143eed2a4 FUN_143eed2a4 body=126 status=ok
// SIG undefined FUN_143eed2a4(void)

void FUN_143eed2a4(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_FUN_14b4d92d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143eed313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143eed34c FUN_143eed34c body=389 status=ok
// SIG undefined FUN_143eed34c(void)

void FUN_143eed34c(longlong *param_1,rowBuilder *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong *local_90;
  rowBuilder *local_88;
  longlong **local_80;
  longlong *local_78;
  rowBuilder *local_70;
  longlong local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  rowBuilder *local_50;
  undefined1 local_42;
  undefined1 local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60 = &local_41;
  local_41 = 0;
  local_98 = &local_42;
  local_42 = 0;
  local_68 = param_1[1];
  local_90 = &local_68;
  local_80 = &local_78;
  local_88 = param_2;
  local_78 = local_90;
  local_70 = param_2;
  local_58 = local_98;
  local_50 = param_2;
  FUN_148a5ce38(param_1[2],*(undefined4 *)(*param_1 + 8));
  lVar3 = (longlong)(int)((longlong *)*param_1)[1];
  if (lVar3 != 0) {
    lVar4 = *(longlong *)*param_1;
    lVar3 = lVar3 * 0x38;
    do {
      if (*(char *)(lVar4 + 8) == '\0') {
        plVar2 = (longlong *)param_1[2];
        iVar1 = (int)plVar2[1];
        *(uint *)(plVar2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)plVar2 + 0xc) < iVar1 + 1U) {
          FUN_148a5cec2(plVar2,iVar1);
        }
        *(longlong *)(*plVar2 + (longlong)iVar1 * 8) = lVar4;
      }
      else {
        FUN_143eed4d2(&local_98,lVar4);
      }
      lVar4 = lVar4 + 0x38;
      lVar3 = lVar3 + -0x38;
    } while (lVar3 != 0);
  }
  if (*(int *)(param_1[2] + 8) != 0) {
    local_41 = 1;
    bifrost::telemetry::rowBuilder::key(param_2,"metric_values");
    bifrost::telemetry::rowBuilder::vBeginArray(param_2);
    lVar3 = (longlong)(int)((longlong *)param_1[2])[1];
    if (lVar3 != 0) {
      lVar4 = *(longlong *)param_1[2];
      lVar5 = 0;
      do {
        bifrost::telemetry::rowBuilder::vBeginObject(param_2);
        FUN_143eed4d2(&local_98,*(undefined8 *)(lVar4 + lVar5));
        bifrost::telemetry::rowBuilder::vEndObject(param_2);
        lVar5 = lVar5 + 8;
      } while (lVar3 * 8 != lVar5);
    }
    bifrost::telemetry::rowBuilder::vEndArray(param_2);
  }
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eed4d2 FUN_143eed4d2 body=690 status=ok
// SIG undefined FUN_143eed4d2(void)

void FUN_143eed4d2(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  rowBuilder *prVar2;
  void *_Src;
  longlong lVar3;
  undefined1 auStack_98 [40];
  void *local_70;
  int local_68;
  undefined4 local_64;
  longlong local_60;
  int local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined1 *)*param_1 = 0;
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    local_70 = (void *)*param_2;
    FUN_143eed7da(param_1[1],&local_70,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  case 1:
    local_70 = (void *)*param_2;
    FUN_143eed7da(param_1[1],&local_70,0);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  case 2:
    local_70 = (void *)*param_2;
    FUN_143eed7da(param_1[1],&local_70,0);
    prVar2 = (rowBuilder *)param_1[2];
    local_70 = (void *)0x0;
    local_68 = *(int *)(param_2 + 3);
    lVar3 = (longlong)local_68;
    _Src = (void *)param_2[2];
    if (lVar3 == 0) {
      local_64 = 0;
    }
    else {
      FUN_1446dd670(&local_70,local_68,0);
      memcpy(local_70,_Src,lVar3 * 2);
    }
    local_60 = 0;
    local_58 = 0;
    FUN_14482e566(&local_70);
    local_48 = local_58 + local_60;
    local_50 = local_60;
    bifrost::telemetry::rowBuilder::vString(prVar2);
    if (local_60 != 0) {
      FUN_1400020a8();
      local_60 = 0;
      local_58 = 0;
    }
    if (local_70 != (void *)0x0) {
      FUN_1400020a8();
    }
    break;
  case 3:
    puVar1 = (undefined8 *)param_1[3];
    local_70 = (void *)*param_2;
    FUN_143eed7da(*puVar1,&local_70,&DAT_14b4d9526);
    bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)puVar1[1],(double)param_2[2]);
    FUN_143eed7da(*puVar1,&local_70,&DAT_14b4d952c);
    bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)puVar1[1],(double)param_2[3]);
    FUN_143eed7da(*puVar1,&local_70,&DAT_14b4d9532);
    bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)puVar1[1],(double)param_2[4]);
    break;
  case 4:
    puVar1 = (undefined8 *)param_1[3];
    local_70 = (void *)*param_2;
    FUN_143eed7da(*puVar1,&local_70,&DAT_14b4d9526);
    bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)puVar1[1],(double)param_2[2]);
    FUN_143eed7da(*puVar1,&local_70,&DAT_14b4d952c);
    bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)puVar1[1],(double)param_2[3]);
    FUN_143eed7da(*puVar1,&local_70,&DAT_14b4d9532);
    bifrost::telemetry::rowBuilder::vDouble((rowBuilder *)puVar1[1],(double)param_2[4]);
    local_70 = (void *)*param_2;
    FUN_143eed7da(param_1[1],&local_70,&DAT_14b4d9506);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_98);
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eed7da FUN_143eed7da body=299 status=ok
// SIG undefined FUN_143eed7da(void)

void FUN_143eed7da(longlong param_1,undefined8 *param_2)

{
  rowBuilder *prVar1;
  char *pcVar2;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48 [2];
  longlong local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_143eeafba(local_48,*param_2);
  if (**(char **)(param_1 + 8) == '\x01') {
    pcVar2 = *(char **)(param_1 + 0x10);
    if (*pcVar2 == '\x01') {
      bifrost::telemetry::rowBuilder::vEndObject(*(rowBuilder **)(param_1 + 0x18));
      bifrost::telemetry::rowBuilder::vBeginObject(*(rowBuilder **)(param_1 + 0x18));
      pcVar2 = *(char **)(param_1 + 0x10);
    }
    *pcVar2 = '\x01';
    bifrost::telemetry::rowBuilder::key(*(rowBuilder **)(param_1 + 0x18),"metric_name");
    prVar1 = *(rowBuilder **)(param_1 + 0x18);
    FUN_14482e566(local_48);
    local_50 = local_30 + local_38;
    local_58 = local_38;
    bifrost::telemetry::rowBuilder::vString(prVar1);
    bifrost::telemetry::rowBuilder::key(*(rowBuilder **)(param_1 + 0x18),"metric_value");
  }
  else {
    prVar1 = *(rowBuilder **)(param_1 + 0x18);
    FUN_14482e566(local_48);
    local_60 = local_30 + local_38;
    local_68 = local_38;
    bifrost::telemetry::rowBuilder::key(prVar1);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
    local_38 = 0;
    local_30 = 0;
  }
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eed906 FUN_143eed906 body=624 status=ok
// SIG undefined FUN_143eed906(void)

void FUN_143eed906(void)

{
  FUN_14282b410(L"/Script/Shift",&PTR_FUN_14b4d0700,1,0,0,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d07b0,1,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d0890,1,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d09d0,1,&PTR_FUN_14b4d09b0,1);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d0df0,2,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d0fe0,1,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d1ff0,5,&PTR_FUN_14b4d1fd0,1);
  FUN_14282b410(L"/Script/Shift",&PTR_FUN_14b4d3c40,3,&PTR_FUN_14b4d3bc0,3,&PTR_FUN_14b4d3ba0,1);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d42b0,2,&PTR_FUN_14b4d4270,2);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d4660,2,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d48a0,1,0,0);
  FUN_14282b410(L"/Script/Shift",&PTR_FUN_14b4d4ca0,1,0,0,0,0);
  FUN_14282b410(L"/Script/Shift",&PTR_FUN_14b4d5270,1,0,0,0,0);
  FUN_14282b410(L"/Script/Shift",&PTR_FUN_14b4d5430,1,0,0,0,0);
  FUN_14282b410(L"/Script/Shift",0,0,&PTR_FUN_14b4d6340,5,&PTR_FUN_14b4d62a0,5);
  FUN_1446f470e(&DAT_14cb96648,L"UNSET",1);
  return;
}



// FUNCTION 143eedb78 FUN_143eedb78 body=49 status=ok
// SIG undefined FUN_143eedb78(void)

void FUN_143eedb78(void)

{
  FUN_144760e21(DAT_14cb966c0,DAT_14cb966c8);
  if (DAT_14cb966c0 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143eedba9 FUN_143eedba9 body=849 status=ok
// SIG undefined FUN_143eedba9(void)

longlong * FUN_143eedba9(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar1 = param_1 + 2;
  local_a0 = param_1 + 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  lVar11 = *param_2;
  lVar12 = param_2[1];
  uVar8 = (lVar12 - lVar11 >> 3) * 0x6db6db6db6db6db7;
  if (-1 < (int)uVar8) {
    if ((int)uVar8 != 0) {
      FUN_148a63924(param_1);
      lVar11 = *param_2;
      lVar12 = param_2[1];
    }
    if (lVar11 != lVar12) {
      do {
        FUN_148a5d4ca(&local_98,lVar11);
        iVar2 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar2 + 1U) {
          FUN_148a63988(param_1,iVar2);
        }
        lVar3 = *param_1;
        lVar7 = (longlong)iVar2 * 0x38;
        *(undefined8 *)(lVar3 + lVar7) = 0;
        *(undefined8 *)(lVar3 + lVar7) = local_98;
        local_98 = 0;
        *(undefined4 *)(lVar3 + 8 + lVar7) = (undefined4)local_90;
        *(undefined4 *)(lVar3 + 0xc + lVar7) = local_90._4_4_;
        local_90 = 0;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
        *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_88;
        local_88 = 0;
        *(undefined4 *)(lVar3 + 0x18 + lVar7) = (undefined4)local_80;
        *(undefined4 *)(lVar3 + 0x1c + lVar7) = local_80._4_4_;
        local_80 = 0;
        *(undefined8 *)(lVar3 + 0x20 + lVar7) = 0;
        *(undefined8 *)(lVar3 + 0x20 + lVar7) = local_78;
        local_78 = 0;
        *(undefined4 *)(lVar3 + 0x28 + lVar7) = (undefined4)local_70;
        *(undefined4 *)(lVar3 + 0x2c + lVar7) = local_70._4_4_;
        local_70 = 0;
        *(undefined8 *)(lVar3 + 0x30 + lVar7) = local_68;
        FUN_148a5d690(&local_98);
        lVar11 = lVar11 + 0x38;
      } while (lVar11 != lVar12);
    }
    lVar11 = param_2[2];
    lVar12 = param_2[3];
    uVar8 = (ulonglong)(lVar12 - lVar11) >> 6;
    if (-1 < (int)uVar8) {
      if (*(int *)((longlong)param_1 + 0x1c) < (int)uVar8) {
        FUN_148a63a18(plVar1);
        lVar11 = param_2[2];
        lVar12 = param_2[3];
      }
      if (lVar11 != lVar12) {
        do {
          FUN_148a5d6cd(&local_98,lVar11);
          iVar2 = (int)param_1[3];
          *(uint *)(param_1 + 3) = iVar2 + 1U;
          if (*(uint *)((longlong)param_1 + 0x1c) < iVar2 + 1U) {
            FUN_148a63a78(plVar1,iVar2);
          }
          lVar3 = *plVar1;
          lVar7 = (longlong)iVar2 * 0x40;
          *(undefined8 *)(lVar3 + lVar7) = 0;
          *(undefined8 *)(lVar3 + lVar7) = local_98;
          local_98 = 0;
          *(undefined4 *)(lVar3 + 8 + lVar7) = (undefined4)local_90;
          *(undefined4 *)(lVar3 + 0xc + lVar7) = local_90._4_4_;
          local_90 = 0;
          *(undefined8 *)(lVar3 + 0x10 + lVar7) = 0;
          *(undefined8 *)(lVar3 + 0x10 + lVar7) = local_88;
          local_88 = 0;
          *(undefined4 *)(lVar3 + 0x18 + lVar7) = (undefined4)local_80;
          *(undefined4 *)(lVar3 + 0x1c + lVar7) = local_80._4_4_;
          local_80 = 0;
          *(undefined8 *)(lVar3 + 0x20 + lVar7) = 0;
          *(undefined8 *)(lVar3 + 0x20 + lVar7) = local_78;
          local_78 = 0;
          *(undefined4 *)(lVar3 + 0x28 + lVar7) = (undefined4)local_70;
          *(undefined4 *)(lVar3 + 0x2c + lVar7) = local_70._4_4_;
          local_70 = 0;
          *(undefined8 *)(lVar3 + 0x30 + lVar7) = local_68;
          *(undefined8 *)(lVar3 + 0x38 + lVar7) = local_60;
          FUN_148a5d690(&local_98);
          lVar11 = lVar11 + 0x40;
        } while (lVar11 != lVar12);
      }
      puVar9 = (undefined4 *)param_2[4];
      puVar10 = (undefined4 *)param_2[5];
      uVar8 = (ulonglong)((longlong)puVar10 - (longlong)puVar9) >> 4;
      if (-1 < (int)uVar8) {
        if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar8) {
          FUN_143ef3820(local_a0);
          puVar9 = (undefined4 *)param_2[4];
          puVar10 = (undefined4 *)param_2[5];
        }
        if (puVar9 != puVar10) {
          do {
            local_58 = *puVar9;
            uStack_54 = puVar9[1];
            uStack_50 = puVar9[2];
            uStack_4c = puVar9[3];
            FUN_14152e0f7(&local_98,&local_58);
            uVar4 = local_98;
            uVar6 = local_90._4_4_;
            uVar5 = (undefined4)local_90;
            iVar2 = (int)param_1[5];
            *(uint *)(param_1 + 5) = iVar2 + 1U;
            if (*(uint *)((longlong)param_1 + 0x2c) < iVar2 + 1U) {
              FUN_143ef38f0(local_a0,iVar2);
            }
            lVar11 = *local_a0;
            lVar12 = (longlong)iVar2 * 0x10;
            *(undefined8 *)(lVar11 + lVar12) = uVar4;
            *(undefined4 *)(lVar11 + 8 + lVar12) = uVar5;
            *(undefined4 *)(lVar11 + 0xc + lVar12) = uVar6;
            puVar9 = puVar9 + 4;
          } while (puVar9 != puVar10);
        }
        if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
          return param_1;
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar8 & 0xffffffff);
}



// FUNCTION 143eedefc FUN_143eedefc body=194 status=ok
// SIG undefined FUN_143eedefc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_143eedefc(longlong param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_98 [32];
  undefined *local_78;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  puVar2 = *(undefined **)(param_1 + 0x220);
  if (puVar2 == (undefined *)0x0) {
    FUN_14657d4c2();
    puVar2 = &DAT_14cb966e0;
    *(undefined **)(param_1 + 0x220) = &DAT_14cb966e0;
    local_38 = FUN_143ef3b66;
    local_30 = &LAB_143ef3d44;
    local_28 = &LAB_143ef3d4c;
    local_20 = &DAT_143ef3d54;
    local_78 = &DAT_14cb966e0;
    bifrost::cross_save::setProgressDelegate(*(undefined8 *)(param_1 + 0x2b8));
    iVar1 = bifrost::cross_save::getUploadIntervalSeconds(*(User **)(param_1 + 0x2b8));
    _DAT_14cb966e0 = (float)iVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eedfbf FUN_143eedfbf body=105 status=ok
// SIG undefined FUN_143eedfbf(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eedfbf(void)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = DAT_14cb96758;
  if (DAT_14cb96758 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)DAT_14cb96758 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  _DAT_14cb96748 = 0;
  if (DAT_14cb96740 != 0) {
    FUN_1400020a8();
  }
  FUN_146172318();
  FUN_144760e21(DAT_14cb966e8,DAT_14cb966f0);
  if (DAT_14cb966e8 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143eee028 FUN_143eee028 body=263 status=ok
// SIG undefined FUN_143eee028(void)

void FUN_143eee028(longlong param_1,longlong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_3 == '\0') {
    local_48 = 0;
    uStack_40 = 0;
    FUN_143eee130(param_1,param_2);
  }
  if (param_2 == 0) {
    uVar5 = 0;
    uVar3 = 0;
  }
  else {
    uVar5 = *(uint *)(param_2 + 0xc);
    if ((int)uVar5 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    uVar3 = (ulonglong)*(uint *)(lVar6 + 0x10);
    if (*(uint *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar1 = DAT_14c964868 + 1;
      UNLOCK();
      uVar4 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar1;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar4);
      }
      LOCK();
      uVar2 = *(uint *)(lVar6 + 0x10);
      bVar7 = uVar2 == 0;
      if (bVar7) {
        *(uint *)(lVar6 + 0x10) = uVar4;
        uVar2 = 0;
      }
      UNLOCK();
      if (bVar7) {
        uVar2 = uVar4;
      }
      uVar3 = (ulonglong)uVar2;
    }
  }
  FUN_148a63b82(param_1 + 0x20,(ulonglong)uVar5 | uVar3 << 0x20);
  *(undefined8 *)(param_2 + 0x220) = 0;
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eee130 FUN_143eee130 body=1199 status=ok
// SIG undefined FUN_143eee130(void)

void FUN_143eee130(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  undefined8 *puVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  bool bVar15;
  undefined1 auStack_148 [32];
  longlong *local_128;
  ulonglong local_120;
  longlong local_118;
  longlong local_110;
  longlong *local_108;
  longlong local_100;
  longlong *local_f8;
  longlong *plStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [56];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if (param_2 == 0) {
    uVar12 = 0;
    uVar6 = 0;
  }
  else {
    uVar12 = *(uint *)(param_2 + 0xc);
    if ((int)uVar12 < DAT_14c9647dc) {
      lVar10 = (ulonglong)((uVar12 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar12 >> 0x10) * 8);
    }
    else {
      lVar10 = 0;
    }
    uVar6 = *(uint *)(lVar10 + 0x10);
    if (*(uint *)(lVar10 + 0x10) == 0) {
      LOCK();
      iVar5 = DAT_14c964868 + 1;
      UNLOCK();
      uVar9 = DAT_14c964868 + 1;
      bVar15 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar5;
      if (bVar15) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar9);
      }
      LOCK();
      uVar6 = *(uint *)(lVar10 + 0x10);
      bVar15 = uVar6 == 0;
      if (bVar15) {
        *(uint *)(lVar10 + 0x10) = uVar9;
        uVar6 = 0;
      }
      UNLOCK();
      if (bVar15) {
        uVar6 = uVar9;
      }
    }
  }
  local_f8 = (longlong *)CONCAT44(uVar6,uVar12);
  iVar5 = FUN_148a643b0((longlong *)(param_1 + 0x20),uVar6 ^ uVar12);
  if (iVar5 == -1) {
LAB_143eee1f1:
    if ((int)param_3[1] != 0) {
      plVar3 = (longlong *)*param_3;
      if (plVar3 == (longlong *)0x0) goto LAB_143eee242;
      (**(code **)(*plVar3 + 0x60))(plVar3,0);
    }
  }
  else {
    lVar10 = *(longlong *)(param_1 + 0x20);
    if ((lVar10 + (longlong)iVar5 * 0x20 + 8U & 0xfffffffffffffff7) == 0) goto LAB_143eee1f1;
    lVar10 = lVar10 + (longlong)iVar5 * 0x20;
    lVar11 = *(longlong *)(lVar10 + 8);
    iVar5 = *(int *)(lVar10 + 0x10);
    uVar13 = (ulonglong)iVar5;
    *(undefined8 *)(lVar10 + 8) = 0;
    *(undefined8 *)(lVar10 + 0x10) = 0;
    if (uVar13 == 0) {
      if (((int)param_3[1] != 0) && (plVar3 = (longlong *)*param_3, plVar3 != (longlong *)0x0)) {
        (**(code **)(*plVar3 + 0x60))(plVar3,0);
      }
    }
    else {
      local_110 = param_2;
      local_100 = param_1;
      if ((((int)param_3[1] == 0) || ((longlong *)*param_3 == (longlong *)0x0)) ||
         (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 == '\0')) {
        local_128 = (longlong *)0x0;
        local_108 = (longlong *)0x0;
      }
      else {
        local_108 = (longlong *)FUN_14001cc68(0x28,0x10);
        local_108[1] = (longlong)&DAT_100000001;
        *local_108 = (longlong)&PTR_FUN_14b4da4c0;
        local_128 = local_108 + 2;
        local_108[2] = 0;
        local_108[3] = 0;
        local_108[4] = 0;
        *(int *)((longlong)local_108 + 0x14) = iVar5;
        lVar10 = *param_3;
        *param_3 = 0;
        lVar14 = param_3[1];
        *(undefined4 *)(param_3 + 1) = 0;
        local_108[3] = lVar10;
        *(int *)(local_108 + 4) = (int)lVar14;
      }
      lVar14 = uVar13 * 0x38;
      lVar10 = lVar11;
      local_120 = uVar13;
      local_118 = lVar11;
      do {
        plVar3 = local_108;
        FUN_148a5e23e(local_98,lVar10);
        local_f8 = local_128;
        if (plVar3 != (longlong *)0x0) {
          *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
        }
        plStack_f0 = plVar3;
        FUN_148a5e23e(&local_e8,local_98);
        local_a8 = (undefined8 *)0x0;
        local_a0 = 0;
        FUN_1446efa72(&local_a8,0,6,0x10);
        local_a0 = 6;
        *local_a8 = &PTR_LAB_14b4da550;
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 1;
        lVar11 = DAT_14c758608 + 1;
        if (lVar8 == 0) {
          LOCK();
          UNLOCK();
          lVar8 = DAT_14c758608 + 2;
          lVar11 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar11;
        local_a8[2] = lVar8;
        *local_a8 = &PTR_FUN_14b4da4e0;
        local_a8[3] = local_f8;
        local_a8[4] = plStack_f0;
        local_f8 = (longlong *)0x0;
        plStack_f0 = (longlong *)0x0;
        local_a8[5] = local_e8;
        local_e8 = 0;
        *(undefined4 *)(local_a8 + 6) = (undefined4)local_e0;
        *(undefined4 *)((longlong)local_a8 + 0x34) = local_e0._4_4_;
        local_e0 = 0;
        local_a8[7] = local_d8;
        local_d8 = 0;
        *(undefined4 *)(local_a8 + 8) = (undefined4)local_d0;
        *(undefined4 *)((longlong)local_a8 + 0x44) = local_d0._4_4_;
        local_d0 = 0;
        *(undefined4 *)(local_a8 + 9) = local_c8;
        local_a8[10] = local_c0;
        local_c0 = 0;
        *(undefined4 *)(local_a8 + 0xb) = (undefined4)local_b8;
        *(undefined4 *)((longlong)local_a8 + 0x5c) = local_b8._4_4_;
        local_b8 = 0;
        FUN_148a5daf0(local_100,local_110,local_98,&local_a8);
        FUN_148a5d960(&local_e8);
        plVar3 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          plVar1 = plStack_f0 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          if ((int)*plVar1 == 0) {
            (**(code **)*plStack_f0)(plStack_f0);
            piVar2 = (int *)((longlong)plVar3 + 0xc);
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              (**(code **)(*plVar3 + 0x10))(plVar3);
            }
          }
        }
        FUN_148a5d960(local_98);
        plVar3 = local_108;
        lVar11 = local_118;
        uVar13 = local_120;
        lVar10 = lVar10 + 0x38;
        lVar14 = lVar14 + -0x38;
      } while (lVar14 != 0);
      if (local_108 != (longlong *)0x0) {
        plVar1 = local_108 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          (**(code **)*local_108)(local_108);
          piVar2 = (int *)((longlong)plVar3 + 0xc);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            (**(code **)(*plVar3 + 0x10))(plVar3);
          }
        }
      }
    }
    FUN_148a646b2(lVar11,uVar13 & 0xffffffff);
    if (lVar11 != 0) {
      FUN_1400020a8(lVar11);
    }
  }
  puVar7 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_143eee242;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar7 = (undefined8 *)*param_3;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eee242:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eee5e0 FUN_143eee5e0 body=719 status=ok
// SIG undefined FUN_143eee5e0(void)

void FUN_143eee5e0(undefined4 *param_1,longlong param_2)

{
  int *piVar1;
  undefined4 uVar2;
  byte bVar3;
  ushort uVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined8 *local_78;
  int local_70;
  LARGE_INTEGER local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_2 + 0x2c0) == 0) {
    if (*(int *)(param_2 + 0x240) == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = *(undefined2 **)(param_2 + 0x238);
    }
    lVar9 = 0;
    do {
      uVar4 = puVar7[lVar9];
      bVar3 = "bifrost-smoketest"[lVar9];
      iVar10 = (uint)uVar4 - (uint)bVar3;
      if (iVar10 == 0) {
        if (uVar4 == 0) goto LAB_143eee850;
      }
      else {
        if (0x7f < ((uint)bVar3 | (uint)uVar4)) goto LAB_143eee800;
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar3]) goto LAB_143eee7fd;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
  FUN_143eee8b0(param_1,param_2);
  if (((*(longlong *)(param_1 + 0x1c) == 0) || (*(longlong *)(param_1 + 0x1e) == 0)) ||
     (*(int *)(*(longlong *)(param_1 + 0x1e) + 8) < 1)) {
    FUN_143eeeb60(param_1);
    QueryPerformanceCounter(&local_68);
    *(double *)(param_1 + 0x20) = (double)local_68.QuadPart * DAT_14c83f420 + 16777216.0;
    uVar6 = FUN_1401cb356();
    uVar2 = *param_1;
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,2,0x10);
    local_70 = 2;
    *local_78 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 1;
    lVar9 = DAT_14c758608 + 1;
    if (lVar8 == 0) {
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 2;
      lVar9 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar9;
    local_78[2] = lVar8;
    *local_78 = &PTR_FUN_14b4da370;
    local_78[3] = param_1;
    local_88 = uVar2;
    FUN_1405f67fc(uVar6,&local_68,&local_78,L"FShiftCrossSaveManager::UploadFilesInBuffer");
    ((LARGE_INTEGER *)(param_1 + 0x1c))->QuadPart = (LONGLONG)local_68;
    local_68.QuadPart = 0;
    plVar5 = *(longlong **)(param_1 + 0x1e);
    *(longlong **)(param_1 + 0x1e) = local_60;
    local_60 = (longlong *)0x0;
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar5 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar5 + 0x10))();
      }
      if (local_60 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_60 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_60 + 0x10))();
        }
      }
    }
    if (local_70 != 0) {
      if (local_78 == (undefined8 *)0x0) goto LAB_143eee874;
      (**(code **)*local_78)(local_78,0);
      FUN_1446efa72(&local_78,0,0,0x10);
      local_70 = 0;
    }
    if (local_78 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  goto LAB_143eee874;
LAB_143eee848:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_143eee84b:
  if (iVar10 != 0) goto LAB_143eee874;
  goto LAB_143eee850;
LAB_143eee7fd:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4] - (uint)(byte)(&DAT_149e05da0)[bVar3];
LAB_143eee800:
  if (iVar10 != 0) {
    lVar9 = 0;
    do {
      uVar4 = puVar7[lVar9];
      bVar3 = "bifrost-smoketest-passport"[lVar9];
      iVar10 = (uint)uVar4 - (uint)bVar3;
      if (iVar10 == 0) {
        if (uVar4 == 0) break;
      }
      else {
        if (0x7f < ((uint)bVar3 | (uint)uVar4)) goto LAB_143eee84b;
        if ((&DAT_149e05da0)[uVar4] != (&DAT_149e05da0)[bVar3]) goto LAB_143eee848;
      }
      lVar9 = lVar9 + 1;
    } while( true );
  }
LAB_143eee850:
  FUN_143eee8b0(param_1,param_2);
  local_58 = 0;
  uStack_50 = 0;
  FUN_143eee130(param_1,param_2);
LAB_143eee874:
  if ((local_40 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eee8b0 FUN_143eee8b0 body=686 status=ok
// SIG undefined FUN_143eee8b0(void)

void FUN_143eee8b0(longlong param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  longlong *plVar7;
  uint uVar8;
  longlong *plVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_78 [40];
  uint local_50;
  uint uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_4c = 0;
  if (param_2 == 0) {
    local_50 = 0;
    uVar5 = 0;
  }
  else {
    local_50 = *(uint *)(param_2 + 0xc);
    if ((int)local_50 < DAT_14c9647dc) {
      lVar12 = (ulonglong)((local_50 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_50 >> 0x10) * 8);
    }
    else {
      lVar12 = 0;
    }
    uVar5 = *(uint *)(lVar12 + 0x10);
    if (*(uint *)(lVar12 + 0x10) == 0) {
      LOCK();
      iVar4 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar13 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar13) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar5 = *(uint *)(lVar12 + 0x10);
      bVar13 = uVar5 == 0;
      if (bVar13) {
        *(uint *)(lVar12 + 0x10) = uVar8;
        uVar5 = 0;
      }
      UNLOCK();
      if (bVar13) {
        uVar5 = uVar8;
      }
    }
  }
  uStack_4c = uVar5;
  plVar6 = (longlong *)FUN_148a63f7a(param_1 + 0x20,uVar5 ^ local_50);
  plVar7 = (longlong *)*plVar6;
  lVar12 = (longlong)(int)plVar6[1];
  if (lVar12 == 0) {
LAB_143eeeac0:
    uVar5 = (int)plVar6[1] + 1;
    *(uint *)(plVar6 + 1) = uVar5;
    if (*(uint *)((longlong)plVar6 + 0xc) < uVar5) {
      FUN_148a64622(plVar6);
      plVar7 = (longlong *)*plVar6;
    }
    FUN_148a5e23e(plVar7 + lVar12 * 7,param_3);
LAB_143eeeae3:
    if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return;
  }
  iVar4 = (int)param_3[1];
  pvVar3 = (void *)*param_3;
  plVar9 = plVar7;
LAB_143eee966:
  if (iVar4 != (int)plVar9[1]) {
    if ((int)plVar9[1] + iVar4 == 1) goto LAB_143eee9e0;
    goto LAB_143eee9cd;
  }
  if (1 < iVar4) {
    lVar11 = 0;
    do {
      uVar1 = *(ushort *)((longlong)pvVar3 + lVar11);
      uVar2 = *(ushort *)(*plVar9 + lVar11);
      if (uVar1 == uVar2) {
        if (uVar1 == 0) break;
      }
      else {
        if (0x7f < (uVar2 | uVar1)) {
          iVar10 = (uint)uVar1 - (uint)uVar2;
          goto LAB_143eee9bd;
        }
        if ((&DAT_149e05da0)[uVar1] != (&DAT_149e05da0)[(uint)uVar2]) goto code_r0x000143eee9ba;
      }
      lVar11 = lVar11 + 2;
    } while( true );
  }
  goto LAB_143eee9e0;
code_r0x000143eee9ba:
  iVar10 = (uint)(byte)(&DAT_149e05da0)[uVar1] - (uint)(byte)(&DAT_149e05da0)[(uint)uVar2];
LAB_143eee9bd:
  if (iVar10 == 0) {
LAB_143eee9e0:
    if (plVar9 != (longlong *)0x0) {
      if (plVar9 == param_3) {
        *(int *)(plVar9 + 4) = (int)param_3[4];
      }
      else {
        *(int *)(plVar9 + 1) = iVar4;
        if (*(int *)((longlong)plVar9 + 0xc) == 0 && iVar4 == 0) {
          *(undefined4 *)((longlong)plVar9 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(plVar9,iVar4);
          if (iVar4 != 0) {
            memcpy((void *)*plVar9,pvVar3,(longlong)iVar4 * 2);
          }
        }
        iVar4 = (int)param_3[3];
        pvVar3 = (void *)param_3[2];
        *(int *)(plVar9 + 3) = iVar4;
        if (iVar4 == 0 && *(int *)((longlong)plVar9 + 0x1c) == 0) {
          *(undefined4 *)((longlong)plVar9 + 0x1c) = 0;
        }
        else {
          FUN_1447a127e(plVar9 + 2,iVar4);
          if (iVar4 != 0) {
            memcpy((void *)plVar9[2],pvVar3,(longlong)iVar4);
          }
        }
        *(int *)(plVar9 + 4) = (int)param_3[4];
        iVar4 = (int)param_3[6];
        pvVar3 = (void *)param_3[5];
        *(int *)(plVar9 + 6) = iVar4;
        if (iVar4 == 0 && *(int *)((longlong)plVar9 + 0x34) == 0) {
          *(undefined4 *)((longlong)plVar9 + 0x34) = 0;
        }
        else {
          FUN_1446dd670(plVar9 + 5,iVar4);
          if (iVar4 != 0) {
            memcpy((void *)plVar9[5],pvVar3,(longlong)iVar4 * 2);
          }
        }
      }
      goto LAB_143eeeae3;
    }
    goto LAB_143eeeac0;
  }
LAB_143eee9cd:
  plVar9 = plVar9 + 7;
  if (plVar9 == plVar7 + lVar12 * 7) goto LAB_143eeeac0;
  goto LAB_143eee966;
}



// FUNCTION 143eeeb60 FUN_143eeeb60 body=368 status=ok
// SIG undefined FUN_143eeeb60(void)

void FUN_143eeeb60(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 *puVar10;
  longlong lVar11;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_70 [16];
  undefined1 *local_60;
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_60 = (undefined1 *)0x0;
  local_58 = 0x200000000;
  FUN_148a5e32c(param_1 + 0x20,local_70);
  puVar10 = local_60;
  if (local_60 == (undefined1 *)0x0) {
    puVar10 = local_70;
  }
  lVar11 = (longlong)(int)local_58;
  if (lVar11 != 0) {
    lVar9 = 0;
    do {
      uVar1 = *(ulonglong *)(puVar10 + lVar9);
      if (((uVar1 >> 0x20 != 0) && (uVar3 = (uint)uVar1, -1 < (int)uVar3)) &&
         ((int)uVar3 < DAT_14c9647dc)) {
        uVar5 = (ulonglong)((uint)(uVar1 >> 0x10) & 0x7fff);
        plVar7 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) + *(longlong *)(DAT_14c9647c8 + uVar5 * 8));
        if (((plVar7 != (longlong *)0x0) && (iVar2 = (int)(uVar1 >> 0x20), (int)plVar7[2] == iVar2))
           && ((*(uint *)(plVar7 + 1) & 0x10200000) == 0)) {
          if ((*(uint *)(plVar7 + 1) & 0x10200000) == 0) {
            lVar8 = *plVar7;
          }
          else {
            lVar8 = 0;
          }
          if (*(longlong *)(lVar8 + 0x2b8) != 0) {
            local_88 = 0;
            uStack_80 = 0;
            puVar4 = (undefined8 *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + uVar5 * 8));
            if (((puVar4 == (undefined8 *)0x0) || (*(int *)(puVar4 + 2) != iVar2)) ||
               ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)) {
              uVar6 = 0;
            }
            else {
              uVar6 = *puVar4;
            }
            FUN_143eee130(param_1,uVar6,&local_88);
          }
        }
      }
      lVar9 = lVar9 + 8;
    } while (lVar11 * 8 != lVar9);
  }
  FUN_148a65200(param_1 + 0x20);
  if (local_60 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eeecd2 FUN_143eeecd2 body=254 status=ok
// SIG undefined FUN_143eeecd2(void)

void FUN_143eeecd2(undefined8 param_1,longlong param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_30;
  undefined1 *local_28;
  undefined8 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)*param_3;
  local_20 = &local_38;
  *param_3 = 0;
  local_30 = (int)param_3[1];
  *(undefined4 *)(param_3 + 1) = 0;
  local_28 = &LAB_143ef4d9c;
  bifrost::cross_save::getNumberOfSaves(*(undefined8 *)(param_2 + 0x2b8),&local_28);
  if (local_30 == 0) {
LAB_143eeed64:
    if (local_38 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  else if (local_38 != (undefined8 *)0x0) {
    (**(code **)*local_38)(local_38,0);
    FUN_1446efa72(&local_38,0,0,0x10);
    local_30 = 0;
    goto LAB_143eeed64;
  }
  if ((int)param_3[1] != 0) {
    puVar1 = (undefined8 *)*param_3;
    if (puVar1 == (undefined8 *)0x0) goto LAB_143eeeda5;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143eeeda5:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeedd2 FUN_143eeedd2 body=112 status=ok
// SIG undefined FUN_143eeedd2(void)

void FUN_143eeedd2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_145be99e5(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143eeee42 FUN_143eeee42 body=5 status=ok
// SIG undefined FUN_143eeee42(void)

longlong FUN_143eeee42(longlong param_1)

{
  return param_1 + 0x18;
}



// FUNCTION 143eeee47 FUN_143eeee47 body=215 status=ok
// SIG undefined FUN_143eeee47(void)

void FUN_143eeee47(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar5 = *param_1;
  dVar1 = param_1[1];
  uVar3 = SUB84(dVar1,0);
  uVar4 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar6 = param_1[2];
  if ((((dVar5 != 0.0) || (NAN(dVar5))) || (dVar1 != 0.0)) ||
     (((NAN(dVar1) || (dVar6 != 0.0)) || (NAN(dVar6))))) {
    dVar8 = param_1[5];
    dVar7 = param_1[3];
    dVar9 = param_1[4];
  }
  else {
    dVar7 = param_1[3];
    dVar9 = param_1[4];
    dVar8 = param_1[5];
    if (((dVar7 == 0.0) && (!NAN(dVar7))) &&
       ((dVar9 == 0.0 && (((!NAN(dVar9) && (dVar8 == 0.0)) && (!NAN(dVar8))))))) {
      param_1[5] = param_2[2];
      dVar5 = param_2[1];
      param_1[3] = *param_2;
      param_1[4] = dVar5;
      dVar5 = *param_2;
      dVar1 = param_2[1];
      param_1[2] = param_2[2];
      *param_1 = dVar5;
      param_1[1] = dVar1;
      return;
    }
  }
  if (param_2[2] <= dVar6) {
    dVar6 = param_2[2];
  }
  dVar2 = param_2[1];
  if (dVar2 <= dVar1) {
    uVar3 = SUB84(dVar2,0);
    uVar4 = (undefined4)((ulonglong)dVar2 >> 0x20);
  }
  if (*param_2 <= dVar5) {
    dVar5 = *param_2;
  }
  *param_1 = dVar5;
  param_1[1] = (double)CONCAT44(uVar4,uVar3);
  param_1[2] = dVar6;
  if (dVar8 <= param_2[2]) {
    dVar8 = param_2[2];
  }
  if (dVar9 <= param_2[1]) {
    dVar9 = param_2[1];
  }
  if (dVar7 <= *param_2) {
    dVar7 = *param_2;
  }
  param_1[3] = dVar7;
  param_1[4] = dVar9;
  param_1[5] = dVar8;
  return;
}



// FUNCTION 143eeef1e FUN_143eeef1e body=49 status=ok
// SIG undefined FUN_143eeef1e(void)

void FUN_143eeef1e(void)

{
  FUN_144760e21(DAT_14cb96830,DAT_14cb96838);
  if (DAT_14cb96830 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143eeef4f FUN_143eeef4f body=49 status=ok
// SIG undefined FUN_143eeef4f(void)

void FUN_143eeef4f(void)

{
  FUN_144760e21(DAT_14cb96850,DAT_14cb96858);
  if (DAT_14cb96850 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143eeef80 FUN_143eeef80 body=71 status=ok
// SIG undefined FUN_143eeef80(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eeef80(void)

{
  longlong *plVar1;
  
  _DAT_14cb96870 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96890 != 0) {
    plVar1 = &DAT_14cb968b0;
    if (DAT_14cb968a0 != (longlong *)0x0) {
      plVar1 = DAT_14cb968a0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96870);
  return;
}



// FUNCTION 143eeefc7 FUN_143eeefc7 body=71 status=ok
// SIG undefined FUN_143eeefc7(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eeefc7(void)

{
  longlong *plVar1;
  
  _DAT_14cb968d0 = &PTR_FUN_14b4dae90;
  if (DAT_14cb968f0 != 0) {
    plVar1 = &DAT_14cb96910;
    if (DAT_14cb96900 != (longlong *)0x0) {
      plVar1 = DAT_14cb96900;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb968d0);
  return;
}



// FUNCTION 143eef00e FUN_143eef00e body=71 status=ok
// SIG undefined FUN_143eef00e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef00e(void)

{
  longlong *plVar1;
  
  _DAT_14cb96930 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96950 != 0) {
    plVar1 = &DAT_14cb96970;
    if (DAT_14cb96960 != (longlong *)0x0) {
      plVar1 = DAT_14cb96960;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96930);
  return;
}



// FUNCTION 143eef055 FUN_143eef055 body=71 status=ok
// SIG undefined FUN_143eef055(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef055(void)

{
  longlong *plVar1;
  
  _DAT_14cb96990 = &PTR_FUN_14b4dae90;
  if (DAT_14cb969b0 != 0) {
    plVar1 = &DAT_14cb969d0;
    if (DAT_14cb969c0 != (longlong *)0x0) {
      plVar1 = DAT_14cb969c0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96990);
  return;
}



// FUNCTION 143eef09c FUN_143eef09c body=71 status=ok
// SIG undefined FUN_143eef09c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef09c(void)

{
  longlong *plVar1;
  
  _DAT_14cb969f0 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96a10 != 0) {
    plVar1 = &DAT_14cb96a30;
    if (DAT_14cb96a20 != (longlong *)0x0) {
      plVar1 = DAT_14cb96a20;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb969f0);
  return;
}



// FUNCTION 143eef0e3 FUN_143eef0e3 body=71 status=ok
// SIG undefined FUN_143eef0e3(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef0e3(void)

{
  longlong *plVar1;
  
  _DAT_14cb96a50 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96a70 != 0) {
    plVar1 = &DAT_14cb96a90;
    if (DAT_14cb96a80 != (longlong *)0x0) {
      plVar1 = DAT_14cb96a80;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96a50);
  return;
}



// FUNCTION 143eef12a FUN_143eef12a body=71 status=ok
// SIG undefined FUN_143eef12a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef12a(void)

{
  longlong *plVar1;
  
  _DAT_14cb96ab0 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96ad0 != 0) {
    plVar1 = &DAT_14cb96af0;
    if (DAT_14cb96ae0 != (longlong *)0x0) {
      plVar1 = DAT_14cb96ae0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96ab0);
  return;
}



// FUNCTION 143eef171 FUN_143eef171 body=71 status=ok
// SIG undefined FUN_143eef171(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef171(void)

{
  longlong *plVar1;
  
  _DAT_14cb96b10 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96b30 != 0) {
    plVar1 = &DAT_14cb96b50;
    if (DAT_14cb96b40 != (longlong *)0x0) {
      plVar1 = DAT_14cb96b40;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96b10);
  return;
}



// FUNCTION 143eef1b8 FUN_143eef1b8 body=71 status=ok
// SIG undefined FUN_143eef1b8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef1b8(void)

{
  longlong *plVar1;
  
  _DAT_14cb96b70 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96b90 != 0) {
    plVar1 = &DAT_14cb96bb0;
    if (DAT_14cb96ba0 != (longlong *)0x0) {
      plVar1 = DAT_14cb96ba0;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96b70);
  return;
}



// FUNCTION 143eef1ff FUN_143eef1ff body=71 status=ok
// SIG undefined FUN_143eef1ff(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef1ff(void)

{
  longlong *plVar1;
  
  _DAT_14cb96bd0 = &PTR_FUN_14b4dae90;
  if (DAT_14cb96bf0 != 0) {
    plVar1 = &DAT_14cb96c10;
    if (DAT_14cb96c00 != (longlong *)0x0) {
      plVar1 = DAT_14cb96c00;
    }
    (**(code **)(*plVar1 + 0x10))();
  }
  FUN_1412b2176(&DAT_14cb96bd0);
  return;
}



// FUNCTION 143eef246 FUN_143eef246 body=2271 status=ok
// SIG undefined FUN_143eef246(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143eef246(longlong *param_1,undefined8 param_2)

{
  int *piVar1;
  longlong *plVar2;
  bool bVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  size_t sVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined2 *puVar12;
  undefined1 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  longlong lVar19;
  bool bVar20;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined8 local_260;
  ulonglong local_250;
  undefined2 *local_248;
  int local_240;
  undefined2 *local_238;
  int local_230;
  undefined8 local_228;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined1 local_200 [16];
  wchar_t *local_1f0;
  uint local_1e0;
  uint local_1dc;
  longlong local_1d8;
  code *local_198;
  undefined1 *local_190;
  undefined1 *local_188;
  undefined *local_180;
  wchar_t *local_178;
  longlong *local_170;
  wchar_t *local_168;
  undefined1 *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined1 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined2 local_110;
  undefined2 local_10e;
  undefined1 local_10c;
  undefined8 local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined1 local_e8;
  char *local_e0;
  undefined2 local_d8;
  undefined1 local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  undefined4 local_bc;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined8 *local_a8;
  int local_a0;
  code *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_288;
  if (param_1[1] != 0) goto LAB_143eef275;
  FUN_140056680(&local_248,L"/Script/Shift.ShiftService");
  local_268 = &DAT_14c872ce8;
  FUN_1449da20c(DAT_14c872ce0,L"Shift",L"ServiceClass",&local_248);
  puVar12 = local_248;
  if (local_240 == 0) {
    puVar12 = &DAT_149dfb77a;
  }
  uVar7 = FUN_145b17a44();
  local_260 = 0;
  local_268 = (undefined8 *)((ulonglong)local_268 & 0xffffffff00000000);
  uVar7 = FUN_141433b6f(uVar7,0,puVar12,0);
  lVar8 = FUN_14657d7c7(DAT_14c951640,uVar7);
  if (lVar8 != 0) {
    FUN_1401924dc(lVar8);
  }
  if ((param_1[1] != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48();
  }
  param_1[1] = lVar8;
  if (*(char *)(lVar8 + 0x58) == '\0') {
    local_250 = FUN_1401cb356();
    local_a8 = (undefined8 *)0x0;
    local_a0 = 0;
    FUN_1446efa72(&local_a8,0,3,0x10);
    puVar4 = local_a8;
    local_a0 = 3;
    *local_a8 = &PTR_LAB_149e02020;
    LOCK();
    UNLOCK();
    lVar11 = DAT_14c758608 + 1;
    lVar19 = DAT_14c758608 + 1;
    if (lVar11 == 0) {
      LOCK();
      UNLOCK();
      lVar11 = DAT_14c758608 + 2;
      lVar19 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar19;
    local_a8[2] = lVar11;
    *local_a8 = &PTR_FUN_14b4dac30;
    local_a8[3] = 0;
    iVar14 = 0;
    if (lVar8 != 0) {
      uVar18 = *(uint *)(lVar8 + 0xc);
      *(uint *)(local_a8 + 3) = uVar18;
      if ((int)uVar18 < DAT_14c9647dc) {
        lVar19 = (ulonglong)((uVar18 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar18 >> 0x10) * 8);
      }
      else {
        lVar19 = 0;
      }
      iVar14 = *(int *)(lVar19 + 0x10);
      if (*(int *)(lVar19 + 0x10) == 0) {
        LOCK();
        iVar14 = DAT_14c964868 + 1;
        UNLOCK();
        iVar15 = DAT_14c964868 + 1;
        bVar20 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar14;
        if (bVar20) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar15);
        }
        LOCK();
        iVar14 = *(int *)(lVar19 + 0x10);
        bVar20 = iVar14 == 0;
        if (bVar20) {
          *(int *)(lVar19 + 0x10) = iVar15;
          iVar14 = 0;
        }
        UNLOCK();
        if (bVar20) {
          iVar14 = iVar15;
        }
      }
    }
    *(int *)((longlong)puVar4 + 0x1c) = iVar14;
    puVar4[4] = FUN_140185c36;
    local_268 = (undefined8 *)((ulonglong)local_268 & 0xffffffff00000000);
    FUN_1405f67fc(local_250,&local_178,&local_a8,L"UShiftService_Tick");
    *(wchar_t **)(lVar8 + 0xd8) = local_178;
    local_178 = (wchar_t *)0x0;
    plVar2 = *(longlong **)(lVar8 + 0xe0);
    *(longlong **)(lVar8 + 0xe0) = local_170;
    local_170 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
      if (local_170 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_170 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_170 + 0x10))();
        }
      }
    }
    if (local_a0 == 0) {
LAB_143eef518:
      if (local_a8 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
    else if (local_a8 != (undefined8 *)0x0) {
      (**(code **)*local_a8)(local_a8,0);
      FUN_1446efa72(&local_a8,0,0,0x10);
      local_a0 = 0;
      goto LAB_143eef518;
    }
    FUN_14657dc06(lVar8 + 0x60,param_2);
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    cVar5 = FUN_14054d46e(&DAT_14c846b20,L"NoBifrostMT");
    uVar18 = 0;
    if (cVar5 == '\0') {
      local_178 = (wchar_t *)((ulonglong)local_178 & 0xffffffff00000000);
      if (DAT_14c846b14 == '\0') {
        FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                      L"Attempting to get the command line but it hasn\'t been initialized yet.");
      }
      uVar7 = FUN_141369f9a(&DAT_14c846b20,L"BifrostMTTickRate=",&local_178);
      iVar14 = (int)local_178;
      if ((int)local_178 < 1) {
        iVar14 = 0xf0;
      }
      uVar13 = (undefined1)iVar14;
      if ((char)uVar7 == '\0') {
        uVar13 = 0xf0;
      }
      *(undefined1 *)(lVar8 + 0xf8) = 1;
      *(undefined4 *)(lVar8 + 0xfc) = 0x3d4ccccd;
      local_250 = CONCAT44(local_250._4_4_,(int)CONCAT71((int7)((ulonglong)uVar7 >> 8),1));
    }
    else {
      uVar13 = 10;
      local_250 = local_250 & 0xffffffff00000000;
    }
    local_1dc = 0;
    local_1e0 = 0;
    local_268 = &DAT_14c872ce8;
    cVar5 = FUN_1414d73b6(DAT_14c872ce0,L"Shift",L"MinPort");
    uVar16 = 0;
    if (cVar5 != '\0') {
      local_268 = &DAT_14c872ce8;
      cVar5 = FUN_1414d73b6(DAT_14c872ce0,L"Shift",L"MaxPort",&local_1e0);
      uVar18 = 0;
      uVar16 = 0;
      if (cVar5 != '\0') {
        uVar18 = local_1dc;
        if (0xffff < local_1dc) {
          uVar18 = 0;
        }
        uVar16 = local_1e0;
        local_1dc = uVar18;
        if (0xffff < local_1e0) {
          uVar16 = 0;
          local_1e0 = uVar16;
        }
      }
    }
    FUN_1401e7e86(local_200,lVar8 + 0x60);
    FUN_14482e566(local_200);
    uStack_218 = 0;
    uStack_214 = 0;
    uStack_210 = 0;
    local_228 = 0;
    uStack_220 = 0;
    local_21c = 0;
    local_178 = (wchar_t *)FUN_140d69f9e();
    uVar6 = 0;
    if (local_178 != (wchar_t *)0x0) {
      sVar9 = wcslen(local_178);
      uVar6 = (int)sVar9;
    }
    local_170 = (longlong *)CONCAT44(local_170._4_4_,uVar6);
    local_168 = L"shiftsdk/bifrost";
    local_160 = (undefined1 *)CONCAT44(local_160._4_4_,0x10);
    FUN_140bee87a(&local_a8,&local_178,2);
    FUN_14598594e(&local_228,&local_a8);
    if (local_a8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
    FUN_14482e566(&local_228);
    local_150 = CONCAT44(uStack_214,uStack_218);
    local_178 = local_1f0;
    local_170 = (longlong *)&LAB_143ef25d0;
    local_168 = 
    L"ㅅ\xe9c0ퟪﰒ坖䡓\xec83謠с삅䉴襈䓏Ƌ蕅磀䐷Թ⇘ࢧ⹾ཁ좷譌뜍꜡䄈\xe8c1䠐಍셉ϡ͋섌ቴ䄹甐謍ࡲ䆋꤈"
    ;
    local_160 = &LAB_143ef25d6;
    local_158 = 0;
    local_148 = 1;
    local_140 = 0x4000000;
    local_138 = 0;
    local_130 = 0;
    local_128 = 1;
    local_120 = 0x403e000000000000;
    local_118 = 0;
    local_110 = (undefined2)uVar18;
    local_10e = (undefined2)uVar16;
    local_10c = 1;
    local_108 = 0;
    local_100 = 0x1000101;
    local_f8 = 0x3f81111111111111;
    local_f0 = 0;
    local_e8 = 0;
    local_e0 = "localhost";
    local_d8 = 0x4c58;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = 0;
    local_bc = 0;
    local_b8 = (undefined1)local_250;
    local_b7 = uVar13;
    bifrost::start();
    *(undefined1 *)(lVar8 + 0x58) = 1;
    FUN_140056680(&local_238,L"/Script/Shift.ShiftSessionManager");
    local_268 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"Shift",L"SessionManagerClass",&local_238);
    puVar12 = local_238;
    if (local_230 == 0) {
      puVar12 = &DAT_149dfb77a;
    }
    uVar7 = FUN_1459d81a2();
    local_260 = 0;
    local_268 = (undefined8 *)((ulonglong)local_268 & 0xffffffff00000000);
    uVar7 = FUN_141433b6f(uVar7,0,puVar12,0);
    lVar19 = FUN_14657dc7d(DAT_14c951640,uVar7);
    if ((lVar19 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar19);
    }
    *(longlong *)(lVar8 + 0x108) = lVar19;
    local_198 = FUN_143efed54;
    local_190 = &LAB_143efede2;
    local_188 = &LAB_143efedea;
    local_180 = &DAT_143efedf2;
    local_1d8 = lVar8;
    bifrost::session::onLoginMessage();
    local_68 = FUN_143efcffc;
    local_60 = &DAT_143efd05e;
    local_58 = &DAT_143efd060;
    local_50 = &DAT_143efd062;
    bifrost::messaging::setLobbyLeaderChangeDelegate();
    FUN_145ffd894();
    uVar10 = (ulonglong)DAT_14cb966c8;
    if (0 < (longlong)uVar10) {
      bVar20 = false;
      DAT_14cb966d4 = DAT_14cb966d4 + 1;
      do {
        lVar8 = uVar10 * 0x10 + -8;
        uVar17 = uVar10;
        while (((*(int *)(DAT_14cb966c0 + lVar8) != 0 &&
                (plVar2 = *(longlong **)(DAT_14cb966c0 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
               (cVar5 = (**(code **)(*plVar2 + 0x60))(), cVar5 != '\0'))) {
          lVar8 = lVar8 + -0x10;
          bVar3 = uVar17 < 2;
          uVar17 = uVar17 - 1;
          if (bVar3) {
            DAT_14cb966d4 = DAT_14cb966d4 + -1;
            if (bVar20) goto LAB_143eef990;
            goto LAB_143eefa10;
          }
        }
        uVar10 = uVar17 - 1;
        bVar20 = true;
      } while (1 < uVar17);
      DAT_14cb966d4 = DAT_14cb966d4 + -1;
LAB_143eef990:
      iVar14 = DAT_14cb966c8;
      if (DAT_14cb966d4 < 1) {
        if (0 < DAT_14cb966c8) {
          iVar15 = 0;
          do {
            if (((*(int *)(DAT_14cb966c0 + 8 + (longlong)iVar15 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(DAT_14cb966c0 + (longlong)iVar15 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar2 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(&DAT_14cb966c0,iVar15);
              FUN_14005b248(&DAT_14cb966c0);
            }
            else {
              iVar15 = iVar15 + 1;
            }
          } while (iVar15 < DAT_14cb966c8);
        }
        _DAT_14cb966d0 = 2;
        if (2 < DAT_14cb966c8 * 2) {
          _DAT_14cb966d0 = DAT_14cb966c8 * 2;
        }
        if ((_DAT_14cb966d0 < iVar14) && (DAT_14cb966cc != DAT_14cb966c8)) {
          FUN_14045812c(&DAT_14cb966c0);
        }
      }
    }
LAB_143eefa10:
    if (local_238 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    FUN_1401e7e48(&local_228);
    FUN_1401e7e48(local_200);
  }
  if (local_248 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eef275:
  (**(code **)(*param_1 + 0x50))(param_1);
  if ((local_48 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143eefb26 FUN_143eefb26 body=115 status=ok
// SIG undefined FUN_143eefb26(void)

void FUN_143eefb26(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong lVar2;
  void *_Src;
  
  lVar2 = *(longlong *)(param_1 + 8);
  uVar1 = *(uint *)(param_2 + 1);
  if (((1 < (int)uVar1 && lVar2 != 0) && (*(int *)(lVar2 + 0xf0) < 2)) &&
     ((undefined8 *)(lVar2 + 0xe8) != param_2)) {
    _Src = (void *)*param_2;
    *(uint *)(lVar2 + 0xf0) = uVar1;
    FUN_1446dd670((undefined8 *)(lVar2 + 0xe8),uVar1,*(undefined4 *)(lVar2 + 0xf4));
    memcpy(*(void **)(lVar2 + 0xe8),_Src,(ulonglong)uVar1 * 2);
    return;
  }
  return;
}



// FUNCTION 143eefb9a FUN_143eefb9a body=293 status=ok
// SIG undefined FUN_143eefb9a(void)

void FUN_143eefb9a(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar5 = *(longlong *)(param_1 + 0x108);
  iVar2 = *(int *)(lVar5 + 0x30);
  if ((longlong)iVar2 != 0) {
    lVar5 = *(longlong *)(lVar5 + 0x28);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar5 + lVar6);
      if (lVar3 != 0) {
        FUN_145c39a2a(lVar3 + 0x40);
        *(undefined8 *)(lVar3 + 200) = 0;
        *(undefined8 *)(lVar3 + 0xd0) = 0;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar2 * 8 != lVar6);
    lVar5 = *(longlong *)(param_1 + 0x108);
  }
  *(undefined4 *)(lVar5 + 0x30) = 0;
  if (*(int *)(lVar5 + 0x34) != 0) {
    FUN_14657e8c4(lVar5 + 0x28);
  }
  if (*(char *)(param_1 + 0x58) != '\0') {
    FUN_1401cb356();
    local_50 = *(undefined8 *)(param_1 + 0xd8);
    local_48 = *(longlong *)(param_1 + 0xe0);
    if (local_48 != 0) {
      LOCK();
      *(int *)(local_48 + 0xc) = *(int *)(local_48 + 0xc) + 1;
      UNLOCK();
    }
    FUN_140d61352(&local_50);
    FUN_140457ffc(&DAT_14c86aa30,param_1);
    plVar4 = *(longlong **)(param_1 + 0xe0);
    *(undefined8 *)(param_1 + 0xd8) = 0;
    *(undefined8 *)(param_1 + 0xe0) = 0;
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))();
      }
    }
    bifrost::stop();
    *(undefined1 *)(param_1 + 0x58) = 0;
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eefcc0 FUN_143eefcc0 body=312 status=ok
// SIG undefined FUN_143eefcc0(void)

void FUN_143eefcc0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong lStack_90;
  ulonglong local_88;
  longlong local_78;
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_98 = 0;
    lStack_90 = 0;
    local_88 = 0;
    if (((int)param_2[1] == 0) || (plVar1 = (longlong *)*param_2, plVar1 == (longlong *)0x0)) {
      uVar3 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x60))(plVar1,3,&local_98);
      uVar3 = local_88 & 0xffffffff;
    }
    FUN_1447a1747(lStack_90,uVar3);
    if (lStack_90 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_78 = *param_2;
    *param_2 = 0;
    local_70 = (undefined4)param_2[1];
    *(undefined4 *)(param_2 + 1) = 0;
    local_38 = FUN_143efb806;
    local_30 = &LAB_143efb94e;
    local_28 = &LAB_143efb962;
    local_20 = FUN_143efb98c;
    bifrost::messaging::getCrossplayStatus(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_2;
  if ((int)param_2[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143eefdce;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
    puVar2 = (undefined8 *)*param_2;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eefdce:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eefdf9 FUN_143eefdf9 body=284 status=ok
// SIG undefined FUN_143eefdf9(void)

void FUN_143eefdf9(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined1 *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_143eefed0;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_80 = &local_78;
    local_70 = *param_4;
    *param_4 = 0;
    local_68 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_30 = &LAB_143efbbfa;
    local_28 = &LAB_143efbc1c;
    local_20 = &LAB_143efbc30;
    local_18 = FUN_143efbc5a;
    local_88 = &LAB_143efbbf2;
    local_78 = param_3;
    bifrost::messaging::setRoomParams(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143eefed0;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eefed0:
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143eeff16 FUN_143eeff16 body=421 status=ok
// SIG undefined FUN_143eeff16(void)

void FUN_143eeff16(longlong param_1,undefined4 param_2,undefined4 param_3,longlong *param_4,
                  undefined1 param_5)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [32];
  undefined1 local_c8;
  undefined8 *local_b8;
  int local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_143eeffa5;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_b8 = (undefined8 *)*param_4;
    *param_4 = 0;
    local_b0 = (int)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_68 = &LAB_143efbef8;
    local_60 = &LAB_143efbf1a;
    local_58 = &LAB_143efbf2e;
    local_50 = FUN_143efbf58;
    local_a8 = 0;
    local_a0 = 0;
    FUN_145c44cca(&local_a8,&local_b8);
    local_c8 = param_5;
    bifrost::messaging::removeFromLobby(*(undefined8 *)(param_1 + 0x2b8),param_2,param_3,&local_a8);
    if (local_b0 != 0) {
      if (local_b8 == (undefined8 *)0x0) goto LAB_143eeff6a;
      (**(code **)*local_b8)(local_b8,0);
      FUN_1446efa72(&local_b8,0,0,0x10);
      local_b0 = 0;
    }
    if (local_b8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_143eeff6a:
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143eeffa5;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143eeffa5:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef00bc FUN_143ef00bc body=284 status=ok
// SIG undefined FUN_143ef00bc(void)

void FUN_143ef00bc(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  code *local_88;
  undefined8 *local_80;
  undefined8 local_78;
  longlong local_70;
  undefined4 local_68;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_143ef0193;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_80 = &local_78;
    local_70 = *param_4;
    *param_4 = 0;
    local_68 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_30 = &LAB_143efc3f0;
    local_28 = &LAB_143efc412;
    local_20 = &LAB_143efc426;
    local_18 = FUN_143efc450;
    local_88 = FUN_143efbfa8;
    local_78 = param_3;
    bifrost::messaging::advertiseLobby(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef0193;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef0193:
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef01d9 FUN_143ef01d9 body=269 status=ok
// SIG undefined FUN_143ef01d9(void)

void FUN_143ef01d9(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined4 local_68;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_3[1] != 0) {
      plVar1 = (longlong *)*param_3;
      if (plVar1 == (longlong *)0x0) goto LAB_143ef02a1;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_70 = *param_3;
    *param_3 = 0;
    local_68 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_30 = &LAB_143efc4a0;
    local_28 = &LAB_143efc4c2;
    local_20 = &LAB_143efc4d6;
    local_18 = FUN_143efc500;
    local_88 = 0;
    uStack_80 = 0;
    bifrost::messaging::advertiseLobby(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef02a1;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar2 = (undefined8 *)*param_3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef02a1:
  if ((local_10 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef02e7 FUN_143ef02e7 body=321 status=ok
// SIG undefined FUN_143ef02e7(void)

void FUN_143ef02e7(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_b8 [32];
  code *local_98;
  longlong *local_90;
  longlong local_88 [3];
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_88[0] = 0;
    local_88[1] = 0;
    if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,3,local_88);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_90 = local_88;
    local_88[2] = *param_3;
    *param_3 = 0;
    local_70 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_38 = FUN_143efc934;
    local_30 = &LAB_143efc9f6;
    local_28 = &LAB_143efca0a;
    local_20 = FUN_143efca34;
    local_98 = FUN_143efc71e;
    local_88[0] = param_2;
    bifrost::messaging::findRooms(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef03bf;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar2 = (undefined8 *)*param_3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef03bf:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef0429 FUN_143ef0429 body=512 status=ok
// SIG undefined FUN_143ef0429(void)

void FUN_143ef0429(longlong param_1,undefined4 param_2,longlong *param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_128 [32];
  longlong *local_108;
  undefined4 local_fc;
  longlong local_f8;
  longlong local_f0;
  undefined1 local_e8 [16];
  longlong local_d8;
  int local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_5[1] != 0) {
      plVar3 = (longlong *)*param_5;
      if (plVar3 == (longlong *)0x0) goto LAB_143ef05f5;
      (**(code **)(*plVar3 + 0x60))(plVar3,param_2,3);
    }
  }
  else {
    local_b8 = 0;
    uStack_b0 = 0;
    lVar6 = param_3[1];
    if ((longlong)(int)lVar6 == 0) {
      lVar6 = 0;
    }
    else {
      lVar2 = *param_3;
      lVar9 = 0;
      local_fc = param_2;
      do {
        uVar4 = uStack_b0;
        uVar1 = *(undefined4 *)(lVar2 + lVar9);
        lVar8 = (longlong)(int)uStack_b0;
        uVar5 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar5);
        if (uStack_b0._4_4_ < uVar5) {
          FUN_148a674ce(&local_b8,uVar4 & 0xffffffff);
        }
        *(undefined4 *)(local_b8 + lVar8 * 4) = uVar1;
        lVar9 = lVar9 + 4;
      } while ((longlong)(int)lVar6 * 4 != lVar9);
      lVar6 = (longlong)(int)uStack_b0;
      param_2 = local_fc;
    }
    lVar2 = local_b8;
    lVar6 = local_b8 + lVar6 * 4;
    local_a8 = *param_5;
    *param_5 = 0;
    local_a0 = (undefined4)param_5[1];
    *(undefined4 *)(param_5 + 1) = 0;
    local_68 = &LAB_143efcb34;
    local_60 = &LAB_143efcb56;
    local_58 = &LAB_143efcb6a;
    local_50 = FUN_143efcb94;
    FUN_1401e7e86(local_e8,param_4);
    FUN_14482e566(local_e8);
    local_c0 = local_d0 + local_d8;
    local_c8 = local_d8;
    local_108 = &local_a8;
    local_f8 = lVar2;
    local_f0 = lVar6;
    bifrost::messaging::invitePeersToRoom(*(undefined8 *)(param_1 + 0x2b8),param_2);
    FUN_1401e7e48(local_e8);
    if (local_b8 != 0) {
      FUN_1400020a8();
    }
  }
  puVar7 = (undefined8 *)*param_5;
  if ((int)param_5[1] != 0) {
    if (puVar7 == (undefined8 *)0x0) goto LAB_143ef05f5;
    (**(code **)*puVar7)(puVar7,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
    puVar7 = (undefined8 *)*param_5;
  }
  if (puVar7 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef05f5:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef062a FUN_143ef062a body=335 status=ok
// SIG undefined FUN_143ef062a(void)

void FUN_143ef062a(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_e8 [40];
  undefined1 local_c0 [16];
  longlong local_b0;
  int local_a8;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined1 *local_50;
  undefined1 *local_48;
  undefined1 *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_143ef072c;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_90 = *param_4;
    *param_4 = 0;
    local_88 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_50 = &LAB_143efcbe4;
    local_48 = &LAB_143efcc06;
    local_40 = &LAB_143efcc1a;
    local_38 = FUN_143efcc44;
    FUN_1401e7e86(local_c0,param_3);
    FUN_14482e566(local_c0);
    local_98 = local_a8 + local_b0;
    local_a0 = local_b0;
    bifrost::messaging::sendStatusToRoom
              (*(undefined8 *)(param_1 + 0x2b8),param_2,&local_a0,&local_90);
    FUN_1401e7e48(local_c0);
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef072c;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef072c:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef077a FUN_143ef077a body=297 status=ok
// SIG undefined FUN_143ef077a(void)

void FUN_143ef077a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_a8 [32];
  longlong local_88 [3];
  undefined4 local_70;
  code *local_38;
  undefined1 *local_30;
  undefined1 *local_28;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_88[0] = 0;
    local_88[1] = 0;
    if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
      (**(code **)(*plVar1 + 0x60))(plVar1,3,local_88,0);
      if (local_88[0] != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    local_88[2] = *param_3;
    *param_3 = 0;
    local_70 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_38 = FUN_143efcea0;
    local_30 = &LAB_143efcf6e;
    local_28 = &LAB_143efcf82;
    local_20 = FUN_143efcfac;
    bifrost::messaging::getAccountsInvitedToRoom(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef0837;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar2 = (undefined8 *)*param_3;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef0837:
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef08a4 FUN_143ef08a4 body=257 status=ok
// SIG undefined FUN_143ef08a4(void)

void FUN_143ef08a4(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  undefined1 *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_4[1] != 0) {
      plVar1 = (longlong *)*param_4;
      if (plVar1 == (longlong *)0x0) goto LAB_143ef0960;
      (**(code **)(*plVar1 + 0x60))(plVar1,param_2,3);
    }
  }
  else {
    local_70 = *param_4;
    *param_4 = 0;
    local_68 = (undefined4)param_4[1];
    *(undefined4 *)(param_4 + 1) = 0;
    local_30 = &LAB_143efd064;
    local_28 = &LAB_143efd086;
    local_20 = &LAB_143efd09a;
    local_18 = FUN_143efd0c4;
    bifrost::messaging::reassignLobbyLeader(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar2 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef0960;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar2 = (undefined8 *)*param_4;
  }
  if (puVar2 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef0960:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef09a6 FUN_143ef09a6 body=330 status=ok
// SIG undefined FUN_143ef09a6(void)

void FUN_143ef09a6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_f8 [40];
  undefined8 local_d0;
  undefined4 local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  undefined1 local_a8 [16];
  longlong local_98;
  int local_90;
  longlong local_88;
  undefined4 local_80;
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  code *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_3[1] != 0) {
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0) goto LAB_143ef0aa9;
      (**(code **)(*plVar2 + 0x60))(plVar2,2);
    }
  }
  else {
    FUN_1401e7e86(local_a8);
    uVar1 = *(undefined4 *)(param_1 + 0x110);
    FUN_14482e566(local_a8);
    local_b8 = local_90 + local_98;
    local_88 = *param_3;
    *param_3 = 0;
    local_80 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_48 = &LAB_143efd278;
    local_40 = &LAB_143efd29e;
    local_38 = &LAB_143efd2b2;
    local_30 = FUN_143efd2dc;
    local_d0 = 0;
    local_c8 = 0;
    local_c0 = local_98;
    local_b0 = uVar1;
    bifrost::messaging::setPresence(*(undefined8 *)(param_1 + 0x2b8));
    FUN_1401e7e48(local_a8);
  }
  puVar3 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar3 == (undefined8 *)0x0) goto LAB_143ef0aa9;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar3 = (undefined8 *)*param_3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef0aa9:
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef0af1 FUN_143ef0af1 body=261 status=ok
// SIG undefined FUN_143ef0af1(void)

void FUN_143ef0af1(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  longlong local_70;
  undefined4 local_68;
  code *local_30;
  undefined1 *local_28;
  undefined1 *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    local_88 = 0;
    uStack_80 = 0;
    local_98 = 0;
    uStack_90 = 0;
    FUN_148a61a28(param_3,2);
  }
  else {
    local_70 = *param_3;
    *param_3 = 0;
    local_68 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_30 = FUN_143efd32c;
    local_28 = &LAB_143efd42a;
    local_20 = &LAB_143efd43e;
    local_18 = FUN_143efd468;
    bifrost::messaging::getPresence(*(undefined8 *)(param_1 + 0x2b8));
  }
  puVar1 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar1 == (undefined8 *)0x0) goto LAB_143ef0bad;
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar1 = (undefined8 *)*param_3;
  }
  if (puVar1 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef0bad:
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef0bf7 FUN_143ef0bf7 body=262 status=ok
// SIG undefined FUN_143ef0bf7(void)

void FUN_143ef0bf7(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined4 local_68;
  longlong local_60;
  code *local_30;
  code *local_28;
  code *local_20;
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x2b8) == 0) {
    if ((int)param_3[1] != 0) {
      plVar2 = (longlong *)*param_3;
      if (plVar2 == (longlong *)0x0) goto LAB_143ef0cb9;
      (**(code **)(*plVar2 + 0x60))(plVar2,2);
    }
  }
  else {
    uVar1 = *param_2;
    local_70 = *param_3;
    *param_3 = 0;
    local_68 = (undefined4)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
    local_30 = FUN_143efd4b8;
    local_28 = FUN_143efd63c;
    local_20 = FUN_143efd66a;
    local_18 = FUN_143efd6da;
    local_60 = param_1;
    bifrost::messaging::getPresence(*(undefined8 *)(param_1 + 0x2b8),uVar1);
  }
  puVar3 = (undefined8 *)*param_3;
  if ((int)param_3[1] != 0) {
    if (puVar3 == (undefined8 *)0x0) goto LAB_143ef0cb9;
    (**(code **)*puVar3)(puVar3,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
    puVar3 = (undefined8 *)*param_3;
  }
  if (puVar3 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef0cb9:
  if ((local_10 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef0cfe FUN_143ef0cfe body=998 status=ok
// SIG undefined FUN_143ef0cfe(void)

void FUN_143ef0cfe(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6,char param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_318 [32];
  undefined8 *local_2f8;
  undefined4 local_2ec;
  char *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  char *local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  uint local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined1 local_248 [16];
  undefined8 local_238;
  undefined1 local_228 [16];
  undefined8 local_218;
  undefined1 local_208 [16];
  undefined8 local_1f8;
  undefined1 local_1e8 [16];
  undefined8 local_1d8;
  undefined1 local_1c8 [16];
  undefined8 local_1b8;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_188 [16];
  char *local_178;
  undefined1 local_168 [16];
  undefined8 local_158;
  undefined1 local_148 [8];
  int local_140;
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  longlong local_f0;
  undefined4 local_e8;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_318;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    local_2ec = param_2;
    local_2b8 = param_3;
    FUN_1401e7e86(local_128,param_1 + 0x60);
    FUN_1401e7e86(local_148,param_1 + 0xe8);
    FUN_1401e7e86(local_168,param_1 + 0x70);
    FUN_1401e7e86(local_188,param_1 + 0x80);
    FUN_1401e7e86(local_1a8,param_1 + 0xa0);
    FUN_1401e7e86(local_1c8,param_1 + 0x90);
    FUN_1401e7e86(local_1e8,param_1 + 0xb0);
    FUN_1401e7e86(local_208,param_1 + 0xc0);
    FUN_14482e566(local_128);
    local_2c0 = local_118;
    if (local_140 < 2) {
      local_2e0 = 0;
    }
    else {
      FUN_14482e566(local_148);
      local_2e0 = local_138;
    }
    FUN_14482e566(local_168);
    local_2c8 = local_158;
    if (param_7 == '\0') {
      FUN_14482e566(local_188);
    }
    else {
      local_178 = "server";
    }
    local_2e8 = local_178;
    FUN_14482e566(local_1a8);
    local_2d0 = local_198;
    FUN_14482e566(local_1c8);
    local_2d8 = local_1b8;
    FUN_14482e566(local_1e8);
    FUN_14482e566(local_208);
    iVar1 = *(int *)(param_1 + 0xd0);
    FUN_1401e7e86(local_228,param_4);
    FUN_1401e7e86(local_248,param_5);
    FUN_14482e566(local_228);
    FUN_14482e566(local_248);
    local_2f8 = &local_a8;
    local_a8 = 0;
    uStack_a0 = 0;
    local_98 = 0;
    uStack_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_f0 = *param_6;
    *param_6 = 0;
    local_e8 = (undefined4)param_6[1];
    *(undefined4 *)(param_6 + 1) = 0;
    local_c8 = FUN_143efe5f8;
    local_c0 = &LAB_143efe668;
    local_b8 = &LAB_143efe696;
    local_b0 = FUN_143efe6d2;
    local_100 = local_2ec;
    local_f8 = local_2b8;
    local_258 = local_218;
    local_250 = local_238;
    local_2b0 = local_2c0;
    local_2a8 = local_2e0;
    local_2a0 = local_2c8;
    local_298 = local_2e8;
    local_290 = local_2d0;
    local_288 = local_2d8;
    local_280 = local_1d8;
    local_278 = local_1f8;
    local_270 = (uint)(iVar1 == 1);
    local_268 = 0;
    uStack_260 = 0;
    local_108 = param_1;
    bifrost::session::loginCredentials(&local_2b0,&local_258,1);
    FUN_1401e7e48(local_248);
    FUN_1401e7e48(local_228);
    FUN_1401e7e48(local_208);
    FUN_1401e7e48(local_1e8);
    FUN_1401e7e48(local_1c8);
    FUN_1401e7e48(local_1a8);
    FUN_1401e7e48(local_188);
    FUN_1401e7e48(local_168);
    FUN_1401e7e48(local_148);
    FUN_1401e7e48(local_128);
  }
  if ((int)param_6[1] != 0) {
    puVar2 = (undefined8 *)*param_6;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef10b0;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_6,0,0,0x10);
    *(undefined4 *)(param_6 + 1) = 0;
  }
  if (*param_6 != 0) {
    FUN_1400020a8();
  }
LAB_143ef10b0:
  if ((local_48 ^ (ulonglong)auStack_318) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef10e6 FUN_143ef10e6 body=1751 status=ok
// SIG undefined FUN_143ef10e6(void)

void FUN_143ef10e6(longlong param_1,undefined4 param_2,undefined8 param_3,longlong *param_4)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined1 auStack_388 [32];
  longlong *local_368;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 local_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  uint local_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  longlong local_2c0;
  longlong local_2b8;
  longlong local_2b0;
  longlong local_2a8;
  undefined1 local_2a0 [16];
  longlong local_290;
  int local_288;
  undefined1 local_280 [16];
  longlong local_270;
  int local_268;
  undefined8 *local_260;
  int local_258;
  undefined1 local_250 [16];
  undefined8 local_240;
  undefined1 local_230 [16];
  undefined8 local_220;
  undefined1 local_210 [16];
  undefined8 local_200;
  undefined1 local_1f0 [16];
  undefined8 local_1e0;
  undefined1 local_1d0 [16];
  undefined8 local_1c0;
  undefined1 local_1b0 [16];
  undefined8 local_1a0;
  undefined1 local_190 [8];
  int local_188;
  undefined8 local_180;
  longlong local_170 [2];
  undefined8 local_160;
  undefined8 local_150;
  longlong local_148 [2];
  longlong *local_138;
  longlong *local_130;
  longlong local_128 [2];
  longlong *local_118;
  longlong *local_110;
  longlong local_108;
  undefined4 local_100;
  undefined8 local_f8;
  undefined8 *local_f0;
  undefined4 local_e8;
  code *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  code *local_b0;
  longlong local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  longlong local_90;
  undefined4 local_88;
  code *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    plVar4 = (longlong *)FUN_140a68038(1);
    if (plVar4 == (longlong *)0x0) {
      local_170[0] = 0;
      plVar4 = (longlong *)FUN_1401e3228();
      if (plVar4 == (longlong *)0x0) {
        if ((int)param_4[1] != 0) {
          plVar4 = (longlong *)*param_4;
          if (plVar4 == (longlong *)0x0) goto LAB_143ef12a1;
          (**(code **)(*plVar4 + 0x60))(plVar4,param_2,0,0);
        }
        goto LAB_143ef1266;
      }
    }
    (**(code **)(*plVar4 + 0x80))(plVar4,&local_118);
    if (local_118 == (longlong *)0x0) {
      if (((int)param_4[1] != 0) && (plVar4 = (longlong *)*param_4, plVar4 != (longlong *)0x0)) {
        (**(code **)(*plVar4 + 0x60))(plVar4,param_2,0,0);
      }
    }
    else {
      FUN_143eea996(local_128,plVar4);
      (**(code **)(*local_118 + 0x110))(local_118,&local_138,param_2);
      if (local_138 == (longlong *)0x0) {
        if (((int)param_4[1] != 0) && (plVar4 = (longlong *)*param_4, plVar4 != (longlong *)0x0)) {
          (**(code **)(*plVar4 + 0x60))(plVar4,param_2,0,0);
        }
      }
      else {
        (**(code **)(*plVar4 + 0x10))(plVar4,&local_150);
        uVar7 = (**(code **)(*local_138 + 0x30))(local_138,local_170);
        FUN_14657da9a(uVar7,local_148,local_170,local_150);
        if (local_170[0] != 0) {
          FUN_1400020a8();
        }
        FUN_1401e7e86(local_170,param_1 + 0x60);
        FUN_1401e7e86(local_190,param_1 + 0xe8);
        FUN_1401e7e86(local_1b0,param_1 + 0x70);
        FUN_1401e7e86(local_1d0,param_1 + 0x80);
        FUN_1401e7e86(local_1f0,param_1 + 0xa0);
        FUN_1401e7e86(local_210,param_1 + 0x90);
        FUN_1401e7e86(local_230,param_1 + 0xb0);
        FUN_1401e7e86(local_250,param_1 + 0xc0);
        FUN_14482e566(local_170);
        local_320 = local_160;
        if (local_188 < 2) {
          local_358 = 0;
        }
        else {
          FUN_14482e566(local_190);
          local_358 = local_180;
        }
        FUN_14482e566(local_1b0);
        local_328 = local_1a0;
        FUN_14482e566(local_1d0);
        local_330 = local_1c0;
        FUN_14482e566(local_1f0);
        local_338 = local_1e0;
        FUN_14482e566(local_210);
        local_340 = local_200;
        FUN_14482e566(local_230);
        local_348 = local_220;
        FUN_14482e566(local_250);
        local_350 = local_240;
        iVar2 = *(int *)(param_1 + 0xd0);
        local_260 = (undefined8 *)0x0;
        local_258 = 0;
        FUN_1446efa72(&local_260,0,3,0x10);
        local_258 = 3;
        *local_260 = &PTR_LAB_14b4dabc0;
        LOCK();
        UNLOCK();
        lVar6 = DAT_14c758608 + 1;
        lVar3 = DAT_14c758608 + 1;
        if (lVar6 == 0) {
          LOCK();
          UNLOCK();
          lVar6 = DAT_14c758608 + 2;
          lVar3 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar3;
        local_260[2] = lVar6;
        *local_260 = &PTR_FUN_14b4dab50;
        local_260[3] = param_1;
        *(undefined4 *)(local_260 + 4) = param_2;
        FUN_1401e7e86(local_280,local_128);
        FUN_1401e7e86(local_2a0,local_148);
        local_e8 = local_258;
        local_f0 = local_260;
        local_90 = *param_4;
        *param_4 = 0;
        local_88 = (undefined4)param_4[1];
        *(undefined4 *)(param_4 + 1) = 0;
        local_68 = FUN_143efeac0;
        local_60 = &LAB_143efeb30;
        local_58 = &LAB_143efeb5e;
        local_50 = FUN_143efeb9a;
        local_260 = (undefined8 *)0x0;
        local_258 = 0;
        local_c8 = FUN_143efe8ce;
        local_c0 = &LAB_143efea00;
        local_b8 = &LAB_143efea2e;
        local_b0 = FUN_143efea6a;
        local_108 = param_1;
        local_100 = param_2;
        local_f8 = param_3;
        local_a8 = param_1;
        local_a0 = param_2;
        local_98 = param_3;
        FUN_14482e566(local_2a0);
        local_2a8 = local_288 + local_290;
        local_2b0 = local_290;
        FUN_14482e566(local_280);
        local_2b8 = local_268 + local_270;
        local_2c0 = local_270;
        local_318 = local_320;
        local_310 = local_358;
        local_308 = local_328;
        local_300 = local_330;
        local_2f8 = local_338;
        local_2f0 = local_340;
        local_2e8 = local_348;
        local_2e0 = local_350;
        local_2d8 = (uint)(iVar2 == 1);
        local_2d0 = 0;
        uStack_2c8 = 0;
        local_368 = &local_a8;
        bifrost::session::loginThirdParty(&local_318,&local_2c0,&local_2b0,&local_108);
        FUN_1401e7e48(local_2a0);
        FUN_1401e7e48(local_280);
        if (local_258 == 0) {
LAB_143ef1702:
          if (local_260 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_260 != (undefined8 *)0x0) {
          (**(code **)*local_260)(local_260,0);
          FUN_1446efa72(&local_260,0,0,0x10);
          local_258 = 0;
          goto LAB_143ef1702;
        }
        FUN_1401e7e48(local_250);
        FUN_1401e7e48(local_230);
        FUN_1401e7e48(local_210);
        FUN_1401e7e48(local_1f0);
        FUN_1401e7e48(local_1d0);
        FUN_1401e7e48(local_1b0);
        FUN_1401e7e48(local_190);
        FUN_1401e7e48(local_170);
        if (local_148[0] != 0) {
          FUN_1400020a8();
        }
      }
      if (local_130 != (longlong *)0x0) {
        LOCK();
        plVar4 = local_130 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*local_130)(local_130);
          LOCK();
          piVar1 = (int *)((longlong)local_130 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_130 + 0x10))(local_130);
          }
        }
      }
      if (local_128[0] != 0) {
        FUN_1400020a8();
      }
    }
    if (local_110 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_110 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_110)(local_110);
        LOCK();
        piVar1 = (int *)((longlong)local_110 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_110 + 0x10))(local_110);
        }
      }
    }
  }
LAB_143ef1266:
  puVar5 = (undefined8 *)*param_4;
  if ((int)param_4[1] != 0) {
    if (puVar5 == (undefined8 *)0x0) goto LAB_143ef12a1;
    (**(code **)*puVar5)(puVar5,0);
    FUN_1446efa72(param_4,0,0,0x10);
    *(undefined4 *)(param_4 + 1) = 0;
    puVar5 = (undefined8 *)*param_4;
  }
  if (puVar5 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_143ef12a1:
  if ((local_48 ^ (ulonglong)auStack_388) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef17be FUN_143ef17be body=1066 status=ok
// SIG undefined FUN_143ef17be(void)

void FUN_143ef17be(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  int iVar1;
  undefined8 *puVar2;
  undefined1 auStack_2f8 [32];
  longlong *local_2d8;
  undefined8 local_2c8;
  undefined8 local_2c0;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined8 local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 local_278;
  undefined8 local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  uint local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  longlong local_238;
  longlong local_230;
  longlong local_228;
  longlong local_220;
  longlong local_218;
  longlong local_210;
  undefined1 local_208 [16];
  longlong local_1f8;
  int local_1f0;
  undefined1 local_1e8 [16];
  longlong local_1d8;
  int local_1d0;
  undefined1 local_1c8 [16];
  longlong local_1b8;
  int local_1b0;
  undefined1 local_1a8 [16];
  undefined8 local_198;
  undefined1 local_188 [16];
  undefined8 local_178;
  undefined1 local_168 [16];
  undefined8 local_158;
  longlong local_148 [2];
  undefined8 local_138;
  undefined1 local_128 [16];
  undefined8 local_118;
  undefined1 local_108 [16];
  undefined8 local_f8;
  undefined1 local_e8 [8];
  int local_e0;
  undefined8 local_d8;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  code *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2f8;
  if (*(char *)(param_1 + 0x58) == '\x01') {
    FUN_1401e7e86(local_c8,param_1 + 0x60);
    FUN_1401e7e86(local_e8,param_1 + 0xe8);
    FUN_1401e7e86(local_108,param_1 + 0x70);
    FUN_1400b22c2(local_148,"server");
    FUN_1401e7e86(local_128,local_148);
    if (local_148[0] != 0) {
      FUN_1400020a8();
    }
    FUN_1401e7e86(local_148,param_1 + 0xa0);
    FUN_1401e7e86(local_168,param_1 + 0x90);
    FUN_1401e7e86(local_188,param_1 + 0xb0);
    FUN_1401e7e86(local_1a8,param_1 + 0xc0);
    FUN_14482e566(local_c8);
    local_298 = local_b8;
    if (local_e0 < 2) {
      local_2c8 = 0;
    }
    else {
      FUN_14482e566(local_e8);
      local_2c8 = local_d8;
    }
    FUN_14482e566(local_108);
    local_2a0 = local_f8;
    FUN_14482e566(local_128);
    local_2a8 = local_118;
    FUN_14482e566(local_148);
    local_2b0 = local_138;
    FUN_14482e566(local_168);
    local_2b8 = local_158;
    FUN_14482e566(local_188);
    local_2c0 = local_178;
    FUN_14482e566(local_1a8);
    iVar1 = *(int *)(param_1 + 0xd0);
    FUN_1401e7e86(local_1c8,param_2);
    FUN_1401e7e86(local_1e8,param_3);
    FUN_1401e7e86(local_208,param_4);
    local_a0 = *param_5;
    *param_5 = 0;
    local_98 = (undefined4)param_5[1];
    *(undefined4 *)(param_5 + 1) = 0;
    local_68 = FUN_143efebf0;
    local_60 = &LAB_143efec56;
    local_58 = &LAB_143efec7c;
    local_50 = FUN_143efecb0;
    local_a8 = param_1;
    FUN_14482e566(local_208);
    local_210 = local_1f0 + local_1f8;
    local_218 = local_1f8;
    FUN_14482e566(local_1e8);
    local_220 = local_1d0 + local_1d8;
    local_228 = local_1d8;
    FUN_14482e566(local_1c8);
    local_230 = local_1b0 + local_1b8;
    local_238 = local_1b8;
    local_290 = local_298;
    local_288 = local_2c8;
    local_280 = local_2a0;
    local_278 = local_2a8;
    local_270 = local_2b0;
    local_268 = local_2b8;
    local_260 = local_2c0;
    local_258 = local_198;
    local_250 = (uint)(iVar1 == 1);
    local_248 = 0;
    uStack_240 = 0;
    local_2d8 = &local_a8;
    bifrost::session::loginServer(&local_290,&local_238,&local_228,&local_218);
    FUN_1401e7e48(local_208);
    FUN_1401e7e48(local_1e8);
    FUN_1401e7e48(local_1c8);
    FUN_1401e7e48(local_1a8);
    FUN_1401e7e48(local_188);
    FUN_1401e7e48(local_168);
    FUN_1401e7e48(local_148);
    FUN_1401e7e48(local_128);
    FUN_1401e7e48(local_108);
    FUN_1401e7e48(local_e8);
    FUN_1401e7e48(local_c8);
  }
  if ((int)param_5[1] != 0) {
    puVar2 = (undefined8 *)*param_5;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef1bb4;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_143ef1bb4:
  if ((local_48 ^ (ulonglong)auStack_2f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef1bea FUN_143ef1bea body=1046 status=ok
// SIG undefined FUN_143ef1bea(void)

void FUN_143ef1bea(longlong *param_1,uint param_2,longlong param_3,longlong param_4,
                  longlong *param_5)

{
  int *piVar1;
  ushort uVar2;
  ushort uVar3;
  longlong *plVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong unaff_RBP;
  undefined7 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  bool bVar15;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 *local_70;
  undefined1 local_68 [16];
  longlong local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if ((param_3 == 0) || (*(longlong *)(param_3 + 0x30) == 0)) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(undefined8 *)(*(longlong *)(param_3 + 0x30) + 0x360);
  }
  lVar9 = (**(code **)(*(longlong *)param_1[0x21] + 0x2b0))((longlong *)param_1[0x21],param_4);
  if (lVar9 == 0 || param_4 == 0) {
    lVar12 = (**(code **)(*param_1 + 0x2d0))(param_1,param_2,uVar14);
    if (lVar12 != 0) {
      FUN_145c39a2a(lVar12 + 0x40);
      *(undefined8 *)(lVar12 + 200) = 0;
      *(undefined8 *)(lVar12 + 0xd0) = 0;
      *(undefined8 *)(lVar12 + 0x2b8) = 0;
      (**(code **)(*(longlong *)param_1[0x21] + 0x2b8))((longlong *)param_1[0x21],lVar12);
    }
  }
  else {
    *(longlong *)(lVar9 + 0x2c0) = param_3;
    FUN_1400b22c2(&local_58,"server");
    iVar7 = (int)param_1[0x11];
    uVar11 = (undefined7)(unaff_RBP >> 8);
    if (iVar7 == (int)plStack_50) {
      unaff_RBP = CONCAT71(uVar11,1);
      if (1 < iVar7) {
        lVar12 = 0;
        while( true ) {
          uVar2 = *(ushort *)(param_1[0x10] + lVar12);
          uVar8 = (uint)uVar2;
          uVar3 = *(ushort *)(local_58 + lVar12);
          uVar10 = (uint)uVar3;
          if (uVar2 != uVar3) {
            if ((uVar3 | uVar2) < 0x80) {
              uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar3];
              if ((&DAT_149e05da0)[uVar2] == (&DAT_149e05da0)[uVar3]) goto LAB_143ef1ccb;
            }
            iVar7 = uVar8 - uVar10;
            goto LAB_143ef1d5f;
          }
          if (uVar2 == 0) break;
LAB_143ef1ccb:
          lVar12 = lVar12 + 2;
        }
        iVar7 = 0;
LAB_143ef1d5f:
        unaff_RBP = CONCAT71(uVar11,iVar7 == 0);
      }
    }
    else {
      unaff_RBP = CONCAT71(uVar11,(int)plStack_50 + iVar7 == 1);
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if ((char)unaff_RBP == '\0') {
      *(uint *)(lVar9 + 0x38) = param_2;
      FUN_140a67f50(&local_58,param_2);
      plVar5 = plStack_50;
      if ((longlong *)(lVar9 + 0x28) != &local_58) {
        *(longlong *)(lVar9 + 0x28) = local_58;
        local_58 = 0;
        plVar4 = *(longlong **)(lVar9 + 0x30);
        if (plStack_50 != plVar4) {
          plStack_50 = (longlong *)0x0;
          *(longlong **)(lVar9 + 0x30) = plVar5;
          if (plVar4 != (longlong *)0x0) {
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
          }
        }
      }
      plVar5 = plStack_50;
      if (plStack_50 != (longlong *)0x0) {
        LOCK();
        plVar4 = plStack_50 + 1;
        *(int *)plVar4 = (int)*plVar4 + -1;
        UNLOCK();
        if ((int)*plVar4 == 0) {
          (**(code **)*plStack_50)(plStack_50);
          LOCK();
          piVar1 = (int *)((longlong)plVar5 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar5 + 0x10))(plVar5);
          }
        }
      }
      FUN_1458ee840(lVar9);
      if (((*(char *)((longlong)param_1 + 0xd4) == '\x01') && (param_2 < 5)) &&
         (DAT_14c86aa68 == '\0')) {
        lVar12 = lVar9 + 0x40;
        *(uint *)(lVar9 + 0xa0) = param_2;
        if (param_3 == 0) {
          *(undefined4 *)(lVar9 + 0x98) = 0;
          uVar8 = 0;
        }
        else {
          uVar8 = *(uint *)(param_3 + 0xc);
          *(uint *)(lVar9 + 0x98) = uVar8;
          if ((int)uVar8 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          uVar8 = *(uint *)(lVar13 + 0x10);
          if (*(uint *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            uVar10 = DAT_14c964868 + 1;
            unaff_RBP = (ulonglong)uVar10;
            bVar15 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar15) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,unaff_RBP);
            }
            LOCK();
            uVar8 = *(uint *)(lVar13 + 0x10);
            bVar15 = uVar8 == 0;
            if (bVar15) {
              *(uint *)(lVar13 + 0x10) = uVar10;
              uVar8 = 0;
            }
            UNLOCK();
            if (bVar15) {
              uVar8 = uVar10;
            }
          }
        }
        *(uint *)(lVar9 + 0x9c) = uVar8;
        FUN_14657cae0(lVar12);
        FUN_146058384(lVar12);
        FUN_143eeae1e(lVar12);
        FUN_143eeaea8(lVar12,0);
      }
    }
    FUN_14620b6bc(lVar9);
  }
  if (((int)param_5[1] != 0) && (plVar5 = (longlong *)*param_5, plVar5 != (longlong *)0x0)) {
    (**(code **)(*plVar5 + 0x60))(plVar5,param_2,lVar9,param_4 != 0);
  }
  FUN_1400b22c2(local_68,&DAT_149e02088);
  local_78 = &local_58;
  local_58 = 0;
  plStack_50 = (longlong *)0x0;
  local_70 = local_68;
  FUN_1461de7a6(param_1 + 5,param_2,lVar9,CONCAT71((int7)(unaff_RBP >> 8),param_4 != 0) & 0xffffffff
               );
  FUN_1447a1747(local_58,(ulonglong)plStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((int)param_5[1] != 0) {
    puVar6 = (undefined8 *)*param_5;
    if (puVar6 == (undefined8 *)0x0) goto LAB_143ef1f73;
    (**(code **)*puVar6)(puVar6,0);
    FUN_1446efa72(param_5,0,0,0x10);
    *(undefined4 *)(param_5 + 1) = 0;
  }
  if (*param_5 != 0) {
    FUN_1400020a8();
  }
LAB_143ef1f73:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef2002 FUN_143ef2002 body=306 status=ok
// SIG undefined FUN_143ef2002(void)

void FUN_143ef2002(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined8 unaff_RBP;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined1 *local_60;
  longlong local_58;
  ulonglong uStack_50;
  undefined1 local_48 [16];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = (**(code **)(**(longlong **)(param_1 + 0x108) + 0x2b0))
                    (*(longlong **)(param_1 + 0x108),param_2,1);
  if (lVar3 != 0 && param_2 != 0) {
    FUN_14620b6bc(lVar3);
  }
  if (((int)param_3[1] != 0) && (plVar1 = (longlong *)*param_3, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,lVar3,param_2 != 0);
  }
  FUN_1400b22c2(local_48,&DAT_149e02088);
  local_68 = &local_58;
  local_58 = 0;
  uStack_50 = 0;
  local_60 = local_48;
  FUN_1461de7a6(param_1 + 0x28,0xffffffff,lVar3,
                CONCAT71((int7)((ulonglong)unaff_RBP >> 8),param_2 != 0) & 0xffffffff);
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((int)param_3[1] != 0) {
    puVar2 = (undefined8 *)*param_3;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef210a;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(param_3,0,0,0x10);
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
LAB_143ef210a:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef2136 FUN_143ef2136 body=118 status=ok
// SIG undefined FUN_143ef2136(void)

void FUN_143ef2136(longlong param_1)

{
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  undefined1 local_38 [16];
  longlong local_28;
  int local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1401e7e86(local_38);
  FUN_14482e566(local_38);
  local_40 = local_20 + local_28;
  local_48 = local_28;
  bifrost::session::updateServiceTicket2(*(undefined8 *)(param_1 + 0x2b8));
  FUN_1401e7e48(local_38);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef21ae FUN_143ef21ae body=449 status=ok
// SIG undefined FUN_143ef21ae(void)

void FUN_143ef21ae(longlong param_1,undefined4 param_2,char param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined8 *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = &DAT_14c872ce8;
  FUN_14052bb08(DAT_14c872ce0,L"ShiftAuthParams",L"GenerateNewAccessToken",param_1 + 0x280);
  if ((param_3 == '\0' && *(char *)(param_1 + 0x280) == '\0') && (1 < *(int *)(param_1 + 0x278))) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  FUN_1446efa72(&local_48,0,3,0x10);
  puVar2 = local_48;
  local_40 = 3;
  *local_48 = &PTR_LAB_149e06450;
  LOCK();
  UNLOCK();
  lVar3 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar3 == 0) {
    LOCK();
    UNLOCK();
    lVar3 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  local_48[2] = lVar3;
  *local_48 = &PTR_FUN_14b4dad10;
  local_48[3] = 0;
  iVar4 = 0;
  if (param_1 != 0) {
    uVar1 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_48 + 3) = uVar1;
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
      iVar5 = DAT_14c964868 + 1;
      bVar7 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar4;
      if (bVar7) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar5);
      }
      LOCK();
      iVar4 = *(int *)(lVar6 + 0x10);
      bVar7 = iVar4 == 0;
      if (bVar7) {
        *(int *)(lVar6 + 0x10) = iVar5;
        iVar4 = 0;
      }
      UNLOCK();
      if (bVar7) {
        iVar4 = iVar5;
      }
    }
  }
  *(int *)((longlong)puVar2 + 0x1c) = iVar4;
  puVar2[4] = param_1;
  FUN_143eeaa66(param_1,param_2,&local_48);
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef2388 FUN_143ef2388 body=539 status=ok
// SIG undefined FUN_143ef2388(void)

void FUN_143ef2388(longlong param_1)

{
  int iVar1;
  undefined1 auStack_c8 [40];
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  longlong local_80 [2];
  undefined1 local_70 [16];
  longlong local_60;
  int local_58;
  undefined1 local_50 [16];
  longlong local_40;
  int local_38;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14593413b(local_30);
  FUN_1401e7e86(local_50,local_30);
  FUN_1459341e1(local_80);
  FUN_1401e7e86(local_70,local_80);
  if (local_80[0] != 0) {
    FUN_1400020a8();
  }
  FUN_14482e566(local_70);
  local_88 = local_58 + local_60;
  local_90 = local_60;
  FUN_14482e566(local_50);
  local_98 = local_38 + local_40;
  local_a0 = local_40;
  bifrost::session::setLanguage(*(undefined8 *)(param_1 + 0x2b8),&local_a0,&local_90);
  FUN_145be9a0d(*(undefined8 *)(param_1 + 0x2c8),*(undefined4 *)(param_1 + 0x2d0));
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (*(int *)(param_1 + 0x2d4) != 0) {
    FUN_14657e584(param_1 + 0x2c8);
  }
  FUN_145be99e5(*(undefined8 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2e0));
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (*(int *)(param_1 + 0x2e4) != 0) {
    FUN_148a65722(param_1 + 0x2d8,0);
  }
  iVar1 = *(int *)(param_1 + 0x344);
  FUN_14581c229(*(undefined8 *)(param_1 + 0x338),*(undefined4 *)(param_1 + 0x340));
  *(undefined4 *)(param_1 + 0x340) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x344) != 0)) {
    FUN_148a65384(param_1 + 0x338,0);
  }
  iVar1 = *(int *)(param_1 + 0x354);
  FUN_14581c24f(*(undefined8 *)(param_1 + 0x348),*(undefined4 *)(param_1 + 0x350));
  *(undefined4 *)(param_1 + 0x350) = 0;
  if ((iVar1 < 0) && (*(int *)(param_1 + 0x354) != 0)) {
    FUN_148a653f2(param_1 + 0x348,0);
  }
  FUN_145be9a8c(*(undefined8 *)(param_1 + 0x370),*(undefined4 *)(param_1 + 0x378));
  *(undefined4 *)(param_1 + 0x378) = 0;
  if (*(int *)(param_1 + 0x37c) != 0) {
    FUN_148a67e2e(param_1 + 0x370,0);
  }
  FUN_1401e7e48(local_70);
  FUN_1401e7e48(local_50);
  if (local_30[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef25a4 FUN_143ef25a4 body=43 status=ok
// SIG undefined FUN_143ef25a4(void)

void FUN_143ef25a4(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 143ef25e4 FUN_143ef25e4 body=467 status=ok
// SIG undefined FUN_143ef25e4(void)

void FUN_143ef25e4(uint *param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_1[1] == 0) {
    return;
  }
  uVar1 = *param_1;
  if ((int)uVar1 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar1) {
    return;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar4 + 2) != param_1[1]) {
    return;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return;
  }
  lVar3 = 0;
  iVar7 = *(int *)(param_2 + 8);
  if (4 < *(int *)(param_2 + 8) - 1U) {
    iVar7 = 0;
  }
  if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
    lVar3 = *plVar4;
  }
  FUN_145c39a2a(lVar3 + 0x40);
  *(undefined8 *)(lVar3 + 200) = 0;
  *(undefined8 *)(lVar3 + 0xd0) = 0;
  *(undefined8 *)(lVar3 + 0x2b8) = 0;
  lVar3 = FUN_140773fe2();
  if ((lVar3 != 0) && (plVar4 = *(longlong **)(lVar3 + 0x108), plVar4 != (longlong *)0x0)) {
    if (param_1[1] == 0) {
LAB_143ef27ac:
      uVar6 = 0;
    }
    else {
      uVar1 = *param_1;
      uVar6 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        puVar5 = (undefined8 *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((puVar5 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
        goto LAB_143ef27ac;
        uVar6 = *puVar5;
      }
    }
    (**(code **)(*plVar4 + 0x2b8))(plVar4,uVar6);
  }
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar3 = 0;
    if (-1 < (int)uVar2) {
      uVar6 = 0;
      if (DAT_14c9647dc <= (int)uVar2) goto LAB_143ef2775;
      plVar4 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((plVar4 == (longlong *)0x0) || (*(uint *)(plVar4 + 2) != uVar1)) ||
         ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) {
        lVar3 = 0;
      }
      else {
        lVar3 = *plVar4;
      }
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if (((puVar5 != (undefined8 *)0x0) && (*(uint *)(puVar5 + 2) == uVar1)) &&
         ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)) {
        uVar6 = *puVar5;
        goto LAB_143ef2775;
      }
    }
  }
  uVar6 = 0;
LAB_143ef2775:
  if ((*(int *)(lVar3 + 0x120) != 0) &&
     (plVar4 = *(longlong **)(lVar3 + 0x118), plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143ef27a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x60))(plVar4,uVar6,iVar7);
    return;
  }
  return;
}



// FUNCTION 143ef27ca FUN_143ef27ca body=502 status=ok
// SIG undefined FUN_143ef27ca(void)

void FUN_143ef27ca(uint *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  void *_Src;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  
  uVar3 = param_1[1];
  if (uVar3 == 0) {
    return;
  }
  uVar2 = *param_1;
  if ((int)uVar2 < 0) {
    return;
  }
  if (DAT_14c9647dc <= (int)uVar2) {
    return;
  }
  plVar4 = (longlong *)
           ((ulonglong)((uVar2 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
  if (plVar4 == (longlong *)0x0) {
    return;
  }
  if (*(uint *)(plVar4 + 2) != uVar3) {
    return;
  }
  iVar8 = *param_2;
  if ((*(uint *)(plVar4 + 1) & 0x10200000) != 0) {
    return;
  }
  if (iVar8 - 1U < 8) {
LAB_143ef282e:
    uVar2 = *param_1;
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_143ef2876;
    puVar7 = (undefined8 *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((puVar7 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar7 + 2) == uVar3 && ((*(uint *)(puVar7 + 1) & 0x10200000) == 0)))) {
      uVar6 = *puVar7;
      goto LAB_143ef2876;
    }
  }
  else {
    if (iVar8 != 0) {
      iVar8 = 8;
      goto LAB_143ef282e;
    }
    if ((*(uint *)(plVar4 + 1) & 0x10200000) == 0) {
      lVar5 = *plVar4;
    }
    else {
      lVar5 = 0;
    }
    puVar1 = (uint *)(lVar5 + 0x100);
    if (puVar1 != param_1 + 2) {
      uVar3 = param_1[4];
      _Src = *(void **)(param_1 + 2);
      *(uint *)(lVar5 + 0x108) = uVar3;
      if (uVar3 == 0 && *(int *)(lVar5 + 0x10c) == 0) {
        *(undefined4 *)(lVar5 + 0x10c) = 0;
      }
      else {
        FUN_1446dd670(puVar1,uVar3);
        if (uVar3 != 0) {
          memcpy(*(void **)puVar1,_Src,(longlong)(int)uVar3 * 2);
        }
      }
    }
    uVar3 = param_1[1];
    lVar5 = 0x128;
    iVar8 = 0;
    if (uVar3 == 0) {
LAB_143ef29b1:
      uVar6 = 0;
    }
    else {
      uVar2 = *param_1;
      uVar6 = 0;
      if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
        plVar4 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if ((plVar4 == (longlong *)0x0) ||
           ((*(uint *)(plVar4 + 2) != uVar3 || ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)))) {
          lVar5 = 0;
        }
        else {
          lVar5 = *plVar4;
        }
        lVar5 = lVar5 + 0x128;
        puVar7 = (undefined8 *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
        if (((puVar7 == (undefined8 *)0x0) || (*(uint *)(puVar7 + 2) != uVar3)) ||
           ((*(uint *)(puVar7 + 1) & 0x10200000) != 0)) goto LAB_143ef29b1;
        uVar6 = *puVar7;
      }
    }
    FUN_148a63198(lVar5,uVar6);
    uVar3 = param_1[1];
    if (uVar3 != 0) goto LAB_143ef282e;
  }
  uVar6 = 0;
LAB_143ef2876:
  if ((param_1[8] != 0) && (plVar4 = *(longlong **)(param_1 + 6), plVar4 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000143ef2898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x60))(plVar4,uVar6,iVar8);
    return;
  }
  return;
}



// FUNCTION 143ef29c0 FUN_143ef29c0 body=132 status=ok
// SIG undefined FUN_143ef29c0(void)

void FUN_143ef29c0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  FUN_148a6323a(param_1 + 3,param_2 + 3);
  return;
}



// FUNCTION 143ef2a44 FUN_143ef2a44 body=174 status=ok
// SIG undefined FUN_143ef2a44(void)

void FUN_143ef2a44(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[3] = param_2[3];
  param_2[3] = 0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_2 + 4) = 0;
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  if (param_2[1] != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ef2af2 FUN_143ef2af2 body=103 status=ok
// SIG undefined FUN_143ef2af2(void)

void FUN_143ef2af2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef2b36;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143ef2b36:
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143ef2b5a FUN_143ef2b5a body=826 status=ok
// SIG undefined FUN_143ef2b5a(void)

void FUN_143ef2b5a(longlong *param_1,undefined1 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  uint uStack_94;
  uint3 uStack_90;
  undefined1 uStack_8d;
  undefined4 uStack_8c;
  undefined4 local_88;
  longlong local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  uVar2 = _uStack_90;
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uStack_95 = param_2[0xc];
  local_98 = *param_2;
  uStack_97 = param_2[4];
  uStack_96 = param_2[8];
  uStack_90 = (uint3)*(undefined4 *)(param_2 + 0x20) & 0xff |
              (uint3)(((ulonglong)(byte)param_2[0x24] << 0x30) >> 0x28) |
              (uint3)(((ulonglong)*(uint *)(param_2 + 0x28) << 0x38) >> 0x28);
  uStack_94 = *(uint *)(param_2 + 0x10) & 0xff |
              (*(int *)(param_2 + 0x18) << 0x18 | (uint)(byte)param_2[0x14] << 0x10) >> 8 |
              (uint)(((ulonglong)(byte)param_2[0x1c] << 0x20) >> 8);
  uStack_8d = SUB41(uVar2,3);
  uStack_8c = *(undefined4 *)(param_2 + 0x34);
  local_88 = *(undefined4 *)(param_2 + 0x38);
  local_a8 = *(undefined4 *)(param_2 + 0x40);
  uStack_a4 = *(undefined4 *)(param_2 + 0x44);
  uStack_a0 = *(undefined4 *)(param_2 + 0x48);
  uStack_9c = *(undefined4 *)(param_2 + 0x4c);
  FUN_14152e0f7();
  local_b8 = *(undefined4 *)(param_2 + 0x50);
  uStack_b4 = *(undefined4 *)(param_2 + 0x54);
  uStack_b0 = *(undefined4 *)(param_2 + 0x58);
  uStack_ac = *(undefined4 *)(param_2 + 0x5c);
  FUN_14152e0f7(&local_70);
  local_c8 = *(undefined4 *)(param_2 + 0x60);
  uStack_c4 = *(undefined4 *)(param_2 + 100);
  uStack_c0 = *(undefined4 *)(param_2 + 0x68);
  uStack_bc = *(undefined4 *)(param_2 + 0x6c);
  FUN_14152e0f7(&local_60);
  local_d8 = *(undefined4 *)(param_2 + 0x70);
  uStack_d4 = *(undefined4 *)(param_2 + 0x74);
  uStack_d0 = *(undefined4 *)(param_2 + 0x78);
  uStack_cc = *(undefined4 *)(param_2 + 0x7c);
  FUN_14152e0f7(&local_50);
  local_e8 = *(undefined4 *)(param_2 + 0x90);
  uStack_e4 = *(undefined4 *)(param_2 + 0x94);
  uStack_e0 = *(undefined4 *)(param_2 + 0x98);
  uStack_dc = *(undefined4 *)(param_2 + 0x9c);
  FUN_14152e0f7(&local_40);
  puVar1 = (undefined4 *)*param_1;
  puVar1[4] = local_88;
  *puVar1 = CONCAT13(uStack_95,CONCAT12(uStack_96,CONCAT11(uStack_97,local_98)));
  puVar1[1] = uStack_94;
  puVar1[2] = _uStack_90;
  puVar1[3] = uStack_8c;
  if (puVar1 == (undefined4 *)&local_98) {
    if (local_40 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(puVar1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 6) = local_80;
    local_80 = 0;
    puVar1[8] = (undefined4)local_78;
    puVar1[9] = local_78._4_4_;
    local_78 = 0;
    if (*(longlong *)(puVar1 + 10) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 10) = local_70;
    local_70 = 0;
    puVar1[0xc] = (undefined4)local_68;
    puVar1[0xd] = local_68._4_4_;
    local_68 = 0;
    if (*(longlong *)(puVar1 + 0xe) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 0xe) = local_60;
    local_60 = 0;
    puVar1[0x10] = (undefined4)local_58;
    puVar1[0x11] = local_58._4_4_;
    local_58 = 0;
    if (*(longlong *)(puVar1 + 0x12) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 0x12) = local_50;
    local_50 = 0;
    puVar1[0x14] = (undefined4)local_48;
    puVar1[0x15] = local_48._4_4_;
    local_48 = 0;
    if (*(longlong *)(puVar1 + 0x16) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(puVar1 + 0x16) = local_40;
    local_40 = 0;
    puVar1[0x18] = (undefined4)local_38;
    puVar1[0x19] = local_38._4_4_;
    local_38 = 0;
  }
  if (local_50 != 0) {
    FUN_1400020a8();
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if (local_80 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef2e96 FUN_143ef2e96 body=1090 status=ok
// SIG undefined FUN_143ef2e96(void)

/* WARNING: Removing unreachable block (ram,0x000143ef311b) */
/* WARNING: Removing unreachable block (ram,0x000143ef312d) */

void FUN_143ef2e96(uint *param_1,char *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  ulonglong uVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined1 auStack_238 [39];
  char local_211;
  uint *local_210;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 uStack_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined1 local_1a0 [16];
  undefined1 local_190 [16];
  undefined1 local_180 [16];
  undefined1 local_170 [16];
  longlong local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  char local_100;
  undefined1 local_f8 [80];
  char local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  char local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_238;
  if (((((param_1[1] == 0) || (uVar5 = *param_1, (int)uVar5 < 0)) || (DAT_14c9647dc <= (int)uVar5))
      || ((lVar10 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8), lVar10 == 0 ||
          (*(uint *)(lVar10 + 0x10) != param_1[1])))) || ((*(uint *)(lVar10 + 8) & 0x10200000) != 0)
     ) goto LAB_143ef2f06;
  local_1b8 = *param_3;
  uStack_1b4 = param_3[1];
  uStack_1b0 = param_3[2];
  uStack_1ac = param_3[3];
  local_211 = *param_2;
  local_210 = param_1;
  FUN_14152e0f7(local_1a0);
  local_1c8 = param_3[4];
  uStack_1c4 = param_3[5];
  uStack_1c0 = param_3[6];
  uStack_1bc = param_3[7];
  FUN_14152e0f7(local_190);
  local_1d8 = param_3[8];
  uStack_1d4 = param_3[9];
  uStack_1d0 = param_3[10];
  uStack_1cc = param_3[0xb];
  FUN_14152e0f7(local_180);
  local_1e8 = param_3[0xc];
  uStack_1e4 = param_3[0xd];
  uStack_1e0 = param_3[0xe];
  uStack_1dc = param_3[0xf];
  FUN_14152e0f7(local_170);
  local_160 = 0;
  uStack_158 = 0;
  puVar9 = *(undefined4 **)(param_3 + 0x10);
  puVar1 = *(undefined4 **)(param_3 + 0x12);
  if (puVar9 != puVar1) {
    do {
      local_1f8 = *puVar9;
      uStack_1f4 = puVar9[1];
      uStack_1f0 = puVar9[2];
      uStack_1ec = puVar9[3];
      FUN_14152e0f7(&local_a0,&local_1f8);
      local_208 = puVar9[4];
      uStack_204 = puVar9[5];
      uStack_200 = puVar9[6];
      uStack_1fc = puVar9[7];
      FUN_14152e0f7(&uStack_90,&local_208);
      uVar3 = uStack_158;
      lVar10 = (longlong)(int)uStack_158;
      uVar5 = (int)uStack_158 + 1;
      uStack_158 = CONCAT44(uStack_158._4_4_,uVar5);
      if (uStack_158._4_4_ < uVar5) {
        FUN_148a632be(&local_160,uVar3 & 0xffffffff);
      }
      lVar10 = lVar10 * 0x20;
      *(undefined8 *)(local_160 + lVar10) = 0;
      *(undefined8 *)(local_160 + lVar10) = local_a0;
      *(undefined4 *)(local_160 + 8 + lVar10) = (undefined4)local_98;
      *(undefined4 *)(local_160 + 0xc + lVar10) = local_98._4_4_;
      *(undefined8 *)(local_160 + 0x10 + lVar10) = 0;
      *(undefined8 *)(local_160 + 0x10 + lVar10) = uStack_90;
      *(undefined4 *)(local_160 + 0x18 + lVar10) = (undefined4)local_88;
      *(undefined4 *)(local_160 + 0x1c + lVar10) = local_88._4_4_;
      local_88 = 0;
      uStack_90 = 0;
      local_98 = 0;
      local_a0 = 0;
      puVar9 = puVar9 + 8;
    } while (puVar9 != puVar1);
  }
  puVar2 = local_210;
  if (((local_210[4] != 0) && (*(longlong **)(local_210 + 2) != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(**(longlong **)(local_210 + 2) + 0x30))(), cVar4 != '\0')) {
    local_a8 = '\0';
    if (local_211 == '\0') {
      local_100 = '\0';
    }
    else {
      FUN_148a63344(local_f8,local_1a0);
      local_a8 = '\x01';
      local_100 = '\x01';
      FUN_148a63344(&local_150,local_f8);
    }
    if (puVar2[1] == 0) {
LAB_143ef32d2:
      uVar7 = 0;
    }
    else {
      uVar5 = *puVar2;
      uVar7 = 0;
      if ((-1 < (int)uVar5) && ((int)uVar5 < DAT_14c9647dc)) {
        puVar8 = (undefined8 *)
                 ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
        if ((puVar8 == (undefined8 *)0x0) ||
           ((*(uint *)(puVar8 + 2) != puVar2[1] || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
        goto LAB_143ef32d2;
        uVar7 = *puVar8;
      }
    }
    if (puVar2[4] == 0) {
      plVar6 = (longlong *)0x0;
    }
    else {
      plVar6 = *(longlong **)(puVar2 + 2);
    }
    local_50 = local_100;
    if (local_100 == '\x01') {
      local_a0 = local_150;
      local_150 = 0;
      local_98 = local_148;
      uStack_90 = uStack_140;
      local_148 = 0;
      uStack_140 = 0;
      local_88 = local_138;
      uStack_80 = uStack_130;
      local_138 = 0;
      uStack_130 = 0;
      local_78 = local_128;
      uStack_70 = uStack_120;
      local_128 = 0;
      uStack_120 = 0;
      local_68 = local_118;
      uStack_60 = uStack_110;
      local_118 = 0;
      uStack_110 = 0;
      local_58 = (undefined4)local_108;
      local_54 = local_108._4_4_;
      local_108 = 0;
    }
    (**(code **)(*plVar6 + 0x58))(plVar6,uVar7,&local_a0);
    if (local_100 == '\x01') {
      FUN_148a5afb4(&local_150);
      local_100 = '\0';
    }
    if (local_a8 == '\x01') {
      FUN_148a5afb4(local_f8);
    }
  }
  FUN_148a5afb4(local_1a0);
LAB_143ef2f06:
  if ((local_48 ^ (ulonglong)auStack_238) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef3334 FUN_143ef3334 body=86 status=ok
// SIG undefined FUN_143ef3334(void)

void FUN_143ef3334(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef338a FUN_143ef338a body=689 status=ok
// SIG undefined FUN_143ef338a(void)

void FUN_143ef338a(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  longlong lVar11;
  undefined4 *puVar12;
  undefined1 auStack_118 [32];
  undefined4 *local_f8;
  undefined4 *local_f0;
  longlong *local_e8;
  undefined4 *local_e0;
  longlong local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar10 = (undefined4 *)*param_2;
  local_f0 = (undefined4 *)param_2[1];
  uVar9 = (ulonglong)((longlong)local_f0 - (longlong)puVar10) >> 5;
  local_d8 = 0;
  uStack_d0 = 0;
  if ((int)uVar9 < 0) {
LAB_143ef3635:
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar9 & 0xffffffff);
  }
  local_e8 = param_1;
  if ((int)uVar9 != 0) {
    FUN_148a63542(&local_d8);
  }
  if (puVar10 != local_f0) {
    do {
      local_c8 = 0;
      uStack_c0 = 0;
      local_b8 = 0;
      uStack_b0 = 0;
      local_a8 = *puVar10;
      uStack_a4 = puVar10[1];
      uStack_a0 = puVar10[2];
      uStack_9c = puVar10[3];
      FUN_14152e0f7(&local_70,&local_a8);
      local_c8 = CONCAT44(uStack_6c,local_70);
      uStack_c0 = CONCAT44(uStack_64,uStack_68);
      puVar12 = *(undefined4 **)(puVar10 + 4);
      local_f8 = *(undefined4 **)(puVar10 + 6);
      uVar9 = (ulonglong)((longlong)local_f8 - (longlong)puVar12) >> 5;
      if ((int)uVar9 < 0) goto LAB_143ef3635;
      if ((int)uVar9 != 0) {
        FUN_148a6365a(&local_b8);
        puVar12 = *(undefined4 **)(puVar10 + 4);
        local_f8 = *(undefined4 **)(puVar10 + 6);
      }
      for (; local_e0 = puVar10, puVar12 != local_f8; puVar12 = puVar12 + 8) {
        local_88 = *puVar12;
        uStack_84 = puVar12[1];
        uStack_80 = puVar12[2];
        uStack_7c = puVar12[3];
        FUN_14152e0f7(&local_70,&local_88);
        uVar6 = uStack_64;
        uVar4 = uStack_68;
        uVar2 = CONCAT44(uStack_6c,local_70);
        local_98 = puVar12[4];
        uStack_94 = puVar12[5];
        uStack_90 = puVar12[6];
        uStack_8c = puVar12[7];
        FUN_14152e0f7(&local_70);
        uVar7 = uStack_64;
        uVar5 = uStack_68;
        uVar3 = CONCAT44(uStack_6c,local_70);
        lVar11 = (longlong)(int)uStack_b0;
        uVar8 = (int)uStack_b0 + 1;
        uStack_b0 = CONCAT44(uStack_b0._4_4_,uVar8);
        if (uStack_b0._4_4_ < uVar8) {
          FUN_148a636b0(&local_b8);
        }
        lVar11 = lVar11 * 0x20;
        *(undefined8 *)(local_b8 + lVar11) = uVar2;
        *(undefined4 *)(local_b8 + 8 + lVar11) = uVar4;
        *(undefined4 *)(local_b8 + 0xc + lVar11) = uVar6;
        *(undefined8 *)(local_b8 + 0x10 + lVar11) = uVar3;
        *(undefined4 *)(local_b8 + 0x18 + lVar11) = uVar5;
        *(undefined4 *)(local_b8 + 0x1c + lVar11) = uVar7;
        puVar10 = local_e0;
      }
      lVar11 = (longlong)(int)uStack_d0;
      uVar8 = (int)uStack_d0 + 1;
      uStack_d0 = CONCAT44(uStack_d0._4_4_,uVar8);
      if (uStack_d0._4_4_ < uVar8) {
        FUN_148a635d4(&local_d8);
      }
      lVar11 = lVar11 * 0x20;
      *(undefined8 *)(local_d8 + lVar11) = 0;
      *(undefined8 *)(local_d8 + lVar11) = local_c8;
      local_c8 = 0;
      *(undefined4 *)(local_d8 + 8 + lVar11) = (undefined4)uStack_c0;
      *(undefined4 *)(local_d8 + 0xc + lVar11) = uStack_c0._4_4_;
      uStack_c0 = 0;
      *(undefined8 *)(local_d8 + 0x10 + lVar11) = 0;
      *(longlong *)(local_d8 + 0x10 + lVar11) = local_b8;
      local_b8 = 0;
      *(int *)(local_d8 + 0x18 + lVar11) = (int)uStack_b0;
      *(uint *)(local_d8 + 0x1c + lVar11) = uStack_b0._4_4_;
      uStack_b0 = 0;
      FUN_148a63598(&local_c8);
      puVar10 = local_e0 + 8;
    } while (puVar10 != local_f0);
  }
  if (((int)local_e8[1] != 0) && (plVar1 = (longlong *)*local_e8, plVar1 != (longlong *)0x0)) {
    (**(code **)(*plVar1 + 0x60))(plVar1,&local_d8);
  }
  FUN_148a63772(local_d8,uStack_d0 & 0xffffffff);
  if (local_d8 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef367c FUN_143ef367c body=79 status=ok
// SIG undefined FUN_143ef367c(void)

void FUN_143ef367c(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef3726 FUN_143ef3726 body=79 status=ok
// SIG undefined FUN_143ef3726(void)

void FUN_143ef3726(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef37d0 FUN_143ef37d0 body=79 status=ok
// SIG undefined FUN_143ef37d0(void)

void FUN_143ef37d0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef3820 FUN_143ef3820 body=208 status=ok
// SIG undefined FUN_143ef3820(void)

void FUN_143ef3820(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x800) {
          uVar1 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[param_2]];
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
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 143ef38f0 FUN_143ef38f0 body=262 status=ok
// SIG undefined FUN_143ef38f0(void)

void FUN_143ef38f0(longlong param_1,int param_2)

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



// FUNCTION 143ef39f6 FUN_143ef39f6 body=224 status=ok
// SIG undefined FUN_143ef39f6(void)

void FUN_143ef39f6(longlong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  local_58 = param_3[8];
  uStack_54 = param_3[9];
  uStack_50 = param_3[10];
  uStack_4c = param_3[0xb];
  uVar1 = *param_2;
  FUN_143eedba9(&local_48,&local_78);
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))
              (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,&local_48);
  }
  FUN_143ef25a4(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63031(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63057(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef3b16 FUN_143ef3b16 body=79 status=ok
// SIG undefined FUN_143ef3b16(void)

void FUN_143ef3b16(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef3b66 FUN_143ef3b66 body=477 status=ok
// SIG undefined FUN_143ef3b66(void)

void FUN_143ef3b66(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined1 local_68 [8];
  longlong local_60;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_a8 = *(undefined8 *)(param_3 + 8);
  local_c8 = *param_3;
  uStack_c4 = param_3[1];
  uStack_c0 = param_3[2];
  uStack_bc = param_3[3];
  local_b8 = param_3[4];
  uStack_b4 = param_3[5];
  uStack_b0 = param_3[6];
  uStack_ac = param_3[7];
  lVar5 = FUN_140773fe2();
  if ((lVar5 != 0) && (plVar2 = *(longlong **)(lVar5 + 0x108), plVar2 != (longlong *)0x0)) {
    lVar5 = *param_1;
    local_98 = local_c8;
    uStack_94 = uStack_c4;
    uStack_90 = uStack_c0;
    uStack_8c = uStack_bc;
    local_88 = local_b8;
    uStack_84 = uStack_b4;
    uStack_80 = uStack_b0;
    uStack_7c = uStack_ac;
    local_78 = local_a8;
    FUN_148a5d99d(local_68);
    uVar6 = (**(code **)(*plVar2 + 0x2b0))(plVar2,param_2,0);
    iVar1 = *(int *)(lVar5 + 0x1c);
    *(int *)(lVar5 + 0x1c) = iVar1 + 1;
    lVar11 = (longlong)*(int *)(lVar5 + 0x10);
    if (lVar11 < 1) {
      *(int *)(lVar5 + 0x1c) = iVar1;
    }
    else {
      plVar2 = (longlong *)(lVar5 + 8);
      uVar10 = lVar11 + 1;
      lVar11 = lVar11 * 0x10 + -8;
      bVar8 = 0;
      do {
        if (((*(int *)(*plVar2 + lVar11) == 0) ||
            (plVar3 = *(longlong **)(*plVar2 + -8 + lVar11), plVar3 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar3 + 0x60))(plVar3,uVar6,local_68), cVar4 == '\0')) {
          bVar8 = 1;
        }
        uVar10 = uVar10 - 1;
        lVar11 = lVar11 + -0x10;
      } while (1 < uVar10);
      iVar1 = *(int *)(lVar5 + 0x1c);
      *(int *)(lVar5 + 0x1c) = iVar1 + -1;
      if ((bool)(bVar8 & iVar1 < 2)) {
        iVar1 = *(int *)(lVar5 + 0x10);
        iVar7 = iVar1;
        if (0 < iVar1) {
          iVar9 = 0;
          do {
            if (((*(int *)(*plVar2 + 8 + (longlong)iVar9 * 0x10) == 0) ||
                (plVar3 = *(longlong **)(*plVar2 + (longlong)iVar9 * 0x10),
                plVar3 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar3 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(plVar2,iVar9);
              FUN_14005b248(plVar2);
            }
            else {
              iVar9 = iVar9 + 1;
            }
            iVar7 = *(int *)(lVar5 + 0x10);
          } while (iVar9 < iVar7);
        }
        iVar9 = 2;
        if (2 < iVar7 * 2) {
          iVar9 = iVar7 * 2;
        }
        *(int *)(lVar5 + 0x18) = iVar9;
        if ((iVar9 < iVar1) && (*(int *)(lVar5 + 0x14) != iVar7)) {
          FUN_14045812c(plVar2);
        }
      }
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef3d56 FUN_143ef3d56 body=29 status=ok
// SIG undefined FUN_143ef3d56(void)

undefined8 FUN_143ef3d56(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ef3d88 FUN_143ef3d88 body=93 status=ok
// SIG undefined FUN_143ef3d88(void)

void FUN_143ef3d88(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da370;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ef3de6 FUN_143ef3de6 body=93 status=ok
// SIG undefined FUN_143ef3de6(void)

void FUN_143ef3de6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e02020;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da370;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ef3e44 FUN_143ef3e44 body=126 status=ok
// SIG undefined FUN_143ef3e44(void)

void FUN_143ef3e44(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e02020;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da370;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ef3eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ef3ec2 FUN_143ef3ec2 body=107 status=ok
// SIG undefined FUN_143ef3ec2(void)

undefined8 FUN_143ef3ec2(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_143eeeb60(lVar1);
  BVar2 = QueryPerformanceCounter(&local_20);
  *(double *)(lVar1 + 0x80) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef3f2e FUN_143ef3f2e body=107 status=ok
// SIG undefined FUN_143ef3f2e(void)

undefined8 FUN_143ef3f2e(longlong param_1)

{
  longlong lVar1;
  BOOL BVar2;
  undefined4 extraout_var;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *(longlong *)(param_1 + 0x18);
  FUN_143eeeb60(lVar1);
  BVar2 = QueryPerformanceCounter(&local_20);
  *(double *)(lVar1 + 0x80) = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return CONCAT71((int7)(CONCAT44(extraout_var,BVar2) >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef3f9a FUN_143ef3f9a body=224 status=ok
// SIG undefined FUN_143ef3f9a(void)

void FUN_143ef3f9a(longlong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  local_58 = param_3[8];
  uStack_54 = param_3[9];
  uStack_50 = param_3[10];
  uStack_4c = param_3[0xb];
  uVar1 = *param_2;
  FUN_143eedba9(&local_48,&local_78);
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))
              (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,&local_48);
  }
  FUN_143ef25a4(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63031(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63057(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef40ba FUN_143ef40ba body=79 status=ok
// SIG undefined FUN_143ef40ba(void)

void FUN_143ef40ba(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef410a FUN_143ef410a body=224 status=ok
// SIG undefined FUN_143ef410a(void)

void FUN_143ef410a(longlong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  longlong local_38;
  undefined4 local_30;
  longlong local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  local_58 = param_3[8];
  uStack_54 = param_3[9];
  uStack_50 = param_3[10];
  uStack_4c = param_3[0xb];
  uVar1 = *param_2;
  FUN_143eedba9(&local_48,&local_78);
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))
              (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,&local_48);
  }
  FUN_143ef25a4(local_28,local_20);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63031(local_38,local_30);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63057(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef422a FUN_143ef422a body=79 status=ok
// SIG undefined FUN_143ef422a(void)

void FUN_143ef422a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef427a FUN_143ef427a body=147 status=ok
// SIG undefined FUN_143ef427a(void)

void FUN_143ef427a(longlong *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined8 unaff_RBX;
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
  undefined1 local_50 [56];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_a8;
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
  uVar1 = *param_2;
  FUN_148a5d82f(local_50,&local_88);
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))
              (param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),uVar1) & 0xffffffff,local_50);
  }
  FUN_148a5d960(local_50);
  if ((local_18 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef434c FUN_143ef434c body=79 status=ok
// SIG undefined FUN_143ef434c(void)

void FUN_143ef434c(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef439c FUN_143ef439c body=111 status=ok
// SIG undefined FUN_143ef439c(void)

undefined8 * FUN_143ef439c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4da3e0;
  plVar1 = param_1 + 4;
  if (*(int *)(param_1 + 5) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143ef43ed;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 5) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143ef43ed:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ef4420 FUN_143ef4420 body=123 status=ok
// SIG undefined FUN_143ef4420(void)

void FUN_143ef4420(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da3e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148a63e72(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143ef449c FUN_143ef449c body=123 status=ok
// SIG undefined FUN_143ef449c(void)

void FUN_143ef449c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da450;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da3e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = 0;
  *(undefined4 *)(puVar1 + 5) = 0;
  FUN_148a63e72(puVar1 + 4,param_1 + 0x20);
  return;
}



// FUNCTION 143ef4518 FUN_143ef4518 body=157 status=ok
// SIG undefined FUN_143ef4518(void)

void FUN_143ef4518(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4da450;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da3e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  p_Var1->EntryCount = 0;
  p_Var1->ContentionCount = 0;
  p_Var1->Flags = 0;
  FUN_148a63e72(&p_Var1->EntryCount,param_1 + 0x20);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ef45a6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ef45b6 FUN_143ef45b6 body=46 status=ok
// SIG undefined FUN_143ef45b6(void)

void FUN_143ef45b6(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_143ef4614(param_1 + 0x18,param_3);
  if (*(char *)(param_3 + 0x50) == '\x01') {
    FUN_148a5afb4(param_3);
    *(undefined1 *)(param_3 + 0x50) = 0;
  }
  return;
}



// FUNCTION 143ef45e4 FUN_143ef45e4 body=48 status=ok
// SIG undefined FUN_143ef45e4(void)

undefined1 FUN_143ef45e4(longlong param_1,undefined8 param_2,longlong param_3)

{
  FUN_143ef4614(param_1 + 0x18,param_3);
  if (*(char *)(param_3 + 0x50) == '\x01') {
    FUN_148a5afb4(param_3);
    *(undefined1 *)(param_3 + 0x50) = 0;
  }
  return 1;
}



// FUNCTION 143ef4614 FUN_143ef4614 body=426 status=ok
// SIG undefined FUN_143ef4614(void)

void FUN_143ef4614(uint *param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  int local_40;
  undefined4 local_3c;
  char local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  cVar1 = *(char *)(param_2 + 10);
  local_38 = cVar1;
  if (cVar1 == '\x01') {
    local_88 = *param_2;
    *param_2 = 0;
    local_80 = *(undefined4 *)(param_2 + 1);
    local_7c = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    local_78 = param_2[2];
    param_2[2] = 0;
    local_70 = *(undefined4 *)(param_2 + 3);
    local_6c = *(undefined4 *)((longlong)param_2 + 0x1c);
    param_2[3] = 0;
    local_68 = param_2[4];
    param_2[4] = 0;
    local_60 = *(undefined4 *)(param_2 + 5);
    local_5c = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    local_58 = param_2[6];
    param_2[6] = 0;
    local_50 = *(undefined4 *)(param_2 + 7);
    local_4c = *(undefined4 *)((longlong)param_2 + 0x3c);
    param_2[7] = 0;
    uVar4 = param_2[8];
    param_2[8] = 0;
    iVar2 = *(int *)(param_2 + 9);
    local_3c = *(undefined4 *)((longlong)param_2 + 0x4c);
    param_2[9] = 0;
    local_98 = 0;
    uStack_90 = CONCAT44(uStack_90._4_4_,iVar2);
    local_48 = uVar4;
    local_40 = iVar2;
    if (iVar2 == 0) {
      uStack_90 = 0;
    }
    else {
      FUN_148a5b108(&local_98,iVar2,0);
      FUN_148a5b16a(local_98,uVar4,iVar2);
    }
  }
  else {
    local_98 = 0;
    uStack_90 = 0;
  }
  if (param_1[1] != 0) {
    uVar3 = *param_1;
    uVar4 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_143ef4778;
    puVar5 = (undefined8 *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if ((puVar5 != (undefined8 *)0x0) &&
       ((*(uint *)(puVar5 + 2) == param_1[1] && ((*(uint *)(puVar5 + 1) & 0x10200000) == 0)))) {
      uVar4 = *puVar5;
      goto LAB_143ef4778;
    }
  }
  uVar4 = 0;
LAB_143ef4778:
  FUN_148a63ef6(param_1 + 2,uVar4,&local_98);
  if (cVar1 != '\0') {
    FUN_148a5afb4(&local_88);
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef47c0 FUN_143ef47c0 body=86 status=ok
// SIG undefined FUN_143ef47c0(void)

void FUN_143ef47c0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef4816 FUN_143ef4816 body=29 status=ok
// SIG undefined FUN_143ef4816(void)

undefined8 FUN_143ef4816(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ef4834 FUN_143ef4834 body=90 status=ok
// SIG undefined FUN_143ef4834(void)

undefined8 * FUN_143ef4834(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4da4e0;
  FUN_148a5d960(param_1 + 5);
  plVar3 = (longlong *)param_1[4];
  if (plVar3 != (longlong *)0x0) {
    plVar1 = plVar3 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      (**(code **)*plVar3)(plVar3);
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
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



// FUNCTION 143ef48a2 FUN_143ef48a2 body=124 status=ok
// SIG undefined FUN_143ef48a2(void)

void FUN_143ef48a2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FUN_148a5e23e(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143ef491e FUN_143ef491e body=124 status=ok
// SIG undefined FUN_143ef491e(void)

void FUN_143ef491e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 6) {
    FUN_1446efa72(param_2,0,6,0x10);
    *(undefined4 *)(param_2 + 1) = 6;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da550;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da4e0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FUN_148a5e23e(puVar1 + 5,param_1 + 0x28);
  return;
}



// FUNCTION 143ef499a FUN_143ef499a body=163 status=ok
// SIG undefined FUN_143ef499a(void)

void FUN_143ef499a(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 6) {
    FUN_1446efa72(param_2 + 1,0,6,0x10);
    param_2[1].LockCount = 6;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4da550;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da4e0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
  }
  FUN_148a5e23e(&p_Var1->Flags,param_1 + 0x28);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ef4a2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ef4a3e FUN_143ef4a3e body=65 status=ok
// SIG undefined FUN_143ef4a3e(void)

void FUN_143ef4a3e(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143ef4ac4(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef4a80 FUN_143ef4a80 body=67 status=ok
// SIG undefined FUN_143ef4a80(void)

undefined8 FUN_143ef4a80(longlong param_1,undefined1 param_2)

{
  undefined1 auStack_38 [47];
  undefined1 local_9;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_9 = param_2;
  FUN_143ef4ac4(param_1 + 0x18,&local_9);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef4ac4 FUN_143ef4ac4 body=402 status=ok
// SIG undefined FUN_143ef4ac4(void)

void FUN_143ef4ac4(undefined8 *param_1,char *param_2,undefined8 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  char *pcVar6;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  iVar2 = *(int *)(param_3 + 1);
  uVar3 = *param_3;
  local_60 = iVar2;
  if (iVar2 == 0) {
    local_5c = 0;
  }
  else {
    FUN_148a646e6(&local_68,iVar2);
    FUN_148a64748(local_68,uVar3,iVar2);
  }
  local_58 = 0;
  iVar2 = *(int *)(param_3 + 3);
  uVar3 = param_3[2];
  local_50 = iVar2;
  if (iVar2 == 0) {
    local_4c = 0;
  }
  else {
    FUN_148a6486a(&local_58,iVar2);
    FUN_148a648c2(local_58,uVar3,iVar2);
  }
  local_48 = 0;
  iVar2 = *(int *)(param_3 + 5);
  uVar3 = param_3[4];
  local_40 = iVar2;
  if (iVar2 == 0) {
    local_3c = 0;
  }
  else {
    FUN_143ef4c58(&local_48,iVar2);
    FUN_143ef4d2d(local_48,uVar3,iVar2);
  }
  pcVar6 = (char *)*param_1;
  if (pcVar6 != (char *)0x0) {
    if ((*param_2 != '\0') && (*pcVar6 == '\0')) {
      *pcVar6 = '\x01';
      pcVar6 = (char *)*param_1;
    }
    piVar1 = (int *)(pcVar6 + 4);
    *piVar1 = *piVar1 + -1;
    if (((*piVar1 == 0) && (puVar4 = (undefined1 *)*param_1, *(int *)(puVar4 + 0x10) != 0)) &&
       (plVar5 = *(longlong **)(puVar4 + 8), plVar5 != (longlong *)0x0)) {
      (**(code **)(*plVar5 + 0x60))(plVar5,*puVar4);
    }
  }
  FUN_143ef25a4(local_48,local_40);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63031(local_58,local_50);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_148a63057(local_68,local_60);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef4c58 FUN_143ef4c58 body=213 status=ok
// SIG undefined FUN_143ef4c58(void)

void FUN_143ef4c58(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = (longlong)param_2 * 0x10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if (uVar1 < 0x7ff1) {
        uVar1 = (ulonglong)
                (ushort)(&DAT_14c841d90)
                        [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
      }
      else {
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar1 = -uVar3 & (uVar1 + uVar3) - 1;
      }
    }
    else {
      uVar1 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar1,8);
    }
  }
  uVar3 = 0x7fffffff;
  if (param_2 <= (int)(uVar1 >> 4)) {
    uVar3 = uVar1 >> 4 & 0xffffffff;
  }
  iVar2 = (int)uVar3;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar3,0x10,8);
  }
  *(int *)(param_1 + 0xc) = iVar2;
  return;
}



// FUNCTION 143ef4d2d FUN_143ef4d2d body=111 status=ok
// SIG undefined FUN_143ef4d2d(void)

void FUN_143ef4d2d(undefined8 *param_1,longlong param_2,int param_3)

{
  int iVar1;
  void *_Src;
  int *piVar2;
  
  piVar2 = (int *)(param_2 + 8);
  do {
    *param_1 = 0;
    iVar1 = *piVar2;
    _Src = *(void **)(piVar2 + -2);
    *(int *)(param_1 + 1) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_1,iVar1,0);
      memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
    }
    param_1 = param_1 + 2;
    piVar2 = piVar2 + 4;
    param_3 = param_3 + -1;
  } while (param_3 != 0);
  return;
}



// FUNCTION 143ef4db6 FUN_143ef4db6 body=381 status=ok
// SIG undefined FUN_143ef4db6(void)

void FUN_143ef4db6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
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
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_c8 = *param_2;
  uStack_c0 = param_2[1];
  local_b8 = *(undefined4 *)(param_2 + 2);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_b0 = *(undefined4 *)(param_2 + 3);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_a8 = *(undefined4 *)(param_2 + 4);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_a0 = *(undefined4 *)(param_2 + 5);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_98 = param_2[6];
  local_58 = param_2[7];
  lVar2 = *param_1;
  local_68 = *(undefined4 *)(param_2 + 3);
  uStack_64 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_60 = *(undefined4 *)(param_2 + 4);
  uStack_5c = *(undefined4 *)((longlong)param_2 + 0x24);
  FUN_14152e0f7();
  local_78 = (undefined4)local_c8;
  uStack_74 = local_c8._4_4_;
  uStack_70 = (undefined4)uStack_c0;
  uStack_6c = uStack_c0._4_4_;
  FUN_14152e0f7(&local_40);
  local_88 = uStack_a0;
  uStack_84 = uStack_9c;
  uStack_80 = (undefined4)local_98;
  uStack_7c = local_98._4_4_;
  FUN_14152e0f7(&local_30);
  iVar1 = *(int *)(lVar2 + 0x340);
  *(uint *)(lVar2 + 0x340) = iVar1 + 1U;
  if (*(uint *)(lVar2 + 0x344) < iVar1 + 1U) {
    FUN_14657e034((longlong *)(lVar2 + 0x338),iVar1);
  }
  lVar2 = *(longlong *)(lVar2 + 0x338);
  lVar3 = (longlong)iVar1 * 0x38;
  *(undefined8 *)(lVar2 + lVar3) = local_58;
  *(undefined8 *)(lVar2 + 8 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 8 + lVar3) = local_50;
  local_50 = 0;
  *(undefined4 *)(lVar2 + 0x10 + lVar3) = (undefined4)local_48;
  *(undefined4 *)(lVar2 + 0x14 + lVar3) = local_48._4_4_;
  local_48 = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x18 + lVar3) = local_40;
  local_40 = 0;
  *(undefined4 *)(lVar2 + 0x20 + lVar3) = (undefined4)local_38;
  *(undefined4 *)(lVar2 + 0x24 + lVar3) = local_38._4_4_;
  local_38 = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = 0;
  *(undefined8 *)(lVar2 + 0x28 + lVar3) = local_30;
  local_30 = 0;
  *(undefined4 *)(lVar2 + 0x30 + lVar3) = (undefined4)local_28;
  *(undefined4 *)(lVar2 + 0x34 + lVar3) = local_28._4_4_;
  local_28 = 0;
  FUN_14581c278();
  if ((local_20 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef4f34 FUN_143ef4f34 body=464 status=ok
// SIG undefined FUN_143ef4f34(void)

void FUN_143ef4f34(longlong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 unaff_RDI;
  bool bVar6;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar3 = *param_2;
  local_b8 = param_2[1];
  uStack_b0 = param_2[2];
  local_c8 = param_2[5];
  uStack_c0 = param_2[6];
  local_d8 = param_2[7];
  uStack_d0 = param_2[8];
  bVar6 = *(char *)(param_2 + 0xb) == '\x01';
  if (bVar6) {
    unaff_RDI = param_2[9];
  }
  lVar4 = *param_1;
  local_a8 = *(undefined4 *)(param_2 + 3);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x1c);
  uStack_a0 = *(undefined4 *)(param_2 + 4);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x24);
  FUN_14152e0f7(&local_90);
  FUN_14152e0f7(&local_80,&local_c8);
  local_70 = CONCAT31(local_70._1_3_,bVar6);
  uStack_68 = 0;
  if (bVar6) {
    uStack_68 = unaff_RDI;
  }
  local_60 = uVar3;
  FUN_14152e0f7(&local_58,&local_d8);
  FUN_14152e0f7(&local_48,&local_b8);
  iVar2 = *(int *)(lVar4 + 0x350);
  *(uint *)(lVar4 + 0x350) = iVar2 + 1U;
  if (*(uint *)(lVar4 + 0x354) < iVar2 + 1U) {
    FUN_14657e0c4((longlong *)(lVar4 + 0x348),iVar2);
  }
  lVar4 = *(longlong *)(lVar4 + 0x348);
  lVar5 = (longlong)iVar2 * 0x58;
  *(undefined8 *)(lVar4 + lVar5) = 0;
  *(undefined8 *)(lVar4 + lVar5) = local_90;
  local_90 = 0;
  *(undefined4 *)(lVar4 + 8 + lVar5) = (undefined4)local_88;
  *(undefined4 *)(lVar4 + 0xc + lVar5) = local_88._4_4_;
  local_88 = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = local_80;
  local_80 = 0;
  *(undefined4 *)(lVar4 + 0x18 + lVar5) = (undefined4)local_78;
  *(undefined4 *)(lVar4 + 0x1c + lVar5) = local_78._4_4_;
  local_78 = 0;
  *(undefined8 *)(lVar4 + 0x30 + lVar5) = local_60;
  puVar1 = (undefined4 *)(lVar4 + 0x20 + lVar5);
  *puVar1 = local_70;
  puVar1[1] = uStack_6c;
  puVar1[2] = (undefined4)uStack_68;
  puVar1[3] = uStack_68._4_4_;
  *(undefined8 *)(lVar4 + 0x38 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x38 + lVar5) = local_58;
  local_58 = 0;
  *(undefined4 *)(lVar4 + 0x40 + lVar5) = (undefined4)local_50;
  *(undefined4 *)(lVar4 + 0x44 + lVar5) = local_50._4_4_;
  local_50 = 0;
  *(undefined8 *)(lVar4 + 0x48 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x48 + lVar5) = local_48;
  local_48 = 0;
  *(undefined4 *)(lVar4 + 0x50 + lVar5) = (undefined4)local_40;
  *(undefined4 *)(lVar4 + 0x54 + lVar5) = local_40._4_4_;
  local_40 = 0;
  FUN_14581c2b6();
  if ((local_38 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef51de FUN_143ef51de body=86 status=ok
// SIG undefined FUN_143ef51de(void)

void FUN_143ef51de(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef5310 FUN_143ef5310 body=86 status=ok
// SIG undefined FUN_143ef5310(void)

void FUN_143ef5310(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef5366 FUN_143ef5366 body=803 status=ok
// SIG undefined FUN_143ef5366(void)

void FUN_143ef5366(uint *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_128 [32];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_128;
  iVar1 = *param_4;
  local_d8 = *(undefined8 *)(param_3 + 0xc);
  local_108 = *param_3;
  uStack_104 = param_3[1];
  uStack_100 = param_3[2];
  uStack_fc = param_3[3];
  local_f8 = param_3[4];
  uStack_f4 = param_3[5];
  uStack_f0 = param_3[6];
  uStack_ec = param_3[7];
  local_e8 = param_3[8];
  uStack_e4 = param_3[9];
  uStack_e0 = param_3[10];
  uStack_dc = param_3[0xb];
  lVar3 = *(longlong *)(param_3 + 0xe);
  cVar4 = FUN_146076bce(local_108,0);
  if (cVar4 != '\0') goto LAB_143ef5539;
  if (param_1[1] == 0) {
LAB_143ef5683:
    lVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    lVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      plVar5 = (longlong *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((plVar5 == (longlong *)0x0) ||
         ((*(uint *)(plVar5 + 2) != param_1[1] || ((*(uint *)(plVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef5683;
      lVar7 = *plVar5;
    }
  }
  if (iVar1 == 0) {
    local_98 = uStack_f0;
    uStack_94 = uStack_ec;
    uStack_90 = local_e8;
    uStack_8c = uStack_e4;
    local_80 = lVar3;
    FUN_14152e0f7();
    local_a8 = local_108;
    uStack_a4 = uStack_104;
    uStack_a0 = uStack_100;
    uStack_9c = uStack_fc;
    FUN_14152e0f7(&local_68);
    local_b8 = uStack_e0;
    uStack_b4 = uStack_dc;
    uStack_b0 = (undefined4)local_d8;
    uStack_ac = local_d8._4_4_;
    FUN_14152e0f7(&local_58);
    iVar1 = *(int *)(lVar7 + 0x340);
    *(uint *)(lVar7 + 0x340) = iVar1 + 1U;
    if (*(uint *)(lVar7 + 0x344) < iVar1 + 1U) {
      FUN_14657e034((longlong *)(lVar7 + 0x338),iVar1);
    }
    lVar3 = *(longlong *)(lVar7 + 0x338);
    lVar7 = (longlong)iVar1 * 0x38;
    *(longlong *)(lVar3 + lVar7) = local_80;
    *(undefined8 *)(lVar3 + 8 + lVar7) = 0;
    *(longlong *)(lVar3 + 8 + lVar7) = local_78;
    local_78 = 0;
    *(undefined4 *)(lVar3 + 0x10 + lVar7) = (undefined4)uStack_70;
    *(undefined4 *)(lVar3 + 0x14 + lVar7) = uStack_70._4_4_;
    uStack_70 = 0;
    *(undefined8 *)(lVar3 + 0x18 + lVar7) = 0;
    *(longlong *)(lVar3 + 0x18 + lVar7) = local_68;
    local_68 = 0;
    *(undefined4 *)(lVar3 + 0x20 + lVar7) = (undefined4)uStack_60;
    *(undefined4 *)(lVar3 + 0x24 + lVar7) = uStack_60._4_4_;
    uStack_60 = 0;
    *(undefined8 *)(lVar3 + 0x28 + lVar7) = 0;
    *(longlong *)(lVar3 + 0x28 + lVar7) = local_58;
    local_58 = 0;
    *(undefined4 *)(lVar3 + 0x30 + lVar7) = (undefined4)uStack_50;
    *(undefined4 *)(lVar3 + 0x34 + lVar7) = uStack_50._4_4_;
    uStack_50 = 0;
    FUN_14581c278();
  }
  else if ((longlong)*(int *)(lVar7 + 0x340) != 0) {
    lVar6 = *(longlong *)(lVar7 + 0x338);
    lVar7 = (longlong)*(int *)(lVar7 + 0x340) * 0x38;
    do {
      FUN_148a654e4(&local_80,lVar6);
      if (local_80 == lVar3) {
        local_a8 = uStack_f0;
        uStack_a4 = uStack_ec;
        uStack_a0 = local_e8;
        uStack_9c = uStack_e4;
        FUN_14152e0f7(&local_98,&local_a8);
        if (local_78 != 0) {
          FUN_1400020a8();
        }
        local_78 = CONCAT44(uStack_94,local_98);
        uStack_70 = CONCAT44(uStack_8c,uStack_90);
        local_b8 = local_108;
        uStack_b4 = uStack_104;
        uStack_b0 = uStack_100;
        uStack_ac = uStack_fc;
        FUN_14152e0f7(&local_98,&local_b8);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        local_68 = CONCAT44(uStack_94,local_98);
        uStack_60 = CONCAT44(uStack_8c,uStack_90);
        local_c8 = uStack_e0;
        uStack_c4 = uStack_dc;
        uStack_c0 = (undefined4)local_d8;
        uStack_bc = local_d8._4_4_;
        FUN_14152e0f7(&local_98,&local_c8);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_58 = CONCAT44(uStack_94,local_98);
        uStack_50 = CONCAT44(uStack_8c,uStack_90);
      }
      FUN_14581c278(&local_80);
      lVar6 = lVar6 + 0x38;
      lVar7 = lVar7 + -0x38;
    } while (lVar7 != 0);
  }
LAB_143ef5539:
  if ((local_48 ^ (ulonglong)auStack_128) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef569c FUN_143ef569c body=998 status=ok
// SIG undefined FUN_143ef569c(void)

void FUN_143ef569c(uint *param_1,undefined8 param_2,longlong *param_3,int *param_4)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  char cVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_158 [32];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
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
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  longlong local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_158;
  iVar3 = *param_4;
  lVar5 = *param_3;
  local_108 = param_3[1];
  uStack_100 = param_3[2];
  local_118 = param_3[3];
  uStack_110 = param_3[4];
  local_128 = param_3[5];
  uStack_120 = param_3[6];
  local_138 = (undefined4)param_3[7];
  uStack_134 = *(undefined4 *)((longlong)param_3 + 0x3c);
  uStack_130 = (undefined4)param_3[8];
  uStack_12c = *(undefined4 *)((longlong)param_3 + 0x44);
  cVar2 = (char)param_3[0xb];
  lVar8 = param_3[9];
  cVar6 = FUN_146076bce(local_138,0);
  if (cVar6 != '\0') goto LAB_143ef58cc;
  if (param_1[1] == 0) {
LAB_143ef5a7b:
    lVar10 = 0;
  }
  else {
    uVar4 = *param_1;
    lVar10 = 0;
    if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
      plVar7 = (longlong *)
               ((ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
      if ((plVar7 == (longlong *)0x0) ||
         ((*(uint *)(plVar7 + 2) != param_1[1] || ((*(uint *)(plVar7 + 1) & 0x10200000) != 0))))
      goto LAB_143ef5a7b;
      lVar10 = *plVar7;
    }
  }
  if (iVar3 == 0) {
    local_b8 = (undefined4)local_118;
    uStack_b4 = local_118._4_4_;
    uStack_b0 = (undefined4)uStack_110;
    uStack_ac = uStack_110._4_4_;
    FUN_14152e0f7(&local_a0);
    local_c8 = (undefined4)local_128;
    uStack_c4 = local_128._4_4_;
    uStack_c0 = (undefined4)uStack_120;
    uStack_bc = uStack_120._4_4_;
    FUN_14152e0f7(&local_90);
    local_80 = CONCAT31(local_80._1_3_,cVar2);
    uStack_78 = 0;
    if (cVar2 != '\0') {
      uStack_78 = lVar8;
    }
    local_d8 = local_138;
    uStack_d4 = uStack_134;
    uStack_d0 = uStack_130;
    uStack_cc = uStack_12c;
    local_70 = lVar5;
    FUN_14152e0f7(&local_68);
    local_e8 = (undefined4)local_108;
    uStack_e4 = local_108._4_4_;
    uStack_e0 = (undefined4)uStack_100;
    uStack_dc = uStack_100._4_4_;
    FUN_14152e0f7(&local_58);
    iVar3 = *(int *)(lVar10 + 0x350);
    *(uint *)(lVar10 + 0x350) = iVar3 + 1U;
    if (*(uint *)(lVar10 + 0x354) < iVar3 + 1U) {
      FUN_14657e0c4((longlong *)(lVar10 + 0x348),iVar3);
    }
    lVar5 = *(longlong *)(lVar10 + 0x348);
    lVar8 = (longlong)iVar3 * 0x58;
    *(undefined8 *)(lVar5 + lVar8) = 0;
    *(longlong *)(lVar5 + lVar8) = local_a0;
    local_a0 = 0;
    *(undefined4 *)(lVar5 + 8 + lVar8) = (undefined4)uStack_98;
    *(undefined4 *)(lVar5 + 0xc + lVar8) = uStack_98._4_4_;
    uStack_98 = 0;
    *(undefined8 *)(lVar5 + 0x10 + lVar8) = 0;
    *(longlong *)(lVar5 + 0x10 + lVar8) = local_90;
    local_90 = 0;
    *(undefined4 *)(lVar5 + 0x18 + lVar8) = (undefined4)uStack_88;
    *(undefined4 *)(lVar5 + 0x1c + lVar8) = uStack_88._4_4_;
    uStack_88 = 0;
    *(longlong *)(lVar5 + 0x30 + lVar8) = local_70;
    puVar1 = (undefined4 *)(lVar5 + 0x20 + lVar8);
    *puVar1 = local_80;
    puVar1[1] = uStack_7c;
    puVar1[2] = (undefined4)uStack_78;
    puVar1[3] = uStack_78._4_4_;
    *(undefined8 *)(lVar5 + 0x38 + lVar8) = 0;
    *(longlong *)(lVar5 + 0x38 + lVar8) = local_68;
    local_68 = 0;
    *(undefined4 *)(lVar5 + 0x40 + lVar8) = (undefined4)uStack_60;
    *(undefined4 *)(lVar5 + 0x44 + lVar8) = uStack_60._4_4_;
    uStack_60 = 0;
    *(undefined8 *)(lVar5 + 0x48 + lVar8) = 0;
    *(longlong *)(lVar5 + 0x48 + lVar8) = local_58;
    local_58 = 0;
    *(undefined4 *)(lVar5 + 0x50 + lVar8) = (undefined4)uStack_50;
    *(undefined4 *)(lVar5 + 0x54 + lVar8) = uStack_50._4_4_;
    uStack_50 = 0;
    FUN_14581c2b6();
  }
  else if ((longlong)*(int *)(lVar10 + 0x350) != 0) {
    lVar9 = 0;
    if (cVar2 != '\0') {
      lVar9 = lVar8;
    }
    lVar8 = *(longlong *)(lVar10 + 0x348);
    lVar10 = (longlong)*(int *)(lVar10 + 0x350) * 0x58;
    do {
      FUN_148a655da(&local_a0,lVar8);
      if (local_70 == lVar5) {
        local_c8 = (undefined4)local_118;
        uStack_c4 = local_118._4_4_;
        uStack_c0 = (undefined4)uStack_110;
        uStack_bc = uStack_110._4_4_;
        FUN_14152e0f7(&local_b8,&local_c8);
        if (local_a0 != 0) {
          FUN_1400020a8();
        }
        local_a0 = CONCAT44(uStack_b4,local_b8);
        uStack_98 = CONCAT44(uStack_ac,uStack_b0);
        local_d8 = (undefined4)local_128;
        uStack_d4 = local_128._4_4_;
        uStack_d0 = (undefined4)uStack_120;
        uStack_cc = uStack_120._4_4_;
        FUN_14152e0f7(&local_b8,&local_d8);
        if (local_90 != 0) {
          FUN_1400020a8();
        }
        local_90 = CONCAT44(uStack_b4,local_b8);
        uStack_88 = CONCAT44(uStack_ac,uStack_b0);
        local_80 = CONCAT31(local_80._1_3_,cVar2);
        local_e8 = local_138;
        uStack_e4 = uStack_134;
        uStack_e0 = uStack_130;
        uStack_dc = uStack_12c;
        uStack_78 = lVar9;
        FUN_14152e0f7(&local_b8,&local_e8);
        if (local_68 != 0) {
          FUN_1400020a8();
        }
        local_68 = CONCAT44(uStack_b4,local_b8);
        uStack_60 = CONCAT44(uStack_ac,uStack_b0);
        local_f8 = (undefined4)local_108;
        uStack_f4 = local_108._4_4_;
        uStack_f0 = (undefined4)uStack_100;
        uStack_ec = uStack_100._4_4_;
        FUN_14152e0f7(&local_b8,&local_f8);
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        local_58 = CONCAT44(uStack_b4,local_b8);
        uStack_50 = CONCAT44(uStack_ac,uStack_b0);
      }
      FUN_14581c2b6(&local_a0);
      lVar8 = lVar8 + 0x58;
      lVar10 = lVar10 + -0x58;
    } while (lVar10 != 0);
  }
LAB_143ef58cc:
  if ((local_48 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef5a96 FUN_143ef5a96 body=796 status=ok
// SIG undefined FUN_143ef5a96(void)

void FUN_143ef5a96(uint *param_1,undefined8 param_2,int *param_3,longlong *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  uVar5 = param_1[1];
  if ((((uVar5 == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1)) ||
     ((lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar6 == 0 ||
      (*(uint *)(lVar6 + 0x10) != uVar5)))) goto LAB_143ef5b07;
  puVar9 = (undefined8 *)*param_4;
  puVar4 = (undefined8 *)param_4[1];
  iVar2 = *param_3;
  if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) goto LAB_143ef5b07;
  if (puVar9 == puVar4) {
LAB_143ef5d55:
    uVar1 = *param_1;
    uVar8 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar9 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar9 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar9 + 2) != uVar5 || ((*(uint *)(puVar9 + 1) & 0x10200000) != 0))))
      goto LAB_143ef5d4a;
      uVar8 = *puVar9;
    }
  }
  else {
    do {
      if ((param_1[1] == 0) || (uVar5 = *param_1, (int)uVar5 < 0)) {
LAB_143ef5d35:
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        if ((int)uVar5 < DAT_14c9647dc) {
          plVar7 = (longlong *)
                   ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
          if (((plVar7 == (longlong *)0x0) || (*(uint *)(plVar7 + 2) != param_1[1])) ||
             ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_143ef5d35;
          lVar6 = *plVar7;
        }
      }
      local_90 = *puVar9;
      local_a8 = *(undefined4 *)(puVar9 + 1);
      uStack_a4 = *(undefined4 *)((longlong)puVar9 + 0xc);
      uStack_a0 = *(undefined4 *)(puVar9 + 2);
      uStack_9c = *(undefined4 *)((longlong)puVar9 + 0x14);
      FUN_14152e0f7(&local_88,&local_a8);
      local_b8 = *(undefined4 *)(puVar9 + 5);
      uStack_b4 = *(undefined4 *)((longlong)puVar9 + 0x2c);
      uStack_b0 = *(undefined4 *)(puVar9 + 6);
      uStack_ac = *(undefined4 *)((longlong)puVar9 + 0x34);
      FUN_14152e0f7(&local_78,&local_b8);
      local_c8 = *(undefined4 *)(puVar9 + 3);
      uStack_c4 = *(undefined4 *)((longlong)puVar9 + 0x1c);
      uStack_c0 = *(undefined4 *)(puVar9 + 4);
      uStack_bc = *(undefined4 *)((longlong)puVar9 + 0x24);
      FUN_14152e0f7(&local_68,&local_c8);
      local_d8 = *(undefined4 *)(puVar9 + 7);
      uStack_d4 = *(undefined4 *)((longlong)puVar9 + 0x3c);
      uStack_d0 = *(undefined4 *)(puVar9 + 8);
      uStack_cc = *(undefined4 *)((longlong)puVar9 + 0x44);
      FUN_14152e0f7(&local_58,&local_d8);
      iVar3 = *(int *)(lVar6 + 0x2e0);
      lVar10 = (longlong)iVar3;
      *(uint *)(lVar6 + 0x2e0) = iVar3 + 1U;
      if (*(uint *)(lVar6 + 0x2e4) < iVar3 + 1U) {
        FUN_148a65794((longlong *)(lVar6 + 0x2d8),iVar3);
      }
      lVar6 = *(longlong *)(lVar6 + 0x2d8);
      *(undefined8 *)(lVar6 + lVar10 * 0x48) = local_90;
      *(undefined8 *)(lVar6 + 8 + lVar10 * 0x48) = 0;
      *(undefined8 *)(lVar6 + 8 + lVar10 * 0x48) = local_88;
      local_88 = 0;
      *(undefined4 *)(lVar6 + 0x10 + lVar10 * 0x48) = (undefined4)local_80;
      *(undefined4 *)(lVar6 + 0x14 + lVar10 * 0x48) = local_80._4_4_;
      local_80 = 0;
      *(undefined8 *)(lVar6 + 0x18 + lVar10 * 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x18 + lVar10 * 0x48) = local_78;
      local_78 = 0;
      *(undefined4 *)(lVar6 + 0x20 + lVar10 * 0x48) = (undefined4)local_70;
      *(undefined4 *)(lVar6 + 0x24 + lVar10 * 0x48) = local_70._4_4_;
      local_70 = 0;
      *(undefined8 *)(lVar6 + 0x28 + lVar10 * 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x28 + lVar10 * 0x48) = local_68;
      local_68 = 0;
      *(undefined4 *)(lVar6 + 0x30 + lVar10 * 0x48) = (undefined4)local_60;
      *(undefined4 *)(lVar6 + 0x34 + lVar10 * 0x48) = local_60._4_4_;
      local_60 = 0;
      *(undefined8 *)(lVar6 + 0x38 + lVar10 * 0x48) = 0;
      *(undefined8 *)(lVar6 + 0x38 + lVar10 * 0x48) = local_58;
      local_58 = 0;
      *(undefined4 *)(lVar6 + 0x40 + lVar10 * 0x48) = (undefined4)local_50;
      *(undefined4 *)(lVar6 + 0x44 + lVar10 * 0x48) = local_50._4_4_;
      local_50 = 0;
      FUN_148a58a68(&local_90);
      puVar9 = puVar9 + 9;
    } while (puVar9 != puVar4);
    uVar5 = param_1[1];
    if (uVar5 != 0) goto LAB_143ef5d55;
LAB_143ef5d4a:
    uVar8 = 0;
  }
  if ((param_1[4] != 0) && (plVar7 = *(longlong **)(param_1 + 2), plVar7 != (longlong *)0x0)) {
    (**(code **)(*plVar7 + 0x60))(plVar7,uVar8,iVar2 == 0);
  }
LAB_143ef5b07:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef5e0e FUN_143ef5e0e body=86 status=ok
// SIG undefined FUN_143ef5e0e(void)

void FUN_143ef5e0e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef5e64 FUN_143ef5e64 body=132 status=ok
// SIG undefined FUN_143ef5e64(void)

undefined8 * FUN_143ef5e64(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148a65828(param_1 + 3,iVar1,0);
    FUN_148a6589b(param_1[3],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



// FUNCTION 143ef5ee8 FUN_143ef5ee8 body=389 status=ok
// SIG undefined FUN_143ef5ee8(void)

void FUN_143ef5ee8(uint *param_1,undefined8 param_2,char *param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] != 0) && (uVar2 = *param_1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc))
     && (((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0 &&
          (*(uint *)(lVar5 + 0x10) == param_1[1])) &&
         (cVar1 = *param_3, (*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
    if ((longlong)(int)param_1[8] != 0) {
      lVar5 = *(longlong *)(param_1 + 6);
      lVar6 = (longlong)(int)param_1[8] * 0x48;
      do {
        if (cVar1 != '\0') {
          if ((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) {
LAB_143ef5ff4:
            lVar3 = 0;
          }
          else {
            lVar3 = 0;
            if ((int)uVar2 < DAT_14c9647dc) {
              plVar4 = (longlong *)
                       ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
              if (((plVar4 == (longlong *)0x0) || (*(uint *)(plVar4 + 2) != param_1[1])) ||
                 ((*(uint *)(plVar4 + 1) & 0x10200000) != 0)) goto LAB_143ef5ff4;
              lVar3 = *plVar4;
            }
          }
          local_38 = lVar5;
          FUN_148a65964(lVar3 + 0x2d8,&local_38);
        }
        lVar5 = lVar5 + 0x48;
        lVar6 = lVar6 + -0x48;
      } while (lVar6 != 0);
    }
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef6088 FUN_143ef6088 body=125 status=ok
// SIG undefined FUN_143ef6088(void)

void FUN_143ef6088(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_14657e154(param_1 + 1,param_2 + 1);
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  uVar2 = param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148a65828(param_1 + 3,iVar1,0);
    FUN_148a6589b(param_1[3],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return;
}



// FUNCTION 143ef6106 FUN_143ef6106 body=230 status=ok
// SIG undefined FUN_143ef6106(void)

void FUN_143ef6106(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  param_1[3] = 0;
  iVar2 = *(int *)(param_2 + 4);
  uVar3 = param_2[3];
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_148a65828(param_1 + 3,iVar2,0);
    FUN_148a6589b(param_1[3],uVar3,iVar2);
  }
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  FUN_145be99e5(param_2[3],*(undefined4 *)(param_2 + 4));
  if (param_2[3] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_2 + 1;
  if (*(int *)(param_2 + 2) != 0) {
    puVar4 = (undefined8 *)*plVar1;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 2) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef61ec FUN_143ef61ec body=112 status=ok
// SIG undefined FUN_143ef61ec(void)

void FUN_143ef61ec(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  FUN_145be99e5(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20));
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef625c FUN_143ef625c body=15 status=ok
// SIG undefined FUN_143ef625c(void)

void FUN_143ef625c(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 143ef626c FUN_143ef626c body=3789 status=ok
// SIG undefined FUN_143ef626c(void)

/* WARNING: Removing unreachable block (ram,0x000143ef6b2a) */
/* WARNING: Removing unreachable block (ram,0x000143ef69f2) */

void FUN_143ef626c(longlong *param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulonglong uVar11;
  uint uVar12;
  longlong *plVar13;
  undefined4 *puVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong *plVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  longlong *plVar22;
  undefined1 auStack_528 [35];
  undefined1 local_505;
  undefined1 local_504;
  undefined1 local_503;
  char local_502;
  undefined1 local_501;
  undefined4 *local_500;
  undefined8 *local_4f8;
  undefined8 *local_4f0;
  undefined4 *local_4e8;
  longlong *local_4e0;
  undefined8 *local_4d8;
  undefined8 *local_4d0;
  undefined8 *local_4c8;
  undefined8 *local_4c0;
  longlong local_4b8;
  undefined4 *local_4b0;
  longlong local_4a8;
  undefined8 *local_4a0;
  undefined8 *local_498;
  undefined4 *local_490;
  undefined8 local_488;
  undefined8 uStack_480;
  undefined8 local_478;
  undefined8 uStack_470;
  undefined8 local_468;
  undefined8 uStack_460;
  undefined8 local_458;
  undefined8 uStack_450;
  undefined8 local_448;
  undefined8 uStack_440;
  undefined8 local_438;
  undefined8 uStack_430;
  undefined8 local_428;
  undefined8 uStack_420;
  longlong local_418;
  undefined8 uStack_410;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined4 local_388;
  undefined4 uStack_384;
  undefined4 uStack_380;
  undefined4 uStack_37c;
  undefined4 local_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  longlong local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined4 local_338;
  undefined4 uStack_334;
  undefined4 uStack_330;
  undefined4 uStack_32c;
  undefined4 local_328;
  undefined4 uStack_324;
  undefined4 uStack_320;
  undefined4 uStack_31c;
  undefined4 local_318;
  undefined4 uStack_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 local_308;
  undefined4 uStack_304;
  undefined4 uStack_300;
  undefined4 uStack_2fc;
  undefined4 local_2f8;
  undefined4 uStack_2f4;
  undefined4 uStack_2f0;
  undefined4 uStack_2ec;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined7 local_2a8;
  undefined4 uStack_2a1;
  undefined4 uStack_29d;
  undefined4 uStack_299;
  undefined4 uStack_295;
  undefined7 local_288;
  undefined4 uStack_281;
  undefined4 uStack_27d;
  undefined4 uStack_279;
  undefined4 uStack_275;
  undefined4 local_270 [2];
  longlong local_268;
  longlong lStack_260;
  longlong local_258;
  undefined1 uStack_250;
  undefined7 uStack_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  longlong local_238;
  longlong lStack_230;
  longlong local_228;
  longlong lStack_220;
  longlong local_218;
  longlong lStack_210;
  longlong local_208;
  undefined8 uStack_200;
  longlong local_1f8;
  longlong lStack_1f0;
  longlong local_1e8;
  longlong lStack_1e0;
  longlong local_1d8;
  longlong lStack_1d0;
  longlong local_1c8;
  longlong local_1c0;
  ulonglong uStack_1b8;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  char local_1a0;
  undefined1 local_198;
  undefined2 local_197;
  longlong local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  ulonglong uStack_178;
  longlong local_170;
  longlong lStack_168;
  longlong local_160;
  longlong lStack_158;
  undefined1 local_150;
  longlong local_148;
  longlong lStack_140;
  undefined8 local_138;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_528;
  puVar14 = (undefined4 *)*param_3;
  local_4b0 = (undefined4 *)param_3[1];
  local_505 = *param_2;
  local_418 = 0;
  uStack_410 = 0;
  local_4e0 = param_1;
  if (puVar14 != local_4b0) {
    do {
      local_270[0] = *puVar14;
      uStack_2ac = puVar14[5];
      uVar8 = *(undefined8 *)(puVar14 + 3);
      local_88 = *(undefined8 *)(puVar14 + 6);
      uStack_80 = *(undefined8 *)(puVar14 + 8);
      uVar4 = *(undefined8 *)(puVar14 + 10);
      uVar1 = *(undefined1 *)(puVar14 + 0xc);
      uVar5 = *(undefined8 *)(puVar14 + 0x10);
      uStack_98 = (undefined7)((ulonglong)uVar5 >> 8);
      local_a8 = *(undefined8 *)((longlong)puVar14 + 0x31);
      uVar9 = *(undefined8 *)((longlong)puVar14 + 0x39);
      uStack_a0 = (undefined7)uVar9;
      uStack_99 = (undefined1)((ulonglong)uVar9 >> 0x38);
      local_428 = *(undefined8 *)(puVar14 + 0x12);
      uStack_420 = *(undefined8 *)(puVar14 + 0x14);
      local_438 = *(undefined8 *)(puVar14 + 0x16);
      uStack_430 = *(undefined8 *)(puVar14 + 0x18);
      local_490 = *(undefined4 **)(puVar14 + 0x1a);
      puVar21 = *(undefined4 **)(puVar14 + 0x1c);
      local_448 = *(undefined8 *)(puVar14 + 0x1e);
      uStack_440 = *(undefined8 *)(puVar14 + 0x20);
      local_458 = *(undefined8 *)(puVar14 + 0x22);
      uStack_450 = *(undefined8 *)(puVar14 + 0x24);
      local_468 = *(undefined8 *)(puVar14 + 0x26);
      uStack_460 = *(undefined8 *)(puVar14 + 0x28);
      cVar2 = *(char *)(puVar14 + 0x34);
      if (cVar2 == '\x01') {
        local_4b8 = *(longlong *)(puVar14 + 0x2a);
        local_4c0 = *(undefined8 **)(puVar14 + 0x2c);
        local_4c8 = *(undefined8 **)(puVar14 + 0x2e);
        local_4d0 = *(undefined8 **)(puVar14 + 0x30);
        local_4d8 = *(undefined8 **)(puVar14 + 0x32);
      }
      local_502 = *(char *)((longlong)puVar14 + 0xd9);
      if (local_502 == '\x01') {
        local_504 = *(undefined1 *)(puVar14 + 0x36);
      }
      local_503 = *(undefined1 *)((longlong)puVar14 + 0xda);
      puVar20 = *(undefined4 **)(puVar14 + 0x38);
      puVar6 = *(undefined4 **)(puVar14 + 0x3a);
      local_500 = *(undefined4 **)(puVar14 + 0x3c);
      local_4e8 = *(undefined4 **)(puVar14 + 0x3e);
      local_478 = *(undefined8 *)(puVar14 + 0x40);
      uStack_470 = *(undefined8 *)(puVar14 + 0x42);
      local_488 = *(undefined8 *)(puVar14 + 0x44);
      uStack_480 = *(undefined8 *)(puVar14 + 0x46);
      local_501 = *(undefined1 *)(puVar14 + 0x48);
      local_138 = *(undefined8 *)((longlong)puVar14 + 0x121);
      uVar10 = *(undefined8 *)((longlong)puVar14 + 0x129);
      uStack_130 = (undefined7)uVar10;
      uVar7 = *(undefined8 *)(puVar14 + 0x4c);
      uStack_129 = (undefined1)uVar7;
      uStack_128 = (undefined7)((ulonglong)uVar7 >> 8);
      uStack_275 = (undefined4)((ulonglong)uVar5 >> 0x20);
      local_288 = (undefined7)local_a8;
      uStack_281._0_1_ = (undefined1)((ulonglong)local_a8 >> 0x38);
      uStack_281._1_3_ = (undefined3)uVar9;
      uStack_27d = (undefined4)((ulonglong)uVar9 >> 0x18);
      uStack_279 = CONCAT31((int3)((ulonglong)uVar5 >> 8),uStack_99);
      if (cVar2 != '\0') {
        local_4f0 = local_4d8;
        local_498 = local_4d0;
        local_4f8 = local_4c8;
        local_4a0 = local_4c0;
        local_4a8 = local_4b8;
      }
      local_2a8 = (undefined7)local_138;
      uStack_2a1._0_1_ = (undefined1)((ulonglong)local_138 >> 0x38);
      uStack_2a1._1_3_ = (undefined3)uVar10;
      uStack_29d = (undefined4)((ulonglong)uVar10 >> 0x18);
      uStack_299 = (undefined4)uVar7;
      uStack_295 = (undefined4)((ulonglong)uVar7 >> 0x20);
      local_1a0 = '\0';
      local_197 = 0;
      uStack_248 = 0;
      uStack_247 = 0;
      uStack_240 = 0;
      local_258 = 0;
      uStack_250 = 0;
      uStack_24f = 0;
      local_268 = 0;
      lStack_260 = 0;
      local_1d8 = 0;
      lStack_1d0 = 0;
      local_1e8 = 0;
      lStack_1e0 = 0;
      local_1f8 = 0;
      lStack_1f0 = 0;
      local_208 = 0;
      uStack_200 = 0;
      local_218 = 0;
      lStack_210 = 0;
      local_228 = 0;
      lStack_220 = 0;
      local_238 = 0;
      lStack_230 = 0;
      local_150 = 0;
      local_160 = 0;
      lStack_158 = 0;
      local_170 = 0;
      lStack_168 = 0;
      local_180 = 0;
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_148 = 0;
      lStack_140 = 0;
      local_78._4_4_ = (undefined4)((ulonglong)*(undefined8 *)(puVar14 + 1) >> 0x20);
      uStack_70._0_4_ = (undefined4)uVar8;
      uStack_70._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
      local_2b8 = local_78._4_4_;
      uStack_2b4 = (undefined4)uStack_70;
      uStack_2b0 = uStack_70._4_4_;
      local_118 = local_488;
      uStack_110 = uStack_480;
      local_108 = local_478;
      uStack_100 = uStack_470;
      local_f8 = local_468;
      uStack_f0 = uStack_460;
      local_e8 = local_458;
      uStack_e0 = uStack_450;
      local_d8 = local_448;
      uStack_d0 = uStack_440;
      local_c8 = local_438;
      uStack_c0 = uStack_430;
      local_b8 = local_428;
      uStack_b0 = uStack_420;
      local_78 = *(undefined8 *)(puVar14 + 1);
      uStack_70 = uVar8;
      local_68 = uStack_2ac;
      FUN_14152e0f7(&local_360,&local_2b8);
      if (local_268 != 0) {
        FUN_1400020a8();
      }
      local_268 = local_360;
      lStack_260 = uStack_358;
      local_2c8 = (undefined4)local_88;
      uStack_2c4 = local_88._4_4_;
      uStack_2c0 = (undefined4)uStack_80;
      uStack_2bc = uStack_80._4_4_;
      FUN_14152e0f7(&local_360,&local_2c8);
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      local_258 = local_360;
      uStack_250 = (undefined1)uStack_358;
      uStack_24f = (undefined7)((ulonglong)uStack_358 >> 8);
      uStack_248 = (undefined1)uVar4;
      uStack_247 = (undefined7)((ulonglong)uVar4 >> 8);
      local_2d8 = uStack_281;
      uStack_2d4 = uStack_27d;
      uStack_2d0 = uStack_279;
      uStack_2cc = uStack_275;
      uStack_240 = uVar1;
      FUN_14152e0f7(&local_360,&local_2d8);
      if (local_238 != 0) {
        FUN_1400020a8();
      }
      local_238 = local_360;
      lStack_230 = uStack_358;
      local_2e8 = (undefined4)local_428;
      uStack_2e4 = local_428._4_4_;
      uStack_2e0 = (undefined4)uStack_420;
      uStack_2dc = uStack_420._4_4_;
      FUN_14152e0f7(&local_360,&local_2e8);
      puVar19 = local_490;
      if (local_228 != 0) {
        FUN_1400020a8();
      }
      local_228 = local_360;
      lStack_220 = uStack_358;
      local_2f8 = (undefined4)local_438;
      uStack_2f4 = local_438._4_4_;
      uStack_2f0 = (undefined4)uStack_430;
      uStack_2ec = uStack_430._4_4_;
      FUN_14152e0f7(&local_360,&local_2f8);
      if (local_218 != 0) {
        FUN_1400020a8();
      }
      local_218 = local_360;
      lStack_210 = uStack_358;
      FUN_1408be27e(&local_208,(ulonglong)((longlong)puVar21 - (longlong)puVar19) >> 4);
      for (; puVar21 != puVar19; puVar19 = puVar19 + 4) {
        local_308 = *puVar19;
        uStack_304 = puVar19[1];
        uStack_300 = puVar19[2];
        uStack_2fc = puVar19[3];
        FUN_14152e0f7(&local_360);
        lVar15 = (longlong)(int)uStack_200;
        uVar12 = (int)uStack_200 + 1;
        uStack_200 = CONCAT44(uStack_200._4_4_,uVar12);
        if (uStack_200._4_4_ < uVar12) {
          FUN_1447a1bd6(&local_208);
        }
        lVar15 = lVar15 * 0x10;
        *(undefined8 *)(local_208 + lVar15) = 0;
        *(longlong *)(local_208 + lVar15) = local_360;
        local_360 = 0;
        *(undefined4 *)(local_208 + 8 + lVar15) = (undefined4)uStack_358;
        *(undefined4 *)(local_208 + 0xc + lVar15) = uStack_358._4_4_;
        uStack_358 = 0;
      }
      local_448._4_4_ = (undefined4)((ulonglong)local_448 >> 0x20);
      uStack_440._4_4_ = (undefined4)((ulonglong)uStack_440 >> 0x20);
      local_318 = (undefined4)local_448;
      uStack_314 = local_448._4_4_;
      uStack_310 = (undefined4)uStack_440;
      uStack_30c = uStack_440._4_4_;
      FUN_14152e0f7(&local_360,&local_318);
      if (local_1f8 != 0) {
        FUN_1400020a8();
      }
      local_1f8 = local_360;
      lStack_1f0 = uStack_358;
      local_328 = (undefined4)local_458;
      uStack_324 = local_458._4_4_;
      uStack_320 = (undefined4)uStack_450;
      uStack_31c = uStack_450._4_4_;
      FUN_14152e0f7(&local_360,&local_328);
      if (local_1e8 != 0) {
        FUN_1400020a8();
      }
      local_1e8 = local_360;
      lStack_1e0 = uStack_358;
      local_338 = (undefined4)local_468;
      uStack_334 = local_468._4_4_;
      uStack_330 = (undefined4)uStack_460;
      uStack_32c = uStack_460._4_4_;
      FUN_14152e0f7(&local_360,&local_338);
      if (local_1d8 != 0) {
        FUN_1400020a8();
      }
      local_1d8 = local_360;
      lStack_1d0 = uStack_358;
      if (cVar2 != '\0') {
        local_348 = 0;
        uStack_340 = 0;
        uStack_358 = 0;
        local_350 = 0;
        local_360 = local_4a8;
        puVar18 = local_498;
        if (local_498 != local_4f0) {
          do {
            uVar16 = uStack_340;
            uVar4 = *puVar18;
            lVar15 = (longlong)(int)uStack_340;
            uVar12 = (int)uStack_340 + 1;
            uStack_340 = CONCAT44(uStack_340._4_4_,uVar12);
            if (uStack_340._4_4_ < uVar12) {
              FUN_1410d14fc(&local_348,uVar16 & 0xffffffff);
            }
            *(undefined8 *)(local_348 + lVar15 * 8) = uVar4;
            puVar18 = puVar18 + 1;
          } while (puVar18 != local_4f0);
        }
        puVar18 = local_4a0;
        if (local_4a0 != local_4f8) {
          do {
            uVar16 = local_350;
            uVar4 = *puVar18;
            lVar15 = (longlong)(int)local_350;
            uVar12 = (int)local_350 + 1;
            local_350 = CONCAT44(local_350._4_4_,uVar12);
            if (local_350._4_4_ < uVar12) {
              FUN_1410d14fc(&uStack_358,uVar16 & 0xffffffff);
            }
            *(undefined8 *)(uStack_358 + lVar15 * 8) = uVar4;
            puVar18 = puVar18 + 1;
          } while (puVar18 != local_4f8);
        }
        if (local_1a0 == '\x01') {
          if (CONCAT44(uStack_1ac,local_1b0) != 0) {
            FUN_1400020a8();
          }
          if (local_1c0 != 0) {
            FUN_1400020a8();
          }
        }
        local_1c8 = local_360;
        local_1c0 = uStack_358;
        uStack_1b8 = local_350;
        local_1b0 = (undefined4)local_348;
        uStack_1ac = local_348._4_4_;
        uStack_1a8 = (int)uStack_340;
        uStack_1a4 = uStack_340._4_4_;
        local_1a0 = '\x01';
      }
      if (local_502 != '\0') {
        local_198 = local_504;
        local_197._0_1_ = 1;
      }
      local_197 = CONCAT11(local_503,(undefined1)local_197);
      FUN_1408be27e(&local_190,(ulonglong)((longlong)puVar6 - (longlong)puVar20) >> 4);
      puVar21 = local_500;
      puVar19 = local_4e8;
      for (; local_500 = puVar21, local_4e8 = puVar19, puVar6 != puVar20; puVar20 = puVar20 + 4) {
        local_378 = *puVar20;
        uStack_374 = puVar20[1];
        uStack_370 = puVar20[2];
        uStack_36c = puVar20[3];
        FUN_14152e0f7(&local_360);
        lVar15 = (longlong)(int)uStack_188;
        uVar12 = (int)uStack_188 + 1;
        uStack_188 = CONCAT44(uStack_188._4_4_,uVar12);
        if (uStack_188._4_4_ < uVar12) {
          FUN_1447a1bd6(&local_190);
        }
        lVar15 = lVar15 * 0x10;
        *(undefined8 *)(local_190 + lVar15) = 0;
        *(longlong *)(local_190 + lVar15) = local_360;
        local_360 = 0;
        *(undefined4 *)(local_190 + 8 + lVar15) = (undefined4)uStack_358;
        *(undefined4 *)(local_190 + 0xc + lVar15) = uStack_358._4_4_;
        uStack_358 = 0;
        puVar21 = local_500;
        puVar19 = local_4e8;
      }
      uVar16 = (ulonglong)((longlong)puVar19 - (longlong)puVar21) >> 6;
      if ((int)uVar16 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar16 & 0xffffffff);
      }
      FUN_141175d66(local_180,uStack_178 & 0xffffffff);
      uVar11 = uStack_178 >> 0x20;
      uStack_178 = uStack_178 & 0xffffffff00000000;
      if ((int)uVar11 != (int)uVar16) {
        FUN_14657e1d2(&local_180,uVar16 & 0xffffffff);
      }
      if (puVar21 != puVar19) {
        do {
          plVar13 = (longlong *)FUN_145812658(&local_180);
          local_388 = *puVar21;
          uStack_384 = puVar21[1];
          uStack_380 = puVar21[2];
          uStack_37c = puVar21[3];
          FUN_14152e0f7(&local_360,&local_388);
          if (plVar13 == &local_360) {
            if (local_360 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (*plVar13 != 0) {
              FUN_1400020a8();
            }
            *plVar13 = local_360;
            local_360 = 0;
            *(undefined4 *)(plVar13 + 1) = (undefined4)uStack_358;
            *(undefined4 *)((longlong)plVar13 + 0xc) = uStack_358._4_4_;
          }
          local_398 = puVar21[4];
          uStack_394 = puVar21[5];
          uStack_390 = puVar21[6];
          uStack_38c = puVar21[7];
          FUN_14152e0f7(&local_360,&local_398);
          if (plVar13 + 2 == &local_360) {
            if (local_360 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (plVar13[2] != 0) {
              FUN_1400020a8();
            }
            plVar13[2] = local_360;
            local_360 = 0;
            *(undefined4 *)(plVar13 + 3) = (undefined4)uStack_358;
            *(undefined4 *)((longlong)plVar13 + 0x1c) = uStack_358._4_4_;
          }
          local_3a8 = puVar21[8];
          uStack_3a4 = puVar21[9];
          uStack_3a0 = puVar21[10];
          uStack_39c = puVar21[0xb];
          FUN_14152e0f7(&local_360,&local_3a8);
          if (plVar13 + 4 == &local_360) {
            if (local_360 != 0) {
              FUN_1400020a8();
            }
          }
          else {
            if (plVar13[4] != 0) {
              FUN_1400020a8();
            }
            plVar13[4] = local_360;
            local_360 = 0;
            *(undefined4 *)(plVar13 + 5) = (undefined4)uStack_358;
            *(undefined4 *)((longlong)plVar13 + 0x2c) = uStack_358._4_4_;
          }
          plVar17 = plVar13 + 6;
          FUN_14586a8e8(plVar17,(ulonglong)
                                (*(longlong *)(puVar21 + 0xe) - *(longlong *)(puVar21 + 0xc)) >> 6);
          puVar6 = *(undefined4 **)(puVar21 + 0xe);
          local_500 = puVar21;
          for (puVar20 = *(undefined4 **)(puVar21 + 0xc); puVar20 != puVar6;
              puVar20 = puVar20 + 0x10) {
            iVar3 = (int)plVar13[7];
            *(uint *)(plVar13 + 7) = iVar3 + 1U;
            if (*(uint *)((longlong)plVar13 + 0x3c) < iVar3 + 1U) {
              FUN_148a65bb6(plVar17,iVar3);
            }
            plVar22 = (longlong *)((longlong)iVar3 * 0x40 + *plVar17);
            FUN_143ef625c(plVar22);
            local_3b8 = *puVar20;
            uStack_3b4 = puVar20[1];
            uStack_3b0 = puVar20[2];
            uStack_3ac = puVar20[3];
            FUN_14152e0f7(&local_360,&local_3b8);
            if (plVar22 == &local_360) {
              if (local_360 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (*plVar22 != 0) {
                FUN_1400020a8();
              }
              *plVar22 = local_360;
              local_360 = 0;
              *(undefined4 *)(plVar22 + 1) = (undefined4)uStack_358;
              *(undefined4 *)((longlong)plVar22 + 0xc) = uStack_358._4_4_;
            }
            local_3c8 = puVar20[4];
            uStack_3c4 = puVar20[5];
            uStack_3c0 = puVar20[6];
            uStack_3bc = puVar20[7];
            FUN_14152e0f7(&local_360,&local_3c8);
            if (plVar22 + 2 == &local_360) {
              if (local_360 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (plVar22[2] != 0) {
                FUN_1400020a8();
              }
              plVar22[2] = local_360;
              local_360 = 0;
              *(undefined4 *)(plVar22 + 3) = (undefined4)uStack_358;
              *(undefined4 *)((longlong)plVar22 + 0x1c) = uStack_358._4_4_;
            }
            plVar22[4] = *(longlong *)(puVar20 + 8);
            plVar22[5] = *(longlong *)(puVar20 + 10);
            local_3d8 = puVar20[0xc];
            uStack_3d4 = puVar20[0xd];
            uStack_3d0 = puVar20[0xe];
            uStack_3cc = puVar20[0xf];
            FUN_14152e0f7(&local_360,&local_3d8);
            if (plVar22 + 6 == &local_360) {
              if (local_360 != 0) {
                FUN_1400020a8();
              }
            }
            else {
              if (plVar22[6] != 0) {
                FUN_1400020a8();
              }
              plVar22[6] = local_360;
              local_360 = 0;
              *(undefined4 *)(plVar22 + 7) = (undefined4)uStack_358;
              *(undefined4 *)((longlong)plVar22 + 0x3c) = uStack_358._4_4_;
            }
          }
          puVar21 = local_500 + 0x10;
        } while (puVar21 != local_4e8);
      }
      local_3e8 = (undefined4)local_478;
      uStack_3e4 = local_478._4_4_;
      uStack_3e0 = (undefined4)uStack_470;
      uStack_3dc = uStack_470._4_4_;
      FUN_14152e0f7(&local_360,&local_3e8);
      if (local_170 != 0) {
        FUN_1400020a8();
      }
      local_170 = local_360;
      lStack_168 = uStack_358;
      local_3f8 = (undefined4)local_488;
      uStack_3f4 = local_488._4_4_;
      uStack_3f0 = (undefined4)uStack_480;
      uStack_3ec = uStack_480._4_4_;
      FUN_14152e0f7(&local_360,&local_3f8);
      if (local_160 != 0) {
        FUN_1400020a8();
      }
      local_160 = local_360;
      lStack_158 = uStack_358;
      local_150 = local_501;
      local_408 = uStack_2a1;
      uStack_404 = uStack_29d;
      uStack_400 = uStack_299;
      uStack_3fc = uStack_295;
      FUN_14152e0f7(&local_360,&local_408);
      if (local_148 != 0) {
        FUN_1400020a8();
      }
      uVar16 = uStack_410;
      local_148 = local_360;
      lStack_140 = uStack_358;
      lVar15 = (longlong)(int)uStack_410;
      uVar12 = (int)uStack_410 + 1;
      uStack_410 = CONCAT44(uStack_410._4_4_,uVar12);
      if (uStack_410._4_4_ < uVar12) {
        FUN_14657e232(&local_418,uVar16 & 0xffffffff);
      }
      FUN_1412efe78(lVar15 * 0x138 + local_418,local_270);
      FUN_141175be2(local_270);
      puVar14 = puVar14 + 0x4e;
    } while (puVar14 != local_4b0);
  }
  if (((int)local_4e0[1] != 0) && (plVar13 = (longlong *)*local_4e0, plVar13 != (longlong *)0x0)) {
    (**(code **)(*plVar13 + 0x60))(plVar13,local_505,&local_418);
  }
  FUN_1418bf9be(local_418,uStack_410 & 0xffffffff);
  if (local_418 != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_528) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef717a FUN_143ef717a body=79 status=ok
// SIG undefined FUN_143ef717a(void)

void FUN_143ef717a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef71ca FUN_143ef71ca body=286 status=ok
// SIG undefined FUN_143ef71ca(void)

void FUN_143ef71ca(uint *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
     || ((lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar6 == 0 ||
         (*(uint *)(lVar6 + 0x10) != param_1[1])))) goto LAB_143ef72c7;
  sVar1 = *param_2;
  if ((*(uint *)(lVar6 + 8) & 0x10200000) != 0) goto LAB_143ef72c7;
  FUN_1405b4428(local_28,(int)*(undefined8 *)(param_2 + 8) - (int)*(undefined8 *)(param_2 + 4));
  if (param_1[1] == 0) {
LAB_143ef72e5:
    uVar4 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef72e5;
      uVar4 = *puVar5;
    }
  }
  if ((param_1[4] != 0) && (plVar3 = *(longlong **)(param_1 + 2), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar4,(int)sVar1,local_28);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_143ef72c7:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef7344 FUN_143ef7344 body=86 status=ok
// SIG undefined FUN_143ef7344(void)

void FUN_143ef7344(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef739a FUN_143ef739a body=190 status=ok
// SIG undefined FUN_143ef739a(void)

void FUN_143ef739a(longlong *param_1,longlong *param_2)

{
  undefined1 auStack_78 [32];
  undefined1 local_58 [16];
  undefined8 local_48;
  undefined4 local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *param_2;
  uStack_30 = param_2[1];
  FUN_148a57caa(local_58,&local_38);
  local_48 = 0;
  local_40 = 0;
  FUN_148a57d9a(local_58,&local_38);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_38) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_30;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_30._4_4_;
    uStack_30 = 0;
  }
  FUN_1401e7e48(local_58);
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef74b4 FUN_143ef74b4 body=79 status=ok
// SIG undefined FUN_143ef74b4(void)

void FUN_143ef74b4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef755e FUN_143ef755e body=79 status=ok
// SIG undefined FUN_143ef755e(void)

void FUN_143ef755e(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef75ae FUN_143ef75ae body=29 status=ok
// SIG undefined FUN_143ef75ae(void)

undefined8 FUN_143ef75ae(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ef75e0 FUN_143ef75e0 body=93 status=ok
// SIG undefined FUN_143ef75e0(void)

void FUN_143ef75e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ef763e FUN_143ef763e body=93 status=ok
// SIG undefined FUN_143ef763e(void)

void FUN_143ef763e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1ca5b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da660;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ef769c FUN_143ef769c body=126 status=ok
// SIG undefined FUN_143ef769c(void)

void FUN_143ef769c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1ca5b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da660;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ef770b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ef771a FUN_143ef771a body=58 status=ok
// SIG undefined FUN_143ef771a(void)

void FUN_143ef771a(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((*(longlong *)(param_3 + 8) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1457cc262(*(undefined8 *)(param_1 + 0x18),param_2,0);
  return;
}



// FUNCTION 143ef7754 FUN_143ef7754 body=61 status=ok
// SIG undefined FUN_143ef7754(void)

undefined1 FUN_143ef7754(longlong param_1,undefined8 param_2,longlong param_3)

{
  if ((*(longlong *)(param_3 + 8) != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  FUN_1457cc262(*(undefined8 *)(param_1 + 0x18),param_2,0);
  return 1;
}



// FUNCTION 143ef7792 FUN_143ef7792 body=29 status=ok
// SIG undefined FUN_143ef7792(void)

undefined8 FUN_143ef7792(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143ef77c4 FUN_143ef77c4 body=93 status=ok
// SIG undefined FUN_143ef77c4(void)

void FUN_143ef77c4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da6d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ef7822 FUN_143ef7822 body=93 status=ok
// SIG undefined FUN_143ef7822(void)

void FUN_143ef7822(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c8660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da6d0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 143ef7880 FUN_143ef7880 body=126 status=ok
// SIG undefined FUN_143ef7880(void)

void FUN_143ef7880(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c8660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da6d0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143ef78ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143ef7908 FUN_143ef7908 body=20 status=ok
// SIG undefined FUN_143ef7908(void)

undefined1 FUN_143ef7908(longlong param_1)

{
  FUN_140214046(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 143ef791c FUN_143ef791c body=172 status=ok
// SIG undefined FUN_143ef791c(void)

void FUN_143ef791c(void)

{
  double dVar1;
  double dVar2;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if ((DAT_14c866ff0 == '\0') && (DAT_14c846539 != '\x01')) {
    dVar2 = DAT_14c866ff8 - DAT_14c846540;
  }
  else {
    QueryPerformanceCounter(&local_18);
    dVar1 = (double)local_18.QuadPart * DAT_14c83f420 + 16777216.0;
    dVar2 = dVar1 - (double)(-(ulonglong)(DAT_14cb96c38 == 0.0) & (ulonglong)dVar1 |
                            ~-(ulonglong)(DAT_14cb96c38 == 0.0) & (ulonglong)DAT_14cb96c38);
    DAT_14cb96c38 = dVar1;
  }
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(dVar2 * 1000.0);
}



// FUNCTION 143ef7a80 FUN_143ef7a80 body=236 status=ok
// SIG undefined FUN_143ef7a80(void)

double FUN_143ef7a80(void)

{
  byte bVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  float fVar6;
  
  if (DAT_14c760da4 == 0) {
    dVar2 = NAN;
  }
  else {
    uVar4 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    if (uVar4 == 0) {
      iVar5 = 0x20;
    }
    else {
      iVar5 = 0;
      if (uVar4 != 0) {
        for (; (uVar4 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
        }
      }
    }
    fVar6 = 0.0;
    dVar2 = 0.0;
    do {
      uVar3 = (**(code **)(*DAT_14ca83900 + 0x330))(DAT_14ca83900,iVar5);
      fVar6 = fVar6 + 1.0;
      bVar1 = (byte)iVar5 & 0x1f;
      uVar4 = (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1) & uVar4;
      if (uVar4 == 0) {
        iVar5 = 0x20;
      }
      else {
        iVar5 = 0;
        if (uVar4 != 0) {
          for (; (uVar4 >> iVar5 & 1) == 0; iVar5 = iVar5 + 1) {
          }
        }
      }
      dVar2 = dVar2 + (double)(float)(DAT_14c83f420 * 1000.0 * (double)uVar3);
    } while (uVar4 != 0);
    dVar2 = dVar2 / (double)fVar6;
  }
  return dVar2;
}



// FUNCTION 143ef7b6c FUN_143ef7b6c body=220 status=ok
// SIG undefined FUN_143ef7b6c(void)

double FUN_143ef7b6c(longlong param_1)

{
  double dVar1;
  undefined1 *puVar2;
  undefined1 auStack_f8 [32];
  int local_d8 [2];
  undefined1 local_d0 [64];
  undefined1 *local_90;
  undefined1 local_80 [64];
  undefined1 *local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1415e1712(local_d8);
  FUN_1415e18b4(DAT_14cb0d2b0,local_d8);
  if (local_d8[0] < 1) {
    dVar1 = 0.0;
  }
  else {
    puVar2 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      puVar2 = local_d0;
    }
    dVar1 = (double)*(float *)(puVar2 + (longlong)DAT_14cad82fc * 4);
    if (*(char *)(param_1 + 0x32) == '\x01') {
      puVar2 = local_40;
      if (local_40 == (undefined1 *)0x0) {
        puVar2 = local_80;
      }
      dVar1 = dVar1 / (double)*(float *)(puVar2 + (longlong)DAT_14cad82fc * 4);
    }
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if (local_90 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return dVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef7c4a FUN_143ef7c4a body=105 status=ok
// SIG undefined FUN_143ef7c4a(void)

void FUN_143ef7c4a(void)

{
  undefined1 auStack_b8 [32];
  undefined1 local_98 [136];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1405d5a96(local_98);
  if ((local_10 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(SUB84((((double)CONCAT44(0x43300000,(int)local_98._88_8_) - 4503599627370496.0) +
                      ((double)CONCAT44(0x45300000,SUB84(local_98._88_8_,4)) -
                      1.9342813113834067e+25)) * 9.5367431640625e-07,0));
}



// FUNCTION 143ef7cb4 FUN_143ef7cb4 body=58 status=ok
// SIG undefined FUN_143ef7cb4(void)

double FUN_143ef7cb4(void)

{
  longlong lVar1;
  double dVar2;
  
  lVar1 = FUN_140083894();
  if (*(longlong *)(lVar1 + 0x30) == 0) {
    dVar2 = 0.0;
  }
  else {
    lVar1 = FUN_140083894();
    lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x30) + 0xd0))();
    dVar2 = (double)lVar1 * 9.5367431640625e-07;
  }
  return dVar2;
}



// FUNCTION 143ef7cee FUN_143ef7cee body=307 status=ok
// SIG undefined FUN_143ef7cee(void)

void FUN_143ef7cee(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
     || ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
         (*(uint *)(lVar3 + 0x10) != param_1[1])))) goto LAB_143ef7d50;
  uVar2 = *param_3;
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) goto LAB_143ef7d50;
  if (*param_2 == '\0') {
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_143ef7d50;
  }
  local_30 = 0;
  local_28 = 0;
  FUN_148a6614e(&local_30,param_1 + 2);
  if (param_1[1] == 0) {
LAB_143ef7e30:
    uVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef7e30;
      uVar4 = *puVar5;
    }
  }
  FUN_148a6004c(uVar4,uVar2,&local_30);
LAB_143ef7d50:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef7e96 FUN_143ef7e96 body=86 status=ok
// SIG undefined FUN_143ef7e96(void)

void FUN_143ef7e96(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef7fbc FUN_143ef7fbc body=86 status=ok
// SIG undefined FUN_143ef7fbc(void)

void FUN_143ef7fbc(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8012 FUN_143ef8012 body=307 status=ok
// SIG undefined FUN_143ef8012(void)

void FUN_143ef8012(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
     || ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
         (*(uint *)(lVar3 + 0x10) != param_1[1])))) goto LAB_143ef8074;
  uVar2 = *param_3;
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) goto LAB_143ef8074;
  if (*param_2 == '\0') {
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_143ef8074;
  }
  local_30 = 0;
  local_28 = 0;
  FUN_148a6614e(&local_30,param_1 + 2);
  if (param_1[1] == 0) {
LAB_143ef8154:
    uVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef8154;
      uVar4 = *puVar5;
    }
  }
  FUN_148a6023e(uVar4,uVar2,&local_30);
LAB_143ef8074:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef81ba FUN_143ef81ba body=86 status=ok
// SIG undefined FUN_143ef81ba(void)

void FUN_143ef81ba(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef82e0 FUN_143ef82e0 body=86 status=ok
// SIG undefined FUN_143ef82e0(void)

void FUN_143ef82e0(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8336 FUN_143ef8336 body=307 status=ok
// SIG undefined FUN_143ef8336(void)

void FUN_143ef8336(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
     || ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
         (*(uint *)(lVar3 + 0x10) != param_1[1])))) goto LAB_143ef8398;
  uVar2 = *param_3;
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) goto LAB_143ef8398;
  if (*param_2 == '\0') {
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_143ef8398;
  }
  local_30 = 0;
  local_28 = 0;
  FUN_148a6614e(&local_30,param_1 + 2);
  if (param_1[1] == 0) {
LAB_143ef8478:
    uVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef8478;
      uVar4 = *puVar5;
    }
  }
  FUN_148a60430(uVar4,uVar2,&local_30);
LAB_143ef8398:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef84de FUN_143ef84de body=86 status=ok
// SIG undefined FUN_143ef84de(void)

void FUN_143ef84de(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8604 FUN_143ef8604 body=86 status=ok
// SIG undefined FUN_143ef8604(void)

void FUN_143ef8604(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef865a FUN_143ef865a body=307 status=ok
// SIG undefined FUN_143ef865a(void)

void FUN_143ef865a(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
     || ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
         (*(uint *)(lVar3 + 0x10) != param_1[1])))) goto LAB_143ef86bc;
  uVar2 = *param_3;
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) goto LAB_143ef86bc;
  if (*param_2 == '\0') {
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_143ef86bc;
  }
  local_30 = 0;
  local_28 = 0;
  FUN_148a6614e(&local_30,param_1 + 2);
  if (param_1[1] == 0) {
LAB_143ef879c:
    uVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef879c;
      uVar4 = *puVar5;
    }
  }
  FUN_148a60622(uVar4,uVar2,&local_30);
LAB_143ef86bc:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef8802 FUN_143ef8802 body=86 status=ok
// SIG undefined FUN_143ef8802(void)

void FUN_143ef8802(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8928 FUN_143ef8928 body=86 status=ok
// SIG undefined FUN_143ef8928(void)

void FUN_143ef8928(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef897e FUN_143ef897e body=307 status=ok
// SIG undefined FUN_143ef897e(void)

void FUN_143ef897e(uint *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined4 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
     || ((lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0 ||
         (*(uint *)(lVar3 + 0x10) != param_1[1])))) goto LAB_143ef89e0;
  uVar2 = *param_3;
  if ((*(uint *)(lVar3 + 8) & 0x10200000) != 0) goto LAB_143ef89e0;
  if (*param_2 == '\0') {
    if ((param_1[4] != 0) && (*(longlong *)(param_1 + 2) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
    goto LAB_143ef89e0;
  }
  local_30 = 0;
  local_28 = 0;
  FUN_148a6614e(&local_30,param_1 + 2);
  if (param_1[1] == 0) {
LAB_143ef8ac0:
    uVar4 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar4 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar5 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar5 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar5 + 2) != param_1[1] || ((*(uint *)(puVar5 + 1) & 0x10200000) != 0))))
      goto LAB_143ef8ac0;
      uVar4 = *puVar5;
    }
  }
  FUN_148a60814(uVar4,uVar2,&local_30);
LAB_143ef89e0:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef8b26 FUN_143ef8b26 body=86 status=ok
// SIG undefined FUN_143ef8b26(void)

void FUN_143ef8b26(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8c4c FUN_143ef8c4c body=86 status=ok
// SIG undefined FUN_143ef8c4c(void)

void FUN_143ef8c4c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8ca2 FUN_143ef8ca2 body=387 status=ok
// SIG undefined FUN_143ef8ca2(void)

void FUN_143ef8ca2(longlong *param_1,char *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  void *_Src;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong *local_68;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar3 = *(int *)((longlong)param_1 + 0x14);
  if ((((iVar3 == 0) || (uVar1 = *(uint *)(param_1 + 2), (int)uVar1 < 0)) ||
      (DAT_14c9647dc <= (int)uVar1)) ||
     ((lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar7 == 0 ||
      (*(int *)(lVar7 + 0x10) != iVar3)))) goto LAB_143ef8d0a;
  uVar2 = *param_3;
  if ((*(uint *)(lVar7 + 8) & 0x10200000) != 0) goto LAB_143ef8d0a;
  if (*param_2 == '\0') {
    if (((int)param_1[1] != 0) && (*param_1 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_88);
    }
    goto LAB_143ef8d0a;
  }
  local_48 = *param_1;
  *param_1 = 0;
  local_40 = (undefined4)param_1[1];
  *(undefined4 *)(param_1 + 1) = 0;
  local_58 = (void *)0x0;
  local_50 = (int)param_1[5];
  lVar7 = (longlong)local_50;
  _Src = (void *)param_1[4];
  if (lVar7 == 0) {
    local_4c = 0;
    uVar6 = (undefined4)param_1[3];
LAB_143ef8ddf:
    uVar1 = *(uint *)(param_1 + 2);
    uVar5 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(int *)(puVar4 + 2) != iVar3 || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0)))) {
        uVar5 = 0;
      }
      else {
        uVar5 = *puVar4;
      }
    }
  }
  else {
    uVar5 = 0;
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,_Src,lVar7 * 2);
    iVar3 = *(int *)((longlong)param_1 + 0x14);
    uVar6 = (undefined4)param_1[3];
    if (iVar3 != 0) goto LAB_143ef8ddf;
  }
  local_68 = &local_48;
  FUN_148a60ac6(uVar5,uVar2,uVar6,&local_58);
LAB_143ef8d0a:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef8e3e FUN_143ef8e3e body=120 status=ok
// SIG undefined FUN_143ef8e3e(void)

void FUN_143ef8e3e(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_14114e6dc();
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 0x28);
  _Src = *(void **)(param_2 + 0x20);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 != 0) {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],_Src,(longlong)iVar1 * 2);
    return;
  }
  *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  return;
}



// FUNCTION 143ef8eb6 FUN_143ef8eb6 body=165 status=ok
// SIG undefined FUN_143ef8eb6(void)

void FUN_143ef8eb6(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)(param_2 + 1) = 0;
  *(int *)(param_1 + 3) = (int)param_2[3];
  param_1[2] = param_2[2];
  param_1[4] = 0;
  param_1[4] = param_2[4];
  param_2[4] = 0;
  *(int *)(param_1 + 5) = (int)param_2[5];
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
  param_2[5] = 0;
  if (param_2[4] != 0) {
    FUN_1400020a8();
  }
  if ((int)param_2[1] != 0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef8f5c FUN_143ef8f5c body=93 status=ok
// SIG undefined FUN_143ef8f5c(void)

void FUN_143ef8f5c(longlong *param_1)

{
  undefined8 *puVar1;
  
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9014 FUN_143ef9014 body=79 status=ok
// SIG undefined FUN_143ef9014(void)

void FUN_143ef9014(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9064 FUN_143ef9064 body=275 status=ok
// SIG undefined FUN_143ef9064(void)

void FUN_143ef9064(uint *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
  goto LAB_143ef90cc;
  lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x10) != param_1[1])) goto LAB_143ef90cc;
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 4);
  uVar4 = *(undefined8 *)(param_2 + 8);
  if (((*(uint *)(lVar9 + 8) & 0x10200000) != 0) ||
     ((param_1[4] == 0 || (*(longlong **)(param_1 + 2) == (longlong *)0x0)))) goto LAB_143ef90cc;
  cVar5 = (**(code **)(**(longlong **)(param_1 + 2) + 0x30))();
  if (cVar5 == '\0') goto LAB_143ef90cc;
  if (param_1[1] == 0) {
LAB_143ef9174:
    uVar7 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar7 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar8 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar8 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar8 + 2) != param_1[1] || ((*(uint *)(puVar8 + 1) & 0x10200000) != 0))))
      goto LAB_143ef9174;
      uVar7 = *puVar8;
    }
  }
  local_30 = (int)uVar4 - (int)uVar3;
  if (param_1[4] == 0) {
    plVar6 = (longlong *)0x0;
  }
  else {
    plVar6 = *(longlong **)(param_1 + 2);
  }
  local_38 = uVar3;
  (**(code **)(*plVar6 + 0x58))(plVar6,uVar7,uVar1);
LAB_143ef90cc:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef91d2 FUN_143ef91d2 body=86 status=ok
// SIG undefined FUN_143ef91d2(void)

void FUN_143ef91d2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9228 FUN_143ef9228 body=293 status=ok
// SIG undefined FUN_143ef9228(void)

void FUN_143ef9228(uint *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar1 = *param_4;
  local_48 = *param_3;
  uStack_44 = param_3[1];
  uStack_40 = param_3[2];
  uStack_3c = param_3[3];
  if (((param_1[1] == 0) || (uVar2 = *param_1, (int)uVar2 < 0)) || (DAT_14c9647dc <= (int)uVar2))
  goto LAB_143ef932c;
  lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
  if (((lVar4 == 0) || (*(uint *)(lVar4 + 0x10) != param_1[1])) ||
     ((*(uint *)(lVar4 + 8) & 0x10200000) != 0)) goto LAB_143ef932c;
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  FUN_14152e0f7(local_28);
  if (param_1[1] == 0) {
LAB_143ef934a:
    uVar5 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar5 = 0;
    if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
      puVar6 = (undefined8 *)
               ((ulonglong)((uVar2 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
      if ((puVar6 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar6 + 2) != param_1[1] || ((*(uint *)(puVar6 + 1) & 0x10200000) != 0))))
      goto LAB_143ef934a;
      uVar5 = *puVar6;
    }
  }
  if ((param_1[4] != 0) && (plVar3 = *(longlong **)(param_1 + 2), plVar3 != (longlong *)0x0)) {
    (**(code **)(*plVar3 + 0x60))(plVar3,uVar5,local_28,uVar1);
  }
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
LAB_143ef932c:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef93a8 FUN_143ef93a8 body=86 status=ok
// SIG undefined FUN_143ef93a8(void)

void FUN_143ef93a8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef94da FUN_143ef94da body=86 status=ok
// SIG undefined FUN_143ef94da(void)

void FUN_143ef94da(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9530 FUN_143ef9530 body=137 status=ok
// SIG undefined FUN_143ef9530(void)

void FUN_143ef9530(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef9616 FUN_143ef9616 body=79 status=ok
// SIG undefined FUN_143ef9616(void)

void FUN_143ef9616(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef96c0 FUN_143ef96c0 body=79 status=ok
// SIG undefined FUN_143ef96c0(void)

void FUN_143ef96c0(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9710 FUN_143ef9710 body=415 status=ok
// SIG undefined FUN_143ef9710(void)

/* WARNING: Removing unreachable block (ram,0x000143ef97f9) */

void FUN_143ef9710(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  undefined4 *puVar6;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  puVar6 = (undefined4 *)*param_2;
  puVar1 = (undefined4 *)param_2[1];
  local_58 = 0;
  uStack_50 = 0;
  local_98 = param_3;
  FUN_148a66790(&local_58,(int)((ulonglong)((longlong)puVar1 - (longlong)puVar6) >> 3) * -0x55555555
               );
  if (puVar1 != puVar6) {
    uVar2 = local_68;
    do {
      local_68 = uVar2;
      local_88 = *puVar6;
      uStack_84 = puVar6[1];
      uStack_80 = puVar6[2];
      uStack_7c = puVar6[3];
      local_78 = *(undefined8 *)(puVar6 + 4);
      FUN_148a60d5f(&local_70,&local_88);
      uVar3 = uStack_50;
      lVar5 = (longlong)(int)uStack_50;
      uVar4 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
      if (uStack_50._4_4_ < uVar4) {
        FUN_148a668f6(&local_58,uVar3 & 0xffffffff);
      }
      *(undefined8 *)(local_58 + lVar5 * 0x18) = 0;
      *(undefined8 *)(local_58 + lVar5 * 0x18) = local_70;
      local_70 = 0;
      *(undefined4 *)(local_58 + 8 + lVar5 * 0x18) = (undefined4)local_68;
      *(undefined4 *)(local_58 + 0xc + lVar5 * 0x18) = local_68._4_4_;
      local_68 = 0;
      uVar2 = local_68;
      *(undefined8 *)(local_58 + 0x10 + lVar5 * 0x18) = local_60;
      local_68 = 0;
      puVar6 = puVar6 + 6;
    } while (puVar6 != puVar1);
  }
  uVar3 = uStack_50;
  lVar5 = local_58;
  local_90 = local_98;
  uVar2 = *param_1;
  local_70 = 0;
  local_68 = CONCAT44(local_68._4_4_,(int)uStack_50);
  if ((int)uStack_50 == 0) {
    local_68 = uStack_50 & 0xffffffff;
  }
  else {
    FUN_148a6698a(&local_70,uStack_50 & 0xffffffff);
    FUN_148a669f4(local_70,lVar5,uVar3 & 0xffffffff);
  }
  FUN_148a667d6(uVar2,&local_70,&local_90);
  FUN_148a6685a(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef990a FUN_143ef990a body=79 status=ok
// SIG undefined FUN_143ef990a(void)

void FUN_143ef990a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef99b4 FUN_143ef99b4 body=79 status=ok
// SIG undefined FUN_143ef99b4(void)

void FUN_143ef99b4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9a04 FUN_143ef9a04 body=819 status=ok
// SIG undefined FUN_143ef9a04(void)

/* WARNING: Removing unreachable block (ram,0x000143ef9c02) */
/* WARNING: Removing unreachable block (ram,0x000143ef9cdf) */

void FUN_143ef9a04(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  longlong lVar10;
  int iVar11;
  ulonglong uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined1 auStack_118 [40];
  undefined4 local_f0;
  undefined4 local_ec;
  longlong local_e8;
  undefined4 *local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  longlong local_80;
  undefined8 uStack_78;
  longlong local_70;
  undefined8 uStack_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_ec = *param_3;
  local_f0 = param_3[1];
  puVar15 = *(undefined4 **)(param_3 + 2);
  puVar2 = *(undefined4 **)(param_3 + 4);
  puVar13 = *(undefined4 **)(param_3 + 6);
  puVar3 = *(undefined4 **)(param_3 + 8);
  puVar14 = *(undefined4 **)(param_3 + 10);
  puVar4 = *(undefined4 **)(param_3 + 0xc);
  uVar5 = *(undefined8 *)(param_3 + 0xe);
  local_d0 = param_1;
  lVar10 = FUN_140773fe2();
  lVar10 = (**(code **)(**(longlong **)(lVar10 + 0x108) + 0x2b0))
                     (*(longlong **)(lVar10 + 0x108),param_2,1);
  if (lVar10 != 0) {
    local_60 = 0;
    uStack_58 = 0;
    local_70 = 0;
    uStack_68 = 0;
    local_80 = 0;
    uStack_78 = 0;
    local_88 = local_ec;
    local_84 = local_f0;
    uVar12 = (ulonglong)((longlong)puVar2 - (longlong)puVar15) >> 2;
    iVar11 = (int)uVar12;
    local_e8 = lVar10;
    local_e0 = puVar4;
    local_d8 = uVar5;
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar12 & 0xffffffff);
    }
    if (iVar11 != 0) {
      FUN_148a66ac4(&local_80);
    }
    for (; uVar12 = uStack_78, puVar15 != puVar2; puVar15 = puVar15 + 1) {
      uVar1 = *puVar15;
      lVar10 = (longlong)(int)uStack_78;
      uVar9 = (int)uStack_78 + 1;
      uStack_78 = CONCAT44(uStack_78._4_4_,uVar9);
      if (uStack_78._4_4_ < uVar9) {
        FUN_148a66b1a(&local_80,uVar12 & 0xffffffff);
      }
      *(undefined4 *)(local_80 + lVar10 * 4) = uVar1;
    }
    FUN_1408be27e(&local_70,(ulonglong)((longlong)puVar3 - (longlong)puVar13) >> 4);
    if (puVar3 != puVar13) {
      uVar5 = local_b0;
      uVar7 = local_a8;
      do {
        local_a8 = uVar7;
        local_b0 = uVar5;
        local_98 = *puVar13;
        uStack_94 = puVar13[1];
        uStack_90 = puVar13[2];
        uStack_8c = puVar13[3];
        FUN_14152e0f7(&local_b0,&local_98);
        uVar12 = uStack_68;
        lVar10 = (longlong)(int)uStack_68;
        uVar9 = (int)uStack_68 + 1;
        uStack_68 = CONCAT44(uStack_68._4_4_,uVar9);
        if (uStack_68._4_4_ < uVar9) {
          FUN_1447a1bd6(&local_70,uVar12 & 0xffffffff);
        }
        lVar10 = lVar10 * 0x10;
        *(undefined8 *)(local_70 + lVar10) = 0;
        *(undefined8 *)(local_70 + lVar10) = local_b0;
        local_b0 = 0;
        uVar5 = local_b0;
        *(undefined4 *)(local_70 + 8 + lVar10) = (undefined4)local_a8;
        *(undefined4 *)(local_70 + 0xc + lVar10) = local_a8._4_4_;
        local_a8 = 0;
        uVar7 = local_a8;
        local_a8 = 0;
        local_b0 = 0;
        puVar13 = puVar13 + 4;
      } while (puVar13 != puVar3);
    }
    puVar15 = local_e0;
    FUN_148a66790(&local_60,
                  (int)((ulonglong)((longlong)local_e0 - (longlong)puVar14) >> 3) * -0x55555555);
    uVar5 = local_d8;
    if (puVar15 != puVar14) {
      uVar7 = local_b0;
      uVar8 = local_a8;
      do {
        local_a8 = uVar8;
        local_b0 = uVar7;
        local_c8 = *puVar14;
        uStack_c4 = puVar14[1];
        uStack_c0 = puVar14[2];
        uStack_bc = puVar14[3];
        local_b8 = *(undefined8 *)(puVar14 + 4);
        FUN_148a60d5f(&local_b0,&local_c8);
        uVar12 = uStack_58;
        lVar10 = (longlong)(int)uStack_58;
        uVar9 = (int)uStack_58 + 1;
        uStack_58 = CONCAT44(uStack_58._4_4_,uVar9);
        if (uStack_58._4_4_ < uVar9) {
          FUN_148a668f6(&local_60,uVar12 & 0xffffffff);
        }
        *(undefined8 *)(local_60 + lVar10 * 0x18) = 0;
        *(undefined8 *)(local_60 + lVar10 * 0x18) = local_b0;
        local_b0 = 0;
        uVar7 = local_b0;
        *(undefined4 *)(local_60 + 8 + lVar10 * 0x18) = (undefined4)local_a8;
        *(undefined4 *)(local_60 + 0xc + lVar10 * 0x18) = local_a8._4_4_;
        local_a8 = 0;
        uVar8 = local_a8;
        *(undefined8 *)(local_60 + 0x10 + lVar10 * 0x18) = local_a0;
        local_a8 = 0;
        local_b0 = 0;
        puVar14 = puVar14 + 6;
      } while (puVar14 != puVar15);
    }
    local_50 = uVar5;
    if (((int)local_d0[1] != 0) && (plVar6 = (longlong *)*local_d0, plVar6 != (longlong *)0x0)) {
      (**(code **)(*plVar6 + 0x60))(plVar6,local_e8,&local_88);
    }
    FUN_148a66a6e(&local_88);
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143ef9d78 FUN_143ef9d78 body=79 status=ok
// SIG undefined FUN_143ef9d78(void)

void FUN_143ef9d78(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9dc8 FUN_143ef9dc8 body=234 status=ok
// SIG undefined FUN_143ef9dc8(void)

void FUN_143ef9dc8(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong lVar1;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined1 local_38;
  undefined4 local_34;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = param_3[4];
  uStack_64 = param_3[5];
  uStack_60 = param_3[6];
  uStack_5c = param_3[7];
  lVar1 = FUN_140773fe2();
  lVar1 = (**(code **)(**(longlong **)(lVar1 + 0x108) + 0x2b0))
                    (*(longlong **)(lVar1 + 0x108),param_2,1);
  if (lVar1 != 0) {
    local_40 = CONCAT44(uStack_74,local_78);
    local_38 = (undefined1)uStack_70;
    local_34 = uStack_6c;
    FUN_148a60de5(&local_50);
    local_30 = local_50;
    local_28 = local_48;
    if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      (**(code **)(*param_1 + 0x60))(param_1,lVar1,&local_40);
    }
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143ef9ef2 FUN_143ef9ef2 body=79 status=ok
// SIG undefined FUN_143ef9ef2(void)

void FUN_143ef9ef2(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143ef9f42 FUN_143ef9f42 body=514 status=ok
// SIG undefined FUN_143ef9f42(void)

void FUN_143ef9f42(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  ulonglong uVar9;
  undefined4 *puVar10;
  undefined1 auStack_108 [34];
  char local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  longlong local_90;
  ulonglong uStack_88;
  undefined4 local_80;
  char local_7c;
  undefined8 local_78;
  undefined1 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  local_58 = param_3[7];
  local_68 = param_3[3];
  uStack_64 = param_3[4];
  uStack_60 = param_3[5];
  uStack_5c = param_3[6];
  uVar4 = param_3[8];
  puVar10 = *(undefined4 **)(param_3 + 10);
  puVar5 = *(undefined4 **)(param_3 + 0xc);
  local_e6 = *(char *)(param_3 + 0xf);
  local_e4 = param_3[0xe];
  local_e0 = *(undefined8 *)(param_3 + 0x10);
  local_e5 = *(undefined1 *)(param_3 + 0x12);
  lVar6 = FUN_140773fe2();
  lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x108) + 0x2b0))
                    (*(longlong **)(lVar6 + 0x108),param_2,1);
  if (lVar6 != 0) {
    local_7c = '\0';
    local_70 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_d8 = uStack_64;
    uStack_d4 = uStack_60;
    uStack_d0 = uStack_5c;
    uStack_cc = local_58;
    local_b8 = uVar1;
    local_b4 = uVar2;
    local_b0 = uVar3;
    FUN_14152e0f7(&local_c8);
    local_a8 = local_c8;
    uStack_a4 = uStack_c4;
    uStack_a0 = uStack_c0;
    uStack_9c = uStack_bc;
    uVar9 = ((longlong)puVar5 - (longlong)puVar10 >> 2) * -0x5555555555555555;
    iVar8 = (int)uVar9;
    local_98 = uVar4;
    if (iVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(uVar9 & 0xffffffff);
    }
    uStack_88 = uStack_88 & 0xffffffff00000000;
    if (iVar8 != 0) {
      FUN_148a66ce8(&local_90);
    }
    for (; puVar10 != puVar5; puVar10 = puVar10 + 3) {
      puVar7 = (undefined4 *)FUN_148a66ca8(&local_90);
      *puVar7 = *puVar10;
      puVar7[1] = puVar10[1];
      puVar7[2] = puVar10[2];
    }
    if (local_e6 != '\0') {
      local_80 = local_e4;
      local_7c = '\x01';
    }
    local_78 = local_e0;
    local_70 = local_e5;
    if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      (**(code **)(*param_1 + 0x60))(param_1,lVar6,&local_b8);
    }
    if (local_7c == '\x01') {
      local_7c = '\0';
    }
    if (local_90 != 0) {
      FUN_1400020a8();
    }
    if (CONCAT44(uStack_a4,local_a8) != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efa184 FUN_143efa184 body=79 status=ok
// SIG undefined FUN_143efa184(void)

void FUN_143efa184(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efa1d4 FUN_143efa1d4 body=175 status=ok
// SIG undefined FUN_143efa1d4(void)

void FUN_143efa1d4(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong lVar6;
  undefined1 auStack_78 [36];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar1 = *(undefined1 *)(param_3 + 3);
  uVar5 = param_3[4];
  lVar6 = FUN_140773fe2();
  lVar6 = (**(code **)(**(longlong **)(lVar6 + 0x108) + 0x2b0))
                    (*(longlong **)(lVar6 + 0x108),param_2,1);
  if (lVar6 != 0) {
    local_54 = uVar2;
    local_50 = uVar3;
    local_4c = uVar4;
    local_48 = uVar1;
    local_44 = uVar5;
    if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      (**(code **)(*param_1 + 0x60))(param_1,lVar6,&local_54);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efa2c2 FUN_143efa2c2 body=79 status=ok
// SIG undefined FUN_143efa2c2(void)

void FUN_143efa2c2(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efa312 FUN_143efa312 body=162 status=ok
// SIG undefined FUN_143efa312(void)

void FUN_143efa312(longlong *param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar3 = *param_3;
  uVar4 = param_3[1];
  uVar1 = *(undefined1 *)(param_3 + 2);
  uVar2 = *(undefined1 *)((longlong)param_3 + 9);
  lVar5 = FUN_140773fe2();
  lVar5 = (**(code **)(**(longlong **)(lVar5 + 0x108) + 0x2b0))
                    (*(longlong **)(lVar5 + 0x108),param_2,1);
  if (lVar5 != 0) {
    local_44 = uVar3;
    local_40 = uVar4;
    local_3c = uVar1;
    local_3b = uVar2;
    if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
      (**(code **)(*param_1 + 0x60))(param_1,lVar5,&local_44);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efa3f4 FUN_143efa3f4 body=79 status=ok
// SIG undefined FUN_143efa3f4(void)

void FUN_143efa3f4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efa444 FUN_143efa444 body=111 status=ok
// SIG undefined FUN_143efa444(void)

undefined8 * FUN_143efa444(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14b4da8b0;
  plVar1 = param_1 + 3;
  if (*(int *)(param_1 + 4) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_143efa495;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_143efa495:
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143efa4c8 FUN_143efa4c8 body=115 status=ok
// SIG undefined FUN_143efa4c8(void)

void FUN_143efa4c8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da8b0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1461c487a(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 143efa53c FUN_143efa53c body=115 status=ok
// SIG undefined FUN_143efa53c(void)

void FUN_143efa53c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b4da920;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4da8b0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 4) = 0;
  FUN_1461c487a(puVar1 + 3,param_1 + 0x18);
  return;
}



// FUNCTION 143efa5b0 FUN_143efa5b0 body=149 status=ok
// SIG undefined FUN_143efa5b0(void)

void FUN_143efa5b0(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b4da920;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4da8b0;
  (p_Var1->ProcessLocksList).Blink = (_LIST_ENTRY *)0x0;
  p_Var1->EntryCount = 0;
  FUN_1461c487a(&(p_Var1->ProcessLocksList).Blink,param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000143efa636. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 143efa646 FUN_143efa646 body=66 status=ok
// SIG undefined FUN_143efa646(void)

void FUN_143efa646(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143efa6d0(param_1 + 0x18,&local_c,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efa68a FUN_143efa68a body=68 status=ok
// SIG undefined FUN_143efa68a(void)

undefined8 FUN_143efa68a(longlong param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  undefined1 auStack_38 [44];
  undefined4 local_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_c = param_3;
  FUN_143efa6d0(param_1 + 0x18,&local_c,param_4);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efa6d0 FUN_143efa6d0 body=1419 status=ok
// SIG undefined FUN_143efa6d0(void)

void FUN_143efa6d0(undefined8 param_1,int *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  int iVar5;
  undefined8 uVar6;
  char cVar7;
  byte bVar8;
  undefined4 uVar9;
  longlong lVar10;
  undefined2 *puVar11;
  ushort uVar12;
  ulonglong uVar13;
  longlong **unaff_RBX;
  longlong lVar14;
  ushort uVar15;
  ulonglong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  undefined1 auStack_1d8 [40];
  undefined8 local_1b0;
  undefined1 local_1a8 [40];
  wchar_t *local_180;
  undefined4 local_178;
  wchar_t *local_170;
  undefined4 local_168;
  wchar_t *local_160;
  undefined4 local_158;
  wchar_t *local_150;
  undefined4 local_148;
  wchar_t *local_140;
  undefined4 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined2 *local_128;
  undefined8 uStack_120;
  longlong local_118 [3];
  undefined8 uStack_100;
  longlong *local_f8;
  wchar_t *local_f0;
  undefined4 local_e8;
  longlong *local_e0;
  wchar_t *local_d8;
  undefined4 local_d0;
  wchar_t *local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  undefined4 local_b0;
  wchar_t *local_a8;
  undefined4 local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78 [16];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  iVar2 = *param_2;
  local_88 = 0xffffffff;
  uStack_84 = 0xffffffff;
  uStack_80 = 0xffffffff;
  uStack_7c = 0xffffffff;
  local_78 = (undefined1  [16])0x0;
  if (iVar2 == 200) {
    local_1a8._0_16_ = (undefined1  [16])0x0;
    unaff_RBX = &local_98;
    FUN_14047afda(unaff_RBX,param_3);
    cVar7 = FUN_14047b282(local_98,local_1a8,0);
    if ((cVar7 != '\0') && (local_1a8._0_8_ != 0)) {
      unaff_RBX = (longlong **)&uStack_7c;
      local_a8 = L"attempts";
      local_a0 = 8;
      local_1b0 = param_1;
      FUN_14047faa2(local_1a8._0_8_,&local_a8,&local_88);
      local_b8 = L"timeout";
      local_b0 = 7;
      FUN_14047faa2(local_1a8._0_8_,&local_b8,&uStack_84);
      local_c8 = L"port";
      local_c0 = 4;
      FUN_14047faa2(local_1a8._0_8_,&local_c8,unaff_RBX);
      local_d8 = L"size";
      local_d0 = 4;
      FUN_14047faa2(local_1a8._0_8_,&local_d8,&uStack_80);
      local_e0 = (longlong *)0x0;
      local_f0 = L"qos_servers";
      local_e8 = 0xb;
      FUN_140480164(local_1a8._0_8_,&local_f0,&local_e0);
      param_1 = local_1b0;
      if ((local_e0 != (longlong *)0x0) && ((longlong)(int)local_e0[1] != 0)) {
        puVar17 = (undefined8 *)*local_e0;
        puVar18 = puVar17 + (longlong)(int)local_e0[1] * 2;
        unaff_RBX = &local_f8;
LAB_143efa958:
        plVar3 = (longlong *)*puVar17;
        plVar4 = (longlong *)puVar17[1];
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
          UNLOCK();
        }
        local_f8 = (longlong *)0x0;
        bVar8 = (**(code **)(*plVar3 + 0x80))(plVar3,unaff_RBX);
        if (((local_f8 != (longlong *)0x0 & bVar8) == 1) && (*local_f8 != 0)) {
          local_118[2] = 0;
          uStack_100 = 0;
          local_118[0] = 0;
          local_118[1] = 0;
          local_128 = (undefined2 *)0x0;
          uStack_120 = 0;
          local_12c = 0xffffffff;
          local_130 = 0xffffffff;
          local_140 = L"name";
          local_138 = 4;
          FUN_14047fa10(*local_f8,&local_140,local_118 + 2);
          local_150 = L"address";
          local_148 = 7;
          FUN_14047fa10(*local_f8,&local_150,local_118);
          local_160 = L"type";
          local_158 = 4;
          FUN_14047fa10(*local_f8,&local_160,&local_128);
          local_170 = L"ping";
          local_168 = 4;
          FUN_14047faa2(*local_f8,&local_170,&local_12c);
          local_180 = L"loss";
          local_178 = 4;
          FUN_14047faa2(*local_f8,&local_180,&local_130);
          lVar10 = FUN_145852804(local_78);
          iVar5 = (int)uStack_100 + -1;
          if ((int)uStack_100 == 0) {
            iVar5 = 0;
          }
          FUN_1402980a2(lVar10,local_118[2],iVar5);
          FUN_1402980a2(lVar10 + 0x10,local_118[0]);
          *(undefined4 *)(lVar10 + 0x24) = local_12c;
          *(undefined4 *)(lVar10 + 0x28) = local_130;
          puVar11 = local_128;
          if ((int)uStack_120 == 0) {
            puVar11 = &DAT_149dfb77a;
          }
          lVar14 = 0;
          while( true ) {
            uVar12 = *(ushort *)((longlong)puVar11 + lVar14);
            uVar13 = (ulonglong)uVar12;
            uVar15 = *(ushort *)((longlong)&DAT_14b4daf68 + lVar14);
            if (uVar12 != uVar15) break;
            if (uVar12 == 0) goto LAB_143efac1d;
LAB_143efab94:
            lVar14 = lVar14 + 2;
          }
          if ((uVar15 | uVar12) < 0x80) {
            uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
            uVar16 = (ulonglong)uVar15;
            uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
            if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar16]) goto LAB_143efab94;
          }
          if (uVar12 != uVar15) {
            lVar14 = 0;
            goto LAB_143efabc9;
          }
LAB_143efac1d:
          uVar9 = 1;
          goto LAB_143efac22;
        }
        goto LAB_143efa99d;
      }
    }
LAB_143efa86b:
    if (local_90 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_90 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_90)(local_90);
        LOCK();
        piVar1 = (int *)((longlong)local_90 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_90 + 0x10))(local_90);
        }
      }
    }
    uVar6 = local_1a8._8_8_;
    if ((longlong *)local_1a8._8_8_ != (longlong *)0x0) {
      LOCK();
      plVar3 = (longlong *)(local_1a8._8_8_ + 8);
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (*(code *)**(undefined8 **)local_1a8._8_8_)(local_1a8._8_8_);
        LOCK();
        piVar1 = (int *)(uVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*(longlong *)uVar6 + 0x10))(uVar6);
        }
      }
    }
  }
  FUN_1458cd244(local_1a8,&local_88);
  FUN_145c589ee(param_1,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),iVar2 == 200) & 0xffffffff,
                local_1a8);
  FUN_141505886(local_78._0_8_,local_78._8_4_);
  if (local_78._0_8_ != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
LAB_143efabc9:
  uVar12 = *(ushort *)((longlong)puVar11 + lVar14);
  uVar13 = (ulonglong)uVar12;
  uVar15 = *(ushort *)((longlong)&DAT_14b4dae68 + lVar14);
  if (uVar12 == uVar15) {
    if (uVar12 == 0) goto LAB_143efac16;
LAB_143efabe4:
    lVar14 = lVar14 + 2;
    goto LAB_143efabc9;
  }
  if ((uVar15 | uVar12) < 0x80) {
    uVar12 = (ushort)(byte)(&DAT_149e05da0)[uVar13];
    uVar16 = (ulonglong)uVar15;
    uVar15 = (ushort)(byte)(&DAT_149e05da0)[uVar16];
    if ((&DAT_149e05da0)[uVar13] == (&DAT_149e05da0)[uVar16]) goto LAB_143efabe4;
  }
  if (uVar12 != uVar15) goto LAB_143efac25;
LAB_143efac16:
  uVar9 = 2;
LAB_143efac22:
  *(undefined4 *)(lVar10 + 0x20) = uVar9;
LAB_143efac25:
  if (local_128 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_118[0] != 0) {
    FUN_1400020a8();
  }
  if (local_118[2] != 0) {
    FUN_1400020a8();
  }
LAB_143efa99d:
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    plVar3 = plVar4 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
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
  puVar17 = puVar17 + 2;
  param_1 = local_1b0;
  if (puVar17 == puVar18) goto LAB_143efa86b;
  goto LAB_143efa958;
}



// FUNCTION 143efad98 FUN_143efad98 body=354 status=ok
// SIG undefined FUN_143efad98(void)

void FUN_143efad98(uint *param_1,undefined8 *param_2)

{
  uint uVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (((param_1[1] == 0) || (uVar1 = *param_1, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
  goto LAB_143efadf7;
  plVar2 = (longlong *)
           ((ulonglong)((uVar1 & 0xffff) * 0x18) +
           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
  if (((plVar2 == (longlong *)0x0) || (*(uint *)(plVar2 + 2) != param_1[1])) ||
     (uVar3 = *param_2, (*(uint *)(plVar2 + 1) & 0x10200000) != 0)) goto LAB_143efadf7;
  if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
    lVar5 = *plVar2;
  }
  else {
    lVar5 = 0;
  }
  FUN_145be9a0d(*(undefined8 *)(lVar5 + 0x2c8),*(undefined4 *)(lVar5 + 0x2d0));
  *(undefined4 *)(lVar5 + 0x2d0) = 0;
  if (*(int *)(lVar5 + 0x2d4) != 0) {
    FUN_14657e584(lVar5 + 0x2c8);
  }
  local_38 = *(undefined8 *)param_1;
  local_28 = &local_38;
  local_30 = FUN_143efaefc;
  bifrost::news::enumerateArticles(uVar3);
  if (param_1[1] == 0) {
LAB_143efaef0:
    uVar3 = 0;
  }
  else {
    uVar1 = *param_1;
    uVar3 = 0;
    if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
      puVar4 = (undefined8 *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if ((puVar4 == (undefined8 *)0x0) ||
         ((*(uint *)(puVar4 + 2) != param_1[1] || ((*(uint *)(puVar4 + 1) & 0x10200000) != 0))))
      goto LAB_143efaef0;
      uVar3 = *puVar4;
    }
  }
  if ((param_1[4] != 0) && (plVar2 = *(longlong **)(param_1 + 2), plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,uVar3);
  }
LAB_143efadf7:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efaefc FUN_143efaefc body=1287 status=ok
// SIG undefined FUN_143efaefc(void)

void FUN_143efaefc(uint *param_1,undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 *puVar6;
  void *_Src;
  undefined8 uVar7;
  undefined8 uVar8;
  size_t sVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  longlong lVar14;
  undefined1 auStack_408 [32];
  undefined8 local_3e8;
  void *local_3d8;
  ulonglong local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined1 local_390 [256];
  longlong local_290;
  undefined8 local_288;
  undefined4 local_280;
  undefined1 local_278 [256];
  longlong local_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined1 local_160 [256];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_408;
  if ((((param_1[1] != 0) && (uVar3 = *param_1, -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc))
     && (((plVar10 = (longlong *)
                     ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar10 != (longlong *)0x0 && (*(uint *)(plVar10 + 2) == param_1[1])) &&
         ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)))) {
    if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
      lVar14 = *plVar10;
    }
    else {
      lVar14 = 0;
    }
    local_3d8 = (void *)*param_2;
    pcVar5 = (char *)param_2[1];
    local_60 = 0;
    if (pcVar5 == (char *)0x0) {
      local_58 = 0;
      local_50 = 0;
    }
    else {
      sVar9 = strlen(pcVar5);
      FUN_1446e6fe8(local_160,pcVar5,sVar9 & 0xffffffff,1);
    }
    FUN_140056680(&local_3d0,local_58);
    pcVar5 = (char *)param_2[3];
    local_178 = 0;
    if (pcVar5 == (char *)0x0) {
      local_170 = 0;
      local_168 = 0;
    }
    else {
      sVar9 = strlen(pcVar5);
      FUN_1446e6fe8(local_278,pcVar5,sVar9 & 0xffffffff,1);
    }
    FUN_140056680(&local_3c0,local_170);
    pcVar5 = (char *)param_2[2];
    local_290 = 0;
    if (pcVar5 == (char *)0x0) {
      local_288 = 0;
      local_280 = 0;
    }
    else {
      sVar9 = strlen(pcVar5);
      FUN_1446e6fe8(local_390,pcVar5,sVar9 & 0xffffffff,1);
    }
    FUN_140056680(&local_3b0,local_288);
    local_3a0 = 0;
    uStack_398 = 0;
    iVar4 = *(int *)(lVar14 + 0x2d0);
    lVar11 = (longlong)iVar4;
    *(uint *)(lVar14 + 0x2d0) = iVar4 + 1U;
    if (*(uint *)(lVar14 + 0x2d4) < iVar4 + 1U) {
      FUN_14657e5b4((longlong *)(lVar14 + 0x2c8),iVar4);
    }
    lVar14 = *(longlong *)(lVar14 + 0x2c8);
    *(void **)(lVar14 + lVar11 * 0x48) = local_3d8;
    *(undefined8 *)(lVar14 + 8 + lVar11 * 0x48) = 0;
    *(ulonglong *)(lVar14 + 8 + lVar11 * 0x48) = local_3d0;
    local_3d0 = 0;
    *(undefined4 *)(lVar14 + 0x10 + lVar11 * 0x48) = (undefined4)local_3c8;
    *(undefined4 *)(lVar14 + 0x14 + lVar11 * 0x48) = local_3c8._4_4_;
    local_3c8 = 0;
    *(undefined8 *)(lVar14 + 0x18 + lVar11 * 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x18 + lVar11 * 0x48) = local_3c0;
    local_3c0 = 0;
    *(undefined4 *)(lVar14 + 0x20 + lVar11 * 0x48) = (undefined4)local_3b8;
    *(undefined4 *)(lVar14 + 0x24 + lVar11 * 0x48) = local_3b8._4_4_;
    local_3b8 = 0;
    *(undefined8 *)(lVar14 + 0x28 + lVar11 * 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x28 + lVar11 * 0x48) = local_3b0;
    local_3b0 = 0;
    *(undefined4 *)(lVar14 + 0x30 + lVar11 * 0x48) = (undefined4)local_3a8;
    *(undefined4 *)(lVar14 + 0x34 + lVar11 * 0x48) = local_3a8._4_4_;
    local_3a8 = 0;
    *(undefined8 *)(lVar14 + 0x38 + lVar11 * 0x48) = 0;
    *(undefined8 *)(lVar14 + 0x38 + lVar11 * 0x48) = local_3a0;
    local_3a0 = 0;
    *(undefined4 *)(lVar14 + 0x40 + lVar11 * 0x48) = (undefined4)uStack_398;
    *(undefined4 *)(lVar14 + 0x44 + lVar11 * 0x48) = uStack_398._4_4_;
    uStack_398 = 0;
    FUN_145be9a34();
    if (local_290 != 0) {
      FUN_1400020a8();
    }
    if (local_178 != 0) {
      FUN_1400020a8();
    }
    if (local_60 != 0) {
      FUN_1400020a8();
    }
    puVar12 = (undefined8 *)param_2[4];
    puVar6 = (undefined8 *)param_2[5];
    if (puVar12 != puVar6) {
      lVar1 = lVar14 + lVar11 * 0x48;
      plVar10 = (longlong *)(lVar14 + lVar11 * 0x48 + 0x38);
      do {
        pcVar5 = (char *)puVar12[1];
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          local_58 = 0;
          local_50 = 0;
        }
        else {
          sVar9 = strlen(pcVar5);
          FUN_1446e6fe8(local_160,pcVar5,sVar9 & 0xffffffff,1);
        }
        uVar8 = local_58;
        pcVar5 = (char *)*puVar12;
        local_178 = 0;
        if (pcVar5 == (char *)0x0) {
          local_170 = 0;
          local_168 = 0;
        }
        else {
          sVar9 = strlen(pcVar5);
          FUN_1446e6fe8(local_278,pcVar5,sVar9 & 0xffffffff,1);
        }
        uVar7 = local_170;
        pcVar5 = (char *)puVar12[2];
        local_290 = 0;
        if (pcVar5 == (char *)0x0) {
          local_288 = 0;
          local_280 = 0;
        }
        else {
          sVar9 = strlen(pcVar5);
          FUN_1446e6fe8(local_390,pcVar5,sVar9 & 0xffffffff,1);
        }
        local_3e8 = uVar8;
        FUN_140002266(&local_3d8,L"%s//%s//%s",local_288,uVar7);
        if (local_290 != 0) {
          FUN_1400020a8();
        }
        if (local_178 != 0) {
          FUN_1400020a8();
        }
        if (local_60 != 0) {
          FUN_1400020a8();
        }
        iVar4 = *(int *)(lVar1 + 0x40);
        *(uint *)(lVar1 + 0x40) = iVar4 + 1U;
        if (*(uint *)(lVar1 + 0x44) < iVar4 + 1U) {
          FUN_1447a1bd6(plVar10,iVar4);
        }
        _Src = local_3d8;
        lVar14 = *plVar10;
        lVar13 = (longlong)iVar4 * 0x10;
        puVar2 = (undefined8 *)(lVar14 + lVar13);
        *(undefined8 *)(lVar14 + lVar13) = 0;
        lVar11 = (longlong)(int)local_3d0;
        *(int *)(lVar14 + 8 + lVar13) = (int)local_3d0;
        if (lVar11 == 0) {
          *(undefined4 *)((longlong)puVar2 + 0xc) = 0;
        }
        else {
          FUN_1446dd670(puVar2,local_3d0 & 0xffffffff,0);
          memcpy((void *)*puVar2,_Src,lVar11 * 2);
        }
        if (local_3d8 != (void *)0x0) {
          FUN_1400020a8();
        }
        puVar12 = puVar12 + 3;
      } while (puVar12 != puVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_408) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efb45e FUN_143efb45e body=86 status=ok
// SIG undefined FUN_143efb45e(void)

void FUN_143efb45e(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efb4b4 FUN_143efb4b4 body=160 status=ok
// SIG undefined FUN_143efb4b4(void)

void FUN_143efb4b4(longlong *param_1,byte *param_2,undefined8 *param_3)

{
  longlong lVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined1 auStack_158 [32];
  undefined8 local_138 [13];
  undefined1 local_d0 [168];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_158;
  bVar2 = 5;
  if (*param_2 < 5) {
    bVar2 = *param_2;
  }
  puVar3 = local_138;
  for (lVar1 = 0xd; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_145d00df9(local_d0);
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,bVar2,local_d0);
  }
  FUN_145ac37d8(local_d0);
  if ((local_28 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efb594 FUN_143efb594 body=79 status=ok
// SIG undefined FUN_143efb594(void)

void FUN_143efb594(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efb5e4 FUN_143efb5e4 body=121 status=ok
// SIG undefined FUN_143efb5e4(void)

void FUN_143efb5e4(longlong *param_1,int *param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = param_2[2];
  iStack_14 = param_2[3];
  iStack_10 = param_2[4];
  iStack_c = param_2[5];
  local_20[0] = 1;
  if ((byte)*param_2 < 6) {
    local_20[0] = (undefined1)(0x50402030100 >> ((byte)(*param_2 << 3) & 0x3f));
  }
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efb69c FUN_143efb69c body=79 status=ok
// SIG undefined FUN_143efb69c(void)

void FUN_143efb69c(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efb6ec FUN_143efb6ec body=143 status=ok
// SIG undefined FUN_143efb6ec(void)

void FUN_143efb6ec(longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  lVar1 = *param_1;
  if ((longlong *)(lVar1 + 0x18) == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(lVar1 + 0x18) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(lVar1 + 0x18) = local_28;
    *(undefined4 *)(lVar1 + 0x20) = local_20;
    *(undefined4 *)(lVar1 + 0x24) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efb77c FUN_143efb77c body=137 status=ok
// SIG undefined FUN_143efb77c(void)

void FUN_143efb77c(longlong *param_1,undefined4 *param_2)

{
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *param_2;
  uStack_34 = param_2[1];
  uStack_30 = param_2[2];
  uStack_2c = param_2[3];
  FUN_14152e0f7(&local_28);
  param_1 = (longlong *)*param_1;
  if (param_1 == &local_28) {
    if (local_28 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = local_28;
    *(undefined4 *)(param_1 + 1) = local_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = local_1c;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efb806 FUN_143efb806 body=327 status=ok
// SIG undefined FUN_143efb806(void)

/* WARNING: Removing unreachable block (ram,0x000143efb8de) */

void FUN_143efb806(longlong *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_b8 [44];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60 [8];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_60[0] = *param_3;
  puVar7 = *(undefined4 **)(param_3 + 8);
  puVar1 = *(undefined4 **)(param_3 + 0x10);
  local_8c = *param_2;
  local_58 = 0;
  uStack_50 = 0;
  FUN_1408be27e(&local_58,(ulonglong)((longlong)puVar1 - (longlong)puVar7) >> 4);
  if (puVar1 != puVar7) {
    uVar3 = local_70;
    uVar4 = local_68;
    do {
      local_68 = uVar4;
      local_70 = uVar3;
      local_88 = *puVar7;
      uStack_84 = puVar7[1];
      uStack_80 = puVar7[2];
      uStack_7c = puVar7[3];
      FUN_14152e0f7(&local_70,&local_88);
      uVar2 = uStack_50;
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_1447a1bd6(&local_58,uVar2 & 0xffffffff);
      }
      lVar6 = lVar6 * 0x10;
      *(undefined8 *)(local_58 + lVar6) = 0;
      *(undefined8 *)(local_58 + lVar6) = local_70;
      local_70 = 0;
      uVar3 = local_70;
      *(undefined4 *)(local_58 + 8 + lVar6) = (undefined4)local_68;
      *(undefined4 *)(local_58 + 0xc + lVar6) = local_68._4_4_;
      local_68 = 0;
      uVar4 = local_68;
      local_68 = 0;
      local_70 = 0;
      puVar7 = puVar7 + 4;
    } while (puVar7 != puVar1);
  }
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,local_8c,local_60);
  }
  FUN_1447a1747(local_58,uStack_50 & 0xffffffff);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efb98c FUN_143efb98c body=79 status=ok
// SIG undefined FUN_143efb98c(void)

void FUN_143efb98c(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efb9e4 FUN_143efb9e4 body=250 status=ok
// SIG undefined FUN_143efb9e4(void)

void FUN_143efb9e4(uint *param_1,int *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_30 [2];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = *param_4;
  uStack_54 = param_4[1];
  uStack_50 = param_4[2];
  uStack_4c = param_4[3];
  if (((param_1[1] != 0) && (uVar1 = *param_1, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) && (*(uint *)(plVar5 + 2) == param_1[1])) {
      uVar2 = *param_3;
      iVar3 = *param_2;
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        if ((iVar3 == 0) && ((char)param_1[6] != '\0')) {
          if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
            lVar4 = *plVar5;
          }
          else {
            lVar4 = 0;
          }
          *(undefined4 *)(lVar4 + 0x110) = uVar2;
        }
        local_48 = local_58;
        uStack_44 = uStack_54;
        uStack_40 = uStack_50;
        uStack_3c = uStack_4c;
        FUN_14152e0f7(local_30);
        if ((param_1[4] != 0) && (plVar5 = *(longlong **)(param_1 + 2), plVar5 != (longlong *)0x0))
        {
          (**(code **)(*plVar5 + 0x60))(plVar5,uVar2,local_30,iVar3);
        }
        if (local_30[0] != 0) {
          FUN_1400020a8();
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



// FUNCTION 143efbae0 FUN_143efbae0 body=59 status=ok
// SIG undefined FUN_143efbae0(void)

void FUN_143efbae0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_146058d60(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



// FUNCTION 143efbb1c FUN_143efbb1c body=127 status=ok
// SIG undefined FUN_143efbb1c(void)

void FUN_143efbb1c(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  if (*(int *)(param_2 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 2) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbb9c FUN_143efbb9c body=86 status=ok
// SIG undefined FUN_143efbb9c(void)

void FUN_143efbb9c(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbc5a FUN_143efbc5a body=79 status=ok
// SIG undefined FUN_143efbc5a(void)

void FUN_143efbc5a(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbd36 FUN_143efbd36 body=59 status=ok
// SIG undefined FUN_143efbd36(void)

void FUN_143efbd36(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  FUN_145c44cca(param_1 + 1,param_2 + 1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return;
}



// FUNCTION 143efbd72 FUN_143efbd72 body=127 status=ok
// SIG undefined FUN_143efbd72(void)

void FUN_143efbd72(undefined8 *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  *param_1 = *param_2;
  plVar1 = param_2 + 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[1] = param_2[1];
  param_2[1] = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)(param_2 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  if (*(int *)(param_2 + 2) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_2 + 2) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbdf2 FUN_143efbdf2 body=86 status=ok
// SIG undefined FUN_143efbdf2(void)

void FUN_143efbdf2(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 8);
  if (*(int *)(param_1 + 0x10) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbea8 FUN_143efbea8 body=79 status=ok
// SIG undefined FUN_143efbea8(void)

void FUN_143efbea8(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbf58 FUN_143efbf58 body=79 status=ok
// SIG undefined FUN_143efbf58(void)

void FUN_143efbf58(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efbfa8 FUN_143efbfa8 body=1095 status=ok
// SIG undefined FUN_143efbfa8(void)

void FUN_143efbfa8(longlong *param_1,Advertisement *param_2)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  longlong lVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  longlong *plVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  Advertisement *local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar12 = (longlong *)*param_1;
  iVar2 = (int)plVar12[5];
  local_c0 = param_2;
  if (iVar2 == 0) {
    uVar9 = 1;
    uVar13 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)plVar12[4];
    if ((uint *)plVar12[4] == (uint *)0x0) {
      puVar6 = (uint *)(plVar12 + 2);
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar13 = 0;
      uVar9 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar9 = uVar13;
      }
      iVar8 = 0;
      do {
        if (uVar9 == uVar13) goto LAB_143efc1e6;
        iVar8 = iVar8 + 0x20;
        uVar14 = puVar6[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar13 = 0;
      iVar8 = 0;
    }
    uVar9 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar9 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 < iVar2) {
    uVar14 = 0xffffffff;
    local_c8 = param_1;
    do {
      FUN_1401e7e86(local_78,*plVar12 + (longlong)iVar10 * 0x20 + 8);
      FUN_14482e566(local_78);
      local_50 = local_60 + local_68;
      local_58 = local_68;
      FUN_1400021e4((longlong)iVar10 * 0x20 + *plVar12,local_b8);
      FUN_1401e7e86(&local_a8,local_b8);
      FUN_14482e566(&local_a8);
      local_80 = local_90 + local_98;
      local_88 = local_98;
      bifrost::messaging::Advertisement::addProperty(local_c0,&local_88,&local_58);
      FUN_1401e7e48(&local_a8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1401e7e48(local_78);
      uVar14 = uVar14 & ~(uint)uVar9;
      puVar6 = (uint *)plVar12[4];
      if ((uint *)plVar12[4] == (uint *)0x0) {
        puVar6 = (uint *)(plVar12 + 2);
      }
      iVar2 = (int)plVar12[5];
      iVar10 = (int)uVar13;
      lVar11 = (longlong)iVar10;
      uVar3 = puVar6[lVar11] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar4 <= iVar10) break;
        lVar7 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar6[lVar11 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar11 == lVar7) goto LAB_143efc1de;
        }
        uVar13 = (ulonglong)(iVar10 + (int)lVar7 + 1);
        uVar14 = 0xffffffff;
      }
      uVar9 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar9 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar2);
LAB_143efc1de:
    plVar12 = (longlong *)*local_c8;
  }
LAB_143efc1e6:
  iVar2 = (int)plVar12[0xf];
  local_c8 = plVar12;
  if (iVar2 == 0) {
    uVar13 = 1;
    uVar9 = 0;
    iVar8 = 0;
    iVar10 = 0;
  }
  else {
    puVar6 = (uint *)plVar12[0xe];
    if ((uint *)plVar12[0xe] == (uint *)0x0) {
      puVar6 = (uint *)(plVar12 + 0xc);
    }
    uVar14 = *puVar6;
    if (uVar14 == 0) {
      iVar10 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar10 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar13 = (ulonglong)(uint)(iVar10 >> 5);
      if (iVar10 >> 5 < 1) {
        uVar13 = uVar9;
      }
      iVar8 = 0;
      do {
        if (uVar13 == uVar9) goto LAB_143efc3ae;
        iVar8 = iVar8 + 0x20;
        uVar14 = puVar6[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar9 = 0;
      iVar8 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar10) {
      iVar10 = iVar2;
    }
  }
  if (iVar10 < iVar2) {
    uVar14 = 0xffffffff;
    do {
      lVar11 = local_c8[10] + (longlong)iVar10 * 0x14;
      iVar2 = *(int *)(lVar11 + 8);
      FUN_1400021e4(lVar11,local_b8);
      FUN_1401e7e86(local_78,local_b8);
      FUN_14482e566(local_78);
      local_a0 = local_60 + local_68;
      local_a8 = local_68;
      bifrost::messaging::Advertisement::addProperty(local_c0,&local_a8,(longlong)iVar2);
      FUN_1401e7e48(local_78);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar6 = (uint *)local_c8[0xe];
      if ((uint *)local_c8[0xe] == (uint *)0x0) {
        puVar6 = (uint *)(plVar12 + 0xc);
      }
      iVar2 = (int)local_c8[0xf];
      iVar10 = (int)uVar9;
      lVar11 = (longlong)iVar10;
      uVar3 = puVar6[lVar11] & uVar14;
      if (uVar3 == 0) {
        iVar4 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar4 = iVar2 + -1;
        }
        iVar4 = iVar4 >> 5;
        iVar5 = iVar4;
        if (iVar4 < iVar10) {
          iVar5 = iVar10;
        }
        if (iVar4 <= iVar10) break;
        lVar7 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar3 = puVar6[lVar11 + lVar7 + 1];
          if (uVar3 != 0) break;
          lVar7 = lVar7 + 1;
          if (iVar5 - lVar11 == lVar7) goto LAB_143efc3ae;
        }
        uVar9 = (ulonglong)(iVar10 + (int)lVar7 + 1);
        uVar14 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar3 & uVar3);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar10 = (iVar8 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar10 < iVar2);
  }
LAB_143efc3ae:
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efc450 FUN_143efc450 body=79 status=ok
// SIG undefined FUN_143efc450(void)

void FUN_143efc450(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efc500 FUN_143efc500 body=79 status=ok
// SIG undefined FUN_143efc500(void)

void FUN_143efc500(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efc550 FUN_143efc550 body=227 status=ok
// SIG undefined FUN_143efc550(void)

void FUN_143efc550(longlong *param_1,int *param_2,RoomParams *param_3)

{
  int iVar1;
  longlong *plVar2;
  undefined1 auStack_88 [40];
  uint local_60 [2];
  undefined8 local_58;
  RoomParams local_50;
  longlong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  uint *local_30;
  code *local_28;
  undefined4 **local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar1 = *param_2;
  local_60[0] = 2;
  local_58 = 200;
  local_50 = (RoomParams)0x1;
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (iVar1 == 0) {
    local_60[0] = (uint)(*(int *)param_3 == 1);
    if (*(int *)param_3 == 2) {
      local_60[0] = 2;
    }
    local_30 = local_60;
    local_58 = *(undefined8 *)(param_3 + 0x10);
    local_38 = *(undefined8 *)(param_3 + 8);
    local_50 = param_3[0x20];
    local_20 = &local_30;
    local_28 = FUN_143efb6ec;
    bifrost::messaging::RoomParams::getMetadata(param_3);
  }
  if (((int)param_1[1] != 0) && (plVar2 = (longlong *)*param_1, plVar2 != (longlong *)0x0)) {
    (**(code **)(*plVar2 + 0x60))(plVar2,(int)param_1[2],iVar1,local_60);
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efc634 FUN_143efc634 body=44 status=ok
// SIG undefined FUN_143efc634(void)

void FUN_143efc634(undefined8 *param_1,longlong param_2)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  FUN_1459aef92();
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  return;
}



// FUNCTION 143efc660 FUN_143efc660 body=110 status=ok
// SIG undefined FUN_143efc660(void)

void FUN_143efc660(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)(param_2 + 1) = 0;
  *(int *)(param_1 + 2) = (int)param_2[2];
  if ((int)param_2[1] != 0) {
    puVar1 = (undefined8 *)*param_2;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_2,0,0,0x10);
    *(undefined4 *)(param_2 + 1) = 0;
  }
  if (*param_2 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efc6ce FUN_143efc6ce body=79 status=ok
// SIG undefined FUN_143efc6ce(void)

void FUN_143efc6ce(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efc71e FUN_143efc71e body=533 status=ok
// SIG undefined FUN_143efc71e(void)

void FUN_143efc71e(longlong *param_1,Query *param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_e8 [40];
  longlong *local_c0;
  longlong local_b8 [2];
  longlong local_a8;
  longlong local_a0;
  longlong local_98;
  int local_90;
  longlong local_88;
  longlong local_80;
  undefined1 local_78 [16];
  longlong local_68;
  int local_60;
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  *(undefined8 *)param_2 = *(undefined8 *)*param_1;
  *(undefined8 *)(param_2 + 8) = *(undefined8 *)(*param_1 + 8);
  param_2[0x10] = *(Query *)(*param_1 + 0x10);
  lVar3 = *param_1;
  if ((longlong)*(int *)(lVar3 + 0x20) != 0) {
    lVar4 = (longlong)*(int *)(lVar3 + 0x20) << 5;
    lVar3 = *(longlong *)(lVar3 + 0x18) + 0x10;
    local_c0 = param_1;
    do {
      FUN_1401e7e86(local_78,lVar3);
      FUN_14482e566(local_78);
      local_50 = local_60 + local_68;
      local_58 = local_68;
      uVar2 = *(uint *)(lVar3 + -8);
      if (5 < *(uint *)(lVar3 + -8)) {
        uVar2 = 0;
      }
      FUN_1400021e4(lVar3 + -0x10,local_b8);
      FUN_1401e7e86(&local_a8,local_b8);
      FUN_14482e566(&local_a8);
      local_80 = local_90 + local_98;
      local_88 = local_98;
      bifrost::messaging::Query::addFilter(param_2,&local_88,uVar2,&local_58);
      FUN_1401e7e48(&local_a8);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      FUN_1401e7e48(local_78);
      lVar3 = lVar3 + 0x20;
      lVar4 = lVar4 + -0x20;
    } while (lVar4 != 0);
    lVar3 = *local_c0;
  }
  if ((longlong)*(int *)(lVar3 + 0x30) != 0) {
    lVar4 = *(longlong *)(lVar3 + 0x28);
    lVar3 = (longlong)*(int *)(lVar3 + 0x30) << 4;
    do {
      iVar1 = *(int *)(lVar4 + 0xc);
      uVar2 = *(uint *)(lVar4 + 8);
      if (5 < *(uint *)(lVar4 + 8)) {
        uVar2 = 0;
      }
      FUN_1400021e4(lVar4,local_b8);
      FUN_1401e7e86(local_78,local_b8);
      FUN_14482e566(local_78);
      local_a0 = local_60 + local_68;
      local_a8 = local_68;
      bifrost::messaging::Query::addFilter(param_2,&local_a8,uVar2,(longlong)iVar1);
      FUN_1401e7e48(local_78);
      if (local_b8[0] != 0) {
        FUN_1400020a8();
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -0x10;
    } while (lVar3 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143efc934 FUN_143efc934 body=193 status=ok
// SIG undefined FUN_143efc934(void)

void FUN_143efc934(longlong *param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 *puVar7;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  puVar7 = (undefined4 *)*param_3;
  puVar3 = (undefined4 *)param_3[1];
  uVar1 = *param_2;
  local_58 = 0;
  uStack_50 = 0;
  if (puVar7 != puVar3) {
    do {
      uVar4 = uStack_50;
      uVar2 = *puVar7;
      lVar6 = (longlong)(int)uStack_50;
      uVar5 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
      if (uStack_50._4_4_ < uVar5) {
        FUN_148a673c4(&local_58,uVar4 & 0xffffffff);
      }
      *(undefined4 *)(local_58 + lVar6 * 4) = uVar2;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar3);
  }
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,uVar1,&local_58);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 143efca34 FUN_143efca34 body=79 status=ok
// SIG undefined FUN_143efca34(void)

void FUN_143efca34(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efcae4 FUN_143efcae4 body=79 status=ok
// SIG undefined FUN_143efcae4(void)

void FUN_143efcae4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efcb94 FUN_143efcb94 body=79 status=ok
// SIG undefined FUN_143efcb94(void)

void FUN_143efcb94(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efcc44 FUN_143efcc44 body=79 status=ok
// SIG undefined FUN_143efcc44(void)

void FUN_143efcc44(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efccf4 FUN_143efccf4 body=79 status=ok
// SIG undefined FUN_143efccf4(void)

void FUN_143efccf4(longlong *param_1)

{
  undefined8 *puVar1;
  
  if ((int)param_1[1] != 0) {
    puVar1 = (undefined8 *)*param_1;
    if (puVar1 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar1)(puVar1,0);
    FUN_1446efa72(param_1,0,0,0x10);
    *(undefined4 *)(param_1 + 1) = 0;
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143efcd44 FUN_143efcd44 body=204 status=ok
// SIG undefined FUN_143efcd44(void)

void FUN_143efcd44(longlong *param_1,undefined4 *param_2,undefined8 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *param_4;
  puVar7 = (undefined4 *)*param_3;
  puVar4 = (undefined4 *)param_3[1];
  uVar2 = *param_2;
  local_58 = 0;
  uStack_50 = 0;
  if (puVar7 != puVar4) {
    do {
      uVar5 = uStack_50;
      uVar3 = *puVar7;
      lVar8 = (longlong)(int)uStack_50;
      uVar6 = (int)uStack_50 + 1;
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar6);
      if (uStack_50._4_4_ < uVar6) {
        FUN_14657e744(&local_58,uVar5 & 0xffffffff);
      }
      *(undefined4 *)(local_58 + lVar8 * 4) = uVar3;
      puVar7 = puVar7 + 1;
    } while (puVar7 != puVar4);
  }
  if (((int)param_1[1] != 0) && (param_1 = (longlong *)*param_1, param_1 != (longlong *)0x0)) {
    (**(code **)(*param_1 + 0x60))(param_1,uVar2,&local_58,uVar1);
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


