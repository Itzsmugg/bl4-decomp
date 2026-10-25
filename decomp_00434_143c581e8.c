// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 143c581e8 FUN_143c581e8 body=55 status=ok
// SIG undefined FUN_143c581e8(void)

void FUN_143c581e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60318 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60318 = FUN_14171c317(FUN_1464ebec8,uVar1,L"StationLockStatus");
  }
  return;
}



// FUNCTION 143c58228 FUN_143c58228 body=55 status=ok
// SIG undefined FUN_143c58228(void)

void FUN_143c58228(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb603d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb603d8 = FUN_14171c317(FUN_1464ec14a,uVar1,L"EGbxLightType");
  }
  return;
}



// FUNCTION 143c58264 FUN_143c58264 body=47 status=ok
// SIG undefined FUN_143c58264(void)

longlong FUN_143c58264(void)

{
  if (DAT_14cb60450 == 0) {
    FUN_14000fc22(&DAT_14cb60450,&PTR_FUN_14b1a0a68);
  }
  return DAT_14cb60450;
}



// FUNCTION 143c582b2 FUN_143c582b2 body=47 status=ok
// SIG undefined FUN_143c582b2(void)

longlong FUN_143c582b2(void)

{
  if (DAT_14cb60480 == 0) {
    FUN_14000fc22(&DAT_14cb60480,&PTR_FUN_14b1a0e68);
  }
  return DAT_14cb60480;
}



// FUNCTION 143c582e2 FUN_143c582e2 body=729 status=ok
// SIG undefined FUN_143c582e2(void)

void FUN_143c582e2(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  char cVar7;
  undefined8 *puVar8;
  int *_Src;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  undefined8 local_50;
  undefined8 local_48;
  code *local_40;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_28 = (undefined4)(DAT_14c707940 ^ (ulonglong)auStack_78);
  uStack_24 = (undefined4)((DAT_14c707940 ^ (ulonglong)auStack_78) >> 0x20);
  local_2c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_48 = FUN_1446ddbd2();
      local_40 = FUN_14067a048;
      local_50 = 0;
      local_58 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_2c);
            goto LAB_143c584b3;
          }
        }
        _Src = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &local_2c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_2c,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&local_2c,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_50 = CONCAT44(local_50._4_4_,(int)plVar4[6]);
        local_58 = local_58 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_2c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_2c,lVar5);
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
      FUN_14002ddda(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_2c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_2c = (int)uVar2;
      uStack_28 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_2c);
    }
  }
LAB_143c584b3:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *(bool *)(param_1 + 0x2d9) = local_2c != 0;
  if ((CONCAT44(uStack_24,uStack_28) ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c585c4 FUN_143c585c4 body=55 status=ok
// SIG undefined FUN_143c585c4(void)

void FUN_143c585c4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb605b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb605b8 = FUN_14171c317(FUN_1464ecaf6,uVar1,L"EGbxMaterialParameterType");
  }
  return;
}



// FUNCTION 143c58608 FUN_143c58608 body=3814 status=ok
// SIG undefined FUN_143c58608(void)

void FUN_143c58608(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 *puVar6;
  byte *pbVar7;
  longlong *plVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  undefined1 *puVar14;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 *local_c0;
  undefined8 *local_b8;
  undefined8 *local_b0;
  undefined8 *local_a8;
  undefined1 local_99;
  undefined8 uStack_98;
  undefined1 local_8d;
  undefined8 uStack_8c;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  undefined1 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  puVar6 = (undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_78);
            goto LAB_143c587fd;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &local_78) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_78,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&local_78,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&local_78,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_78,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar10;
        puVar10 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar8);
      *puVar6 = puVar12[1];
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_78);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_78);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      local_78 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_78);
    }
  }
LAB_143c587fd:
  local_a8 = *(undefined8 **)(param_2 + 0x38);
  local_b0 = local_a8;
  if (local_a8 == (undefined8 *)0x0) {
    local_b0 = &local_78;
  }
  uStack_80 = 0;
  uStack_7c = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&uStack_80);
            goto LAB_143c58994;
          }
        }
        puVar9 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &uStack_80) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&uStack_80,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&uStack_80,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&uStack_80,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&uStack_80,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar10;
        puVar10 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar8);
      *puVar6 = puVar12[1];
    }
LAB_143c58994:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_80);
      goto LAB_143c58994;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_80);
      goto LAB_143c58994;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_80);
      goto LAB_143c58994;
    }
    uVar1 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    uStack_80 = (undefined4)uVar1;
    uStack_7c = (undefined4)((ulonglong)uVar1 >> 0x20);
    puVar10 = (undefined8 *)0x0;
  }
  local_b8 = (undefined8 *)&uStack_80;
  if (puVar10 != (undefined8 *)0x0) {
    local_b8 = puVar10;
  }
  local_84 = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_84);
            goto LAB_143c58b54;
          }
        }
        puVar9 = (undefined4 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar9 != &local_84) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_84,puVar9,(int)plVar8[6]);
          }
          else {
            memcpy(&local_84,puVar9,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&local_84,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_84,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar10;
        puVar10 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar8);
      *puVar6 = puVar12[1];
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_84);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_84);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      local_84 = (undefined4)uVar1;
      uStack_80 = (undefined4)((ulonglong)uVar1 >> 0x20);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_84);
    }
  }
LAB_143c58b54:
  local_c0 = &local_84;
  if (*(undefined4 **)(param_2 + 0x38) != (undefined4 *)0x0) {
    local_c0 = *(undefined4 **)(param_2 + 0x38);
  }
  uStack_8c._0_7_ = 0;
  uStack_8c._7_1_ = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  pbVar7 = *(byte **)(param_2 + 0x20);
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&uStack_8c);
            goto LAB_143c58ce0;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &uStack_8c) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&uStack_8c,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&uStack_8c,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&uStack_8c,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&uStack_8c,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar12 = (undefined8 *)*puVar10;
        puVar10 = puVar12 + 2;
      } while ((longlong *)*puVar12 != plVar8);
      *puVar6 = puVar12[1];
    }
LAB_143c58ce0:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar10 = *(undefined8 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_8c);
      goto LAB_143c58ce0;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_8c);
      goto LAB_143c58ce0;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_8c);
      goto LAB_143c58ce0;
    }
    uVar1 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    uStack_8c._0_7_ = (undefined7)uVar1;
    uStack_8c._7_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
    puVar10 = (undefined8 *)0x0;
  }
  puVar12 = &uStack_8c;
  if (puVar10 != (undefined8 *)0x0) {
    puVar12 = puVar10;
  }
  local_8d = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_8d);
            goto LAB_143c58e63;
          }
        }
        puVar11 = (undefined1 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar11 != &local_8d) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_8d,puVar11,(int)plVar8[6]);
          }
          else {
            memcpy(&local_8d,puVar11,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&local_8d,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_8d,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar10;
        puVar10 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar8);
      *puVar6 = puVar3[1];
    }
LAB_143c58e63:
    pbVar7 = *(byte **)(param_2 + 0x20);
    puVar11 = *(undefined1 **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_8d);
      goto LAB_143c58e63;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_8d);
      goto LAB_143c58e63;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&local_8d);
      goto LAB_143c58e63;
    }
    uVar1 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    local_8d = (undefined1)uVar1;
    uStack_8c._0_7_ = (undefined7)((ulonglong)uVar1 >> 8);
    puVar11 = (undefined1 *)0x0;
  }
  puVar14 = &local_8d;
  if (puVar11 != (undefined1 *)0x0) {
    puVar14 = puVar11;
  }
  uStack_98._0_7_ = 0;
  uStack_98._7_1_ = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&uStack_98);
            goto LAB_143c58fea;
          }
        }
        puVar10 = (undefined8 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar10 != &uStack_98) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&uStack_98,puVar10,(int)plVar8[6]);
          }
          else {
            memcpy(&uStack_98,puVar10,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&uStack_98,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&uStack_98,lVar4);
      }
    }
    else {
      puVar10 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar3 = (undefined8 *)*puVar10;
        puVar10 = puVar3 + 2;
      } while ((longlong *)*puVar3 != plVar8);
      *puVar6 = puVar3[1];
    }
LAB_143c58fea:
    pbVar7 = *(byte **)(param_2 + 0x20);
    plVar8 = *(longlong **)(param_2 + 0x38);
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&uStack_98);
      goto LAB_143c58fea;
    }
    if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&uStack_98);
      goto LAB_143c58fea;
    }
    if (pcVar2 != (code *)&LAB_1428293cc) {
      (*pcVar2)(uVar1,param_2,&uStack_98);
      goto LAB_143c58fea;
    }
    uVar1 = *(undefined8 *)(pbVar7 + 1);
    pbVar7 = pbVar7 + 9;
    *(byte **)(param_2 + 0x20) = pbVar7;
    uStack_98._0_7_ = (undefined7)uVar1;
    uStack_98._7_1_ = (undefined1)((ulonglong)uVar1 >> 0x38);
    plVar8 = (longlong *)0x0;
  }
  plVar13 = &uStack_98;
  if (plVar8 != (longlong *)0x0) {
    plVar13 = plVar8;
  }
  local_99 = 0;
  *puVar6 = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (pbVar7 == (byte *)0x0) {
    plVar8 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar8[3];
    if ((*(byte *)((longlong)plVar8 + 0x39) & 1) == 0) {
      lVar4 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar8 + 0x44) + lVar4;
      *(longlong *)(param_2 + 0x40) = lVar4;
      pcVar2 = *(code **)(*plVar8 + 0x120);
      if (pcVar2 == FUN_144afffdc) {
        pcVar2 = *(code **)(*plVar8 + 0x88);
        if (pcVar2 != (code *)&LAB_1447713a0) {
          cVar5 = (*pcVar2)(plVar8);
          if (cVar5 != '\0') {
            (**(code **)(*plVar8 + 0xa0))(plVar8,lVar4,&local_99);
            goto LAB_143c591e4;
          }
        }
        puVar11 = (undefined1 *)(lVar4 + *(int *)((longlong)plVar8 + 0x44));
        if (puVar11 != &local_99) {
          if ((*(byte *)((longlong)plVar8 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar8 + 0x100))(plVar8,&local_99,puVar11,(int)plVar8[6]);
          }
          else {
            memcpy(&local_99,puVar11,
                   (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
          }
        }
      }
      else if (pcVar2 == FUN_14007468e) {
        local_d0 = (undefined4)plVar8[6];
        local_d8 = 0;
        FUN_1400746b0(plVar8,&local_99,lVar4,1);
      }
      else {
        (*pcVar2)(plVar8,&local_99,lVar4);
      }
    }
    else {
      puVar6 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar10 = (undefined8 *)*puVar6;
        puVar6 = puVar10 + 2;
      } while ((longlong *)*puVar10 != plVar8);
      *(undefined8 *)(param_2 + 0x38) = puVar10[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar7 + 1;
    pcVar2 = (code *)(&DAT_14c962c70)[*pbVar7];
    if (pcVar2 == FUN_14002ddda) {
      FUN_14002ddda(uVar1,param_2,&local_99);
    }
    else if (pcVar2 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar1,param_2,&local_99);
    }
    else if (pcVar2 == (code *)&LAB_1428293cc) {
      uVar1 = *(undefined8 *)(pbVar7 + 1);
      *(byte **)(param_2 + 0x20) = pbVar7 + 9;
      local_99 = (undefined1)uVar1;
      uStack_98._0_7_ = (undefined7)((ulonglong)uVar1 >> 8);
    }
    else {
      (*pcVar2)(uVar1,param_2,&local_99);
    }
  }
LAB_143c591e4:
  puVar11 = &local_99;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    puVar11 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  *local_b8 = *local_b0;
  puVar6 = &local_78;
  if (local_a8 != (undefined8 *)0x0) {
    puVar6 = local_a8;
  }
  *local_c0 = *(undefined4 *)(puVar6 + 2);
  *puVar14 = *(undefined1 *)((longlong)puVar6 + 0x14);
  *plVar13 = puVar6[3];
  *puVar12 = puVar6[1];
  *puVar11 = *(undefined1 *)(puVar6 + 4);
  if ((DAT_14c950c29 == '\x01') && (*plVar13 != 0)) {
    FUN_1456cec3c();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c594f6 FUN_143c594f6 body=4084 status=ok
// SIG undefined FUN_143c594f6(void)

void FUN_143c594f6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  char cVar12;
  undefined8 *puVar13;
  undefined7 *_Src;
  undefined1 *_Src_00;
  undefined4 *puVar14;
  int *_Src_01;
  undefined1 auStack_c8 [32];
  ulonglong local_a8;
  undefined8 local_a0;
  undefined *local_98;
  code *local_90;
  int local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 local_69;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  uStack_58 = 0;
  uStack_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1409e12a0;
      local_a0 = 0;
      local_a8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
          cVar12 = (*pcVar3)(plVar4);
          if (cVar12 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_58);
            goto LAB_143c596d6;
          }
        }
        puVar14 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar14 != &uStack_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_58,puVar14,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_58,puVar14,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_58,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_58,lVar5);
      }
    }
    else {
      puVar13 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar13;
        puVar13 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_58 = (undefined4)uVar2;
      uStack_54 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_58);
    }
  }
LAB_143c596d6:
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_90 = FUN_1408a629c;
      local_98 = &DAT_14c9520b8;
      local_a0 = 0;
      local_a8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
          cVar12 = (*pcVar3)(plVar4);
          if (cVar12 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_5c);
            goto LAB_143c59889;
          }
        }
        puVar14 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar14 != &local_5c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_5c,puVar14,(int)plVar4[6]);
          }
          else {
            memcpy(&local_5c,puVar14,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_5c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_5c,lVar5);
      }
    }
    else {
      puVar13 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar13;
        puVar13 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_5c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_5c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_5c = (undefined4)uVar2;
      uStack_58 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_5c);
    }
  }
LAB_143c59889:
  uStack_68 = 0;
  uStack_61 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1409e12a0;
      local_a0 = 0;
      local_a8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
          cVar12 = (*pcVar3)(plVar4);
          if (cVar12 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_68);
            goto LAB_143c59a3d;
          }
        }
        _Src = (undefined7 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src != &uStack_68) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_68,_Src,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_68,_Src,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_68,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_68,lVar5);
      }
    }
    else {
      puVar13 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar13;
        puVar13 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_68);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_68);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_68 = (undefined7)uVar2;
      uStack_61 = (undefined1)((ulonglong)uVar2 >> 0x38);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_68);
    }
  }
LAB_143c59a3d:
  local_69 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_140a4831c;
      local_a8 = 0x1000000008001;
      local_a0 = 0;
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
          cVar12 = (*pcVar3)(plVar4);
          if (cVar12 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_69);
            goto LAB_143c59bed;
          }
        }
        _Src_00 = (undefined1 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_00 != &local_69) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_69,_Src_00,(int)plVar4[6]);
          }
          else {
            memcpy(&local_69,_Src_00,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_69,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_69,lVar5);
      }
    }
    else {
      puVar13 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar13;
        puVar13 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_69);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_69);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_69 = (undefined1)uVar2;
      uStack_68 = (undefined7)((ulonglong)uVar2 >> 8);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_69);
    }
  }
LAB_143c59bed:
  uStack_78 = 0;
  uStack_74 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_1468d96f0;
      local_a0 = 0;
      local_a8 = 0x4008001;
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
          cVar12 = (*pcVar3)(plVar4);
          if (cVar12 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&uStack_78);
            goto LAB_143c59da1;
          }
        }
        puVar14 = (undefined4 *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar14 != &uStack_78) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_78,puVar14,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_78,puVar14,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_78,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_78,lVar5);
      }
    }
    else {
      puVar13 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar13;
        puVar13 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&uStack_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_78 = (undefined4)uVar2;
      uStack_74 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_78);
    }
  }
LAB_143c59da1:
  local_7c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_98 = (undefined *)FUN_1446ddbd2();
      local_90 = FUN_14067a048;
      local_a0 = 0;
      local_a8 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar12 = (*pcVar3)(plVar4);
          if (cVar12 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar5,&local_7c);
            goto LAB_143c59f54;
          }
        }
        _Src_01 = (int *)(lVar5 + *(int *)((longlong)plVar4 + 0x44));
        if (_Src_01 != &local_7c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_7c,_Src_01,(int)plVar4[6]);
          }
          else {
            memcpy(&local_7c,_Src_01,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_a0 = CONCAT44(local_a0._4_4_,(int)plVar4[6]);
        local_a8 = local_a8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_7c,lVar5,1);
      }
      else {
        (*pcVar3)(plVar4,&local_7c,lVar5);
      }
    }
    else {
      puVar13 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar6 = (undefined8 *)*puVar13;
        puVar13 = puVar6 + 2;
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
      FUN_14002ddda(uVar2,param_2,&local_7c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_7c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_7c = (int)uVar2;
      uStack_78 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_7c);
    }
  }
LAB_143c59f54:
  uVar11 = local_5c;
  uVar10 = local_69;
  iVar9 = local_7c;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  lVar5 = CONCAT44(uStack_74,uStack_78);
  uVar2 = CONCAT17(uStack_61,uStack_68);
  uVar7 = CONCAT44(uStack_54,uStack_58);
  if (lVar5 != 0 && DAT_14c950c29 == 1) {
    FUN_1456cec3c(lVar5);
  }
  bVar8 = DAT_14c950c29;
  *param_3 = uVar7;
  param_3[1] = uVar2;
  *(undefined4 *)(param_3 + 2) = uVar11;
  *(undefined1 *)((longlong)param_3 + 0x14) = uVar10;
  if ((lVar5 != 0) && ((bVar8 & 1) != 0)) {
    FUN_1456cec3c(lVar5);
  }
  param_3[3] = lVar5;
  *(bool *)(param_3 + 4) = iVar9 != 0;
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c5a4f6 FUN_143c5a4f6 body=48 status=ok
// SIG undefined FUN_143c5a4f6(void)

longlong FUN_143c5a4f6(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_1403c41f2(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5a568 FUN_143c5a568 body=57 status=ok
// SIG undefined FUN_143c5a568(void)

void FUN_143c5a568(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb602d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb602d0 = FUN_140002ddd(FUN_1418545ab,uVar1,L"GbxLevelStationDef");
  }
  return;
}



// FUNCTION 143c5a62e FUN_143c5a62e body=57 status=ok
// SIG undefined FUN_143c5a62e(void)

void FUN_143c5a62e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60348 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60348 = FUN_140002ddd(FUN_1464ebd08,uVar1,L"GbxLevelStationTypeDef");
  }
  return;
}



// FUNCTION 143c5a682 FUN_143c5a682 body=57 status=ok
// SIG undefined FUN_143c5a682(void)

void FUN_143c5a682(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60378 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60378 = FUN_140002ddd(FUN_1464ebfed,uVar1,L"GbxMapAutoSaveData");
  }
  return;
}



// FUNCTION 143c5a70a FUN_143c5a70a body=57 status=ok
// SIG undefined FUN_143c5a70a(void)

void FUN_143c5a70a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb603c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb603c0 = FUN_140002ddd(FUN_1464ebd37,uVar1,L"GbxLevelZoneDef");
  }
  return;
}



// FUNCTION 143c5a758 FUN_143c5a758 body=74 status=ok
// SIG undefined FUN_143c5a758(void)

void FUN_143c5a758(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined1 *)((longlong)param_2 + 0x48) = 1;
  *(undefined1 *)((longlong)param_2 + 0x4f) = 0xff;
  *(undefined2 *)((longlong)param_2 + 0x54) = 0x101;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined1 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 100) = 0;
  *(undefined8 *)((longlong)param_2 + 0x6c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x74) = 0;
  *(undefined8 *)((longlong)param_2 + 0x7c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x84) = 0;
  return;
}



// FUNCTION 143c5a816 FUN_143c5a816 body=57 status=ok
// SIG undefined FUN_143c5a816(void)

void FUN_143c5a816(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60420 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60420 = FUN_140002ddd(FUN_1464ec26e,uVar1,L"GbxLoadingScreenDef");
  }
  return;
}



// FUNCTION 143c5a8de FUN_143c5a8de body=75 status=ok
// SIG undefined FUN_143c5a8de(void)

void FUN_143c5a8de(undefined8 param_1,void *param_2)

{
  memset(param_2,0,0x90);
  *(undefined1 *)((longlong)param_2 + 0x20) = 2;
  *(undefined1 **)((longlong)param_2 + 0x24) = &DAT_3f8000003f800000;
  *(undefined1 **)((longlong)param_2 + 0x2c) = &DAT_3f8000003f800000;
  *(undefined8 *)((longlong)param_2 + 0x40) = 0;
  *(undefined8 *)((longlong)param_2 + 0x48) = 0;
  *(undefined8 *)((longlong)param_2 + 0x50) = 0;
  *(undefined8 *)((longlong)param_2 + 0x58) = 0;
  *(undefined8 *)((longlong)param_2 + 0x60) = 0;
  *(undefined8 *)((longlong)param_2 + 0x68) = 0;
  *(undefined8 *)((longlong)param_2 + 0x70) = 0;
  *(undefined8 *)((longlong)param_2 + 0x78) = 0;
  *(undefined8 *)((longlong)param_2 + 0x80) = 0;
  return;
}



// FUNCTION 143c5a92a FUN_143c5a92a body=62 status=ok
// SIG undefined FUN_143c5a92a(void)

void FUN_143c5a92a(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x68) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c5a968 FUN_143c5a968 body=72 status=ok
// SIG undefined FUN_143c5a968(void)

void FUN_143c5a968(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x90) == '\x01') {
    if (*(longlong *)(param_2 + 0x78) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x68) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_2 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x90) = 0;
  }
  return;
}



// FUNCTION 143c5a9e4 FUN_143c5a9e4 body=128 status=ok
// SIG undefined FUN_143c5a9e4(void)

undefined1 FUN_143c5a9e4(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  byte bVar6;
  longlong lVar7;
  longlong lVar8;
  
  if (param_4 != 0) {
    lVar8 = 0;
    bVar6 = DAT_14c950c29;
    do {
      *(undefined8 *)(param_2 + 0xd + lVar8) = *(undefined8 *)(param_3 + 0xd + lVar8);
      puVar2 = (undefined4 *)(param_3 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      puVar1 = (undefined4 *)(param_2 + lVar8);
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
      lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + 0x18 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + lVar8 + 0x18) = lVar7;
      *(undefined1 *)(param_2 + lVar8 + 0x20) = *(undefined1 *)(param_3 + 0x20 + lVar8);
      lVar8 = lVar8 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c5aa64 FUN_143c5aa64 body=910 status=ok
// SIG undefined FUN_143c5aa64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c5aa64(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b19cfc0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b19d3c0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b19dad0,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar2 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb602a8 = (ulonglong)uVar2;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b19e250);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b19e3a0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b19ecd0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b19ed40,1,&PTR_FUN_14b19ecf0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b19f370);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b19f780,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b19f8f0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1a0250;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a0270);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a0940,1,&PTR_FUN_14b1a0910);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a1cd0,1,0);
  FUN_1400b22c2(&local_50,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_50,&DAT_14cb604d8);
  if (cVar1 == '\0') {
    _DAT_14cb604d8 = 0;
    uRam000000014cb604e0 = 0;
  }
  if (local_50 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_50 = "bone";
  local_48 = 4;
  local_44 = 0;
  FUN_14001a6c0(&local_50,1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a1fb0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a2070,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a2190);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a2980);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1a2ea0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a2ec0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a32c0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a4120,1,&PTR_FUN_14b1a40f0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c5adf4 FUN_143c5adf4 body=55 status=ok
// SIG undefined FUN_143c5adf4(void)

void FUN_143c5adf4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60670 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60670 = FUN_14171c317(FUN_1464ed19d,uVar1,L"EGbxMomentExecutionState");
  }
  return;
}



// FUNCTION 143c5ae2b FUN_143c5ae2b body=55 status=ok
// SIG undefined FUN_143c5ae2b(void)

void FUN_143c5ae2b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60688 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60688 = FUN_14171c317(FUN_1464ed1cc,uVar1,L"EGbxMomentNodeExecutionState");
  }
  return;
}



// FUNCTION 143c5ae62 FUN_143c5ae62 body=55 status=ok
// SIG undefined FUN_143c5ae62(void)

void FUN_143c5ae62(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60748 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60748 = FUN_14171c317(FUN_1464ed524,uVar1,L"EGbxMomentCinematicModeAction");
  }
  return;
}



// FUNCTION 143c5ae99 FUN_143c5ae99 body=55 status=ok
// SIG undefined FUN_143c5ae99(void)

void FUN_143c5ae99(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb607c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb607c0 = FUN_14171c317(FUN_1464ed73e,uVar1,L"EGbxMomentDebugPrintVerbosity");
  }
  return;
}



// FUNCTION 143c5aed0 FUN_143c5aed0 body=55 status=ok
// SIG undefined FUN_143c5aed0(void)

void FUN_143c5aed0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60868 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60868 = FUN_14171c317(FUN_1464edabc,uVar1,L"EGbxDirectorNoteColorPreset");
  }
  return;
}



// FUNCTION 143c5af38 FUN_143c5af38 body=114 status=ok
// SIG undefined FUN_143c5af38(void)

void FUN_143c5af38(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5afaa FUN_143c5afaa body=123 status=ok
// SIG undefined FUN_143c5afaa(void)

undefined8 * FUN_143c5afaa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b042 FUN_143c5b042 body=114 status=ok
// SIG undefined FUN_143c5b042(void)

void FUN_143c5b042(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5b0b4 FUN_143c5b0b4 body=123 status=ok
// SIG undefined FUN_143c5b0b4(void)

undefined8 * FUN_143c5b0b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b130 FUN_143c5b130 body=57 status=ok
// SIG undefined FUN_143c5b130(void)

void FUN_143c5b130(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60730 = FUN_140002ddd(FUN_1464ed4c4,uVar1,L"GbxMomentNodeState_And");
  }
  return;
}



// FUNCTION 143c5b186 FUN_143c5b186 body=114 status=ok
// SIG undefined FUN_143c5b186(void)

void FUN_143c5b186(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5b1f8 FUN_143c5b1f8 body=123 status=ok
// SIG undefined FUN_143c5b1f8(void)

undefined8 * FUN_143c5b1f8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b290 FUN_143c5b290 body=114 status=ok
// SIG undefined FUN_143c5b290(void)

void FUN_143c5b290(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5b302 FUN_143c5b302 body=123 status=ok
// SIG undefined FUN_143c5b302(void)

undefined8 * FUN_143c5b302(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b39a FUN_143c5b39a body=114 status=ok
// SIG undefined FUN_143c5b39a(void)

void FUN_143c5b39a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5b40c FUN_143c5b40c body=123 status=ok
// SIG undefined FUN_143c5b40c(void)

undefined8 * FUN_143c5b40c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b4a4 FUN_143c5b4a4 body=114 status=ok
// SIG undefined FUN_143c5b4a4(void)

void FUN_143c5b4a4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5b516 FUN_143c5b516 body=123 status=ok
// SIG undefined FUN_143c5b516(void)

undefined8 * FUN_143c5b516(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b592 FUN_143c5b592 body=57 status=ok
// SIG undefined FUN_143c5b592(void)

void FUN_143c5b592(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60820 = FUN_140002ddd(FUN_1464ed930,uVar1,L"GbxMomentNodeState_Delay");
  }
  return;
}



// FUNCTION 143c5b5e8 FUN_143c5b5e8 body=114 status=ok
// SIG undefined FUN_143c5b5e8(void)

void FUN_143c5b5e8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5b65a FUN_143c5b65a body=123 status=ok
// SIG undefined FUN_143c5b65a(void)

undefined8 * FUN_143c5b65a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b6f2 FUN_143c5b6f2 body=114 status=ok
// SIG undefined FUN_143c5b6f2(void)

void FUN_143c5b6f2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5b764 FUN_143c5b764 body=123 status=ok
// SIG undefined FUN_143c5b764(void)

undefined8 * FUN_143c5b764(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b868 FUN_143c5b868 body=57 status=ok
// SIG undefined FUN_143c5b868(void)

void FUN_143c5b868(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb608b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb608b0 = FUN_140002ddd(FUN_1464edc19,uVar1,L"GbxMomentNodeSettings_End");
  }
  return;
}



// FUNCTION 143c5b8b0 FUN_143c5b8b0 body=114 status=ok
// SIG undefined FUN_143c5b8b0(void)

void FUN_143c5b8b0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5b922 FUN_143c5b922 body=123 status=ok
// SIG undefined FUN_143c5b922(void)

undefined8 * FUN_143c5b922(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5b99e FUN_143c5b99e body=57 status=ok
// SIG undefined FUN_143c5b99e(void)

void FUN_143c5b99e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb608c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb608c8 = FUN_140002ddd(FUN_1464edc78,uVar1,L"GbxMomentNodeState_End");
  }
  return;
}



// FUNCTION 143c5b9f4 FUN_143c5b9f4 body=114 status=ok
// SIG undefined FUN_143c5b9f4(void)

void FUN_143c5b9f4(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5ba66 FUN_143c5ba66 body=123 status=ok
// SIG undefined FUN_143c5ba66(void)

undefined8 * FUN_143c5ba66(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5bafe FUN_143c5bafe body=114 status=ok
// SIG undefined FUN_143c5bafe(void)

void FUN_143c5bafe(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5bb70 FUN_143c5bb70 body=123 status=ok
// SIG undefined FUN_143c5bb70(void)

undefined8 * FUN_143c5bb70(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5bc08 FUN_143c5bc08 body=120 status=ok
// SIG undefined FUN_143c5bc08(void)

void FUN_143c5bc08(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c5bc80 FUN_143c5bc80 body=123 status=ok
// SIG undefined FUN_143c5bc80(void)

undefined8 * FUN_143c5bc80(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5bd18 FUN_143c5bd18 body=114 status=ok
// SIG undefined FUN_143c5bd18(void)

void FUN_143c5bd18(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5bd8a FUN_143c5bd8a body=123 status=ok
// SIG undefined FUN_143c5bd8a(void)

undefined8 * FUN_143c5bd8a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5be22 FUN_143c5be22 body=114 status=ok
// SIG undefined FUN_143c5be22(void)

void FUN_143c5be22(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5be94 FUN_143c5be94 body=123 status=ok
// SIG undefined FUN_143c5be94(void)

undefined8 * FUN_143c5be94(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5bf2c FUN_143c5bf2c body=114 status=ok
// SIG undefined FUN_143c5bf2c(void)

void FUN_143c5bf2c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5bf9e FUN_143c5bf9e body=123 status=ok
// SIG undefined FUN_143c5bf9e(void)

undefined8 * FUN_143c5bf9e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c036 FUN_143c5c036 body=57 status=ok
// SIG undefined FUN_143c5c036(void)

void FUN_143c5c036(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60a20 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60a20 = FUN_140002ddd(FUN_1464ee4a8,uVar1,L"GbxMomentNodeState_LookAt");
  }
  return;
}



// FUNCTION 143c5c0e0 FUN_143c5c0e0 body=120 status=ok
// SIG undefined FUN_143c5c0e0(void)

void FUN_143c5c0e0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 143c5c158 FUN_143c5c158 body=123 status=ok
// SIG undefined FUN_143c5c158(void)

undefined8 * FUN_143c5c158(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c1f0 FUN_143c5c1f0 body=151 status=ok
// SIG undefined FUN_143c5c1f0(void)

void FUN_143c5c1f0(undefined8 param_1,undefined8 *param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b3130;
    plVar2 = (longlong *)param_2[0xf];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c5c288 FUN_143c5c288 body=154 status=ok
// SIG undefined FUN_143c5c288(void)

undefined8 * FUN_143c5c288(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  *param_1 = &PTR_FUN_14b1b3130;
  plVar2 = (longlong *)param_1[0xf];
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c33e FUN_143c5c33e body=194 status=ok
// SIG undefined FUN_143c5c33e(void)

void FUN_143c5c33e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1b35a0;
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c5c41c FUN_143c5c41c body=114 status=ok
// SIG undefined FUN_143c5c41c(void)

void FUN_143c5c41c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5c48e FUN_143c5c48e body=123 status=ok
// SIG undefined FUN_143c5c48e(void)

undefined8 * FUN_143c5c48e(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c526 FUN_143c5c526 body=114 status=ok
// SIG undefined FUN_143c5c526(void)

void FUN_143c5c526(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5c598 FUN_143c5c598 body=123 status=ok
// SIG undefined FUN_143c5c598(void)

undefined8 * FUN_143c5c598(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c642 FUN_143c5c642 body=57 status=ok
// SIG undefined FUN_143c5c642(void)

void FUN_143c5c642(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60be8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60be8 = FUN_140002ddd(FUN_1464eef33,uVar1,L"GbxMomentNodeSettings_PlayDialog");
  }
  return;
}



// FUNCTION 143c5c68e FUN_143c5c68e body=114 status=ok
// SIG undefined FUN_143c5c68e(void)

void FUN_143c5c68e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5c700 FUN_143c5c700 body=123 status=ok
// SIG undefined FUN_143c5c700(void)

undefined8 * FUN_143c5c700(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c78a FUN_143c5c78a body=114 status=ok
// SIG undefined FUN_143c5c78a(void)

void FUN_143c5c78a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5c7fc FUN_143c5c7fc body=123 status=ok
// SIG undefined FUN_143c5c7fc(void)

undefined8 * FUN_143c5c7fc(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5c878 FUN_143c5c878 body=57 status=ok
// SIG undefined FUN_143c5c878(void)

void FUN_143c5c878(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c18 = FUN_140002ddd(FUN_1464ef028,uVar1,L"GbxMomentNodeState_PlayDialog");
  }
  return;
}



// FUNCTION 143c5c8dc FUN_143c5c8dc body=57 status=ok
// SIG undefined FUN_143c5c8dc(void)

void FUN_143c5c8dc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60c60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60c60 = FUN_140002ddd(FUN_1464ef1eb,uVar1,L"GbxMomentNodeSettings_PlayDialogLines");
  }
  return;
}



// FUNCTION 143c5c924 FUN_143c5c924 body=144 status=ok
// SIG undefined FUN_143c5c924(void)

void FUN_143c5c924(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5020;
    if (param_2[0xf] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 143c5c9b4 FUN_143c5c9b4 body=147 status=ok
// SIG undefined FUN_143c5c9b4(void)

undefined8 * FUN_143c5c9b4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5020;
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5ca47 FUN_143c5ca47 body=1104 status=ok
// SIG undefined FUN_143c5ca47(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c5ca47(void)

{
  uint uVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  lVar2 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a80b0,1,0);
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_FUN_14b1a81f0 + lVar2),L"/Script/GbxGame",
                  *(undefined8 *)((longlong)&PTR_u_EGbxMomentExecutionState_14b1a81f8 + lVar2),
                  *(undefined8 *)((longlong)&PTR_DAT_14b1a8200 + lVar2));
    lVar2 = lVar2 + 0x20;
  } while (lVar2 != 0x40);
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1a8950,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a8a40);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a8c30);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a8d90);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1a9190;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a91b0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a9390);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1a9670;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a9690);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a9840);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a9a60);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1a9e60;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a9e80);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1a9fe0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aa1a0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aa310);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aa570);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb60968 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aa7e0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aa990);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aabe0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aada0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aaf30);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ab0d0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ab450);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ab680);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ab860);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1aba60);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1abc40);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1abe50);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ac520);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 7;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ad1b0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c5ce98 FUN_143c5ce98 body=55 status=ok
// SIG undefined FUN_143c5ce98(void)

void FUN_143c5ce98(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60cc0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60cc0 = FUN_14171c317(FUN_1464efdf2,uVar1,L"EMomentPlaySequenceMode");
  }
  return;
}



// FUNCTION 143c5ced8 FUN_143c5ced8 body=55 status=ok
// SIG undefined FUN_143c5ced8(void)

void FUN_143c5ced8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d10 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d10 = FUN_14171c317(FUN_1464efee0,uVar1,L"EMomentNodePlaySoundType");
  }
  return;
}



// FUNCTION 143c5cf10 FUN_143c5cf10 body=55 status=ok
// SIG undefined FUN_143c5cf10(void)

void FUN_143c5cf10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60db8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60db8 = FUN_140002ddd(FUN_143c5cf47,uVar1,L"GbxMomentNodeSettings_ResetSequence");
  }
  return;
}



// FUNCTION 143c5cf47 FUN_143c5cf47 body=47 status=ok
// SIG undefined FUN_143c5cf47(void)

longlong FUN_143c5cf47(void)

{
  if (DAT_14cb60db0 == 0) {
    FUN_14086a14e(&DAT_14cb60db0,&PTR_FUN_14b1b6b68);
  }
  return DAT_14cb60db0;
}



// FUNCTION 143c5cf76 FUN_143c5cf76 body=48 status=ok
// SIG undefined FUN_143c5cf76(void)

void FUN_143c5cf76(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x8000000b8;
  *puVar1 = &PTR_FUN_14b1bb950;
  return;
}



// FUNCTION 143c5cfa6 FUN_143c5cfa6 body=55 status=ok
// SIG undefined FUN_143c5cfa6(void)

void FUN_143c5cfa6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60dd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60dd0 = FUN_140002ddd(FUN_143c5cfdd,uVar1,L"GbxMomentNodeState_ResetSequence");
  }
  return;
}



// FUNCTION 143c5cfdd FUN_143c5cfdd body=47 status=ok
// SIG undefined FUN_143c5cfdd(void)

longlong FUN_143c5cfdd(void)

{
  if (DAT_14cb60dc8 == 0) {
    FUN_14086a14e(&DAT_14cb60dc8,&PTR_FUN_14b1b6c08);
  }
  return DAT_14cb60dc8;
}



// FUNCTION 143c5d00c FUN_143c5d00c body=48 status=ok
// SIG undefined FUN_143c5d00c(void)

void FUN_143c5d00c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  puVar1[1] = 0x800000070;
  *puVar1 = &PTR_FUN_14b1bbab0;
  return;
}



// FUNCTION 143c5d03c FUN_143c5d03c body=55 status=ok
// SIG undefined FUN_143c5d03c(void)

void FUN_143c5d03c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e18 = FUN_14171c317(FUN_1464f0354,uVar1,L"EGbxMomentScreenFadeDirection");
  }
  return;
}



// FUNCTION 143c5d073 FUN_143c5d073 body=55 status=ok
// SIG undefined FUN_143c5d073(void)

void FUN_143c5d073(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb611d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb611d0 = FUN_14171c317(FUN_1464f17c4,uVar1,L"EGbxMomentParamWaitType");
  }
  return;
}



// FUNCTION 143c5d0c6 FUN_143c5d0c6 body=126 status=ok
// SIG undefined FUN_143c5d0c6(void)

void FUN_143c5d0c6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1ba740;
  FUN_14574e722(param_1 + 0xe);
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c5d16e FUN_143c5d16e body=234 status=ok
// SIG undefined FUN_143c5d16e(void)

void FUN_143c5d16e(undefined8 param_1,undefined8 *param_2)

{
  memset(param_2 + 1,0,0x198);
  *(undefined4 *)(param_2 + 3) = 2;
  *(undefined8 *)((longlong)param_2 + 0x1c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x24) = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0x200000000;
  *(undefined8 *)((longlong)param_2 + 0x54) = 0;
  *(undefined8 *)((longlong)param_2 + 0x5c) = 0;
  *(undefined8 *)((longlong)param_2 + 0x61) = 0;
  *param_2 = &PTR_FUN_14b1b5400;
  *(undefined2 *)(param_2 + 0xe) = 0xffff;
  *(undefined4 *)((longlong)param_2 + 0x72) = 0;
  *(undefined4 *)(param_2 + 0x12) = 0;
  param_2[0x13] = 0;
  param_2[0x14] = 0;
  *(undefined4 *)(param_2 + 0x15) = 0;
  *(undefined1 *)(param_2 + 0x1f) = 0;
  *(undefined4 *)(param_2 + 0x25) = 0;
  *(undefined8 *)((longlong)param_2 + 0xc4) = 0;
  *(undefined8 *)((longlong)param_2 + 0xcc) = 0;
  param_2[0x20] = 0;
  param_2[0x21] = 0;
  *(undefined2 *)(param_2 + 0x11) = 0;
  param_2[0x10] = 0;
  param_2[0x16] = 0;
  param_2[0x17] = 0;
  *(undefined1 *)(param_2 + 0x18) = 0;
  *(undefined8 *)((longlong)param_2 + 300) = 0xffffffff00000080;
  param_2[0x28] = 0;
  *(undefined4 *)((longlong)param_2 + 0x164) = 0;
  *(undefined4 *)(param_2 + 0x30) = 0;
  param_2[0x2e] = 0;
  param_2[0x2f] = 0;
  *(undefined2 *)(param_2 + 0x2c) = 0;
  param_2[0x2a] = 0;
  param_2[0x2b] = 0;
  *(undefined4 *)(param_2 + 0x33) = 0;
  param_2[0x31] = 0;
  param_2[0x32] = 0;
  return;
}



// FUNCTION 143c5d274 FUN_143c5d274 body=194 status=ok
// SIG undefined FUN_143c5d274(void)

void FUN_143c5d274(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1bafb0;
  plVar1 = param_1 + 0xf;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x13) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x12)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x12)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c5d352 FUN_143c5d352 body=144 status=ok
// SIG undefined FUN_143c5d352(void)

void FUN_143c5d352(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1bb420;
    if (param_2[0xe] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c5d3e2 FUN_143c5d3e2 body=147 status=ok
// SIG undefined FUN_143c5d3e2(void)

undefined8 * FUN_143c5d3e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1bb420;
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5d476 FUN_143c5d476 body=57 status=ok
// SIG undefined FUN_143c5d476(void)

void FUN_143c5d476(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d70 = FUN_140002ddd(FUN_1464f00d2,uVar1,L"GbxMomentNodeState_PlayTrick");
  }
  return;
}



// FUNCTION 143c5d4be FUN_143c5d4be body=57 status=ok
// SIG undefined FUN_143c5d4be(void)

void FUN_143c5d4be(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60d88 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60d88 = FUN_140002ddd(FUN_1464f0169,uVar1,L"GbxMomentNodeSettings_Random");
  }
  return;
}



// FUNCTION 143c5d506 FUN_143c5d506 body=114 status=ok
// SIG undefined FUN_143c5d506(void)

void FUN_143c5d506(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5d578 FUN_143c5d578 body=123 status=ok
// SIG undefined FUN_143c5d578(void)

undefined8 * FUN_143c5d578(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5d5f4 FUN_143c5d5f4 body=57 status=ok
// SIG undefined FUN_143c5d5f4(void)

void FUN_143c5d5f4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60da0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60da0 = FUN_140002ddd(FUN_1464f01c8,uVar1,L"GbxMomentNodeState_Random");
  }
  return;
}



// FUNCTION 143c5d62e FUN_143c5d62e body=29 status=ok
// SIG undefined FUN_143c5d62e(void)

undefined8 FUN_143c5d62e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5d6ae FUN_143c5d6ae body=181 status=ok
// SIG undefined FUN_143c5d6ae(void)

undefined8 FUN_143c5d6ae(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

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
  longlong lVar10;
  
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      lVar1 = param_3 + lVar10;
      uVar3 = *(undefined4 *)(lVar1 + 8);
      uVar4 = *(undefined4 *)(lVar1 + 0xc);
      uVar5 = *(undefined4 *)(lVar1 + 0x10);
      uVar6 = *(undefined4 *)(lVar1 + 0x14);
      uVar7 = *(undefined4 *)(lVar1 + 0x1c);
      uVar8 = *(undefined4 *)(lVar1 + 0x20);
      uVar9 = *(undefined4 *)(lVar1 + 0x24);
      lVar2 = param_2 + 0x28 + lVar10;
      *(undefined4 *)(lVar2 + -0x10) = *(undefined4 *)(lVar1 + 0x18);
      *(undefined4 *)(lVar2 + -0xc) = uVar7;
      *(undefined4 *)(lVar2 + -8) = uVar8;
      *(undefined4 *)(lVar2 + -4) = uVar9;
      *(undefined4 *)(lVar2 + -0x20) = uVar3;
      *(undefined4 *)(lVar2 + -0x1c) = uVar4;
      *(undefined4 *)(lVar2 + -0x18) = uVar5;
      *(undefined4 *)(lVar2 + -0x14) = uVar6;
      FUN_1470d00c2(lVar2,lVar1 + 0x28);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(lVar1 + 0x38);
      *(undefined4 *)(lVar2 + 0x18) = *(undefined4 *)(lVar1 + 0x40);
      FUN_144983130(param_2 + lVar10 + 0x48,param_3 + lVar10 + 0x48);
      FUN_144983130(param_2 + lVar10 + 0x80,param_3 + lVar10 + 0x80);
      lVar10 = lVar10 + 0xb8;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 143c5d78c FUN_143c5d78c body=59 status=ok
// SIG undefined FUN_143c5d78c(void)

undefined8 FUN_143c5d78c(longlong *param_1)

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



// FUNCTION 143c5d7d8 FUN_143c5d7d8 body=209 status=ok
// SIG undefined FUN_143c5d7d8(void)

void FUN_143c5d7d8(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b1c13c0;
    plVar1 = param_2 + 0x11;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_2 + 0x15) * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar3 = plVar1;
      if (0x18 < *(ushort *)(param_2 + 0x14)) {
        plVar3 = (longlong *)*plVar1;
      }
      (*pcVar2)(plVar3);
    }
    if (0x18 < *(ushort *)(param_2 + 0x14)) {
      FUN_1400020a8(*plVar1);
    }
    *param_2 = &PTR_FUN_14b1b5150;
    plVar1 = param_2 + 10;
    pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                       (ulonglong)((uint)*(byte *)(param_2 + 0xe) * 0x120));
    if (pcVar2 != (code *)0x0) {
      plVar3 = plVar1;
      if (0x18 < *(ushort *)(param_2 + 0xd)) {
        plVar3 = (longlong *)*plVar1;
      }
      (*pcVar2)(plVar3);
    }
    if (0x18 < *(ushort *)(param_2 + 0xd)) {
      FUN_1400020a8(*plVar1);
    }
    FUN_1403ecb9e(param_2);
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 143c5d8fa FUN_143c5d8fa body=210 status=ok
// SIG undefined FUN_143c5d8fa(void)

undefined8 * FUN_143c5d8fa(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1c13c0;
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
  *param_1 = &PTR_FUN_14b1b5150;
  plVar1 = param_1 + 10;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)*(byte *)(param_1 + 0xe) * 0x120)
                     );
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0xd)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0xd)) {
    FUN_1400020a8(*plVar1);
  }
  FUN_1403ecb9e(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5d9cc FUN_143c5d9cc body=55 status=ok
// SIG undefined FUN_143c5d9cc(void)

void FUN_143c5d9cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60db8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60db8 = FUN_140002ddd(FUN_143c5cf47,uVar1,L"GbxMomentNodeSettings_ResetSequence");
  }
  return;
}



// FUNCTION 143c5da04 FUN_143c5da04 body=29 status=ok
// SIG undefined FUN_143c5da04(void)

undefined8 FUN_143c5da04(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5dad6 FUN_143c5dad6 body=54 status=ok
// SIG undefined FUN_143c5dad6(void)

undefined1 FUN_143c5dad6(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1486c86fa(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 143c5db34 FUN_143c5db34 body=59 status=ok
// SIG undefined FUN_143c5db34(void)

undefined8 FUN_143c5db34(longlong *param_1)

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



// FUNCTION 143c5db7a FUN_143c5db7a body=114 status=ok
// SIG undefined FUN_143c5db7a(void)

void FUN_143c5db7a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5dc3a FUN_143c5dc3a body=123 status=ok
// SIG undefined FUN_143c5dc3a(void)

undefined8 * FUN_143c5dc3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5dcb6 FUN_143c5dcb6 body=55 status=ok
// SIG undefined FUN_143c5dcb6(void)

void FUN_143c5dcb6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60dd0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60dd0 = FUN_140002ddd(FUN_143c5cfdd,uVar1,L"GbxMomentNodeState_ResetSequence");
  }
  return;
}



// FUNCTION 143c5dd0a FUN_143c5dd0a body=114 status=ok
// SIG undefined FUN_143c5dd0a(void)

void FUN_143c5dd0a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5dd7c FUN_143c5dd7c body=123 status=ok
// SIG undefined FUN_143c5dd7c(void)

undefined8 * FUN_143c5dd7c(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5de14 FUN_143c5de14 body=114 status=ok
// SIG undefined FUN_143c5de14(void)

void FUN_143c5de14(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5de86 FUN_143c5de86 body=123 status=ok
// SIG undefined FUN_143c5de86(void)

undefined8 * FUN_143c5de86(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5df02 FUN_143c5df02 body=57 status=ok
// SIG undefined FUN_143c5df02(void)

void FUN_143c5df02(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e48 = FUN_140002ddd(FUN_1464f041a,uVar1,L"GbxMomentNodeState_ScreenFade");
  }
  return;
}



// FUNCTION 143c5df4a FUN_143c5df4a body=57 status=ok
// SIG undefined FUN_143c5df4a(void)

void FUN_143c5df4a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60e60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60e60 = FUN_140002ddd(FUN_1464f04b1,uVar1,L"GbxMomentNodeSettings_SetActorFactValue");
  }
  return;
}



// FUNCTION 143c5df92 FUN_143c5df92 body=114 status=ok
// SIG undefined FUN_143c5df92(void)

void FUN_143c5df92(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5e004 FUN_143c5e004 body=123 status=ok
// SIG undefined FUN_143c5e004(void)

undefined8 * FUN_143c5e004(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e0b8 FUN_143c5e0b8 body=126 status=ok
// SIG undefined FUN_143c5e0b8(void)

void FUN_143c5e0b8(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b1bcd90;
  FUN_1486d389c(param_1 + 0xf);
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c5e152 FUN_143c5e152 body=114 status=ok
// SIG undefined FUN_143c5e152(void)

void FUN_143c5e152(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5e1c4 FUN_143c5e1c4 body=123 status=ok
// SIG undefined FUN_143c5e1c4(void)

undefined8 * FUN_143c5e1c4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e25c FUN_143c5e25c body=120 status=ok
// SIG undefined FUN_143c5e25c(void)

void FUN_143c5e25c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x10) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x10) = 0;
  }
  return;
}



// FUNCTION 143c5e2d4 FUN_143c5e2d4 body=123 status=ok
// SIG undefined FUN_143c5e2d4(void)

undefined8 * FUN_143c5e2d4(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e36c FUN_143c5e36c body=114 status=ok
// SIG undefined FUN_143c5e36c(void)

void FUN_143c5e36c(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5e3de FUN_143c5e3de body=123 status=ok
// SIG undefined FUN_143c5e3de(void)

undefined8 * FUN_143c5e3de(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e476 FUN_143c5e476 body=120 status=ok
// SIG undefined FUN_143c5e476(void)

void FUN_143c5e476(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x11) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x11) = 0;
  }
  return;
}



// FUNCTION 143c5e4ee FUN_143c5e4ee body=123 status=ok
// SIG undefined FUN_143c5e4ee(void)

undefined8 * FUN_143c5e4ee(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e5f2 FUN_143c5e5f2 body=57 status=ok
// SIG undefined FUN_143c5e5f2(void)

void FUN_143c5e5f2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60fb0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60fb0 = FUN_140002ddd(FUN_1464f0c79,uVar1,L"GbxMomentNodeSettings_Start");
  }
  return;
}



// FUNCTION 143c5e63a FUN_143c5e63a body=114 status=ok
// SIG undefined FUN_143c5e63a(void)

void FUN_143c5e63a(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5e6ac FUN_143c5e6ac body=123 status=ok
// SIG undefined FUN_143c5e6ac(void)

undefined8 * FUN_143c5e6ac(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e728 FUN_143c5e728 body=57 status=ok
// SIG undefined FUN_143c5e728(void)

void FUN_143c5e728(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb60fc8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb60fc8 = FUN_140002ddd(FUN_1464f0cd8,uVar1,L"GbxMomentNodeState_Start");
  }
  return;
}



// FUNCTION 143c5e77e FUN_143c5e77e body=114 status=ok
// SIG undefined FUN_143c5e77e(void)

void FUN_143c5e77e(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5e7f0 FUN_143c5e7f0 body=123 status=ok
// SIG undefined FUN_143c5e7f0(void)

undefined8 * FUN_143c5e7f0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e888 FUN_143c5e888 body=114 status=ok
// SIG undefined FUN_143c5e888(void)

void FUN_143c5e888(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5e8fa FUN_143c5e8fa body=123 status=ok
// SIG undefined FUN_143c5e8fa(void)

undefined8 * FUN_143c5e8fa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5e992 FUN_143c5e992 body=114 status=ok
// SIG undefined FUN_143c5e992(void)

void FUN_143c5e992(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xf) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xf) = 0;
  }
  return;
}



// FUNCTION 143c5ea04 FUN_143c5ea04 body=123 status=ok
// SIG undefined FUN_143c5ea04(void)

undefined8 * FUN_143c5ea04(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5eab8 FUN_143c5eab8 body=114 status=ok
// SIG undefined FUN_143c5eab8(void)

void FUN_143c5eab8(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5eb2a FUN_143c5eb2a body=123 status=ok
// SIG undefined FUN_143c5eb2a(void)

undefined8 * FUN_143c5eb2a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5ebc2 FUN_143c5ebc2 body=120 status=ok
// SIG undefined FUN_143c5ebc2(void)

void FUN_143c5ebc2(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x17) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x17) = 0;
  }
  return;
}



// FUNCTION 143c5ec3a FUN_143c5ec3a body=123 status=ok
// SIG undefined FUN_143c5ec3a(void)

undefined8 * FUN_143c5ec3a(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5ecd2 FUN_143c5ecd2 body=194 status=ok
// SIG undefined FUN_143c5ecd2(void)

void FUN_143c5ecd2(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b1c0740;
  plVar1 = param_1 + 0xe;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x12) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x11)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x11)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14a1b6d20;
  FUN_144760e21(param_1[4],*(undefined4 *)(param_1 + 5));
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 143c5edb0 FUN_143c5edb0 body=114 status=ok
// SIG undefined FUN_143c5edb0(void)

void FUN_143c5edb0(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0xe) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0xe) = 0;
  }
  return;
}



// FUNCTION 143c5ee22 FUN_143c5ee22 body=123 status=ok
// SIG undefined FUN_143c5ee22(void)

undefined8 * FUN_143c5ee22(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5eeba FUN_143c5eeba body=120 status=ok
// SIG undefined FUN_143c5eeba(void)

void FUN_143c5eeba(undefined8 param_1,undefined8 *param_2)

{
  if (*(char *)(param_2 + 0x13) == '\x01') {
    *param_2 = &PTR_FUN_14b1b5240;
    if (param_2[0xb] != 0) {
      FUN_1400020a8();
    }
    *param_2 = &PTR_FUN_14a1b6d20;
    FUN_144760e21(param_2[4],*(undefined4 *)(param_2 + 5));
    if (param_2[4] != 0) {
      FUN_1400020a8();
    }
    FUN_144760e21(param_2[1],*(undefined4 *)(param_2 + 2));
    if (param_2[1] != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x13) = 0;
  }
  return;
}



// FUNCTION 143c5ef32 FUN_143c5ef32 body=123 status=ok
// SIG undefined FUN_143c5ef32(void)

undefined8 * FUN_143c5ef32(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b1b5240;
  if (param_1[0xb] != 0) {
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



// FUNCTION 143c5efbc FUN_143c5efbc body=995 status=ok
// SIG undefined FUN_143c5efbc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c5efbc(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **local_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b5770);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b1b5f50;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b5f70);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb60d00 = (ulonglong)uVar1;
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b1b6490;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b64b0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b6860);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b6a60);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b6c40);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b6e30);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b1b7250;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b7270);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b74b0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b77d0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b79a0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b7b80);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b7e40);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b8090);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b84d0);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b8640);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b8c50);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b8fe0);
  _DAT_14cb61068 = 0x47efffffe0000000;
  _DAT_14cb61070 = 0x47efffffe0000000;
  _DAT_14cb61078 = 0x47efffffe0000000;
  _DAT_14cb61080 = 0x47efffffe0000000;
  _DAT_14cb61088 = 0x47efffffe0000000;
  _DAT_14cb61090 = 0x47efffffe0000000;
  _DAT_14cb61098 = 0x47efffffe0000000;
  _DAT_14cb610a0 = 0x47efffffe0000000;
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b9210);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b9660);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b9920);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b9c20);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1b9e20);
  local_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ba0f0);
  uStack_48 = 1;
  local_50 = &PTR_FUN_14b1ba330;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ba350);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c5f3a0 FUN_143c5f3a0 body=55 status=ok
// SIG undefined FUN_143c5f3a0(void)

void FUN_143c5f3a0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb612f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb612f0 = FUN_14171c317(FUN_1464f24b3,uVar1,L"EGbxMovingPlatformActorStateIsVisible");
  }
  return;
}



// FUNCTION 143c5f3e0 FUN_143c5f3e0 body=55 status=ok
// SIG undefined FUN_143c5f3e0(void)

void FUN_143c5f3e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb614d0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb614d0 = FUN_14171c317(FUN_1464f2d37,uVar1,L"EGbxMovingPlatformMoveState");
  }
  return;
}



// FUNCTION 143c5f417 FUN_143c5f417 body=55 status=ok
// SIG undefined FUN_143c5f417(void)

void FUN_143c5f417(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb614e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb614e8 = FUN_14171c317(FUN_1464f2d66,uVar1,L"EGbxMovingPlatformRelevantState");
  }
  return;
}



// FUNCTION 143c5f44e FUN_143c5f44e body=55 status=ok
// SIG undefined FUN_143c5f44e(void)

void FUN_143c5f44e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61500 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61500 = FUN_14171c317(FUN_1464f2d95,uVar1,L"EGbxMovingPlatformDestinationType");
  }
  return;
}



// FUNCTION 143c5f485 FUN_143c5f485 body=55 status=ok
// SIG undefined FUN_143c5f485(void)

void FUN_143c5f485(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61518 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61518 = FUN_14171c317(FUN_1464f2dc4,uVar1,L"EGbxMovingPlatformDestinationCondition");
  }
  return;
}



// FUNCTION 143c5f4bc FUN_143c5f4bc body=55 status=ok
// SIG undefined FUN_143c5f4bc(void)

void FUN_143c5f4bc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61530 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61530 = FUN_14171c317(FUN_1464f2df3,uVar1,L"EGbxMovingPlatformSpeedMode");
  }
  return;
}



// FUNCTION 143c5f4f3 FUN_143c5f4f3 body=55 status=ok
// SIG undefined FUN_143c5f4f3(void)

void FUN_143c5f4f3(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61548 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61548 =
         FUN_14171c317(FUN_1464f2e22,uVar1,L"EGbxMovingPlatformReplicationControllerType");
  }
  return;
}



// FUNCTION 143c5f52a FUN_143c5f52a body=55 status=ok
// SIG undefined FUN_143c5f52a(void)

void FUN_143c5f52a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61578 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61578 =
         FUN_14171c317(FUN_1464f2eea,uVar1,L"EGbxMovingPlatformEnforceAccelerationRateType");
  }
  return;
}



// FUNCTION 143c5f561 FUN_143c5f561 body=55 status=ok
// SIG undefined FUN_143c5f561(void)

void FUN_143c5f561(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61590 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61590 =
         FUN_14171c317(FUN_1464f2f19,uVar1,L"EGbxMovingPlatformSplineMovementRotationType");
  }
  return;
}



// FUNCTION 143c5f598 FUN_143c5f598 body=55 status=ok
// SIG undefined FUN_143c5f598(void)

void FUN_143c5f598(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb615a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb615a8 = FUN_14171c317(FUN_1464f2f48,uVar1,L"EGbxMovingPlatformSplineMovementSpeedMode");
  }
  return;
}



// FUNCTION 143c5f5cf FUN_143c5f5cf body=55 status=ok
// SIG undefined FUN_143c5f5cf(void)

void FUN_143c5f5cf(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb615d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb615d8 = FUN_14171c317(FUN_1464f300e,uVar1,L"EGbxMovingPlatformRelevancyType");
  }
  return;
}



// FUNCTION 143c5f606 FUN_143c5f606 body=48 status=ok
// SIG undefined FUN_143c5f606(void)

longlong FUN_143c5f606(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x678;
  FUN_1458df08a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5f6a8 FUN_143c5f6a8 body=157 status=ok
// SIG undefined FUN_143c5f6a8(void)

void FUN_143c5f6a8(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b1cb830;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 143c5f82a FUN_143c5f82a body=57 status=ok
// SIG undefined FUN_143c5f82a(void)

void FUN_143c5f82a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61650 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61650 = FUN_140002ddd(FUN_1464f3273,uVar1,L"GbxMusicAction_PostEvent");
  }
  return;
}



// FUNCTION 143c5f898 FUN_143c5f898 body=57 status=ok
// SIG undefined FUN_143c5f898(void)

void FUN_143c5f898(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61668 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61668 = FUN_140002ddd(FUN_1464f3309,uVar1,L"GbxMusicAction_SetSwitch");
  }
  return;
}



// FUNCTION 143c5f8e0 FUN_143c5f8e0 body=57 status=ok
// SIG undefined FUN_143c5f8e0(void)

void FUN_143c5f8e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61680 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61680 = FUN_140002ddd(FUN_1464f339f,uVar1,L"GbxMusicAction_RandomSwitch");
  }
  return;
}



// FUNCTION 143c5f928 FUN_143c5f928 body=720 status=ok
// SIG undefined FUN_143c5f928(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c5f928(void)

{
  uint uVar1;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar1 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb611f8 = (ulonglong)uVar1;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1c1820);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1c18b0);
  _DAT_14cb61230 = 0xffffffff;
  _DAT_14cb61234 = 0;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1c1be0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c2080,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c39f0,2,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1c3e10;
  local_58 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c3e30,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c4260,1,&PTR_FUN_14b1c4230);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c4f10,1,&PTR_FUN_14b1c4ee0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c5790,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c6160,1,&PTR_FUN_14b1c6130);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c68e0,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c7090,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c7b10,1,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1c8720,1,0);
  ppuStack_50 = &PTR_FUN_14b1ca9e0;
  uStack_48 = 10;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1cab20);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1cb1a0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c5fbfc FUN_143c5fbfc body=55 status=ok
// SIG undefined FUN_143c5fbfc(void)

void FUN_143c5fbfc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb618d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb618d8 = FUN_14171c317(FUN_1464f429c,uVar1,L"EGbxEngagementModeType");
  }
  return;
}



// FUNCTION 143c5fc33 FUN_143c5fc33 body=55 status=ok
// SIG undefined FUN_143c5fc33(void)

void FUN_143c5fc33(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb618f0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb618f0 = FUN_14171c317(FUN_1464f42cb,uVar1,L"EGbxEngagementType");
  }
  return;
}



// FUNCTION 143c5fc6a FUN_143c5fc6a body=55 status=ok
// SIG undefined FUN_143c5fc6a(void)

void FUN_143c5fc6a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61908 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61908 = FUN_14171c317(FUN_1464f42fa,uVar1,L"EGbxNpcPlayerGreetingType");
  }
  return;
}



// FUNCTION 143c5fca1 FUN_143c5fca1 body=55 status=ok
// SIG undefined FUN_143c5fca1(void)

void FUN_143c5fca1(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61920 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61920 = FUN_14171c317(FUN_1464f4329,uVar1,L"EGbxNpcPlayerAwarenessLevel");
  }
  return;
}



// FUNCTION 143c5fcd8 FUN_143c5fcd8 body=55 status=ok
// SIG undefined FUN_143c5fcd8(void)

void FUN_143c5fcd8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61938 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61938 = FUN_14171c317(FUN_1464f4358,uVar1,L"EGbxInfamyLevelForAwareness");
  }
  return;
}



// FUNCTION 143c5fd0f FUN_143c5fd0f body=55 status=ok
// SIG undefined FUN_143c5fd0f(void)

void FUN_143c5fd0f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61950 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61950 = FUN_14171c317(FUN_1464f4387,uVar1,L"EGbxAwarenessLevelBehavior");
  }
  return;
}



// FUNCTION 143c5fd46 FUN_143c5fd46 body=55 status=ok
// SIG undefined FUN_143c5fd46(void)

void FUN_143c5fd46(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb619e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb619e8 = FUN_14171c317(FUN_1464f452c,uVar1,L"EGbxOpportunisticAmbientAudioPlayType");
  }
  return;
}



// FUNCTION 143c5fd7d FUN_143c5fd7d body=55 status=ok
// SIG undefined FUN_143c5fd7d(void)

void FUN_143c5fd7d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61ad0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61ad0 = FUN_14171c317(FUN_1464f48de,uVar1,L"EPerchUserAttributeValueType");
  }
  return;
}



// FUNCTION 143c5fdb4 FUN_143c5fdb4 body=48 status=ok
// SIG undefined FUN_143c5fdb4(void)

longlong FUN_143c5fdb4(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x400;
  FUN_145bf29fa(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5fe26 FUN_143c5fe26 body=48 status=ok
// SIG undefined FUN_143c5fe26(void)

longlong FUN_143c5fe26(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x390;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5fe56 FUN_143c5fe56 body=48 status=ok
// SIG undefined FUN_143c5fe56(void)

longlong FUN_143c5fe56(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x958;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5fe86 FUN_143c5fe86 body=48 status=ok
// SIG undefined FUN_143c5fe86(void)

longlong FUN_143c5fe86(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x960;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5febe FUN_143c5febe body=48 status=ok
// SIG undefined FUN_143c5febe(void)

longlong FUN_143c5febe(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x990;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5feee FUN_143c5feee body=48 status=ok
// SIG undefined FUN_143c5feee(void)

longlong FUN_143c5feee(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x998;
  FUN_145967f80(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c5ff88 FUN_143c5ff88 body=57 status=ok
// SIG undefined FUN_143c5ff88(void)

void FUN_143c5ff88(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61700 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61700 = FUN_140002ddd(FUN_1464f3a8d,uVar1,L"GbxMusicCondition_FactExpression");
  }
  return;
}



// FUNCTION 143c60018 FUN_143c60018 body=57 status=ok
// SIG undefined FUN_143c60018(void)

void FUN_143c60018(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61730 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61730 = FUN_140002ddd(FUN_1464f3bb9,uVar1,L"GbxMusicSection");
  }
  return;
}



// FUNCTION 143c60060 FUN_143c60060 body=136 status=ok
// SIG undefined FUN_143c60060(void)

void FUN_143c60060(undefined8 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &PTR_FUN_14b1d7e80;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0xaaad1010;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[6] = &PTR_FUN_14b1d7d10;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0;
  param_1[0x1b] = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



// FUNCTION 143c60178 FUN_143c60178 body=57 status=ok
// SIG undefined FUN_143c60178(void)

void FUN_143c60178(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb61a00 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb61a00 = FUN_140002ddd(FUN_1464f455b,uVar1,L"GbxOpportunisticAmbientAudioConfigDef");
  }
  return;
}



// FUNCTION 143c6021c FUN_143c6021c body=1566 status=ok
// SIG undefined FUN_143c6021c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c6021c(void)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 uStack_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb616a8 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1cd720);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1cd970);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ce350,1,&PTR_FUN_14b1ce300);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ceba0,2,0);
  _DAT_14cb617a8 = 0x47efffffe0000000;
  _DAT_14cb617b0 = 0x47efffffe0000000;
  _DAT_14cb617b8 = 0x47efffffe0000000;
  _DAT_14cb617c0 = 0x47efffffe0000000;
  _DAT_14cb617c8 = 0x47efffffe0000000;
  _DAT_14cb617d0 = 0x47efffffe0000000;
  _DAT_14cb617d8 = 0x47efffffe0000000;
  _DAT_14cb617e0 = 0x47efffffe0000000;
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1cf9e0,1,&PTR_FUN_14b1cf9b0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1cfb10);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1cfcc0);
  _DAT_14cb6185c = 0;
  FUN_14052b5e0(&DAT_14cb61858,"PlayerAwareness",0);
  _DAT_14cb61868 = "PlayerAwareness";
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1d0bf0);
  lVar3 = 0x10;
  do {
    FUN_14098d3d2(*(undefined8 *)((longlong)&PTR_PTR_14b1d1020 + lVar3),L"/Script/GbxGame",
                  *(undefined8 *)(&UNK_14b1d1028 + lVar3),
                  *(undefined8 *)((longlong)&PTR_FUN_14b1d1030 + lVar3));
    lVar3 = lVar3 + 0x20;
  } while (lVar3 != 0xd0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb61960);
  if (cVar1 == '\0') {
    _DAT_14cb61960 = 0;
    uRam000000014cb61968 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d1390,3,0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d2240,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1d2980;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d29d0,1,&PTR_FUN_14b1d29a0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d3390,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1d35d0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d38d0,1,&PTR_FUN_14b1d38a0);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d3c70,1,0);
  uStack_48 = 1;
  ppuStack_50 = &PTR_FUN_14b1d3e40;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1d3e60);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1d4140);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d4980,1,0);
  ppuStack_50 = (undefined **)0x0;
  uStack_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d5000,1,&PTR_FUN_14b1d4fd0);
  FUN_1446f470e(&DAT_14cb61b78,L"Client_ConsumePremiumCurrency",1);
  FUN_1446f470e(&DAT_14cb61b88,L"Client_PlayGbxFeedback",1);
  FUN_1446f470e(&DAT_14cb61b98,L"Client_ResetGbxFeedbackPlayTime",1);
  FUN_1446f470e(&DAT_14cb61ba8,L"Client_StopAllGbxFeedback",1);
  FUN_1446f470e(&DAT_14cb61bb8,L"Client_StopGbxFeedback",1);
  FUN_1446f470e(&DAT_14cb61bc8,L"ClientPartyKick",1);
  FUN_1446f470e(&DAT_14cb61bd8,L"ClientPlayRadialBlur",1);
  FUN_1446f470e(&DAT_14cb61be8,L"ClientReceiveTextChat",1);
  FUN_1446f470e(&DAT_14cb61bf8,L"ClientStopRadialBlur",1);
  FUN_1446f470e(&DAT_14cb61c08,L"ExecuteInventoryTransactionOnClient",1);
  FUN_1446f470e(&DAT_14cb61c18,L"ExecuteInventoryTransactionOnServer",1);
  FUN_1446f470e(&DAT_14cb61c40,L"PopCameraFade",1);
  FUN_1446f470e(&DAT_14cb61c50,L"PushCameraFadeFromColor",1);
  FUN_1446f470e(&DAT_14cb61c60,L"PushCameraFadeToColor",1);
  FUN_1446f470e(&DAT_14cb61c70,L"Server_AddCurrency",1);
  FUN_1446f470e(&DAT_14cb61c80,L"Server_NotifyReadyToPlayLevelSequence",1);
  FUN_1446f470e(&DAT_14cb61c90,L"Server_UpdatePremiumCurrency",1);
  FUN_1446f470e(&DAT_14cb61ca0,L"ServerGiveEntitlementReward",1);
  FUN_1446f470e(&DAT_14cb61cb0,L"ServerRefreshPlayerEntitlementFacts",1);
  FUN_1446f470e(&DAT_14cb61cc0,L"ServerSendTextChat",1);
  uStack_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1d7360,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c6083c FUN_143c6083c body=55 status=ok
// SIG undefined FUN_143c6083c(void)

void FUN_143c6083c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb620a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb620a0 = FUN_14171c317(FUN_1464f655d,uVar1,L"EGbxProfileProgressVaultPathType");
  }
  return;
}



// FUNCTION 143c60873 FUN_143c60873 body=55 status=ok
// SIG undefined FUN_143c60873(void)

void FUN_143c60873(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62100 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62100 = FUN_14171c317(FUN_1464f66f7,uVar1,L"EProgressGraphAllowedOperation");
  }
  return;
}



// FUNCTION 143c608aa FUN_143c608aa body=346 status=ok
// SIG undefined FUN_143c608aa(void)

void FUN_143c608aa(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b1e2b20;
  puVar1[5] = 0xffffffffffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 2;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0;
  *(undefined8 *)((longlong)puVar1 + 100) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x74) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x7c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x84) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0x8c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x94) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x9c) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0xa4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xac) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xb4) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0xbc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xc4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xcc) = 0x200000000;
  *(undefined8 *)((longlong)puVar1 + 0xd4) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xdc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xe4) = 0x200000000;
  *(undefined4 *)((longlong)puVar1 + 0xfc) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xec) = 0;
  *(undefined8 *)((longlong)puVar1 + 0xf4) = 0;
  *(undefined4 *)(puVar1 + 0x20) = 2;
  puVar1[0x31] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x104) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x10c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x114) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x11c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x124) = 0;
  *(undefined8 *)((longlong)puVar1 + 300) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x134) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x13c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x144) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x14c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x154) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x15c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x161) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined2 *)(puVar1 + 0x30) = 0;
  *(undefined2 *)(puVar1 + 0x32) = 1;
  *(undefined1 *)((longlong)puVar1 + 0x192) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x194) = 0xffffffff;
  puVar1[0x34] = 0;
  *(undefined4 *)(puVar1 + 0x35) = 0;
  return;
}



// FUNCTION 143c60a04 FUN_143c60a04 body=55 status=ok
// SIG undefined FUN_143c60a04(void)

void FUN_143c60a04(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb621e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb621e8 = FUN_14171c317(FUN_1464f6bbb,uVar1,L"EGbxProgressGraphType");
  }
  return;
}



// FUNCTION 143c60a3b FUN_143c60a3b body=110 status=ok
// SIG undefined FUN_143c60a3b(void)

void FUN_143c60a3b(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b1e4280;
  puVar1[5] = 0xffffffffffffffff;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x3c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  return;
}



// FUNCTION 143c60b76 FUN_143c60b76 body=57 status=ok
// SIG undefined FUN_143c60b76(void)

void FUN_143c60b76(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62200 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62200 = FUN_140002ddd(FUN_141855964,uVar1,L"GbxProgressGraphDef");
  }
  return;
}



// FUNCTION 143c60bca FUN_143c60bca body=57 status=ok
// SIG undefined FUN_143c60bca(void)

void FUN_143c60bca(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62218 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62218 = FUN_140002ddd(FUN_1464f68fe,uVar1,L"GbxProgressGraphGroupDef");
  }
  return;
}



// FUNCTION 143c60c82 FUN_143c60c82 body=57 status=ok
// SIG undefined FUN_143c60c82(void)

void FUN_143c60c82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62278 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62278 = FUN_140002ddd(FUN_1464f6e0e,uVar1,L"GbxProgressionCommandListDef");
  }
  return;
}



// FUNCTION 143c60dfc FUN_143c60dfc body=1564 status=ok
// SIG undefined FUN_143c60dfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c60dfc(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1dd080);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb61d18 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1dd750,1,&PTR_FUN_14b1dd720);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ddfe0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1de1d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1de7f0,1,&PTR_FUN_14b1de7c0);
  FUN_1446f470e(&DAT_14cb61dd0,L"OnGroupAdded",1);
  FUN_1446f470e(&DAT_14cb61de0,L"OnGroupRemoved",1);
  FUN_1446f470e(&DAT_14cb61df0,L"OnPlayerAdded",1);
  FUN_1446f470e(&DAT_14cb61e00,L"OnPlayerRemoved",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1df410,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1df7f0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1df8b0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1dfc10,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1dfcd0,1,0);
  FUN_1446f470e(&DAT_14cb61ea8,L"ClientLockUnlockable",1);
  FUN_1446f470e(&DAT_14cb61eb8,L"ClientSendProfileDataToVault",1);
  FUN_1446f470e(&DAT_14cb61ec8,L"ClientUnlockUnlockable",1);
  FUN_1446f470e(&DAT_14cb61ed8,L"OnGroupAssigned",1);
  FUN_1446f470e(&DAT_14cb61ee8,L"OnGroupRemoved",1);
  FUN_1446f470e(&DAT_14cb61f20,L"ServerSetDiscoveryRegion",1);
  FUN_1446f470e(&DAT_14cb61f30,L"ServerSetPlatformUniqueId",1);
  FUN_1446f470e(&DAT_14cb61f40,L"ServerSetRealtimeGameplayStatus",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e0b10,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e0bd0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e1210,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e12e0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e13a0,1,0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e1650,4,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1e1f30;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e1fa0,1,&PTR_FUN_14b1e1f50);
  FUN_1446f470e(&DAT_14cb62110,L"Server_ActivateNodeInGroup",1);
  FUN_1446f470e(&DAT_14cb62120,L"Server_AddBonusPoints",1);
  FUN_1446f470e(&DAT_14cb62130,L"Server_ResetActivations",1);
  FUN_1446f470e(&DAT_14cb62140,L"Server_ResetActivationsInGroup",1);
  FUN_1446f470e(&DAT_14cb62150,L"Server_ResetSpentPoints",1);
  FUN_1446f470e(&DAT_14cb62160,L"Server_SpendProgressPoints",1);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1e2df0;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e2e10,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1e3470;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e3490);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e36b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e3770);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e3820);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e3cc0,1,&PTR_FUN_14b1e3c70);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e3f00);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e4070);
  FUN_1446f470e(&DAT_14cb622d0,L"ServerResetProgressState",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1e4530,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e46f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1e49c0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c6141c FUN_143c6141c body=55 status=ok
// SIG undefined FUN_143c6141c(void)

void FUN_143c6141c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62340 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62340 = FUN_14171c317(FUN_143c61453,uVar1,L"EGbxProgressionProfileSaveType");
  }
  return;
}



// FUNCTION 143c61453 FUN_143c61453 body=47 status=ok
// SIG undefined FUN_143c61453(void)

longlong FUN_143c61453(void)

{
  if (DAT_14cb62338 == 0) {
    FUN_1409ce572(&DAT_14cb62338,&PTR_FUN_14b1e8fe0);
  }
  return DAT_14cb62338;
}



// FUNCTION 143c61482 FUN_143c61482 body=55 status=ok
// SIG undefined FUN_143c61482(void)

void FUN_143c61482(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62498 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62498 = FUN_14171c317(FUN_1464f7c8c,uVar1,L"EGbxProgressPointsNodeType");
  }
  return;
}



// FUNCTION 143c614b9 FUN_143c614b9 body=55 status=ok
// SIG undefined FUN_143c614b9(void)

void FUN_143c614b9(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb624c8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb624c8 = FUN_14171c317(FUN_1464f7d52,uVar1,L"EGbxProgressPointsPoolOps");
  }
  return;
}



// FUNCTION 143c614f0 FUN_143c614f0 body=55 status=ok
// SIG undefined FUN_143c614f0(void)

void FUN_143c614f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62528 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62528 = FUN_14171c317(FUN_1464f7f44,uVar1,L"EGbxProjectedMeshShape");
  }
  return;
}



// FUNCTION 143c61527 FUN_143c61527 body=55 status=ok
// SIG undefined FUN_143c61527(void)

void FUN_143c61527(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62618 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62618 = FUN_14171c317(FUN_1464f8394,uVar1,L"ERadioScriptType");
  }
  return;
}



// FUNCTION 143c6155e FUN_143c6155e body=55 status=ok
// SIG undefined FUN_143c6155e(void)

void FUN_143c6155e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62728 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62728 = FUN_14171c317(FUN_1464f8834,uVar1,L"EGbxRewardType");
  }
  return;
}



// FUNCTION 143c616e0 FUN_143c616e0 body=57 status=ok
// SIG undefined FUN_143c616e0(void)

void FUN_143c616e0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb625e8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb625e8 = FUN_140002ddd(FUN_1464f83f2,uVar1,L"GbxRadioScriptDef");
  }
  return;
}



// FUNCTION 143c6174e FUN_143c6174e body=526 status=ok
// SIG undefined FUN_143c6174e(void)

void FUN_143c6174e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong *plVar2;
  int *piVar3;
  ulonglong uVar4;
  int iVar5;
  longlong *plVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  ulonglong uVar17;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar5 = (int)param_1[5];
  if (iVar5 == 0) {
    uVar17 = 0;
    uVar15 = 1;
    iVar13 = 0;
    iVar7 = 0;
  }
  else {
    puVar11 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar11 = puVar1;
    }
    uVar16 = *puVar11;
    if (uVar16 == 0) {
      iVar7 = iVar5 + 0x1e;
      if (-1 < iVar5 + -1) {
        iVar7 = iVar5 + -1;
      }
      uVar17 = 0;
      uVar15 = (ulonglong)(uint)(iVar7 >> 5);
      if (iVar7 >> 5 < 1) {
        uVar15 = uVar17;
      }
      iVar13 = 0;
      do {
        if (uVar15 == uVar17) goto LAB_143c618c6;
        iVar13 = iVar13 + 0x20;
        uVar16 = puVar11[uVar17 + 1];
        uVar17 = uVar17 + 1;
      } while (uVar16 == 0);
    }
    else {
      uVar17 = 0;
      iVar13 = 0;
    }
    uVar15 = (ulonglong)(-uVar16 & uVar16);
    uVar4 = uVar15 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar5 <= iVar7) {
      iVar7 = iVar5;
    }
  }
  if (iVar7 < iVar5) {
    uVar16 = 0xffffffff;
    do {
      plVar6 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar7 * 0x20);
      if (plVar6 != (longlong *)0x0) {
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
      }
      uVar16 = uVar16 & ~(uint)uVar15;
      puVar11 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar11 = puVar1;
      }
      iVar5 = (int)param_1[5];
      iVar7 = (int)uVar17;
      lVar14 = (longlong)iVar7;
      uVar8 = puVar11[lVar14] & uVar16;
      if (uVar8 == 0) {
        iVar9 = iVar5 + 0x1e;
        if (-1 < iVar5 + -1) {
          iVar9 = iVar5 + -1;
        }
        iVar9 = iVar9 >> 5;
        iVar10 = iVar9;
        if (iVar9 < iVar7) {
          iVar10 = iVar7;
        }
        if (iVar9 <= iVar7) break;
        lVar12 = 0;
        while( true ) {
          iVar13 = iVar13 + 0x20;
          uVar8 = puVar11[lVar14 + lVar12 + 1];
          if (uVar8 != 0) break;
          lVar12 = lVar12 + 1;
          if (iVar10 - lVar14 == lVar12) goto LAB_143c618c6;
        }
        uVar17 = (ulonglong)(iVar7 + (int)lVar12 + 1);
        uVar16 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar8 & uVar8);
      uVar4 = uVar15 * 2 + 1;
      lVar14 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar7 = (iVar13 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    } while (iVar7 < iVar5);
  }
LAB_143c618c6:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
  }
  param_1[6] = 0xffffffff;
  uVar16 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 5) = 0;
  if (*(int *)((longlong)param_1 + 0x2c) < (int)uVar16 || 0x80 < *(int *)((longlong)param_1 + 0x2c))
  {
    uVar8 = 0x80;
    if (0x80 < (int)uVar16) {
      uVar8 = uVar16;
    }
    *(uint *)((longlong)param_1 + 0x2c) = uVar8;
    FUN_1446efbd8(puVar1,0);
    return;
  }
  return;
}



// FUNCTION 143c61a41 FUN_143c61a41 body=943 status=ok
// SIG undefined FUN_143c61a41(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c61a41(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14098d3d2(FUN_143c6141c,L"/Script/GbxGame",L"EGbxProgressionProfileSaveType",&DAT_14cb62338);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb62350 = (ulonglong)uVar1;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1eab00,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eabe0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1eacb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1eaf90,1,&PTR_FUN_14b1eaf60);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eb0e0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eb240);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1eb480;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eb4a0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1eb6e0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eb700);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eb9c0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1ebb80;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ebba0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ec6f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ed200,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ed790,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ed9a0,1,&PTR_FUN_14b1ed970);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1ee170;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ee1e0,1,&PTR_FUN_14b1ee190);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ee560,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1eed00,1,&PTR_FUN_14b1eecd0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1eee30);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1ef0c0,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1ef1a0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ef1c0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ef310);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ef490);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c61e01 FUN_143c61e01 body=55 status=ok
// SIG undefined FUN_143c61e01(void)

void FUN_143c61e01(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62ad8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62ad8 = FUN_14171c317(FUN_1464f9ec1,uVar1,L"EGbxRotationTargetLayer");
  }
  return;
}



// FUNCTION 143c61e38 FUN_143c61e38 body=55 status=ok
// SIG undefined FUN_143c61e38(void)

void FUN_143c61e38(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62b38 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62b38 = FUN_14171c317(FUN_1464f9f56,uVar1,L"EGbxRotationChannelState");
  }
  return;
}



// FUNCTION 143c61e6f FUN_143c61e6f body=55 status=ok
// SIG undefined FUN_143c61e6f(void)

void FUN_143c61e6f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62b80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62b80 = FUN_14171c317(FUN_1464fa18d,uVar1,L"EGbxRotationChannelType");
  }
  return;
}



// FUNCTION 143c61ea6 FUN_143c61ea6 body=55 status=ok
// SIG undefined FUN_143c61ea6(void)

void FUN_143c61ea6(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62be0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62be0 = FUN_14171c317(FUN_1464fa339,uVar1,L"EGbxRotationTargetPreviewBehavior");
  }
  return;
}



// FUNCTION 143c61f12 FUN_143c61f12 body=57 status=ok
// SIG undefined FUN_143c61f12(void)

void FUN_143c61f12(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62790 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62790 = FUN_140002ddd(FUN_1464f8e29,uVar1,L"GbxRewardData_ImmediateDef");
  }
  return;
}



// FUNCTION 143c61fce FUN_143c61fce body=57 status=ok
// SIG undefined FUN_143c61fce(void)

void FUN_143c61fce(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb627c0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb627c0 = FUN_140002ddd(FUN_1464f8f7d,uVar1,L"GbxRewardData_InventoryItem");
  }
  return;
}



// FUNCTION 143c6203c FUN_143c6203c body=57 status=ok
// SIG undefined FUN_143c6203c(void)

void FUN_143c6203c(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb627d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb627d8 = FUN_140002ddd(FUN_1464f900f,uVar1,L"GbxRewardData_InventorySerialNumber");
  }
  return;
}



// FUNCTION 143c6211e FUN_143c6211e body=57 status=ok
// SIG undefined FUN_143c6211e(void)

void FUN_143c6211e(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62808 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62808 = FUN_140002ddd(FUN_1464f90c5,uVar1,L"GbxRewardData_ProgressPoints");
  }
  return;
}



// FUNCTION 143c62192 FUN_143c62192 body=57 status=ok
// SIG undefined FUN_143c62192(void)

void FUN_143c62192(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62820 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62820 = FUN_140002ddd(FUN_1464f911f,uVar1,L"GbxRewardData_Unlockable");
  }
  return;
}



// FUNCTION 143c6223c FUN_143c6223c body=764 status=ok
// SIG undefined FUN_143c6223c(void)

void FUN_143c6223c(undefined8 param_1,undefined8 *param_2)

{
  longlong *plVar1;
  
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  param_2[10] = 0;
  param_2[0xb] = 0;
  param_2[0x10] = 0;
  param_2[0x11] = 0;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0xc] = 0;
  param_2[0xd] = 0;
  param_2[1] = 0;
  *param_2 = &PTR_FUN_14b1fc9f0;
  *(undefined4 *)(param_2 + 9) = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined8 *)((longlong)param_2 + 0x31) = 0;
  *(undefined8 *)((longlong)param_2 + 0x39) = 0;
  *(undefined1 *)(param_2 + 10) = 1;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  param_2[0xb] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0xc) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  param_2[0xd] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0xe) = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844850) {
    FUN_144b3d300(&DAT_14c844850);
    if (DAT_14c844850 == -1) {
      DAT_14c844840 = (longlong *)FUN_14494321d();
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
  param_2[0xf] = DAT_14c844840;
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
  *(undefined4 *)(param_2 + 0x10) = 0;
  param_2[0x11] = 0;
  return;
}



// FUNCTION 143c62550 FUN_143c62550 body=57 status=ok
// SIG undefined FUN_143c62550(void)

void FUN_143c62550(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb628e0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb628e0 = FUN_140002ddd(FUN_1464f9069,uVar1,L"GbxRewardsDef");
  }
  return;
}



// FUNCTION 143c626a6 FUN_143c626a6 body=1742 status=ok
// SIG undefined FUN_143c626a6(void)

longlong FUN_143c626a6(longlong param_1,longlong param_2)

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
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 uVar19;
  longlong lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  
  if (param_2 != param_1) {
    FUN_1470d03b0(param_1 + 8,param_2 + 8);
    FUN_1470d03b0(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144966e2e(param_1 + 0x50,param_2 + 0x50);
  FUN_1486ebb86(param_1 + 0x60,param_2 + 0x60);
  *(undefined8 *)(param_1 + 0xd0) = *(undefined8 *)(param_2 + 0xd0);
  FUN_1486eb934(param_1 + 0xd8,param_2 + 0xd8);
  *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_2 + 0x290);
  if (param_2 == param_1) {
    *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
    *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
    uVar16 = *(undefined8 *)(param_2 + 0x2f0);
    *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
    *(undefined8 *)(param_1 + 0x2f0) = uVar16;
    *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
    *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
    *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
    uVar16 = *(undefined8 *)(param_2 + 0x370);
    *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
    *(undefined8 *)(param_1 + 0x370) = uVar16;
    puVar21 = (undefined8 *)(param_2 + 0x3b0);
    puVar22 = (undefined8 *)(param_1 + 0x3b0);
    for (lVar20 = 0xd; lVar20 != 0; lVar20 = lVar20 + -1) {
      *puVar22 = *puVar21;
      puVar21 = puVar21 + 1;
      puVar22 = puVar22 + 1;
    }
    uVar1 = *(undefined4 *)(param_2 + 0x450);
    uVar2 = *(undefined4 *)(param_2 + 0x454);
    uVar3 = *(undefined4 *)(param_2 + 0x458);
    uVar4 = *(undefined4 *)(param_2 + 0x45c);
    uVar5 = *(undefined4 *)(param_2 + 0x460);
    uVar6 = *(undefined4 *)(param_2 + 0x464);
    uVar7 = *(undefined4 *)(param_2 + 0x468);
    uVar8 = *(undefined4 *)(param_2 + 0x46c);
    uVar9 = *(undefined4 *)(param_2 + 0x470);
    uVar10 = *(undefined4 *)(param_2 + 0x474);
    uVar11 = *(undefined4 *)(param_2 + 0x478);
    uVar12 = *(undefined4 *)(param_2 + 0x47c);
    uVar13 = *(undefined4 *)(param_2 + 0x484);
    uVar14 = *(undefined4 *)(param_2 + 0x488);
    uVar15 = *(undefined4 *)(param_2 + 0x48c);
    *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
    *(undefined4 *)(param_1 + 0x484) = uVar13;
    *(undefined4 *)(param_1 + 0x488) = uVar14;
    *(undefined4 *)(param_1 + 0x48c) = uVar15;
    *(undefined4 *)(param_1 + 0x470) = uVar9;
    *(undefined4 *)(param_1 + 0x474) = uVar10;
    *(undefined4 *)(param_1 + 0x478) = uVar11;
    *(undefined4 *)(param_1 + 0x47c) = uVar12;
    *(undefined4 *)(param_1 + 0x460) = uVar5;
    *(undefined4 *)(param_1 + 0x464) = uVar6;
    *(undefined4 *)(param_1 + 0x468) = uVar7;
    *(undefined4 *)(param_1 + 0x46c) = uVar8;
    *(undefined4 *)(param_1 + 0x450) = uVar1;
    *(undefined4 *)(param_1 + 0x454) = uVar2;
    *(undefined4 *)(param_1 + 0x458) = uVar3;
    *(undefined4 *)(param_1 + 0x45c) = uVar4;
    goto LAB_143c62c9f;
  }
  if (*(char *)(param_2 + 0x29c) == '\x01') {
    *(undefined4 *)(param_1 + 0x298) = *(undefined4 *)(param_2 + 0x298);
    uVar19 = 1;
LAB_143c6281e:
    *(undefined1 *)(param_1 + 0x29c) = uVar19;
  }
  else if (*(char *)(param_1 + 0x29c) == '\x01') {
    uVar19 = 0;
    goto LAB_143c6281e;
  }
  *(undefined8 *)(param_1 + 0x2a0) = *(undefined8 *)(param_2 + 0x2a0);
  *(undefined4 *)(param_1 + 0x2b0) = *(undefined4 *)(param_2 + 0x2b0);
  if (*(char *)(param_2 + 0x2b8) == '\x01') {
    *(undefined4 *)(param_1 + 0x2b4) = *(undefined4 *)(param_2 + 0x2b4);
    uVar19 = 1;
LAB_143c62860:
    *(undefined1 *)(param_1 + 0x2b8) = uVar19;
  }
  else if (*(char *)(param_1 + 0x2b8) == '\x01') {
    uVar19 = 0;
    goto LAB_143c62860;
  }
  if (*(char *)(param_2 + 0x2c0) == '\x01') {
    *(undefined4 *)(param_1 + 700) = *(undefined4 *)(param_2 + 700);
    *(undefined1 *)(param_1 + 0x2c0) = 1;
  }
  else if (*(char *)(param_1 + 0x2c0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2c0) = 0;
  }
  if (*(char *)(param_2 + 0x2e0) == '\x01') {
    *(undefined8 *)(param_1 + 0x2d8) = *(undefined8 *)(param_2 + 0x2d8);
    uVar16 = *(undefined8 *)(param_2 + 0x2d0);
    *(undefined8 *)(param_1 + 0x2c8) = *(undefined8 *)(param_2 + 0x2c8);
    *(undefined8 *)(param_1 + 0x2d0) = uVar16;
    *(undefined1 *)(param_1 + 0x2e0) = 1;
  }
  else if (*(char *)(param_1 + 0x2e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x2e0) = 0;
  }
  *(undefined8 *)(param_1 + 0x2f8) = *(undefined8 *)(param_2 + 0x2f8);
  uVar16 = *(undefined8 *)(param_2 + 0x2f0);
  *(undefined8 *)(param_1 + 0x2e8) = *(undefined8 *)(param_2 + 0x2e8);
  *(undefined8 *)(param_1 + 0x2f0) = uVar16;
  if (*(char *)(param_2 + 800) == '\x01') {
    uVar16 = *(undefined8 *)(param_2 + 0x300);
    uVar17 = *(undefined8 *)(param_2 + 0x308);
    uVar18 = *(undefined8 *)(param_2 + 0x318);
    *(undefined8 *)(param_1 + 0x310) = *(undefined8 *)(param_2 + 0x310);
    *(undefined8 *)(param_1 + 0x318) = uVar18;
    *(undefined8 *)(param_1 + 0x300) = uVar16;
    *(undefined8 *)(param_1 + 0x308) = uVar17;
    *(undefined1 *)(param_1 + 800) = 1;
  }
  else if (*(char *)(param_1 + 800) == '\x01') {
    *(undefined1 *)(param_1 + 800) = 0;
  }
  *(undefined4 *)(param_1 + 0x330) = *(undefined4 *)(param_2 + 0x330);
  if (*(char *)(param_2 + 0x338) == '\x01') {
    *(undefined4 *)(param_1 + 0x334) = *(undefined4 *)(param_2 + 0x334);
    uVar19 = 1;
LAB_143c6294e:
    *(undefined1 *)(param_1 + 0x338) = uVar19;
  }
  else if (*(char *)(param_1 + 0x338) == '\x01') {
    uVar19 = 0;
    goto LAB_143c6294e;
  }
  if (*(char *)(param_2 + 0x340) == '\x01') {
    *(undefined4 *)(param_1 + 0x33c) = *(undefined4 *)(param_2 + 0x33c);
    *(undefined1 *)(param_1 + 0x340) = 1;
  }
  else if (*(char *)(param_1 + 0x340) == '\x01') {
    *(undefined1 *)(param_1 + 0x340) = 0;
  }
  if (*(char *)(param_2 + 0x360) == '\x01') {
    *(undefined8 *)(param_1 + 0x358) = *(undefined8 *)(param_2 + 0x358);
    uVar16 = *(undefined8 *)(param_2 + 0x350);
    *(undefined8 *)(param_1 + 0x348) = *(undefined8 *)(param_2 + 0x348);
    *(undefined8 *)(param_1 + 0x350) = uVar16;
    *(undefined1 *)(param_1 + 0x360) = 1;
  }
  else if (*(char *)(param_1 + 0x360) == '\x01') {
    *(undefined1 *)(param_1 + 0x360) = 0;
  }
  *(undefined8 *)(param_1 + 0x378) = *(undefined8 *)(param_2 + 0x378);
  uVar16 = *(undefined8 *)(param_2 + 0x370);
  *(undefined8 *)(param_1 + 0x368) = *(undefined8 *)(param_2 + 0x368);
  *(undefined8 *)(param_1 + 0x370) = uVar16;
  if (*(char *)(param_2 + 0x3a0) == '\x01') {
    uVar16 = *(undefined8 *)(param_2 + 0x380);
    uVar17 = *(undefined8 *)(param_2 + 0x388);
    uVar18 = *(undefined8 *)(param_2 + 0x398);
    *(undefined8 *)(param_1 + 0x390) = *(undefined8 *)(param_2 + 0x390);
    *(undefined8 *)(param_1 + 0x398) = uVar18;
    *(undefined8 *)(param_1 + 0x380) = uVar16;
    *(undefined8 *)(param_1 + 0x388) = uVar17;
    *(undefined1 *)(param_1 + 0x3a0) = 1;
  }
  else if (*(char *)(param_1 + 0x3a0) == '\x01') {
    *(undefined1 *)(param_1 + 0x3a0) = 0;
  }
  puVar21 = (undefined8 *)(param_2 + 0x3b0);
  puVar22 = (undefined8 *)(param_1 + 0x3b0);
  for (lVar20 = 0xd; lVar20 != 0; lVar20 = lVar20 + -1) {
    *puVar22 = *puVar21;
    puVar21 = puVar21 + 1;
    puVar22 = puVar22 + 1;
  }
  if (*(char *)(param_2 + 0x440) == '\x01') {
    uVar16 = *(undefined8 *)(param_2 + 0x420);
    uVar17 = *(undefined8 *)(param_2 + 0x428);
    uVar18 = *(undefined8 *)(param_2 + 0x438);
    *(undefined8 *)(param_1 + 0x430) = *(undefined8 *)(param_2 + 0x430);
    *(undefined8 *)(param_1 + 0x438) = uVar18;
    *(undefined8 *)(param_1 + 0x420) = uVar16;
    *(undefined8 *)(param_1 + 0x428) = uVar17;
    uVar19 = 1;
LAB_143c62a59:
    *(undefined1 *)(param_1 + 0x440) = uVar19;
  }
  else if (*(char *)(param_1 + 0x440) == '\x01') {
    uVar19 = 0;
    goto LAB_143c62a59;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x450);
  uVar2 = *(undefined4 *)(param_2 + 0x454);
  uVar3 = *(undefined4 *)(param_2 + 0x458);
  uVar4 = *(undefined4 *)(param_2 + 0x45c);
  uVar5 = *(undefined4 *)(param_2 + 0x460);
  uVar6 = *(undefined4 *)(param_2 + 0x464);
  uVar7 = *(undefined4 *)(param_2 + 0x468);
  uVar8 = *(undefined4 *)(param_2 + 0x46c);
  uVar9 = *(undefined4 *)(param_2 + 0x470);
  uVar10 = *(undefined4 *)(param_2 + 0x474);
  uVar11 = *(undefined4 *)(param_2 + 0x478);
  uVar12 = *(undefined4 *)(param_2 + 0x47c);
  uVar13 = *(undefined4 *)(param_2 + 0x484);
  uVar14 = *(undefined4 *)(param_2 + 0x488);
  uVar15 = *(undefined4 *)(param_2 + 0x48c);
  *(undefined4 *)(param_1 + 0x480) = *(undefined4 *)(param_2 + 0x480);
  *(undefined4 *)(param_1 + 0x484) = uVar13;
  *(undefined4 *)(param_1 + 0x488) = uVar14;
  *(undefined4 *)(param_1 + 0x48c) = uVar15;
  *(undefined4 *)(param_1 + 0x470) = uVar9;
  *(undefined4 *)(param_1 + 0x474) = uVar10;
  *(undefined4 *)(param_1 + 0x478) = uVar11;
  *(undefined4 *)(param_1 + 0x47c) = uVar12;
  *(undefined4 *)(param_1 + 0x460) = uVar5;
  *(undefined4 *)(param_1 + 0x464) = uVar6;
  *(undefined4 *)(param_1 + 0x468) = uVar7;
  *(undefined4 *)(param_1 + 0x46c) = uVar8;
  *(undefined4 *)(param_1 + 0x450) = uVar1;
  *(undefined4 *)(param_1 + 0x454) = uVar2;
  *(undefined4 *)(param_1 + 0x458) = uVar3;
  *(undefined4 *)(param_1 + 0x45c) = uVar4;
  if (*(char *)(param_2 + 0x4b0) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x490);
    uVar2 = *(undefined4 *)(param_2 + 0x494);
    uVar3 = *(undefined4 *)(param_2 + 0x498);
    uVar4 = *(undefined4 *)(param_2 + 0x49c);
    uVar5 = *(undefined4 *)(param_2 + 0x4a4);
    uVar6 = *(undefined4 *)(param_2 + 0x4a8);
    uVar7 = *(undefined4 *)(param_2 + 0x4ac);
    *(undefined4 *)(param_1 + 0x4a0) = *(undefined4 *)(param_2 + 0x4a0);
    *(undefined4 *)(param_1 + 0x4a4) = uVar5;
    *(undefined4 *)(param_1 + 0x4a8) = uVar6;
    *(undefined4 *)(param_1 + 0x4ac) = uVar7;
    *(undefined4 *)(param_1 + 0x490) = uVar1;
    *(undefined4 *)(param_1 + 0x494) = uVar2;
    *(undefined4 *)(param_1 + 0x498) = uVar3;
    *(undefined4 *)(param_1 + 0x49c) = uVar4;
    *(undefined1 *)(param_1 + 0x4b0) = 1;
  }
  else if (*(char *)(param_1 + 0x4b0) == '\x01') {
    *(undefined1 *)(param_1 + 0x4b0) = 0;
  }
  if (*(char *)(param_2 + 0x4e0) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x4c0);
    uVar2 = *(undefined4 *)(param_2 + 0x4c4);
    uVar3 = *(undefined4 *)(param_2 + 0x4c8);
    uVar4 = *(undefined4 *)(param_2 + 0x4cc);
    uVar5 = *(undefined4 *)(param_2 + 0x4d4);
    uVar6 = *(undefined4 *)(param_2 + 0x4d8);
    uVar7 = *(undefined4 *)(param_2 + 0x4dc);
    *(undefined4 *)(param_1 + 0x4d0) = *(undefined4 *)(param_2 + 0x4d0);
    *(undefined4 *)(param_1 + 0x4d4) = uVar5;
    *(undefined4 *)(param_1 + 0x4d8) = uVar6;
    *(undefined4 *)(param_1 + 0x4dc) = uVar7;
    *(undefined4 *)(param_1 + 0x4c0) = uVar1;
    *(undefined4 *)(param_1 + 0x4c4) = uVar2;
    *(undefined4 *)(param_1 + 0x4c8) = uVar3;
    *(undefined4 *)(param_1 + 0x4cc) = uVar4;
    *(undefined1 *)(param_1 + 0x4e0) = 1;
  }
  else if (*(char *)(param_1 + 0x4e0) == '\x01') {
    *(undefined1 *)(param_1 + 0x4e0) = 0;
  }
  if (*(char *)(param_2 + 0x508) == '\x01') {
    *(undefined8 *)(param_1 + 0x500) = *(undefined8 *)(param_2 + 0x500);
    uVar1 = *(undefined4 *)(param_2 + 0x4f4);
    uVar2 = *(undefined4 *)(param_2 + 0x4f8);
    uVar3 = *(undefined4 *)(param_2 + 0x4fc);
    *(undefined4 *)(param_1 + 0x4f0) = *(undefined4 *)(param_2 + 0x4f0);
    *(undefined4 *)(param_1 + 0x4f4) = uVar1;
    *(undefined4 *)(param_1 + 0x4f8) = uVar2;
    *(undefined4 *)(param_1 + 0x4fc) = uVar3;
    *(undefined1 *)(param_1 + 0x508) = 1;
  }
  else if (*(char *)(param_1 + 0x508) == '\x01') {
    *(undefined1 *)(param_1 + 0x508) = 0;
  }
  if (*(char *)(param_2 + 0x530) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x510);
    uVar2 = *(undefined4 *)(param_2 + 0x514);
    uVar3 = *(undefined4 *)(param_2 + 0x518);
    uVar4 = *(undefined4 *)(param_2 + 0x51c);
    uVar5 = *(undefined4 *)(param_2 + 0x524);
    uVar6 = *(undefined4 *)(param_2 + 0x528);
    uVar7 = *(undefined4 *)(param_2 + 0x52c);
    *(undefined4 *)(param_1 + 0x520) = *(undefined4 *)(param_2 + 0x520);
    *(undefined4 *)(param_1 + 0x524) = uVar5;
    *(undefined4 *)(param_1 + 0x528) = uVar6;
    *(undefined4 *)(param_1 + 0x52c) = uVar7;
    *(undefined4 *)(param_1 + 0x510) = uVar1;
    *(undefined4 *)(param_1 + 0x514) = uVar2;
    *(undefined4 *)(param_1 + 0x518) = uVar3;
    *(undefined4 *)(param_1 + 0x51c) = uVar4;
    *(undefined1 *)(param_1 + 0x530) = 1;
  }
  else if (*(char *)(param_1 + 0x530) == '\x01') {
    *(undefined1 *)(param_1 + 0x530) = 0;
  }
  if (*(char *)(param_2 + 0x558) == '\x01') {
    *(undefined8 *)(param_1 + 0x550) = *(undefined8 *)(param_2 + 0x550);
    uVar1 = *(undefined4 *)(param_2 + 0x544);
    uVar2 = *(undefined4 *)(param_2 + 0x548);
    uVar3 = *(undefined4 *)(param_2 + 0x54c);
    *(undefined4 *)(param_1 + 0x540) = *(undefined4 *)(param_2 + 0x540);
    *(undefined4 *)(param_1 + 0x544) = uVar1;
    *(undefined4 *)(param_1 + 0x548) = uVar2;
    *(undefined4 *)(param_1 + 0x54c) = uVar3;
    *(undefined1 *)(param_1 + 0x558) = 1;
  }
  else if (*(char *)(param_1 + 0x558) == '\x01') {
    *(undefined1 *)(param_1 + 0x558) = 0;
  }
  if (*(char *)(param_2 + 0x580) == '\x01') {
    uVar1 = *(undefined4 *)(param_2 + 0x560);
    uVar2 = *(undefined4 *)(param_2 + 0x564);
    uVar3 = *(undefined4 *)(param_2 + 0x568);
    uVar4 = *(undefined4 *)(param_2 + 0x56c);
    uVar5 = *(undefined4 *)(param_2 + 0x574);
    uVar6 = *(undefined4 *)(param_2 + 0x578);
    uVar7 = *(undefined4 *)(param_2 + 0x57c);
    *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(param_2 + 0x570);
    *(undefined4 *)(param_1 + 0x574) = uVar5;
    *(undefined4 *)(param_1 + 0x578) = uVar6;
    *(undefined4 *)(param_1 + 0x57c) = uVar7;
    *(undefined4 *)(param_1 + 0x560) = uVar1;
    *(undefined4 *)(param_1 + 0x564) = uVar2;
    *(undefined4 *)(param_1 + 0x568) = uVar3;
    *(undefined4 *)(param_1 + 0x56c) = uVar4;
    *(undefined1 *)(param_1 + 0x580) = 1;
  }
  else if (*(char *)(param_1 + 0x580) == '\x01') {
    *(undefined1 *)(param_1 + 0x580) = 0;
  }
  if (*(char *)(param_2 + 0x5a8) == '\x01') {
    *(undefined8 *)(param_1 + 0x5a0) = *(undefined8 *)(param_2 + 0x5a0);
    uVar1 = *(undefined4 *)(param_2 + 0x594);
    uVar2 = *(undefined4 *)(param_2 + 0x598);
    uVar3 = *(undefined4 *)(param_2 + 0x59c);
    *(undefined4 *)(param_1 + 0x590) = *(undefined4 *)(param_2 + 0x590);
    *(undefined4 *)(param_1 + 0x594) = uVar1;
    *(undefined4 *)(param_1 + 0x598) = uVar2;
    *(undefined4 *)(param_1 + 0x59c) = uVar3;
    *(undefined1 *)(param_1 + 0x5a8) = 1;
  }
  else if (*(char *)(param_1 + 0x5a8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5a8) = 0;
  }
  if (*(char *)(param_2 + 0x5c8) == '\x01') {
    *(undefined8 *)(param_1 + 0x5c0) = *(undefined8 *)(param_2 + 0x5c0);
    uVar1 = *(undefined4 *)(param_2 + 0x5b4);
    uVar2 = *(undefined4 *)(param_2 + 0x5b8);
    uVar3 = *(undefined4 *)(param_2 + 0x5bc);
    *(undefined4 *)(param_1 + 0x5b0) = *(undefined4 *)(param_2 + 0x5b0);
    *(undefined4 *)(param_1 + 0x5b4) = uVar1;
    *(undefined4 *)(param_1 + 0x5b8) = uVar2;
    *(undefined4 *)(param_1 + 0x5bc) = uVar3;
    *(undefined1 *)(param_1 + 0x5c8) = 1;
  }
  else if (*(char *)(param_1 + 0x5c8) == '\x01') {
    *(undefined1 *)(param_1 + 0x5c8) = 0;
  }
LAB_143c62c9f:
  FUN_1486eb99e(param_1 + 0x5d0,param_2 + 0x5d0);
  FUN_1486ebb3a(param_1 + 0x7f0,param_2 + 0x7f0);
  FUN_1486ebb3a(param_1 + 0x810,param_2 + 0x810);
  return param_1;
}



// FUNCTION 143c62d74 FUN_143c62d74 body=232 status=ok
// SIG undefined FUN_143c62d74(void)

void FUN_143c62d74(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x208) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x1b8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 400) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x168) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x140) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x118) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xf0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xa0) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x28) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 143c62fbb FUN_143c62fbb body=1067 status=ok
// SIG undefined FUN_143c62fbb(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c62fbb(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb62780 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f34d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f35f0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f37d0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f39b0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f3aa0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f3bc0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f3cd0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f3df0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f4290);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f4410);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f4560);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f4660);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1f49c0,1,&PTR_FUN_14b1f4990);
  FUN_1446f470e(&DAT_14cb62908,L"Client_GivenPackage",1);
  FUN_1446f470e(&DAT_14cb62918,L"Client_OpenedPackage",1);
  FUN_1446f470e(&DAT_14cb62928,L"Client_OpenedPackages",1);
  FUN_1446f470e(&DAT_14cb62938,L"Server_DeletePackage",1);
  FUN_1446f470e(&DAT_14cb62948,L"Server_OpenAllPackages",1);
  FUN_1446f470e(&DAT_14cb62958,L"Server_OpenPackage",1);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1f5130,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f53c0);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1f5df0,1,0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 4;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f6310);
  uStack_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1f73b0,1,0);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1f7840;
  local_68 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f7860);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1f7f10;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f7f30);
  FUN_14098d3d2(FUN_143c61e6f,L"/Script/GbxGame",L"EGbxRotationChannelType",&DAT_14cb62b78);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f80a0);
  ppuStack_60 = (undefined **)0x0;
  uStack_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f8530);
  uStack_58 = 1;
  ppuStack_60 = &PTR_FUN_14b1f8dd0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1f8df0);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c633e8 FUN_143c633e8 body=55 status=ok
// SIG undefined FUN_143c633e8(void)

void FUN_143c633e8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62f48 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62f48 = FUN_14171c317(FUN_1464fb8e8,uVar1,L"EGbxRotationValueResolverValue");
  }
  return;
}



// FUNCTION 143c6341f FUN_143c6341f body=55 status=ok
// SIG undefined FUN_143c6341f(void)

void FUN_143c6341f(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62f60 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62f60 = FUN_14171c317(FUN_1464fb917,uVar1,L"EGbxRotationValueResolverSubValue");
  }
  return;
}



// FUNCTION 143c63456 FUN_143c63456 body=55 status=ok
// SIG undefined FUN_143c63456(void)

void FUN_143c63456(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63050 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63050 = FUN_14171c317(FUN_1464fbcb8,uVar1,L"EGbxSceneViewerCaptureProjectionType");
  }
  return;
}



// FUNCTION 143c6348d FUN_143c6348d body=55 status=ok
// SIG undefined FUN_143c6348d(void)

void FUN_143c6348d(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63080 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63080 = FUN_14171c317(FUN_1464fbd1c,uVar1,L"EGbxSceneViewerViewMode");
  }
  return;
}



// FUNCTION 143c634c4 FUN_143c634c4 body=145 status=ok
// SIG undefined FUN_143c634c4(void)

void FUN_143c634c4(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b2028c0;
  puVar1[5] = &PTR_FUN_14b202b60;
  puVar1[6] = &PTR_FUN_14b202b80;
  puVar1[7] = 0;
  *(undefined4 *)(puVar1 + 8) = 0x4000;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 1;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  return;
}



// FUNCTION 143c63580 FUN_143c63580 body=57 status=ok
// SIG undefined FUN_143c63580(void)

void FUN_143c63580(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62c58 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62c58 = FUN_140002ddd(FUN_1464fa9ff,uVar1,L"GbxRotationContextualOverrideSettings");
  }
  return;
}



// FUNCTION 143c635c8 FUN_143c635c8 body=57 status=ok
// SIG undefined FUN_143c635c8(void)

void FUN_143c635c8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62c70 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62c70 = FUN_140002ddd(FUN_1464faa90,uVar1,L"GbxRotationContextualOverride");
  }
  return;
}



// FUNCTION 143c6363a FUN_143c6363a body=57 status=ok
// SIG undefined FUN_143c6363a(void)

void FUN_143c6363a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62d18 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62d18 = FUN_140002ddd(FUN_1464fad16,uVar1,L"GbxRotationSettings");
  }
  return;
}



// FUNCTION 143c637b8 FUN_143c637b8 body=57 status=ok
// SIG undefined FUN_143c637b8(void)

void FUN_143c637b8(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62de0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62de0 = FUN_140002ddd(FUN_1464fb12c,uVar1,L"GbxRotationTargetModifier_AlphaScale");
  }
  return;
}



// FUNCTION 143c638f0 FUN_143c638f0 body=57 status=ok
// SIG undefined FUN_143c638f0(void)

void FUN_143c638f0(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb62ed0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb62ed0 =
         FUN_140002ddd(FUN_1464fb69c,uVar1,L"GbxRotationTargetModifier_DistanceBasedBlend");
  }
  return;
}



// FUNCTION 143c63b3a FUN_143c63b3a body=1071 status=ok
// SIG undefined FUN_143c63b3a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c63b3a(void)

{
  uint uVar1;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 uStack_68;
  char *local_60;
  undefined4 local_58;
  undefined1 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_98;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fcbc0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fcc80);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fd540);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1fd900,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fd9f0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1fde00,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b1fe160,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fe2a0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fe370);
  local_60 = "AssetRegistry";
  local_58 = 0xd;
  local_54 = 0;
  uVar1 = FUN_14001a6c0(&local_60,1);
  _DAT_14cb62d28 = (ulonglong)uVar1;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fe560);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fe620);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fe810);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1fefd0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 6;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b1ff910);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2001e0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b200410);
  uStack_68 = 2;
  ppuStack_70 = &PTR_FUN_14b200880;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b2008c0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b200de0,1,&PTR_FUN_14b200d60);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b200f50,1,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b201750,1,&PTR_FUN_14b201720);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b201ab0,1,0);
  uStack_68 = 1;
  ppuStack_70 = &PTR_FUN_14b202340;
  local_78 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b202360,1,0);
  FUN_14098d3d2(FUN_143c6348d,L"/Script/GbxGame",L"EGbxSceneViewerViewMode",&DAT_14cb63078);
  _DAT_14cb63090 = 0xffffffff;
  _DAT_14cb63094 = 0;
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2026e0,1,&PTR_FUN_14b2026b0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b202ba0,1,0);
  uStack_68 = 0;
  local_78 = 0;
  ppuStack_70 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b202db0,2,0);
  ppuStack_70 = (undefined **)0x0;
  uStack_68 = 0;
  local_78 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b203370,3,&PTR_FUN_14b203340);
  if ((local_50 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c63f6c FUN_143c63f6c body=157 status=ok
// SIG undefined FUN_143c63f6c(void)

void FUN_143c63f6c(undefined8 *param_1)

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
  *param_1 = &PTR_FUN_14b214520;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0xffffffff00000080;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xd4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xdc) = 0;
  param_1[0x1d] = 0;
  *(undefined4 *)(param_1 + 0x1e) = 0;
  return;
}



// FUNCTION 143c64009 FUN_143c64009 body=55 status=ok
// SIG undefined FUN_143c64009(void)

void FUN_143c64009(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb634b8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb634b8 = FUN_14171c317(FUN_1464fd0c4,uVar1,L"EGbxNotifySectionDirection");
  }
  return;
}



// FUNCTION 143c64040 FUN_143c64040 body=55 status=ok
// SIG undefined FUN_143c64040(void)

void FUN_143c64040(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb635a8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb635a8 = FUN_14171c317(FUN_1464fd33e,uVar1,L"EGbxSequenceRotationTargetType");
  }
  return;
}



// FUNCTION 143c64077 FUN_143c64077 body=55 status=ok
// SIG undefined FUN_143c64077(void)

void FUN_143c64077(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63620 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63620 = FUN_14171c317(FUN_1464fd474,uVar1,L"EGbxSerialNumberIndexScope");
  }
  return;
}



// FUNCTION 143c640ae FUN_143c640ae body=55 status=ok
// SIG undefined FUN_143c640ae(void)

void FUN_143c640ae(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63638 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63638 = FUN_14171c317(FUN_1464fd4a3,uVar1,L"EGbxSerialNumberIndexStatus");
  }
  return;
}



// FUNCTION 143c640e5 FUN_143c640e5 body=55 status=ok
// SIG undefined FUN_143c640e5(void)

void FUN_143c640e5(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb636b0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb636b0 = FUN_14171c317(FUN_1464fd72e,uVar1,L"EGGbxShapeComponentType");
  }
  return;
}



// FUNCTION 143c6411c FUN_143c6411c body=45 status=ok
// SIG undefined FUN_143c6411c(void)

longlong FUN_143c6411c(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x68;
  FUN_145ab7c70(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c64385 FUN_143c64385 body=1528 status=ok
// SIG undefined FUN_143c64385(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c64385(void)

{
  uint uVar1;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  char *local_50;
  undefined4 local_48;
  undefined1 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  _DAT_14cb63170 = 0xffffffff;
  _DAT_14cb63174 = 0;
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b208fb0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b2092e0,3,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b209a00,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b209ad0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b209ba0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b209cf0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20a130,1,&PTR_FUN_14b20a0e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20a280,1,0);
  local_50 = "AssetRegistry";
  local_48 = 0xd;
  local_44 = 0;
  uVar1 = FUN_14001a6c0(&local_50,1);
  _DAT_14cb632b0 = (ulonglong)uVar1;
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20a690,1,&PTR_FUN_14b20a640);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20a7d0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20a890,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b20ae20);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20af50,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20b3f0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20b750,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20ba10,1,&PTR_FUN_14b20b9e0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20bad0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20bc10,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c040,1,&PTR_FUN_14b20bff0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b20c150);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c220,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c310,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c430,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b20c580;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c5a0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c750,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20c8a0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20ccf0,1,&PTR_FUN_14b20ccc0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20cdb0,1,0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b20cee0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20cfb0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20d310,1,0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b20d750;
  local_68 = 0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20d770,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20d8c0,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20dc10,1,0);
  local_58 = 0;
  local_68 = 0;
  ppuStack_60 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20df90,1,0);
  local_58 = 2;
  ppuStack_60 = &PTR_FUN_14b20e3e0;
  local_68 = 2;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b20e420);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b20e4f0);
  ppuStack_60 = (undefined **)0x0;
  local_58 = 0;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b20e5b0);
  local_58 = 1;
  ppuStack_60 = &PTR_FUN_14b20fc70;
  local_68 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b20fcc0,1,&PTR_FUN_14b20fc90);
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c64980 FUN_143c64980 body=55 status=ok
// SIG undefined FUN_143c64980(void)

void FUN_143c64980(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63828 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63828 = FUN_14171c317(FUN_1464fe344,uVar1,L"ESimpleMotionType");
  }
  return;
}



// FUNCTION 143c649b7 FUN_143c649b7 body=47 status=ok
// SIG undefined FUN_143c649b7(void)

longlong FUN_143c649b7(void)

{
  if (DAT_14cb638c8 == 0) {
    FUN_14000fc22(&DAT_14cb638c8,&PTR_FUN_14b21a130);
  }
  return DAT_14cb638c8;
}



// FUNCTION 143c649e6 FUN_143c649e6 body=3639 status=ok
// SIG undefined FUN_143c649e6(void)

void FUN_143c649e6(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  char cVar8;
  longlong lVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_108 [32];
  ulonglong local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  code *local_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&local_58);
            goto LAB_143c64bd9;
          }
        }
        puVar11 = (undefined8 *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_58) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_58,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_58,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar4[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_58,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&local_58,lVar9);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_58);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_58 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_58);
    }
  }
LAB_143c64bd9:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&local_70);
            goto LAB_143c64da0;
          }
        }
        puVar11 = (undefined8 *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_70) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_70,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_70,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar4[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_70,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&local_70,lVar9);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_70);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_70 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_70);
    }
  }
LAB_143c64da0:
  uStack_78 = 0;
  uStack_74 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1409e12a0;
      local_e0 = 0;
      local_e8 = 0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&uStack_78);
            goto LAB_143c64f73;
          }
        }
        puVar10 = (undefined4 *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &uStack_78) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&uStack_78,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&uStack_78,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar4[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&uStack_78,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&uStack_78,lVar9);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&uStack_78);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&uStack_78);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      uStack_78 = (undefined4)uVar2;
      uStack_74 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&uStack_78);
    }
  }
LAB_143c64f73:
  local_7c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_d0 = FUN_1408a629c;
      local_d8 = &DAT_14c9520b8;
      local_e0 = 0;
      local_e8 = 0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&local_7c);
            goto LAB_143c65145;
          }
        }
        puVar10 = (undefined4 *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar10 != &local_7c) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_7c,puVar10,(int)plVar4[6]);
          }
          else {
            memcpy(&local_7c,puVar10,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar4[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_7c,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&local_7c,lVar9);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_7c);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_7c);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      uVar2 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
      local_7c = (undefined4)uVar2;
      uStack_78 = (undefined4)((ulonglong)uVar2 >> 0x20);
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_7c);
    }
  }
LAB_143c65145:
  local_88 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_d8 = (undefined *)FUN_1446ddbd2();
      local_d0 = FUN_1403a682c;
      local_e0 = 0;
      local_e8 = 0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x88);
    *(longlong *)(param_2 + 0x88) = plVar4[3];
    if ((*(byte *)((longlong)plVar4 + 0x39) & 1) == 0) {
      lVar9 = *(longlong *)(param_2 + 0x28);
      *(longlong *)(param_2 + 0x38) = *(int *)((longlong)plVar4 + 0x44) + lVar9;
      *(longlong *)(param_2 + 0x40) = lVar9;
      pcVar3 = *(code **)(*plVar4 + 0x120);
      if (pcVar3 == FUN_144afffdc) {
        pcVar3 = *(code **)(*plVar4 + 0x88);
        if (pcVar3 != (code *)&LAB_1447713a0) {
          cVar8 = (*pcVar3)(plVar4);
          if (cVar8 != '\0') {
            (**(code **)(*plVar4 + 0xa0))(plVar4,lVar9,&local_88);
            goto LAB_143c65318;
          }
        }
        puVar11 = (undefined8 *)(lVar9 + *(int *)((longlong)plVar4 + 0x44));
        if (puVar11 != &local_88) {
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,&local_88,puVar11,(int)plVar4[6]);
          }
          else {
            memcpy(&local_88,puVar11,
                   (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_e0 = CONCAT44(local_e0._4_4_,(int)plVar4[6]);
        local_e8 = local_e8 & 0xffffffff00000000;
        FUN_1400746b0(plVar4,&local_88,lVar9,1);
      }
      else {
        (*pcVar3)(plVar4,&local_88,lVar9);
      }
    }
    else {
      puVar11 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar5 = (undefined8 *)*puVar11;
        puVar11 = puVar5 + 2;
      } while ((longlong *)*puVar5 != plVar4);
      *(undefined8 *)(param_2 + 0x38) = puVar5[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_88);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_88 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_88);
    }
  }
LAB_143c65318:
  uVar7 = local_7c;
  uVar6 = local_88;
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar2 = CONCAT44(uStack_74,uStack_78);
  local_a8 = local_70;
  uStack_a0 = uStack_68;
  local_98 = local_60;
  local_c8 = (undefined4)local_58;
  uStack_c4 = local_58._4_4_;
  uStack_c0 = uStack_50;
  uStack_bc = uStack_4c;
  local_b8 = local_48;
  lVar9 = (**(code **)(*(longlong *)(param_1 + 0x1238) + 0x10))(param_1 + 0x1238);
  if (lVar9 != 0) {
    local_e0 = uVar6;
    local_e8 = CONCAT44(local_e8._4_4_,uVar7);
    FUN_1458bf390(lVar9,&local_c8,&local_a8,uVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c65826 FUN_143c65826 body=221 status=ok
// SIG undefined FUN_143c65826(void)

longlong FUN_143c65826(void)

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
  if (DAT_14cb63988 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_1486f5f94;
    local_40 = &LAB_14106aa88;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x250;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxSkill",&DAT_14cb63988,FUN_1464fe9ca);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb63988;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c65904 FUN_143c65904 body=138 status=ok
// SIG undefined FUN_143c65904(void)

void FUN_143c65904(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *puVar1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_1 != puVar1 && (undefined8 *)*param_1 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_1 = (longlong)puVar1;
  *(undefined1 *)((longlong)param_1 + 0x12) = 0;
  *puVar1 = &PTR_FUN_14b21ffc0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x44) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x4c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x54) = 0xffffffff;
  *(undefined2 *)((longlong)puVar1 + 0x5c) = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  return;
}



// FUNCTION 143c659aa FUN_143c659aa body=48 status=ok
// SIG undefined FUN_143c659aa(void)

longlong FUN_143c659aa(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x650;
  FUN_1403c353a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c659e2 FUN_143c659e2 body=48 status=ok
// SIG undefined FUN_143c659e2(void)

longlong FUN_143c659e2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x1238;
  FUN_1403c353a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c65ab2 FUN_143c65ab2 body=238 status=ok
// SIG undefined FUN_143c65ab2(void)

void FUN_143c65ab2(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x30);
    lVar8 = (longlong)*(int *)(param_1 + 0x38) * 0x88;
    iVar7 = 0;
    do {
      if ((*(int *)(lVar6 + 0xc) == 0) ||
         ((((uVar1 = *(uint *)(lVar6 + 8), -1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
           (lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar5 != 0)) &&
          ((*(int *)(lVar5 + 0x10) == *(int *)(lVar6 + 0xc) &&
           ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))))) {
        pcVar2 = (code *)*param_2;
        plVar4 = (longlong *)param_2[2];
        if ((longlong *)param_2[2] == (longlong *)0x0) {
          plVar4 = param_2 + 4;
        }
        local_4c = iVar7;
        uVar3 = (**(code **)(*plVar4 + 8))();
        (*pcVar2)(uVar3,lVar6,&local_4c);
      }
      else {
        *(undefined1 *)(param_1 + 0x58) = 1;
      }
      iVar7 = iVar7 + 1;
      lVar6 = lVar6 + 0x88;
      lVar8 = lVar8 + -0x88;
    } while (lVar8 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c65ca4 FUN_143c65ca4 body=57 status=ok
// SIG undefined FUN_143c65ca4(void)

void FUN_143c65ca4(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63a08 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63a08 = FUN_140002ddd(FUN_1464fec49,uVar1,L"GbxSkillActionDataEx");
  }
  return;
}



// FUNCTION 143c65d30 FUN_143c65d30 body=31 status=ok
// SIG undefined FUN_143c65d30(void)

undefined8 FUN_143c65d30(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 143c65d50 FUN_143c65d50 body=57 status=ok
// SIG undefined FUN_143c65d50(void)

void FUN_143c65d50(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63ac0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63ac0 = FUN_140002ddd(FUN_1464ff077,uVar1,L"GbxSkillActionExecFilter_Def");
  }
  return;
}



// FUNCTION 143c65dde FUN_143c65dde body=853 status=ok
// SIG undefined FUN_143c65dde(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_143c65dde(void)

{
  char cVar1;
  uint uVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  char *local_40;
  undefined4 local_38;
  undefined1 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b218df0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b219140,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b219260,1,0);
  local_40 = "AssetRegistry";
  local_38 = 0xd;
  local_34 = 0;
  uVar2 = FUN_14001a6c0(&local_40,1);
  _DAT_14cb637e8 = (ulonglong)uVar2;
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b219770,1,&PTR_FUN_14b219740);
  local_48 = 1;
  ppuStack_50 = &PTR_FUN_14b219b90;
  local_58 = 1;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b219bb0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b219c70,1,0);
  FUN_1400b22c2(&local_40,"5E33C861-2B87-4B58-A4B4-741C3E064881");
  cVar1 = FUN_140b10a34(&local_40,&DAT_14cb63868);
  if (cVar1 == '\0') {
    _DAT_14cb63868 = 0;
    uRam000000014cb63870 = 0;
  }
  if (local_40 != (char *)0x0) {
    FUN_1400020a8();
  }
  local_40 = "bone";
  local_38 = 4;
  local_34 = 0;
  FUN_14001a6c0(&local_40,1);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 3;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b21c570,1,&PTR_FUN_14b21c4f0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b21c8e0,1,0);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b21cb70,1,0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 5;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b21d880);
  FUN_1446f470e(&DAT_14cb63a50,L"HandleException",1);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 2;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b21e930,1,&PTR_FUN_14b21e8e0);
  ppuStack_50 = (undefined **)0x0;
  local_48 = 0;
  local_58 = 8;
  FUN_14282b410(L"/Script/GbxGame",0,0,&PTR_FUN_14b21f1c0);
  FUN_1446f470e(&DAT_14cb63b70,L"K2_ActionEnded",1);
  FUN_1446f470e(&DAT_14cb63b80,L"K2_ActionStarted",1);
  FUN_1446f470e(&DAT_14cb63b98,L"K2_CanExecute",1);
  FUN_1446f470e(&DAT_14cb63ba8,L"K2_Prepare",1);
  FUN_1446f470e(&DAT_14cb63bb8,L"K2_Reset",1);
  local_48 = 0;
  local_58 = 0;
  ppuStack_50 = (undefined **)0x0;
  FUN_14282b410(L"/Script/GbxGame",&PTR_FUN_14b220270,1,0);
  if ((local_30 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 143c66134 FUN_143c66134 body=55 status=ok
// SIG undefined FUN_143c66134(void)

void FUN_143c66134(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63d28 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63d28 = FUN_14171c317(FUN_146500334,uVar1,L"EGbxSkillAnimTrickSource");
  }
  return;
}



// FUNCTION 143c6616b FUN_143c6616b body=55 status=ok
// SIG undefined FUN_143c6616b(void)

void FUN_143c6616b(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb63de8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb63de8 = FUN_14171c317(FUN_146500780,uVar1,L"EGbxSkillActionHandlerResult");
  }
  return;
}


