// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140e92088 FUN_140e92088 body=219 status=ok
// SIG undefined FUN_140e92088(void)

uint FUN_140e92088(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  uint extraout_var;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  longlong local_60 [2];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar1 = (longlong *)FUN_140e92164();
  local_68 = *(undefined1 *)(param_2 + 5);
  puVar2 = &DAT_149dfb77a;
  if (*(int *)(param_2 + 1) != 0) {
    puVar2 = (undefined2 *)*param_2;
  }
  FUN_140056680(local_60,puVar2);
  (**(code **)(*param_1 + 0x48))(param_1,&local_50,local_60,param_2 + 3);
  puVar2 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar2 = local_50;
  }
  (**(code **)(*plVar1 + 0x80))(plVar1,puVar2);
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return extraout_var >> 0x1e & 0xfffffffe;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e92164 FUN_140e92164 body=110 status=ok
// SIG undefined FUN_140e92164(void)

undefined8 * FUN_140e92164(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c8c2648) {
    FUN_144b3d300(&DAT_14c8c2648);
    if (DAT_14c8c2648 == -1) {
      FUN_1457bbea4(&DAT_14c8c2640);
      DAT_14c8c2640 = &PTR_FUN_149e40550;
      _Init_thread_footer(&DAT_14c8c2648);
    }
  }
  return &DAT_14c8c2640;
}



// FUNCTION 140e921d2 FUN_140e921d2 body=679 status=ok
// SIG undefined FUN_140e921d2(void)

undefined8 *
FUN_140e921d2(longlong param_1,undefined8 *param_2,undefined8 *param_3,longlong *param_4,
             char param_5)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  int iStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar1 = *(int *)(param_3 + 1);
  lVar6 = (longlong)iVar1;
  if (lVar6 != 0) {
    pvVar2 = (void *)*param_3;
    uVar4 = 0;
    do {
      if (*(short *)((longlong)pvVar2 + uVar4) == 0x3a) {
        if ((int)(~uVar4 >> 1) != 0) {
          if (param_5 == '\0') {
            FUN_1449b8608(param_2,param_3,L".sav");
          }
          else {
            *param_2 = 0;
            *(int *)(param_2 + 1) = iVar1;
            FUN_1446dd670(param_2,lVar6,0);
            memcpy((void *)*param_2,pvVar2,lVar6 * 2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_98);
        }
        break;
      }
      uVar4 = uVar4 + 2;
    } while (lVar6 * 2 != uVar4);
  }
  puVar5 = (undefined8 *)FUN_14047ac8c();
  local_58 = (undefined2 *)0x0;
  iStack_50 = *(int *)(puVar5 + 1);
  lVar6 = (longlong)iStack_50;
  pvVar2 = (void *)*puVar5;
  if (lVar6 == 0) {
    uStack_4c = 0;
  }
  else {
    FUN_1446dd670(&local_58,iStack_50,0);
    memcpy(local_58,pvVar2,lVar6 * 2);
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    puVar8 = local_58;
    if (iStack_50 == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    FUN_140e92480(*(longlong *)(param_1 + 8),&local_68,puVar8);
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    local_58 = (undefined2 *)CONCAT44(uStack_64,local_68);
    iStack_50 = iStack_60;
    uStack_4c = uStack_5c;
  }
  iVar1 = iStack_50;
  puVar8 = local_58;
  if (param_5 == '\0') {
    param_4 = (longlong *)*param_4;
    if (*(int *)(param_3 + 1) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)*param_3;
    }
    if (param_4 == (longlong *)0x0) {
      puVar10 = local_58;
      if (iStack_50 == 0) {
        puVar10 = &DAT_149dfb77a;
      }
      FUN_140002266(param_2,L"%sSaveGames/%s.sav",puVar10,puVar8);
    }
    else {
      (**(code **)(*param_4 + 0x30))(param_4,&local_68);
      puVar10 = &DAT_149dfb77a;
      if (iStack_60 != 0) {
        puVar10 = (undefined2 *)CONCAT44(uStack_64,local_68);
      }
      puVar9 = &DAT_149dfb77a;
      if (iStack_50 != 0) {
        puVar9 = local_58;
      }
      local_78 = puVar8;
      FUN_140002266(param_2,L"%sSaveGames/%s/%s.sav",puVar9,puVar10);
      if (CONCAT44(uStack_64,local_68) != 0) {
        FUN_1400020a8();
      }
    }
  }
  else {
    iVar7 = *(int *)(param_3 + 1) + -1;
    if (*(int *)(param_3 + 1) == 0) {
      iVar7 = 0;
    }
    lVar6 = (longlong)iStack_50;
    iVar3 = iVar7 + 1 + (uint)(lVar6 == 0);
    *param_2 = 0;
    *(int *)(param_2 + 1) = iStack_50;
    if (iVar3 == 0 && iStack_50 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar3 + iStack_50);
      }
      FUN_1446dd670(param_2,iVar3 + iStack_50,0);
      if (iVar1 != 0) {
        memcpy((void *)*param_2,puVar8,lVar6 * 2);
      }
    }
    FUN_1401aebe8(param_2,*param_3,iVar7);
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e92480 FUN_140e92480 body=2054 status=ok
// SIG undefined FUN_140e92480(void)

undefined8 * FUN_140e92480(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  size_t sVar9;
  uint uVar10;
  int iVar11;
  wchar_t *pwVar12;
  wchar_t *pwVar13;
  ushort uVar14;
  int iVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined2 *puVar18;
  longlong lVar19;
  undefined2 *puVar20;
  ulonglong uVar21;
  ushort uVar22;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 local_c0;
  wchar_t *local_b8;
  int iStack_b0;
  undefined4 uStack_ac;
  wchar_t *local_a8;
  ulonglong uStack_a0;
  undefined2 *local_98;
  int local_90;
  wchar_t *local_88;
  undefined8 uStack_80;
  wchar_t *local_78;
  ulonglong uStack_70;
  wchar_t *local_68;
  undefined4 local_60;
  wchar_t *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  FUN_140056680(&local_88,param_3);
  FUN_1401ae5e4();
  if ((*(char *)(param_1 + 0x91) == '\x01') && (*(int *)(param_1 + 0x18) - 2U < 0x7fffffff)) {
    if (1 < *(uint *)(param_1 + 0xc0)) {
      iVar11 = *(int *)(param_1 + 0xa0);
      uVar10 = iVar11 - 1;
      if (iVar11 == 0) {
        uVar10 = 0;
      }
      if ((int)uVar10 < 1) {
LAB_140e925f4:
        FUN_140056680(param_2,param_3);
      }
      else {
        puVar20 = &DAT_149dfb77a;
        if (iVar11 != 0) {
          puVar20 = *(undefined2 **)(param_1 + 0x98);
        }
        uVar16 = (ulonglong)uVar10;
        pwVar12 = L"";
        if ((int)uStack_80 != 0) {
          pwVar12 = local_88;
        }
        lVar19 = 0;
        while( true ) {
          uVar22 = *(ushort *)((longlong)pwVar12 + lVar19);
          uVar17 = (ulonglong)uVar22;
          uVar14 = *(ushort *)((longlong)puVar20 + lVar19);
          if (uVar22 != uVar14) break;
          if (uVar22 == 0) goto LAB_140e92604;
LAB_140e925c3:
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_140e92604;
          lVar19 = lVar19 + 2;
        }
        if ((uVar14 | uVar22) < 0x80) {
          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          uVar21 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar21]) goto LAB_140e925c3;
        }
        if (uVar22 != uVar14) goto LAB_140e925f4;
LAB_140e92604:
        uVar5 = (int)uStack_80 - 1;
        if ((int)uStack_80 == 0) {
          uVar5 = 0;
        }
        if ((int)uVar5 <= (int)uVar10) {
          uVar10 = uVar5;
        }
        uVar16 = (ulonglong)uVar10;
        if ((int)uVar10 < 1) {
          uVar16 = 0;
        }
        FUN_14006620a(&local_78,pwVar12 + uVar16,uVar5 - (int)uVar16);
        FUN_1407ec8fc(param_2,param_1 + 0xb8,&local_78);
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      goto LAB_140e928f0;
    }
    FUN_1401aea18(&local_98,&local_88);
    uVar8 = FUN_140d6afb0();
    FUN_140056680(&local_a8,uVar8);
    FUN_140aa5ef8(&local_78,&local_a8);
    iVar11 = (int)uStack_70;
    pwVar12 = local_78;
    local_78 = (wchar_t *)0x0;
    uStack_70 = 0;
    if (local_a8 != (wchar_t *)0x0) {
      FUN_1400020a8();
    }
    if (*(int *)(param_1 + 0x18) == 0) {
      local_78 = L"";
LAB_140e9265e:
      sVar9 = wcslen(local_78);
      uVar4 = (int)sVar9;
    }
    else {
      local_78 = *(wchar_t **)(param_1 + 0x10);
      if (local_78 != (wchar_t *)0x0) goto LAB_140e9265e;
      uVar4 = 0;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
    local_68 = &DAT_14c764000;
    sVar9 = wcslen(&DAT_14c764000);
    local_60 = (int)sVar9;
    FUN_140bee87a(&local_a8,&local_78,2);
    pwVar2 = local_a8;
    uVar10 = (int)uStack_a0 - 1;
    if ((int)uStack_a0 == 0) {
      uVar10 = 0;
    }
    uVar16 = (ulonglong)uVar10;
    if ((int)uVar10 < 1) {
LAB_140e92731:
      uVar10 = iVar11 - 1;
      if (iVar11 == 0) {
        uVar10 = 0;
      }
      if ((int)uVar10 < 1) {
LAB_140e927ba:
        iVar11 = *(int *)(param_1 + 0x48);
        if (iVar11 == 0) {
          pwVar13 = L"";
LAB_140e929d3:
          sVar9 = wcslen(pwVar13);
          if ((int)(uint)sVar9 < 1) goto LAB_140e927d2;
          uVar16 = (ulonglong)((uint)sVar9 & 0x7fffffff);
          puVar20 = local_98;
          if (local_90 == 0) {
            puVar20 = &DAT_149dfb77a;
          }
          lVar19 = 0;
          while( true ) {
            uVar22 = *(ushort *)((longlong)puVar20 + lVar19);
            uVar17 = (ulonglong)uVar22;
            uVar14 = *(ushort *)((longlong)pwVar13 + lVar19);
            if (uVar22 != uVar14) break;
            if (uVar22 == 0) goto LAB_140e92a51;
LAB_140e92a1c:
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_140e92a51;
            lVar19 = lVar19 + 2;
          }
          if ((uVar14 | uVar22) < 0x80) {
            uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
            uVar21 = (ulonglong)uVar14;
            uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
            if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar21]) goto LAB_140e92a1c;
          }
          if (uVar22 != uVar14) goto LAB_140e927d2;
LAB_140e92a51:
          uVar4 = 0;
          iVar15 = iVar11 + -1;
          if (iVar11 == 0) {
            iVar15 = 0;
          }
          pwVar13 = puVar20 + iVar15;
          if (*(int *)(param_1 + 0x18) == 0) {
            local_78 = L"";
LAB_140e92a82:
            sVar9 = wcslen(local_78);
            uVar4 = (int)sVar9;
          }
          else {
            local_78 = *(wchar_t **)(param_1 + 0x10);
            if (local_78 != (wchar_t *)0x0) goto LAB_140e92a82;
          }
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
          local_68 = pwVar13;
          if (pwVar13 == (wchar_t *)0x0) {
            local_60 = 0;
          }
          else {
            sVar9 = wcslen(pwVar13);
            local_60 = (int)sVar9;
          }
          uVar8 = 2;
          goto LAB_140e929a7;
        }
        pwVar13 = *(wchar_t **)(param_1 + 0x40);
        if (pwVar13 != (wchar_t *)0x0) goto LAB_140e929d3;
LAB_140e927d2:
        local_c0 = 0xffffffff;
        local_c8 = 0;
        uVar5 = FUN_1447ee042(&local_88,&DAT_149e065c6,1,0);
        local_c0 = 0xffffffff;
        local_c8 = 0;
        uVar6 = FUN_1447ee042(&local_88,&DAT_149e01f64,1,0);
        pwVar13 = local_88;
        uVar10 = uVar5;
        if (uVar6 < uVar5) {
          uVar10 = uVar6;
        }
        if ((int)uVar5 < 0) {
          uVar10 = uVar6;
        }
        local_78 = (wchar_t *)0x0;
        lVar19 = (longlong)(int)uStack_80;
        uStack_70 = CONCAT44(uStack_70._4_4_,(int)uStack_80);
        if (lVar19 == 0) {
          uStack_70 = uStack_80 & 0xffffffff;
        }
        else {
          FUN_1446dd670(&local_78,uStack_80 & 0xffffffff,0);
          memcpy(local_78,pwVar13,lVar19 * 2);
        }
        if (uVar10 != 0xffffffff) {
          if ((int)uVar10 < 0) {
            local_a8 = (wchar_t *)0x0;
            uStack_a0 = 0;
          }
          else {
            iVar11 = (int)uStack_80 + -1;
            if ((int)uStack_80 == 0) {
              iVar11 = 0;
            }
            uVar16 = (longlong)iVar11;
            if ((longlong)(ulonglong)uVar10 < (longlong)iVar11) {
              uVar16 = (ulonglong)uVar10;
            }
            uVar17 = 0;
            if (0 < (longlong)uVar16) {
              uVar17 = uVar16;
            }
            pwVar13 = local_88;
            if ((int)uStack_80 == 0) {
              pwVar13 = L"";
            }
            FUN_14006620a(&local_a8,pwVar13,uVar17);
          }
          if (local_78 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_78 = local_a8;
          uStack_70 = uStack_a0;
        }
        cVar3 = FUN_1468182e0(&local_78);
        if (cVar3 == '\0') {
          uVar8 = FUN_1401aee94();
          FUN_140056680(&local_a8,uVar8);
          FUN_1401ae5e4(&local_a8);
          pwVar13 = local_a8;
          iVar11 = (int)uStack_80 + -1;
          if ((int)uStack_80 == 0) {
            iVar11 = 0;
          }
          iVar15 = (int)uStack_a0;
          lVar19 = (longlong)(int)uStack_a0;
          iVar7 = iVar11 + 1 + (uint)(lVar19 == 0);
          local_b8 = (wchar_t *)0x0;
          iStack_b0 = (int)uStack_a0;
          if (iVar7 == 0 && (int)uStack_a0 == 0) {
            uStack_ac = 0;
          }
          else {
            if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_1456afac4(iVar7 + (int)uStack_a0);
            }
            FUN_1446dd670(&local_b8,iVar7 + (int)uStack_a0,0);
            if (iVar15 != 0) {
              memcpy(local_b8,pwVar13,lVar19 * 2);
            }
          }
          FUN_1401aebe8(&local_b8,local_88,iVar11);
          if (local_88 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_88 = local_b8;
          uStack_80 = CONCAT44(uStack_ac,iStack_b0);
          puVar18 = &DAT_149dfb77a;
          puVar20 = &DAT_149dfb77a;
          if (*(int *)(param_1 + 0x18) != 0) {
            puVar20 = *(undefined2 **)(param_1 + 0x10);
          }
          if (*(int *)(param_1 + 0x38) != 0) {
            puVar18 = *(undefined2 **)(param_1 + 0x30);
          }
          local_c8 = 1;
          FUN_140807d8e(&local_88,&local_b8,puVar18,puVar20);
          if (local_88 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          local_88 = local_b8;
          uStack_80 = CONCAT44(uStack_ac,iStack_b0);
          if (local_a8 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
        }
        if (local_78 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
      }
      else {
        pwVar13 = pwVar12;
        if (iVar11 == 0) {
          pwVar13 = L"";
        }
        puVar20 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar20 = local_98;
        }
        lVar19 = 0;
        uVar16 = (ulonglong)uVar10;
        while( true ) {
          uVar22 = *(ushort *)((longlong)puVar20 + lVar19);
          uVar17 = (ulonglong)uVar22;
          uVar14 = *(ushort *)((longlong)pwVar13 + lVar19);
          if (uVar22 != uVar14) break;
          if (uVar22 == 0) goto LAB_140e92930;
LAB_140e92781:
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_140e92930;
          lVar19 = lVar19 + 2;
        }
        if ((uVar14 | uVar22) < 0x80) {
          uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
          uVar21 = (ulonglong)uVar14;
          uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
          if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar21]) goto LAB_140e92781;
        }
        if (uVar22 != uVar14) goto LAB_140e927ba;
LAB_140e92930:
        pwVar13 = puVar20 + uVar10;
        if (*(int *)(param_1 + 0x18) == 0) {
          local_78 = L"";
LAB_140e92958:
          sVar9 = wcslen(local_78);
          uVar4 = (int)sVar9;
        }
        else {
          local_78 = *(wchar_t **)(param_1 + 0x10);
          if (local_78 != (wchar_t *)0x0) goto LAB_140e92958;
          uVar4 = 0;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,uVar4);
        local_68 = &DAT_14c764000;
        sVar9 = wcslen(&DAT_14c764000);
        local_60 = (int)sVar9;
        local_58 = pwVar13;
        if (pwVar13 == (wchar_t *)0x0) {
          local_50 = 0;
        }
        else {
          sVar9 = wcslen(pwVar13);
          local_50 = (int)sVar9;
        }
        uVar8 = 3;
LAB_140e929a7:
        FUN_140bee87a(&local_a8,&local_78,uVar8);
        if (local_88 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        local_88 = local_a8;
        uStack_80 = uStack_a0;
      }
      bVar1 = false;
    }
    else {
      pwVar13 = local_a8;
      if ((int)uStack_a0 == 0) {
        pwVar13 = L"";
      }
      puVar20 = &DAT_149dfb77a;
      if (local_90 != 0) {
        puVar20 = local_98;
      }
      lVar19 = 0;
      while( true ) {
        uVar22 = *(ushort *)((longlong)puVar20 + lVar19);
        uVar17 = (ulonglong)uVar22;
        uVar14 = *(ushort *)((longlong)pwVar13 + lVar19);
        if (uVar22 != uVar14) break;
        if (uVar22 == 0) goto LAB_140e9287d;
LAB_140e926f8:
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_140e9287d;
        lVar19 = lVar19 + 2;
      }
      if ((uVar14 | uVar22) < 0x80) {
        uVar22 = (ushort)(byte)(&DAT_149e05da0)[uVar17];
        uVar21 = (ulonglong)uVar14;
        uVar14 = (ushort)(byte)(&DAT_149e05da0)[uVar21];
        if ((&DAT_149e05da0)[uVar17] == (&DAT_149e05da0)[uVar21]) goto LAB_140e926f8;
      }
      if (uVar22 != uVar14) goto LAB_140e92731;
LAB_140e9287d:
      *param_2 = local_88;
      local_88 = (wchar_t *)0x0;
      *(int *)(param_2 + 1) = (int)uStack_80;
      *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
      uStack_80 = 0;
      bVar1 = true;
    }
    if (pwVar2 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar2);
    }
    if (pwVar12 != (wchar_t *)0x0) {
      FUN_1400020a8(pwVar12);
    }
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar1) goto LAB_140e928f0;
  }
  *param_2 = local_88;
  local_88 = (wchar_t *)0x0;
  *(int *)(param_2 + 1) = (int)uStack_80;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_80._4_4_;
  uStack_80 = 0;
LAB_140e928f0:
  if (local_88 != (wchar_t *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e92c96 FUN_140e92c96 body=71 status=ok
// SIG undefined FUN_140e92c96(void)

undefined8 * FUN_140e92c96(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3a2b40;
  FUN_140e92cdd(param_1[2],*(undefined4 *)(param_1 + 3));
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e92cdd FUN_140e92cdd body=73 status=ok
// SIG undefined FUN_140e92cdd(void)

void FUN_140e92cdd(longlong param_1,int param_2)

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



// FUNCTION 140e92d26 FUN_140e92d26 body=3 status=ok
// SIG undefined FUN_140e92d26(void)

undefined8 FUN_140e92d26(void)

{
  return 0;
}



// FUNCTION 140e92d2a FUN_140e92d2a body=220 status=ok
// SIG undefined FUN_140e92d2a(void)

void FUN_140e92d2a(void)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  uVar1 = DAT_14cb84f20;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb84db8 == '\x01') {
    local_38 = 0;
    uStack_30 = 0;
    FUN_140e94106(DAT_14cb84f20,&local_38);
    lVar4 = local_38;
    lVar3 = (longlong)(int)uStack_30;
    if (lVar3 != 0) {
      lVar5 = 0;
      do {
        if (*(longlong *)(lVar4 + lVar5) != 0) {
          FUN_140e92e08(*(longlong *)(lVar4 + lVar5),0,uVar1);
        }
        lVar2 = local_38;
        lVar5 = lVar5 + 8;
      } while (lVar3 * 8 != lVar5);
      lVar4 = (longlong)(int)uStack_30;
      if (lVar4 != 0) {
        lVar3 = 0;
        do {
          if (*(longlong *)(lVar2 + lVar3) != 0) {
            FUN_140e92e08(*(longlong *)(lVar2 + lVar3),1,uVar1);
          }
          lVar3 = lVar3 + 8;
        } while (lVar4 * 8 != lVar3);
      }
    }
    DAT_14cb84db8 = '\0';
    if (local_38 != 0) {
      FUN_1400020a8(local_38);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e92e08 FUN_140e92e08 body=1819 status=ok
// SIG undefined FUN_140e92e08(void)

void FUN_140e92e08(longlong param_1,char param_2,longlong param_3)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  uint uVar7;
  void *_Dst;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined4 *puVar12;
  int *piVar13;
  longlong lVar14;
  longlong lVar15;
  undefined1 auStack_128 [40];
  longlong local_100;
  longlong *local_f8;
  longlong local_f0;
  longlong local_e8;
  longlong *local_e0;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong local_c0;
  longlong local_b8;
  undefined4 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  longlong *local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong lStack_80;
  undefined4 local_78;
  longlong *local_70;
  undefined8 uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_98 = (longlong *)0x0;
  uStack_90 = 0;
  FUN_140e93584(0,&local_98);
  if ((longlong)(int)uStack_90 != 0) {
    if (param_2 == '\x01') {
      plVar10 = local_98;
      do {
        lVar15 = *(longlong *)(*plVar10 + 0x1b8);
        if (lVar15 != 0) {
          lVar2 = *(longlong *)(lVar15 + 0x58);
          if ((lVar2 != 0) && ((longlong)*(int *)(lVar2 + 0x90) != 0)) {
            lVar14 = 0;
            do {
              piVar13 = *(int **)(*(longlong *)(lVar2 + 0x88) + lVar14);
              if (*piVar13 == *(int *)(lVar15 + 0x28)) goto LAB_140e92ece;
              lVar14 = lVar14 + 8;
            } while ((longlong)*(int *)(lVar2 + 0x90) * 8 != lVar14);
          }
          piVar13 = (int *)0x0;
LAB_140e92ece:
          *(int **)(lVar15 + 0x80) = piVar13;
        }
        plVar10 = plVar10 + 1;
      } while (plVar10 != local_98 + (int)uStack_90);
    }
    else if (param_3 != 0) {
      local_f0 = param_3;
      FUN_140594ada(param_1);
      local_100 = (longlong)(int)uStack_90;
      if (local_100 != 0) {
        local_e0 = local_98;
        local_f8 = (longlong *)(param_1 + 0x88);
        local_100 = local_100 << 3;
        lVar15 = 0;
        local_e8 = param_1;
        do {
          lVar2 = *(longlong *)((longlong)local_e0 + lVar15);
          if (*(longlong *)(lVar2 + 0x1b0) != 0) {
            local_c8 = lVar15;
            _Dst = (void *)FUN_140e93524(&DAT_14cb84dc0);
            local_d8 = (longlong)_Dst + 0x60;
            memset(_Dst,0,0xf8);
            FUN_140daf6ae();
            *(undefined **)((longlong)_Dst + 0x68) = &DAT_14cb84be8;
            *(undefined8 *)((longlong)_Dst + 0x70) = 0;
            *(undefined8 *)((longlong)_Dst + 0x78) = 0;
            *(undefined ***)((longlong)_Dst + 0x60) = &PTR_FUN_14b413550;
            *(undefined8 *)((longlong)_Dst + 0x80) = 0;
            uVar5 = DAT_14c8464e8._4_4_;
            uVar4 = (undefined4)DAT_14c8464e8;
            uVar3 = DAT_14c8464e0._4_4_;
            *(undefined4 *)((longlong)_Dst + 0x88) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)((longlong)_Dst + 0x8c) = uVar3;
            *(undefined4 *)((longlong)_Dst + 0x90) = uVar4;
            *(undefined4 *)((longlong)_Dst + 0x94) = uVar5;
            *(undefined8 *)((longlong)_Dst + 0x98) = DAT_14c8464f0;
            *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
            *(undefined8 *)((longlong)_Dst + 0xa8) = 0;
            *(undefined8 *)((longlong)_Dst + 0xac) = 0;
            *(undefined8 *)((longlong)_Dst + 0xb4) = 0;
            *(undefined8 *)((longlong)_Dst + 0xc0) = 0;
            *(undefined8 *)((longlong)_Dst + 200) = 0;
            *(undefined2 *)((longlong)_Dst + 0xd0) = 0;
            FUN_140daf6ae();
            lVar14 = local_d8;
            *(undefined **)((longlong)_Dst + 0xe0) = &DAT_14cb84be8;
            *(undefined8 *)((longlong)_Dst + 0xe8) = 0;
            *(undefined8 *)((longlong)_Dst + 0xf0) = 0;
            *(undefined ***)((longlong)_Dst + 0xd8) = &PTR_FUN_14b413550;
            *(void **)(lVar2 + 0x1b8) = _Dst;
            uVar8 = FUN_1447715ec((longlong)_Dst + 0xa8,&DAT_14c9485f0);
            local_d0 = (longlong)_Dst + 0x28;
            uVar8 = FUN_1447715ec((longlong)_Dst + 0x28,uVar8);
            FUN_1447715ec(_Dst,uVar8);
            *(undefined8 *)((longlong)_Dst + 0x80) = 0;
            *(undefined8 *)((longlong)_Dst + 0xa0) = 0;
            *(undefined8 *)((longlong)_Dst + 0x50) = 0;
            *(undefined8 *)((longlong)_Dst + 0x58) = 0;
            (**(code **)(*(longlong *)((longlong)_Dst + 0x60) + 0x20))
                      (lVar14,*(undefined8 *)((longlong)_Dst + 0x68));
            local_c0 = (longlong)_Dst + 0xd8;
            (**(code **)(*(longlong *)((longlong)_Dst + 0xd8) + 0x20))
                      ((longlong)_Dst + 0xd8,*(undefined8 *)((longlong)_Dst + 0xe0));
            *(undefined1 *)((longlong)_Dst + 0xd0) = 0;
            uVar5 = DAT_14c8464e8._4_4_;
            uVar4 = (undefined4)DAT_14c8464e8;
            uVar3 = DAT_14c8464e0._4_4_;
            *(undefined4 *)((longlong)_Dst + 0x88) = (undefined4)DAT_14c8464e0;
            *(undefined4 *)((longlong)_Dst + 0x8c) = uVar3;
            *(undefined4 *)((longlong)_Dst + 0x90) = uVar4;
            *(undefined4 *)((longlong)_Dst + 0x94) = uVar5;
            *(undefined8 *)((longlong)_Dst + 0x98) = DAT_14c8464f0;
            *(undefined1 *)((longlong)_Dst + 0xd1) = 0;
            *(undefined8 *)((longlong)_Dst + 0x50) = *(undefined8 *)(lVar2 + 0x1b0);
            if (lVar2 == 0) {
LAB_140e934e9:
              puVar12 = *(undefined4 **)(lVar2 + 8);
              if (puVar12 == (undefined4 *)0x0) {
                puVar12 = &DAT_14c9485f0;
              }
            }
            else {
              plVar10 = (longlong *)(lVar2 + 8);
              if (*(char *)(lVar2 + 0x10) != '\0') {
                if (*(char *)(lVar2 + 0x10) != '\x02') goto LAB_140e934e9;
                plVar10 = (longlong *)(*plVar10 + 0x30);
              }
              puVar12 = (undefined4 *)*plVar10;
              if (puVar12 == (undefined4 *)0x0) goto LAB_140e934e9;
            }
            FUN_1447715ec(_Dst,puVar12);
            *(undefined8 *)((longlong)_Dst + 0x98) = *(undefined8 *)(lVar2 + 0x78);
            uVar3 = *(undefined4 *)(lVar2 + 0x6c);
            uVar4 = *(undefined4 *)(lVar2 + 0x70);
            uVar5 = *(undefined4 *)(lVar2 + 0x74);
            *(undefined4 *)((longlong)_Dst + 0x88) = *(undefined4 *)(lVar2 + 0x68);
            *(undefined4 *)((longlong)_Dst + 0x8c) = uVar3;
            *(undefined4 *)((longlong)_Dst + 0x90) = uVar4;
            *(undefined4 *)((longlong)_Dst + 0x94) = uVar5;
            lVar9 = *(longlong *)(lVar2 + 0x20);
            if (lVar9 == 0) {
              uVar8 = FUN_1457bc4fa();
              lVar9 = FUN_14477b664(uVar8);
              *(longlong *)(lVar2 + 0x20) = lVar9;
            }
            lVar15 = local_c8;
            param_1 = local_e8;
            lVar11 = *(longlong *)(lVar2 + 0x28);
            if (lVar11 == 0) {
              if (lVar9 == 0) {
                lVar11 = 0;
              }
              else {
                lVar11 = 0;
                if (*(longlong *)(lVar2 + 0x18) != 0) {
                  plVar10 = *(longlong **)(lVar9 + 0xb8);
                  if ((plVar10 == (longlong *)0x0) ||
                     (cVar6 = (**(code **)(*plVar10 + 0x108))(), cVar6 == '\0')) {
                    lVar11 = 0;
                  }
                  else {
                    uVar8 = (**(code **)(*plVar10 + 0x110))(plVar10);
                    lVar11 = FUN_144aff482(uVar8,(longlong *)(lVar2 + 0x18));
                  }
                  *(longlong *)(lVar2 + 0x28) = lVar11;
                }
              }
            }
            *(longlong *)((longlong)_Dst + 0xa0) = lVar11;
            local_a8 = *(longlong *)(lVar2 + 0xa8);
            FUN_1446dcdd4(&local_88,&local_a8);
            FUN_1404e49fa(local_d0,&local_88);
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            lVar9 = FUN_14064a6f8(lVar2 + 0x130);
            if (lVar9 == 0) {
              local_88 = 0;
              lStack_80 = 0;
              local_78 = 0;
              local_70 = (longlong *)0x0;
              uStack_68 = 0;
            }
            else {
              puVar12 = *(undefined4 **)(lVar9 + 8);
              if (puVar12 == (undefined4 *)0x0) {
                puVar12 = &DAT_14c9485f0;
              }
              FUN_1447a97f4(&local_88,puVar12);
            }
            FUN_1447715ec((longlong)_Dst + 0xa8,&local_88);
            if (local_70 != (longlong *)0x0) {
              FUN_1400020a8();
            }
            (**(code **)(*(longlong *)((longlong)_Dst + 0x60) + 0x20))(lVar14,0);
            *(undefined8 *)((longlong)_Dst + 0x68) = *(undefined8 *)(lVar2 + 0x118);
            FUN_1406022fe((longlong)_Dst + 0x70,lVar2 + 0x120);
            (**(code **)(*(longlong *)((longlong)_Dst + 0xd8) + 0x20))(local_c0,0);
            *(undefined8 *)((longlong)_Dst + 0xe0) = *(undefined8 *)(lVar2 + 0x150);
            FUN_1406022fe((longlong)_Dst + 0xe8);
            if (*(longlong *)(lVar2 + 0xa8) != 0) {
              local_a8 = *(longlong *)(lVar2 + 0xa8);
              FUN_1446dcdd4(&local_88,&local_a8);
              if ((((int)local_88 == 0) || (local_88._4_4_ < 1)) || ((int)local_88 == DAT_14c948000)
                 ) {
                local_a0 = DAT_14c948620;
                local_a8 = DAT_14c948618;
              }
              else {
                plVar10 = &lStack_80;
                if (0 < uStack_68._4_4_) {
                  plVar10 = local_70;
                }
                if (local_88._4_4_ != 1) {
                  plVar10 = local_70;
                }
                local_a8 = *plVar10;
                local_a0 = (undefined4)plVar10[1];
              }
              if (local_70 != (longlong *)0x0) {
                FUN_1400020a8();
              }
              local_b8 = local_a8;
              local_b0 = local_a0;
              FUN_1448075d0(&local_88,&local_b8);
              uVar8 = FUN_140dd1368(local_f0,&local_88,0);
              *(undefined8 *)((longlong)_Dst + 0x58) = uVar8;
              if (local_70 != (longlong *)0x0) {
                FUN_1400020a8();
              }
            }
            iVar1 = *(int *)(param_1 + 0x90);
            uVar7 = iVar1 + 1;
            *(uint *)(param_1 + 0x90) = uVar7;
            if (*(uint *)(param_1 + 0x94) < uVar7) {
              FUN_140e93e42(local_f8);
            }
            *(void **)(*local_f8 + (longlong)iVar1 * 8) = _Dst;
            if ((*(longlong *)((longlong)_Dst + 0xa0) != 0) &&
               (*(char *)(*(longlong *)((longlong)_Dst + 0xa0) + 0x33) == '\x01')) {
              iVar1 = *(int *)(param_1 + 0xa0);
              uVar7 = iVar1 + 1;
              *(uint *)(param_1 + 0xa0) = uVar7;
              if (*(uint *)(param_1 + 0xa4) < uVar7) {
                FUN_140e93fa4((longlong *)(param_1 + 0x98));
              }
              *(void **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar1 * 8) = _Dst;
            }
          }
          lVar15 = lVar15 + 8;
        } while (local_100 != lVar15);
      }
      if (*(int *)(param_1 + 0x94) != *(int *)(param_1 + 0x90)) {
        FUN_140594d18(param_1 + 0x88);
      }
      if (*(int *)(param_1 + 0xa4) != *(int *)(param_1 + 0xa0)) {
        FUN_140594e4c(param_1 + 0x98);
      }
    }
  }
  if (local_98 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e93524 FUN_140e93524 body=96 status=ok
// SIG undefined FUN_140e93524(void)

void FUN_140e93524(longlong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar2 = (longlong *)*param_1;
  if (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)FUN_140595974(0x1f00,0);
    lVar4 = 0x1f;
    plVar1 = plVar2;
    do {
      plVar3 = plVar1 + 0x1f;
      *plVar1 = (longlong)plVar3;
      lVar4 = lVar4 + -1;
      plVar1 = plVar3;
    } while (lVar4 != 0);
    *plVar3 = *param_1;
    *param_1 = (longlong)plVar2;
    *(int *)(param_1 + 1) = (int)param_1[1] + 0x20;
  }
  *param_1 = *plVar2;
  *(int *)((longlong)param_1 + 0xc) = *(int *)((longlong)param_1 + 0xc) + 1;
  return;
}



// FUNCTION 140e93584 FUN_140e93584 body=248 status=ok
// SIG undefined FUN_140e93584(void)

void FUN_140e93584(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  int *piVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  int local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 *local_30;
  undefined1 *local_28;
  code **local_20;
  ulonglong local_18;
  
  lVar2 = DAT_14cb84f20;
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cb84f20 == 0) goto LAB_140e93646;
  piVar3 = &DAT_14c9485f0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    piVar3 = *(int **)(param_1 + 8);
  }
  if (((*piVar3 == 0) || (iVar1 = piVar3[1], iVar1 == 0)) || (*piVar3 == DAT_14c948000)) {
LAB_140e9366a:
    local_48 = DAT_14c948620;
    local_50 = DAT_14c948618;
  }
  else {
    if ((iVar1 < 2) && (piVar3[9] < 1)) {
      piVar3 = piVar3 + 2;
    }
    else {
      piVar3 = *(int **)(piVar3 + 6);
    }
    if (iVar1 < 1) goto LAB_140e9366a;
    local_48 = piVar3[2];
    local_50 = *(undefined8 *)piVar3;
  }
  local_20 = &local_38;
  local_38 = FUN_143dc9524;
  local_30 = &local_40;
  local_28 = &LAB_143dc9516;
  local_40 = param_2;
  uVar4 = FUN_14050b070();
  FUN_140e9367e(lVar2,&local_50,uVar4,&local_28);
LAB_140e93646:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9367e FUN_140e9367e body=1988 status=ok
// SIG undefined FUN_140e9367e(void)

void FUN_140e9367e(longlong *param_1,int *param_2,undefined8 param_3,undefined8 *param_4)

{
  ulonglong uVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  uint uVar19;
  uint uVar20;
  ulonglong uVar21;
  int *piVar22;
  
  if (*param_2 != 0) {
    cVar3 = (**(code **)(*param_1 + 0x300))();
    if (cVar3 == '\0') {
      iVar2 = (int)param_1[0x62];
      if (iVar2 == 0) {
        uVar16 = 1;
        uVar14 = 0;
        iVar12 = 0;
        iVar8 = 0;
      }
      else {
        puVar7 = (uint *)param_1[0x61];
        if ((uint *)param_1[0x61] == (uint *)0x0) {
          puVar7 = (uint *)(param_1 + 0x5f);
        }
        uVar19 = *puVar7;
        if (uVar19 == 0) {
          iVar8 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar8 = iVar2 + -1;
          }
          uVar14 = 0;
          uVar16 = (ulonglong)(uint)(iVar8 >> 5);
          if (iVar8 >> 5 < 1) {
            uVar16 = uVar14;
          }
          iVar12 = 0;
          do {
            if (uVar16 == uVar14) {
              return;
            }
            iVar12 = iVar12 + 0x20;
            uVar19 = puVar7[uVar14 + 1];
            uVar14 = uVar14 + 1;
          } while (uVar19 == 0);
        }
        else {
          uVar14 = 0;
          iVar12 = 0;
        }
        uVar16 = (ulonglong)(-uVar19 & uVar19);
        uVar11 = uVar16 * 2 + 1;
        lVar17 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
          }
        }
        iVar8 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
        if (iVar2 <= iVar8) {
          iVar8 = iVar2;
        }
      }
      if (iVar8 != iVar2) {
        uVar19 = 0xffffffff;
        iVar4 = iVar2;
        do {
          lVar17 = *(longlong *)(param_1[0x5d] + 0x10 + (longlong)iVar8 * 0x20);
          if (lVar17 != 0) {
            piVar22 = (int *)(param_1[0x5d] + (longlong)iVar8 * 0x20);
            if (((*param_2 == DAT_14cb852b8) && (param_2[2] == DAT_14cb852c0)) ||
               ((*piVar22 == *param_2 && (piVar22[2] == param_2[2])))) {
              iVar8 = *(int *)(lVar17 + 0x98);
              if (iVar8 == 0) {
                uVar21 = 1;
                uVar11 = 0;
                iVar13 = 0;
                iVar9 = 0;
              }
              else {
                puVar7 = *(uint **)(lVar17 + 0x90);
                if (*(uint **)(lVar17 + 0x90) == (uint *)0x0) {
                  puVar7 = (uint *)(lVar17 + 0x80);
                }
                uVar20 = *puVar7;
                if (uVar20 == 0) {
                  iVar9 = iVar8 + 0x1e;
                  if (-1 < iVar8 + -1) {
                    iVar9 = iVar8 + -1;
                  }
                  uVar11 = 0;
                  uVar21 = (ulonglong)(uint)(iVar9 >> 5);
                  if (iVar9 >> 5 < 1) {
                    uVar21 = uVar11;
                  }
                  iVar13 = 0;
                  do {
                    if (uVar21 == uVar11) goto LAB_140e93a14;
                    iVar13 = iVar13 + 0x20;
                    uVar20 = puVar7[uVar11 + 1];
                    uVar11 = uVar11 + 1;
                  } while (uVar20 == 0);
                }
                else {
                  uVar11 = 0;
                  iVar13 = 0;
                }
                uVar21 = (ulonglong)(-uVar20 & uVar20);
                uVar1 = uVar21 * 2 + 1;
                lVar18 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                  }
                }
                iVar9 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                if (iVar8 <= iVar9) {
                  iVar9 = iVar8;
                }
              }
              if (iVar9 != iVar8) {
                uVar20 = 0xffffffff;
                do {
                  lVar18 = *(longlong *)
                            (*(longlong *)(lVar17 + 0x70) + 0x10 + (longlong)iVar9 * 0x20);
                  if ((lVar18 != 0) && (lVar18 = FUN_14059517c(param_1,lVar18,param_3), lVar18 != 0)
                     ) {
                    (*(code *)*param_4)(param_4[1],piVar22,lVar18);
                  }
                  uVar20 = uVar20 & ~(uint)uVar21;
                  puVar7 = *(uint **)(lVar17 + 0x90);
                  if (*(uint **)(lVar17 + 0x90) == (uint *)0x0) {
                    puVar7 = (uint *)(lVar17 + 0x80);
                  }
                  iVar4 = *(int *)(lVar17 + 0x98);
                  iVar9 = (int)uVar11;
                  lVar18 = (longlong)iVar9;
                  uVar10 = puVar7[lVar18] & uVar20;
                  if (uVar10 == 0) {
                    iVar6 = iVar4 + 0x1e;
                    if (-1 < iVar4 + -1) {
                      iVar6 = iVar4 + -1;
                    }
                    iVar6 = iVar6 >> 5;
                    iVar13 = iVar13 + 0x20;
                    iVar5 = iVar6;
                    if (iVar6 < iVar9) {
                      iVar5 = iVar9;
                    }
                    if (iVar9 < iVar6) {
                      lVar15 = 0;
                      do {
                        uVar10 = puVar7[lVar18 + lVar15 + 1];
                        if (uVar10 != 0) {
                          uVar11 = (ulonglong)(iVar9 + (int)lVar15 + 1);
                          uVar20 = 0xffffffff;
                          goto LAB_140e939c9;
                        }
                        iVar13 = iVar13 + 0x20;
                        lVar15 = lVar15 + 1;
                      } while (iVar5 - lVar18 != lVar15);
                      uVar20 = 0xffffffff;
                      iVar9 = iVar5;
                    }
                    uVar11 = (ulonglong)(iVar9 + 1);
                    iVar9 = iVar4;
                  }
                  else {
LAB_140e939c9:
                    uVar21 = (ulonglong)(-uVar10 & uVar10);
                    uVar1 = uVar21 * 2 + 1;
                    lVar18 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar18 == 0; lVar18 = lVar18 + -1) {
                      }
                    }
                    iVar9 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
                    if (iVar4 <= iVar9) {
                      iVar9 = iVar4;
                    }
                  }
                } while (iVar9 != iVar8);
                iVar4 = (int)param_1[0x62];
              }
            }
          }
LAB_140e93a14:
          uVar19 = uVar19 & ~(uint)uVar16;
          puVar7 = (uint *)param_1[0x61];
          if ((uint *)param_1[0x61] == (uint *)0x0) {
            puVar7 = (uint *)(param_1 + 0x5f);
          }
          iVar8 = (int)uVar14;
          lVar17 = (longlong)iVar8;
          uVar20 = puVar7[lVar17] & uVar19;
          if (uVar20 == 0) {
            iVar9 = iVar4 + 0x1e;
            if (-1 < iVar4 + -1) {
              iVar9 = iVar4 + -1;
            }
            iVar9 = iVar9 >> 5;
            iVar12 = iVar12 + 0x20;
            iVar13 = iVar9;
            if (iVar9 < iVar8) {
              iVar13 = iVar8;
            }
            if (iVar8 < iVar9) {
              lVar18 = 0;
              do {
                uVar20 = puVar7[lVar17 + lVar18 + 1];
                if (uVar20 != 0) {
                  uVar14 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                  uVar19 = 0xffffffff;
                  goto LAB_140e93aa8;
                }
                iVar12 = iVar12 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar13 - lVar17 != lVar18);
              uVar19 = 0xffffffff;
              iVar8 = iVar13;
            }
            uVar14 = (ulonglong)(iVar8 + 1);
            iVar8 = iVar4;
          }
          else {
LAB_140e93aa8:
            uVar16 = (ulonglong)(-uVar20 & uVar20);
            uVar11 = uVar16 * 2 + 1;
            lVar17 = 0x3f;
            if (uVar11 != 0) {
              for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
              }
            }
            iVar8 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
            if (iVar4 <= iVar8) {
              iVar8 = iVar4;
            }
          }
        } while (iVar8 != iVar2);
      }
    }
    else {
      cVar3 = FUN_14162bdf0(param_1,param_3);
      if (cVar3 != -1) {
        iVar2 = (int)param_1[0x44];
        if (iVar2 == 0) {
          uVar16 = 1;
          iVar12 = 0;
          uVar14 = 0;
          iVar8 = 0;
        }
        else {
          puVar7 = (uint *)param_1[0x43];
          if ((uint *)param_1[0x43] == (uint *)0x0) {
            puVar7 = (uint *)(param_1 + 0x41);
          }
          uVar19 = *puVar7;
          if (uVar19 == 0) {
            iVar8 = iVar2 + 0x1e;
            if (-1 < iVar2 + -1) {
              iVar8 = iVar2 + -1;
            }
            uVar14 = 0;
            uVar16 = (ulonglong)(uint)(iVar8 >> 5);
            if (iVar8 >> 5 < 1) {
              uVar16 = uVar14;
            }
            iVar12 = 0;
            do {
              if (uVar16 == uVar14) {
                return;
              }
              iVar12 = iVar12 + 0x20;
              uVar19 = puVar7[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar19 == 0);
          }
          else {
            iVar12 = 0;
            uVar14 = 0;
          }
          uVar16 = (ulonglong)(-uVar19 & uVar19);
          uVar11 = uVar16 * 2 + 1;
          lVar17 = 0x3f;
          if (uVar11 != 0) {
            for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
            }
          }
          iVar8 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
          if (iVar2 <= iVar8) {
            iVar8 = iVar2;
          }
        }
        if (iVar8 != iVar2) {
          uVar19 = 0xffffffff;
          iVar4 = iVar2;
          do {
            piVar22 = (int *)((longlong)iVar8 * 0x70 + param_1[0x3f]);
            if (((*param_2 == DAT_14cb852b8) && (param_2[2] == DAT_14cb852c0)) ||
               ((*piVar22 == *param_2 && (piVar22[2] == param_2[2])))) {
              iVar8 = piVar22[0x10];
              if (iVar8 == 0) {
                uVar11 = 1;
                uVar21 = 0;
                iVar13 = 0;
                iVar9 = 0;
              }
              else {
                puVar7 = *(uint **)(piVar22 + 0xe);
                if (*(uint **)(piVar22 + 0xe) == (uint *)0x0) {
                  puVar7 = (uint *)(piVar22 + 10);
                }
                uVar20 = *puVar7;
                if (uVar20 == 0) {
                  iVar9 = iVar8 + 0x1e;
                  if (-1 < iVar8 + -1) {
                    iVar9 = iVar8 + -1;
                  }
                  uVar21 = 0;
                  uVar11 = (ulonglong)(uint)(iVar9 >> 5);
                  if (iVar9 >> 5 < 1) {
                    uVar11 = uVar21;
                  }
                  iVar13 = 0;
                  do {
                    if (uVar11 == uVar21) goto LAB_140e93d4a;
                    iVar13 = iVar13 + 0x20;
                    uVar20 = puVar7[uVar21 + 1];
                    uVar21 = uVar21 + 1;
                  } while (uVar20 == 0);
                }
                else {
                  uVar21 = 0;
                  iVar13 = 0;
                }
                uVar11 = (ulonglong)(-uVar20 & uVar20);
                uVar1 = uVar11 * 2 + 1;
                lVar17 = 0x3f;
                if (uVar1 != 0) {
                  for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                  }
                }
                iVar9 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                if (iVar8 <= iVar9) {
                  iVar9 = iVar8;
                }
              }
              if (iVar9 != iVar8) {
                uVar20 = 0xffffffff;
                do {
                  lVar17 = *(longlong *)(piVar22 + 6);
                  lVar18 = *(longlong *)(lVar17 + 0x10 + (longlong)iVar9 * 0x20);
                  if ((lVar18 != 0) && (cVar3 = FUN_1448093f4(lVar18,param_3), cVar3 != '\0')) {
                    (*(code *)*param_4)(param_4[1],piVar22,
                                        *(undefined8 *)((longlong)iVar9 * 0x20 + 0x10 + lVar17));
                  }
                  uVar20 = uVar20 & ~(uint)uVar11;
                  puVar7 = *(uint **)(piVar22 + 0xe);
                  if (*(uint **)(piVar22 + 0xe) == (uint *)0x0) {
                    puVar7 = (uint *)(piVar22 + 10);
                  }
                  iVar4 = piVar22[0x10];
                  iVar9 = (int)uVar21;
                  lVar17 = (longlong)iVar9;
                  uVar10 = puVar7[lVar17] & uVar20;
                  if (uVar10 == 0) {
                    iVar6 = iVar4 + 0x1e;
                    if (-1 < iVar4 + -1) {
                      iVar6 = iVar4 + -1;
                    }
                    iVar6 = iVar6 >> 5;
                    iVar13 = iVar13 + 0x20;
                    iVar5 = iVar6;
                    if (iVar6 < iVar9) {
                      iVar5 = iVar9;
                    }
                    if (iVar9 < iVar6) {
                      lVar18 = 0;
                      do {
                        uVar10 = puVar7[lVar17 + lVar18 + 1];
                        if (uVar10 != 0) {
                          uVar21 = (ulonglong)(iVar9 + (int)lVar18 + 1);
                          uVar20 = 0xffffffff;
                          goto LAB_140e93cf1;
                        }
                        iVar13 = iVar13 + 0x20;
                        lVar18 = lVar18 + 1;
                      } while (iVar5 - lVar17 != lVar18);
                      uVar20 = 0xffffffff;
                      iVar9 = iVar5;
                    }
                    uVar21 = (ulonglong)(iVar9 + 1);
                    iVar9 = iVar4;
                  }
                  else {
LAB_140e93cf1:
                    uVar11 = (ulonglong)(-uVar10 & uVar10);
                    uVar1 = uVar11 * 2 + 1;
                    lVar17 = 0x3f;
                    if (uVar1 != 0) {
                      for (; uVar1 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                      }
                    }
                    iVar9 = (iVar13 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
                    if (iVar4 <= iVar9) {
                      iVar9 = iVar4;
                    }
                  }
                } while (iVar9 != iVar8);
                iVar4 = (int)param_1[0x44];
              }
            }
LAB_140e93d4a:
            uVar19 = uVar19 & ~(uint)uVar16;
            puVar7 = (uint *)param_1[0x43];
            if ((uint *)param_1[0x43] == (uint *)0x0) {
              puVar7 = (uint *)(param_1 + 0x41);
            }
            iVar8 = (int)uVar14;
            lVar17 = (longlong)iVar8;
            uVar20 = puVar7[lVar17] & uVar19;
            if (uVar20 == 0) {
              iVar9 = iVar4 + 0x1e;
              if (-1 < iVar4 + -1) {
                iVar9 = iVar4 + -1;
              }
              iVar9 = iVar9 >> 5;
              iVar12 = iVar12 + 0x20;
              iVar13 = iVar9;
              if (iVar9 < iVar8) {
                iVar13 = iVar8;
              }
              if (iVar8 < iVar9) {
                lVar18 = 0;
                do {
                  uVar20 = puVar7[lVar17 + lVar18 + 1];
                  if (uVar20 != 0) {
                    uVar14 = (ulonglong)(iVar8 + (int)lVar18 + 1);
                    uVar19 = 0xffffffff;
                    goto LAB_140e93dd4;
                  }
                  iVar12 = iVar12 + 0x20;
                  lVar18 = lVar18 + 1;
                } while (iVar13 - lVar17 != lVar18);
                uVar19 = 0xffffffff;
                iVar8 = iVar13;
              }
              uVar14 = (ulonglong)(iVar8 + 1);
              iVar8 = iVar4;
            }
            else {
LAB_140e93dd4:
              uVar16 = (ulonglong)(-uVar20 & uVar20);
              uVar11 = uVar16 * 2 + 1;
              lVar17 = 0x3f;
              if (uVar11 != 0) {
                for (; uVar11 >> lVar17 == 0; lVar17 = lVar17 + -1) {
                }
              }
              iVar8 = (iVar12 - ((uint)lVar17 ^ 0x3f)) + 0x3e;
              if (iVar4 <= iVar8) {
                iVar8 = iVar4;
              }
            }
          } while (iVar8 != iVar2);
        }
      }
    }
  }
  return;
}



// FUNCTION 140e93e42 FUN_140e93e42 body=353 status=ok
// SIG undefined FUN_140e93e42(void)

void FUN_140e93e42(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e93ec7;
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
LAB_140e93ec7:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e93fa4 FUN_140e93fa4 body=353 status=ok
// SIG undefined FUN_140e93fa4(void)

void FUN_140e93fa4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e94029;
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
LAB_140e94029:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140e94106 FUN_140e94106 body=971 status=ok
// SIG undefined FUN_140e94106(void)

void FUN_140e94106(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  byte *pbVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong *plVar16;
  int iVar17;
  undefined1 auStack_c8 [32];
  longlong *local_a8;
  longlong *local_a0;
  longlong *local_98;
  longlong *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong *local_68;
  longlong *plStack_60;
  longlong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_a8 = param_2;
  cVar7 = (**(code **)(*param_1 + 0x300))();
  local_a0 = param_1;
  if (cVar7 == '\0') {
    local_98 = param_1 + 0x5f;
    local_90 = (longlong *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_98;
    if ((int)param_1[0x62] == 0) {
      uVar15 = 1;
      uVar13 = 0xffffffff;
      iVar14 = 0;
      iVar17 = 0;
      iVar10 = 0;
      iVar11 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar15 = (ulonglong)local_90 >> 0x20;
      iVar14 = (int)param_1[0x62];
      iVar11 = (int)local_90;
      uVar13 = (uint)uStack_80;
      iVar10 = uStack_80._4_4_;
      iVar17 = (uint)local_78;
    }
    plVar1 = local_88;
    if (iVar10 != iVar14 || local_88 != local_98) {
      do {
        lVar8 = param_1[0x5d];
        lVar9 = *(longlong *)(lVar8 + 0x10 + (longlong)iVar10 * 0x20);
        if (lVar9 != 0) {
          FUN_144837e54(lVar9,0);
          lVar8 = *(longlong *)(lVar8 + (longlong)iVar10 * 0x20 + 0x10);
          pbVar4 = *(byte **)(lVar8 + 0x48);
          if (((pbVar4 != (byte *)0x0) && ((*pbVar4 & 0x6b) == 3)) &&
             (plVar16 = *(longlong **)(lVar8 + 0x30), plVar16 != (longlong *)0x0)) {
            lVar8 = (**(code **)(*plVar16 + 8))(plVar16);
            lVar9 = FUN_140902b36();
            if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
               (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                lVar9 + 0x30)) {
              iVar10 = (int)local_a8[1];
              *(uint *)(local_a8 + 1) = iVar10 + 1U;
              if (*(uint *)((longlong)local_a8 + 0xc) < iVar10 + 1U) {
                FUN_1457bca06(local_a8,iVar10);
              }
              *(longlong **)(*local_a8 + (longlong)iVar10 * 8) = plVar16;
            }
          }
        }
        uVar13 = uVar13 & ~(uint)uVar15;
        plVar16 = (longlong *)plVar1[2];
        if ((longlong *)plVar1[2] == (longlong *)0x0) {
          plVar16 = plVar1;
        }
        iVar3 = (int)plVar1[3];
        lVar8 = (longlong)iVar11;
        uVar12 = *(uint *)((longlong)plVar16 + lVar8 * 4) & uVar13;
        if (uVar12 == 0) {
          iVar10 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar10 = iVar3 + -1;
          }
          iVar10 = iVar10 >> 5;
          iVar17 = iVar17 + 0x20;
          iVar6 = iVar10;
          if (iVar10 < iVar11) {
            iVar6 = iVar11;
          }
          if (iVar11 < iVar10) {
            lVar9 = 0;
            do {
              uVar12 = *(uint *)((longlong)plVar16 + lVar9 * 4 + lVar8 * 4 + 4);
              if (uVar12 != 0) {
                iVar11 = iVar11 + (int)lVar9 + 1;
                uVar13 = 0xffffffff;
                goto LAB_140e942ce;
              }
              iVar17 = iVar17 + 0x20;
              lVar9 = lVar9 + 1;
            } while (iVar6 - lVar8 != lVar9);
            uVar13 = 0xffffffff;
            iVar11 = iVar6;
          }
          iVar11 = iVar11 + 1;
          iVar10 = iVar3;
        }
        else {
LAB_140e942ce:
          uVar15 = (ulonglong)(-uVar12 & uVar12);
          uVar2 = uVar15 * 2 + 1;
          lVar8 = 0x3f;
          if (uVar2 != 0) {
            for (; uVar2 >> lVar8 == 0; lVar8 = lVar8 + -1) {
            }
          }
          iVar10 = (iVar17 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
          if (iVar3 <= iVar10) {
            iVar10 = iVar3;
          }
        }
        param_1 = local_a0;
      } while (iVar10 != iVar14 || plVar1 != local_98);
    }
  }
  else {
    plVar1 = param_1 + 0x3f;
    plVar16 = param_1 + 0x41;
    local_68 = (longlong *)&DAT_100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    plStack_60 = plVar16;
    if ((int)param_1[0x44] == 0) {
      iVar14 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar14 = (int)local_a0[0x44];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    lVar8 = local_78;
    local_88 = local_68;
    uStack_80 = plStack_60;
    local_78._4_4_ = (uint)((ulonglong)local_58 >> 0x20);
    iVar11 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar14) || (local_78 = lVar8, plStack_60 != plVar16)) {
      do {
        local_78 = lVar8;
        plVar5 = *(longlong **)(*local_90 + 0x10 + (longlong)iVar11 * 0x70);
        if (plVar5 != (longlong *)0x0) {
          lVar8 = (**(code **)(*plVar5 + 8))(plVar5);
          lVar9 = FUN_140902b36();
          if (((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar8 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar8 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
              lVar9 + 0x30)) {
            iVar11 = (int)local_a8[1];
            *(uint *)(local_a8 + 1) = iVar11 + 1U;
            if (*(uint *)((longlong)local_a8 + 0xc) < iVar11 + 1U) {
              FUN_1457bca06(local_a8,iVar11);
            }
            *(longlong **)(*local_a8 + (longlong)iVar11 * 8) = plVar5;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar11 = local_78._4_4_;
        lVar8 = local_78;
      } while (local_90 != plVar1 || (uStack_80 != plVar16 || local_78._4_4_ != iVar14));
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e944d2 FUN_140e944d2 body=1796 status=ok
// SIG undefined FUN_140e944d2(void)

void FUN_140e944d2(longlong *param_1)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  undefined1 local_58 [8];
  undefined8 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = FUN_14477b072(param_1,DAT_14cadac58);
  (**(code **)(*param_1 + 0x248))(param_1,uVar5,0);
  if (DAT_14c872bf0 != '\0') goto LAB_140e9451a;
  (**(code **)(*param_1 + 0x3e0))(param_1,&local_50);
  puVar4 = local_50;
  if ((((local_50 == (undefined8 *)0x0) || (lVar6 = FUN_1459870b2(), lVar6 == 0)) ||
      (*(int *)(puVar4 + 7) < *(int *)(lVar6 + 0x38))) ||
     (puVar9 = local_50,
     *(longlong *)(puVar4[6] + (longlong)*(int *)(lVar6 + 0x38) * 8) != lVar6 + 0x30)) {
    puVar9 = (undefined8 *)0x0;
  }
  plVar7 = (longlong *)FUN_1463ca8cf(param_1,puVar9);
  if ((plVar7 == (longlong *)0x0) || (DAT_14c950c29 == '\0')) {
    param_1[9] = (longlong)plVar7;
    if (plVar7 != (longlong *)0x0) goto LAB_140e945c5;
  }
  else {
    FUN_1456cec3c(plVar7);
    param_1[9] = (longlong)plVar7;
LAB_140e945c5:
    (**(code **)(*plVar7 + 0x2a0))(plVar7);
  }
  plVar3 = DAT_14c968090;
  plVar7 = DAT_14c968088;
  if ((param_1[6] == 0) || (*(char *)(param_1[6] + 0x2dc) == '\0')) {
    if (DAT_14c968090 != (longlong *)0x0) {
      LOCK();
      *(int *)(DAT_14c968090 + 1) = (int)DAT_14c968090[1] + 1;
      UNLOCK();
    }
    if (plVar7 != (longlong *)0x0) {
      local_50 = (undefined8 *)0x0;
      local_48 = 0;
      FUN_1446efa72(&local_50,0,3,0x10);
      puVar4 = local_50;
      local_48 = 3;
      *local_50 = &PTR_LAB_149e063e0;
      LOCK();
      UNLOCK();
      lVar8 = DAT_14c758608 + 1;
      lVar6 = DAT_14c758608 + 1;
      if (lVar8 == 0) {
        LOCK();
        UNLOCK();
        lVar8 = DAT_14c758608 + 2;
        lVar6 = DAT_14c758608 + 2;
      }
      DAT_14c758608 = lVar6;
      local_50[2] = lVar8;
      *local_50 = &PTR_FUN_14a8ea300;
      local_50[3] = 0;
      iVar10 = 0;
      if (param_1 != (longlong *)0x0) {
        uVar2 = *(uint *)((longlong)param_1 + 0xc);
        *(uint *)(local_50 + 3) = uVar2;
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        iVar10 = *(int *)(lVar6 + 0x10);
        if (*(int *)(lVar6 + 0x10) == 0) {
          LOCK();
          iVar10 = DAT_14c964868 + 1;
          UNLOCK();
          iVar11 = DAT_14c964868 + 1;
          bVar12 = DAT_14c964868 < 1000;
          DAT_14c964868 = iVar10;
          if (bVar12) {
            FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                          L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                          ,iVar11);
          }
          LOCK();
          iVar10 = *(int *)(lVar6 + 0x10);
          bVar12 = iVar10 == 0;
          if (bVar12) {
            *(int *)(lVar6 + 0x10) = iVar11;
            iVar10 = 0;
          }
          UNLOCK();
          if (bVar12) {
            iVar10 = iVar11;
          }
        }
      }
      *(int *)((longlong)puVar4 + 0x1c) = iVar10;
      puVar4[4] = &DAT_1434eaf62;
      *(undefined4 *)(puVar4 + 5) = 0;
      (**(code **)(*plVar7 + 0xa0))(plVar7,&local_50);
      if (local_48 != 0) {
        if (local_50 == (undefined8 *)0x0) goto LAB_140e94728;
        (**(code **)*local_50)(local_50,0);
        FUN_1446efa72(&local_50,0,0,0x10);
        local_48 = 0;
      }
      if (local_50 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
LAB_140e94728:
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar7 = plVar3 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
  }
  if (DAT_14caf27c8 != 3) {
    FUN_1446efa72(&DAT_14caf27c0,0,3,0x10);
    DAT_14caf27c8 = 3;
  }
  puVar4 = DAT_14caf27c0;
  *DAT_14caf27c0 = &PTR_LAB_14a8ea3e0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar4[2] = lVar8;
  *puVar4 = &PTR_FUN_14a8ea370;
  puVar4[3] = 0;
  if (param_1 == (longlong *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar4 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar10 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar6 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar10;
  puVar4[4] = &LAB_147aa529a;
  *(undefined4 *)(puVar4 + 5) = 0;
  if (DAT_14caf27b8 != 3) {
    FUN_1446efa72(&DAT_14caf27b0,0,3,0x10);
    DAT_14caf27b8 = 3;
  }
  puVar4 = DAT_14caf27b0;
  *DAT_14caf27b0 = &PTR_LAB_14a8ea4c0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar4[2] = lVar8;
  *puVar4 = &PTR_FUN_14a8ea450;
  puVar4[3] = 0;
  if (param_1 == (longlong *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar4 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar10 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar6 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar10;
  puVar4[4] = &LAB_147aa52a8;
  *(undefined4 *)(puVar4 + 5) = 0;
  if (DAT_14caf27a8 != 3) {
    FUN_1446efa72(&DAT_14caf27a0,0,3,0x10);
    DAT_14caf27a8 = 3;
  }
  puVar4 = DAT_14caf27a0;
  *DAT_14caf27a0 = &PTR_LAB_14a8ea5a0;
  LOCK();
  UNLOCK();
  lVar8 = DAT_14c758608 + 1;
  lVar6 = DAT_14c758608 + 1;
  if (lVar8 == 0) {
    LOCK();
    UNLOCK();
    lVar8 = DAT_14c758608 + 2;
    lVar6 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar6;
  puVar4[2] = lVar8;
  *puVar4 = &PTR_FUN_14a8ea530;
  puVar4[3] = 0;
  if (param_1 == (longlong *)0x0) {
    iVar10 = 0;
  }
  else {
    uVar2 = *(uint *)((longlong)param_1 + 0xc);
    *(uint *)(puVar4 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar6 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar6 = 0;
    }
    iVar10 = *(int *)(lVar6 + 0x10);
    if (*(int *)(lVar6 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar6 + 0x10);
      bVar12 = iVar10 == 0;
      if (bVar12) {
        *(int *)(lVar6 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar10 = iVar11;
      }
    }
  }
  *(int *)((longlong)puVar4 + 0x1c) = iVar10;
  puVar4[4] = &LAB_145929162;
  *(undefined4 *)(puVar4 + 5) = 0;
  if (DAT_14c9670a0 == 0) {
    lVar6 = FUN_14001cc68(0x78,0x10);
    FUN_14593912e(lVar6,1,1);
    DAT_14c9670a0 = lVar6;
  }
  local_50 = (undefined8 *)&LAB_1461b9232;
  local_48 = 0;
  FUN_145c45ab6(local_58,param_1,&local_50);
  local_50 = (undefined8 *)&LAB_147aa52b6;
  local_48 = 0;
  FUN_145dc90b4(local_58,param_1,&local_50);
LAB_140e9451a:
  FUN_14036c39e(param_1 + 0x20,param_1);
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e94bd8 FUN_140e94bd8 body=300 status=ok
// SIG undefined FUN_140e94bd8(void)

void FUN_140e94bd8(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  iVar4 = *(int *)(param_1 + 0x30);
  if (iVar4 != 0) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + 1;
    do {
      lVar6 = (longlong)(iVar4 + -1) * 0x70;
      if (*(int *)(*(longlong *)(param_1 + 0x28) + 0x68 + lVar6) == *(int *)(param_1 + 0x38)) {
        return;
      }
      lVar6 = *(longlong *)(param_1 + 0x28) + lVar6;
      plVar2 = *(longlong **)(lVar6 + 0x10);
      if (plVar2 != (longlong *)0x0) {
        iVar4 = (int)plVar2[1];
        do {
          if (iVar4 == 0) goto LAB_140e94c49;
          LOCK();
          iVar5 = (int)plVar2[1];
          bVar8 = iVar4 == iVar5;
          if (bVar8) {
            *(int *)(plVar2 + 1) = iVar4 + 1;
            iVar5 = iVar4;
          }
          iVar4 = iVar5;
          UNLOCK();
        } while (!bVar8);
        plVar3 = *(longlong **)(lVar6 + 8);
        if (plVar3 != (longlong *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3,lVar6 + 0x18);
        }
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
            (**(code **)(*plVar2 + 0x10))(plVar2);
          }
        }
      }
LAB_140e94c49:
      iVar4 = *(int *)(param_1 + 0x30);
      lVar6 = *(longlong *)(param_1 + 0x28);
      lVar7 = (longlong)iVar4 * 0x70;
      *(undefined4 *)(lVar6 + -0x10 + lVar7) = 0;
      if (*(longlong *)(lVar6 + -0x18 + lVar7) != 0) {
        FUN_1400020a8();
      }
      FUN_14063a322(lVar6 + lVar7 + -0x58);
      plVar2 = *(longlong **)(lVar6 + lVar7 + -0x60);
      if (plVar2 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))();
        }
      }
      iVar5 = *(int *)(param_1 + 0x30) - iVar4;
      if (iVar5 != 0) {
        memmove((void *)(lVar6 + lVar7 + -0x70),(void *)(lVar6 + lVar7),(longlong)iVar5 * 0x70);
        iVar4 = *(int *)(param_1 + 0x30);
      }
      *(int *)(param_1 + 0x30) = iVar4 + -1;
      FUN_140e94d20(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x30);
    } while (iVar4 != 0);
  }
  return;
}



// FUNCTION 140e94d20 FUN_140e94d20 body=150 status=ok
// SIG undefined FUN_140e94d20(void)

void FUN_140e94d20(longlong param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar1 = *(uint *)(param_1 + 8);
  uVar3 = (ulonglong)uVar1;
  iVar2 = *(int *)(param_1 + 0xc);
  if (((0x3fff < (ulonglong)((longlong)(int)(iVar2 - uVar1) * 0x70)) ||
      ((int)(uVar1 * 3) < iVar2 * 2)) && (uVar1 == 0 || 0x40 < (int)(iVar2 - uVar1))) {
    if (0 < (int)uVar1) {
      uVar3 = FUN_144a3809e(uVar3 * 0x70,8);
      uVar3 = uVar3 / 0x70;
      iVar2 = *(int *)(param_1 + 0xc);
    }
    if ((int)uVar3 != iVar2) {
      *(int *)(param_1 + 0xc) = (int)uVar3;
      FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar3,0x70,8);
    }
  }
  return;
}



// FUNCTION 140e94db6 FUN_140e94db6 body=12 status=ok
// SIG undefined FUN_140e94db6(void)

undefined8 FUN_140e94db6(longlong param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  longlong lStack_18;
  ulonglong uStack_10;
  
  if (param_1 == 0) {
    return 0;
  }
  uStack_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  lStack_18 = FUN_140e94e78();
  if ((lStack_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lStack_18);
  }
  uVar1 = FUN_140e94e2c(param_1 + 0x138,&lStack_18);
  if ((uStack_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e94dc2 FUN_140e94dc2 body=105 status=ok
// SIG undefined FUN_140e94dc2(void)

void FUN_140e94dc2(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140e94e78();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_18);
  }
  FUN_140e94e2c(param_1 + 0x138,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e94e2c FUN_140e94e2c body=76 status=ok
// SIG undefined FUN_140e94e2c(void)

void FUN_140e94e2c(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140e94e78();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140e94e69;
    }
  }
  lVar2 = 0;
LAB_140e94e69:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140e94e78 FUN_140e94e78 body=228 status=ok
// SIG undefined FUN_140e94e78(void)

longlong FUN_140e94e78(void)

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
  if (DAT_14cb44940 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_143564180;
    local_28 = &LAB_14115fc28;
    local_38 = &LAB_148217bad;
    local_40 = &LAB_145be1d09;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x118;
    FUN_14081cfa3(L"/Script/CommonInput",L"CommonInputSubsystem",&DAT_14cb44940,FUN_14647e044);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb44940;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e94f5e FUN_140e94f5e body=582 status=ok
// SIG undefined FUN_140e94f5e(void)

void FUN_140e94f5e(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  longlong lVar6;
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
  undefined1 *local_50;
  code *local_48;
  longlong *plStack_40;
  code *local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_1405f1eac();
  lVar6 = *(longlong *)(param_1 + 0x430);
  if (lVar6 != 0) {
    if (DAT_14cae9568 == 0) {
      local_60 = &local_48;
      local_48 = FUN_1417de738;
      local_50 = &LAB_145893408;
      local_58 = &LAB_1458cbbd2;
      local_68 = &LAB_147ba21f1;
      local_70 = &LAB_1463e9233;
      local_78 = L"Engine";
      local_80 = 0;
      local_88 = 0x1000000c;
      local_90 = 8;
      local_98 = 0x2b8;
      FUN_14081cfa3(L"/Script/Engine",L"LocalPlayer",&DAT_14cae9568,&DAT_147ba21f0);
      lVar6 = *(longlong *)(param_1 + 0x430);
      if (lVar6 == 0) goto LAB_140e94fc5;
    }
    if (((((DAT_14cae9568 != 0) && (lVar3 = *(longlong *)(lVar6 + 0x10), lVar3 != 0)) &&
         (*(int *)(DAT_14cae9568 + 0x38) <= *(int *)(lVar3 + 0x38))) &&
        ((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cae9568 + 0x38) * 8)
          == DAT_14cae9568 + 0x30 && (lVar3 = *(longlong *)(lVar6 + 0x78), lVar3 != 0)))) &&
       (cVar5 = (**(code **)(*(longlong *)(lVar3 + 0x28) + 0x1a0))(lVar3 + 0x28), cVar5 != '\0')) {
      FUN_140761b7a(*(undefined8 *)(lVar6 + 0x78),&local_48);
      plVar4 = plStack_40;
      local_38 = local_48;
      local_48 = (code *)0x0;
      plStack_40 = (longlong *)0x0;
      local_30 = plVar4;
      if (plVar4 == (longlong *)0x0) {
        FUN_1405929ee(lVar6 + 0x1f8,&local_38);
      }
      else {
        LOCK();
        *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
        UNLOCK();
        FUN_1405929ee(lVar6 + 0x1f8,&local_38);
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
      plVar4 = plStack_40;
      if (plStack_40 != (longlong *)0x0) {
        LOCK();
        plVar1 = plStack_40 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plStack_40)(plStack_40);
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
  }
LAB_140e94fc5:
  if ((((DAT_14c98e618 != 0) && (*(char *)(DAT_14c98e618 + 0x4c3) == '\x01')) &&
      ((*(char *)(DAT_14c98e618 + 0x4c0) != '\0' || (*(char *)(DAT_14c98e618 + 0x4c1) == '\x01'))))
     && ((*(uint *)(param_1 + 0x634) & 1) == 0)) {
    *(uint *)(param_1 + 0x634) = *(uint *)(param_1 + 0x634) | 1;
  }
  if ((local_28 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e951a6 FUN_140e951a6 body=46 status=ok
// SIG undefined FUN_140e951a6(void)

void FUN_140e951a6(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    *param_1 = *(undefined8 *)(param_2 + 0x158);
    lVar1 = *(longlong *)(param_2 + 0x160);
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return;
    }
  }
  return;
}



// FUNCTION 140e951e2 FUN_140e951e2 body=73 status=ok
// SIG undefined FUN_140e951e2(void)

undefined8 * FUN_140e951e2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b345010;
  FUN_1400fd473(param_1[1],*(undefined4 *)(param_1 + 2));
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9522c FUN_140e9522c body=58 status=ok
// SIG undefined FUN_140e9522c(void)

void FUN_140e9522c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(longlong *)(param_1 + 0x40) != 0) {
    FUN_1400020a8();
  }
  FUN_140e95266(param_1);
  return;
}



// FUNCTION 140e95266 FUN_140e95266 body=55 status=ok
// SIG undefined FUN_140e95266(void)

void FUN_140e95266(longlong *param_1)

{
  FUN_140e9529e(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140e9529e FUN_140e9529e body=509 status=ok
// SIG undefined FUN_140e9529e(void)

void FUN_140e9529e(longlong *param_1,int param_2)

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
  uint uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  puVar1 = (uint *)(param_1 + 2);
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar13 = 0;
    uVar14 = 1;
    iVar4 = 0;
    iVar10 = 0;
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
      uVar13 = 0;
      uVar14 = (ulonglong)(uint)(iVar4 >> 5);
      if (iVar4 >> 5 < 1) {
        uVar14 = uVar13;
      }
      iVar10 = 0;
      do {
        if (uVar14 == uVar13) goto LAB_140e953ea;
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar8[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar10 = 0;
    }
    uVar14 = (ulonglong)(-uVar12 & uVar12);
    uVar2 = uVar14 * 2 + 1;
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
    uVar12 = 0xffffffff;
    do {
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar4 * 0x50) != 0) {
        FUN_1400020a8();
        iVar3 = (int)param_1[5];
      }
      uVar12 = uVar12 & ~(uint)uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = puVar1;
      }
      iVar4 = (int)uVar13;
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
        lVar9 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar5 = puVar8[lVar11 + lVar9 + 1];
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar7 - lVar11 == lVar9) goto LAB_140e953ea;
        }
        uVar13 = (ulonglong)(iVar4 + (int)lVar9 + 1);
        uVar12 = 0xffffffff;
      }
      uVar14 = (ulonglong)(-uVar5 & uVar5);
      uVar2 = uVar14 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar2 != 0) {
        for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar4 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar4 < iVar3);
  }
LAB_140e953ea:
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != param_2) {
    FUN_140e9549c(param_1,param_2);
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



// FUNCTION 140e9549c FUN_140e9549c body=113 status=ok
// SIG undefined FUN_140e9549c(void)

void FUN_140e9549c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x50,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x50)) {
      uVar2 = uVar1 / 0x50 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x50,8);
  }
  return;
}



// FUNCTION 140e9550e FUN_140e9550e body=448 status=ok
// SIG undefined FUN_140e9550e(void)

undefined8 FUN_140e9550e(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  
  lVar1 = FUN_1406f977c();
  if (lVar1 == 0) {
LAB_140e955b1:
    uVar4 = 0;
  }
  else {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14c951d20) {
      FUN_144b3d300(&DAT_14c951d20);
      if (DAT_14c951d20 == -1) {
        if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0x110) < DAT_14c951a88) {
          FUN_144b3d300(&DAT_14c951a88);
          if (DAT_14c951a88 == -1) {
            uVar4 = FUN_140342cba();
            FUN_14000176a(&DAT_14c951a38,L"FProperty",0x8000,0,0x8001,0,uVar4,FUN_1468c7f1e);
            atexit(FUN_14280c819);
            _Init_thread_footer(&DAT_14c951a88);
          }
        }
        FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0,0x28001,0,&DAT_14c951a38,
                      FUN_14067a048);
        atexit(FUN_142811fe5);
        _Init_thread_footer(&DAT_14c951d20);
      }
    }
    puVar3 = *(undefined8 **)(lVar1 + 8);
    if (DAT_14c951cd8 == 0) {
      bVar5 = puVar3 != (undefined8 *)0x0;
      if (puVar3 != &DAT_14c951cd0 && bVar5) {
        do {
          puVar3 = (undefined8 *)puVar3[6];
          bVar5 = puVar3 != (undefined8 *)0x0;
          if (puVar3 == &DAT_14c951cd0) break;
        } while (puVar3 != (undefined8 *)0x0);
      }
      if (!bVar5) goto LAB_140e955b1;
    }
    else if ((puVar3[3] & DAT_14c951cd8) == 0) goto LAB_140e955b1;
    lVar2 = (longlong)*(int *)(lVar1 + 0x44) + *(longlong *)(param_1 + 0x28);
    *(bool *)param_2 =
         (*(byte *)((ulonglong)*(byte *)(lVar1 + 0x71) + lVar2) & *(byte *)(lVar1 + 0x73)) != 0;
    uVar4 = CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
  }
  return uVar4;
}



// FUNCTION 140e956ce FUN_140e956ce body=642 status=ok
// SIG undefined FUN_140e956ce(void)

void FUN_140e956ce(ulonglong *param_1)

{
  int *piVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong *plVar7;
  longlong lVar8;
  ulonglong uVar9;
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
  uVar2 = param_1[1];
  if (uVar2 == 0) goto LAB_140e956fc;
  uVar4 = *param_1;
  uVar9 = uVar4 >> 0x20;
  AcquireSRWLockExclusive((PSRWLOCK)(uVar2 + 8));
  if ((uVar9 & 3) != 0) {
    *(int *)(uVar2 + 0x20) = *(int *)(uVar2 + 0x20) + -1;
  }
  if (((*(int *)(uVar2 + 0x14) == 0) || (uVar6 = *(uint *)(uVar2 + 0x10), (int)uVar6 < 0)) ||
     (DAT_14c9647dc <= (int)uVar6)) {
LAB_140e9584a:
    if ((uVar9 & 2) != 0) {
      *(int *)(uVar2 + 0x24) = *(int *)(uVar2 + 0x24) + -1;
      uVar6 = 0;
LAB_140e95835:
      if ((int)uVar6 < *(int *)(uVar2 + 0x70)) {
        piVar1 = (int *)(*(longlong *)(uVar2 + 0x68) + (ulonglong)uVar6 * 0x48);
        *piVar1 = *piVar1 + -1;
      }
    }
  }
  else {
    plVar7 = (longlong *)
             ((ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8));
    if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(uVar2 + 0x14))) ||
       (((*(uint *)(plVar7 + 1) & 0x10200000) != 0 || (lVar5 = *plVar7, lVar5 == 0))))
    goto LAB_140e9584a;
    lVar8 = *(longlong *)(lVar5 + 0x658);
    if (lVar8 == 0) {
      lVar8 = *(longlong *)(lVar5 + 0x660);
      if ((DAT_14c950c29 == '\x01') && (lVar8 != 0)) goto LAB_140e9595e;
      if (lVar8 != 0) goto LAB_140e957dd;
LAB_140e958b9:
      lVar8 = 0;
    }
    else {
      if (DAT_14c950c29 == '\x01') {
LAB_140e9595e:
        FUN_1456cec3c(lVar8);
      }
LAB_140e957dd:
      if (DAT_14cb06da8 == 0) {
        local_60 = &local_40;
        local_40 = FUN_1449e2820;
        local_50 = FUN_14081d0ea;
        local_58 = &LAB_1464003b0;
        local_68 = &LAB_147d17bdf;
        local_70 = &LAB_1417edf22;
        local_78 = L"Engine";
        local_80 = 0;
        local_88 = 0x10000000;
        local_90 = 8;
        local_98 = 0x588;
        FUN_14081cfa3(L"/Script/Engine",L"SkeletalMesh",&DAT_14cb06da8,FUN_14640038e);
      }
      if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(DAT_14cb06da8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb06da8 + 0x38) * 8) != DAT_14cb06da8 + 0x30))
      goto LAB_140e958b9;
    }
    if ((uVar9 & 2) != 0) {
      uVar6 = 0;
      if (lVar8 != 0) {
        uVar6 = (uint)uVar4;
      }
      *(int *)(uVar2 + 0x24) = *(int *)(uVar2 + 0x24) + -1;
      if ((int)uVar6 < 0) goto LAB_140e95816;
      goto LAB_140e95835;
    }
  }
LAB_140e95816:
  ReleaseSRWLockExclusive((PSRWLOCK)(uVar2 + 8));
LAB_140e956fc:
  puVar3 = (undefined8 *)param_1[2];
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
        FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_b8);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9596c FUN_140e9596c body=101 status=ok
// SIG undefined FUN_140e9596c(void)

void FUN_140e9596c(longlong param_1)

{
  longlong lVar1;
  
  FUN_140e959d1(*(undefined8 *)(param_1 + 0x78),*(undefined4 *)(param_1 + 0x80));
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  lVar1 = 0;
  do {
    if (*(longlong *)(param_1 + 0x68 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != -0x20);
  lVar1 = 0x48;
  do {
    if (*(longlong *)(param_1 + lVar1) != 0) {
      FUN_1400020a8();
    }
    lVar1 = lVar1 + -0x10;
  } while (lVar1 != 0x28);
  return;
}



// FUNCTION 140e959d1 FUN_140e959d1 body=91 status=ok
// SIG undefined FUN_140e959d1(void)

void FUN_140e959d1(longlong param_1,int param_2)

{
  longlong lVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar1 = 0x38;
    do {
      if (*(longlong *)(param_1 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0x18);
    lVar1 = 0x20;
    do {
      if (*(longlong *)(param_1 + -8 + lVar1) != 0) {
        FUN_1400020a8();
      }
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 140e95a40 FUN_140e95a40 body=137 status=ok
// SIG undefined FUN_140e95a40(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140e95a40(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 2) != '\0') &&
     (plVar1 = (longlong *)param_1[1], plVar1 != (longlong *)0x0)) {
    if (plVar1[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar1 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar1;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0x18);
  }
  return param_1;
}



// FUNCTION 140e95ad8 FUN_140e95ad8 body=107 status=ok
// SIG undefined FUN_140e95ad8(void)

undefined8 * FUN_140e95ad8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b3d6370;
  FUN_140753a84(param_1[0x17],*(undefined4 *)(param_1 + 0x18));
  if (param_1[0x17] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_140753ab6(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e95b44 FUN_140e95b44 body=689 status=ok
// SIG undefined FUN_140e95b44(void)

void FUN_140e95b44(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  longlong *plVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar14 = *(uint *)(param_1 + 9);
  if (uVar14 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
  }
  else {
    if (uVar14 == 0) {
      return;
    }
    FUN_1446efa72(plVar9,0,uVar14,4);
    if ((int)uVar14 < 1) goto LAB_140e95baa;
  }
  uVar2 = 0;
  do {
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = plVar1;
    }
    *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar14 != uVar2);
LAB_140e95baa:
  iVar3 = (int)param_1[5];
  if (iVar3 == 0) {
    uVar10 = 0;
    uVar15 = 1;
    iVar5 = 0;
    iVar11 = 0;
  }
  else {
    puVar8 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar8 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar8;
    if (uVar14 == 0) {
      iVar11 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar11 = iVar3 + -1;
      }
      uVar10 = 0;
      uVar15 = (ulonglong)(uint)(iVar11 >> 5);
      if (iVar11 >> 5 < 1) {
        uVar15 = uVar10;
      }
      iVar11 = 0;
      do {
        if (uVar15 == uVar10) {
          return;
        }
        iVar11 = iVar11 + 0x20;
        uVar14 = puVar8[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar10 = 0;
      iVar11 = 0;
    }
    uVar15 = (ulonglong)(-uVar14 & uVar14);
    uVar4 = uVar15 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar4 != 0) {
      for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar3 <= iVar5) {
      iVar5 = iVar3;
    }
  }
  if (iVar5 < iVar3) {
    uVar14 = 0xffffffff;
    do {
      lVar12 = *param_1;
      lVar13 = (longlong)iVar5 * 0x90;
      iVar3 = FUN_140e95df5(lVar12 + lVar13);
      uVar4 = (longlong)iVar3 & (longlong)(int)param_1[9] - 1U;
      iVar3 = (int)uVar4;
      *(int *)(lVar12 + 0x8c + lVar13) = iVar3;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(undefined4 *)(lVar12 + 0x88 + lVar13) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar4) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar1;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar3 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
      uVar14 = ~(uint)uVar15 & uVar14;
      puVar8 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar8 = (uint *)(param_1 + 2);
      }
      iVar3 = (int)param_1[5];
      iVar5 = (int)uVar10;
      lVar12 = (longlong)iVar5;
      uVar2 = puVar8[lVar12] & uVar14;
      if (uVar2 == 0) {
        iVar6 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar6 = iVar3 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar7 = iVar6;
        if (iVar6 < iVar5) {
          iVar7 = iVar5;
        }
        if (iVar6 <= iVar5) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar2 = puVar8[lVar12 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar7 - lVar12 == lVar13) {
            return;
          }
        }
        uVar10 = (ulonglong)(iVar5 + (int)lVar13 + 1);
        uVar14 = 0xffffffff;
      }
      uVar15 = (ulonglong)(-uVar2 & uVar2);
      uVar4 = uVar15 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar5 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar5 < iVar3);
  }
  return;
}



// FUNCTION 140e95df5 FUN_140e95df5 body=658 status=ok
// SIG undefined FUN_140e95df5(void)

uint FUN_140e95df5(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  uVar1 = *param_1;
  uVar2 = param_1[9];
  uVar3 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar6 = (uint)uVar1 & 0xffff;
  uVar3 = ((uint)uVar1 << 0x10 | uVar6) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4);
  uVar6 = uVar3 >> 0xd ^ -uVar3;
  uVar5 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
  uVar7 = uVar5 >> 0xd ^ (uVar3 - uVar6) - uVar5;
  uVar3 = uVar7 >> 0xc ^ (uVar6 - uVar5) - uVar7;
  uVar6 = uVar3 << 0x10 ^ (uVar5 - uVar7) - uVar3;
  uVar5 = uVar6 >> 5 ^ (uVar7 - uVar3) - uVar6;
  uVar7 = uVar5 >> 3 ^ (uVar3 - uVar6) - uVar5;
  uVar3 = uVar7 << 10 ^ (uVar6 - uVar5) - uVar7;
  uVar3 = uVar3 >> 0xf ^ uVar5 - (uVar7 + uVar3);
  iVar4 = uVar3 - *(byte *)(param_1 + 5);
  uVar3 = iVar4 * 0x100 ^ 0x9e3779b9 - uVar3;
  uVar5 = uVar3 >> 0xd ^ ((uint)*(byte *)(param_1 + 5) - iVar4) - uVar3;
  uVar6 = uVar5 >> 0xc ^ (iVar4 - uVar3) - uVar5;
  uVar3 = uVar6 << 0x10 ^ (uVar3 - uVar5) - uVar6;
  uVar8 = uVar3 >> 5 ^ (uVar5 - uVar6) - uVar3;
  uVar7 = uVar8 >> 3 ^ (uVar6 - uVar3) - uVar8;
  uVar5 = uVar7 << 10 ^ (uVar3 - uVar8) - uVar7;
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar3 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar6 >> 4);
  uVar6 = uVar3 >> 0xd ^ (uVar5 >> 0xf ^ uVar8 - (uVar7 + uVar5)) - uVar3;
  uVar5 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
  uVar7 = uVar5 >> 0xd ^ (uVar3 - uVar6) - uVar5;
  uVar3 = uVar7 >> 0xc ^ (uVar6 - uVar5) - uVar7;
  uVar6 = uVar3 << 0x10 ^ (uVar5 - uVar7) - uVar3;
  uVar5 = uVar6 >> 5 ^ (uVar7 - uVar3) - uVar6;
  uVar7 = uVar5 >> 3 ^ (uVar3 - uVar6) - uVar5;
  uVar6 = uVar7 << 10 ^ (uVar6 - uVar5) - uVar7;
  uVar3 = FUN_140e96087(param_1 + 0xc);
  uVar6 = uVar3 >> 0xd ^ (uVar6 >> 0xf ^ uVar5 - (uVar7 + uVar6)) - uVar3;
  uVar5 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
  uVar3 = (uVar3 - uVar6) - uVar5 ^ uVar5 >> 0xd;
  uVar7 = uVar3 >> 0xc ^ (uVar6 - uVar5) - uVar3;
  uVar6 = uVar7 << 0x10 ^ (uVar5 - uVar3) - uVar7;
  uVar3 = (uVar3 - uVar7) - uVar6 ^ uVar6 >> 5;
  uVar5 = uVar3 >> 3 ^ (uVar7 - uVar6) - uVar3;
  uVar6 = uVar5 << 10 ^ (uVar6 - uVar3) - uVar5;
  return uVar3 - (uVar5 + uVar6) ^ uVar6 >> 0xf;
}



// FUNCTION 140e96087 FUN_140e96087 body=224 status=ok
// SIG undefined FUN_140e96087(void)

uint FUN_140e96087(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar6 = (uint)uVar2 & 0xffff;
  uVar6 = ((uint)uVar2 << 0x10 | uVar6) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4);
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar3 = (uint)uVar1 & 0xffff;
  uVar4 = uVar6 >> 0xd ^
          (((uint)uVar1 << 0x10 | uVar3) + (int)((ulonglong)uVar1 >> 0x20) +
           (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar3 >> 4)) - uVar6;
  uVar3 = uVar4 << 8 ^ (-0x61c88647 - uVar6) - uVar4;
  uVar5 = uVar3 >> 0xd ^ (uVar6 - uVar4) - uVar3;
  uVar4 = uVar5 >> 0xc ^ (uVar4 - uVar3) - uVar5;
  uVar6 = uVar4 << 0x10 ^ (uVar3 - uVar5) - uVar4;
  uVar3 = uVar6 >> 5 ^ (uVar5 - uVar4) - uVar6;
  uVar5 = uVar3 >> 3 ^ (uVar4 - uVar6) - uVar3;
  uVar4 = uVar5 << 10 ^ (uVar6 - uVar3) - uVar5;
  return uVar4 >> 0xf ^ uVar3 - (uVar5 + uVar4);
}



// FUNCTION 140e96168 FUN_140e96168 body=699 status=ok
// SIG undefined FUN_140e96168(void)

undefined8 * FUN_140e96168(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  
  *param_1 = &PTR_FUN_14b1e2b20;
  plVar3 = param_1 + 0x34;
  if (*(int *)(param_1 + 0x35) != 0) {
    puVar4 = (undefined8 *)*plVar3;
    if (puVar4 == (undefined8 *)0x0) goto LAB_140e9619e;
    (**(code **)*puVar4)(puVar4,0);
    FUN_1446efa72(plVar3,0,0,0x10);
    *(undefined4 *)(param_1 + 0x35) = 0;
  }
  if (*plVar3 != 0) {
    FUN_1400020a8();
  }
LAB_140e9619e:
  FUN_1410ceff0(param_1 + 0x31,param_1[0x31]);
  plVar3 = (longlong *)param_1[0x2f];
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
  plVar3 = (longlong *)param_1[0x2c];
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
  FUN_140e96423(param_1[0x29],*(undefined4 *)(param_1 + 0x2a));
  if (param_1[0x29] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9644c(param_1[0x27],*(undefined4 *)(param_1 + 0x28));
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1e],*(undefined4 *)(param_1 + 0x1f));
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x1b],*(undefined4 *)(param_1 + 0x1c));
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x18],*(undefined4 *)(param_1 + 0x19));
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x15],*(undefined4 *)(param_1 + 0x16));
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xf],*(undefined4 *)(param_1 + 0x10));
  if (param_1[0xf] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xc],*(undefined4 *)(param_1 + 0xd));
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[9],*(undefined4 *)(param_1 + 10));
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],*(undefined4 *)(param_1 + 7));
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e96423 FUN_140e96423 body=41 status=ok
// SIG undefined FUN_140e96423(void)

void FUN_140e96423(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e96536(param_1);
    param_1 = param_1 + 0x88;
  }
  return;
}



// FUNCTION 140e9644c FUN_140e9644c body=41 status=ok
// SIG undefined FUN_140e9644c(void)

void FUN_140e9644c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140e96476(param_1);
    param_1 = param_1 + 0xa8;
  }
  return;
}



// FUNCTION 140e96476 FUN_140e96476 body=192 status=ok
// SIG undefined FUN_140e96476(void)

void FUN_140e96476(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0xf];
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
  plVar3 = (longlong *)param_1[0xd];
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
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140e96536 FUN_140e96536 body=152 status=ok
// SIG undefined FUN_140e96536(void)

void FUN_140e96536(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)param_1[0xf];
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
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 140e965dc FUN_140e965dc body=31 status=ok
// SIG undefined FUN_140e965dc(void)

undefined8 FUN_140e965dc(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e965fc FUN_140e965fc body=223 status=ok
// SIG undefined FUN_140e965fc(void)

undefined8 * FUN_140e965fc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 2);
  _Src = (void *)param_2[1];
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1401b309e(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],_Src,(longlong)iVar1 << 3);
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[3] = param_2[3];
  FUN_14042b2d2(param_1 + 5,param_2 + 5);
  param_1[0xf] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  uVar2 = param_2[0xf];
  *(int *)(param_1 + 0x10) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  }
  else {
    FUN_140e96728(param_1 + 0xf,iVar1,0);
    FUN_140e966db(param_1[0xf],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
  return param_1;
}



// FUNCTION 140e966db FUN_140e966db body=76 status=ok
// SIG undefined FUN_140e966db(void)

void FUN_140e966db(undefined8 *param_1,longlong param_2,int param_3)

{
  for (; param_3 != 0; param_3 = param_3 + -1) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    FUN_1401f3db8(param_1,param_2);
    param_1 = param_1 + 3;
    param_2 = param_2 + 0x18;
  }
  return;
}



// FUNCTION 140e96728 FUN_140e96728 body=334 status=ok
// SIG undefined FUN_140e96728(void)

void FUN_140e96728(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar4 = (longlong)param_2 * 0x18;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
        }
        else {
          if ((uVar1 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar3 = (&DAT_14c841e00)[uVar1 >> 4];
            uVar6 = 0x32;
            if (0x32 < bVar3) {
              uVar6 = (ulonglong)bVar3;
            }
            uVar8 = 0x32 - (ulonglong)bVar3;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140e9679a;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
            } while (lVar2 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar1 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
LAB_140e9679a:
    iVar5 = (int)(uVar4 / 0x18);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x18,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140e96876 FUN_140e96876 body=40 status=ok
// SIG undefined FUN_140e96876(void)

undefined8 FUN_140e96876(undefined8 param_1,int param_2)

{
  FUN_140e9689e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9689e FUN_140e9689e body=389 status=ok
// SIG undefined FUN_140e9689e(void)

void FUN_140e9689e(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3ce30;
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
  plVar1 = param_1 + 0x1a;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1e) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1d)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1d)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x12;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x16) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x15)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x15)) {
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



// FUNCTION 140e96a24 FUN_140e96a24 body=352 status=ok
// SIG undefined FUN_140e96a24(void)

void FUN_140e96a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38 [8];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = (longlong *)FUN_140e96b86(param_3);
  if (plVar1 != (longlong *)0x0) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x110) < DAT_14cbccb54) {
      FUN_144b3d300(&DAT_14cbccb54);
      if (DAT_14cbccb54 == -1) {
        FUN_1446f470e(&DAT_14cbccb4c,L"Element",1);
        _Init_thread_footer(&DAT_14cbccb54);
      }
    }
    FUN_1446f470e(local_38,L"Element",1);
    lVar2 = FUN_14001cc68(0xe8,0x10);
    FUN_140e96bb6(lVar2,local_38,0);
    local_30 = lVar2;
    lVar3 = (**(code **)(*plVar1 + 0x10))(plVar1);
    if (*(char *)(lVar3 + 0x57) == '\0') {
      *(undefined1 *)(lVar2 + 0xe0) = 1;
    }
    else {
      FUN_140e96c86(local_38);
      (*(code *)**(undefined8 **)(lVar2 + 0x20))(lVar2 + 0x20,local_38);
    }
    FUN_140e96d7c(param_2,&local_30);
    lVar2 = local_30;
    if (local_30 != 0) {
      FUN_14185d22e(local_30);
      FUN_1400020a8(lVar2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e96b86 FUN_140e96b86 body=47 status=ok
// SIG undefined FUN_140e96b86(void)

undefined8 FUN_140e96b86(void)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_1447262c2();
  if (lVar1 != 0) {
    uVar2 = FUN_140da3b08();
    uVar2 = FUN_144718840(lVar1,uVar2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 140e96bb6 FUN_140e96bb6 body=208 status=ok
// SIG undefined FUN_140e96bb6(void)

undefined8 * FUN_140e96bb6(undefined8 *param_1,undefined8 *param_2,undefined1 param_3)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0x275c8fdc;
  param_1[3] = 0;
  FUN_140265f12();
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
  *(undefined1 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[5] = &DAT_14cb83310;
  *(undefined1 *)((longlong)param_1 + 0xe1) = param_3;
  *param_1 = *param_2;
  return param_1;
}



// FUNCTION 140e96c86 FUN_140e96c86 body=43 status=ok
// SIG undefined FUN_140e96c86(void)

undefined8 * FUN_140e96c86(undefined8 *param_1,uint param_2)

{
  FUN_140e96cb2();
  *param_1 = (&DAT_14cbc82a0)[param_2 & 0xff];
  return param_1;
}



// FUNCTION 140e96cb2 FUN_140e96cb2 body=201 status=ok
// SIG undefined FUN_140e96cb2(void)

void FUN_140e96cb2(void)

{
  longlong lVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  undefined1 auStack_78 [40];
  longlong local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (DAT_14cbc82d0 == '\0') {
    DAT_14cbc82d0 = '\x01';
    lVar1 = FUN_1409f759a();
    if (lVar1 != 0) {
      puVar4 = &DAT_14cbc82a0;
      uVar3 = 0;
      do {
        FUN_1401cfb1c(lVar1,&local_50,uVar3 & 0xffffffff);
        iVar2 = local_48 + -1;
        if (local_48 == 0) {
          iVar2 = 0;
        }
        FUN_1446f82e2(&local_40,iVar2,local_50,1);
        *puVar4 = local_40;
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (uVar3 != 6);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e96d7c FUN_140e96d7c body=847 status=ok
// SIG undefined FUN_140e96d7c(void)

void FUN_140e96d7c(longlong param_1,longlong *param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  
  lVar8 = *(longlong *)*param_2;
  cVar2 = FUN_140e4624a();
  if (cVar2 == '\0') {
    if (lVar8 == DAT_14cb82348) {
      *(longlong *)(param_1 + 8) = *param_2;
    }
    else if (lVar8 == DAT_14cb82350) {
      *(longlong *)(param_1 + 0x10) = *param_2;
    }
    else if (lVar8 == DAT_14cb82358) {
      *(longlong *)(param_1 + 0x18) = *param_2;
    }
    goto LAB_140e96eaa;
  }
  lVar9 = param_1 + 0x20;
  lVar3 = *(longlong *)(param_1 + 0x60);
  if (*(longlong *)(param_1 + 0x60) == 0) {
    lVar3 = lVar9;
  }
  uVar10 = 0xffffffff;
  if ((longlong)*(int *)(param_1 + 0x68) != 0) {
    lVar5 = (longlong)*(int *)(param_1 + 0x68) << 3;
    lVar7 = 0;
    do {
      if (**(longlong **)(lVar3 + lVar7 * 8) == lVar8) {
        uVar10 = (uint)lVar7;
        break;
      }
      lVar7 = lVar7 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  lVar3 = FUN_140831778();
  if (*(int *)(lVar3 + 0x108) != *(int *)(lVar3 + 0x134)) {
    uVar1 = (uint)((ulonglong)lVar8 >> 0x10);
    uVar6 = (uint)lVar8 & 0xffff;
    lVar5 = lVar3 + 0x138;
    if (*(longlong *)(lVar3 + 0x140) != 0) {
      lVar5 = *(longlong *)(lVar3 + 0x140);
    }
    iVar4 = *(int *)(lVar5 + (ulonglong)
                             (*(int *)(lVar3 + 0x148) - 1U &
                             (int)((ulonglong)lVar8 >> 0x20) + ((uint)lVar8 << 0x10 | uVar6) +
                             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar6 >> 4)) * 4);
    if (iVar4 != -1) {
      do {
        lVar5 = *(longlong *)(lVar3 + 0x100) + (longlong)iVar4 * 0x68;
        if (*(longlong *)(*(longlong *)(lVar3 + 0x100) + (longlong)iVar4 * 0x68) == lVar8) {
          if ((((lVar5 + 8U & 0xfffffffffffffff7) != 0) && (*(longlong *)(lVar5 + 0x40) != 0)) &&
             ((longlong)*(int *)(lVar5 + 0x50) != 0)) {
            lVar8 = 0;
            goto LAB_140e96f1f;
          }
          break;
        }
        iVar4 = *(int *)(lVar5 + 0x60);
      } while (iVar4 != -1);
    }
  }
  goto LAB_140e96e7c;
  while (lVar8 = lVar8 + 8, (longlong)*(int *)(lVar5 + 0x50) * 8 != lVar8) {
LAB_140e96f1f:
    if (*(longlong *)(*(longlong *)(lVar5 + 0x48) + lVar8) != 0) {
      if (((int)uVar10 < 0) || (*(int *)(param_1 + 0x68) <= (int)uVar10)) {
        bVar11 = false;
        goto LAB_140e96f3f;
      }
      lVar8 = *(longlong *)(param_1 + 0x60);
      if (*(longlong *)(param_1 + 0x60) == 0) {
        lVar8 = lVar9;
      }
      lVar8 = *(longlong *)(lVar8 + (ulonglong)uVar10 * 8);
      lVar3 = FUN_140c7c082(lVar8 + 8);
      lVar8 = lVar8 + 0x20;
      if (lVar3 != 0) {
        lVar8 = lVar3 + 0x30;
      }
      bVar11 = true;
      if ((*(longlong *)(lVar8 + 8) == 0) || ((longlong)*(int *)(lVar8 + 0x18) == 0))
      goto LAB_140e96f3f;
      lVar3 = 0;
      goto LAB_140e97092;
    }
  }
  goto LAB_140e96e7c;
  while (bVar12 = (longlong)*(int *)(lVar8 + 0x18) * 8 + -8 != lVar3, lVar3 = lVar3 + 8, bVar12) {
LAB_140e97092:
    bVar11 = *(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar3) == 0;
    if (!bVar11) break;
  }
LAB_140e96f3f:
  lVar8 = *param_2;
  lVar3 = FUN_140c7c082(lVar8 + 8);
  lVar8 = lVar8 + 0x20;
  if (lVar3 != 0) {
    lVar8 = lVar3 + 0x30;
  }
  if ((*(longlong *)(lVar8 + 8) != 0) && ((longlong)*(int *)(lVar8 + 0x18) != 0)) {
    lVar3 = 0;
    do {
      if (*(longlong *)(*(longlong *)(lVar8 + 0x10) + lVar3) != 0) {
        if (bVar11) {
          FUN_140a943ce(param_1 + 0x70,lVar5 + 0x38);
        }
        goto LAB_140e96e7c;
      }
      lVar3 = lVar3 + 8;
    } while ((longlong)*(int *)(lVar8 + 0x18) * 8 != lVar3);
  }
  if (!bVar11) {
    FUN_1405dc634(param_1 + 0x70,lVar5 + 0x38);
  }
LAB_140e96e7c:
  iVar4 = *(int *)(param_1 + 0x68);
  if (((int)uVar10 < 0) || (iVar4 <= (int)uVar10)) {
    lVar8 = *param_2;
    *(uint *)(param_1 + 0x68) = iVar4 + 1U;
    if (*(uint *)(param_1 + 0x6c) < iVar4 + 1U) {
      FUN_1488d28b2(lVar9,iVar4);
    }
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x60);
    }
    *(longlong *)(lVar9 + (longlong)iVar4 * 8) = lVar8;
  }
  else {
    if (*(longlong *)(param_1 + 0x60) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x60);
    }
    *(longlong *)(lVar9 + (ulonglong)uVar10 * 8) = *param_2;
  }
LAB_140e96eaa:
  iVar4 = *(int *)(param_1 + 0xd8);
  *(uint *)(param_1 + 0xd8) = iVar4 + 1U;
  if (*(uint *)(param_1 + 0xdc) < iVar4 + 1U) {
    FUN_1488d29a6(param_1 + 0xb0,iVar4);
  }
  lVar8 = param_1 + 0xb0;
  if (*(longlong *)(param_1 + 0xd0) != 0) {
    lVar8 = *(longlong *)(param_1 + 0xd0);
  }
  *(longlong *)(lVar8 + (longlong)iVar4 * 8) = *param_2;
  *param_2 = 0;
  return;
}



// FUNCTION 140e970d4 FUN_140e970d4 body=515 status=ok
// SIG undefined FUN_140e970d4(void)

undefined8 * FUN_140e970d4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_140c83e26();
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x1b] = 0xc3c23d70a;
  param_1[0x1c] = &DAT_3f8000003f800000;
  *param_1 = &PTR_FUN_14b3ed460;
  *(undefined1 *)(param_1 + 0x23) = 0;
  *(undefined8 *)((longlong)param_1 + 0x11c) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  FUN_140e972d8(param_1 + 0x2a);
  param_1[0x7e] = DAT_14cadde38;
  param_1[0x7f] = DAT_14cadde40;
  param_1[0x80] = DAT_14cadde48;
  param_1[0x81] = DAT_14cadde50;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)((longlong)param_1 + 0x424) = 0;
  *(undefined4 *)(param_1 + 0x85) = 0;
  *(undefined4 *)((longlong)param_1 + 0x42c) = 0x3ff00000;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0x3ff0000000000000;
  param_1[0x8b] = 0x3ff0000000000000;
  param_1[0x8c] = 0x3ff0000000000000;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)((longlong)param_1 + 0x484) = 0;
  *(undefined4 *)(param_1 + 0x91) = 0;
  *(undefined4 *)((longlong)param_1 + 0x48c) = 0x3ff00000;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x96] = 0x3ff0000000000000;
  param_1[0x97] = 0x3ff0000000000000;
  param_1[0x98] = 0x3ff0000000000000;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0x3f800000;
  *(undefined1 *)((longlong)param_1 + 0x4dc) = 3;
  param_1[0x9e] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  param_1[0x9c] = DAT_14c8462c0;
  param_1[0x9d] = uVar1;
  uVar1 = DAT_14c8464e8;
  param_1[0x9f] = DAT_14c8464e0;
  param_1[0xa0] = uVar1;
  param_1[0xa1] = DAT_14c8464f0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xb0) = 0;
  *(undefined8 *)((longlong)param_1 + 0x514) = 0;
  param_1[0xb4] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  param_1[0xb2] = DAT_14c8462c0;
  param_1[0xb3] = uVar1;
  *(undefined4 *)(param_1 + 0xb5) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5fc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x604) = 0;
  param_1[0xc2] = 0;
  *(undefined4 *)(param_1 + 0xc3) = 0;
  return param_1;
}



// FUNCTION 140e972d8 FUN_140e972d8 body=363 status=ok
// SIG undefined FUN_140e972d8(void)

void FUN_140e972d8(undefined8 *param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  puVar3 = &DAT_14c846480;
  puVar4 = param_1;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0xc;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = DAT_14c8463f8;
  param_1[0x19] = DAT_14c8463f0;
  param_1[0x1a] = uVar1;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x1c;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x2a] = DAT_14c8462d0;
  uVar1 = DAT_14c8462c8;
  param_1[0x28] = DAT_14c8462c0;
  param_1[0x29] = uVar1;
  uVar1 = DAT_14c8462c8;
  param_1[0x2b] = DAT_14c8462c0;
  param_1[0x2c] = uVar1;
  param_1[0x2d] = DAT_14c8462d0;
  param_1[0x30] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x2e] = DAT_14c8464e0;
  param_1[0x2f] = uVar1;
  *(undefined1 *)(param_1 + 0x31) = 0;
  param_1[0x35] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0;
  param_1[0x33] = 0;
  *(undefined8 *)((longlong)param_1 + 0x19d) = 0;
  *(undefined8 *)((longlong)param_1 + 0x18c) = 0;
  *(undefined1 **)((longlong)param_1 + 0x1b4) = &DAT_3f8000003f800000;
  *(undefined2 *)((longlong)param_1 + 0x1bc) = 0;
  param_1[0x38] = 0x3f80000000000000;
  param_1[0x39] = 0x3f800000;
  param_1[0x3a] = 0;
  param_1[0x3b] = &DAT_3f8000003f800000;
  *(undefined2 *)(param_1 + 0x3c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1e4) = 0x3f80000000000000;
  *(undefined4 *)((longlong)param_1 + 0x1ec) = 0x3f800000;
  param_1[0x46] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  puVar3 = &DAT_14c846480;
  puVar4 = param_1 + 0x48;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}



// FUNCTION 140e97450 FUN_140e97450 body=31 status=ok
// SIG undefined FUN_140e97450(void)

undefined8 FUN_140e97450(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e97470 FUN_140e97470 body=67 status=ok
// SIG undefined FUN_140e97470(void)

void FUN_140e97470(longlong param_1,char param_2)

{
  FUN_140e974b4();
  if (((param_2 != '\0') && (*(char *)(param_1 + 0x178) == '\x03')) &&
     (*(longlong *)(param_1 + 0xe10) != 0)) {
    FUN_1447f69b6(*(longlong *)(param_1 + 0xe10) + 0x57b8);
    return;
  }
  return;
}



// FUNCTION 140e974b4 FUN_140e974b4 body=293 status=ok
// SIG undefined FUN_140e974b4(void)

void FUN_140e974b4(longlong param_1,undefined4 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  char local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar3 = (char)param_2;
  if ((cVar3 != '\0') && (*(char *)(param_1 + 0xb51) == '\x01')) {
    *(undefined1 *)(param_1 + 0xb51) = 0;
  }
  local_30 = param_1;
  local_28 = cVar3;
  FUN_1447cd2ec(param_1 + 0xa30);
  if ((*(longlong *)(param_1 + 0xb18) != 0) && (*(longlong **)(param_1 + 0xb20) != (longlong *)0x0))
  {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0xb20) + 0x18))();
    local_30 = param_1;
    local_28 = cVar3;
    FUN_1447cd2ec(lVar4 + 0x30);
    FUN_140b969f2(lVar4 + 0x40,param_1,param_2);
  }
  if (cVar3 != '\0') {
    bVar2 = *(byte *)(param_1 + 0xbd8);
    if ((int)(uint)bVar2 < *(int *)(param_1 + 0xbf0)) {
      pbVar1 = (byte *)(*(longlong *)(param_1 + 0xbe8) + 5 +
                       (ulonglong)bVar2 * 0x80 + (ulonglong)bVar2 * 8);
      *pbVar1 = *pbVar1 & 0xfe;
    }
  }
  if (*(char *)(param_1 + 0xb50) == '\x01') {
    cVar3 = FUN_1406f1180(param_1);
    if (cVar3 == '\0') {
      *(undefined1 *)(param_1 + 0xb50) = 0;
    }
  }
  if ((*(longlong *)(param_1 + 0xd60) != DAT_14cb95120) && ((*(byte *)(param_1 + 0xd50) & 1) == 0))
  {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e975fa FUN_140e975fa body=40 status=ok
// SIG undefined FUN_140e975fa(void)

undefined8 FUN_140e975fa(undefined8 param_1,int param_2)

{
  FUN_1413ff4a0();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e97622 FUN_140e97622 body=120 status=ok
// SIG undefined FUN_140e97622(void)

void FUN_140e97622(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*(char *)(param_1 + 0x468) == '\x01') &&
     (plVar2 = *(longlong **)(param_1 + 0xa8), plVar2 != (longlong *)0x0)) {
    uVar1 = FUN_140da3b08();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_140da3b08();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
        lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
        FUN_140457ffc(lVar4 + 0x10,param_1);
      }
    }
  }
  FUN_140e9769a(param_1);
  return;
}



// FUNCTION 140e9769a FUN_140e9769a body=509 status=ok
// SIG undefined FUN_140e9769a(void)

void FUN_140e9769a(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  
  plVar5 = *(longlong **)(param_1 + 0xa8);
  if (plVar5 != (longlong *)0x0) {
    uVar4 = FUN_14058c734();
    plVar5 = (longlong *)(**(code **)(*plVar5 + 0x288))(plVar5,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_14058c734();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
        lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
        if ((param_1 != 0) && ((lVar7 != 0 && (*(int *)(param_1 + 0x464) != 0x7fffffff)))) {
          FUN_140e97898(lVar7 + 0x1a0);
        }
      }
    }
  }
  if ((((*(longlong **)(param_1 + 0x458) != (longlong *)0x0) && (*(int *)(param_1 + 0x454) != 0)) &&
      (uVar2 = *(uint *)(param_1 + 0x450), -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x454))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      lVar7 = (**(code **)(**(longlong **)(param_1 + 0x458) + 0x18))();
      if (lVar7 != 0) {
        FUN_140e9795c(lVar7,*(undefined4 *)(param_1 + 0x464),1);
        iVar3 = *(int *)(param_1 + 0x464);
        if ((-1 < (longlong)iVar3) && (iVar3 < *(int *)(lVar7 + 0xa8))) {
          lVar8 = (longlong)iVar3 * 0x170;
          FUN_140e7ecae(lVar7,*(longlong *)(lVar7 + 0xa0) + lVar8);
          *(undefined8 *)(*(longlong *)(lVar7 + 0xa0) + 0x28 + lVar8) = 0;
          *(undefined8 *)(*(longlong *)(lVar7 + 0xa0) + 0x30 + lVar8) = 0;
        }
        FUN_140457ffc(lVar7 + 0x88,param_1);
        *(undefined4 *)(param_1 + 0x464) = 0x7fffffff;
      }
    }
  }
  puVar1 = (uint *)(param_1 + 0x430);
  plVar5 = *(longlong **)(param_1 + 0x438);
  if ((((plVar5 != (longlong *)0x0) && (*(int *)(param_1 + 0x434) != 0)) &&
      (uVar2 = *puVar1, -1 < (int)uVar2)) && ((int)uVar2 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x10) == *(int *)(param_1 + 0x434))) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      (**(code **)(*plVar5 + 0xc0))(plVar5,*(undefined4 *)(param_1 + 0x460));
      *(undefined4 *)(param_1 + 0x460) = 0xffffffff;
    }
  }
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  puVar1[0] = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + 0x438) = 0;
  FUN_140cc8a2e(param_1);
  return;
}



// FUNCTION 140e97898 FUN_140e97898 body=104 status=ok
// SIG undefined FUN_140e97898(void)

undefined8 FUN_140e97898(longlong *param_1,int param_2)

{
  int iVar1;
  longlong *plVar2;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + ((longlong)param_2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      do {
        if (*(int *)(*param_1 + (longlong)iVar1 * 0x14) == param_2) {
          FUN_140e97900(param_1,iVar1);
          return 1;
        }
        iVar1 = *(int *)(*param_1 + (longlong)iVar1 * 0x14 + 0xc);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 140e97900 FUN_140e97900 body=91 status=ok
// SIG undefined FUN_140e97900(void)

void FUN_140e97900(longlong *param_1,int param_2)

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
  lVar1 = *param_1 + (longlong)param_2 * 0x14;
  lVar5 = (longlong)*(int *)(lVar1 + 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(*param_1 + (longlong)iVar2 * 0x14 + 0xc);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + 0xc);
  FUN_140e979cc(param_1,param_2,1);
  return;
}



// FUNCTION 140e9795c FUN_140e9795c body=112 status=ok
// SIG undefined FUN_140e9795c(void)

void FUN_140e9795c(longlong param_1,uint param_2,char param_3)

{
  longlong lVar1;
  longlong *plVar2;
  
  if ((((-1 < (int)param_2) && ((int)param_2 < *(int *)(param_1 + 0xa8))) &&
      (*(longlong *)(param_1 + 0x150) != 0)) &&
     (*(char *)(*(longlong *)(param_1 + 0x150) + 0x178) == '\x03')) {
    lVar1 = *(longlong *)(param_1 + 0xa0);
    plVar2 = *(longlong **)(lVar1 + 0x20 + (ulonglong)param_2 * 0x170);
    if (plVar2 != (longlong *)0x0) {
      if ((param_3 != '\0') && ((*(uint *)(plVar2 + 1) >> 0x1e & 1) == 0)) {
        (**(code **)(*plVar2 + 0x5c8))(plVar2,0);
      }
      *(undefined8 *)(lVar1 + (ulonglong)param_2 * 0x170 + 0x20) = 0;
    }
  }
  return;
}



// FUNCTION 140e979cc FUN_140e979cc body=138 status=ok
// SIG undefined FUN_140e979cc(void)

void FUN_140e979cc(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x14 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x14) = param_2;
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
      puVar7 = puVar7 + 5;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140e97a56 FUN_140e97a56 body=41 status=ok
// SIG undefined FUN_140e97a56(void)

void FUN_140e97a56(undefined8 param_1,longlong *param_2)

{
  FUN_140e97a80();
                    /* WARNING: Could not recover jumptable at 0x000140e97a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc28);
  return;
}



// FUNCTION 140e97a80 FUN_140e97a80 body=633 status=ok
// SIG undefined FUN_140e97a80(void)

void FUN_140e97a80(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  ulonglong *puVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3ca30);
  FUN_1403a6a0c(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
LAB_140e97aed:
    FUN_140e97cfa(param_2,param_1 + 0x40);
  }
  else {
    if ((int)param_2[8] < 0x1cf) {
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_140219018(param_2,&local_58);
      puVar4 = local_58;
      if ((longlong)(int)uStack_50 != 0) {
        lVar11 = (longlong)(int)uStack_50 << 3;
        lVar12 = 0;
        do {
          iVar7 = *(int *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar7 + 1U) {
            FUN_1409670d4((longlong *)(param_1 + 0x40),iVar7);
          }
          lVar6 = *(longlong *)(param_1 + 0x40);
          *(undefined8 *)(lVar6 + (longlong)iVar7 * 0x10) = puVar4[lVar12];
          *(longlong *)(lVar6 + 8 + (longlong)iVar7 * 0x10) = lVar12;
          lVar12 = lVar12 + 1;
          lVar11 = lVar11 + -8;
        } while (lVar11 != 0);
      }
    }
    else {
      iVar7 = FUN_1448332aa(param_2,&DAT_149e3ca30);
      if (1 < iVar7) goto LAB_140e97aed;
      local_58 = (undefined8 *)0x0;
      uStack_50 = 0;
      FUN_1468b37f8(param_2,&local_58);
      plVar3 = (longlong *)(param_1 + 0x40);
      FUN_146899f10(plVar3,uStack_50 & 0xffffffff);
      if ((longlong)(int)uStack_50 != 0) {
        puVar4 = (undefined8 *)((longlong)local_58 + (longlong)(int)uStack_50 * 0xc);
        puVar10 = local_58;
        do {
          iVar7 = *(int *)(param_1 + 0x48);
          *(uint *)(param_1 + 0x48) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x4c) < iVar7 + 1U) {
            FUN_1409670d4(plVar3,iVar7);
          }
          lVar11 = *plVar3;
          *(undefined8 *)(lVar11 + (longlong)iVar7 * 0x10) = *puVar10;
          *(ulonglong *)(lVar11 + 8 + (longlong)iVar7 * 0x10) = (ulonglong)*(byte *)(puVar10 + 1);
          puVar10 = (undefined8 *)((longlong)puVar10 + 0xc);
        } while (puVar10 != puVar4);
      }
    }
    if (local_58 != (undefined8 *)0x0) {
      FUN_1400020a8(local_58);
    }
  }
  if ((int)param_2[8] < 0x186) {
    puVar5 = (ulonglong *)param_2[1];
    puVar2 = (uint *)*puVar5 + 1;
    if ((uint *)puVar5[1] < puVar2) {
      local_58 = (undefined8 *)((ulonglong)local_58 & 0xffffffff00000000);
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,4);
      uVar8 = (uint)local_58;
      if (1 < (uint)local_58) {
        FUN_14572541c(param_2);
        uVar8 = (uint)local_58;
      }
    }
    else {
      uVar8 = *(uint *)*puVar5;
      *puVar5 = (ulonglong)puVar2;
    }
    *(bool *)(param_1 + 0x50) = uVar8 != 0;
  }
  else {
    local_58 = (undefined8 *)CONCAT71(local_58._1_7_,*(undefined1 *)(param_1 + 0x50));
    puVar5 = (ulonglong *)param_2[1];
    puVar1 = (undefined1 *)*puVar5 + 1;
    if ((undefined1 *)puVar5[1] < puVar1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_58,1);
      uVar9 = local_58._0_1_;
    }
    else {
      uVar9 = *(undefined1 *)*puVar5;
      *puVar5 = (ulonglong)puVar1;
    }
    *(undefined1 *)(param_1 + 0x50) = uVar9;
  }
  if ((*(byte *)(param_2 + 5) & 5) != 0) {
    if (((*(byte *)((longlong)param_2 + 0x35) & 0x10) != 0) && ((*(byte *)(param_2 + 5) & 1) != 0))
    {
      FUN_146899f3c(param_1);
    }
    FUN_1409676c4(param_1);
  }
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e97cfa FUN_140e97cfa body=476 status=ok
// SIG undefined FUN_140e97cfa(void)

longlong * FUN_140e97cfa(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  int iVar2;
  ulonglong *puVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar3 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1409ce9d2(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x100000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar6 = 8;
    lVar7 = 0;
    do {
      lVar4 = *param_2;
      (**(code **)(*param_1 + 0x160))(param_1,lVar4 + lVar6 + -8);
      FUN_1408383eb(param_1,lVar4 + lVar6);
      lVar7 = lVar7 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar7 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_1409ce9d2(param_2), 0 < (int)local_3c)) {
      iVar5 = 0;
      do {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_1409670d4(param_2,iVar2);
        }
        lVar7 = *param_2;
        lVar6 = lVar7 + (longlong)iVar2 * 0x10;
        FUN_140e97ed7(lVar6);
        (**(code **)(*param_1 + 0x160))(param_1,lVar6);
        FUN_1408383eb(param_1,lVar7 + (longlong)iVar2 * 0x10 + 8);
        iVar5 = iVar5 + 1;
      } while (iVar5 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e97ed7 FUN_140e97ed7 body=7 status=ok
// SIG undefined FUN_140e97ed7(void)

void FUN_140e97ed7(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return;
}



// FUNCTION 140e97ede FUN_140e97ede body=49 status=ok
// SIG undefined FUN_140e97ede(void)

longlong FUN_140e97ede(void)

{
  if (DAT_14c99fa18 == 0) {
    FUN_140f50038(&DAT_14c99fa18,&PTR_s__Script_EngineMessages_14a158b08);
  }
  return DAT_14c99fa18;
}



// FUNCTION 140e97f0f FUN_140e97f0f body=49 status=ok
// SIG undefined FUN_140e97f0f(void)

longlong FUN_140e97f0f(void)

{
  if (DAT_14caa1798 == 0) {
    FUN_140f50038(&DAT_14caa1798,&PTR_s__Script_Landscape_14a3a84e8);
  }
  return DAT_14caa1798;
}



// FUNCTION 140e97f40 FUN_140e97f40 body=3800 status=ok
// SIG undefined FUN_140e97f40(void)

void FUN_140e97f40(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined2 *_Src;
  longlong *_Src_00;
  undefined4 *puVar7;
  undefined1 *_Src_01;
  undefined1 auStack_b8 [32];
  undefined4 *local_98;
  undefined8 local_90;
  undefined *local_88;
  code *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined2 local_32;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_30 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1468d96f0;
      local_90 = 0;
      local_98 = (undefined4 *)0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_30);
            goto LAB_140e9803a;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_30) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_30,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_30,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_30,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_30,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
LAB_140e9803a:
  local_32 = 0;
  FUN_140e98e1a();
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_32);
            goto LAB_140e980ee;
          }
        }
        _Src = (undefined2 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_32) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_32,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_32,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_32,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_32,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_32);
  }
LAB_140e980ee:
  local_48[0] = 0;
  local_48[1] = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951ae0) {
    FUN_144b3d300(&DAT_14c951ae0);
    if (DAT_14c951ae0 == -1) {
      FUN_1446ddbd2();
      local_80 = FUN_140b31576;
      local_88 = &DAT_14c951a38;
      local_90 = 0;
      local_98 = (undefined4 *)0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_48);
            goto LAB_140e981ba;
          }
        }
        _Src_00 = (longlong *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_48,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(local_48,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_48,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_48);
  }
LAB_140e981ba:
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952a58) {
    FUN_144b3d300(&DAT_14c952a58);
    if (DAT_14c952a58 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1403a682c;
      local_90 = 0;
      local_98 = (undefined4 *)0x108001;
      FUN_14000176a(&DAT_14c952a08,L"FStructProperty",0x100000,0);
      atexit(FUN_142818c9e);
      _Init_thread_footer(&DAT_14c952a58);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_140e9827e;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_140e9827e:
  local_5c = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9523c8) {
    FUN_144b3d300(&DAT_14c9523c8);
    if (DAT_14c9523c8 == -1) {
      FUN_14475b26a();
      local_80 = FUN_1408a629c;
      local_88 = &DAT_14c9520b8;
      local_90 = 0;
      local_98 = (undefined4 *)0x1008101;
      FUN_14000176a(&DAT_14c952378,L"FFloatProperty",0x100,0);
      atexit(FUN_14281708e);
      _Init_thread_footer(&DAT_14c9523c8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_5c);
            goto LAB_140e9834a;
          }
        }
        puVar7 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_5c) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_5c,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_5c,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_5c,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_5c,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5c);
  }
LAB_140e9834a:
  local_5d = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9496d8) {
    FUN_144b3d300(&DAT_14c9496d8);
    if (DAT_14c9496d8 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_140a4831c;
      local_98 = (undefined4 *)0x1000000008001;
      local_90 = 0;
      FUN_14000176a(&DAT_14c949688,L"FEnumProperty",0x1000000000000,0);
      atexit(FUN_1427e14fe);
      _Init_thread_footer(&DAT_14c9496d8);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_5d);
            goto LAB_140e98413;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != &local_5d) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_5d,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(&local_5d,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_5d,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_5d,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_5d);
  }
LAB_140e98413:
  local_68 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9520b0) {
    FUN_144b3d300(&DAT_14c9520b0);
    if (DAT_14c9520b0 == -1) {
      local_88 = (undefined *)FUN_1446ddbd2();
      local_80 = FUN_1409e12a0;
      local_90 = 0;
      local_98 = (undefined4 *)0xa001;
      FUN_14000176a(&DAT_14c952060,L"FNameProperty",0x2000,0);
      atexit(FUN_142816ef9);
      _Init_thread_footer(&DAT_14c9520b0);
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
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_68);
            goto LAB_140e984e0;
          }
        }
        puVar6 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar6 != &local_68) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_68,puVar6,(int)plVar1[6]);
          }
          else {
            memcpy(&local_68,puVar6,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_90 = CONCAT44(local_90._4_4_,(int)plVar1[6]);
        local_98 = (undefined4 *)((ulonglong)local_98 & 0xffffffff00000000);
        FUN_1400746b0(plVar1,&local_68,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_68,lVar2);
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
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_68);
  }
LAB_140e984e0:
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_98 = &local_78;
  local_78 = local_58;
  uStack_74 = uStack_54;
  uStack_70 = uStack_50;
  uStack_6c = uStack_4c;
  local_80 = (code *)local_68;
  local_88 = (undefined *)CONCAT71(local_88._1_7_,local_5d);
  local_90 = CONCAT44(local_90._4_4_,local_5c);
  (**(code **)(*param_1 + 0x4b0))(param_1,local_30,local_32,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e98e1a FUN_140e98e1a body=174 status=ok
// SIG undefined FUN_140e98e1a(void)

undefined * FUN_140e98e1a(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9522c0) {
    FUN_144b3d300(&DAT_14c9522c0);
    if (DAT_14c9522c0 == -1) {
      FUN_14475b26a();
      FUN_14000176a(&DAT_14c952270,L"FUInt16Property",0x40000,0,0x1048001,0,&DAT_14c9520b8,
                    FUN_1468e1174);
      atexit(FUN_142817007);
      _Init_thread_footer(&DAT_14c9522c0);
    }
  }
  return &DAT_14c952270;
}



// FUNCTION 140e98ec8 FUN_140e98ec8 body=268 status=ok
// SIG undefined FUN_140e98ec8(void)

void FUN_140e98ec8(longlong param_1,longlong param_2,ulonglong param_3,undefined8 param_4,
                  undefined4 *param_5,undefined4 param_6,undefined1 param_7,undefined8 param_8)

{
  undefined1 auStack_a8 [32];
  longlong local_88;
  byte local_80;
  byte local_7f;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined8 local_60;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_140e98fd6(&local_88);
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  local_78 = *param_5;
  uStack_74 = param_5[1];
  uStack_70 = param_5[2];
  uStack_6c = param_5[3];
  local_68 = param_6;
  local_64 = param_7;
  local_60 = param_8;
  local_80 = (byte)(param_3 >> 3) & 0x80 | (byte)(param_3 & 0xffffffff) & 0x7f;
  local_7f = (byte)((uint)param_3 >> 6) & 0xc |
             (byte)((param_3 & 0xffffffff) >> 6) & 2 | (byte)((param_3 & 0xffffffff) >> 0xb) & 1 |
             local_7f & 0xf0;
  local_88 = param_2;
  FUN_140e99050(param_1 + 0x110,&local_88,param_4);
  if ((local_50 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e98fd6 FUN_140e98fd6 body=122 status=ok
// SIG undefined FUN_140e98fd6(void)

undefined8 * FUN_140e98fd6(undefined8 *param_1)

{
  char cVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0xce;
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) & 0xe1 | 4;
  param_1[2] = &DAT_4030000000000000;
  param_1[3] = 0x4022000000000000;
  *(undefined4 *)(param_1 + 4) = 0x42c80000;
  *(undefined1 *)((longlong)param_1 + 0x24) = 4;
  param_1[5] = 0;
  param_1[6] = 0;
  cVar1 = FUN_140691b73();
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) & 0xfb | cVar1 << 2;
  cVar1 = FUN_140691bc1();
  *(byte *)((longlong)param_1 + 9) = *(byte *)((longlong)param_1 + 9) & 0xf7 | cVar1 << 3;
  return param_1;
}



// FUNCTION 140e99050 FUN_140e99050 body=1619 status=ok
// SIG undefined FUN_140e99050(void)

longlong * FUN_140e99050(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  int *piVar1;
  longlong lVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  DWORD DVar6;
  DWORD DVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  longlong lVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  int iVar22;
  undefined *puVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined4 uVar27;
  undefined1 auStack_1c8 [32];
  undefined8 local_1a8;
  undefined1 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined4 local_180;
  undefined1 local_17c;
  char local_178 [16];
  longlong *local_168;
  int local_150;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  plVar8 = (longlong *)(**(code **)(*param_1 + 0x20))();
  if ((*(byte *)(param_2 + 1) & 0x10) == 0) {
    lVar11 = *param_2;
    lVar15 = param_2[5];
    plVar9 = (longlong *)(**(code **)(*param_1 + 0x20))(param_1);
    if ((longlong)(int)plVar9[1] != 0) {
      lVar25 = *plVar9;
      lVar10 = 0;
      do {
        if (((lVar15 != 0) && (*(longlong *)(lVar25 + lVar10) == lVar15)) ||
           ((lVar2 = lVar25 + lVar10, lVar11 != 0 && (*(longlong *)(lVar2 + 8) == lVar11)))) {
          iVar22 = (int)(lVar10 >> 3) * -0x49249249;
          if (iVar22 != -1) {
            lVar11 = (longlong)iVar22 * 0x38;
            plVar9 = *(longlong **)(*plVar8 + 0x10 + lVar11);
            *(undefined4 *)(*plVar8 + 0x34 + lVar11) = 0;
            goto LAB_140e99428;
          }
          break;
        }
        lVar10 = lVar10 + 0x38;
      } while (lVar2 + 0x38 != (longlong)(int)plVar9[1] * 0x38 + lVar25);
    }
  }
  lVar11 = (**(code **)(*param_1 + 0x30))(param_1);
  if (param_2[6] != 0) {
    lVar11 = param_2[6];
  }
  if (lVar11 != 0) {
    uVar12 = FUN_14058439c();
    local_198 = 0;
    uStack_190 = 0;
    local_1a0 = 0;
    local_1a8 = 0;
    plVar9 = (longlong *)FUN_140584627(lVar11,uVar12,0,0);
    if (plVar9 == (longlong *)0x0) {
LAB_140e9962a:
      plVar9 = (longlong *)0x0;
    }
    else {
      lVar11 = FUN_140288b94();
      if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar11 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) !=
          lVar11 + 0x30)) goto LAB_140e9962a;
    }
    *(undefined1 *)(plVar9 + 9) = 5;
    uVar12 = (**(code **)(*param_1 + 0x38))(param_1);
    (**(code **)(*plVar9 + 0x440))(plVar9,uVar12);
    (**(code **)(*plVar9 + 0xa78))(plVar9,*param_2);
    lVar11 = DAT_14cb7d380;
    iVar22 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar22 == 0x40000002) {
      uVar13 = 0;
    }
    else {
      bVar26 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar22 != 2)) {
        if (iVar22 == 1) {
          DVar6 = FUN_140ad26c0();
          DVar7 = GetCurrentThreadId();
          bVar26 = DVar6 == DVar7;
        }
        else {
          bVar26 = false;
        }
      }
      uVar13 = (ulonglong)(bVar26 ^ 1);
    }
    FUN_140c0573e(plVar9,*(int *)(lVar11 + uVar13 * 4) != 0);
    if ((*(byte *)(param_2 + 1) & 4) != 0) {
      FUN_140357fa8(plVar9,8,1);
    }
    plVar14 = (longlong *)(**(code **)(*param_1 + 0x50))(param_1);
    if (plVar14 != (longlong *)0x0) {
      lVar11 = (**(code **)(*plVar14 + 0x10))(plVar14);
      if (lVar11 != 0) {
        FUN_140e996a4(plVar9,lVar11);
      }
    }
    FUN_14057a3b2(plVar9,1,1,1);
    *(byte *)((longlong)plVar9 + 0x4a) =
         *(byte *)((longlong)plVar9 + 0x4a) & 0xfe | *(byte *)(param_2 + 1) >> 5 & 1;
    if ((plVar9 != (longlong *)0x0) && ((*(byte *)((longlong)param_2 + 9) & 1) != 0)) {
      lVar11 = FUN_144a7e9aa();
      if ((*(int *)(lVar11 + 0x38) <= *(int *)(plVar9[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar11 + 0x38) * 8) ==
          lVar11 + 0x30)) {
        FUN_140388f42(plVar9);
      }
    }
    lVar11 = plVar8[1];
    uVar4 = (int)lVar11 + 1;
    *(uint *)(plVar8 + 1) = uVar4;
    if (*(uint *)((longlong)plVar8 + 0xc) < uVar4) {
      FUN_140e99cb2(plVar8);
    }
    lVar15 = *plVar8;
    lVar11 = (longlong)(int)lVar11 * 0x38;
    plVar8 = (longlong *)(lVar15 + lVar11);
    *(undefined4 *)(lVar15 + 0x28 + lVar11) = 0;
    *(undefined8 *)(lVar15 + 0x30 + lVar11) = 0;
    *(undefined8 *)(lVar15 + lVar11) = 0;
    ((undefined8 *)(lVar15 + lVar11))[1] = 0;
    *(undefined8 *)(lVar15 + 0x10 + lVar11) = 0;
    lVar11 = *param_2;
    if (DAT_14c950c29 == '\x01') {
      if (lVar11 == 0) {
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar11 = *param_2;
      }
    }
    plVar8[1] = lVar11;
    *plVar8 = param_2[5];
    lVar11 = param_2[3];
    plVar8[3] = param_2[2];
    plVar8[4] = lVar11;
    *(int *)(plVar8 + 5) = (int)param_2[4];
    *(undefined1 *)((longlong)plVar8 + 0x2c) = *(undefined1 *)((longlong)param_2 + 0x24);
    bVar16 = *(byte *)(param_2 + 1) >> 3 & 1;
    bVar3 = *(byte *)((longlong)plVar8 + 0x2d);
    *(byte *)((longlong)plVar8 + 0x2d) = bVar3 & 0xfe | bVar16;
    bVar17 = *(byte *)(param_2 + 1) & 2;
    *(byte *)((longlong)plVar8 + 0x2d) = bVar3 & 0xfc | bVar16 | bVar17;
    bVar18 = *(byte *)(param_2 + 1) >> 4 & 4;
    *(byte *)((longlong)plVar8 + 0x2d) = bVar3 & 0xf8 | bVar16 | bVar17 | bVar18;
    bVar19 = *(byte *)(param_2 + 1) >> 4 & 8;
    *(byte *)((longlong)plVar8 + 0x2d) = bVar3 & 0xf0 | bVar16 | bVar17 | bVar18 | bVar19;
    bVar20 = *(byte *)((longlong)param_2 + 9) & 0x10;
    *(byte *)((longlong)plVar8 + 0x2d) = bVar3 & 0xe0 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20;
    bVar21 = (*(byte *)((longlong)param_2 + 9) & 4) << 3;
    *(byte *)((longlong)plVar8 + 0x2d) =
         bVar3 & 0xc0 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20 | bVar21;
    *(byte *)((longlong)plVar8 + 0x2d) =
         bVar3 & 0x80 | bVar16 | bVar17 | bVar18 | bVar19 | bVar20 | bVar21 |
         (*(byte *)((longlong)param_2 + 9) & 8) << 3;
    if ((plVar9 != (longlong *)0x0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(plVar9);
    }
    plVar8[2] = (longlong)plVar9;
    uVar27 = FUN_1403f85a2(param_1,local_178);
    FUN_1403f7dfa(uVar27,plVar8,local_178);
    FUN_140b506a4(plVar9);
    lVar11 = (**(code **)(*param_1 + 8))(param_1);
    if (lVar11 != 0) {
      lVar15 = (**(code **)(*param_1 + 0x20))(param_1);
      local_188 = "OnScreenParticleFinished";
      local_180 = 0x18;
      local_17c = 0;
      uVar5 = FUN_14001a6c0(&local_188,1);
      uVar4 = *(uint *)(lVar11 + 0xc);
      *(uint *)(lVar15 + 0x20) = uVar4;
      if ((int)uVar4 < DAT_14c9647dc) {
        lVar11 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
      }
      else {
        lVar11 = 0;
      }
      iVar22 = *(int *)(lVar11 + 0x10);
      if (*(int *)(lVar11 + 0x10) == 0) {
        LOCK();
        iVar22 = DAT_14c964868 + 1;
        UNLOCK();
        iVar24 = DAT_14c964868 + 1;
        bVar26 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar22;
        if (bVar26) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar24);
        }
        LOCK();
        iVar22 = *(int *)(lVar11 + 0x10);
        bVar26 = iVar22 == 0;
        if (bVar26) {
          *(int *)(lVar11 + 0x10) = iVar24;
          iVar22 = 0;
        }
        UNLOCK();
        if (bVar26) {
          iVar22 = iVar24;
        }
      }
      *(int *)(lVar15 + 0x24) = iVar22;
      *(ulonglong *)(lVar15 + 0x28) = (ulonglong)uVar5;
      lVar11 = (**(code **)(*param_1 + 0x20))(param_1);
      (**(code **)(*plVar9 + 0xa80))(plVar9,lVar11 + 0x20);
    }
LAB_140e99428:
    if (plVar9 != (longlong *)0x0) {
      uVar12 = (**(code **)(*param_1 + 0x30))(param_1);
      local_178[0] = '\0';
      local_150 = 0;
      FUN_1456bb102(local_178,uVar12);
      local_188 = (char *)*param_3;
      local_180 = *(undefined4 *)(param_3 + 1);
      FUN_140e99737(plVar9,&local_188,local_178);
      lVar11 = DAT_14c9a3da0;
      if ((longlong)local_150 != 0) {
        lVar25 = (longlong)local_150 + -1;
        lVar15 = lVar25 * 0x10;
        FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar15),
                      *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar15));
        if (*(longlong *)(lVar11 + lVar15) != 0) {
          FUN_1400020a8();
        }
        lVar11 = DAT_14c9a3da0;
        iVar22 = (int)lVar25;
        if (DAT_14c9a3dd4 != 0) {
          *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar22;
        }
        *(undefined4 *)(lVar11 + lVar15) = 0xffffffff;
        iVar24 = -1;
        if (0 < DAT_14c9a3dd4) {
          iVar24 = DAT_14c9a3dd0;
        }
        *(int *)(lVar11 + 4 + lVar15) = iVar24;
        DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
        puVar23 = &DAT_14c9a3db0;
        if (DAT_14c9a3dc0 != (undefined *)0x0) {
          puVar23 = DAT_14c9a3dc0;
        }
        iVar24 = iVar22 + 0x1f;
        if (-1 < iVar22) {
          iVar24 = iVar22;
        }
        bVar3 = (byte)lVar25 & 0x1f;
        DAT_14c9a3dd0 = iVar22;
        *(uint *)(puVar23 + (longlong)(iVar24 >> 5) * 4) =
             *(uint *)(puVar23 + (longlong)(iVar24 >> 5) * 4) &
             (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
        local_150 = 0;
      }
      if ((local_178[0] == '\x03') && (local_168 != (longlong *)0x0)) {
        LOCK();
        piVar1 = (int *)((longlong)local_168 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_168 + 0x10))();
        }
      }
      (**(code **)(*plVar9 + 0xa60))(plVar9,1);
      goto LAB_140e9948e;
    }
  }
  plVar9 = (longlong *)0x0;
LAB_140e9948e:
  if ((local_40 ^ (ulonglong)auStack_1c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar9;
}



// FUNCTION 140e996a4 FUN_140e996a4 body=147 status=ok
// SIG undefined FUN_140e996a4(void)

void FUN_140e996a4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  
  if (*(longlong *)(param_1 + 0x5c0) != param_2) {
    if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_2);
    }
    *(longlong *)(param_1 + 0x5c0) = param_2;
    if ((~*(byte *)(param_1 + 0x9c) & 3) == 0) {
      bVar2 = *(byte *)(param_1 + 0x9d);
      if ((bVar2 & 1) == 0) {
LAB_140e99708:
        *(byte *)(param_1 + 0x9d) = bVar2 | 1;
        FUN_1401057d4(param_1);
        FUN_14010586c(&DAT_14cad0140,param_1);
        return;
      }
      if (*(longlong *)(param_1 + 0xb0) == 0) {
        lVar1 = FUN_1448abda6(param_1);
        if (lVar1 == 0) {
          bVar2 = *(byte *)(param_1 + 0x9d);
          goto LAB_140e99708;
        }
      }
    }
  }
  return;
}



// FUNCTION 140e99737 FUN_140e99737 body=1401 status=ok
// SIG undefined FUN_140e99737(void)

/* WARNING: Removing unreachable block (ram,0x000140e99b1a) */

void FUN_140e99737(longlong *param_1,longlong *param_2,char *param_3)

{
  int *piVar1;
  uint uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  longlong *plVar13;
  undefined8 ****ppppuVar14;
  undefined1 *puVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_168 [40];
  longlong local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  char local_110 [8];
  undefined8 local_108;
  longlong *local_100;
  undefined8 local_f8;
  char local_f0;
  undefined4 local_e8 [2];
  char local_e0;
  undefined8 local_d8;
  longlong *local_d0;
  undefined4 local_b8 [2];
  undefined8 ***local_b0 [3];
  ushort local_98;
  byte local_90;
  undefined1 local_88 [48];
  undefined1 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((param_1 != (longlong *)0x0) && ((longlong)(int)param_2[1] != 0)) {
    lVar16 = (longlong)(int)param_2[1] * 0x58;
    plVar13 = (longlong *)(*param_2 + 0x40);
    do {
      lVar9 = plVar13[1];
      if (lVar9 == 0) {
        uVar8 = FUN_14016979c();
        lVar9 = FUN_14477b664(uVar8);
        plVar13[1] = lVar9;
      }
      if (plVar13[2] == 0) {
        if ((*plVar13 != 0) && (lVar9 != 0)) {
          plVar3 = *(longlong **)(lVar9 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
            plVar13[2] = 0;
          }
          else {
            uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar9 = FUN_144aff482(uVar8,plVar13);
            plVar13[2] = lVar9;
            if (lVar9 != 0) goto LAB_140e998f2;
          }
        }
LAB_140e997b2:
        switch((char)plVar13[-7]) {
        case '\0':
          (**(code **)(*param_1 + 0xa00))
                    (param_1,plVar13[-8],*(undefined4 *)((longlong)plVar13 + -0x34));
          break;
        case '\x01':
          (**(code **)(*param_1 + 0xa08))(param_1,plVar13[-8],(int)plVar13[-6]);
          break;
        case '\x02':
          local_118 = plVar13[-3];
          local_128 = (undefined4)plVar13[-5];
          uStack_124 = *(undefined4 *)((longlong)plVar13 + -0x24);
          uStack_120 = (undefined4)plVar13[-4];
          uStack_11c = *(undefined4 *)((longlong)plVar13 + -0x1c);
          (**(code **)(*param_1 + 0xa10))(param_1,plVar13[-8],&local_128);
          break;
        case '\x03':
          local_138 = (undefined4)plVar13[-2];
          uStack_134 = *(undefined4 *)((longlong)plVar13 + -0xc);
          uStack_130 = (undefined4)plVar13[-1];
          uStack_12c = *(undefined4 *)((longlong)plVar13 + -4);
          (**(code **)(*param_1 + 0xa18))(param_1,plVar13[-8],&local_138);
          break;
        case '\x04':
          (**(code **)(*param_1 + 0x9f8))
                    (param_1,plVar13[-8],*(undefined1 *)((longlong)plVar13 + -0x37));
        }
      }
      else {
LAB_140e998f2:
        local_110[0] = *param_3;
        if (local_110[0] == '\x01') {
          lVar9 = *(longlong *)(param_3 + 8);
          local_110[0] = '\x02';
          if (lVar9 == 0) {
            local_108._0_4_ = 0;
            iVar7 = 0;
            uVar2 = (uint)local_108;
          }
          else {
            uVar2 = *(uint *)(lVar9 + 0xc);
            local_108 = (ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar9 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar9 = 0;
            }
            iVar7 = *(int *)(lVar9 + 0x10);
            if (*(int *)(lVar9 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar11 = DAT_14c964868 + 1;
              local_140 = CONCAT44(local_140._4_4_,iVar11);
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar17) {
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar11);
              }
              LOCK();
              iVar7 = *(int *)(lVar9 + 0x10);
              bVar17 = iVar7 == 0;
              if (bVar17) {
                *(int *)(lVar9 + 0x10) = (int)local_140;
                iVar7 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_108;
              if (bVar17) {
                iVar7 = (int)local_140;
              }
            }
          }
          local_108._0_4_ = uVar2;
          local_108 = CONCAT44(iVar7,(uint)local_108);
        }
        else if (local_110[0] == '\x02') {
          local_108 = *(ulonglong *)(param_3 + 8);
        }
        else if (local_110[0] == '\x03') {
          local_108 = *(longlong *)(param_3 + 8);
          local_100 = *(longlong **)(param_3 + 0x10);
          if (local_100 == (longlong *)0x0) {
            local_f8 = *(undefined8 *)(param_3 + 0x18);
            local_f0 = param_3[0x20];
          }
          else {
            LOCK();
            *(int *)((longlong)local_100 + 0xc) = *(int *)((longlong)local_100 + 0xc) + 1;
            UNLOCK();
            local_f8 = *(undefined8 *)(param_3 + 0x18);
            local_f0 = param_3[0x20];
          }
        }
        local_e8[0] = 0;
        if (*(int *)(param_3 + 0x28) != 0) {
          uVar8 = FUN_1448174c4();
          FUN_1400e08b0(uVar8,DAT_14c9a3da0 + (longlong)*(int *)(param_3 + 0x28) * 0x10 + -0x10);
        }
        local_e0 = '\0';
        local_b8[0] = 0;
        lVar9 = plVar13[1];
        if (lVar9 == 0) {
          uVar8 = FUN_14016979c();
          lVar9 = FUN_14477b664(uVar8);
          plVar13[1] = lVar9;
        }
        lVar12 = plVar13[2];
        if (lVar12 == 0) {
          if (lVar9 == 0) {
            lVar12 = 0;
          }
          else {
            lVar12 = 0;
            if (*plVar13 != 0) {
              plVar3 = *(longlong **)(lVar9 + 0xb8);
              if ((plVar3 == (longlong *)0x0) ||
                 (cVar5 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar5 == '\0')) {
                lVar12 = 0;
              }
              else {
                uVar8 = (**(code **)(*plVar3 + 0x110))(plVar3);
                lVar12 = FUN_144aff482(uVar8,plVar13);
              }
              plVar13[2] = lVar12;
            }
          }
        }
        local_140 = lVar12;
        FUN_1400606f6(local_88,lVar12,local_110);
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_88;
        }
        puVar15 = &DAT_14c9a40e0;
        if (0 < local_50) {
          puVar15 = puVar10;
        }
        FUN_1400603ec(local_b0,local_140,puVar15);
        puVar10 = local_58;
        if (local_58 == (undefined1 *)0x0) {
          puVar10 = local_88;
        }
        FUN_1446fdf58(puVar10,local_50);
        if (local_58 != (undefined1 *)0x0) {
          FUN_1400020a8();
        }
        uVar6 = FUN_140168b7a(local_b0,0);
        local_140 = CONCAT71(local_140._1_7_,uVar6);
        pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
        if (pcVar4 != (code *)0x0) {
          ppppuVar14 = local_b0;
          if (0x18 < local_98) {
            ppppuVar14 = (undefined8 ****)local_b0[0];
          }
          (*pcVar4)(ppppuVar14);
        }
        if (0x18 < local_98) {
          FUN_1400020a8(local_b0[0]);
        }
        FUN_1448173f8(local_b8);
        if (local_e0 != '\0') {
          if (local_e0 == '\x01') {
            local_d8 = 0;
          }
          else if ((local_e0 == '\x03') && (local_d0 != (longlong *)0x0)) {
            LOCK();
            piVar1 = (int *)((longlong)local_d0 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          local_e0 = '\0';
        }
        FUN_1448173f8(local_e8);
        if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
          LOCK();
          piVar1 = (int *)((longlong)local_100 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_100 + 0x10))();
          }
        }
        if ((char)local_140 != '\0') goto LAB_140e997b2;
      }
      plVar13 = plVar13 + 0xb;
      lVar16 = lVar16 + -0x58;
    } while (lVar16 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e99cb2 FUN_140e99cb2 body=369 status=ok
// SIG undefined FUN_140e99cb2(void)

void FUN_140e99cb2(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_140e99d37;
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
LAB_140e99d37:
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



// FUNCTION 140e99e24 FUN_140e99e24 body=385 status=ok
// SIG undefined FUN_140e99e24(void)

void FUN_140e99e24(longlong param_1)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  undefined7 uVar3;
  ulonglong uVar2;
  longlong lVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_128 [40];
  undefined1 local_100 [192];
  undefined1 *local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_128;
  FUN_1405f1eac();
  FUN_1401b3e2a(param_1 + 0x578);
  FUN_1447cd2ec(param_1 + 0x950,0);
  uVar3 = (undefined7)((ulonglong)unaff_RBX >> 8);
  if (*(char *)(param_1 + 0xcf8) == '\0') {
    uVar2 = CONCAT71(uVar3,*(undefined1 *)(param_1 + 0xd50)) & 0xffffffffffffff20;
    uVar2 = CONCAT71((int7)(uVar2 >> 8),(byte)uVar2 >> 5);
  }
  else {
    uVar2 = CONCAT71(uVar3,1);
  }
  local_40 = (undefined1 *)0x0;
  local_38 = 0x1800000000;
  FUN_140e99fbc(param_1,0,local_100);
  puVar5 = local_40;
  if (local_40 == (undefined1 *)0x0) {
    puVar5 = local_100;
  }
  lVar4 = (longlong)(int)local_38;
  if (lVar4 != 0) {
    lVar6 = 0;
    do {
      (**(code **)(**(longlong **)(puVar5 + lVar6) + 0x3b0))
                (*(longlong **)(puVar5 + lVar6),uVar2 & 0xffffffff);
      lVar6 = lVar6 + 8;
    } while (lVar4 * 8 != lVar6);
  }
  if (local_40 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((*(char *)(param_1 + 0xcf8) == '\x01') &&
     (plVar1 = *(longlong **)(param_1 + 0x900), plVar1 != (longlong *)0x0)) {
    if (*(char *)((longlong)plVar1 + 0x3c) == '\0') {
      *(undefined1 *)((longlong)plVar1 + 0x3c) = 1;
      (**(code **)(*plVar1 + 0x10))();
      plVar1 = *(longlong **)(param_1 + 0x900);
    }
    (**(code **)(*plVar1 + 0xa0))();
  }
  if ((*(char *)(param_1 + 0x178) != '\x03') && ((*(byte *)(param_1 + 0xd50) & 4) != 0)) {
    *(byte *)(param_1 + 0xd50) = *(byte *)(param_1 + 0xd50) & 0xfb;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_128);
  }
  if ((local_30 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e99fbc FUN_140e99fbc body=270 status=ok
// SIG undefined FUN_140e99fbc(void)

void FUN_140e99fbc(longlong param_1,char param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  
  if (param_2 != '\x01') {
    iVar1 = *(int *)(param_1 + 0xd10);
    if ((longlong)iVar1 != 0) {
      lVar3 = *(longlong *)(param_1 + 0xd08);
      lVar6 = 0;
      do {
        lVar4 = *(longlong *)(*(longlong *)(lVar3 + lVar6) + 0x48);
        if (lVar4 != 0) {
          iVar2 = *(int *)(param_3 + 200);
          *(uint *)(param_3 + 200) = iVar2 + 1U;
          if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
            FUN_147a6ecb2(param_3,iVar2);
          }
          lVar5 = *(longlong *)(param_3 + 0xc0);
          if (*(longlong *)(param_3 + 0xc0) == 0) {
            lVar5 = param_3;
          }
          *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar4;
        }
        lVar6 = lVar6 + 8;
      } while ((longlong)iVar1 * 8 != lVar6);
    }
    if (param_2 == '\x02') {
      return;
    }
  }
  iVar1 = *(int *)(param_1 + 0xd20);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xd18);
    lVar6 = 0;
    do {
      lVar4 = *(longlong *)(*(longlong *)(lVar3 + lVar6) + 0x48);
      if (lVar4 != 0) {
        iVar2 = *(int *)(param_3 + 200);
        *(uint *)(param_3 + 200) = iVar2 + 1U;
        if (*(uint *)(param_3 + 0xcc) < iVar2 + 1U) {
          FUN_147a6ecb2(param_3,iVar2);
        }
        lVar5 = *(longlong *)(param_3 + 0xc0);
        if (*(longlong *)(param_3 + 0xc0) == 0) {
          lVar5 = param_3;
        }
        *(longlong *)(lVar5 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  return;
}



// FUNCTION 140e9a0da FUN_140e9a0da body=336 status=ok
// SIG undefined FUN_140e9a0da(void)

void FUN_140e9a0da(undefined8 param_1,longlong param_2,char param_3)

{
  ulonglong uVar1;
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
  if (param_2 != 0) {
    if (DAT_14cba8288 == 0) {
      local_50 = &local_30;
      local_30 = FUN_141864c34;
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
    if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) {
      param_2 = param_2 + 0x7ca0;
      uVar1 = 0;
      do {
        if (1 < uVar1) {
          if (param_3 == '\0') {
            FUN_1400bc8c2(param_2,&DAT_14cbd3580);
          }
          else {
            FUN_1400bc96c();
          }
        }
        uVar1 = uVar1 + 1;
        param_2 = param_2 + 0x28;
      } while (uVar1 != 6);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e9a22c FUN_140e9a22c body=305 status=ok
// SIG undefined FUN_140e9a22c(void)

undefined4 FUN_140e9a22c(undefined8 param_1,wchar_t *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  size_t sVar2;
  undefined1 *_Dst;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_2a8 [40];
  undefined1 **local_280;
  undefined4 *local_278;
  undefined8 local_270;
  code *local_268;
  undefined1 ***local_260;
  undefined4 local_254;
  undefined1 *local_250;
  undefined1 *local_248;
  ulonglong *local_240;
  char local_238;
  undefined1 local_230 [512];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_2a8;
  _Dst = local_230;
  local_238 = '\0';
  local_240 = &local_30;
  puVar3 = _Dst;
  local_250 = _Dst;
  local_248 = _Dst;
  if (param_2 != (wchar_t *)0x0) {
    sVar2 = wcslen(param_2);
    iVar4 = (int)sVar2;
    if (iVar4 < 0x100) {
      if (iVar4 == 0) goto LAB_140e9a2c0;
    }
    else {
      FUN_140213274(&local_250,(longlong)iVar4);
      _Dst = local_248;
    }
    memcpy(_Dst,param_2,(longlong)(sVar2 << 0x20) >> 0x1f);
    _Dst = _Dst + (longlong)iVar4 * 2;
    puVar3 = local_250;
    local_248 = _Dst;
  }
LAB_140e9a2c0:
  local_278 = &local_254;
  local_254 = (undefined4)((ulonglong)((longlong)_Dst - (longlong)puVar3) >> 1);
  local_280 = &local_250;
  local_260 = &local_280;
  local_268 = FUN_14279d5d4;
  local_270 = param_3;
  uVar1 = FUN_140e9a35e(param_2);
  if (local_238 == '\x01') {
    FUN_1400020a8(local_250);
  }
  if ((local_30 ^ (ulonglong)auStack_2a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 140e9a35e FUN_140e9a35e body=220 status=ok
// SIG undefined FUN_140e9a35e(void)

ulonglong FUN_140e9a35e(undefined8 param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  BOOL BVar3;
  HANDLE hFindFile;
  undefined7 uVar5;
  ulonglong uVar4;
  undefined1 auStack_2b8 [32];
  _WIN32_FIND_DATAW local_298;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_2b8;
  hFindFile = (HANDLE)FUN_140e9a43c(param_1,&local_298);
  uVar5 = (undefined7)((ulonglong)param_2 >> 8);
  if (hFindFile == (HANDLE)0xffffffffffffffff) {
    uVar4 = CONCAT71(uVar5,1);
  }
  else {
    do {
      iVar2 = wcscmp(local_298.cFileName,L".");
      if (iVar2 != 0) {
        iVar2 = wcscmp(local_298.cFileName,L"..");
        if (iVar2 != 0) {
          cVar1 = (*(code *)*param_2)(param_2[1],&local_298);
          if (cVar1 == '\0') {
            uVar4 = 0;
            goto LAB_140e9a3f9;
          }
        }
      }
      BVar3 = FindNextFileW(hFindFile,&local_298);
    } while (BVar3 != 0);
    uVar4 = CONCAT71(uVar5,1);
LAB_140e9a3f9:
    FindClose(hFindFile);
  }
  if ((local_48 ^ (ulonglong)auStack_2b8) == DAT_14c707940) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9a43c FUN_140e9a43c body=464 status=ok
// SIG undefined FUN_140e9a43c(void)

HANDLE FUN_140e9a43c(wchar_t *param_1,LPWIN32_FIND_DATAW param_2)

{
  WCHAR *pWVar1;
  size_t sVar2;
  HANDLE pvVar3;
  int iVar4;
  undefined1 auStack_278 [40];
  WCHAR *local_250;
  WCHAR *local_248;
  WCHAR *local_240;
  char local_238;
  WCHAR local_230 [256];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_278;
  if (param_1 == (wchar_t *)0x0) {
    local_250 = local_230;
    local_238 = '\0';
    local_240 = (WCHAR *)&local_30;
    local_248 = local_250;
  }
  else {
    sVar2 = wcslen(param_1);
    local_250 = local_230;
    local_238 = '\0';
    local_240 = (WCHAR *)&local_30;
    iVar4 = (int)sVar2;
    local_248 = local_250;
    if (iVar4 < 0x100) {
      if (iVar4 == 0) goto LAB_140e9a4cd;
    }
    else {
      FUN_140213274(&local_250,(longlong)iVar4);
    }
    pWVar1 = local_248;
    memcpy(local_248,param_1,(longlong)(sVar2 << 0x20) >> 0x1f);
    local_248 = pWVar1 + iVar4;
  }
LAB_140e9a4cd:
  if ((((int)((ulonglong)((longlong)local_248 - (longlong)local_250) >> 1) != 0) &&
      (local_248[-1] != L'/')) && (local_248[-1] != L'\\')) {
    if (local_240 <= local_248 + 1) {
      FUN_140213274(&local_250,1);
    }
    *local_248 = L'/';
    local_248 = local_248 + 1;
  }
  if (local_240 <= local_248 + 3) {
    FUN_140213274(&local_250,3);
  }
  local_248[2] = L'*';
  local_248[0] = L'*';
  local_248[1] = L'.';
  local_248 = local_248 + 3;
  FUN_144a08678(&local_250,1);
  *local_248 = L'\0';
  pvVar3 = FindFirstFileW(local_250,param_2);
  if (local_238 == '\x01') {
    FUN_1400020a8(local_250);
  }
  if ((local_30 ^ (ulonglong)auStack_278) == DAT_14c707940) {
    return pvVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9a60e FUN_140e9a60e body=40 status=ok
// SIG undefined FUN_140e9a60e(void)

undefined8 FUN_140e9a60e(undefined8 param_1,int param_2)

{
  FUN_140e9a636();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9a636 FUN_140e9a636 body=57 status=ok
// SIG undefined FUN_140e9a636(void)

void FUN_140e9a636(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b02dd60;
  FUN_140e9a66f(param_1[5],*(undefined4 *)(param_1 + 6));
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 140e9a66f FUN_140e9a66f body=51 status=ok
// SIG undefined FUN_140e9a66f(void)

void FUN_140e9a66f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0xc;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e9a6a2 FUN_140e9a6a2 body=836 status=ok
// SIG undefined FUN_140e9a6a2(void)

int * FUN_140e9a6a2(int *param_1,longlong *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  longlong lVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  byte bVar14;
  int iVar15;
  undefined *puVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  
  iVar20 = DAT_14caa22c8;
  iVar18 = DAT_14caa22a0;
  if (DAT_14caa22cc == 0) {
    iVar20 = DAT_14caa22a0 + 1;
    bVar21 = DAT_14caa22a4 == DAT_14caa22a0;
    DAT_14caa22a0 = iVar20;
    if (bVar21) {
      FUN_1447711aa(&DAT_14caa2298,iVar18);
    }
    iVar20 = DAT_14caa22c0;
    if (DAT_14caa22c0 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = DAT_14caa22c0 + 0x1e;
      if (-1 < DAT_14caa22c0 + -1) {
        iVar11 = DAT_14caa22c0 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    iVar15 = DAT_14caa22c0 + 1;
    iVar17 = DAT_14caa22c0 + 0x1f;
    if (-1 < DAT_14caa22c0) {
      iVar17 = DAT_14caa22c0;
    }
    if (iVar17 >> 5 != iVar11) {
      if (DAT_14caa22c4 <= DAT_14caa22c0) {
        if (DAT_14caa22c0 + 0x20U < 0xa0) {
          DAT_14caa22c4 = 0x80;
        }
        else {
          uVar10 = DAT_14caa22c0 + 0x20U >> 5;
          if (DAT_14caa22c4 + 0x1fU < 0xa0) {
            uVar19 = 4;
            if (4 < uVar10) {
              uVar19 = uVar10;
            }
          }
          else {
            uVar19 = (uVar10 * 3 >> 3) + uVar10 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar19 << 2,0);
          iVar11 = (int)(uVar13 >> 2);
          DAT_14caa22c4 = -0x20;
          if ((int)uVar10 <= iVar11) {
            DAT_14caa22c4 = iVar11 << 5;
          }
        }
        FUN_1446efbd8(&DAT_14caa22a8,DAT_14caa22c0);
        iVar15 = DAT_14caa22c0 + 1;
      }
      iVar11 = iVar15 + 0x1f;
      if (-1 < iVar15) {
        iVar11 = iVar15;
      }
      if (iVar15 % 0x20 != 0) {
        puVar16 = &DAT_14caa22a8;
        if (DAT_14caa22b8 != (undefined *)0x0) {
          puVar16 = DAT_14caa22b8;
        }
        bVar14 = -(char)(iVar15 % 0x20);
        DAT_14caa22c0 = iVar15;
        *(uint *)(puVar16 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)(puVar16 + (longlong)(iVar11 >> 5) * 4) << (bVar14 & 0x1f)) >>
             (bVar14 & 0x1f);
        iVar15 = DAT_14caa22c0;
      }
    }
    DAT_14caa22c0 = iVar15;
    lVar12 = (longlong)iVar18;
    puVar16 = &DAT_14caa22a8;
    if (DAT_14caa22b8 != (undefined *)0x0) {
      puVar16 = DAT_14caa22b8;
    }
    bVar14 = (byte)iVar20 & 0x1f;
    *(uint *)(puVar16 + (longlong)(iVar17 >> 5) * 4) =
         *(uint *)(puVar16 + (longlong)(iVar17 >> 5) * 4) &
         (-2 << bVar14 | 0xfffffffeU >> 0x20 - bVar14);
  }
  else {
    lVar12 = (longlong)DAT_14caa22c8;
    DAT_14caa22c8 = *(int *)(DAT_14caa2298 + 4 + lVar12 * 0x20);
    DAT_14caa22cc = DAT_14caa22cc + -1;
    iVar18 = iVar20;
    if (DAT_14caa22cc != 0) {
      *(undefined4 *)(DAT_14caa2298 + (longlong)DAT_14caa22c8 * 0x20) = 0xffffffff;
    }
  }
  puVar16 = &DAT_14caa22a8;
  if (DAT_14caa22b8 != (undefined *)0x0) {
    puVar16 = DAT_14caa22b8;
  }
  iVar20 = iVar18 + 0x1f;
  if (-1 < iVar18) {
    iVar20 = iVar18;
  }
  *(uint *)(puVar16 + (longlong)(iVar20 >> 5) * 4) =
       *(uint *)(puVar16 + (longlong)(iVar20 >> 5) * 4) | 1 << ((byte)iVar18 & 0x1f);
  lVar9 = DAT_14caa2298;
  iVar20 = 1;
  lVar12 = lVar12 * 0x20;
  puVar1 = (undefined4 *)(DAT_14caa2298 + lVar12);
  puVar3 = (undefined4 *)*param_2;
  puVar4 = (undefined8 *)param_2[1];
  uVar5 = puVar3[1];
  uVar6 = puVar3[2];
  uVar7 = puVar3[3];
  puVar2 = (undefined4 *)(DAT_14caa2298 + lVar12);
  *puVar2 = *puVar3;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  *(undefined8 *)(lVar9 + 0x10 + lVar12) = *puVar4;
  *(undefined4 *)(lVar9 + 0x18 + lVar12) = 0xffffffff;
  uVar10 = FUN_1447addd0(puVar1,0x10);
  uVar19 = DAT_14caa22a0 - DAT_14caa22cc;
  if (uVar19 != 1) {
    iVar11 = FUN_140e9a9e6(uVar10,puVar1);
    lVar12 = DAT_14caa2298;
    if (iVar11 != -1) {
      uVar5 = *puVar1;
      uVar6 = puVar1[1];
      uVar7 = puVar1[2];
      uVar8 = puVar1[3];
      *(undefined8 *)(DAT_14caa2298 + 0x10 + (longlong)iVar11 * 0x20) = *(undefined8 *)(puVar1 + 4);
      puVar1 = (undefined4 *)(lVar12 + (longlong)iVar11 * 0x20);
      *puVar1 = uVar5;
      puVar1[1] = uVar6;
      puVar1[2] = uVar7;
      puVar1[3] = uVar8;
      FUN_140ad6bc2(iVar18);
      goto LAB_140e9a81a;
    }
    if (3 < uVar19) {
      uVar13 = (ulonglong)(uVar19 & 0xfffffffe) + 0xf;
      lVar12 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar20 = 1 << ((byte)lVar12 & 0x1f);
    }
  }
  iVar11 = iVar18;
  if (((int)uVar19 < 1) || (iVar20 <= DAT_14caa22e0)) {
    uVar10 = DAT_14caa22e0 - 1U & uVar10;
    puVar1[7] = uVar10;
    puVar16 = DAT_14caa22d8;
    if (DAT_14caa22d8 == (undefined *)0x0) {
      puVar16 = &DAT_14caa22d0;
    }
    puVar1[6] = *(undefined4 *)
                 (puVar16 + ((longlong)DAT_14caa22e0 - 1U & (longlong)(int)uVar10) * 4);
    puVar16 = DAT_14caa22d8;
    if (DAT_14caa22d8 == (undefined *)0x0) {
      puVar16 = &DAT_14caa22d0;
    }
    *(int *)(puVar16 + ((longlong)DAT_14caa22e0 - 1U & (longlong)(int)uVar10) * 4) = iVar18;
  }
  else {
    DAT_14caa22e0 = iVar20;
    FUN_140e9aa66();
  }
LAB_140e9a81a:
  *param_1 = iVar11;
  return param_1;
}



// FUNCTION 140e9a9e6 FUN_140e9a9e6 body=127 status=ok
// SIG undefined FUN_140e9a9e6(void)

int FUN_140e9a9e6(uint param_1,int *param_2)

{
  int iVar1;
  undefined *puVar2;
  longlong lVar3;
  
  if (DAT_14caa22a0 != DAT_14caa22cc) {
    puVar2 = &DAT_14caa22d0;
    if (DAT_14caa22d8 != (undefined *)0x0) {
      puVar2 = DAT_14caa22d8;
    }
    iVar1 = *(int *)(puVar2 + (ulonglong)(DAT_14caa22e0 - 1U & param_1) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(DAT_14caa2298 + lVar3) == *param_2) &&
             (*(int *)(DAT_14caa2298 + 4 + lVar3) == param_2[1])) &&
            (*(int *)(DAT_14caa2298 + 8 + lVar3) == param_2[2])) &&
           (*(int *)(DAT_14caa2298 + 0xc + lVar3) == param_2[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar3 + DAT_14caa2298 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140e9aa66 FUN_140e9aa66 body=600 status=ok
// SIG undefined FUN_140e9aa66(void)

void FUN_140e9aa66(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  undefined *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14caa22d8 != (undefined *)0x0) {
    FUN_1446efa72(&DAT_14caa22d8,0,0,4);
  }
  uVar11 = DAT_14caa22e0;
  if (DAT_14caa22e0 != 0) {
    FUN_144a1cbf0(&DAT_14caa22d0,0,DAT_14caa22e0,4);
    if (0 < (int)uVar11) {
      uVar2 = 0;
      do {
        puVar7 = DAT_14caa22d8;
        if (DAT_14caa22d8 == (undefined *)0x0) {
          puVar7 = &DAT_14caa22d0;
        }
        *(undefined4 *)(puVar7 + (ulonglong)(DAT_14caa22e0 + 0x7fffffff & uVar2) * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
      } while (uVar11 != uVar2);
    }
    local_68 = 0x100000000;
    local_60 = &DAT_14caa22a8;
    local_58 = 0xffffffff;
    local_50 = 0;
    if (DAT_14caa22c0 == 0) {
      uVar12 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar12 = local_68 >> 0x20;
    }
    puVar7 = local_60;
    iVar13 = (int)local_68;
    uVar11 = (uint)local_58;
    iVar5 = local_58._4_4_;
    iVar8 = local_50;
    if (local_58._4_4_ < *(int *)(local_60 + 0x18)) {
      do {
        lVar10 = DAT_14caa2298;
        lVar9 = (longlong)iVar5 * 0x20;
        iVar3 = FUN_1447addd0(lVar9 + DAT_14caa2298,0x10);
        uVar4 = (longlong)iVar3 & (longlong)(int)DAT_14caa22e0 - 1U;
        iVar3 = (int)uVar4;
        *(int *)(lVar10 + 0x1c + lVar9) = iVar3;
        puVar6 = DAT_14caa22d8;
        if (DAT_14caa22d8 == (undefined *)0x0) {
          puVar6 = &DAT_14caa22d0;
        }
        *(undefined4 *)(lVar10 + 0x18 + lVar9) =
             *(undefined4 *)(puVar6 + ((longlong)(int)DAT_14caa22e0 - 1U & uVar4) * 4);
        puVar6 = DAT_14caa22d8;
        if (DAT_14caa22d8 == (undefined *)0x0) {
          puVar6 = &DAT_14caa22d0;
        }
        *(int *)(puVar6 + ((longlong)iVar3 & (longlong)(int)DAT_14caa22e0 - 1U) * 4) = iVar5;
        uVar11 = ~(uint)uVar12 & uVar11;
        puVar6 = *(undefined **)(puVar7 + 0x10);
        if (*(undefined **)(puVar7 + 0x10) == (undefined *)0x0) {
          puVar6 = puVar7;
        }
        iVar3 = *(int *)(puVar7 + 0x18);
        lVar10 = (longlong)iVar13;
        uVar2 = *(uint *)(puVar6 + lVar10 * 4) & uVar11;
        if (uVar2 == 0) {
          iVar5 = iVar3 + 0x1e;
          if (-1 < iVar3 + -1) {
            iVar5 = iVar3 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar1 = iVar5;
          if (iVar5 < iVar13) {
            iVar1 = iVar13;
          }
          if (iVar5 <= iVar13) break;
          lVar9 = 0;
          while( true ) {
            iVar8 = iVar8 + 0x20;
            uVar2 = *(uint *)(puVar6 + lVar9 * 4 + lVar10 * 4 + 4);
            if (uVar2 != 0) break;
            lVar9 = lVar9 + 1;
            if (iVar1 - lVar10 == lVar9) goto LAB_140e9ac75;
          }
          iVar13 = iVar13 + (int)lVar9 + 1;
          uVar11 = 0xffffffff;
        }
        uVar12 = (ulonglong)(-uVar2 & uVar2);
        uVar4 = uVar12 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
      } while (iVar5 < iVar3);
    }
  }
LAB_140e9ac75:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9acbf FUN_140e9acbf body=609 status=ok
// SIG undefined FUN_140e9acbf(void)

undefined8 * FUN_140e9acbf(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined8 **ppuVar8;
  bool bVar9;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 local_60;
  undefined *local_58;
  code *local_50;
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar3 = cohtml::Property::operator_new(0x88);
  FUN_140066fe0(puVar3,param_2);
  *puVar3 = &PTR_FUN_14b455950;
  puVar3[0xb] = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  puVar3[6] = 0;
  puVar3[7] = 0;
  puVar3[8] = 0;
  *(undefined8 *)((longlong)puVar3 + 100) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar3 + 0x6c) = 0;
  puVar3[0xf] = 0;
  *(undefined4 *)(puVar3 + 0x10) = 0;
  lVar5 = puVar3[3];
  lVar6 = 0;
  if (lVar5 != 0) {
    puVar7 = *(undefined **)(lVar5 + 8);
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c951ae0) && (FUN_144b3d300(&DAT_14c951ae0), DAT_14c951ae0 == -1)) {
      FUN_1446ddbd2();
      local_50 = FUN_140b31576;
      local_58 = &DAT_14c951a38;
      local_60 = 0;
      local_68 = 0x208001;
      FUN_14000176a(&DAT_14c951a90,L"FArrayProperty",0x200000,0);
      atexit(FUN_14280cbf7);
      _Init_thread_footer(&DAT_14c951ae0);
    }
    if (DAT_14c951a98 == 0) {
      bVar9 = puVar7 != (undefined *)0x0;
      if (puVar7 != &DAT_14c951a90 && bVar9) {
        do {
          puVar7 = *(undefined **)(puVar7 + 0x30);
          bVar9 = puVar7 != (undefined *)0x0;
          if (puVar7 == &DAT_14c951a90) break;
        } while (puVar7 != (undefined *)0x0);
      }
    }
    else {
      bVar9 = (*(ulonglong *)(puVar7 + 0x18) & DAT_14c951a98) != 0;
    }
    lVar6 = 0;
    if (bVar9) {
      lVar6 = lVar5;
    }
  }
  ppuVar8 = (undefined8 **)(puVar3 + 6);
  uVar1 = *(undefined8 *)(lVar6 + 0x78);
  lVar5 = 0;
  do {
    cVar2 = (**(code **)((longlong)&PTR_FUN_14b454510 + lVar5))(uVar1,0);
    if (cVar2 != '\0') {
      if (lVar5 != -0x14b454510) {
        (**(code **)((longlong)&PTR_FUN_14b454518 + lVar5))(&local_48,*(undefined8 *)(lVar6 + 0x78))
        ;
        puVar4 = local_48;
        if (ppuVar8 == &local_48) goto LAB_140e9aebb;
        puVar4 = *ppuVar8;
        *ppuVar8 = local_48;
        local_48 = (undefined8 *)0x0;
        if (puVar4 == (undefined8 *)0x0) goto LAB_140e9ae03;
        (**(code **)*puVar4)(puVar4,1);
        puVar4 = local_48;
        goto LAB_140e9aebb;
      }
      break;
    }
    lVar5 = lVar5 + 0x10;
  } while (lVar5 != 0x130);
  puVar4 = *ppuVar8;
  *ppuVar8 = (undefined8 *)0x0;
LAB_140e9aebb:
  if (puVar4 != (undefined8 *)0x0) {
    (**(code **)*puVar4)(puVar4,1);
  }
LAB_140e9ae03:
  *param_1 = puVar3;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140e9af21 FUN_140e9af21 body=102 status=ok
// SIG undefined FUN_140e9af21(void)

undefined8 * FUN_140e9af21(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = cohtml::Property::operator_new(0x80);
  FUN_140066fe0(puVar1,param_2);
  *puVar1 = &PTR_FUN_14b455680;
  puVar1[10] = 0;
  *(undefined4 *)(puVar1 + 0xb) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 100) = 0;
  puVar1[0xe] = 0;
  *(undefined4 *)(puVar1 + 0xf) = 0;
  *param_1 = puVar1;
  return param_1;
}



// FUNCTION 140e9af87 FUN_140e9af87 body=257 status=ok
// SIG undefined FUN_140e9af87(void)

bool FUN_140e9af87(longlong param_1)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined **)(param_1 + 8);
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c952268) && (FUN_144b3d300(&DAT_14c952268), DAT_14c952268 == -1)) {
    FUN_14475b26a();
    FUN_14000176a(&DAT_14c952218,L"FInt64Property",0x400000,0,0x1408001,0,&DAT_14c9520b8,
                  FUN_1459738d6);
    atexit(FUN_142816fda);
    _Init_thread_footer(&DAT_14c952268);
  }
  if (DAT_14c952220 == 0) {
    bVar2 = puVar1 != (undefined *)0x0;
    if (puVar1 != &DAT_14c952218 && bVar2) {
      do {
        puVar1 = *(undefined **)(puVar1 + 0x30);
        bVar2 = puVar1 != (undefined *)0x0;
        if (puVar1 == &DAT_14c952218) {
          return bVar2;
        }
      } while (puVar1 != (undefined *)0x0);
    }
  }
  else {
    bVar2 = (*(ulonglong *)(puVar1 + 0x18) & DAT_14c952220) != 0;
  }
  return bVar2;
}



// FUNCTION 140e9b096 FUN_140e9b096 body=95 status=ok
// SIG undefined FUN_140e9b096(void)

undefined8 * FUN_140e9b096(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b6011d0;
  FUN_140e9b0f5(param_1[0x14],*(undefined4 *)(param_1 + 0x15));
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xb0);
  }
  return param_1;
}



// FUNCTION 140e9b0f5 FUN_140e9b0f5 body=40 status=ok
// SIG undefined FUN_140e9b0f5(void)

void FUN_140e9b0f5(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_148b97538(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 140e9b11e FUN_140e9b11e body=115 status=ok
// SIG undefined FUN_140e9b11e(void)

void FUN_140e9b11e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_1448725ba();
  iVar1 = *(int *)(param_1 + 200);
  if (0 < iVar1) {
    lVar3 = 0;
    lVar2 = 0;
    do {
      if (*(char *)(*(longlong *)(param_1 + 0xc0) + 0x1c + lVar3) == '\x01') {
        FUN_140e9b192(*(longlong *)(param_1 + 0xc0) + lVar3,param_2,param_3,param_4);
        iVar1 = *(int *)(param_1 + 200);
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x40;
    } while (lVar2 < iVar1);
  }
  return;
}



// FUNCTION 140e9b192 FUN_140e9b192 body=1756 status=ok
// SIG undefined FUN_140e9b192(void)

void FUN_140e9b192(longlong *param_1,float *param_2,float *param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  longlong *plVar5;
  longlong lVar6;
  bool bVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  longlong lVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_138 [40];
  longlong local_110;
  longlong local_108;
  float local_100;
  int local_fc;
  float local_f8;
  float local_f4;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_138;
  fVar3 = *param_2;
  fVar4 = *param_3;
  fVar22 = *(float *)(param_1 + 1);
  iVar8 = (int)param_1[3];
  fVar21 = *(float *)(param_1 + 2);
  fVar24 = *(float *)((longlong)param_1 + 0xc);
  plVar5 = (longlong *)*param_1;
  if (plVar5 == (longlong *)0x0) {
    fVar19 = 1.0;
  }
  else {
    fVar19 = *(float *)(plVar5 + 0x16);
  }
  fVar19 = ABS(fVar19 * *(float *)((longlong)param_1 + 0x14));
  uVar17 = -(uint)(fVar19 <= 1e-08);
  fVar25 = ((float)iVar8 * (fVar21 - fVar24)) /
           (float)(uVar17 & 0x3f800000 | ~uVar17 & (uint)fVar19) + fVar22;
  fVar19 = fVar3;
  fVar18 = fVar4;
  if (fVar4 < fVar3) {
    fVar19 = fVar4;
    fVar18 = fVar3;
  }
  if (((plVar5 != (longlong *)0x0) && (fVar19 < fVar25)) && (fVar22 < fVar18)) {
    fVar18 = *(float *)((longlong)param_1 + 0x14) * *(float *)(plVar5 + 0x16);
    fVar23 = ABS(fVar18);
    fVar19 = 1.0;
    if (1e-08 < fVar23) {
      fVar19 = fVar23;
    }
    fVar18 = (float)(-(uint)(fVar23 <= 1e-08) & 0x3f800000 |
                    ~-(uint)(fVar23 <= 1e-08) & (uint)fVar18);
    fVar23 = fVar3;
    if (fVar25 <= fVar3) {
      fVar23 = fVar25;
    }
    local_f4 = fVar23;
    if ((fVar3 <= fVar4) && (local_f4 = fVar3, fVar3 <= fVar22)) {
      local_f4 = fVar22;
    }
    iVar12 = *(int *)(param_4 + 0x10);
    local_f4 = (float)FUN_140d29bd2(param_1,&local_f4);
    if (fVar21 <= local_f4) {
      local_f4 = fVar21;
    }
    if (local_f4 <= fVar24) {
      local_f4 = fVar24;
    }
    fVar20 = fVar4;
    if (fVar25 <= fVar4) {
      fVar20 = fVar25;
    }
    if (fVar20 <= fVar22) {
      fVar20 = fVar22;
    }
    if (fVar23 <= fVar22) {
      fVar23 = fVar22;
    }
    bVar7 = fVar4 < fVar3 == fVar18 < 0.0;
    fVar22 = fVar21;
    if (bVar7) {
      fVar22 = fVar24;
    }
    local_f8 = fVar24;
    if (bVar7) {
      local_f8 = fVar21;
    }
    if (fVar20 - fVar23 == 0.0) {
      if ((fVar4 != fVar3) || (NAN(fVar4) || NAN(fVar3))) goto LAB_140e9b7f5;
    }
    lVar11 = (longlong)iVar12;
    fVar21 = ABS(fVar20 - fVar23);
    iVar15 = 1;
    if (1 < iVar8) {
      iVar15 = iVar8;
    }
    local_108 = CONCAT44(local_108._4_4_,iVar12);
    do {
      if (fVar3 <= fVar4) {
        local_fc = (int)param_1[3] - iVar15;
      }
      else {
        local_fc = iVar15 + -1;
      }
      fVar23 = (local_f8 - local_f4) / fVar19;
      fVar24 = ABS(fVar21);
      fVar25 = ABS(fVar23);
      if (fVar24 < fVar25) {
        local_100 = fVar21 * (float)(~-(uint)(fVar4 < fVar3) & (uint)fVar18 |
                                    (uint)-fVar18 & -(uint)(fVar4 < fVar3)) + local_f4;
        (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_f4,&local_100,param_4);
        iVar8 = *(int *)(param_4 + 0x10);
        if (iVar12 < *(int *)(param_4 + 0x10)) {
          lVar13 = (longlong)iVar12;
          lVar14 = lVar13 * 0x30;
          do {
            FUN_140ece7e0(*(longlong *)(param_4 + 8) + lVar14,param_1,&local_fc);
            lVar13 = lVar13 + 1;
            lVar14 = lVar14 + 0x30;
            iVar8 = *(int *)(param_4 + 0x10);
          } while (lVar13 < *(int *)(param_4 + 0x10));
        }
      }
      else {
        (**(code **)(*plVar5 + 0x2c8))(plVar5,&local_f4,&local_f8,param_4);
        iVar8 = *(int *)(param_4 + 0x10);
        if (iVar12 < iVar8) {
          lVar13 = (longlong)iVar12;
          lVar14 = lVar13 * 0x30;
          do {
            FUN_140ece7e0(*(longlong *)(param_4 + 8) + lVar14,param_1,&local_fc);
            lVar13 = lVar13 + 1;
            iVar8 = *(int *)(param_4 + 0x10);
            lVar14 = lVar14 + 0x30;
          } while (lVar13 < iVar8);
        }
        fVar21 = fVar21 - fVar23;
        local_f4 = fVar22;
      }
      iVar12 = iVar8;
    } while (((fVar25 <= fVar24) && (1 < iVar15)) &&
            (iVar15 = iVar15 + -1, 0.0 < fVar21 || fVar4 == fVar3));
    if ((int)local_108 < iVar12) {
      do {
        lVar14 = lVar11 * 0x30;
        if ((*(longlong *)(*(longlong *)(param_4 + 8) + 0x20 + lVar14) != 0) &&
           (local_108 = *(longlong *)(*(longlong *)(param_4 + 8) + lVar14 + 0x10), local_108 != 0))
        {
          if (*(longlong *)(local_108 + 0x48) == 0) {
            if ((*(longlong *)(local_108 + 0x50) != 0) &&
               (lVar13 = param_1[7], (longlong)(int)lVar13 != 0)) {
              lVar6 = param_1[6];
              lVar16 = 0;
              do {
                lVar10 = *(longlong *)(lVar6 + lVar16);
                if ((((lVar10 != 0) && (lVar9 = FUN_141116c40(), lVar9 != 0)) &&
                    (*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                   ((*(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30 && (lVar10 = *(longlong *)(lVar6 + lVar16), lVar10 != 0)))) {
                  local_110 = *(longlong *)(local_108 + 0x50);
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar10);
                  }
                  lVar9 = FUN_141116c40();
                  if (((lVar9 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) ||
                     (*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                      lVar9 + 0x30)) {
                    lVar10 = 0;
                  }
                  if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(local_110 + 0x10) + 0x38))
                     && (*(longlong *)
                          (*(longlong *)(*(longlong *)(local_110 + 0x10) + 0x30) +
                          (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                    lVar9 = *(longlong *)(param_4 + 8);
                    lVar10 = lVar9 + lVar14;
                    *(undefined8 *)(lVar9 + lVar14) = 0;
                    plVar5 = *(longlong **)(lVar9 + 8 + lVar14);
                    if (plVar5 != (longlong *)0x0) {
                      *(undefined8 *)(lVar10 + 8) = 0;
                      LOCK();
                      plVar1 = plVar5 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        local_110 = lVar10;
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar5 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        lVar10 = local_110;
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                          lVar10 = local_110;
                        }
                      }
                    }
                    *(undefined8 *)(lVar10 + 0x1d) = 0;
                    *(undefined8 *)(lVar10 + 0x25) = 0;
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                  }
                }
                lVar16 = lVar16 + 8;
              } while ((longlong)(int)lVar13 * 8 != lVar16);
            }
          }
          else {
            lVar13 = param_1[5];
            if ((longlong)(int)lVar13 != 0) {
              lVar6 = param_1[4];
              lVar16 = 0;
              do {
                lVar10 = *(longlong *)(lVar6 + lVar16);
                if ((((lVar10 != 0) && (lVar9 = FUN_14105c5c0(), lVar9 != 0)) &&
                    (*(int *)(lVar9 + 0x38) <= *(int *)(lVar10 + 0x38))) &&
                   ((*(longlong *)
                      (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30 && (lVar10 = *(longlong *)(lVar6 + lVar16), lVar10 != 0)))) {
                  local_110 = *(longlong *)(local_108 + 0x48);
                  if (DAT_14c950c29 == '\x01') {
                    FUN_1456cec3c(lVar10);
                  }
                  lVar9 = FUN_14105c5c0();
                  if (((lVar9 == 0) || (*(int *)(lVar10 + 0x38) < *(int *)(lVar9 + 0x38))) ||
                     (*(longlong *)
                       (*(longlong *)(lVar10 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) !=
                      lVar9 + 0x30)) {
                    lVar10 = 0;
                  }
                  if ((*(int *)(lVar10 + 0x38) <= *(int *)(*(longlong *)(local_110 + 0x10) + 0x38))
                     && (*(longlong *)
                          (*(longlong *)(*(longlong *)(local_110 + 0x10) + 0x30) +
                          (longlong)*(int *)(lVar10 + 0x38) * 8) == lVar10 + 0x30)) {
                    lVar9 = *(longlong *)(param_4 + 8);
                    lVar10 = lVar9 + lVar14;
                    *(undefined8 *)(lVar9 + lVar14) = 0;
                    plVar5 = *(longlong **)(lVar9 + 8 + lVar14);
                    if (plVar5 != (longlong *)0x0) {
                      *(undefined8 *)(lVar10 + 8) = 0;
                      LOCK();
                      plVar1 = plVar5 + 1;
                      *(int *)plVar1 = (int)*plVar1 + -1;
                      UNLOCK();
                      if ((int)*plVar1 == 0) {
                        local_110 = lVar10;
                        (**(code **)*plVar5)(plVar5);
                        LOCK();
                        piVar2 = (int *)((longlong)plVar5 + 0xc);
                        *piVar2 = *piVar2 + -1;
                        UNLOCK();
                        lVar10 = local_110;
                        if (*piVar2 == 0) {
                          (**(code **)(*plVar5 + 0x10))(plVar5);
                          lVar10 = local_110;
                        }
                      }
                    }
                    *(undefined8 *)(lVar10 + 0x1d) = 0;
                    *(undefined8 *)(lVar10 + 0x25) = 0;
                    *(undefined8 *)(lVar10 + 0x10) = 0;
                    *(undefined8 *)(lVar10 + 0x18) = 0;
                  }
                }
                lVar16 = lVar16 + 8;
              } while ((longlong)(int)lVar13 * 8 != lVar16);
            }
          }
        }
        lVar11 = lVar11 + 1;
      } while (lVar11 < *(int *)(param_4 + 0x10));
    }
  }
LAB_140e9b7f5:
  if ((local_f0 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e9b876 FUN_140e9b876 body=57 status=ok
// SIG undefined FUN_140e9b876(void)

void FUN_140e9b876(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb229f0 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb229f0 = FUN_140002ddd(FUN_14643a23a,uVar1,L"GpsGenerator_History");
  }
  return;
}



// FUNCTION 140e9b8b0 FUN_140e9b8b0 body=197 status=ok
// SIG undefined FUN_140e9b8b0(void)

undefined8 * FUN_140e9b8b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a6325c0;
  param_1[0x19] = &PTR_LAB_14a632a98;
  param_1[0x1a] = &PTR_LAB_14a632ab0;
  param_1[0x1b] = &PTR_LAB_14a632af0;
  param_1[0x1c] = &PTR_LAB_14a632b30;
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9b975(param_1[0xb1],*(undefined4 *)(param_1 + 0xb2));
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  FUN_14074f0b4(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9b975 FUN_140e9b975 body=43 status=ok
// SIG undefined FUN_140e9b975(void)

void FUN_140e9b975(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140e9b9a0 FUN_140e9b9a0 body=100 status=ok
// SIG undefined FUN_140e9b9a0(void)

ulonglong FUN_140e9b9a0(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140e9b9e7:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140e9b9e7;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4,*(undefined4 *)(param_1 + 8));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140e9bafc FUN_140e9bafc body=166 status=ok
// SIG undefined FUN_140e9bafc(void)

void FUN_140e9bafc(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [40];
  undefined8 local_20;
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = (longlong *)param_1[1];
  if (local_18 == (longlong *)0x0) {
    local_18 = (longlong *)0x0;
    local_20 = 0;
  }
  else {
    iVar5 = (int)local_18[1];
    local_20 = 0;
    do {
      if (iVar5 == 0) {
        local_18 = (longlong *)0x0;
        goto LAB_140e9bb3d;
      }
      LOCK();
      iVar4 = (int)local_18[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(local_18 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar6);
    local_20 = *param_1;
  }
LAB_140e9bb3d:
  FUN_140e9bba4(param_1 + 0x16,&local_20);
  plVar3 = local_18;
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)plVar3 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e9bba4 FUN_140e9bba4 body=162 status=ok
// SIG undefined FUN_140e9bba4(void)

void FUN_140e9bba4(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140e9bc31;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140e9bc31:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140e9bc46 FUN_140e9bc46 body=358 status=ok
// SIG undefined FUN_140e9bc46(void)

undefined4 *
FUN_140e9bc46(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140e9be44(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar8 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar8 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar5 >> 4);
  local_58 = param_4;
  cVar3 = FUN_140e9bdae(param_1,uVar8,local_40);
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_40 + 0x14) = uVar8;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140e9c02a(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9bdae FUN_140e9bdae body=150 status=ok
// SIG undefined FUN_140e9bdae(void)

void FUN_140e9bdae(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
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
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar6 = (int)lVar3;
          *(undefined4 *)((longlong)plVar6 + 4) = uVar1;
          *(int *)(plVar6 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar6 + 0xc) = uVar2;
          FUN_146972cf2((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          goto LAB_140e9be18;
        }
        iVar7 = (int)plVar6[2];
      } while (iVar7 != -1);
    }
  }
  uVar5 = 0;
LAB_140e9be18:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 140e9be44 FUN_140e9be44 body=485 status=ok
// SIG undefined FUN_140e9be44(void)

int * FUN_140e9be44(longlong *param_1,int *param_2)

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



// FUNCTION 140e9c02a FUN_140e9c02a body=594 status=ok
// SIG undefined FUN_140e9c02a(void)

void FUN_140e9c02a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 auStack_88 [32];
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar6 = *(uint *)(param_1 + 9);
  if (uVar6 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar6,4);
    if (0 < (int)uVar6) {
      uVar4 = 0;
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar4) * 4) =
             0xffffffff;
        uVar4 = uVar4 + 1;
      } while (uVar6 != uVar4);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar9 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar9 = local_68 >> 0x20;
    }
    iVar5 = (int)local_68;
    uVar6 = (uint)local_58;
    iVar7 = local_58._4_4_;
    iVar12 = local_50;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        lVar14 = *param_1;
        lVar13 = (longlong)iVar7;
        uVar2 = *(undefined8 *)(lVar14 + lVar13 * 0x18);
        uVar4 = (uint)((ulonglong)uVar2 >> 0x10);
        uVar15 = (uint)uVar2 & 0xffff;
        uVar11 = (longlong)
                 (int)(((uint)uVar2 << 0x10 | uVar15) + (int)((ulonglong)uVar2 >> 0x20) +
                       (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar15 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar14 + 0x14 + lVar13 * 0x18) = iVar10;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar14 + 0x10 + lVar13 * 0x18) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar7
        ;
        uVar6 = ~(uint)uVar9 & uVar6;
        plVar8 = (longlong *)local_60[2];
        if ((longlong *)local_60[2] == (longlong *)0x0) {
          plVar8 = local_60;
        }
        iVar10 = (int)local_60[3];
        lVar14 = (longlong)iVar5;
        uVar4 = *(uint *)((longlong)plVar8 + lVar14 * 4) & uVar6;
        if (uVar4 == 0) {
          iVar7 = iVar10 + 0x1e;
          if (-1 < iVar10 + -1) {
            iVar7 = iVar10 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar3 = iVar7;
          if (iVar7 < iVar5) {
            iVar3 = iVar5;
          }
          if (iVar7 <= iVar5) break;
          lVar13 = 0;
          while( true ) {
            iVar12 = iVar12 + 0x20;
            uVar4 = *(uint *)((longlong)plVar8 + lVar13 * 4 + lVar14 * 4 + 4);
            if (uVar4 != 0) break;
            lVar13 = lVar13 + 1;
            if (iVar3 - lVar14 == lVar13) goto LAB_140e9c233;
          }
          iVar5 = iVar5 + (int)lVar13 + 1;
          uVar6 = 0xffffffff;
        }
        uVar9 = (ulonglong)(-uVar4 & uVar4);
        uVar11 = uVar9 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar11 != 0) {
          for (; uVar11 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar7 = (iVar12 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
      } while (iVar7 < iVar10);
    }
  }
LAB_140e9c233:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9c27e FUN_140e9c27e body=83 status=ok
// SIG undefined FUN_140e9c27e(void)

void FUN_140e9c27e(longlong param_1)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  byte bVar4;
  
  lVar3 = FUN_140e9c38e();
  if (lVar3 != 0) {
    bVar1 = *(byte *)(param_1 + 8);
    bVar2 = *(byte *)(lVar3 + 0x208);
    bVar4 = (byte)(1 << (bVar1 & 0x1f)) | bVar2;
    *(byte *)(lVar3 + 0x208) = bVar4;
    if (bVar2 != bVar4) {
      FUN_140e9c2d2(lVar3 + 200,lVar3,bVar1,1);
      return;
    }
  }
  return;
}



// FUNCTION 140e9c2d2 FUN_140e9c2d2 body=187 status=ok
// SIG undefined FUN_140e9c2d2(void)

void FUN_140e9c2d2(longlong *param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  char cVar4;
  ulonglong uVar5;
  bool bVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  iVar1 = *(int *)((longlong)param_1 + 0x14);
  *(int *)((longlong)param_1 + 0x14) = iVar1 + 1;
  uVar5 = (ulonglong)(int)param_1[1];
  if ((longlong)uVar5 < 1) {
    *(int *)((longlong)param_1 + 0x14) = iVar1;
    return;
  }
  bVar6 = false;
  do {
    lVar8 = uVar5 * 0x10 + -8;
    uVar7 = uVar5;
    while (((*(int *)(*param_1 + lVar8) != 0 &&
            (plVar2 = *(longlong **)(*param_1 + -8 + lVar8), plVar2 != (longlong *)0x0)) &&
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2,param_3,param_4), cVar4 != '\0')))
    {
      lVar8 = lVar8 + -0x10;
      bVar3 = uVar7 < 2;
      uVar7 = uVar7 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140e9c375;
      }
    }
    uVar5 = uVar7 - 1;
    bVar6 = true;
  } while (1 < uVar7);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140e9c375:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140e9c38e FUN_140e9c38e body=310 status=ok
// SIG undefined FUN_140e9c38e(void)

longlong FUN_140e9c38e(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
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
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != (longlong *)0x0) {
    lVar1 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != 0) {
      if (DAT_14cba8288 == 0) {
        local_30 = &local_18;
        local_18 = FUN_141864c34;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_1464cee30;
        local_38 = &LAB_148bfac22;
        local_40 = &LAB_140f21842;
        local_48 = &DAT_149e063b2;
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 0x10;
        local_68 = 0x9cd0;
        FUN_14081cfa3(L"/Script/OakGame",L"OakCharacter",&DAT_14cba8288,FUN_1465d003c);
      }
      if ((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30))
      goto LAB_140e9c3f2;
    }
  }
  lVar1 = 0;
LAB_140e9c3f2:
  lVar2 = lVar1 + 0x6890;
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9c4c6 FUN_140e9c4c6 body=250 status=ok
// SIG undefined FUN_140e9c4c6(void)

void FUN_140e9c4c6(longlong *param_1,longlong param_2)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  undefined8 local_18;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (((*(int *)(param_2 + 0x10) == 0) || (iVar1 = *(int *)(param_2 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_2 + 0x10) == DAT_14c948000)) {
    local_10 = DAT_14c948620;
    local_18 = DAT_14c948618;
  }
  else {
    lVar2 = param_2 + 0x18;
    if (0 < *(int *)(param_2 + 0x34)) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_2 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) {
      local_10 = DAT_14c948620;
      local_18 = DAT_14c948618;
    }
    else {
      local_10 = *(undefined4 *)(lVar2 + 0x20);
      local_18 = *(undefined8 *)(lVar2 + 0x18);
    }
    if ((iVar1 != 1) && (1 < iVar1)) {
      local_20 = *(undefined4 *)(*(longlong *)(param_2 + 0x28) + 0x14);
      local_28 = *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xc);
      goto LAB_140e9c54f;
    }
  }
  local_20 = DAT_14c948620;
  local_28 = DAT_14c948618;
LAB_140e9c54f:
  (**(code **)(*param_1 + 0x40))(param_1,&local_28,&local_18);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9c5c2 FUN_140e9c5c2 body=190 status=ok
// SIG undefined FUN_140e9c5c2(void)

undefined1 FUN_140e9c5c2(longlong param_1,undefined4 *param_2,undefined4 *param_3)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  longlong *plVar5;
  
  if (param_2[2] == 0) {
    uVar3 = *param_2;
  }
  else {
    uVar3 = FUN_144a78877(*param_2,param_2[2]);
  }
  iVar2 = FUN_140987788((longlong *)(param_1 + 0x28),uVar3,param_2);
  if (iVar2 != -1) {
    lVar1 = *(longlong *)(param_1 + 0x28);
    if (lVar1 + (longlong)iVar2 * 0x68 == 0) {
      return 0;
    }
    plVar5 = (longlong *)(lVar1 + (longlong)iVar2 * 0x68 + 0x10);
    if (plVar5 == (longlong *)0x0) {
      return 0;
    }
    if (param_3[2] == 0) {
      uVar3 = *param_3;
    }
    else {
      uVar3 = FUN_144a78877(*param_3,param_3[2]);
    }
    iVar2 = FUN_1409877e8(plVar5,uVar3,param_3);
    if (iVar2 != -1) {
      if (*plVar5 + (longlong)iVar2 * 0x38 == 0) {
        return 0;
      }
      puVar4 = (undefined1 *)(*plVar5 + (longlong)iVar2 * 0x38 + 0x10);
      if (puVar4 == (undefined1 *)0x0) {
        return 0;
      }
      return *puVar4;
    }
  }
  return 0;
}



// FUNCTION 140e9c680 FUN_140e9c680 body=226 status=ok
// SIG undefined FUN_140e9c680(void)

void FUN_140e9c680(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140e9c762(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140e9c762 FUN_140e9c762 body=1324 status=ok
// SIG undefined FUN_140e9c762(void)

void FUN_140e9c762(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e9cc90 FUN_140e9cc90 body=226 status=ok
// SIG undefined FUN_140e9cc90(void)

void FUN_140e9cc90(longlong param_1,ulonglong *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 0x1e8);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = uVar1;
  FUN_140e9cd72(param_1,param_2);
  puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar3 = puVar2 + 3;
  if ((undefined8 *)param_2[1] < puVar3) {
    FUN_140023dd8(param_2,0x20);
    puVar2 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar3 = puVar2 + 3;
  }
  *param_2 = (ulonglong)puVar3;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar2;
  param_2[6] = (ulonglong)(puVar2 + 1);
  puVar2[1] = 0;
  *puVar2 = &PTR_LAB_14a1fb980;
  *(undefined4 *)(puVar2 + 2) = 4;
  return;
}



// FUNCTION 140e9cd72 FUN_140e9cd72 body=1324 status=ok
// SIG undefined FUN_140e9cd72(void)

void FUN_140e9cd72(longlong param_1,ulonglong *param_2)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *_Src;
  uint uVar9;
  ulonglong uVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  void *pvVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 *puVar17;
  undefined8 *puVar18;
  size_t _Size;
  ulonglong uVar19;
  void *_Dst;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined1 *local_b8;
  int local_b0;
  undefined1 local_a8 [64];
  undefined1 *local_68;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_144b1c6fa(param_1 + 0x10,local_c0);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 0x11;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x90);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 0x11;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_FUN_14a1fb978;
  puVar18[3] = 0;
  *(int *)(puVar18 + 4) = local_b0;
  if ((longlong)local_b0 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x24) = 8;
  }
  else {
    puVar17 = local_c0;
    if (local_b8 != (undefined1 *)0x0) {
      puVar17 = local_b8;
    }
    FUN_1446fe144(puVar18 + 2,local_b0,0);
    puVar13 = (undefined8 *)puVar18[3];
    if ((undefined8 *)puVar18[3] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 2;
    }
    memcpy(puVar13,puVar17,(longlong)local_b0);
  }
  puVar18[0xd] = 0;
  *(int *)(puVar18 + 0xe) = local_60;
  if ((longlong)local_60 == 0) {
    *(undefined4 *)((longlong)puVar18 + 0x74) = 8;
  }
  else {
    puVar17 = local_68;
    if (local_68 == (undefined1 *)0x0) {
      puVar17 = local_a8;
    }
    FUN_1446fe1b8(puVar18 + 5,local_60,0);
    puVar13 = (undefined8 *)puVar18[0xd];
    if ((undefined8 *)puVar18[0xd] == (undefined8 *)0x0) {
      puVar13 = puVar18 + 5;
    }
    memcpy(puVar13,puVar17,(longlong)local_60 << 3);
  }
  *(undefined4 *)(puVar18 + 0xf) = local_58;
  *(undefined4 *)((longlong)puVar18 + 0x7c) = uStack_54;
  *(undefined4 *)(puVar18 + 0x10) = uStack_50;
  *(undefined4 *)((longlong)puVar18 + 0x84) = uStack_4c;
  if (local_68 != (undefined1 *)0x0) {
    FUN_1400020a8(local_68);
  }
  if (local_b8 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  uVar3 = *(undefined4 *)(param_1 + 0x1d8);
  uVar4 = *(undefined4 *)(param_1 + 0x1dc);
  uVar7 = *(undefined8 *)(param_1 + 0x1b8);
  uVar8 = *(undefined8 *)(param_1 + 0x1c0);
  local_c8 = CONCAT44(local_c8._4_4_,*(undefined4 *)(param_1 + 0x1e0));
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    uVar10 = 0;
  }
  else {
    lVar12 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar15 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    uVar10 = *(ulonglong *)(*(longlong *)(lVar12 + 0x50) + lVar15 * 8);
    if (uVar10 == 0) {
      uVar10 = FUN_1400bafc2(lVar12,lVar15,1);
    }
  }
  uVar11 = FUN_140029432(param_2,uVar10,0);
  param_2[0x37] = uVar10;
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 3;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x20);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 3;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a37d340;
  puVar18[2] = uVar11;
  local_d8 = uVar8;
  FUN_14480864a(param_2,uVar10,*(undefined8 *)(param_1 + 0x1c8),uVar7);
  puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
  puVar13 = puVar18 + 4;
  if ((undefined8 *)param_2[1] < puVar13) {
    FUN_140023dd8(param_2,0x28);
    puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar13 = puVar18 + 4;
  }
  *param_2 = (ulonglong)puVar13;
  *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
  *(undefined8 **)param_2[6] = puVar18;
  param_2[6] = (ulonglong)(puVar18 + 1);
  puVar18[1] = 0;
  *puVar18 = &PTR_LAB_14a1fbc30;
  *(undefined4 *)(puVar18 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar18 + 0x14) = uVar4;
  *(undefined4 *)(puVar18 + 3) = (undefined4)local_c8;
  if (*(longlong *)(param_1 + 0x1c8) == 0) {
    lVar12 = 0;
  }
  else {
    lVar15 = *(longlong *)(*(longlong *)(param_1 + 0x1d0) + 8);
    lVar16 = (longlong)*(int *)(*(longlong *)(param_1 + 0x1c8) + 0xd4);
    lVar12 = *(longlong *)(*(longlong *)(lVar15 + 0x50) + lVar16 * 8);
    if (lVar12 == 0) {
      lVar12 = FUN_1400bafc2(lVar15,lVar16,1);
    }
  }
  local_c8 = lVar12;
  if (DAT_14ca8507b == '\x01') {
    puVar1 = param_2 + 0x12;
    if ((0 < (int)param_2[0x13]) &&
       (*(undefined4 *)(param_2 + 0x13) = 0, *(int *)((longlong)param_2 + 0x9c) < 0)) {
      FUN_147139e90(puVar1,0);
    }
    lVar12 = *(longlong *)(param_1 + 0x1c8);
    uVar10 = *(ulonglong *)(lVar12 + 0x10);
    uVar19 = lVar12 + 0x10 + ((longlong)uVar10 >> 0x18);
    if ((uVar10 & 1) == 0) {
      uVar19 = uVar10;
    }
    iVar5 = *(int *)(lVar12 + 0x18);
    if ((longlong)iVar5 != 0) {
      lVar12 = 0;
      do {
        uVar9 = (uint)*(byte *)(uVar19 + 3 + lVar12);
        if ((uVar9 < 0x13) && ((0x44080U >> (uVar9 & 0x1f) & 1) != 0)) {
          bVar2 = *(byte *)(uVar19 + 2 + lVar12);
          iVar6 = (int)param_2[0x13];
          *(uint *)(param_2 + 0x13) = iVar6 + 1U;
          if (*(uint *)((longlong)param_2 + 0x9c) < iVar6 + 1U) {
            FUN_1447477d8(puVar1,iVar6);
          }
          uVar10 = *puVar1;
          *(ushort *)(uVar10 + (longlong)iVar6 * 4) = (ushort)bVar2;
          *(undefined1 *)(uVar10 + 2 + (longlong)iVar6 * 4) = 1;
        }
        lVar12 = lVar12 + 4;
      } while ((longlong)iVar5 * 4 != lVar12);
    }
    uVar10 = param_2[0x13];
    lVar12 = (longlong)(int)uVar10;
    if (0 < lVar12) {
      if (DAT_14ca8507b == '\x01') {
        _Src = (void *)*puVar1;
        puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
        puVar13 = puVar18 + 5;
        if ((undefined8 *)param_2[1] < puVar13) {
          FUN_140023dd8(param_2,0x30);
          puVar18 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
          puVar13 = puVar18 + 5;
        }
        *param_2 = (ulonglong)puVar13;
        *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
        *(undefined8 **)param_2[6] = puVar18;
        param_2[6] = (ulonglong)(puVar18 + 1);
        _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
        pvVar14 = (void *)((longlong)_Dst + lVar12 * 4);
        _Size = lVar12 * 4;
        if ((void *)param_2[1] < pvVar14) {
          FUN_140023dd8(param_2,(uint)_Size | 2);
          _Dst = (void *)(*param_2 + 1 & 0xfffffffffffffffe);
          pvVar14 = (void *)((longlong)_Dst + _Size);
        }
        *param_2 = (ulonglong)pvVar14;
        memcpy(_Dst,_Src,_Size);
        puVar18[1] = 0;
        *puVar18 = &PTR_FUN_14a1fbc38;
        puVar18[2] = local_c8;
        puVar18[3] = _Dst;
        *(int *)(puVar18 + 4) = (int)uVar10;
      }
      *(undefined4 *)(param_2 + 0x13) = 0;
      if (*(int *)((longlong)param_2 + 0x9c) < 0) {
        FUN_147139e90(puVar1,0);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e9d2a0 FUN_140e9d2a0 body=3314 status=ok
// SIG undefined FUN_140e9d2a0(void)

void FUN_140e9d2a0(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  int iVar5;
  char cVar6;
  int *_Src;
  undefined8 *puVar7;
  undefined4 *_Src_00;
  undefined1 *_Src_01;
  undefined1 auStack_198 [32];
  ulonglong local_178;
  undefined8 local_170;
  undefined1 *local_168;
  code *local_160;
  undefined1 local_158 [4];
  undefined4 local_154;
  undefined4 local_b4;
  undefined4 local_88;
  int local_58;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_40 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_40);
            goto LAB_140e9d39d;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_40) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_40,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_40,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_40,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_40,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_40);
  }
LAB_140e9d39d:
  local_48 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_48);
            goto LAB_140e9d473;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_48) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_48,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_48,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_48,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_48,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_48);
  }
LAB_140e9d473:
  local_50 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_1468d96f0;
      local_170 = 0;
      local_178 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_50);
            goto LAB_140e9d549;
          }
        }
        puVar7 = (undefined8 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (puVar7 != &local_50) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_50,puVar7,(int)plVar1[6]);
          }
          else {
            memcpy(&local_50,puVar7,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_50,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_50,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_50);
  }
LAB_140e9d549:
  local_54 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c952210) {
    FUN_144b3d300(&DAT_14c952210);
    if (DAT_14c952210 == -1) {
      FUN_14475b26a();
      local_160 = FUN_1405ebbb2;
      local_168 = &DAT_14c9520b8;
      local_170 = 0;
      local_178 = 0x1008081;
      FUN_14000176a(&DAT_14c9521c0,L"FIntProperty",0x80,0);
      atexit(FUN_142816fad);
      _Init_thread_footer(&DAT_14c952210);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_54);
            goto LAB_140e9d61e;
          }
        }
        _Src_00 = (undefined4 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_00 != &local_54) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_54,_Src_00,(int)plVar1[6]);
          }
          else {
            memcpy(&local_54,_Src_00,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_54,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_54,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_54);
  }
LAB_140e9d61e:
  local_58 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951d20) {
    FUN_144b3d300(&DAT_14c951d20);
    if (DAT_14c951d20 == -1) {
      local_168 = (undefined1 *)FUN_1446ddbd2();
      local_160 = FUN_14067a048;
      local_170 = 0;
      local_178 = 0x28001;
      FUN_14000176a(&DAT_14c951cd0,L"FBoolProperty",0x20000,0);
      atexit(FUN_142811fe5);
      _Init_thread_footer(&DAT_14c951d20);
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,&local_58);
            goto LAB_140e9d6f1;
          }
        }
        _Src = (int *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src != &local_58) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,&local_58,_Src,(int)plVar1[6]);
          }
          else {
            memcpy(&local_58,_Src,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,&local_58,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,&local_58,lVar2);
      }
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_58);
  }
LAB_140e9d6f1:
  iVar5 = local_58;
  memset(local_158,0,0x100);
  local_88 = 0xffffffff;
  local_154 = 0x3f800000;
  local_b4 = 0xffffffff;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
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
          cVar6 = (*pcVar3)(plVar1);
          if (cVar6 != '\0') {
            (**(code **)(*plVar1 + 0xa0))(plVar1,lVar2,local_158);
            goto LAB_140e9d7c8;
          }
        }
        _Src_01 = (undefined1 *)(lVar2 + *(int *)((longlong)plVar1 + 0x44));
        if (_Src_01 != local_158) {
          if ((*(byte *)((longlong)plVar1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar1 + 0x100))(plVar1,local_158,_Src_01,(int)plVar1[6]);
          }
          else {
            memcpy(local_158,_Src_01,
                   (longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
          }
        }
      }
      else if (pcVar3 == FUN_14007468e) {
        local_170 = CONCAT44(local_170._4_4_,(int)plVar1[6]);
        local_178 = local_178 & 0xffffffff00000000;
        FUN_1400746b0(plVar1,local_158,lVar2,1);
      }
      else {
        (*pcVar3)(plVar1,local_158,lVar2);
      }
    }
    else {
      puVar7 = (undefined8 *)(param_2 + 0x80);
      do {
        puVar4 = (undefined8 *)*puVar7;
        puVar7 = puVar4 + 2;
      } while ((longlong *)*puVar4 != plVar1);
      *(undefined8 *)(param_2 + 0x38) = puVar4[1];
      *(undefined8 *)(param_2 + 0x40) = 0;
    }
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_158);
  }
LAB_140e9d7c8:
  local_168 = local_158;
  if (*(undefined1 **)(param_2 + 0x38) != (undefined1 *)0x0) {
    local_168 = *(undefined1 **)(param_2 + 0x38);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  local_170 = CONCAT71(local_170._1_7_,iVar5 != 0);
  local_178 = CONCAT44(local_178._4_4_,local_54);
  (**(code **)(*param_1 + 0x948))(param_1,local_40,local_48,local_50);
  if ((local_38 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9df94 FUN_140e9df94 body=1384 status=ok
// SIG undefined FUN_140e9df94(void)

void FUN_140e9df94(longlong param_1,undefined8 param_2,undefined8 param_3,longlong *param_4,
                  int param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  char cVar4;
  longlong lVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  undefined1 auStack_108 [32];
  double local_e8;
  double local_e0;
  double local_d8;
  float *local_d0;
  undefined1 *local_c8;
  float **local_c0;
  float local_b4;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (((param_4 == (longlong *)0x0) || ((*(byte *)(param_1 + 0x34a) & 0x40) == 0)) ||
     (cVar4 = (**(code **)(*param_4 + 0x488))(param_4), cVar4 == '\0')) goto LAB_140e9e01b;
  lVar5 = *(longlong *)(param_1 + 0x110);
  dVar11 = (double)param_4[0x4e] - *(double *)(lVar5 + 0x270);
  dVar16 = (double)param_4[0x4c] - *(double *)(lVar5 + 0x260);
  dVar15 = (double)param_4[0x4d] - *(double *)(lVar5 + 0x268);
  dVar10 = *(double *)(param_1 + 0x230);
  dVar13 = *(double *)(param_1 + 0x238);
  dVar14 = *(double *)(param_1 + 0x240);
  dVar12 = dVar11 * dVar14 + dVar16 * dVar10 + dVar15 * dVar13;
  dVar11 = (dVar11 - dVar14 * dVar12) - dVar14 * 0.25;
  dVar15 = (dVar15 - dVar13 * dVar12) - dVar13 * 0.25;
  dVar16 = (dVar16 - dVar12 * dVar10) - dVar10 * 0.25;
  dVar12 = dVar11 * dVar11 + dVar16 * dVar16 + dVar15 * dVar15;
  if (((dVar12 != 1.0) || (dVar1 = dVar11, dVar2 = dVar15, dVar3 = dVar16, NAN(dVar12))) &&
     (dVar1 = DAT_14c8464f0, dVar2 = DAT_14c8464e8, dVar3 = DAT_14c8464e0,
     9.99999993922529e-09 <= dVar12)) {
    dVar12 = 1.0 / SQRT(dVar12);
    dVar1 = dVar11 * dVar12;
    dVar2 = dVar15 * dVar12;
    dVar3 = dVar16 * dVar12;
  }
  dVar11 = *(double *)(param_1 + 0x138) * dVar14 +
           *(double *)(param_1 + 0x128) * dVar10 + dVar13 * *(double *)(param_1 + 0x130);
  dVar16 = *(double *)(param_1 + 0x138) - dVar14 * dVar11;
  dVar14 = *(double *)(param_1 + 0x130) - dVar13 * dVar11;
  dVar13 = *(double *)(param_1 + 0x128) - dVar11 * dVar10;
  dVar10 = dVar16 * dVar16 + dVar13 * dVar13 + dVar14 * dVar14;
  if (((dVar10 != 1.0) || (dVar11 = dVar13, dVar15 = dVar14, dVar12 = dVar16, NAN(dVar10))) &&
     (dVar11 = DAT_14c8464e0, dVar15 = DAT_14c8464e8, dVar12 = DAT_14c8464f0,
     9.99999993922529e-09 <= dVar10)) {
    dVar10 = 1.0 / SQRT(dVar10);
    dVar11 = dVar13 * dVar10;
    dVar15 = dVar14 * dVar10;
    dVar12 = dVar16 * dVar10;
  }
  dVar10 = (dVar1 + dVar12) * 0.5;
  dVar14 = (dVar2 + dVar15) * 0.5;
  dVar13 = (dVar3 + dVar11) * 0.5;
  dVar11 = dVar10 * dVar10 + dVar13 * dVar13 + dVar14 * dVar14;
  if (9.99999993922529e-09 < dVar11) {
    dVar11 = 1.0 / SQRT(dVar11);
    dVar13 = dVar13 * dVar11;
    dVar14 = dVar14 * dVar11;
    dVar10 = dVar10 * dVar11;
  }
  if (param_5 == -1) {
LAB_140e9e4ae:
    puVar6 = (undefined1 *)0x0;
  }
  else {
    lVar5 = FUN_144a745da();
    if ((*(int *)(param_4[2] + 0x38) < *(int *)(lVar5 + 0x38)) ||
       (*(longlong *)(*(longlong *)(param_4[2] + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) !=
        lVar5 + 0x30)) goto LAB_140e9e4ae;
    FUN_14041807a(param_4,&local_c8,param_5);
    puVar6 = local_c8;
  }
  fVar17 = *(float *)(param_1 + 0x374);
  if (*(char *)(param_1 + 0x34a) < '\0') {
    lVar5 = (**(code **)(*param_4 + 0x7b8))(param_4,puVar6,1,0xffffffff);
    if (lVar5 == 0) {
      fVar9 = 1.0;
    }
    else {
      local_d0 = &local_b4;
      local_b4 = 0.0;
      local_c0 = &local_d0;
      local_c8 = &LAB_14362051c;
      FUN_1448e6002(lVar5 + 0x138);
      fVar9 = local_b4;
    }
    fVar17 = fVar17 * fVar9;
  }
  uVar7 = -(uint)(0.0 < *(float *)(param_1 + 0x37c));
  uVar8 = -(uint)(0.0 < *(float *)(param_1 + 0x378));
  fVar9 = (float)(~uVar8 & 0xff7fffff | (uint)*(float *)(param_1 + 0x378) & uVar8);
  dVar11 = *(double *)(param_1 + 0x138) * *(double *)(param_1 + 0x240) +
           *(double *)(param_1 + 0x128) * *(double *)(param_1 + 0x230) +
           *(double *)(param_1 + 0x238) * *(double *)(param_1 + 0x130);
  dVar15 = *(double *)(param_1 + 0x138) - *(double *)(param_1 + 0x240) * dVar11;
  dVar16 = *(double *)(param_1 + 0x130) - *(double *)(param_1 + 0x238) * dVar11;
  dVar11 = *(double *)(param_1 + 0x128) - dVar11 * *(double *)(param_1 + 0x230);
  dVar11 = (double)fVar17 * SQRT(dVar15 * dVar15 + dVar11 * dVar11 + dVar16 * dVar16);
  dVar16 = (double)(float)(~uVar7 & 0x7f7fffff | (uint)*(float *)(param_1 + 0x37c) & uVar7);
  if (dVar16 <= dVar11) {
    dVar11 = dVar16;
  }
  if ((double)fVar9 < dVar11) {
    fVar9 = (float)dVar11;
  }
  local_e8 = (double)fVar9;
  local_d8 = dVar10 * local_e8;
  local_e0 = dVar14 * local_e8;
  local_e8 = dVar13 * local_e8;
  (**(code **)(*param_4 + 0x6a8))(param_4,&local_e8,puVar6,0);
LAB_140e9e01b:
  if ((local_b0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140e9e504 FUN_140e9e504 body=221 status=ok
// SIG undefined FUN_140e9e504(void)

longlong FUN_140e9e504(void)

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
  if (DAT_14cad4ab8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_14081d0ea;
    local_38 = &LAB_147a473ed;
    local_40 = &LAB_1463c2050;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000001;
    local_60 = 8;
    local_68 = 0x30;
    FUN_14081cfa3(L"/Script/Engine",L"DataAsset",&DAT_14cad4ab8,&DAT_147a473ec);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cad4ab8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9e5ea FUN_140e9e5ea body=222 status=ok
// SIG undefined FUN_140e9e5ea(void)

undefined8 * FUN_140e9e5ea(undefined8 *param_1)

{
  longlong lVar1;
  
  FUN_14076ffa2();
  *param_1 = &PTR_FUN_14b2bd500;
  *(undefined2 *)(param_1 + 0x13) = 0;
  *(undefined8 *)((longlong)param_1 + 0x9c) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xf00000d000000000;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0x1ffffffff;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  param_1[0x14] = DAT_14cb8ce08;
  *param_1 = &PTR_FUN_14b2c8d20;
  param_1[6] = &PTR_FUN_14b2c9010;
  FUN_1406d2124(param_1 + 0x1b);
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  FUN_1406d2124(param_1 + 0x47);
  *(undefined1 *)(param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x38c) = 0x3dcccccd41200000;
  lVar1 = param_1[0xc];
  if (lVar1 != 0) {
    *(undefined2 *)(lVar1 + 0x2d) = 0x101;
    *(undefined1 *)(lVar1 + 0x2b) = 3;
  }
  return param_1;
}



// FUNCTION 140e9e6ee FUN_140e9e6ee body=395 status=ok
// SIG undefined FUN_140e9e6ee(void)

void FUN_140e9e6ee(longlong *param_1,float param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  
  if (param_1[0x169] != 0) {
    lVar2 = FUN_1447210f0(param_1);
    if (lVar2 != 0) {
      lVar2 = FUN_1447210f0(param_1);
      if (*(longlong *)(lVar2 + 0x1f0) == 0) {
        plVar3 = (longlong *)(lVar2 + 0x458);
      }
      else {
        plVar3 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
      }
      lVar2 = param_1[0x169];
      if (lVar2 != 0) {
        lVar1 = *plVar3;
        uVar4 = (uint)lVar2;
        if ((int)(uVar4 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
          lVar5 = lVar1 + 0x18;
          if (*(longlong *)(lVar1 + 0x28) != 0) {
            lVar5 = *(longlong *)(lVar1 + 0x28);
          }
          if ((*(uint *)(lVar5 + (ulonglong)((uVar4 & 0xffffff) >> 5) * 4) >> (uVar4 & 0x1f) & 1) !=
              0) {
            lVar1 = *(longlong *)(lVar1 + 8);
            lVar5 = (ulonglong)(uVar4 & 0xffffff) * 0x70;
            if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
               (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
              FUN_1405a424c();
            }
          }
        }
      }
    }
    param_1[0x169] = 0;
  }
  if ((*(byte *)((longlong)param_1 + 0xa7c) < 2) ||
     (((char)param_1[0x2f] != '\x03' && ((*(byte *)((longlong)param_1 + 0xb2a) & 0x40) == 0)))) {
    fVar6 = (float)(~-(uint)(param_2 < 0.0) & (uint)param_2 |
                   *(uint *)(param_1[0x166] + 0x70) & -(uint)(param_2 < 0.0));
    if (fVar6 <= 0.0) {
      if ((char)param_1[0x2f] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140e9e876. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x5c8))(param_1,1);
        return;
      }
    }
    else {
      *(byte *)((longlong)param_1 + 0xb2a) = *(byte *)((longlong)param_1 + 0xb2a) | 0x40;
      *(float *)(param_1 + 0x153) = fVar6;
      FUN_1405fe75a(param_1,2);
      FUN_1405fdecc(param_1,1);
      if ((char)param_1[0x2f] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x000140e9e83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x578))(param_1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e9e87a FUN_140e9e87a body=215 status=ok
// SIG undefined FUN_140e9e87a(void)

undefined8 * FUN_140e9e87a(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  undefined1 auStack_58 [40];
  char *local_30;
  undefined4 local_28;
  undefined1 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140e9edbc();
  *param_1 = &PTR_FUN_149f0f2e0;
  FUN_140e9ea3a(param_1 + 0x2c,param_3);
  param_1[0x88] = &PTR__purecall_149ef0700;
  param_1[0x89] = param_2;
  local_30 = "Children";
  local_28 = 8;
  local_24 = 0;
  uVar1 = FUN_14001a6c0(&local_30,1);
  param_1[0x8a] = (ulonglong)uVar1;
  param_1[0x88] = &PTR_LAB_149f116e0;
  *(undefined2 *)(param_1 + 0x8e) = 0x100;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  *(undefined1 *)(param_1 + 0x8d) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  FUN_140e9e952(param_3);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9e952 FUN_140e9e952 body=231 status=ok
// SIG undefined FUN_140e9e952(void)

void FUN_140e9e952(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_149ee3200;
  param_1[0x44] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x58];
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
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x42];
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
  param_1[0x18] = &PTR_FUN_149ed05f0;
  plVar3 = (longlong *)param_1[0x2c];
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
                    /* WARNING: Could not recover jumptable at 0x000140e9ea35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 140e9ea3a FUN_140e9ea3a body=897 status=ok
// SIG undefined FUN_140e9ea3a(void)

undefined8 * FUN_140e9ea3a(undefined8 *param_1,longlong param_2)

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
  undefined8 *puVar17;
  undefined8 *puVar18;
  
  *param_1 = &PTR_FUN_149ee3200;
  lVar16 = *(longlong *)(param_2 + 8);
  param_1[1] = lVar16;
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar15 = DAT_14c950c29;
  lVar16 = *(longlong *)(param_2 + 0x10);
  param_1[2] = lVar16;
  if ((lVar16 != 0 & bVar15) == 1) {
    FUN_1456cec3c();
    bVar15 = DAT_14c950c29;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  *(undefined4 *)(param_1 + 3) = uVar1;
  lVar16 = *(longlong *)(param_2 + 0x20);
  param_1[4] = lVar16;
  if ((lVar16 != 0 & bVar15) == 1) {
    FUN_1456cec3c();
  }
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  param_1[5] = *(undefined8 *)(param_2 + 0x28);
  param_1[6] = uVar12;
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  lVar16 = *(longlong *)(param_2 + 0x40);
  param_1[8] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  uVar12 = *(undefined8 *)(param_2 + 0x48);
  uVar13 = *(undefined8 *)(param_2 + 0x50);
  uVar14 = *(undefined8 *)(param_2 + 0x5c);
  *(undefined8 *)((longlong)param_1 + 0x54) = *(undefined8 *)(param_2 + 0x54);
  *(undefined8 *)((longlong)param_1 + 0x5c) = uVar14;
  param_1[9] = uVar12;
  param_1[10] = uVar13;
  puVar17 = (undefined8 *)(param_2 + 0x68);
  puVar18 = param_1 + 0xd;
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0xb8);
  param_1[0x18] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 200);
  uVar2 = *(undefined4 *)(param_2 + 0xcc);
  uVar3 = *(undefined4 *)(param_2 + 0xd0);
  uVar4 = *(undefined4 *)(param_2 + 0xd4);
  uVar5 = *(undefined4 *)(param_2 + 0xd8);
  uVar6 = *(undefined4 *)(param_2 + 0xdc);
  uVar7 = *(undefined4 *)(param_2 + 0xe0);
  uVar8 = *(undefined4 *)(param_2 + 0xe4);
  uVar9 = *(undefined4 *)(param_2 + 0xec);
  uVar10 = *(undefined4 *)(param_2 + 0xf0);
  uVar11 = *(undefined4 *)(param_2 + 0xf4);
  *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0xe8);
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar9;
  *(undefined4 *)(param_1 + 0x1e) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar11;
  *(undefined4 *)(param_1 + 0x1b) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0xdc) = uVar6;
  *(undefined4 *)(param_1 + 0x1c) = uVar7;
  *(undefined4 *)((longlong)param_1 + 0xe4) = uVar8;
  *(undefined4 *)(param_1 + 0x19) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0xcc) = uVar2;
  *(undefined4 *)(param_1 + 0x1a) = uVar3;
  *(undefined4 *)((longlong)param_1 + 0xd4) = uVar4;
  lVar16 = *(longlong *)(param_2 + 0xf8);
  param_1[0x1f] = lVar16;
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar17 = (undefined8 *)(param_2 + 0x100);
  puVar18 = param_1 + 0x20;
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x154) = *(undefined1 *)(param_2 + 0x154);
  *(undefined4 *)(param_1 + 0x2a) = *(undefined4 *)(param_2 + 0x150);
  param_1[0x2b] = *(undefined8 *)(param_2 + 0x158);
  lVar16 = *(longlong *)(param_2 + 0x160);
  param_1[0x2c] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  param_1[0x2d] = *(undefined8 *)(param_2 + 0x168);
  param_1[0x2e] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x17c);
  uVar2 = *(undefined4 *)(param_2 + 0x180);
  uVar3 = *(undefined4 *)(param_2 + 0x184);
  uVar4 = *(undefined4 *)(param_2 + 0x188);
  uVar5 = *(undefined4 *)(param_2 + 0x18c);
  uVar6 = *(undefined4 *)(param_2 + 400);
  uVar7 = *(undefined4 *)(param_2 + 0x194);
  uVar8 = *(undefined4 *)(param_2 + 0x198);
  uVar9 = *(undefined4 *)(param_2 + 0x19c);
  uVar10 = *(undefined4 *)(param_2 + 0x1a0);
  uVar11 = *(undefined4 *)(param_2 + 0x1a4);
  *(undefined4 *)(param_1 + 0x2f) = *(undefined4 *)(param_2 + 0x178);
  *(undefined4 *)((longlong)param_1 + 0x17c) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x184) = uVar3;
  *(undefined4 *)(param_1 + 0x31) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x18c) = uVar5;
  *(undefined4 *)(param_1 + 0x32) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x194) = uVar7;
  *(undefined4 *)(param_1 + 0x33) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x19c) = uVar9;
  *(undefined4 *)(param_1 + 0x34) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = uVar11;
  lVar16 = *(longlong *)(param_2 + 0x1a8);
  param_1[0x35] = lVar16;
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar17 = (undefined8 *)(param_2 + 0x1b0);
  puVar18 = param_1 + 0x36;
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x204) = *(undefined1 *)(param_2 + 0x204);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_2 + 0x200);
  param_1[0x41] = *(undefined8 *)(param_2 + 0x208);
  lVar16 = *(longlong *)(param_2 + 0x210);
  param_1[0x42] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  param_1[0x43] = *(undefined8 *)(param_2 + 0x218);
  param_1[0x44] = &PTR_FUN_149ed05f0;
  uVar1 = *(undefined4 *)(param_2 + 0x22c);
  uVar2 = *(undefined4 *)(param_2 + 0x230);
  uVar3 = *(undefined4 *)(param_2 + 0x234);
  uVar4 = *(undefined4 *)(param_2 + 0x238);
  uVar5 = *(undefined4 *)(param_2 + 0x23c);
  uVar6 = *(undefined4 *)(param_2 + 0x240);
  uVar7 = *(undefined4 *)(param_2 + 0x244);
  uVar8 = *(undefined4 *)(param_2 + 0x248);
  uVar9 = *(undefined4 *)(param_2 + 0x24c);
  uVar10 = *(undefined4 *)(param_2 + 0x250);
  uVar11 = *(undefined4 *)(param_2 + 0x254);
  *(undefined4 *)(param_1 + 0x45) = *(undefined4 *)(param_2 + 0x228);
  *(undefined4 *)((longlong)param_1 + 0x22c) = uVar1;
  *(undefined4 *)(param_1 + 0x46) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x234) = uVar3;
  *(undefined4 *)(param_1 + 0x47) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x23c) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x244) = uVar7;
  *(undefined4 *)(param_1 + 0x49) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x24c) = uVar9;
  *(undefined4 *)(param_1 + 0x4a) = uVar10;
  *(undefined4 *)((longlong)param_1 + 0x254) = uVar11;
  lVar16 = *(longlong *)(param_2 + 600);
  param_1[0x4b] = lVar16;
  if ((lVar16 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  puVar17 = (undefined8 *)(param_2 + 0x260);
  puVar18 = param_1 + 0x4c;
  for (lVar16 = 10; lVar16 != 0; lVar16 = lVar16 + -1) {
    *puVar18 = *puVar17;
    puVar17 = puVar17 + 1;
    puVar18 = puVar18 + 1;
  }
  *(undefined1 *)((longlong)param_1 + 0x2b4) = *(undefined1 *)(param_2 + 0x2b4);
  *(undefined4 *)(param_1 + 0x56) = *(undefined4 *)(param_2 + 0x2b0);
  param_1[0x57] = *(undefined8 *)(param_2 + 0x2b8);
  lVar16 = *(longlong *)(param_2 + 0x2c0);
  param_1[0x58] = lVar16;
  if (lVar16 != 0) {
    LOCK();
    *(int *)(lVar16 + 8) = *(int *)(lVar16 + 8) + 1;
    UNLOCK();
  }
  param_1[0x59] = *(undefined8 *)(param_2 + 0x2c8);
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_2 + 0x2d0);
  return param_1;
}



// FUNCTION 140e9edbc FUN_140e9edbc body=359 status=ok
// SIG undefined FUN_140e9edbc(void)

undefined8 * FUN_140e9edbc(undefined8 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_LAB_149f0f7d0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  uVar2 = (**(code **)(*DAT_14c968338 + 0xb0))();
  uVar1 = (char)uVar2;
  if (2 < uVar2) {
    uVar1 = 0;
  }
  *(undefined1 *)((longlong)param_1 + 0x91) = uVar1;
  uVar2 = (**(code **)(*DAT_14c98eeb0 + 0xb0))();
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = (undefined1)uVar2;
  }
  *(undefined1 *)((longlong)param_1 + 0x92) = uVar1;
  *(undefined8 *)((longlong)param_1 + 0x94) = 0x3f800000;
  *(undefined2 *)((longlong)param_1 + 0x9c) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x3f80000000000000;
  *(undefined1 *)(param_1 + 0x17) = 1;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined8 *)((longlong)param_1 + 0xc4) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_140e9ef24(param_1 + 0x20);
  FUN_140e9f006(param_1 + 0x22);
  puVar3 = (undefined8 *)FUN_14001cc68(0x58,0x10);
  *puVar3 = &PTR_FUN_149e18f80;
  uVar4 = FUN_141253ce0();
  puVar3[1] = uVar4;
  puVar3[2] = &PTR_FUN_149e18960;
  *(undefined2 *)(puVar3 + 3) = 2;
  param_1[0x24] = puVar3;
  *(undefined1 *)((longlong)param_1 + 0x151) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  return param_1;
}



// FUNCTION 140e9ef24 FUN_140e9ef24 body=222 status=ok
// SIG undefined FUN_140e9ef24(void)

undefined8 * FUN_140e9ef24(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  FUN_140e9f0e8(DAT_14c8443b8,&local_30);
  *puVar2 = &PTR_FUN_149e17400;
  puVar2[1] = local_30;
  puVar2[2] = local_28;
  if (local_28 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
    plVar4 = local_28;
  }
  *param_1 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149e18e50;
  puVar3[2] = puVar2;
  param_1[1] = puVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9f006 FUN_140e9f006 body=222 status=ok
// SIG undefined FUN_140e9f006(void)

undefined8 * FUN_140e9f006(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar2 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  FUN_140e9f33a(DAT_14c8443b8,&local_30);
  *puVar2 = &PTR_FUN_149e17400;
  puVar2[1] = local_30;
  puVar2[2] = local_28;
  if (local_28 == (longlong *)0x0) {
    plVar4 = (longlong *)0x0;
  }
  else {
    LOCK();
    *(int *)((longlong)local_28 + 0xc) = *(int *)((longlong)local_28 + 0xc) + 1;
    UNLOCK();
    plVar4 = local_28;
  }
  *param_1 = puVar2;
  puVar3 = (undefined8 *)FUN_14001cc68(0x18,0x10);
  puVar3[1] = &DAT_100000001;
  *puVar3 = &PTR_LAB_149e18e50;
  puVar3[2] = puVar2;
  param_1[1] = puVar3;
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar4 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140e9f0e8 FUN_140e9f0e8 body=593 status=ok
// SIG undefined FUN_140e9f0e8(void)

longlong * FUN_140e9f0e8(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  puVar3 = *(undefined8 **)(DAT_14c844be0 + 0x58);
  plVar4 = *(longlong **)(DAT_14c844be0 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  FUN_140660fd6(*puVar3,&local_48,0);
  plVar5 = (longlong *)(**(code **)(*local_48 + 0x18))();
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e189b0;
  plVar6[2] = (longlong)plVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = plVar5;
  local_40 = plVar6;
  FUN_140660aae(param_1 + 1,local_4c,&local_48);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e9f33a FUN_140e9f33a body=596 status=ok
// SIG undefined FUN_140e9f33a(void)

longlong * FUN_140e9f33a(LPCRITICAL_SECTION param_1,longlong *param_2)

{
  int *piVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined1 auStack_78 [44];
  undefined1 local_4c [4];
  longlong *local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection(param_1);
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c844be8) {
    FUN_144b3d300(&DAT_14c844be8);
    if (DAT_14c844be8 == -1) {
      FUN_1456bade4(&DAT_14c844b48);
      DAT_14c844be0 = &DAT_14c844b48;
      atexit(FUN_142761918);
      _Init_thread_footer(&DAT_14c844be8);
    }
  }
  puVar3 = *(undefined8 **)(DAT_14c844be0 + 0x58);
  plVar4 = *(longlong **)(DAT_14c844be0 + 0x60);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
  }
  FUN_140660fd6(*puVar3,&local_48,1);
  plVar5 = (longlong *)(**(code **)(*local_48 + 0x18))();
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_149e189b0;
  plVar6[2] = (longlong)plVar5;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
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
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
    UNLOCK();
  }
  local_48 = plVar5;
  local_40 = plVar6;
  FUN_140660aae(param_1 + 1,local_4c,&local_48);
  plVar4 = local_40;
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar2 = local_40 + 1;
    *(int *)plVar2 = (int)*plVar2 + -1;
    UNLOCK();
    if ((int)*plVar2 == 0) {
      (**(code **)*local_40)(local_40);
      LOCK();
      piVar1 = (int *)((longlong)plVar4 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar4 + 0x10))(plVar4);
      }
    }
  }
  *param_2 = (longlong)plVar5;
  param_2[1] = (longlong)plVar6;
  if (plVar6 != (longlong *)0x0) {
    LOCK();
    *(int *)((longlong)plVar6 + 0xc) = *(int *)((longlong)plVar6 + 0xc) + 1;
    UNLOCK();
    LOCK();
    plVar4 = plVar6 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*plVar6)(plVar6);
      LOCK();
      piVar1 = (int *)((longlong)plVar6 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if (param_1 != (LPCRITICAL_SECTION)0x0) {
    LeaveCriticalSection(param_1);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140e9f59e FUN_140e9f59e body=40 status=ok
// SIG undefined FUN_140e9f59e(void)

undefined8 FUN_140e9f59e(undefined8 param_1,int param_2)

{
  FUN_140e9f5c6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9f5c6 FUN_140e9f5c6 body=136 status=ok
// SIG undefined FUN_140e9f5c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140e9f5c6(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b677390;
  if (param_1[3] != 0) {
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
                    /* WARNING: Could not recover jumptable at 0x000140e9f640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 140e9f64e FUN_140e9f64e body=81 status=ok
// SIG undefined FUN_140e9f64e(void)

void FUN_140e9f64e(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_140e9f6a0(puVar1);
  *puVar1 = &PTR_FUN_14b6b9b30;
  puVar1[0x72] = &PTR_FUN_14b6ba170;
  puVar1[0x87] = &PTR_FUN_14b6ba210;
  puVar1[0x88] = &PTR_FUN_14b6ba2b0;
  *(undefined1 *)(puVar1 + 0xca) = 2;
  return;
}



// FUNCTION 140e9f6a0 FUN_140e9f6a0 body=521 status=ok
// SIG undefined FUN_140e9f6a0(void)

undefined8 * FUN_140e9f6a0(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  FUN_1406eddc8();
  *param_1 = &PTR_FUN_14b0727c0;
  param_1[0x72] = &PTR_FUN_14b072e00;
  param_1[0x87] = &PTR_FUN_14b072ea0;
  param_1[0x88] = &PTR_FUN_14b072f40;
  param_1[0x89] = &DAT_14a171d50;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined1 *)((longlong)param_1 + 0x504) = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  *(undefined8 *)((longlong)param_1 + 0x521) = 0;
  *(undefined8 *)((longlong)param_1 + 0x529) = 0;
  memset(param_1 + 0x8e,0,0x8f);
  *(undefined4 *)(param_1 + 0xa9) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x554) = 0;
  *(undefined8 *)((longlong)param_1 + 0x55c) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x564) = 0;
  *(undefined8 *)((longlong)param_1 + 0x56c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x571) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5cc) = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  param_1[0xb7] = 0;
  *(undefined8 *)((longlong)param_1 + 0x5b9) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c1) = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  param_1[0xc1] = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  param_1[200] = 0;
  param_1[0xc9] = 0;
  for (puVar1 = param_1; (puVar1 != (undefined8 *)0x0 && ((*(uint *)(puVar1 + 1) & 0x30) == 0));
      puVar1 = (undefined8 *)puVar1[4]) {
  }
  *(byte *)((longlong)param_1 + 0x3a) = *(byte *)((longlong)param_1 + 0x3a) & 0xfd;
  *(byte *)((longlong)param_1 + 0x62) = *(byte *)((longlong)param_1 + 0x62) | 1;
  *(byte *)((longlong)param_1 + 99) = *(byte *)((longlong)param_1 + 99) & 0xf7;
  FUN_1405e4918(param_1,0x41200000);
  FUN_1405bab3a(param_1,1);
  FUN_1405ba932(param_1,0);
  FUN_1403121a6(param_1,0);
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (*(int *)((longlong)param_1 + 0x464) != 0) {
    FUN_140115c12(param_1 + 0x8b,0);
  }
  param_1[0x8a] = &DAT_14cb70058;
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (*(int *)((longlong)param_1 + 0x484) != 0) {
    FUN_140115c12(param_1 + 0x8f,0);
  }
  param_1[0x8e] = &DAT_14cb70058;
  return param_1;
}



// FUNCTION 140e9f8aa FUN_140e9f8aa body=40 status=ok
// SIG undefined FUN_140e9f8aa(void)

undefined8 FUN_140e9f8aa(undefined8 param_1,int param_2)

{
  FUN_140e9f8d2();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9f8d2 FUN_140e9f8d2 body=95 status=ok
// SIG undefined FUN_140e9f8d2(void)

void FUN_140e9f8d2(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14a7d65d0;
  param_1[5] = &PTR_FUN_14a7d68a0;
  param_1[6] = &PTR_FUN_14a7d68e0;
  param_1[7] = &PTR_FUN_14a7d6910;
  if (param_1[0x21] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9f932(param_1 + 0x11);
  FUN_14040f2c8(param_1);
  return;
}



// FUNCTION 140e9f932 FUN_140e9f932 body=145 status=ok
// SIG undefined FUN_140e9f932(void)

void FUN_140e9f932(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9f9ee(param_1[10],(int)param_1[0xb]);
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140e9f9c3(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140e9f9c3 FUN_140e9f9c3 body=43 status=ok
// SIG undefined FUN_140e9f9c3(void)

void FUN_140e9f9c3(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140e9f9ee FUN_140e9f9ee body=63 status=ok
// SIG undefined FUN_140e9f9ee(void)

void FUN_140e9f9ee(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x10);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140e9fa2e FUN_140e9fa2e body=40 status=ok
// SIG undefined FUN_140e9fa2e(void)

undefined8 FUN_140e9fa2e(undefined8 param_1,int param_2)

{
  FUN_140e9fa56();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140e9fa56 FUN_140e9fa56 body=389 status=ok
// SIG undefined FUN_140e9fa56(void)

void FUN_140e9fa56(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14ac3cbb0;
  plVar1 = param_1 + 0x20;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x24) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x23)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x23)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x18;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1c) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x1b)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1b)) {
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



// FUNCTION 140e9fbdc FUN_140e9fbdc body=3107 status=ok
// SIG undefined FUN_140e9fbdc(void)

void FUN_140e9fbdc(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  ulonglong uVar15;
  longlong lVar16;
  undefined2 *puVar17;
  int iVar18;
  uint uVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  ulonglong uVar23;
  ulonglong uVar24;
  uint *puVar25;
  int iVar26;
  float fVar27;
  undefined1 auStack_208 [32];
  undefined4 local_1e8;
  undefined4 local_1e0;
  undefined4 local_1d8;
  undefined8 local_1d0;
  wchar_t *local_1c8;
  code *local_1c0;
  undefined1 *local_1b8;
  code **local_1b0;
  code *local_1a8;
  code *local_1a0;
  uint *local_190;
  ulonglong local_188;
  int local_17c;
  undefined1 local_178 [4];
  undefined1 local_174 [4];
  longlong *local_170 [2];
  undefined1 local_160 [16];
  longlong *local_150 [2];
  wchar_t *local_140;
  longlong *local_138;
  longlong *local_130 [2];
  undefined8 local_120;
  longlong *local_118;
  undefined8 local_110;
  longlong *local_108;
  undefined1 local_100 [8];
  undefined1 local_f8 [8];
  longlong *local_f0;
  longlong *local_e8 [2];
  undefined2 *local_d8;
  int local_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  longlong *local_c0;
  longlong local_b8;
  ulonglong uStack_b0;
  wchar_t *local_a8;
  longlong *local_a0;
  code *local_98;
  undefined8 uStack_90;
  longlong *local_88;
  undefined4 local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_208;
  FUN_1401b2056();
  if (DAT_14cae8b20 == 0) {
    local_1b0 = &local_98;
    local_98 = (code *)&LAB_14355090c;
    local_1a0 = FUN_14081d0ea;
    local_1a8 = FUN_14081d0ea;
    local_1b8 = &LAB_147b8e16d;
    local_1c0 = (code *)&LAB_140810a38;
    local_1c8 = L"Engine";
    local_1d0 = 0x800000000;
    local_1d8 = 0x10000000;
    local_1e0 = 8;
    local_1e8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar16 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_1b0 = &local_98;
    local_98 = FUN_1449e2820;
    local_1a0 = FUN_14081d0ea;
    local_1a8 = FUN_14081d0ea;
    local_1b8 = &LAB_1468c5283;
    local_1c0 = FUN_142809da0;
    local_1c8 = L"Engine";
    local_1d0 = 0x400000000;
    local_1d8 = 0x10000000;
    local_1e0 = 8;
    local_1e8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar21 = *(longlong *)(param_1 + 0x20);
  if (lVar21 != 0) {
    iVar26 = *(int *)(lVar16 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar21 + 0x10) + 0x38) < iVar26) ||
         (lVar20 = lVar21,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar21 + 0x10) + 0x30) + (longlong)iVar26 * 8) !=
         lVar16 + 0x30)) {
        lVar20 = 0;
      }
    } while ((lVar20 == 0) && (lVar21 = *(longlong *)(lVar21 + 0x20), lVar21 != 0));
    if ((lVar20 != 0) &&
       (((*(byte *)(lVar20 + 0x243) & 1) == 0 && (*(longlong *)(lVar20 + 0x2c8) == 0)))) {
      cVar8 = FUN_144729dda(lVar20 + 0x288);
      if (cVar8 == '\0') {
        FUN_14485c47a(lVar20 + 0x288,param_1);
      }
      else {
        local_b8 = 0;
        uStack_b0 = 0;
        lVar16 = FUN_144a79778(lVar20);
        local_98 = *(code **)(lVar16 + 0x18);
        FUN_1400021e4(&local_98,&local_d8);
        puVar17 = local_d8;
        if (local_d0 == 0) {
          puVar17 = &DAT_149dfb77a;
        }
        FUN_140056680(&local_c8,puVar17);
        FUN_140233b1a(&local_a8,&local_c8);
        local_98 = (code *)CONCAT44(local_98._4_4_,4);
        FUN_14023423e(&local_88,&local_a8);
        FUN_140056680(local_e8,L"Level");
        FUN_140233eec(&local_b8,local_e8,&local_98);
        if (local_e8[0] != (longlong *)0x0) {
          FUN_1400020a8();
        }
        if (local_88 != (longlong *)0x0) {
          (**(code **)(*local_88 + 0x10))();
          local_88 = (longlong *)0x0;
          local_80 = 0;
        }
        if (local_a8 != (wchar_t *)0x0) {
          (**(code **)(*(longlong *)local_a8 + 0x10))();
        }
        if (local_c8 != 0) {
          FUN_1400020a8();
        }
        if (local_d8 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        FUN_1446ddc76(local_100,"MapCheck",1);
        FUN_14276766e(&local_98,local_100);
        FUN_144a5dc74(local_e8);
        FUN_1427679d4(&local_98,&local_d8,local_e8);
        FUN_144a5dc74(local_130);
        FUN_1468756a4(&local_120,param_1,local_130);
        local_110 = local_120;
        local_108 = local_118;
        if (local_118 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_118 + 1) = (int)local_118[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_d8,&local_c8,&local_110);
        local_a8 = L"MapCheck_DuplicateInstancedFoliageActor";
        local_a0._0_4_ = 0x27;
        FUN_1446e940c(local_174,&local_a8);
        local_a8 = L"InstancedFoliage";
        local_a0 = (longlong *)CONCAT44(local_a0._4_4_,0x10);
        FUN_1446e940c(local_178,&local_a8);
        FUN_140208bae(local_170,local_178,local_174,
                      L"Level {Level} has an unexpected duplicate Instanced Foliage Actor.");
        FUN_14023409e(local_160,local_170,1);
        FUN_140233c04(local_150,local_160,&local_b8);
        FUN_1467eb2e4(&local_140,local_150,1);
        local_a8 = local_140;
        local_a0 = local_138;
        if (local_138 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_138 + 1) = (int)local_138[1] + 1;
          UNLOCK();
        }
        FUN_1467eb24e(local_c8,local_f8,&local_a8);
        if (local_f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_f0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        plVar2 = local_a0;
        if (local_a0 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_a0 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_a0)(local_a0);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (local_138 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_138 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_138)(local_138);
            LOCK();
            piVar1 = (int *)((longlong)local_138 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_138 + 0x10))(local_138);
            }
          }
        }
        if (local_150[0] != (longlong *)0x0) {
          (**(code **)(*local_150[0] + 0x10))();
        }
        if (local_170[0] != (longlong *)0x0) {
          (**(code **)(*local_170[0] + 0x10))();
        }
        if (local_c0 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_c0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
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
        plVar2 = local_108;
        if (local_108 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_108 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_108)(local_108);
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
        if (local_118 != (longlong *)0x0) {
          LOCK();
          plVar2 = local_118 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*local_118)(local_118);
            LOCK();
            piVar1 = (int *)((longlong)local_118 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*local_118 + 0x10))(local_118);
            }
          }
        }
        if (local_130[0] != (longlong *)0x0) {
          (**(code **)(*local_130[0] + 0x10))();
        }
        plVar2 = (longlong *)CONCAT44(uStack_cc,local_d0);
        if (plVar2 != (longlong *)0x0) {
          LOCK();
          plVar6 = plVar2 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
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
        if (local_e8[0] != (longlong *)0x0) {
          (**(code **)(*local_e8[0] + 0x10))();
        }
        FUN_1427678c0(&local_98);
        FUN_1446ddc76(&local_a8,"MapCheck",1);
        FUN_14276766e(&local_98,&local_a8);
        FUN_142767a94(&local_98,3,0);
        FUN_1427678c0(&local_98);
        FUN_14010f8af(local_b8,uStack_b0 & 0xffffffff);
        if (local_b8 != 0) {
          FUN_1400020a8();
        }
      }
    }
  }
  local_17c = *DAT_14caa14e8;
  fVar27 = *DAT_14caa1500;
  puVar25 = (uint *)(param_1 + 0x3b0);
  iVar26 = *(int *)(param_1 + 0x3c8);
  local_190 = puVar25;
  if (iVar26 == 0) {
    uVar24 = 1;
    uVar23 = 0;
    iVar9 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x3c0);
    if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
      puVar14 = puVar25;
    }
    uVar19 = *puVar14;
    if (uVar19 == 0) {
      iVar9 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar9 = iVar26 + -1;
      }
      uVar23 = 0;
      uVar24 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar24 = uVar23;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar23) goto LAB_140e9fe8d;
        iVar18 = iVar18 + 0x20;
        uVar19 = puVar14[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar23 = 0;
      iVar18 = 0;
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19);
    uVar15 = uVar24 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar26 <= iVar9) {
      iVar9 = iVar26;
    }
  }
  if (iVar9 != iVar26) {
    if (1.0 <= fVar27) {
      fVar27 = 1.0;
    }
    if (fVar27 <= 0.0) {
      fVar27 = 0.0;
    }
    uVar19 = 0xffffffff;
    local_188 = 0;
    do {
      plVar2 = (longlong *)(*(longlong *)(param_1 + 0x3a0) + (longlong)iVar9 * 0x18);
      lVar16 = *plVar2;
      if (local_17c == 0) {
        if (lVar16 != 0) {
          uVar10 = *(uint *)(lVar16 + 0x4a4);
LAB_140e9fd79:
          if ((((uVar10 >> 0x11 & 1) != 0) && (puVar25 = local_190, *(char *)plVar2[1] == '\x01'))
             && (lVar16 = *(longlong *)((char *)plVar2[1] + 8), *(longlong *)(lVar16 + 0x10) != 0))
          {
            FUN_1400337aa();
            lVar21 = *plVar2;
            if ((*(byte *)(lVar21 + 0x4a6) & 2) == 0) {
              uVar15 = *(ulonglong *)(lVar21 + 0x17c);
              uVar22 = uVar15 >> 0x20;
            }
            else {
              uVar22 = (ulonglong)(uint)(int)((float)*(int *)(lVar21 + 0x180) * fVar27);
              uVar15 = (ulonglong)(uint)(int)((float)*(int *)(lVar21 + 0x17c) * fVar27);
            }
            FUN_140ea0802(*(undefined8 *)(lVar16 + 0x10),uVar15,uVar22);
            puVar25 = local_190;
          }
        }
      }
      else {
        if ((lVar16 != 0) && (uVar10 = *(uint *)(lVar16 + 0x4a4), (uVar10 >> 0x10 & 1) == 0))
        goto LAB_140e9fd79;
        pcVar3 = (char *)plVar2[1];
        cVar8 = *pcVar3;
        if (cVar8 == '\x01') {
          lVar16 = *(longlong *)(pcVar3 + 8);
          if (*(longlong *)(lVar16 + 0x10) != 0) {
            FUN_1400337aa();
            plVar6 = *(longlong **)(lVar16 + 0x10);
            (**(code **)(*plVar6 + 0x420))(plVar6,0);
          }
        }
        else if (cVar8 == '\x02') {
          FUN_1474459b8(*(undefined8 *)(pcVar3 + 8));
        }
        else {
          local_188 = CONCAT71((int7)(local_188 >> 8),(byte)local_188 | cVar8 == '\x03');
        }
        puVar4 = (undefined1 *)plVar2[1];
        *puVar4 = 1;
        puVar5 = *(undefined8 **)(puVar4 + 8);
        *(undefined8 *)(puVar4 + 8) = 0;
        puVar25 = local_190;
        if (puVar5 != (undefined8 *)0x0) {
          (**(code **)*puVar5)(puVar5,1);
          puVar25 = local_190;
        }
      }
      uVar19 = uVar19 & ~(uint)uVar24;
      puVar14 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar14 = puVar25;
      }
      iVar13 = *(int *)(param_1 + 0x3c8);
      iVar9 = (int)uVar23;
      lVar16 = (longlong)iVar9;
      uVar10 = puVar14[lVar16] & uVar19;
      if (uVar10 == 0) {
        iVar11 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar11 = iVar13 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar21 = 0;
          do {
            uVar10 = puVar14[lVar16 + lVar21 + 1];
            if (uVar10 != 0) {
              uVar23 = (ulonglong)(iVar9 + (int)lVar21 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140e9fe51;
            }
            iVar18 = iVar18 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar12 - lVar16 != lVar21);
          uVar19 = 0xffffffff;
          lVar16 = (longlong)iVar12;
        }
        uVar23 = lVar16 + 1U & 0xffffffff;
        puVar25 = local_190;
        iVar9 = iVar13;
      }
      else {
LAB_140e9fe51:
        uVar24 = (ulonglong)(-uVar10 & uVar10);
        uVar15 = uVar24 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar9) {
          iVar9 = iVar13;
        }
      }
    } while (iVar9 != iVar26);
    iVar26 = iVar13;
    if ((local_188 & 1) != 0) {
      local_98 = (code *)0x0;
      uStack_90 = 0;
      FUN_147447f64(param_1,&local_98);
      pcVar7 = local_98;
      lVar16 = (longlong)(int)uStack_90;
      if (lVar16 != 0) {
        lVar21 = 0;
        do {
          plVar2 = *(longlong **)(pcVar7 + lVar21);
          if ((plVar2 != (longlong *)0x0) && ((char)plVar2[0x199] == '\x01')) {
            FUN_1400337aa(plVar2);
            (**(code **)(*plVar2 + 0x420))(plVar2,0);
          }
          lVar21 = lVar21 + 8;
        } while (lVar16 * 8 != lVar21);
      }
      if (local_98 != (code *)0x0) {
        FUN_1400020a8();
      }
      iVar26 = *(int *)(param_1 + 0x3c8);
      puVar25 = local_190;
    }
  }
LAB_140e9fe8d:
  if (iVar26 == 0) {
    uVar24 = 1;
    uVar23 = 0;
    iVar9 = 0;
    iVar18 = 0;
  }
  else {
    puVar14 = *(uint **)(param_1 + 0x3c0);
    if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
      puVar14 = puVar25;
    }
    uVar19 = *puVar14;
    if (uVar19 == 0) {
      iVar9 = iVar26 + 0x1e;
      if (-1 < iVar26 + -1) {
        iVar9 = iVar26 + -1;
      }
      uVar23 = 0;
      uVar24 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar24 = uVar23;
      }
      iVar18 = 0;
      do {
        if (uVar24 == uVar23) goto LAB_140e9ffd1;
        iVar18 = iVar18 + 0x20;
        uVar19 = puVar14[uVar23 + 1];
        uVar23 = uVar23 + 1;
      } while (uVar19 == 0);
    }
    else {
      uVar23 = 0;
      iVar18 = 0;
    }
    uVar24 = (ulonglong)(-uVar19 & uVar19);
    uVar15 = uVar24 * 2 + 1;
    lVar16 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
      }
    }
    iVar9 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
    if (iVar26 <= iVar9) {
      iVar9 = iVar26;
    }
  }
  if (iVar9 != iVar26) {
    uVar19 = 0xffffffff;
    iVar13 = iVar26;
    do {
      plVar2 = *(longlong **)
                (*(longlong *)(*(longlong *)(param_1 + 0x3a0) + 8 + (longlong)iVar9 * 0x18) + 8);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x20))();
        iVar13 = *(int *)(param_1 + 0x3c8);
      }
      uVar19 = uVar19 & ~(uint)uVar24;
      puVar14 = *(uint **)(param_1 + 0x3c0);
      if (*(uint **)(param_1 + 0x3c0) == (uint *)0x0) {
        puVar14 = puVar25;
      }
      iVar9 = (int)uVar23;
      lVar16 = (longlong)iVar9;
      uVar10 = puVar14[lVar16] & uVar19;
      if (uVar10 == 0) {
        iVar11 = iVar13 + 0x1e;
        if (-1 < iVar13 + -1) {
          iVar11 = iVar13 + -1;
        }
        iVar11 = iVar11 >> 5;
        iVar18 = iVar18 + 0x20;
        iVar12 = iVar11;
        if (iVar11 < iVar9) {
          iVar12 = iVar9;
        }
        if (iVar9 < iVar11) {
          lVar21 = 0;
          do {
            uVar10 = puVar14[lVar16 + lVar21 + 1];
            if (uVar10 != 0) {
              uVar23 = (ulonglong)(iVar9 + (int)lVar21 + 1);
              uVar19 = 0xffffffff;
              goto LAB_140e9ffa4;
            }
            iVar18 = iVar18 + 0x20;
            lVar21 = lVar21 + 1;
          } while (iVar12 - lVar16 != lVar21);
          uVar19 = 0xffffffff;
          iVar9 = iVar12;
        }
        uVar23 = (ulonglong)(iVar9 + 1);
        puVar25 = local_190;
        iVar9 = iVar13;
      }
      else {
LAB_140e9ffa4:
        uVar24 = (ulonglong)(-uVar10 & uVar10);
        uVar15 = uVar24 * 2 + 1;
        lVar16 = 0x3f;
        if (uVar15 != 0) {
          for (; uVar15 >> lVar16 == 0; lVar16 = lVar16 + -1) {
          }
        }
        iVar9 = (iVar18 - ((uint)lVar16 ^ 0x3f)) + 0x3e;
        if (iVar13 <= iVar9) {
          iVar9 = iVar13;
        }
      }
    } while (iVar9 != iVar26);
  }
LAB_140e9ffd1:
  if ((local_60 ^ (ulonglong)auStack_208) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ea0802 FUN_140ea0802 body=93 status=ok
// SIG undefined FUN_140ea0802(void)

void FUN_140ea0802(longlong param_1,int param_2,int param_3)

{
  longlong *plVar1;
  
  if ((*(int *)(param_1 + 0x7cc) != param_2) || (*(int *)(param_1 + 2000) != param_3)) {
    *(int *)(param_1 + 0x7cc) = param_2;
    *(int *)(param_1 + 2000) = param_3;
    if ((*(longlong *)(param_1 + 0xb0) != 0) &&
       ((plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xb0) + 0x218), plVar1 != (longlong *)0x0
        && (*(longlong *)(param_1 + 0x5a8) != 0)))) {
                    /* WARNING: Could not recover jumptable at 0x000140ea085c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x88))(plVar1,param_1,(float)param_2,(float)param_3);
      return;
    }
  }
  return;
}



// FUNCTION 140ea08d0 FUN_140ea08d0 body=1265 status=ok
// SIG undefined FUN_140ea08d0(void)

undefined8 * FUN_140ea08d0(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  uint uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined1 auStack_f8 [32];
  undefined8 *local_d8;
  ulonglong local_c8;
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined2 *local_a0;
  int local_98;
  uint uStack_94;
  undefined4 local_90;
  undefined3 uStack_8c;
  longlong local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_140ea0dc2();
  *param_1 = &PTR_FUN_14a530730;
  param_1[5] = &PTR_FUN_14a530aa0;
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
  plVar3 = DAT_14c844840;
  param_1[0x31] = DAT_14c844840;
  if (plVar3 != (longlong *)0x0) {
    if (*(code **)(*plVar3 + 8) == FUN_144907e24) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*plVar3 + 8))();
    }
  }
  *(undefined4 *)(param_1 + 0x32) = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x37) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1bc) = 0;
  *(undefined8 *)((longlong)param_1 + 0x1c4) = 0;
  param_1[0x3d] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(undefined8 *)((longlong)param_1 + 0x1df) = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0x3f80000000000000;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0x41c00000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined2 *)((longlong)param_1 + 0x224) = 2;
  *(undefined1 *)((longlong)param_1 + 0x226) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0x3f800000;
  FUN_140ca8f8e(param_1 + 0x46);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0xfe;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[0x5c] = 0x3ff0000000000000;
  param_1[0x5d] = 0x3ff0000000000000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x37) = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  *(undefined2 *)((longlong)param_1 + 0x311) = 0;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cab88c8) && (FUN_144b3d300(&DAT_14cab88c8), DAT_14cab88c8 == -1)) {
    FUN_140056680(&local_a0,L"/Engine/EngineFonts/Roboto");
    local_d8 = &DAT_14c872ce8;
    FUN_1449da20c(DAT_14c872ce0,L"SlateStyle",L"DefaultFontName",&local_a0);
    puVar6 = local_a0;
    if (local_98 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    FUN_145b0497c(&DAT_14cab88b0,puVar6,0);
    if (local_a0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    atexit(FUN_1433349da);
    _Init_thread_footer(&DAT_14cab88c8);
  }
  local_b8 = 0;
  local_c0 = 0;
  uStack_bc = 0;
  local_b0 = 0;
  uStack_a8 = 0x3f80000000000000;
  local_a0 = (undefined2 *)&DAT_149eea5a7;
  local_98 = 4;
  uStack_94 = uStack_94 & 0xffffff00;
  uVar5 = FUN_14001a6c0(&local_a0,1);
  local_c8 = (ulonglong)uVar5;
  local_d8 = (undefined8 *)&local_c0;
  FUN_140324f46(&local_a0,DAT_14cab88c0,0x41c00000);
  puVar6 = local_a0;
  if (DAT_14c950c29 == 1) {
    if (local_a0 == (undefined2 *)0x0) {
      puVar6 = (undefined2 *)0x0;
    }
    else {
      FUN_1456cec3c();
      puVar6 = local_a0;
    }
  }
  bVar4 = DAT_14c950c29;
  param_1[0x3a] = puVar6;
  lVar7 = CONCAT44(uStack_94,local_98);
  if ((bVar4 & 1) != 0) {
    if (lVar7 == 0) {
      lVar7 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar7 = CONCAT44(uStack_94,local_98);
      bVar4 = DAT_14c950c29;
    }
  }
  param_1[0x3b] = lVar7;
  *(uint *)((longlong)param_1 + 0x1e3) = CONCAT31(uStack_8c,local_90._3_1_);
  *(undefined4 *)(param_1 + 0x3c) = local_90;
  if ((bVar4 & 1) != 0) {
    if (local_88 == 0) {
      local_88 = 0;
    }
    else {
      FUN_1456cec3c();
    }
  }
  param_1[0x3d] = local_88;
  *(undefined4 *)(param_1 + 0x3e) = local_80;
  *(undefined4 *)((longlong)param_1 + 500) = uStack_7c;
  *(undefined4 *)(param_1 + 0x3f) = uStack_78;
  *(undefined4 *)((longlong)param_1 + 0x1fc) = uStack_74;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
  }
  plVar3 = (longlong *)param_1[0x41];
  param_1[0x40] = local_70;
  param_1[0x41] = local_68;
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
  *(undefined4 *)((longlong)param_1 + 0x21c) = uStack_54;
  *(undefined4 *)(param_1 + 0x44) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x224) = uStack_4c;
  *(undefined4 *)(param_1 + 0x45) = uStack_48;
  *(undefined4 *)(param_1 + 0x42) = local_60;
  *(undefined4 *)((longlong)param_1 + 0x214) = uStack_5c;
  *(undefined4 *)(param_1 + 0x43) = uStack_58;
  *(undefined4 *)((longlong)param_1 + 0x21c) = uStack_54;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_68 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)local_68 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_68 + 0x10))(local_68);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 140ea0dc2 FUN_140ea0dc2 body=114 status=ok
// SIG undefined FUN_140ea0dc2(void)

undefined8 * FUN_140ea0dc2(undefined8 *param_1)

{
  FUN_140ea0e34();
  *param_1 = &PTR_FUN_14a531250;
  param_1[5] = &PTR_FUN_14a5315a0;
  *(undefined1 *)((longlong)param_1 + 0x169) = 0;
  *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) & 0xfc;
  *(undefined2 *)((longlong)param_1 + 0x16a) = 0;
  *(byte *)((longlong)param_1 + 0x16d) = *(byte *)((longlong)param_1 + 0x16d) & 0xfe;
  *(undefined1 *)((longlong)param_1 + 0x16c) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0x3f80000000000000;
  *(undefined1 *)((longlong)param_1 + 0x16e) = 1;
  return param_1;
}



// FUNCTION 140ea0e34 FUN_140ea0e34 body=569 status=ok
// SIG undefined FUN_140ea0e34(void)

undefined8 * FUN_140ea0e34(undefined8 *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  
  *param_1 = &PTR_FUN_149e8f7e0;
  if ((undefined8 *)*param_2 != param_1 && (undefined8 *)*param_2 != (undefined8 *)0x0) {
    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectGlobals.cpp",0xe8e,
                  L"UObject(const FObjectInitializer&) constructor called but it\'s not the object that\'s currently being constructed with NewObject. Maybe you are trying to construct it on the stack, which is not supported."
                 );
  }
  *param_2 = (longlong)param_1;
  *(undefined1 *)((longlong)param_2 + 0x12) = 0;
  *param_1 = &PTR_FUN_14a53a8e0;
  param_1[5] = &PTR_FUN_14a53abe0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
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
  param_1[0xb] = DAT_14c844840;
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
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  uVar2 = DAT_14c8463f8;
  param_1[0x12] = DAT_14c8463f0;
  param_1[0x13] = uVar2;
  uVar2 = DAT_14c846328;
  param_1[0x14] = DAT_14c846320;
  param_1[0x15] = uVar2;
  uVar2 = DAT_14c8463f8;
  param_1[0x16] = DAT_14c8463f0;
  param_1[0x17] = uVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined4 *)(param_1 + 0x26) = 2;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0x8000000000;
  *(undefined4 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x134) = 0;
  *(undefined8 *)((longlong)param_1 + 0x13c) = 0;
  *(undefined2 *)((longlong)param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  param_1[0x19] = 0x3fe0000000000000;
  param_1[0x1a] = 0x3fe0000000000000;
  *(undefined1 *)((longlong)param_1 + 0xda) = 1;
  param_1[0x1d] = 0;
  *(byte *)((longlong)param_1 + 0xd9) = *(byte *)((longlong)param_1 + 0xd9) & 0x1a | 0x45;
  return param_1;
}



// FUNCTION 140ea106e FUN_140ea106e body=785 status=ok
// SIG undefined FUN_140ea106e(void)

void FUN_140ea106e(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_18 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_18);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_18 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_18);
    }
  }
  local_20 = 0;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c951cc8) {
    FUN_144b3d300(&DAT_14c951cc8);
    if (DAT_14c951cc8 == -1) {
      local_38 = FUN_1446ddbd2();
      local_30 = FUN_1468d96f0;
      local_40 = 0;
      local_48 = 0x4008001;
      FUN_14000176a(&DAT_14c951c78,L"FObjectPropertyBase",0x4000000,0);
      atexit(FUN_14281144d);
      _Init_thread_footer(&DAT_14c951cc8);
    }
  }
  pbVar1 = *(byte **)(param_2 + 0x20);
  if (pbVar1 == (byte *)0x0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_20);
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(byte **)(param_2 + 0x20) = pbVar1 + 1;
    pcVar3 = (code *)(&DAT_14c962c70)[*pbVar1];
    if (pcVar3 == FUN_14002ddda) {
      FUN_14002ddda(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == FUN_14002dfbe) {
      FUN_14002dfbe(uVar2,param_2,&local_20);
    }
    else if (pcVar3 == (code *)&LAB_1428293cc) {
      local_20 = *(undefined8 *)(pbVar1 + 1);
      *(byte **)(param_2 + 0x20) = pbVar1 + 9;
    }
    else {
      (*pcVar3)(uVar2,param_2,&local_20);
    }
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  FUN_140ea1380(local_18,local_20);
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea1380 FUN_140ea1380 body=102 status=ok
// SIG undefined FUN_140ea1380(void)

void FUN_140ea1380(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  if (param_1 != (longlong *)0x0) {
    uVar1 = FUN_1407ca880();
    plVar2 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1407ca880();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140ea13db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x28))(plVar3,param_2,*(code **)(*plVar3 + 0x28));
        return;
      }
    }
  }
  return;
}



// FUNCTION 140ea13e6 FUN_140ea13e6 body=33 status=ok
// SIG undefined FUN_140ea13e6(void)

void FUN_140ea13e6(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(*param_1 + 0x50))();
  FUN_140ea1408(uVar1,param_2,1);
  return;
}



// FUNCTION 140ea1408 FUN_140ea1408 body=143 status=ok
// SIG undefined FUN_140ea1408(void)

void FUN_140ea1408(undefined8 param_1,longlong param_2)

{
  undefined ***pppuVar1;
  undefined1 auStack_88 [40];
  longlong local_60;
  undefined1 *local_58 [2];
  undefined ***local_48;
  undefined **local_38;
  longlong *local_30;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_60 = param_2;
  if (param_2 != 0) {
    local_48 = (undefined ***)0x0;
    local_38 = &PTR_LAB_14b432b90;
    local_30 = &local_60;
    local_58[0] = &LAB_143e53d26;
    FUN_140671824(param_1,local_58);
    if (local_58[0] != (undefined1 *)0x0) {
      pppuVar1 = local_48;
      if (local_48 == (undefined ***)0x0) {
        pppuVar1 = &local_38;
      }
      (*(code *)(*pppuVar1)[2])();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea1498 FUN_140ea1498 body=378 status=ok
// SIG undefined FUN_140ea1498(void)

void FUN_140ea1498(longlong *param_1)

{
  FUN_140ea163c(param_1 + 0x13f);
  FUN_14051f4c4(param_1 + 0x124);
  FUN_14051f4c4(param_1 + 0x10a);
  FUN_14051f4c4(param_1 + 0xd7);
  FUN_140ea1612(param_1[0xcb],(int)param_1[0xcc]);
  if (param_1[0xcb] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1612(param_1[0xbf],(int)param_1[0xc0]);
  if (param_1[0xbf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xaf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xad] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa7] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9f] != 0) {
    FUN_1400020a8();
  }
  FUN_14051f4c4(param_1 + 0x89);
  FUN_140ea1612(param_1[0xc],(int)param_1[0xd]);
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1612(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ea1612 FUN_140ea1612 body=41 status=ok
// SIG undefined FUN_140ea1612(void)

void FUN_140ea1612(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14051f4c4(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 140ea163c FUN_140ea163c body=159 status=ok
// SIG undefined FUN_140ea163c(void)

void FUN_140ea163c(longlong *param_1)

{
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ea16dc FUN_140ea16dc body=9 status=ok
// SIG undefined FUN_140ea16dc(void)

void FUN_140ea16dc(longlong param_1)

{
  FUN_140ea16e6(param_1 + 0x10);
  return;
}



// FUNCTION 140ea16e6 FUN_140ea16e6 body=203 status=ok
// SIG undefined FUN_140ea16e6(void)

void FUN_140ea16e6(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x388) = 0;
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1400020a8();
  }
  FUN_140ea17b2(param_1 + 0x340);
  *(undefined4 *)(param_1 + 0x338) = 0;
  if (*(longlong *)(param_1 + 0x330) != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x2f0);
  *(undefined4 *)(param_1 + 0x2e8) = 0;
  if (*(longlong *)(param_1 + 0x2e0) != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x2a0);
  *(undefined4 *)(param_1 + 0x298) = 0;
  if (*(longlong *)(param_1 + 0x290) != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x250);
  FUN_140ea1866(param_1);
  return;
}



// FUNCTION 140ea17b2 FUN_140ea17b2 body=55 status=ok
// SIG undefined FUN_140ea17b2(void)

void FUN_140ea17b2(longlong *param_1)

{
  FUN_140ea17ea(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ea17ea FUN_140ea17ea body=123 status=ok
// SIG undefined FUN_140ea17ea(void)

void FUN_140ea17ea(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1446f4a44(param_1,param_2);
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



// FUNCTION 140ea1866 FUN_140ea1866 body=488 status=ok
// SIG undefined FUN_140ea1866(void)

void FUN_140ea1866(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b47bb30;
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x44) = 0;
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x3b);
  *(undefined4 *)(param_1 + 0x3a) = 0;
  if (param_1[0x39] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x31);
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x27);
  *(undefined4 *)(param_1 + 0x26) = 0;
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1a4e(param_1 + 0x1d);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_140ea1b02(param_1 + 0x13);
  *(undefined4 *)(param_1 + 0x12) = 0;
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1401ad17c(param_1 + 9);
  plVar3 = (longlong *)param_1[7];
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
  *param_1 = &PTR_LAB_14b242fd0;
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
  plVar3 = (longlong *)param_1[5];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar2 = (int *)((longlong)plVar3 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140ea1a4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140ea1a4e FUN_140ea1a4e body=55 status=ok
// SIG undefined FUN_140ea1a4e(void)

void FUN_140ea1a4e(longlong *param_1)

{
  FUN_140ea1a86(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ea1a86 FUN_140ea1a86 body=123 status=ok
// SIG undefined FUN_140ea1a86(void)

void FUN_140ea1a86(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
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



// FUNCTION 140ea1b02 FUN_140ea1b02 body=55 status=ok
// SIG undefined FUN_140ea1b02(void)

void FUN_140ea1b02(longlong *param_1)

{
  FUN_140ea1b3a(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140ea1b3a FUN_140ea1b3a body=123 status=ok
// SIG undefined FUN_140ea1b3a(void)

void FUN_140ea1b3a(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_1405b3ec2(param_1,param_2);
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



// FUNCTION 140ea1bb6 FUN_140ea1bb6 body=375 status=ok
// SIG undefined FUN_140ea1bb6(void)

undefined8 * FUN_140ea1bb6(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_2 = 0;
  if ((((int)param_3[1] != 0) && ((longlong *)*param_3 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_3 + 0x30))(), cVar4 != '\0')) {
    if (*(int *)((longlong)param_1 + 0x14) < 1) {
      iVar1 = (int)param_1[1];
      iVar5 = (int)param_1[2] + -1;
      *(int *)(param_1 + 2) = iVar5;
      if (iVar5 <= iVar1) {
        iVar5 = iVar1;
        if (0 < iVar1) {
          iVar7 = 0;
          do {
            if (((*(int *)(*param_1 + 8 + (longlong)iVar7 * 0x10) == 0) ||
                (plVar2 = *(longlong **)(*param_1 + (longlong)iVar7 * 0x10),
                plVar2 == (longlong *)0x0)) ||
               (cVar4 = (**(code **)(*plVar2 + 0x28))(), cVar4 != '\0')) {
              FUN_14005b288(param_1,iVar7);
              FUN_14005b248(param_1);
            }
            else {
              iVar7 = iVar7 + 1;
            }
            iVar5 = (int)param_1[1];
          } while (iVar7 < iVar5);
        }
        iVar7 = 2;
        if (2 < iVar5 * 2) {
          iVar7 = iVar5 * 2;
        }
        *(int *)(param_1 + 2) = iVar7;
        if ((iVar7 < iVar1) && (*(int *)((longlong)param_1 + 0xc) != iVar5)) {
          FUN_14045812c();
        }
      }
    }
    uVar6 = 0;
    if (((int)param_3[1] != 0) && (plVar2 = (longlong *)*param_3, plVar2 != (longlong *)0x0)) {
      (**(code **)(*plVar2 + 0x38))(plVar2,&local_38);
      uVar6 = local_38;
    }
    *param_2 = uVar6;
    iVar1 = (int)param_1[1];
    *(uint *)(param_1 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
      FUN_1447a71f6(param_1,iVar1);
    }
    lVar3 = *param_1;
    lVar8 = (longlong)iVar1 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong *)(lVar3 + lVar8) = *param_3;
    *param_3 = 0;
    *(int *)(lVar3 + 8 + lVar8) = (int)param_3[1];
    *(undefined4 *)(param_3 + 1) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140ea1d39 FUN_140ea1d39 body=64 status=ok
// SIG undefined FUN_140ea1d39(void)

void FUN_140ea1d39(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_2 != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1 + lVar2 * 8);
      if (lVar1 != 0) {
        FUN_140ea1d7a(lVar1);
        FUN_1400020a8(lVar1);
      }
      lVar2 = lVar2 + 1;
    } while (param_2 != (int)lVar2);
  }
  return;
}



// FUNCTION 140ea1d7a FUN_140ea1d7a body=74 status=ok
// SIG undefined FUN_140ea1d7a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea1d7a(longlong param_1)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x30) != -1) {
    bVar1 = (byte)*(int *)(param_1 + 0x30) & 0x3f;
    LOCK();
    _DAT_14c9503b0 = _DAT_14c9503b0 & (-2L << bVar1 | 0xfffffffffffffffeU >> 0x40 - bVar1);
    UNLOCK();
    *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  }
  if (*(longlong *)(param_1 + 0x50) != 0) {
    FUN_1400020a8();
  }
  FUN_1400020a8(*(undefined8 *)(param_1 + 0x20));
  return;
}



// FUNCTION 140ea1dc4 FUN_140ea1dc4 body=212 status=ok
// SIG undefined FUN_140ea1dc4(void)

void FUN_140ea1dc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong param_6)

{
  undefined1 auStack_138 [32];
  undefined8 *local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [96];
  undefined1 local_98 [88];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_6 + 0x374) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_138);
  }
  local_110 = 0x3ff0000000000000;
  local_108 = 0;
  uStack_100 = 0;
  FUN_1449437a2(param_4,local_f8,param_2);
  local_118 = &local_110;
  FUN_146d2b146(local_98,param_1,param_3,local_f8);
  FUN_146d0d32b(param_6,local_98);
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea4c3d FUN_140ea4c3d body=2222 status=ok
// SIG undefined FUN_140ea4c3d(void)

longlong FUN_140ea4c3d(longlong param_1,longlong param_2,double *param_3,int param_4,int param_5,
                      double *param_6,longlong param_7,longlong param_8,uint *param_9)

{
  double dVar1;
  double dVar3;
  double dVar4;
  double dVar5;
  char cVar6;
  longlong *plVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  uint uVar16;
  ulonglong uVar17;
  int iVar18;
  double *pdVar19;
  longlong lVar20;
  longlong lVar21;
  longlong lVar22;
  ulonglong uVar23;
  bool bVar24;
  ulonglong uVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar2;
  
  plVar7 = *(longlong **)(*(longlong *)(param_2 + 0x88) + 0x58);
  if (plVar7 == (longlong *)0x0) {
LAB_140ea5443:
    *param_9 = 0;
    uVar17 = 0;
  }
  else {
    cVar6 = *(char *)(*(longlong *)(param_2 + 0x88) + 0x60);
    if (cVar6 == '\x01') {
      uVar14 = (ulonglong)*(byte *)(*plVar7 + 1 + (longlong)param_5 * 2);
    }
    else if (cVar6 == '\x02') {
      uVar14 = (ulonglong)(uint)(int)*(short *)(*plVar7 + 2 + (longlong)param_5 * 4);
    }
    else {
      if (cVar6 != '\x03') goto LAB_140ea5443;
      uVar14 = (ulonglong)*(uint *)(*plVar7 + 4 + (longlong)param_5 * 8);
    }
    uVar17 = 0x20;
    if ((int)uVar14 < 0x20) {
      uVar17 = uVar14;
    }
    *param_9 = (uint)uVar17;
    if (0 < (int)uVar14) {
      lVar13 = (longlong)param_5;
      pdVar19 = (double *)(param_7 + 0x10);
      lVar15 = 0;
      do {
        lVar21 = *(longlong *)(param_2 + 0x88);
        plVar7 = *(longlong **)(lVar21 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar7 != (longlong *)0x0) {
          cVar6 = *(char *)(lVar21 + 0x60);
          if (cVar6 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar7[2] + 1 +
                                    ((ulonglong)*(byte *)(*plVar7 + lVar13 * 2) + lVar15) * 3);
          }
          else if (cVar6 == '\x02') {
            uVar16 = (uint)*(short *)(plVar7[2] + 2 +
                                     (longlong)((int)*(short *)(*plVar7 + lVar13 * 4) + (int)lVar15)
                                     * 6);
          }
          else if (cVar6 == '\x03') {
            uVar16 = *(uint *)(plVar7[2] + 4 + (*(int *)(*plVar7 + lVar13 * 8) + lVar15) * 0xc);
          }
        }
        lVar21 = *(longlong *)(lVar21 + 0x30);
        lVar22 = (longlong)(int)uVar16;
        dVar26 = (double)*(float *)(lVar21 + 8 + lVar22 * 0xc) * *(double *)(param_2 + 0x30);
        dVar8 = (double)*(float *)(lVar21 + 4 + lVar22 * 0xc) * *(double *)(param_2 + 0x28);
        dVar29 = (double)*(float *)(lVar21 + lVar22 * 0xc) * *(double *)(param_2 + 0x20);
        dVar27 = *param_3;
        dVar30 = param_3[1];
        dVar35 = param_3[2];
        dVar1 = param_3[3];
        dVar2 = param_3[3];
        dVar33 = dVar29 * dVar35 - dVar27 * dVar26;
        dVar31 = dVar8 * dVar27 - dVar30 * dVar29;
        dVar28 = dVar26 * dVar30 - dVar35 * dVar8;
        dVar28 = dVar28 + dVar28;
        dVar33 = dVar33 + dVar33;
        dVar31 = dVar31 + dVar31;
        dVar32 = param_3[5];
        dVar34 = param_3[6];
        pdVar19[-2] = (dVar31 * dVar30 - dVar33 * dVar35) + dVar1 * dVar28 + dVar29 + param_3[4];
        pdVar19[-1] = (dVar35 * dVar28 - dVar27 * dVar31) + dVar2 * dVar33 + dVar8 + dVar32;
        *pdVar19 = dVar31 * dVar1 + dVar26 + (dVar33 * dVar27 - dVar28 * dVar30) + dVar34;
        lVar15 = lVar15 + 1;
        uVar17 = (ulonglong)(int)*param_9;
        pdVar19 = pdVar19 + 3;
      } while (lVar15 < (longlong)uVar17);
    }
  }
  lVar13 = *(longlong *)(param_1 + 0x88);
  plVar7 = *(longlong **)(lVar13 + 0x58);
  if (plVar7 != (longlong *)0x0) {
    cVar6 = *(char *)(lVar13 + 0x60);
    if (cVar6 == '\x01') {
      uVar14 = (ulonglong)*(byte *)(*plVar7 + 1 + (longlong)param_4 * 2);
      uVar16 = (uint)*(byte *)(plVar7[2] + -2 +
                              (*(byte *)(*plVar7 + (longlong)param_4 * 2) + uVar14) * 3);
    }
    else if (cVar6 == '\x02') {
      uVar14 = (ulonglong)*(short *)(*plVar7 + 2 + (longlong)param_4 * 4);
      uVar16 = (uint)*(short *)(plVar7[2] + -4 +
                               ((longlong)*(short *)(*plVar7 + (longlong)param_4 * 4) + uVar14) * 6)
      ;
    }
    else {
      if (cVar6 != '\x03') {
        return param_7;
      }
      uVar14 = (ulonglong)*(int *)(*plVar7 + 4 + (longlong)param_4 * 8);
      uVar16 = *(uint *)(plVar7[2] + -8 +
                        ((longlong)*(int *)(*plVar7 + (longlong)param_4 * 8) + uVar14) * 0xc);
    }
    if ((1 < (uint)uVar17) && (0 < (int)uVar14)) {
      uVar25 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x20));
      uVar23 = ~uVar25 & ((&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)] ^ 0x8000000000000000)
               | uVar25 & (&DAT_149931160)[0.0 <= *(double *)(param_1 + 0x28)];
      uVar25 = -(ulonglong)(0.0 <= *(double *)(param_1 + 0x30));
      dVar32 = (double)(~uVar25 & (uVar23 ^ 0x8000000000000000) | uVar23 & uVar25);
      lVar22 = (longlong)(int)uVar16;
      lVar13 = *(longlong *)(lVar13 + 0x30);
      lVar20 = (longlong)param_4;
      iVar18 = 0;
      lVar15 = param_7;
      lVar21 = param_8;
      dVar34 = *(double *)(param_1 + 0x28) * (double)*(float *)(lVar13 + 4 + lVar22 * 0xc);
      dVar2 = (double)*(float *)(lVar13 + lVar22 * 0xc) * *(double *)(param_1 + 0x20);
      dVar1 = (double)*(float *)(lVar13 + 8 + lVar22 * 0xc) * *(double *)(param_1 + 0x30);
      do {
        param_7 = lVar21;
        lVar21 = lVar15;
        lVar13 = *(longlong *)(param_1 + 0x88);
        plVar7 = *(longlong **)(lVar13 + 0x58);
        uVar16 = 0xffffffff;
        if (plVar7 != (longlong *)0x0) {
          cVar6 = *(char *)(lVar13 + 0x60);
          if (cVar6 == '\x01') {
            uVar16 = (uint)*(byte *)(plVar7[2] + 1 +
                                    (ulonglong)((uint)*(byte *)(*plVar7 + lVar20 * 2) + iVar18) * 3)
            ;
          }
          else if (cVar6 == '\x02') {
            uVar16 = (uint)*(short *)(plVar7[2] + 2 +
                                     ((longlong)iVar18 + (longlong)*(short *)(*plVar7 + lVar20 * 4))
                                     * 6);
          }
          else if (cVar6 == '\x03') {
            uVar16 = *(uint *)(plVar7[2] + 4 +
                              ((longlong)iVar18 + (longlong)*(int *)(*plVar7 + lVar20 * 8)) * 0xc);
          }
        }
        lVar13 = *(longlong *)(lVar13 + 0x30);
        lVar15 = (longlong)(int)uVar16;
        dVar30 = (double)*(float *)(lVar13 + 8 + lVar15 * 0xc) * *(double *)(param_1 + 0x30);
        dVar8 = (double)*(float *)(lVar13 + 4 + lVar15 * 0xc) * *(double *)(param_1 + 0x28);
        dVar31 = (double)*(float *)(lVar13 + lVar15 * 0xc) * *(double *)(param_1 + 0x20);
        dVar33 = (param_6[1] * (dVar1 - dVar30) - (dVar34 - dVar8) * param_6[2]) * dVar32;
        dVar1 = ((dVar2 - dVar31) * param_6[2] - (dVar1 - dVar30) * *param_6) * dVar32;
        dVar27 = (*param_6 * (dVar34 - dVar8) - (dVar2 - dVar31) * param_6[1]) * dVar32;
        dVar35 = dVar27 * dVar27 + dVar33 * dVar33 + dVar1 * dVar1;
        dVar2 = SQRT(dVar35);
        dVar34 = 0.0;
        dVar28 = 0.0;
        if (9.999999747378752e-05 <= dVar35) {
          dVar28 = dVar27 / dVar2;
          dVar34 = dVar1 / dVar2;
        }
        dVar26 = (double)(-(ulonglong)(dVar35 < 9.999999747378752e-05) & 0x3ff0000000000000 |
                         ~-(ulonglong)(dVar35 < 9.999999747378752e-05) & (ulonglong)(dVar33 / dVar2)
                         );
        dVar27 = dVar30 * dVar28 + dVar31 * dVar26 + dVar8 * dVar34;
        dVar35 = dVar27 * 9.99999993922529e-09 + dVar27;
        uVar25 = (ulonglong)((int)uVar17 - 1);
        dVar2 = *(double *)(lVar21 + 0x10 + uVar25 * 0x18);
        dVar1 = *(double *)(lVar21 + uVar25 * 0x18);
        dVar33 = *(double *)(lVar21 + 8 + uVar25 * 0x18);
        uVar25 = uVar17 & 0xffffffff;
        uVar17 = 0;
        lVar13 = 0;
        dVar29 = dVar2 * dVar28 + dVar26 * dVar1 + dVar33 * dVar34;
LAB_140ea5148:
        uVar16 = (uint)uVar17;
        dVar3 = *(double *)(lVar21 + lVar13);
        dVar4 = *(double *)(lVar21 + 8 + lVar13);
        dVar5 = *(double *)(lVar21 + 0x10 + lVar13);
        dVar9 = dVar5 * dVar28 + dVar3 * dVar26 + dVar34 * dVar4;
        if (dVar35 < dVar9) {
          if (dVar29 < dVar35) {
            dVar10 = dVar2;
            dVar11 = dVar1;
            dVar12 = dVar33;
            if (9.99999993922529e-09 <= ABS(dVar9 - dVar29)) {
              dVar29 = (dVar27 - dVar29) / (dVar9 - dVar29);
              dVar10 = dVar2 + (dVar5 - dVar2) * dVar29;
              dVar11 = dVar1 + (dVar3 - dVar1) * dVar29;
              dVar12 = dVar33 + (dVar4 - dVar33) * dVar29;
            }
            goto LAB_140ea51a0;
          }
          goto LAB_140ea51bd;
        }
        dVar10 = dVar5;
        dVar11 = dVar3;
        dVar12 = dVar4;
        if (dVar29 <= dVar35) {
LAB_140ea51a0:
          uVar23 = (ulonglong)uVar16;
          uVar17 = (ulonglong)(uVar16 + 1);
          *(double *)(param_7 + uVar23 * 0x18) = dVar11;
          *(double *)(param_7 + 8 + uVar23 * 0x18) = dVar12;
          *(double *)(param_7 + 0x10 + uVar23 * 0x18) = dVar10;
LAB_140ea51bd:
          if ((0x1f < (uint)uVar17) ||
             (bVar24 = uVar25 * 0x18 + -0x18 == lVar13, lVar13 = lVar13 + 0x18, dVar29 = dVar9,
             dVar1 = dVar3, dVar33 = dVar4, dVar2 = dVar5, bVar24)) goto LAB_140ea5310;
          goto LAB_140ea5148;
        }
        if (9.99999993922529e-09 <= ABS(dVar9 - dVar29)) {
          dVar29 = (dVar27 - dVar29) / (dVar9 - dVar29);
          dVar2 = dVar2 + (dVar5 - dVar2) * dVar29;
          dVar33 = dVar33 + (dVar4 - dVar33) * dVar29;
          dVar1 = dVar1 + (dVar3 - dVar1) * dVar29;
        }
        *(double *)(param_7 + uVar17 * 0x18) = dVar1;
        *(double *)(param_7 + 8 + uVar17 * 0x18) = dVar33;
        *(double *)(param_7 + 0x10 + uVar17 * 0x18) = dVar2;
        if (uVar16 < 0x1f) {
          uVar16 = uVar16 + 1;
          goto LAB_140ea51a0;
        }
        uVar17 = 0x20;
LAB_140ea5310:
        *param_9 = (uint)uVar17;
        iVar18 = iVar18 + 1;
      } while ((iVar18 < (int)uVar14) &&
              (lVar15 = param_7, dVar34 = dVar8, dVar2 = dVar31, dVar1 = dVar30, 1 < (uint)uVar17));
    }
  }
  return param_7;
}



// FUNCTION 140ea54ec FUN_140ea54ec body=283 status=ok
// SIG undefined FUN_140ea54ec(void)

ulonglong FUN_140ea54ec(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 unaff_RBX;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar3 = *param_2;
  if (*(int *)(param_1 + 0x558) != *(int *)(param_1 + 0x584)) {
    uVar5 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar8 = (uint)lVar3 & 0xffff;
    lVar6 = param_1 + 0x588;
    if (*(longlong *)(param_1 + 0x590) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x590);
    }
    iVar9 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x598) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar8) +
                             (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar8 >> 4)) * 4);
    if (iVar9 != -1) {
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar9 * 0x28) == lVar3)
        goto LAB_140ea55c0;
        iVar9 = *(int *)(*(longlong *)(param_1 + 0x550) + (longlong)iVar9 * 0x28 + 0x20);
      } while (iVar9 != -1);
    }
  }
  local_28 = param_2[1];
  local_20 = param_2[2];
  if (local_20 != 0) {
    LOCK();
    *(int *)(local_20 + 8) = *(int *)(local_20 + 8) + 1;
    UNLOCK();
  }
  local_30 = lVar3;
  uVar5 = FUN_140ea5608(param_1,&local_30);
  uVar7 = (ulonglong)uVar5;
LAB_140ea55c0:
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea5608 FUN_140ea5608 body=246 status=ok
// SIG undefined FUN_140ea5608(void)

ulonglong FUN_140ea5608(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  byte bVar7;
  char cVar8;
  ulonglong unaff_RBX;
  longlong lVar9;
  
  iVar3 = *(int *)(param_1 + 0x1c8);
  if ((longlong)iVar3 == 0) {
    unaff_RBX = 0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1c0);
    lVar9 = 0;
    do {
      lVar6 = *(longlong *)(lVar5 + 0x10 + lVar9);
      if ((lVar6 == *param_2) || (lVar6 == DAT_14c966e68)) {
        bVar7 = *(byte *)(lVar5 + 8 + lVar9);
        if ((bVar7 & 4) != 0) {
          cVar8 = FUN_14011bae6(param_1);
          if (cVar8 == '\0') goto LAB_140ea5671;
          bVar7 = *(byte *)(lVar5 + 8 + lVar9);
        }
        if ((bVar7 & 2) != 0) {
          cVar8 = FUN_1417f7d46(param_1);
          if (cVar8 == '\0') goto LAB_140ea5671;
          bVar7 = *(byte *)(lVar5 + 8 + lVar9);
        }
        if ((bVar7 & 1) != 0) {
          cVar8 = FUN_14011b712(param_1);
          if (cVar8 == '\0') goto LAB_140ea5671;
          bVar7 = *(byte *)(lVar5 + 8 + lVar9);
        }
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
        if (((bVar7 & 8) == 0) || (cVar8 = FUN_1417f7de2(param_1), cVar8 != '\0')) break;
      }
LAB_140ea5671:
      lVar9 = lVar9 + 0x28;
      unaff_RBX = 0;
    } while ((longlong)iVar3 * 0x28 != lVar9);
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
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 140ea5706 FUN_140ea5706 body=1191 status=ok
// SIG undefined FUN_140ea5706(void)

undefined8 FUN_140ea5706(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_138 [40];
  longlong local_110 [2];
  longlong local_100;
  longlong *local_f0;
  longlong *local_e8;
  int local_e0;
  char local_d8;
  char local_d7;
  longlong local_98;
  longlong *local_90;
  longlong *local_88;
  undefined8 local_60;
  longlong *local_58;
  longlong *plStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(byte *)(param_2 + 0x28) & 1) == 0) {
    FUN_147e48c04(local_110,param_2,2);
    if ((*param_1 != 0) && (param_1[3] != 0)) {
      FUN_147e49374(local_110,param_1);
      FUN_147e49482(local_110,param_1 + 3);
    }
    FUN_147e48de0(local_110);
LAB_140ea5a02:
    uVar8 = 1;
  }
  else {
    FUN_140d4b01e(param_1);
    plVar1 = param_1 + 3;
    FUN_1409380d0(plVar1);
    FUN_140b5fdae(local_110,param_2,2);
    plVar6 = local_f0;
    if (local_d7 == '\x01') {
      lVar7 = (longlong)local_e0;
      iVar3 = *(int *)(local_100 + 4 + lVar7 * 0xc);
      lVar9 = (longlong)iVar3;
      if (lVar9 < 1) {
LAB_140ea5a32:
        bVar12 = true;
      }
      else {
        iVar4 = *(int *)(local_100 + lVar7 * 0xc);
        lVar11 = (longlong)iVar4;
        if (lVar11 != -1) {
          if (local_d8 == '\x01') {
            if (local_f0[10] == 0) {
              FUN_144b44800(&local_98);
              lVar7 = FUN_140c3cde2(&local_98,*plVar6 + lVar11,lVar9);
              FUN_144b44810(&local_98);
            }
            else {
              lVar7 = FUN_140c3cde2(local_f0[10],*local_f0 + lVar11,lVar9);
            }
            if (lVar7 == 0) {
              FUN_144bfd270(&local_98);
              lVar7 = FUN_147e67b5a(&local_98,lVar11 + *plVar6,lVar9);
              FUN_144bfd310(&local_98);
            }
            else {
              iVar5 = (int)plVar6[9];
              lVar9 = (longlong)iVar5;
              *(uint *)(plVar6 + 9) = iVar5 + 1U;
              if (*(uint *)((longlong)plVar6 + 0x4c) < iVar5 + 1U) {
                FUN_147e6779a(plVar6 + 2,iVar5);
              }
              plVar10 = plVar6 + 2;
              if ((longlong *)plVar6[8] != (longlong *)0x0) {
                plVar10 = (longlong *)plVar6[8];
              }
              *(int *)((longlong)plVar10 + lVar9 * 0xc) = iVar4;
              *(int *)((longlong)plVar10 + lVar9 * 0xc + 4) = iVar3;
              *(undefined4 *)((longlong)plVar10 + lVar9 * 0xc + 8) = 0;
            }
            local_90 = local_f0;
            local_88 = local_e8;
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
              UNLOCK();
            }
            local_98 = lVar7;
            FUN_1418088d6(param_1,&local_98);
            FUN_140d4afde(&local_98);
          }
          else {
            FUN_144bfd270(&local_98);
            local_60 = FUN_147e67b5a(&local_98,
                                     *(int *)(local_100 + (longlong)local_e0 * 0xc) + local_110[0],
                                     (longlong)*(int *)(local_100 + 4 + (longlong)local_e0 * 0xc));
            local_58 = (longlong *)0x0;
            plStack_50 = (longlong *)0x0;
            FUN_1418088d6(param_1,&local_60);
            FUN_140d4afde(&local_60);
            FUN_144bfd310(&local_98);
          }
          lVar7 = (longlong)local_e0 + 1;
          local_e0 = (int)lVar7;
          if (*param_1 == 0) goto LAB_140ea5984;
          if (*(int *)(local_100 + 4 + lVar7 * 0xc) < 1) goto LAB_140ea5a32;
        }
        bVar12 = true;
        if (*(int *)(local_100 + lVar7 * 0xc) != -1) {
          if (local_d8 == '\x01') {
            lVar7 = *local_f0;
            FUN_144bfd270(&local_98);
            local_60 = FUN_140d29e84(&local_98,
                                     *(int *)(local_100 + (longlong)local_e0 * 0xc) + lVar7,
                                     (longlong)*(int *)(local_100 + 4 + (longlong)local_e0 * 0xc));
            local_58 = local_f0;
            plStack_50 = local_e8;
            if (local_e8 != (longlong *)0x0) {
              LOCK();
              *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
              UNLOCK();
            }
            FUN_141808950(plVar1,&local_60);
            FUN_140938090(&local_60);
          }
          else {
            FUN_144bfd270(&local_98);
            local_60 = FUN_140d29e84(&local_98,
                                     *(int *)(local_100 + (longlong)local_e0 * 0xc) + local_110[0],
                                     (longlong)*(int *)(local_100 + 4 + (longlong)local_e0 * 0xc));
            local_58 = (longlong *)0x0;
            plStack_50 = (longlong *)0x0;
            FUN_141808950(plVar1,&local_60);
            FUN_140938090(&local_60);
          }
          FUN_144bfd310(&local_98);
          local_e0 = local_e0 + 1;
          bVar12 = *plVar1 != 0;
        }
      }
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)local_e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e8 + 0x10))(local_e8);
          }
        }
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      if (local_110[0] != 0) {
        FUN_1400020a8();
      }
      if (bVar12) goto LAB_140ea5a02;
    }
    else {
LAB_140ea5984:
      if (local_e8 != (longlong *)0x0) {
        LOCK();
        plVar1 = local_e8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*local_e8)(local_e8);
          LOCK();
          piVar2 = (int *)((longlong)local_e8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_e8 + 0x10))(local_e8);
          }
        }
      }
      if (local_100 != 0) {
        FUN_1400020a8();
      }
      if (local_110[0] != 0) {
        FUN_1400020a8();
      }
    }
    uVar8 = 0;
  }
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 140ea5bbc FUN_140ea5bbc body=196 status=ok
// SIG undefined FUN_140ea5bbc(void)

undefined8 * FUN_140ea5bbc(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b90e990;
  plVar3 = (longlong *)param_1[0x12];
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



// FUNCTION 140ea5c8e FUN_140ea5c8e body=31 status=ok
// SIG undefined FUN_140ea5c8e(void)

undefined8 FUN_140ea5c8e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ea5cb8 FUN_140ea5cb8 body=152 status=ok
// SIG undefined FUN_140ea5cb8(void)

undefined8 * FUN_140ea5cb8(undefined8 *param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1446f470e(&local_30,L"NavMesh",1);
  uVar1 = FUN_140ea5d52();
  FUN_140486538(param_2,local_30);
  FUN_14048646a(param_2 + 0x20,local_30,uVar1,0);
  FUN_140c87596(param_1,param_2);
  *param_1 = &PTR_FUN_14b7bbb20;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea5d52 FUN_140ea5d52 body=228 status=ok
// SIG undefined FUN_140ea5d52(void)

longlong FUN_140ea5d52(void)

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
  undefined1 *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cbad0b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_14641e652;
    local_38 = &LAB_148c31bd9;
    local_40 = FUN_1418cb4a5;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0x6f0;
    FUN_14081cfa3(L"/Script/OakGame",L"OakNavMeshComponent",&DAT_14cbad0b8,&DAT_148c31bd8);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cbad0b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea5e38 FUN_140ea5e38 body=63 status=ok
// SIG undefined FUN_140ea5e38(void)

longlong FUN_140ea5e38(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140ea5e86(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x18 + *param_1;
  FUN_140ea5e77(lVar2);
  return lVar2;
}



// FUNCTION 140ea5e77 FUN_140ea5e77 body=15 status=ok
// SIG undefined FUN_140ea5e77(void)

void FUN_140ea5e77(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}



// FUNCTION 140ea5e86 FUN_140ea5e86 body=370 status=ok
// SIG undefined FUN_140ea5e86(void)

void FUN_140ea5e86(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x18;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140ea5f0f;
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
LAB_140ea5f0f:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140ea5ff8 FUN_140ea5ff8 body=21 status=ok
// SIG undefined FUN_140ea5ff8(void)

undefined8 FUN_140ea5ff8(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 140ea601d FUN_140ea601d body=2196 status=ok
// SIG undefined FUN_140ea601d(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_140ea601d(longlong param_1,double *param_2,double *param_3,double *param_4,double *param_5,
                  double *param_6)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double *pdVar4;
  double *pdVar5;
  char cVar6;
  int iVar7;
  uint uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined1 auVar16 [16];
  double dVar17;
  double dVar18;
  double dVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  undefined1 auVar30 [16];
  double dVar31;
  double dVar32;
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  undefined1 auStack_218 [32];
  double *local_1f8;
  double *local_1f0;
  undefined1 *local_1e0;
  undefined1 *local_1d8;
  double local_1d0;
  double dStack_1c8;
  double local_1c0;
  undefined8 local_1b8 [12];
  undefined1 local_158 [16];
  double *local_148;
  double *pdStack_140;
  double *local_138;
  undefined8 *puStack_130;
  double local_128;
  double dStack_120;
  undefined1 local_118 [16];
  undefined1 local_108 [24];
  ulonglong local_f0;
  
  pdVar5 = param_6;
  pdVar4 = param_5;
  auVar30 = _DAT_149934d80;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_218;
  bVar1 = *(byte *)(param_1 + 0x1c);
  if (bVar1 == 4) {
    FUN_1447dc19e(param_1 + 0x30,local_158,param_2);
    local_1f0 = pdVar5;
    local_1f8 = pdVar4;
    cVar6 = FUN_140ea601d(*(undefined8 *)(param_1 + 0x20),local_158,param_3,param_4);
    goto LAB_140ea6483;
  }
  local_158 = ZEXT816(0);
  local_148 = (double *)0x0;
  pdStack_140 = (double *)&DAT_3ff0000000000000;
  local_138 = (double *)0x0;
  puStack_130 = (undefined8 *)0x0;
  local_128 = 0.0;
  dStack_120 = 0.0;
  local_118 = _DAT_149934d80;
  local_108._0_16_ = ZEXT816(0x3ff0000000000000);
  dVar17 = param_2[2] * param_2[2] + *param_2 * *param_2;
  dVar21 = param_2[3] * param_2[3] + param_2[1] * param_2[1];
  auVar16._8_8_ = -(ulonglong)(0.009999999776482582 < ABS(DAT_149934d80._8_8_ - (dVar17 + dVar21)));
  auVar16._0_8_ =
       -(ulonglong)(0.009999999776482582 < ABS((double)DAT_149934d80 - (dVar17 + dVar21)));
  iVar7 = movmskpd((int)(DAT_14c707940 ^ (ulonglong)auStack_218),auVar16);
  if (iVar7 == 0) {
    auVar16 = minpd(*(undefined1 (*) [16])(param_4 + 8),*(undefined1 (*) [16])(param_2 + 8));
    auVar19 = minpd(*(undefined1 (*) [16])(param_4 + 10),*(undefined1 (*) [16])(param_2 + 10));
    auVar33._8_8_ = -(ulonglong)(auVar16._8_8_ < 0.0);
    auVar33._0_8_ = -(ulonglong)(auVar16._0_8_ < 0.0);
    iVar7 = movmskpd(0,auVar33);
    auVar20._8_8_ = -(ulonglong)(auVar19._8_8_ < 0.0);
    auVar20._0_8_ = -(ulonglong)(auVar19._0_8_ < 0.0);
    uVar8 = movmskpd((int)param_1,auVar20);
    if ((uVar8 & 0x3fffffff) == 0 && iVar7 == 0) {
      if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x110) < DAT_14c8460b0) && (FUN_144b3d300(&DAT_14c8460b0), DAT_14c8460b0 == -1))
      {
        DAT_14c8460a0 = 0x322bcc77322bcc77;
        DAT_14c8460a8 = 0x322bcc77322bcc77;
        _Init_thread_footer(&DAT_14c8460b0);
      }
      auVar16 = *(undefined1 (*) [16])(param_2 + 8);
      auVar33 = divpd(auVar30,auVar16);
      auVar30 = divpd(ZEXT816(0x3ff0000000000000),*(undefined1 (*) [16])(param_2 + 10));
      dVar18 = (double)(-(ulonglong)((double)(float)DAT_14c8460a0 < ABS(auVar16._0_8_)) &
                       auVar33._0_8_);
      dVar22 = (double)(-(ulonglong)
                         ((double)(float)((ulonglong)DAT_14c8460a0 >> 0x20) < ABS(auVar16._8_8_)) &
                       auVar33._8_8_);
      dVar12 = (double)(-(ulonglong)
                         ((double)(float)DAT_14c8460a8 <
                         ABS(SUB168(*(undefined1 (*) [16])(param_2 + 10),0))) & auVar30._0_8_);
      dVar27 = param_4[4] - param_2[4];
      dVar28 = param_4[5] - param_2[5];
      dVar32 = param_4[6] - param_2[6];
      dVar29 = -*param_2;
      dVar31 = -param_2[1];
      dVar23 = param_2[2] * -1.0;
      dVar25 = param_2[3] * 1.0;
      dVar13 = dVar28 * dVar29 - dVar27 * dVar31;
      dVar15 = dVar32 * dVar31 - dVar28 * dVar23;
      dVar34 = dVar27 * dVar23 - dVar32 * dVar29;
      dVar35 = dVar25 * 0.0 - dVar25 * 0.0;
      dVar15 = dVar15 + dVar15;
      dVar34 = dVar34 + dVar34;
      dVar13 = dVar13 + dVar13;
      dVar35 = dVar35 + dVar35;
      dVar2 = *param_4;
      dVar3 = param_4[1];
      dVar14 = param_4[2];
      dVar26 = param_4[3];
      dVar21 = param_2[1];
      dVar17 = param_2[1];
      dVar24 = dVar2 * dVar23 * 1.0 +
               ((dVar3 * dVar25 - *param_2 * dVar14 * -1.0) - dVar26 * dVar17);
      local_118._8_8_ = param_4[9] * dVar22;
      local_118._0_8_ = param_4[8] * dVar18;
      local_108._8_8_ = param_4[0xb] * 0.0;
      local_108._0_8_ = param_4[10] * dVar12;
      local_138 = (double *)
                  (((dVar13 * dVar31 - dVar23 * dVar34) + dVar25 * dVar15 + dVar27) * dVar18);
      puStack_130 = (undefined8 *)
                    (((dVar15 * dVar23 - dVar13 * dVar29) + dVar25 * dVar34 + dVar28) * dVar22);
      local_128 = ((dVar34 * dVar29 - dVar31 * dVar15) + dVar25 * dVar13 + dVar32) * dVar12;
      dStack_120 = ((dVar35 * dVar25 - dVar35 * dVar25) + dVar25 * dVar35 + 0.0) * 0.0;
      local_158._8_4_ = SUB84(dVar24,0);
      local_158._0_8_ =
           dVar3 * dVar23 * -1.0 + ((dVar2 * dVar25 - *param_2 * dVar26 * 1.0) - dVar14 * dVar21);
      local_158._12_4_ = (int)((ulonglong)dVar24 >> 0x20);
      local_148 = (double *)
                  (dVar26 * dVar23 * 1.0 +
                  dVar21 * dVar2 + (dVar25 * dVar14 - *param_2 * dVar3 * 1.0));
      pdStack_140 = (double *)
                    (dVar14 * dVar23 * -1.0 +
                    dVar17 * dVar3 + (dVar25 * dVar26 - *param_2 * dVar2 * -1.0));
    }
    else {
      FUN_1402db8fa(local_158,param_4,param_2);
    }
    puVar10 = (undefined8 *)local_158;
  }
  else {
    puVar10 = &DAT_14c846480;
  }
  puVar11 = local_1b8;
  for (lVar9 = 0xc; lVar9 != 0; lVar9 = lVar9 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  if (*(char *)(param_1 + 0x18) == '\x01') {
    local_1c0 = param_2[6] - param_4[6];
    local_1d0 = param_2[4] - param_4[4];
    dStack_1c8 = param_2[5] - param_4[5];
    if (pdVar5 == (double *)0x0) {
      local_158._8_8_ = &param_5;
      local_158._0_8_ = param_3;
      local_148 = &local_1d0;
      cVar6 = FUN_140ea68b2(param_1,local_1b8);
    }
    else {
      local_158._8_8_ = &param_6;
      local_158._0_8_ = param_3;
      local_148 = (double *)&param_5;
      pdStack_140 = &local_1d0;
      local_138 = param_2;
      cVar6 = FUN_146ccc572(param_1,local_1b8);
    }
    goto LAB_140ea6483;
  }
  if (bVar1 == 0xc) {
    local_1f8 = pdVar5;
    cVar6 = FUN_140ea75aa(param_1,param_3,local_1b8,pdVar4);
  }
  else if (bVar1 < 0xb) {
    if (bVar1 == 5) {
LAB_140ea6829:
      local_1d0 = (double)((ulonglong)local_1d0 & 0xffffffffffffff00);
      local_1d8 = local_158;
      local_158._8_8_ = param_2;
      local_158._0_8_ = &local_1d0;
      local_138 = pdVar4;
      puStack_130 = &param_6;
      local_1e0 = &LAB_146ccee18;
      local_148 = param_3;
      pdStack_140 = param_4;
      FUN_146db006e(param_1);
      cVar6 = local_1d0._0_1_;
      goto LAB_140ea6483;
    }
    if (bVar1 == 6) {
      local_1f8 = pdVar5;
      cVar6 = FUN_146dd7ec8(param_1,param_3,local_1b8,pdVar4);
    }
    else {
LAB_140ea6772:
      if (-1 < (char)bVar1) {
        if (bVar1 < 0x40) {
          cVar6 = '\0';
          goto LAB_140ea6483;
        }
        param_1 = *(longlong *)(param_1 + 0x28);
        goto LAB_140ea6793;
      }
      local_1f8 = pdVar5;
      cVar6 = FUN_146ccc7ae(param_1,param_3,local_1b8,pdVar4);
    }
  }
  else {
    if (bVar1 != 0xb) {
      if (bVar1 != 0xf) goto LAB_140ea6772;
      goto LAB_140ea6829;
    }
LAB_140ea6793:
    local_1f8 = pdVar5;
    cVar6 = FUN_1457be8b8(param_1,param_3,local_1b8,pdVar4);
  }
  if (cVar6 == '\x01' && param_6 != (double *)0x0) {
    dVar13 = *param_6;
    dVar35 = param_6[1];
    dVar2 = *param_2;
    dVar3 = param_2[1];
    dVar14 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar24 = dVar35 * dVar2 - dVar13 * dVar3;
    dVar26 = param_6[2] * dVar3 - dVar35 * dVar14;
    dVar12 = dVar13 * dVar14 - dVar2 * param_6[2];
    dVar26 = dVar26 + dVar26;
    dVar12 = dVar12 + dVar12;
    dVar24 = dVar24 + dVar24;
    *param_6 = (dVar24 * dVar3 - dVar12 * dVar14) + dVar21 * dVar26 + dVar13;
    param_6[1] = (dVar14 * dVar26 - dVar2 * dVar24) + dVar17 * dVar12 + dVar35;
    param_6[2] = dVar24 * dVar21 + param_6[2] + (dVar12 * dVar2 - dVar26 * dVar3);
    dVar26 = param_6[3] * param_2[8];
    dVar12 = param_6[4] * param_2[9];
    dVar14 = param_6[5] * param_2[10];
    dVar35 = *param_2;
    dVar2 = param_2[1];
    dVar3 = param_2[2];
    dVar21 = param_2[3];
    dVar17 = param_2[3];
    dVar15 = dVar12 * dVar35 - dVar26 * dVar2;
    dVar34 = dVar14 * dVar2 - dVar12 * dVar3;
    dVar18 = dVar26 * dVar3 - dVar35 * dVar14;
    dVar34 = dVar34 + dVar34;
    dVar18 = dVar18 + dVar18;
    dVar15 = dVar15 + dVar15;
    dVar13 = param_2[5];
    dVar24 = param_2[6];
    param_6[3] = (dVar15 * dVar2 - dVar18 * dVar3) + dVar21 * dVar34 + dVar26 + param_2[4];
    param_6[4] = (dVar3 * dVar34 - dVar35 * dVar15) + dVar17 * dVar18 + dVar12 + dVar13;
    param_6[5] = dVar15 * dVar21 + dVar14 + (dVar18 * dVar35 - dVar34 * dVar2) + dVar24;
    cVar6 = '\x01';
  }
LAB_140ea6483:
  if ((local_f0 ^ (ulonglong)auStack_218) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return cVar6;
}



// FUNCTION 140ea68b2 FUN_140ea68b2 body=888 status=ok
// SIG undefined FUN_140ea68b2(void)

void FUN_140ea68b2(longlong param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined1 uVar1;
  double *pdVar2;
  undefined1 auStack_b8 [32];
  double *local_98;
  double local_88;
  double dStack_80;
  double local_78;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar1 = *(undefined1 *)(param_1 + 0x1c);
  switch(uVar1) {
  case 1:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140ea6ce1(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 3:
    pdVar2 = (double *)param_3[2];
    if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
      local_88 = 1.0;
      dStack_80 = 0.0;
      local_78 = 0.0;
    }
    else {
      local_78 = pdVar2[2];
      local_88 = *pdVar2;
      dStack_80 = pdVar2[1];
    }
    local_98 = &local_88;
    FUN_140ea72ea(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
    break;
  case 4:
    FUN_1447dc19e(param_1 + 0x30,&local_88,param_2);
    FUN_140ea68b2(*(undefined8 *)(param_1 + 0x20),&local_88,param_3);
    break;
  case 8:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  default:
    switch(uVar1) {
    case 0x80:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x81:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x82:
    case 0x84:
    case 0x85:
    case 0x86:
    case 0x87:
      break;
    case 0x83:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
    case 0x88:
      pdVar2 = (double *)param_3[2];
      if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
        local_88 = 1.0;
        dStack_80 = 0.0;
        local_78 = 0.0;
      }
      else {
        local_78 = pdVar2[2];
        local_88 = *pdVar2;
        dStack_80 = pdVar2[1];
      }
      local_98 = &local_88;
      FUN_140ea6ed6(param_1,*param_3,param_2,*(undefined8 *)param_3[1]);
      goto LAB_140ea69eb;
    default:
      switch(uVar1) {
      case 0x40:
        break;
      case 0x41:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x43:
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
      case 0x48:
        pdVar2 = (double *)param_3[2];
        if (pdVar2[2] * pdVar2[2] + *pdVar2 * *pdVar2 + pdVar2[1] * pdVar2[1] < 0.0001) {
          local_88 = 1.0;
          dStack_80 = 0.0;
          local_78 = 0.0;
        }
        else {
          local_78 = pdVar2[2];
          local_88 = *pdVar2;
          dStack_80 = pdVar2[1];
        }
        local_98 = &local_88;
        FUN_140ea70ce(*(undefined8 *)(param_1 + 0x28),*param_3,param_2,*(undefined8 *)param_3[1]);
        goto LAB_140ea69eb;
      }
    }
  case 0:
  case 2:
  case 5:
  case 6:
  case 7:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_b8);
  }
LAB_140ea69eb:
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea6ce1 FUN_140ea6ce1 body=500 status=ok
// SIG undefined FUN_140ea6ce1(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea6ce1(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar9 = *(double *)(param_1 + 0x48) - *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x28);
  dVar7 = *(double *)(param_1 + 0x38) - *(double *)(param_1 + 0x20);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_14172546a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144857b9e;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ea6ed6 FUN_140ea6ed6 body=503 status=ok
// SIG undefined FUN_140ea6ed6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea6ed6(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_c8 [32];
  undefined1 *local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  longlong local_88;
  float local_80;
  undefined4 local_7c;
  code *local_78;
  longlong local_70;
  float local_68;
  undefined4 local_64;
  code *local_60;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar1 || dVar6 <= dVar7) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar9 = *(double *)(param_1 + 0x80) - *(double *)(param_1 + 0x68);
  dVar1 = *(double *)(param_1 + 0x78) - *(double *)(param_1 + 0x60);
  dVar7 = *(double *)(param_1 + 0x70) - *(double *)(param_1 + 0x58);
  if ((dVar7 <= dVar1 || dVar7 <= dVar9) && (dVar7 = dVar1, dVar1 <= dVar9)) {
    dVar7 = dVar9;
  }
  local_68 = (float)*(double *)(param_2 + 0x10);
  local_64 = 0;
  local_60 = FUN_14172546a;
  local_80 = (float)*(double *)(param_1 + 0x10);
  local_7c = 0;
  local_78 = FUN_144a12d46;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_48._0_4_ = (float)param_3[4];
  local_48._4_4_ = (float)param_3[5];
  local_48._8_4_ = (float)param_3[6];
  local_48._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_38 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_a8 = local_38;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_98 = local_58;
  local_58._4_4_ = (float)param_5[1];
  local_58._0_4_ = (float)*param_5;
  local_58._8_4_ = (float)param_5[2];
  local_58._12_4_ = 0;
  local_a0 = param_4;
  local_88 = param_1;
  local_70 = param_2;
  FUN_144946907(&local_88,&local_70,dVar7);
  if ((local_20 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ea70ce FUN_140ea70ce body=539 status=ok
// SIG undefined FUN_140ea70ce(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea70ce(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  longlong local_98;
  float local_90;
  undefined4 local_8c;
  code *local_88;
  longlong local_80;
  float local_78;
  undefined4 local_74;
  code *local_70;
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  dVar6 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar1 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar7 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar6 <= dVar7 || dVar6 <= dVar1) && (dVar6 = dVar7, dVar7 <= dVar1)) {
    dVar6 = dVar1;
  }
  dVar7 = (double)*(float *)(param_1 + 0x4c) - (double)*(float *)(param_1 + 0x40);
  dVar1 = (double)*(float *)(param_1 + 0x54) - (double)*(float *)(param_1 + 0x48);
  dVar9 = (double)*(float *)(param_1 + 0x50) - (double)*(float *)(param_1 + 0x44);
  if ((dVar7 <= dVar9 || dVar7 <= dVar1) && (dVar7 = dVar9, dVar9 <= dVar1)) {
    dVar7 = dVar1;
  }
  local_78 = (float)*(double *)(param_2 + 0x10);
  local_74 = 0;
  local_70 = FUN_14172546a;
  local_90 = (float)*(double *)(param_1 + 0x10);
  local_8c = 0;
  local_88 = FUN_14172546a;
  fVar2 = (float)param_3[2];
  fVar4 = (float)param_3[3];
  fVar8 = (float)*param_3;
  fVar10 = (float)param_3[1];
  local_58._0_4_ = (float)param_3[4];
  local_58._4_4_ = (float)param_3[5];
  local_58._8_4_ = (float)param_3[6];
  local_58._12_4_ = 0;
  fVar3 = fVar8 * fVar8 + fVar10 * fVar10;
  fVar5 = fVar2 * fVar2 + fVar4 * fVar4;
  auVar11._0_4_ = fVar5 + fVar3;
  auVar11._4_4_ = fVar5 + fVar3;
  auVar11._8_4_ = fVar3 + fVar5;
  auVar11._12_4_ = fVar3 + fVar5;
  auVar12 = sqrtps(auVar11,auVar11);
  auVar12 = divps(_DAT_1499314a0,auVar12);
  auVar13._0_4_ = auVar12._0_4_ * fVar8;
  auVar13._4_4_ = auVar12._4_4_ * fVar10;
  auVar13._8_4_ = auVar12._8_4_ * fVar2;
  auVar13._12_4_ = auVar12._12_4_ * fVar4;
  auVar12._4_4_ = -(uint)(1e-08 <= auVar11._4_4_);
  auVar12._0_4_ = -(uint)(1e-08 <= auVar11._0_4_);
  auVar12._8_4_ = -(uint)(1e-08 <= auVar11._8_4_);
  auVar12._12_4_ = -(uint)(1e-08 <= auVar11._12_4_);
  local_48 = blendvps(_DAT_149932320,auVar13,auVar12);
  local_b8 = local_48;
  if (dVar7 <= dVar6) {
    dVar7 = dVar6;
  }
  local_a8 = local_68;
  local_68._4_4_ = (float)param_5[1];
  local_68._0_4_ = (float)*param_5;
  local_68._8_4_ = (float)param_5[2];
  local_68._12_4_ = 0;
  local_b0 = param_4;
  local_98 = param_1;
  local_80 = param_2;
  FUN_144946907(&local_98,&local_80,dVar7);
  if ((local_30 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ea72ea FUN_140ea72ea body=703 status=ok
// SIG undefined FUN_140ea72ea(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea72ea(longlong param_1,longlong param_2,double *param_3,undefined8 param_4,
                  double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar19;
  undefined1 auVar20 [16];
  undefined1 auStack_118 [32];
  undefined1 *local_f8;
  undefined8 local_f0;
  undefined1 *local_e8;
  longlong local_d8;
  float local_d0;
  float local_cc;
  undefined1 *local_c8;
  longlong local_c0;
  float local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_118;
  dVar11 = (double)*(float *)(param_2 + 0x4c) - (double)*(float *)(param_2 + 0x40);
  dVar2 = (double)*(float *)(param_2 + 0x54) - (double)*(float *)(param_2 + 0x48);
  dVar12 = (double)*(float *)(param_2 + 0x50) - (double)*(float *)(param_2 + 0x44);
  if ((dVar11 <= dVar2 || dVar11 <= dVar12) && (dVar11 = dVar12, dVar12 <= dVar2)) {
    dVar11 = dVar2;
  }
  dVar2 = *(double *)(param_1 + 0x10);
  dVar12 = *(double *)(param_1 + 0x20);
  dVar14 = *(double *)(param_1 + 0x28);
  dVar16 = *(double *)(param_1 + 0x30);
  dVar1 = *(double *)(param_1 + 0x50);
  dVar3 = *(double *)(param_1 + 0x48) * dVar1 + dVar16;
  dVar4 = *(double *)(param_1 + 0x40) * dVar1 + dVar14;
  dVar19 = dVar1 * *(double *)(param_1 + 0x38) + dVar12;
  dVar1 = dVar16;
  if (dVar3 <= dVar16) {
    dVar1 = dVar3;
  }
  dVar5 = dVar14;
  if (dVar4 <= dVar14) {
    dVar5 = dVar4;
  }
  dVar6 = dVar12;
  if (dVar19 <= dVar12) {
    dVar6 = dVar19;
  }
  if (dVar16 <= dVar3) {
    dVar16 = dVar3;
  }
  if (dVar14 <= dVar4) {
    dVar14 = dVar4;
  }
  if (dVar12 <= dVar19) {
    dVar12 = dVar19;
  }
  dVar12 = (dVar12 + dVar2) - (dVar6 - dVar2);
  dVar16 = (dVar16 + dVar2) - (dVar1 - dVar2);
  dVar14 = (dVar14 + dVar2) - (dVar5 - dVar2);
  if ((dVar12 <= dVar14 || dVar12 <= dVar16) && (dVar12 = dVar14, dVar14 <= dVar16)) {
    dVar12 = dVar16;
  }
  local_b8 = (float)*(double *)(param_2 + 0x10);
  local_b4 = 0;
  local_b0 = FUN_14172546a;
  local_d0 = (float)dVar2;
  local_c8 = &LAB_144a386e2;
  fVar7 = (float)param_3[2];
  fVar9 = (float)param_3[3];
  fVar13 = (float)*param_3;
  fVar15 = (float)param_3[1];
  local_98._0_4_ = (float)param_3[4];
  local_98._4_4_ = (float)param_3[5];
  local_98._8_4_ = (float)param_3[6];
  local_98._12_4_ = 0;
  fVar8 = fVar13 * fVar13 + fVar15 * fVar15;
  fVar10 = fVar7 * fVar7 + fVar9 * fVar9;
  auVar17._0_4_ = fVar10 + fVar8;
  auVar17._4_4_ = fVar10 + fVar8;
  auVar17._8_4_ = fVar8 + fVar10;
  auVar17._12_4_ = fVar8 + fVar10;
  auVar18 = sqrtps(auVar17,auVar17);
  auVar18 = divps(_DAT_1499314a0,auVar18);
  auVar20._0_4_ = auVar18._0_4_ * fVar13;
  auVar20._4_4_ = auVar18._4_4_ * fVar15;
  auVar20._8_4_ = auVar18._8_4_ * fVar7;
  auVar20._12_4_ = auVar18._12_4_ * fVar9;
  auVar18._4_4_ = -(uint)(1e-08 <= auVar17._4_4_);
  auVar18._0_4_ = -(uint)(1e-08 <= auVar17._0_4_);
  auVar18._8_4_ = -(uint)(1e-08 <= auVar17._8_4_);
  auVar18._12_4_ = -(uint)(1e-08 <= auVar17._12_4_);
  local_88 = blendvps(_DAT_149932320,auVar20,auVar18);
  local_f8 = local_88;
  if (dVar12 <= dVar11) {
    dVar12 = dVar11;
  }
  local_e8 = local_a8;
  local_a8._4_4_ = (float)param_5[1];
  local_a8._0_4_ = (float)*param_5;
  local_a8._8_4_ = (float)param_5[2];
  local_a8._12_4_ = 0;
  local_f0 = param_4;
  local_d8 = param_1;
  local_cc = local_d0;
  local_c0 = param_2;
  FUN_144946907(&local_d8,&local_c0,dVar12);
  if ((local_70 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ea75aa FUN_140ea75aa body=2512 status=ok
// SIG undefined FUN_140ea75aa(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140ea75aa(longlong param_1,longlong param_2,double *param_3,double param_4,
                       undefined8 *param_5)

{
  int *piVar1;
  double dVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  double dVar5;
  char cVar6;
  byte bVar7;
  byte bVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  int *piVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  double dVar17;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  float fVar26;
  double dVar27;
  float fVar31;
  float fVar33;
  undefined1 auVar28 [16];
  float fVar32;
  float fVar34;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  double dVar35;
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
  float fVar46;
  double dVar47;
  undefined1 auVar48 [16];
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  double dVar54;
  undefined1 auVar55 [16];
  float fVar56;
  undefined1 auStack_288 [32];
  undefined8 *local_268;
  undefined1 local_258 [8];
  float fStack_250;
  float fStack_24c;
  undefined1 local_248 [8];
  float fStack_240;
  float fStack_23c;
  double local_238;
  double dStack_230;
  double local_228;
  double dStack_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  int *local_1f8;
  undefined8 uStack_1f0;
  double local_1e8 [3];
  double local_1d0 [4];
  double *local_1b0;
  double *local_1a8;
  double local_1a0;
  undefined1 local_198 [16];
  double local_188 [3];
  double adStack_170 [3];
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  double local_118;
  double local_110;
  double local_108;
  double local_100;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_288;
  local_1a8 = &local_1a0;
  local_1e8[0] = (double)*(float *)(param_2 + 0x40) - param_4;
  local_1e8[1] = (double)*(float *)(param_2 + 0x44) - param_4;
  local_1e8[2] = (double)*(float *)(param_2 + 0x48) - param_4;
  local_1d0[0] = (double)*(float *)(param_2 + 0x4c) + param_4;
  local_1d0[1] = (double)*(float *)(param_2 + 0x50) + param_4;
  local_1d0[2] = (double)*(float *)(param_2 + 0x54) + param_4;
  local_1d0[3] = (double)param_2;
  local_1b0 = param_3;
  local_1a0 = param_4;
  FUN_1400c6592(local_1e8,&local_158);
  local_1e8[2] = local_148;
  local_1e8[0] = local_158;
  local_1e8[1] = uStack_150;
  local_1d0[2] = uStack_130;
  local_1d0[0] = uStack_140;
  local_1d0[1] = uStack_138;
  local_1f8 = (int *)0x0;
  uStack_1f0 = 0;
  local_248._4_4_ = (float)uStack_150;
  local_248._0_4_ = (float)local_158;
  fStack_240 = (float)local_148;
  fStack_23c = 0.0;
  local_218._4_4_ = (float)uStack_150;
  local_218._0_4_ = (float)local_158;
  local_218._8_4_ = (float)local_148;
  local_218._12_4_ = 0;
  local_258._4_4_ = (float)uStack_138;
  local_258._0_4_ = (float)uStack_140;
  fStack_250 = (float)uStack_130;
  fStack_24c = 0.0;
  local_208._4_4_ = (float)uStack_138;
  local_208._0_4_ = (float)uStack_140;
  local_208._8_4_ = (float)uStack_130;
  local_208._12_4_ = 0;
  local_238 = local_158;
  dStack_230 = uStack_150;
  local_228 = uStack_140;
  dStack_220 = uStack_138;
  cVar6 = FUN_144947e24(param_1);
  if (cVar6 != '\0') {
    if (param_5 != (undefined8 *)0x0) {
      *param_5 = 0;
      param_5[1] = 0;
      uVar14 = 0;
      param_5[2] = 0;
      param_5[6] = 0xffefffffffffffff;
      param_5[3] = 0;
      param_5[4] = 0;
      param_5[5] = 0;
      if ((longlong)(int)uStack_1f0 != 0) {
        piVar1 = local_1f8 + (longlong)(int)uStack_1f0 * 2;
        uVar14 = 0;
        piVar13 = local_1f8;
        do {
          uVar3 = *(ushort *)(param_1 + 0x92);
          uVar12 = (uint)uVar3;
          iVar9 = piVar13[1] * uVar12 + *piVar13;
          local_100 = *(double *)(param_1 + 0x80);
          lVar11 = *(longlong *)(param_1 + 0x20);
          lVar10 = (longlong)iVar9;
          dVar54 = *(double *)(param_1 + 0xa0);
          dVar17 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar54 + local_100;
          dVar27 = (double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar54 + local_100;
          dVar47 = (double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar54 +
                   local_100;
          local_100 = (double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar54 +
                      local_100;
          dVar54 = dVar47;
          if (local_100 <= dVar47) {
            dVar54 = local_100;
          }
          dVar2 = dVar27;
          if (dVar54 <= dVar27) {
            dVar2 = dVar54;
          }
          adStack_170[2] = dVar17;
          if (dVar2 <= dVar17) {
            adStack_170[2] = dVar2;
          }
          dVar54 = dVar47;
          if (dVar47 <= local_100) {
            dVar54 = local_100;
          }
          dVar2 = dVar27;
          if (dVar27 <= dVar54) {
            dVar2 = dVar54;
          }
          dVar54 = dVar17;
          if (dVar17 <= dVar2) {
            dVar54 = dVar2;
          }
          local_158 = *(double *)(param_1 + 0x50) * (double)(iVar9 % (int)uVar12);
          uStack_150 = (double)(iVar9 / (int)uVar12) * *(double *)(param_1 + 0x58);
          dVar2 = *(double *)(param_1 + 0x60);
          local_148 = dVar17 * dVar2;
          uStack_140 = ((double)(iVar9 % (int)uVar12) + 1.0) * *(double *)(param_1 + 0x50);
          uStack_138 = uStack_150;
          uStack_130 = dVar27 * dVar2;
          local_128 = local_158;
          local_108 = ((double)(iVar9 / (int)uVar12) + 1.0) * *(double *)(param_1 + 0x58);
          uStack_120 = local_108;
          local_118 = dVar47 * dVar2;
          local_110 = uStack_140;
          local_100 = local_100 * dVar2;
          dVar54 = dVar54 * dVar2;
          adStack_170[2] = adStack_170[2] * dVar2;
          local_188[2] = adStack_170[2];
          if (dVar54 <= adStack_170[2]) {
            local_188[2] = dVar54;
          }
          local_188[1] = uStack_150;
          if (local_108 <= uStack_150) {
            local_188[1] = local_108;
          }
          local_188[0] = local_158;
          if (uStack_140 <= local_158) {
            local_188[0] = uStack_140;
          }
          if (adStack_170[2] <= dVar54) {
            adStack_170[2] = dVar54;
          }
          adStack_170[1] = uStack_150;
          if (uStack_150 <= local_108) {
            adStack_170[1] = local_108;
          }
          adStack_170[0] = local_158;
          if (local_158 <= uStack_140) {
            adStack_170[0] = uStack_140;
          }
          lVar11 = -3;
          do {
            if ((local_1d0[lVar11 + 3] <= adStack_170[lVar11] &&
                 adStack_170[lVar11] != local_1d0[lVar11 + 3]) ||
               ((double)(&local_158)[lVar11] <= local_1d0[lVar11] &&
                local_1d0[lVar11] != (double)(&local_158)[lVar11])) goto LAB_140ea7f0f;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0);
          if (((int)*(uint *)(param_1 + 0x48) < 1) ||
             ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
              (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))) {
            local_268 = param_5;
            bVar7 = FUN_146da1076(local_1d0 + 3,&local_158,&uStack_140,&local_110);
            local_268 = param_5;
            bVar8 = FUN_146da1076(local_1d0 + 3,&local_158,&local_110,&local_128);
            uVar14 = (ulonglong)(byte)((byte)uVar14 | bVar8 | bVar7);
          }
LAB_140ea7f0f:
          piVar13 = piVar13 + 2;
        } while (piVar13 != piVar1);
      }
      goto LAB_140ea7bd7;
    }
    fVar15 = (float)param_3[2];
    fVar20 = (float)param_3[3];
    fVar26 = (float)*param_3;
    fVar31 = (float)param_3[1];
    fVar16 = fVar26 * fVar26 + fVar31 * fVar31;
    fVar21 = fVar15 * fVar15 + fVar20 * fVar20;
    auVar36._0_4_ = fVar21 + fVar16;
    auVar36._4_4_ = fVar21 + fVar16;
    auVar36._8_4_ = fVar16 + fVar21;
    auVar36._12_4_ = fVar16 + fVar21;
    auVar55._4_4_ = -(uint)(1e-08 <= auVar36._4_4_);
    auVar55._0_4_ = -(uint)(1e-08 <= auVar36._0_4_);
    auVar55._8_4_ = -(uint)(1e-08 <= auVar36._8_4_);
    auVar55._12_4_ = -(uint)(1e-08 <= auVar36._12_4_);
    auVar36 = sqrtps(auVar36,auVar36);
    auVar36 = divps(_DAT_1499314a0,auVar36);
    auVar41._0_4_ = auVar36._0_4_ * fVar26 * -1.0;
    auVar41._4_4_ = auVar36._4_4_ * fVar31 * -1.0;
    auVar41._8_4_ = auVar36._8_4_ * fVar15 * -1.0;
    auVar41._12_4_ = auVar36._12_4_ * fVar20 * 1.0;
    auVar55 = blendvps(_DAT_149f51f60,auVar41,auVar55);
    if ((longlong)(int)uStack_1f0 != 0) {
      dVar54 = param_3[6];
      dVar17 = param_3[4];
      dVar27 = param_3[5];
      piVar1 = local_1f8 + (longlong)(int)uStack_1f0 * 2;
      fVar15 = auVar55._0_4_;
      fVar16 = auVar55._4_4_;
      fVar20 = auVar55._8_4_;
      fVar21 = auVar55._12_4_;
      piVar13 = local_1f8;
      do {
        uVar3 = *(ushort *)(param_1 + 0x92);
        uVar12 = (uint)uVar3;
        iVar9 = piVar13[1] * uVar12 + *piVar13;
        dVar47 = *(double *)(param_1 + 0x80);
        lVar11 = *(longlong *)(param_1 + 0x20);
        lVar10 = (longlong)iVar9;
        dVar2 = *(double *)(param_1 + 0xa0);
        dVar35 = (double)*(ushort *)(lVar11 + lVar10 * 2) * dVar2 + dVar47;
        auVar37._0_4_ = (float)dVar35;
        auVar37._4_8_ = (ulonglong)dVar35 >> 0x20;
        auVar37._12_4_ = 0;
        fVar31 = (float)((double)*(ushort *)(lVar11 + 2 + lVar10 * 2) * dVar2 + dVar47);
        fVar56 = (float)((double)*(ushort *)(lVar11 + ((ulonglong)uVar3 + lVar10) * 2) * dVar2 +
                        dVar47);
        fVar46 = (float)(iVar9 / (int)uVar12);
        fVar26 = (float)(iVar9 % (int)uVar12);
        fVar49 = (float)((double)*(ushort *)(lVar11 + 2 + ((ulonglong)uVar3 + lVar10) * 2) * dVar2 +
                        dVar47);
        auVar55 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)fVar46),0x1c);
        auVar44 = insertps(auVar55,auVar37,0x20);
        auVar36 = insertps(ZEXT416((uint)(fVar26 + 1.0)),ZEXT416((uint)fVar46),0x1c);
        auVar45 = insertps(auVar36,ZEXT416((uint)fVar31),0x20);
        auVar36 = insertps(ZEXT416((uint)fVar26),ZEXT416((uint)(fVar46 + 1.0)),0x1c);
        auVar41 = insertps(auVar36,ZEXT416((uint)fVar56),0x20);
        auVar36 = insertps(ZEXT416((uint)(fVar26 + 1.0)),ZEXT416((uint)(fVar46 + 1.0)),0x1c);
        auVar48 = insertps(auVar36,ZEXT416((uint)fVar49),0x20);
        fVar26 = fVar56;
        if (fVar49 <= fVar56) {
          fVar26 = fVar49;
        }
        fVar46 = fVar31;
        if (fVar26 <= fVar31) {
          fVar46 = fVar26;
        }
        fVar26 = auVar37._0_4_;
        if (fVar46 <= auVar37._0_4_) {
          fVar26 = fVar46;
        }
        if (fVar56 <= fVar49) {
          fVar56 = fVar49;
        }
        if (fVar31 <= fVar56) {
          fVar31 = fVar56;
        }
        if (auVar37._0_4_ <= fVar31) {
          auVar37._0_4_ = fVar31;
          auVar37._12_4_ = 0;
        }
        auVar36 = insertps(auVar36,auVar37,0x20);
        auVar4._4_4_ = (int)((ulonglong)dVar35 >> 0x20);
        auVar4._0_4_ = fVar26;
        auVar4._8_8_ = 0;
        auVar55 = insertps(auVar55,auVar4,0x20);
        fVar26 = *(float *)(param_1 + 0x70);
        fVar31 = *(float *)(param_1 + 0x74);
        fVar56 = *(float *)(param_1 + 0x78);
        fVar46 = *(float *)(param_1 + 0x7c);
        local_158 = (double)CONCAT44(auVar44._4_4_ * fVar31,auVar44._0_4_ * fVar26);
        uStack_150 = (double)CONCAT44(auVar44._12_4_ * fVar46,auVar44._8_4_ * fVar56);
        local_148 = (double)CONCAT44(auVar45._4_4_ * fVar31,auVar45._0_4_ * fVar26);
        uStack_140 = (double)CONCAT44(auVar45._12_4_ * fVar46,auVar45._8_4_ * fVar56);
        uStack_138 = (double)CONCAT44(auVar41._4_4_ * fVar31,auVar41._0_4_ * fVar26);
        uStack_130 = (double)CONCAT44(auVar41._12_4_ * fVar46,auVar41._8_4_ * fVar56);
        local_128 = (double)CONCAT44(auVar48._4_4_ * fVar31,auVar48._0_4_ * fVar26);
        uStack_120 = (double)CONCAT44(auVar48._12_4_ * fVar46,auVar48._8_4_ * fVar56);
        auVar44._0_8_ = CONCAT44(auVar55._4_4_ * fVar31,auVar55._0_4_ * fVar26);
        auVar44._8_4_ = auVar55._8_4_ * fVar56;
        auVar44._12_4_ = auVar55._12_4_ * fVar46;
        auVar48._0_4_ = auVar36._0_4_ * fVar26;
        auVar48._4_4_ = auVar36._4_4_ * fVar31;
        auVar48._8_4_ = auVar36._8_4_ * fVar56;
        auVar48._12_4_ = auVar36._12_4_ * fVar46;
        auVar38._8_4_ = auVar44._8_4_;
        auVar38._0_8_ = auVar44._0_8_;
        auVar38._12_4_ = auVar44._12_4_;
        auVar36 = minps(auVar38,auVar48);
        auVar55 = maxps(auVar44,auVar48);
        auVar45._4_4_ = -(uint)(auVar55._4_4_ < (float)local_248._4_4_);
        auVar45._0_4_ = -(uint)(auVar55._0_4_ < (float)local_248._0_4_);
        auVar45._8_4_ = -(uint)(auVar55._8_4_ < fStack_240);
        auVar45._12_4_ = -(uint)(auVar55._12_4_ < fStack_23c);
        auVar28._4_4_ = -(uint)((float)local_258._4_4_ < auVar36._4_4_);
        auVar28._0_4_ = -(uint)((float)local_258._0_4_ < auVar36._0_4_);
        auVar28._8_4_ = -(uint)(fStack_250 < auVar36._8_4_);
        auVar28._12_4_ = -(uint)(fStack_24c < auVar36._12_4_);
        iVar9 = movmskps(iVar9 / (int)uVar12,auVar28 | auVar45);
        if ((iVar9 == 0) &&
           (((int)*(uint *)(param_1 + 0x48) < 1 ||
            ((uVar12 = (uVar3 - 1) * piVar13[1] + *piVar13, uVar12 < *(uint *)(param_1 + 0x48) &&
             (*(char *)(*(longlong *)(param_1 + 0x40) + (ulonglong)uVar12) != -1)))))) {
          lVar11 = 0;
          do {
            fVar26 = *(float *)((longlong)&local_158 + lVar11) - (float)dVar17;
            fVar31 = *(float *)((longlong)&local_158 + lVar11 + 4) - (float)dVar27;
            fVar56 = *(float *)((longlong)&uStack_150 + lVar11) - (float)dVar54;
            fVar46 = *(float *)((longlong)&uStack_150 + lVar11 + 4) - 0.0;
            fVar49 = fVar31 * fVar15 - fVar16 * fVar26;
            fVar32 = fVar56 * fVar16 - fVar20 * fVar31;
            fVar33 = fVar26 * fVar20 - fVar15 * fVar56;
            fVar34 = fVar46 * fVar21 - fVar21 * fVar46;
            fVar49 = fVar49 + fVar49;
            fVar32 = fVar32 + fVar32;
            fVar33 = fVar33 + fVar33;
            fVar34 = fVar34 + fVar34;
            *(float *)((longlong)&local_158 + lVar11) =
                 (fVar49 * fVar16 - fVar33 * fVar20) + fVar21 * fVar32 + fVar26;
            dVar47 = local_158;
            *(float *)((longlong)&local_158 + lVar11 + 4) =
                 (fVar32 * fVar20 - fVar49 * fVar15) + fVar21 * fVar33 + fVar31;
            *(float *)((longlong)&uStack_150 + lVar11) =
                 (fVar33 * fVar15 - fVar32 * fVar16) + fVar21 * fVar49 + fVar56;
            dVar2 = uStack_150;
            *(float *)((longlong)&uStack_150 + lVar11 + 4) =
                 (fVar34 * fVar21 - fVar34 * fVar21) + fVar21 * fVar34 + fVar46;
            dVar5 = uStack_120;
            dVar35 = local_128;
            lVar11 = lVar11 + 0x10;
          } while (lVar11 != 0x40);
          fVar26 = (float)local_158;
          fVar31 = local_158._4_4_;
          fVar56 = (float)uStack_150;
          fVar46 = uStack_150._4_4_;
          local_188[0] = local_158;
          local_188[1] = uStack_150;
          local_188[2] = local_148;
          adStack_170[0] = uStack_140;
          fVar50 = (float)local_128 - (float)local_158;
          fVar51 = local_128._4_4_ - local_158._4_4_;
          fVar52 = (float)uStack_120 - (float)uStack_150;
          fVar53 = uStack_120._4_4_ - uStack_150._4_4_;
          fVar49 = ((float)local_148 - (float)local_158) * fVar51 -
                   (local_148._4_4_ - local_158._4_4_) * fVar50;
          fVar33 = (local_148._4_4_ - local_158._4_4_) * fVar52 -
                   ((float)uStack_140 - (float)uStack_150) * fVar51;
          fVar22 = ((float)uStack_140 - (float)uStack_150) * fVar50 -
                   ((float)local_148 - (float)local_158) * fVar52;
          fVar24 = (uStack_140._4_4_ - uStack_150._4_4_) * fVar53 -
                   (uStack_140._4_4_ - uStack_150._4_4_) * fVar53;
          adStack_170[1] = local_128;
          adStack_170[2] = uStack_120;
          fVar32 = fVar22 * fVar22 + fVar33 * fVar33;
          fVar34 = fVar33 * fVar33 + fVar22 * fVar22;
          fVar23 = fVar24 * fVar24 + fVar49 * fVar49;
          fVar25 = fVar49 * fVar49 + fVar24 * fVar24;
          auVar39._0_4_ = fVar23 + fVar32;
          auVar39._4_4_ = fVar25 + fVar34;
          auVar39._8_4_ = fVar32 + fVar23;
          auVar39._12_4_ = fVar34 + fVar25;
          auVar18._4_4_ = -(uint)(1e-08 <= auVar39._4_4_);
          auVar18._0_4_ = -(uint)(1e-08 <= auVar39._0_4_);
          auVar18._8_4_ = -(uint)(1e-08 <= auVar39._8_4_);
          auVar18._12_4_ = -(uint)(1e-08 <= auVar39._12_4_);
          auVar55 = sqrtps(auVar39,auVar39);
          auVar55 = divps(_DAT_1499314a0,auVar55);
          auVar42._0_4_ = auVar55._0_4_ * fVar33;
          auVar42._4_4_ = auVar55._4_4_ * fVar22;
          auVar42._8_4_ = auVar55._8_4_ * fVar49;
          auVar42._12_4_ = auVar55._12_4_ * fVar24;
          auVar29._0_12_ = ZEXT812(0x3f800000);
          auVar29._12_4_ = 0;
          local_198 = blendvps(auVar29,auVar42,auVar18);
          cVar6 = FUN_140ea7f7b(local_188,param_2,local_1a0,local_198);
          if (cVar6 == '\0') {
            local_188[0] = dVar47;
            local_188[1] = dVar2;
            local_188[2] = dVar35;
            adStack_170[0] = dVar5;
            adStack_170[1] = uStack_138;
            adStack_170[2] = uStack_130;
            fVar49 = fVar50 * (uStack_138._4_4_ - fVar31) - fVar51 * ((float)uStack_138 - fVar26);
            fVar31 = fVar51 * ((float)uStack_130 - fVar56) - fVar52 * (uStack_138._4_4_ - fVar31);
            fVar32 = fVar52 * ((float)uStack_138 - fVar26) - fVar50 * ((float)uStack_130 - fVar56);
            fVar33 = fVar53 * (uStack_130._4_4_ - fVar46) - fVar53 * (uStack_130._4_4_ - fVar46);
            fVar26 = fVar32 * fVar32 + fVar31 * fVar31;
            fVar56 = fVar31 * fVar31 + fVar32 * fVar32;
            fVar46 = fVar33 * fVar33 + fVar49 * fVar49;
            fVar34 = fVar49 * fVar49 + fVar33 * fVar33;
            auVar40._0_4_ = fVar46 + fVar26;
            auVar40._4_4_ = fVar34 + fVar56;
            auVar40._8_4_ = fVar26 + fVar46;
            auVar40._12_4_ = fVar56 + fVar34;
            auVar19._4_4_ = -(uint)(1e-08 <= auVar40._4_4_);
            auVar19._0_4_ = -(uint)(1e-08 <= auVar40._0_4_);
            auVar19._8_4_ = -(uint)(1e-08 <= auVar40._8_4_);
            auVar19._12_4_ = -(uint)(1e-08 <= auVar40._12_4_);
            auVar55 = sqrtps(auVar40,auVar40);
            auVar55 = divps(_DAT_1499314a0,auVar55);
            auVar43._0_4_ = auVar55._0_4_ * fVar31;
            auVar43._4_4_ = auVar55._4_4_ * fVar32;
            auVar43._8_4_ = auVar55._8_4_ * fVar49;
            auVar43._12_4_ = auVar55._12_4_ * fVar33;
            auVar30._0_12_ = ZEXT812(0x3f800000);
            auVar30._12_4_ = 0;
            local_198 = blendvps(auVar30,auVar43,auVar19);
            cVar6 = FUN_140ea7f7b(local_188,param_2,local_1a0,local_198);
            if (cVar6 == '\0') goto LAB_140ea7bc3;
          }
          uVar14 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          goto LAB_140ea7bd7;
        }
LAB_140ea7bc3:
        piVar13 = piVar13 + 2;
      } while (piVar13 != piVar1);
    }
  }
  uVar14 = 0;
LAB_140ea7bd7:
  if (local_1f8 != (int *)0x0) {
    FUN_1400020a8();
  }
  if ((local_f0 ^ (ulonglong)auStack_288) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14 & 0xffffff01;
}



// FUNCTION 140ea7f7b FUN_140ea7f7b body=3876 status=ok
// SIG undefined FUN_140ea7f7b(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140ea7f7b(undefined1 (*param_1) [16],longlong param_2,double param_3,float *param_4)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  double dVar3;
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
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [12];
  uint uVar18;
  int iVar20;
  undefined4 uVar21;
  ulonglong uVar22;
  undefined1 *puVar23;
  undefined1 (*pauVar24) [16];
  longlong lVar25;
  ulonglong in_R10;
  uint uVar26;
  ulonglong in_R11;
  int iVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  float fVar42;
  float fVar51;
  float fVar53;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  float fVar52;
  float fVar54;
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  float fVar55;
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [4];
  float fVar62;
  float fVar64;
  float fVar65;
  undefined1 auVar63 [16];
  float fVar66;
  float fVar72;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  float fVar73;
  float fVar76;
  float fVar77;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  float fVar79;
  undefined1 auVar81 [16];
  float fVar80;
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  float fVar86;
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  float fVar90;
  float fVar91;
  float fVar95;
  float fVar96;
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  float fVar100;
  float fVar102;
  float fVar103;
  undefined1 auVar101 [16];
  float fVar104;
  undefined1 auStack_308 [40];
  float local_2e0;
  float local_2dc;
  float local_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float local_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float local_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  undefined1 local_288 [4];
  float fStack_284;
  undefined8 uStack_280;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined1 auStack_248 [64];
  float local_208 [4];
  float local_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float local_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float local_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float local_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float local_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float local_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float local_188;
  float fStack_184;
  float fStack_180;
  undefined4 uStack_17c;
  float local_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float local_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  uint local_148 [4];
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  undefined1 local_128 [16];
  undefined1 local_118 [16];
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  ulonglong local_f0;
  ulonglong uVar19;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_308;
  auVar44._0_4_ = 0.0 - *param_4;
  auVar44._4_4_ = 0.0 - param_4[1];
  auVar44._8_4_ = 0.0 - param_4[2];
  auVar44._12_4_ = 0.0 - param_4[3];
  local_258 = 0;
  uStack_250 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_278 = 0.0;
  fStack_274 = 0.0;
  fStack_270 = 0.0;
  fStack_26c = 0.0;
  _local_288 = ZEXT816(0);
  dVar3 = (double)(~-(ulonglong)(0.0 < *(double *)(param_2 + 0x10)) &
                  (ulonglong)(*(double *)(param_2 + 0x10) * 0.05000000074505806 + 0.0));
  fVar79 = (float)(dVar3 + param_3 + 0.0 + 0.001);
  fVar86 = fVar79 * fVar79;
  uVar26 = 0;
  iVar27 = 1;
  fVar90 = 3.4e+38;
  do {
    fVar28 = 0.0 - auVar44._0_4_;
    fVar39 = 0.0 - auVar44._4_4_;
    fVar40 = 0.0 - auVar44._8_4_;
    fVar41 = 0.0 - auVar44._12_4_;
    auVar74 = *param_1;
    auVar2 = param_1[1];
    auVar35 = param_1[2];
    fVar42 = fVar28 * auVar74._0_4_ + fVar39 * auVar74._4_4_;
    fVar51 = fVar40 * auVar74._8_4_ + fVar41 * auVar74._12_4_;
    fVar66 = fVar28 * auVar2._0_4_ + fVar39 * auVar2._4_4_;
    fVar72 = fVar40 * auVar2._8_4_ + fVar41 * auVar2._12_4_;
    fVar62 = fVar51 + fVar42;
    fVar64 = fVar51 + fVar42;
    fVar65 = fVar42 + fVar51;
    fVar42 = fVar42 + fVar51;
    fVar28 = fVar28 * auVar35._0_4_ + fVar39 * auVar35._4_4_;
    fVar39 = fVar40 * auVar35._8_4_ + fVar41 * auVar35._12_4_;
    fVar40 = fVar72 + fVar66;
    fVar41 = fVar72 + fVar66;
    fVar51 = fVar66 + fVar72;
    fVar66 = fVar66 + fVar72;
    auVar30._0_4_ = -(uint)(fVar39 + fVar28 <= fVar62 && fVar40 <= fVar62);
    auVar30._4_4_ = -(uint)(fVar39 + fVar28 <= fVar64 && fVar41 <= fVar64);
    auVar30._8_4_ = -(uint)(fVar28 + fVar39 <= fVar65 && fVar51 <= fVar65);
    auVar30._12_4_ = -(uint)(fVar28 + fVar39 <= fVar42 && fVar66 <= fVar42);
    auVar31._4_4_ = -(uint)(fVar39 + fVar28 <= fVar41 && fVar64 <= fVar41);
    auVar31._0_4_ = -(uint)(fVar39 + fVar28 <= fVar40 && fVar62 <= fVar40);
    auVar74 = blendvps(auVar35,auVar74,auVar30);
    auVar31._8_4_ = -(uint)(fVar28 + fVar39 <= fVar51 && fVar65 <= fVar51);
    auVar31._12_4_ = -(uint)(fVar28 + fVar39 <= fVar66 && fVar42 <= fVar66);
    auVar74 = blendvps(auVar74,auVar2,auVar31);
    puVar23 = local_298;
    local_298 = auVar44;
    uVar29 = FUN_144947d2c(param_2,local_298,dVar3);
    fVar28 = auVar74._0_4_ - (float)uVar29;
    fVar39 = auVar74._4_4_ - (float)((ulonglong)uVar29 >> 0x20);
    fVar40 = auVar74._8_4_ - (float)extraout_XMM0_Qb;
    if (fVar79 < auVar44._8_4_ * fVar40 + auVar44._0_4_ * fVar28 + auVar44._4_4_ * fVar39) break;
    uVar18 = uVar26 + 1;
    uVar19 = (ulonglong)uVar18;
    uVar22 = (longlong)(int)uVar26 * 0x10;
    *(float *)(local_288 + uVar22) = fVar28;
    *(float *)(local_288 + uVar22 + 4) = fVar39;
    *(float *)(local_288 + uVar22 + 8) = fVar40;
    *(float *)(local_288 + uVar22 + 0xc) =
         auVar74._12_4_ - (float)((ulonglong)extraout_XMM0_Qb >> 0x20);
    if (3 < uVar26) {
      auVar74 = ZEXT416(0);
      goto LAB_140ea82a3;
    }
    iVar20 = (&switchD_140ea818b::switchdataD_149f53a48)[uVar26] + 0x49f53a48;
    switch(uVar26) {
    case 0:
      uVar26 = 1;
      auVar74 = _local_288;
      break;
    case 1:
      auVar16._4_4_ = fStack_274;
      auVar16._0_4_ = local_278;
      auVar16._8_4_ = fStack_270;
      auVar16._12_4_ = fStack_26c;
      fVar39 = local_278 - (float)local_288;
      fVar40 = fStack_274 - fStack_284;
      fVar41 = fStack_270 - (float)uStack_280;
      fVar42 = (0.0 - (float)uStack_280) * fVar41 +
               (0.0 - (float)local_288) * fVar39 + (0.0 - fStack_284) * fVar40;
      fVar28 = fVar41 * fVar41 + fVar39 * fVar39 + fVar40 * fVar40;
      auVar92._0_4_ = fVar42 / fVar28;
      auVar67._4_4_ = -(uint)(fVar28 <= fVar42);
      auVar67._0_4_ = -(uint)(fVar28 <= fVar42);
      auVar67._8_4_ = -(uint)(fVar28 <= fVar42);
      auVar67._12_4_ = -(uint)(fVar28 <= fVar42);
      auVar45._0_8_ = CONCAT44(-(uint)(fVar42 <= 0.0),-(uint)(fVar42 <= 0.0));
      auVar45._8_4_ = -(uint)(fVar42 <= 0.0);
      auVar45._12_4_ = -(uint)(fVar42 <= 0.0);
      auVar56._4_4_ = -(uint)(fVar28 <= 1.1754944e-38);
      auVar56._0_4_ = -(uint)(fVar28 <= 1.1754944e-38);
      auVar56._8_4_ = -(uint)(fVar28 <= 1.1754944e-38);
      auVar56._12_4_ = -(uint)(fVar28 <= 1.1754944e-38);
      auVar56 = auVar56 | auVar67;
      auVar92._4_4_ = auVar92._0_4_;
      auVar92._8_4_ = auVar92._0_4_;
      auVar92._12_4_ = auVar92._0_4_;
      auVar44 = maxps(auVar92,ZEXT816(0));
      auVar44 = minps(auVar44,_DAT_1499314a0);
      auVar93._0_4_ = auVar44._0_4_ * fVar39 + (float)local_288;
      auVar93._4_4_ = auVar44._4_4_ * fVar40 + fStack_284;
      auVar93._8_4_ = auVar44._8_4_ * fVar41 + (float)uStack_280;
      auVar93._12_4_ = auVar44._12_4_ * (fStack_26c - uStack_280._4_4_) + uStack_280._4_4_;
      _local_288 = blendvps(_local_288,auVar16,auVar56);
      auVar44 = blendvps(auVar93,auVar16,auVar56);
      auVar33._8_4_ = -(uint)(fVar42 <= 0.0);
      auVar33._0_8_ = auVar45._0_8_;
      auVar33._12_4_ = -(uint)(fVar42 <= 0.0);
      auVar74 = blendvps(auVar44,_local_288,auVar33);
      uVar26 = movmskps(iVar20,auVar56 | auVar45);
      uVar22 = (ulonglong)uVar26;
      if (uVar26 != 0) {
        uVar19 = 1;
      }
      goto LAB_140ea82a3;
    case 2:
      auVar94._4_4_ = fStack_274;
      auVar94._0_4_ = local_278;
      auVar94._8_4_ = fStack_270;
      auVar94._12_4_ = fStack_26c;
      local_2c8 = (float)local_268;
      fStack_2c4 = local_268._4_4_;
      fStack_2c0 = (float)uStack_260;
      fStack_2bc = uStack_260._4_4_;
      fVar65 = local_278 - (float)local_288;
      fVar66 = fStack_274 - fStack_284;
      fVar72 = fStack_270 - (float)uStack_280;
      fVar52 = fStack_26c - uStack_280._4_4_;
      fVar28 = (float)local_268 - (float)local_288;
      fVar39 = local_268._4_4_ - fStack_284;
      fVar40 = (float)uStack_260 - (float)uStack_280;
      fVar41 = uStack_260._4_4_ - uStack_280._4_4_;
      fVar42 = fVar39 * fVar65 - fVar66 * fVar28;
      fVar51 = fVar40 * fVar66 - fVar72 * fVar39;
      fVar62 = fVar28 * fVar72 - fVar65 * fVar40;
      fVar64 = fVar41 * fVar52 - fVar52 * fVar41;
      auVar57._0_4_ = fVar62 * fVar62 + fVar51 * fVar51 + fVar42 * fVar42;
      auVar97._0_4_ =
           (0.0 - (float)uStack_280) * fVar72 +
           (0.0 - (float)local_288) * fVar65 + (0.0 - fStack_284) * fVar66;
      auVar97._4_4_ = auVar97._0_4_;
      auVar97._8_4_ = auVar97._0_4_;
      auVar97._12_4_ = auVar97._0_4_;
      if (auVar57._0_4_ <=
          (float)uStack_280 * 1.1754944e-38 * (float)uStack_280 * 1.1754944e-38 +
          (float)local_288 * 1.1754944e-38 * (float)local_288 * 1.1754944e-38 +
          fStack_284 * 1.1754944e-38 * fStack_284 * 1.1754944e-38) {
        auVar70._0_12_ = ZEXT812(0);
        auVar70._12_4_ = 0;
        auVar59._0_4_ = fVar72 * fVar72 + fVar65 * fVar65 + fVar66 * fVar66;
        auVar59._4_4_ = auVar59._0_4_;
        auVar59._8_4_ = auVar59._0_4_;
        auVar59._12_4_ = auVar59._0_4_;
        auVar36._4_4_ = -(uint)(auVar59._0_4_ <= auVar97._0_4_);
        auVar36._0_4_ = -(uint)(auVar59._0_4_ <= auVar97._0_4_);
        auVar36._8_4_ = -(uint)(auVar59._0_4_ <= auVar97._0_4_);
        auVar36._12_4_ = -(uint)(auVar59._0_4_ <= auVar97._0_4_);
        auVar74 = divps(auVar97,auVar59);
        auVar60._4_4_ = -(uint)(auVar59._0_4_ <= 1.1754944e-38);
        auVar60._0_4_ = -(uint)(auVar59._0_4_ <= 1.1754944e-38);
        auVar60._8_4_ = -(uint)(auVar59._0_4_ <= 1.1754944e-38);
        auVar60._12_4_ = -(uint)(auVar59._0_4_ <= 1.1754944e-38);
        auVar60 = auVar60 | auVar36;
        auVar44 = blendvps(_local_288,auVar94,auVar60);
        auVar74 = maxps(auVar74,auVar70);
        auVar74 = minps(auVar74,_DAT_1499314a0);
        auVar99._0_4_ = auVar74._0_4_ * fVar65 + (float)local_288;
        auVar99._4_4_ = auVar74._4_4_ * fVar66 + fStack_284;
        auVar99._8_4_ = auVar74._8_4_ * fVar72 + (float)uStack_280;
        auVar99._12_4_ = auVar74._12_4_ * fVar52 + uStack_280._4_4_;
        auVar74 = blendvps(auVar99,auVar94,auVar60);
        auVar49._0_8_ = CONCAT44(-(uint)(auVar97._0_4_ <= 0.0),-(uint)(auVar97._0_4_ <= 0.0));
        auVar49._8_4_ = -(uint)(auVar97._0_4_ <= 0.0);
        auVar49._12_4_ = -(uint)(auVar97._0_4_ <= 0.0);
        auVar37._8_4_ = -(uint)(auVar97._0_4_ <= 0.0);
        auVar37._0_8_ = auVar49._0_8_;
        auVar37._12_4_ = -(uint)(auVar97._0_4_ <= 0.0);
        auVar74 = blendvps(auVar74,auVar44,auVar37);
        uVar26 = movmskps(uVar18,auVar60 | auVar49);
        uVar19 = (ulonglong)uVar26;
        uVar26 = (uVar26 == 0) + 1;
        local_2dc = fVar79;
        local_2d8 = fVar90;
        fStack_2d4 = fVar90;
        fStack_2d0 = fVar90;
        fStack_2cc = fVar90;
        _local_288 = auVar44;
      }
      else {
        auVar101._0_4_ =
             (0.0 - (float)uStack_280) * fVar40 +
             (0.0 - (float)local_288) * fVar28 + (0.0 - fStack_284) * fVar39;
        auVar101._4_4_ = auVar101._0_4_;
        auVar101._8_4_ = auVar101._0_4_;
        auVar101._12_4_ = auVar101._0_4_;
        auVar9._4_4_ = -(uint)(auVar101._0_4_ <= 0.0 && auVar97._0_4_ <= 0.0);
        auVar9._0_4_ = -(uint)(auVar101._0_4_ <= 0.0 && auVar97._0_4_ <= 0.0);
        auVar9._8_4_ = -(uint)(auVar101._0_4_ <= 0.0 && auVar97._0_4_ <= 0.0);
        auVar9._12_4_ = -(uint)(auVar101._0_4_ <= 0.0 && auVar97._0_4_ <= 0.0);
        uVar18 = movmskps(uVar18,auVar9);
        uVar19 = (ulonglong)uVar18;
        uVar26 = 1;
        auVar61 = local_288;
        fVar53 = fStack_284;
        fVar54 = (float)uStack_280;
        fVar73 = uStack_280._4_4_;
        if (uVar18 == 0) {
          fVar53 = fVar72 * (0.0 - fStack_270) +
                   fVar65 * (0.0 - local_278) + fVar66 * (0.0 - fStack_274);
          fVar54 = (0.0 - fStack_270) * fVar40 +
                   (0.0 - local_278) * fVar28 + (0.0 - fStack_274) * fVar39;
          auVar10._4_4_ = -(uint)(fVar54 <= fVar53 && 0.0 <= fVar53);
          auVar10._0_4_ = -(uint)(fVar54 <= fVar53 && 0.0 <= fVar53);
          auVar10._8_4_ = -(uint)(fVar54 <= fVar53 && 0.0 <= fVar53);
          auVar10._12_4_ = -(uint)(fVar54 <= fVar53 && 0.0 <= fVar53);
          uVar18 = movmskps(0,auVar10);
          auVar44 = auVar94;
          if (uVar18 == 0) {
            auVar75._0_4_ = auVar97._0_4_ - fVar53;
            auVar75._4_4_ = auVar97._0_4_ - fVar53;
            auVar75._8_4_ = auVar97._0_4_ - fVar53;
            auVar75._12_4_ = auVar97._0_4_ - fVar53;
            auVar5._4_4_ = -(uint)((0.0 < auVar75._4_4_ && (0.0 <= auVar97._0_4_ && fVar53 <= 0.0))
                                  && auVar97._0_4_ * fVar54 - fVar53 * auVar101._0_4_ <= 0.0);
            auVar5._0_4_ = -(uint)((0.0 < auVar75._0_4_ && (0.0 <= auVar97._0_4_ && fVar53 <= 0.0))
                                  && auVar97._0_4_ * fVar54 - fVar53 * auVar101._0_4_ <= 0.0);
            auVar5._8_4_ = -(uint)((0.0 < auVar75._8_4_ && (0.0 <= auVar97._0_4_ && fVar53 <= 0.0))
                                  && auVar97._0_4_ * fVar54 - fVar53 * auVar101._0_4_ <= 0.0);
            auVar5._12_4_ =
                 -(uint)((0.0 < auVar75._12_4_ && (0.0 <= auVar97._0_4_ && fVar53 <= 0.0)) &&
                        auVar97._0_4_ * fVar54 - fVar53 * auVar101._0_4_ <= 0.0);
            uVar18 = movmskps(0,auVar5);
            if (uVar18 == 0) {
              fVar66 = fVar72 * (0.0 - (float)uStack_260) +
                       fVar65 * (0.0 - (float)local_268) + fVar66 * (0.0 - local_268._4_4_);
              fVar65 = (0.0 - (float)uStack_260) * fVar40 +
                       (0.0 - (float)local_268) * fVar28 + (0.0 - local_268._4_4_) * fVar39;
              auVar11._4_4_ = -(uint)(fVar66 <= fVar65 && 0.0 <= fVar65);
              auVar11._0_4_ = -(uint)(fVar66 <= fVar65 && 0.0 <= fVar65);
              auVar11._8_4_ = -(uint)(fVar66 <= fVar65 && 0.0 <= fVar65);
              auVar11._12_4_ = -(uint)(fVar66 <= fVar65 && 0.0 <= fVar65);
              uVar18 = movmskps(0,auVar11);
              if (uVar18 != 0) {
                auVar94._8_4_ = (float)uStack_260;
                auVar94._0_8_ = local_268;
                auVar94._12_4_ = uStack_260._4_4_;
                auVar44 = auVar94;
                goto LAB_140ea8c69;
              }
              auVar87._0_4_ =
                   -(uint)((0.0 < auVar101._0_4_ - fVar65 &&
                           (0.0 <= auVar101._0_4_ && fVar65 <= 0.0)) &&
                          fVar66 * auVar101._0_4_ - auVar97._0_4_ * fVar65 <= 0.0);
              auVar87._4_4_ =
                   -(uint)((0.0 < auVar101._0_4_ - fVar65 &&
                           (0.0 <= auVar101._0_4_ && fVar65 <= 0.0)) &&
                          fVar66 * auVar101._0_4_ - auVar97._0_4_ * fVar65 <= 0.0);
              auVar87._8_4_ =
                   -(uint)((0.0 < auVar101._0_4_ - fVar65 &&
                           (0.0 <= auVar101._0_4_ && fVar65 <= 0.0)) &&
                          fVar66 * auVar101._0_4_ - auVar97._0_4_ * fVar65 <= 0.0);
              auVar87._12_4_ =
                   -(uint)((0.0 < auVar101._0_4_ - fVar65 &&
                           (0.0 <= auVar101._0_4_ && fVar65 <= 0.0)) &&
                          fVar66 * auVar101._0_4_ - auVar97._0_4_ * fVar65 <= 0.0);
              uVar18 = movmskps(0,auVar87);
              if (uVar18 == 0) {
                auVar81._0_4_ = fVar54 - fVar53;
                auVar81._4_4_ = fVar54 - fVar53;
                auVar81._8_4_ = fVar54 - fVar53;
                auVar81._12_4_ = fVar54 - fVar53;
                auVar68._0_4_ = auVar81._0_4_ + (fVar66 - fVar65);
                auVar68._4_4_ = auVar81._4_4_ + (fVar66 - fVar65);
                auVar68._8_4_ = auVar81._8_4_ + (fVar66 - fVar65);
                auVar68._12_4_ = auVar81._12_4_ + (fVar66 - fVar65);
                auVar63._0_4_ =
                     -(uint)((0.0 < auVar68._0_4_ &&
                             (0.0 <= auVar81._0_4_ && 0.0 <= fVar66 - fVar65)) &&
                            fVar53 * fVar65 - fVar66 * fVar54 <= 0.0);
                auVar63._4_4_ =
                     -(uint)((0.0 < auVar68._4_4_ &&
                             (0.0 <= auVar81._4_4_ && 0.0 <= fVar66 - fVar65)) &&
                            fVar53 * fVar65 - fVar66 * fVar54 <= 0.0);
                auVar63._8_4_ =
                     -(uint)((0.0 < auVar68._8_4_ &&
                             (0.0 <= auVar81._8_4_ && 0.0 <= fVar66 - fVar65)) &&
                            fVar53 * fVar65 - fVar66 * fVar54 <= 0.0);
                auVar63._12_4_ =
                     -(uint)((0.0 < auVar68._12_4_ &&
                             (0.0 <= auVar81._12_4_ && 0.0 <= fVar66 - fVar65)) &&
                            fVar53 * fVar65 - fVar66 * fVar54 <= 0.0);
                uVar26 = movmskps(0,auVar63);
                uVar19 = (ulonglong)uVar26;
                if (uVar26 != 0) {
                  auVar44 = divps(auVar81,auVar68);
                  auVar74._4_4_ = (local_268._4_4_ - fStack_274) * auVar44._4_4_ + fStack_274;
                  auVar74._0_4_ = ((float)local_268 - local_278) * auVar44._0_4_ + local_278;
                  uVar26 = 2;
                  auVar74._8_4_ = ((float)uStack_260 - fStack_270) * auVar44._8_4_ + fStack_270;
                  auVar74._12_4_ = (uStack_260._4_4_ - fStack_26c) * auVar44._12_4_ + fStack_26c;
                  local_2e0 = fVar86;
                  local_2dc = fVar79;
                  local_2d8 = fVar90;
                  fStack_2d4 = fVar90;
                  fStack_2d0 = fVar90;
                  fStack_2cc = fVar90;
                  _local_288 = auVar94;
                  local_278 = (float)local_268;
                  fStack_274 = local_268._4_4_;
                  fStack_270 = (float)uStack_260;
                  fStack_26c = uStack_260._4_4_;
                  break;
                }
                auVar34._4_4_ = fVar62;
                auVar34._0_4_ = fVar51;
                auVar57._4_4_ = auVar57._0_4_;
                auVar57._8_4_ = auVar57._0_4_;
                auVar57._12_4_ = auVar57._0_4_;
                auVar34._8_4_ = fVar42;
                auVar34._12_4_ = fVar64;
                auVar44 = divps(auVar34,auVar57);
                fVar73 = (float)uStack_280 * auVar44._8_4_ +
                         (float)local_288 * auVar44._0_4_ + fStack_284 * auVar44._4_4_;
                auVar61 = (undefined1  [4])(fVar73 * fVar51);
                fVar53 = fVar73 * fVar62;
                fVar54 = fVar73 * fVar42;
                fVar73 = fVar73 * fVar64;
                uVar26 = 3;
                local_2e0 = fVar86;
                goto LAB_140ea85a2;
              }
              auVar12._4_4_ = auVar101._0_4_ - fVar65;
              auVar12._0_4_ = auVar101._0_4_ - fVar65;
              auVar12._8_4_ = auVar101._0_4_ - fVar65;
              auVar12._12_4_ = auVar101._0_4_ - fVar65;
              auVar44 = divps(auVar101,auVar12);
              local_278 = (float)local_268;
              fStack_274 = local_268._4_4_;
              fStack_270 = (float)uStack_260;
              fStack_26c = uStack_260._4_4_;
              fVar28 = fVar28 * auVar44._0_4_;
              fVar39 = fVar39 * auVar44._4_4_;
              fVar40 = fVar40 * auVar44._8_4_;
              fVar41 = fVar41 * auVar44._12_4_;
            }
            else {
              auVar44 = divps(auVar97,auVar75);
              fVar28 = fVar65 * auVar44._0_4_;
              fVar39 = fVar66 * auVar44._4_4_;
              fVar40 = fVar72 * auVar44._8_4_;
              fVar41 = fVar52 * auVar44._12_4_;
            }
            uVar26 = 2;
            auVar94._4_4_ = fStack_284 + fVar39;
            auVar94._0_4_ = (float)local_288 + fVar28;
            auVar94._8_4_ = (float)uStack_280 + fVar40;
            auVar94._12_4_ = uStack_280._4_4_ + fVar41;
            auVar44 = _local_288;
          }
LAB_140ea8c69:
          _local_288 = auVar44;
          uVar19 = (ulonglong)uVar18;
          auVar74 = auVar94;
          local_2e0 = fVar86;
          local_2dc = fVar79;
          local_2d8 = fVar90;
          fStack_2d4 = fVar90;
          fStack_2d0 = fVar90;
          fStack_2cc = fVar90;
        }
        else {
LAB_140ea85a2:
          auVar74._4_4_ = fVar53;
          auVar74._0_4_ = auVar61;
          auVar74._8_4_ = fVar54;
          auVar74._12_4_ = fVar73;
          local_2dc = fVar79;
          local_2d8 = fVar90;
          fStack_2d4 = fVar90;
          fStack_2d0 = fVar90;
          fStack_2cc = fVar90;
        }
      }
      break;
    case 3:
      local_208[0] = local_278;
      local_208[1] = fStack_274;
      local_208[2] = fStack_270;
      local_208[3] = fStack_26c;
      local_1f8 = (float)local_268;
      fStack_1f4 = local_268._4_4_;
      fStack_1f0 = (float)uStack_260;
      fStack_1ec = uStack_260._4_4_;
      local_1e8 = (float)local_258;
      fStack_1e4 = local_258._4_4_;
      fStack_1e0 = (float)uStack_250;
      uStack_1dc = uStack_250._4_4_;
      local_1d8 = (float)local_288;
      fStack_1d4 = fStack_284;
      fStack_1d0 = (float)uStack_280;
      fStack_1cc = uStack_280._4_4_;
      local_1c8 = (float)local_268;
      fStack_1c4 = local_268._4_4_;
      fStack_1c0 = (float)uStack_260;
      fStack_1bc = uStack_260._4_4_;
      local_1b8 = (float)local_258;
      fStack_1b4 = local_258._4_4_;
      fStack_1b0 = (float)uStack_250;
      uStack_1ac = uStack_250._4_4_;
      local_1a8 = (float)local_288;
      fStack_1a4 = fStack_284;
      fStack_1a0 = (float)uStack_280;
      fStack_19c = uStack_280._4_4_;
      local_198 = local_278;
      fStack_194 = fStack_274;
      fStack_190 = fStack_270;
      fStack_18c = fStack_26c;
      local_188 = (float)local_258;
      fStack_184 = local_258._4_4_;
      fStack_180 = (float)uStack_250;
      uStack_17c = uStack_250._4_4_;
      fVar42 = local_258._4_4_ * (float)local_268 - (float)local_258 * local_268._4_4_;
      fVar51 = (float)uStack_250 * local_268._4_4_ - local_258._4_4_ * (float)uStack_260;
      fVar62 = (float)local_258 * (float)uStack_260 - (float)uStack_250 * (float)local_268;
      local_178 = (float)local_288;
      fStack_174 = fStack_284;
      fStack_170 = (float)uStack_280;
      fStack_16c = uStack_280._4_4_;
      local_168 = local_278;
      fStack_164 = fStack_274;
      fStack_160 = fStack_270;
      fStack_15c = fStack_26c;
      local_158 = (float)local_268;
      fStack_154 = local_268._4_4_;
      fStack_150 = (float)uStack_260;
      fStack_14c = uStack_260._4_4_;
      fVar28 = 0.0;
      fVar39 = 0.0;
      fVar40 = 0.0;
      fVar41 = 0.0;
      local_138 = 0.0 - (fStack_270 * fVar42 + local_278 * fVar51 + fStack_274 * fVar62);
      fVar42 = fVar42 * (float)uStack_280 + fVar51 * (float)local_288 + fVar62 * fStack_284;
      fStack_134 = local_138;
      fStack_130 = local_138;
      fStack_12c = local_138;
      local_128._4_4_ = fVar42;
      local_128._0_4_ = fVar42;
      local_128._8_4_ = fVar42;
      local_128._12_4_ = fVar42;
      local_118._0_4_ =
           0.0 - ((local_258._4_4_ * local_278 - (float)local_258 * fStack_274) * (float)uStack_280
                 + ((float)uStack_250 * fStack_274 - local_258._4_4_ * fStack_270) *
                   (float)local_288 +
                   ((float)local_258 * fStack_270 - (float)uStack_250 * local_278) * fStack_284);
      local_108 = (local_268._4_4_ * local_278 - fStack_274 * (float)local_268) * (float)uStack_280
                  + ((float)uStack_260 * fStack_274 - fStack_270 * local_268._4_4_) *
                    (float)local_288 +
                    ((float)local_268 * fStack_270 - local_278 * (float)uStack_260) * fStack_284;
      local_118._4_4_ = local_118._0_4_;
      local_118._8_4_ = local_118._0_4_;
      local_118._12_4_ = local_118._0_4_;
      fStack_104 = local_108;
      fStack_100 = local_108;
      fStack_fc = local_108;
      fVar42 = fVar42 + local_138 + local_108 + local_118._0_4_;
      local_148[0] = 3;
      local_148[1] = 3;
      local_148[2] = 3;
      local_148[3] = 3;
      auVar2._4_4_ = fVar42;
      auVar2._0_4_ = fVar42;
      auVar2._8_4_ = fVar42;
      auVar2._12_4_ = fVar42;
      uVar21 = movmskps((int)puVar23,auVar2);
      uVar22 = 0xffffffff;
      in_R10 = CONCAT71((int7)(in_R10 >> 8),1);
      pauVar24 = (undefined1 (*) [16])local_208;
      lVar25 = 0;
      do {
        auVar44 = *(undefined1 (*) [16])(&local_138 + lVar25);
        uVar26 = movmskps((int)in_R11,auVar44);
        in_R11 = (ulonglong)uVar26;
        if ((char)uVar21 == (char)uVar26) {
          auVar35._4_4_ = -(uint)(auVar44._4_4_ * fVar42 == 0.0);
          auVar35._0_4_ = -(uint)(auVar44._0_4_ * fVar42 == 0.0);
          auVar35._8_4_ = -(uint)(auVar44._8_4_ * fVar42 == 0.0);
          auVar35._12_4_ = -(uint)(auVar44._12_4_ * fVar42 == 0.0);
          uVar26 = movmskps(uVar26,auVar35);
          in_R11 = (ulonglong)uVar26;
          if ((char)uVar26 != '\0') goto LAB_140ea87ac;
        }
        else {
LAB_140ea87ac:
          auVar85 = *pauVar24;
          fVar51 = auVar85._0_4_;
          fVar62 = auVar85._12_4_;
          auVar44 = pauVar24[1];
          fVar64 = auVar44._12_4_;
          pauVar1 = pauVar24 + 2;
          local_2c8 = *(float *)*pauVar1;
          fStack_2c4 = *(float *)(pauVar24[2] + 4);
          fStack_2c0 = *(float *)(pauVar24[2] + 8);
          auVar17 = *(undefined1 (*) [12])*pauVar1;
          fStack_2bc = *(float *)(pauVar24[2] + 0xc);
          auVar35 = *pauVar1;
          auVar2 = *pauVar1;
          auVar74 = *pauVar1;
          fVar91 = auVar44._0_4_;
          fVar95 = auVar44._4_4_;
          fVar96 = auVar44._8_4_;
          fVar73 = fVar91 - fVar51;
          fVar65 = auVar85._4_4_;
          fVar76 = fVar95 - fVar65;
          fVar66 = auVar85._8_4_;
          fVar77 = fVar96 - fVar66;
          fVar78 = fVar64 - fVar62;
          fVar72 = local_2c8 - fVar51;
          fVar52 = fStack_2c4 - fVar65;
          fVar53 = fStack_2c0 - fVar66;
          fVar54 = fStack_2bc - fVar62;
          fVar100 = fVar52 * fVar73 - fVar76 * fVar72;
          fVar102 = fVar53 * fVar76 - fVar77 * fVar52;
          fVar103 = fVar72 * fVar77 - fVar73 * fVar53;
          fVar104 = fVar54 * fVar78 - fVar78 * fVar54;
          auVar98._0_4_ = fVar103 * fVar103 + fVar102 * fVar102 + fVar100 * fVar100;
          if (auVar98._0_4_ <=
              fVar66 * 1.1754944e-38 * fVar66 * 1.1754944e-38 +
              fVar51 * 1.1754944e-38 * fVar51 * 1.1754944e-38 +
              fVar65 * 1.1754944e-38 * fVar65 * 1.1754944e-38) {
            fVar72 = (0.0 - fVar66) * fVar77 + (0.0 - fVar51) * fVar73 + (0.0 - fVar65) * fVar76;
            fVar64 = fVar77 * fVar77 + fVar73 * fVar73 + fVar76 * fVar76;
            auVar83._0_4_ = fVar72 / fVar64;
            auVar71._4_4_ = -(uint)(fVar64 <= 1.1754944e-38);
            auVar71._0_4_ = -(uint)(fVar64 <= 1.1754944e-38);
            auVar71._8_4_ = -(uint)(fVar64 <= 1.1754944e-38);
            auVar71._12_4_ = -(uint)(fVar64 <= 1.1754944e-38);
            auVar4._4_4_ = -(uint)(fVar64 <= fVar72);
            auVar4._0_4_ = -(uint)(fVar64 <= fVar72);
            auVar4._8_4_ = -(uint)(fVar64 <= fVar72);
            auVar4._12_4_ = -(uint)(fVar64 <= fVar72);
            auVar71 = auVar71 | auVar4;
            auVar83._4_4_ = auVar83._0_4_;
            auVar83._8_4_ = auVar83._0_4_;
            auVar83._12_4_ = auVar83._0_4_;
            auVar74 = maxps(auVar83,ZEXT816(0));
            auVar74 = minps(auVar74,_DAT_1499314a0);
            auVar84._0_4_ = auVar74._0_4_ * fVar73 + fVar51;
            auVar84._4_4_ = auVar74._4_4_ * fVar76 + fVar65;
            auVar84._8_4_ = auVar74._8_4_ * fVar77 + fVar66;
            auVar84._12_4_ = auVar74._12_4_ * fVar78 + fVar62;
            auVar74 = blendvps(auVar85,auVar44,auVar71);
            auVar50._0_8_ = CONCAT44(-(uint)(fVar72 <= 0.0),-(uint)(fVar72 <= 0.0));
            auVar50._8_4_ = -(uint)(fVar72 <= 0.0);
            auVar50._12_4_ = -(uint)(fVar72 <= 0.0);
            auVar44 = blendvps(auVar84,auVar44,auVar71);
            *pauVar24 = auVar74;
            auVar38._8_4_ = -(uint)(fVar72 <= 0.0);
            auVar38._0_8_ = auVar50._0_8_;
            auVar38._12_4_ = -(uint)(fVar72 <= 0.0);
            auVar85 = blendvps(auVar44,auVar74,auVar38);
            iVar20 = movmskps((int)in_R10,auVar71 | auVar50);
            uVar26 = (iVar20 == 0) + 1;
            in_R11 = (ulonglong)uVar26;
            *(uint *)((longlong)local_148 + lVar25) = uVar26;
          }
          else {
            auVar88._0_4_ =
                 (0.0 - fVar66) * fVar77 + (0.0 - fVar51) * fVar73 + (0.0 - fVar65) * fVar76;
            auVar88._4_4_ = auVar88._0_4_;
            auVar88._8_4_ = auVar88._0_4_;
            auVar88._12_4_ = auVar88._0_4_;
            auVar69._0_4_ =
                 (0.0 - fVar66) * fVar53 + (0.0 - fVar51) * fVar72 + (0.0 - fVar65) * fVar52;
            auVar69._4_4_ = auVar69._0_4_;
            auVar69._8_4_ = auVar69._0_4_;
            auVar69._12_4_ = auVar69._0_4_;
            auVar6._4_4_ = -(uint)(auVar69._0_4_ <= 0.0 && auVar88._0_4_ <= 0.0);
            auVar6._0_4_ = -(uint)(auVar69._0_4_ <= 0.0 && auVar88._0_4_ <= 0.0);
            auVar6._8_4_ = -(uint)(auVar69._0_4_ <= 0.0 && auVar88._0_4_ <= 0.0);
            auVar6._12_4_ = -(uint)(auVar69._0_4_ <= 0.0 && auVar88._0_4_ <= 0.0);
            iVar20 = movmskps((int)in_R10,auVar6);
            if (iVar20 == 0) {
              fVar55 = fVar77 * (0.0 - fVar96) + fVar73 * (0.0 - fVar91) + fVar76 * (0.0 - fVar95);
              fVar80 = (0.0 - fVar96) * fVar53 + (0.0 - fVar91) * fVar72 + (0.0 - fVar95) * fVar52;
              auVar7._4_4_ = -(uint)(fVar80 <= fVar55 && 0.0 <= fVar55);
              auVar7._0_4_ = -(uint)(fVar80 <= fVar55 && 0.0 <= fVar55);
              auVar7._8_4_ = -(uint)(fVar80 <= fVar55 && 0.0 <= fVar55);
              auVar7._12_4_ = -(uint)(fVar80 <= fVar55 && 0.0 <= fVar55);
              iVar20 = movmskps(0,auVar7);
              local_2b8 = fVar28;
              fStack_2b4 = fVar39;
              fStack_2b0 = fVar40;
              fStack_2ac = fVar41;
              local_2a8 = auVar44;
              if (iVar20 == 0) {
                auVar13._4_4_ =
                     -(uint)((0.0 < auVar88._0_4_ - fVar55 &&
                             (0.0 <= auVar88._0_4_ && fVar55 <= 0.0)) &&
                            auVar88._0_4_ * fVar80 - fVar55 * auVar69._0_4_ <= 0.0);
                auVar13._0_4_ =
                     -(uint)((0.0 < auVar88._0_4_ - fVar55 &&
                             (0.0 <= auVar88._0_4_ && fVar55 <= 0.0)) &&
                            auVar88._0_4_ * fVar80 - fVar55 * auVar69._0_4_ <= 0.0);
                auVar13._8_4_ =
                     -(uint)((0.0 < auVar88._0_4_ - fVar55 &&
                             (0.0 <= auVar88._0_4_ && fVar55 <= 0.0)) &&
                            auVar88._0_4_ * fVar80 - fVar55 * auVar69._0_4_ <= 0.0);
                auVar13._12_4_ =
                     -(uint)((0.0 < auVar88._0_4_ - fVar55 &&
                             (0.0 <= auVar88._0_4_ && fVar55 <= 0.0)) &&
                            auVar88._0_4_ * fVar80 - fVar55 * auVar69._0_4_ <= 0.0);
                iVar20 = movmskps(0,auVar13);
                if (iVar20 == 0) {
                  fVar73 = fVar77 * (0.0 - fStack_2c0) +
                           fVar73 * (0.0 - local_2c8) + fVar76 * (0.0 - fStack_2c4);
                  fVar76 = (0.0 - fStack_2c0) * fVar53 +
                           (0.0 - local_2c8) * fVar72 + (0.0 - fStack_2c4) * fVar52;
                  auVar14._4_4_ = -(uint)(fVar73 <= fVar76 && 0.0 <= fVar76);
                  auVar14._0_4_ = -(uint)(fVar73 <= fVar76 && 0.0 <= fVar76);
                  auVar14._8_4_ = -(uint)(fVar73 <= fVar76 && 0.0 <= fVar76);
                  auVar14._12_4_ = -(uint)(fVar73 <= fVar76 && 0.0 <= fVar76);
                  iVar20 = movmskps(0,auVar14);
                  if (iVar20 != 0) {
                    *(undefined4 *)((longlong)local_148 + lVar25) = 1;
                    auVar85 = auVar35;
                    goto LAB_140ea8e97;
                  }
                  auVar89._0_4_ = auVar69._0_4_ - fVar76;
                  auVar89._4_4_ = auVar69._0_4_ - fVar76;
                  auVar89._8_4_ = auVar69._0_4_ - fVar76;
                  auVar89._12_4_ = auVar69._0_4_ - fVar76;
                  auVar15._4_4_ =
                       -(uint)((0.0 < auVar89._4_4_ && (0.0 <= auVar69._0_4_ && fVar76 <= 0.0)) &&
                              fVar73 * auVar69._0_4_ - auVar88._0_4_ * fVar76 <= 0.0);
                  auVar15._0_4_ =
                       -(uint)((0.0 < auVar89._0_4_ && (0.0 <= auVar69._0_4_ && fVar76 <= 0.0)) &&
                              fVar73 * auVar69._0_4_ - auVar88._0_4_ * fVar76 <= 0.0);
                  auVar15._8_4_ =
                       -(uint)((0.0 < auVar89._8_4_ && (0.0 <= auVar69._0_4_ && fVar76 <= 0.0)) &&
                              fVar73 * auVar69._0_4_ - auVar88._0_4_ * fVar76 <= 0.0);
                  auVar15._12_4_ =
                       -(uint)((0.0 < auVar89._12_4_ && (0.0 <= auVar69._0_4_ && fVar76 <= 0.0)) &&
                              fVar73 * auVar69._0_4_ - auVar88._0_4_ * fVar76 <= 0.0);
                  iVar20 = movmskps(0,auVar15);
                  if (iVar20 == 0) {
                    auVar82._0_4_ = fVar80 - fVar55;
                    auVar82._4_4_ = fVar80 - fVar55;
                    auVar82._8_4_ = fVar80 - fVar55;
                    auVar82._12_4_ = fVar80 - fVar55;
                    auVar46._0_4_ = auVar82._0_4_ + (fVar73 - fVar76);
                    auVar46._4_4_ = auVar82._4_4_ + (fVar73 - fVar76);
                    auVar46._8_4_ = auVar82._8_4_ + (fVar73 - fVar76);
                    auVar46._12_4_ = auVar82._12_4_ + (fVar73 - fVar76);
                    auVar58._0_4_ =
                         -(uint)(((0.0 <= fVar73 - fVar76 && 0.0 <= auVar82._0_4_) &&
                                 0.0 < auVar46._0_4_) && fVar55 * fVar76 - fVar73 * fVar80 <= 0.0);
                    auVar58._4_4_ =
                         -(uint)(((0.0 <= fVar73 - fVar76 && 0.0 <= auVar82._4_4_) &&
                                 0.0 < auVar46._4_4_) && fVar55 * fVar76 - fVar73 * fVar80 <= 0.0);
                    auVar58._8_4_ =
                         -(uint)(((0.0 <= fVar73 - fVar76 && 0.0 <= auVar82._8_4_) &&
                                 0.0 < auVar46._8_4_) && fVar55 * fVar76 - fVar73 * fVar80 <= 0.0);
                    auVar58._12_4_ =
                         -(uint)(((0.0 <= fVar73 - fVar76 && 0.0 <= auVar82._12_4_) &&
                                 0.0 < auVar46._12_4_) && fVar55 * fVar76 - fVar73 * fVar80 <= 0.0);
                    iVar20 = movmskps(0,auVar58);
                    if (iVar20 == 0) {
                      auVar47._4_4_ = fVar103;
                      auVar47._0_4_ = fVar102;
                      auVar98._4_4_ = auVar98._0_4_;
                      auVar98._8_4_ = auVar98._0_4_;
                      auVar98._12_4_ = auVar98._0_4_;
                      *(undefined4 *)((longlong)local_148 + lVar25) = 3;
                      auVar47._8_4_ = fVar100;
                      auVar47._12_4_ = fVar104;
                      auVar44 = divps(auVar47,auVar98);
                      fVar51 = fVar66 * auVar44._8_4_ +
                               fVar51 * auVar44._0_4_ + fVar65 * auVar44._4_4_;
                      auVar85._0_4_ = fVar51 * fVar102;
                      auVar85._4_4_ = fVar51 * fVar103;
                      auVar85._8_4_ = fVar51 * fVar100;
                      auVar85._12_4_ = fVar51 * fVar104;
                    }
                    else {
                      *(undefined4 *)((longlong)local_148 + lVar25) = 2;
                      auVar44 = divps(auVar82,auVar46);
                      auVar85._0_4_ = (auVar17._0_4_ - fVar91) * auVar44._0_4_ + fVar91;
                      auVar85._4_4_ = (auVar17._4_4_ - fVar95) * auVar44._4_4_ + fVar95;
                      auVar85._8_4_ = (auVar17._8_4_ - fVar96) * auVar44._8_4_ + fVar96;
                      auVar85._12_4_ = (fStack_2bc - fVar64) * auVar44._12_4_ + fVar64;
                      *(float *)*pauVar24 = fVar91;
                      *(float *)(*pauVar24 + 4) = fVar95;
                      *(float *)(*pauVar24 + 8) = fVar96;
                      *(float *)(*pauVar24 + 0xc) = fVar64;
                      pauVar24[1] = auVar74;
                    }
                  }
                  else {
                    auVar44 = divps(auVar69,auVar89);
                    *(undefined4 *)((longlong)local_148 + lVar25) = 2;
                    pauVar24[1] = auVar2;
                    auVar85._0_4_ = fVar51 + fVar72 * auVar44._0_4_;
                    auVar85._4_4_ = fVar65 + fVar52 * auVar44._4_4_;
                    auVar85._8_4_ = fVar66 + fVar53 * auVar44._8_4_;
                    auVar85._12_4_ = fVar62 + fVar54 * auVar44._12_4_;
                  }
                }
                else {
                  *(undefined4 *)((longlong)local_148 + lVar25) = 2;
                  auVar8._4_4_ = auVar88._0_4_ - fVar55;
                  auVar8._0_4_ = auVar88._0_4_ - fVar55;
                  auVar8._8_4_ = auVar88._0_4_ - fVar55;
                  auVar8._12_4_ = auVar88._0_4_ - fVar55;
                  auVar44 = divps(auVar88,auVar8);
                  auVar85._0_4_ = fVar51 + fVar73 * auVar44._0_4_;
                  auVar85._4_4_ = fVar65 + fVar76 * auVar44._4_4_;
                  auVar85._8_4_ = fVar66 + fVar77 * auVar44._8_4_;
                  auVar85._12_4_ = fVar62 + fVar78 * auVar44._12_4_;
                }
              }
              else {
                *(undefined4 *)((longlong)local_148 + lVar25) = 1;
                auVar85 = auVar44;
LAB_140ea8e97:
                *pauVar24 = auVar85;
              }
            }
            else {
              *(undefined4 *)((longlong)local_148 + lVar25) = 1;
            }
          }
          *(undefined1 (*) [16])(auStack_248 + lVar25 * 4) = auVar85;
          fVar51 = auVar85._8_4_ * auVar85._8_4_ +
                   auVar85._0_4_ * auVar85._0_4_ + auVar85._4_4_ * auVar85._4_4_;
          auVar48._4_4_ = -(uint)(fVar51 < fVar39);
          auVar48._0_4_ = -(uint)(fVar51 < fVar28);
          auVar48._8_4_ = -(uint)(fVar51 < fVar40);
          auVar48._12_4_ = -(uint)(fVar51 < fVar41);
          iVar20 = movmskps(iVar20,auVar48);
          if ((iVar20 == 0) && ((int)uVar22 != -1)) {
            in_R10 = 0;
          }
          else {
            uVar22 = (ulonglong)*(uint *)(&DAT_149f52bf0 + lVar25);
            in_R10 = 0;
            fVar28 = fVar51;
            fVar39 = fVar51;
            fVar40 = fVar51;
            fVar41 = fVar51;
          }
        }
        lVar25 = lVar25 + 4;
        pauVar24 = pauVar24 + 3;
      } while (lVar25 != 0x10);
      if ((in_R10 & 1) == 0) {
        lVar25 = (longlong)(int)uVar22;
        uVar19 = (ulonglong)local_148[lVar25];
        local_268 = *(undefined8 *)(local_208 + lVar25 * 0xc + 8);
        uStack_260 = *(undefined8 *)(local_208 + lVar25 * 0xc + 10);
        uStack_280 = *(undefined8 *)(local_208 + lVar25 * 0xc + 2);
        _local_288 = *(undefined8 *)(local_208 + lVar25 * 0xc);
        local_278 = (float)*(undefined8 *)(local_208 + lVar25 * 0xc + 4);
        fStack_274 = (float)((ulonglong)*(undefined8 *)(local_208 + lVar25 * 0xc + 4) >> 0x20);
        fStack_270 = (float)*(undefined8 *)(local_208 + lVar25 * 0xc + 6);
        fStack_26c = (float)((ulonglong)*(undefined8 *)(local_208 + lVar25 * 0xc + 6) >> 0x20);
        uVar22 = lVar25 * 0x10;
        auVar74 = *(undefined1 (*) [16])(auStack_248 + uVar22);
        local_2e0 = fVar86;
        local_2dc = fVar79;
        local_2d8 = fVar90;
        fStack_2d4 = fVar90;
        fStack_2d0 = fVar90;
        fStack_2cc = fVar90;
      }
      else {
        auVar74 = ZEXT816(0);
        local_2e0 = fVar86;
        local_2dc = fVar79;
        local_2d8 = fVar90;
        fStack_2d4 = fVar90;
        fStack_2d0 = fVar90;
        fStack_2cc = fVar90;
      }
LAB_140ea82a3:
      iVar20 = (int)uVar22;
      uVar26 = (uint)uVar19;
    }
    auVar32._0_4_ =
         auVar74._8_4_ * auVar74._8_4_ +
         auVar74._0_4_ * auVar74._0_4_ + auVar74._4_4_ * auVar74._4_4_;
    uVar29 = CONCAT71((int7)(uVar19 >> 8),auVar32._0_4_ < fVar86);
    if (auVar32._0_4_ < fVar86) goto LAB_140ea8bbe;
    auVar32._4_4_ = auVar32._0_4_;
    auVar32._8_4_ = auVar32._0_4_;
    auVar32._12_4_ = auVar32._0_4_;
    auVar43._4_4_ = -(uint)(auVar32._0_4_ < fVar90);
    auVar43._0_4_ = -(uint)(auVar32._0_4_ < fVar90);
    auVar43._8_4_ = -(uint)(auVar32._0_4_ < fVar90);
    auVar43._12_4_ = -(uint)(auVar32._0_4_ < fVar90);
    uVar21 = movmskps(iVar20,auVar43);
    if ((char)uVar21 == '\0') goto LAB_140ea8bbe;
    auVar44 = sqrtps(auVar43,auVar32);
    auVar44 = divps(auVar74,auVar44);
    iVar27 = iVar27 + 1;
    fVar90 = auVar32._0_4_;
  } while (iVar27 != 0x21);
  uVar29 = 0;
LAB_140ea8bbe:
  if ((local_f0 ^ (ulonglong)auStack_308) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar29;
}



// FUNCTION 140ea8ea0 FUN_140ea8ea0 body=185 status=ok
// SIG undefined FUN_140ea8ea0(void)

void FUN_140ea8ea0(longlong param_1,longlong *param_2)

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
  FUN_140ea8f5a(param_2,param_1 + 0x10);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea8f5a FUN_140ea8f5a body=267 status=ok
// SIG undefined FUN_140ea8f5a(void)

longlong * FUN_140ea8f5a(longlong *param_1,longlong *param_2)

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
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
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
      FUN_140ea921a(param_2);
    }
    FUN_140b1ea82(param_2,local_2c,1);
    if (0 < local_2c) {
      lVar3 = 0;
      lVar4 = 0;
      do {
        FUN_140ea9067(param_1,*param_2 + lVar3);
        lVar4 = lVar4 + 1;
        lVar3 = lVar3 + 0x20;
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



// FUNCTION 140ea9067 FUN_140ea9067 body=435 status=ok
// SIG undefined FUN_140ea9067(void)

longlong * FUN_140ea9067(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 1,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[1] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 2,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[2] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2 + 3,4);
    }
    else {
      thunk_FUN_14572512c(param_1);
    }
  }
  else {
    param_2[3] = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 4;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      thunk_FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 140ea921a FUN_140ea921a body=214 status=ok
// SIG undefined FUN_140ea921a(void)

void FUN_140ea921a(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (longlong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar1 < 0x7ff1) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)
                                        [((longlong)param_2 & 0x7ffffffffffffffU) * 2]];
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
    if (param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 140ea92f0 FUN_140ea92f0 body=196 status=ok
// SIG undefined FUN_140ea92f0(void)

void FUN_140ea92f0(longlong param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  longlong lVar1;
  undefined1 auStack_58 [32];
  void *local_38;
  int local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (void *)0x0;
  local_30 = *(int *)(param_2 + 1);
  lVar1 = (longlong)local_30;
  _Src = (void *)*param_2;
  if (lVar1 == 0) {
    local_2c = 0;
  }
  else {
    FUN_140ea945c(&local_38,local_30,0);
    _Dst = (void *)((longlong)&local_38 + ((longlong)local_38 >> 0x18));
    if (((ulonglong)local_38 & 1) == 0) {
      _Dst = local_38;
    }
    memcpy(_Dst,_Src,lVar1 * 2);
  }
  FUN_140ea93b6(param_1 + 0x28,&local_38);
  if (local_38 != (void *)0x0 && ((ulonglong)local_38 & 1) == 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea93b6 FUN_140ea93b6 body=61 status=ok
// SIG undefined FUN_140ea93b6(void)

ulonglong * FUN_140ea93b6(ulonglong *param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar2 = ((longlong)uVar1 >> 0x18) + (longlong)param_2;
    if ((uVar1 & 1) == 0) {
      uVar2 = uVar1;
    }
    FUN_140ea93f4(param_1,uVar2,(int)param_2[1],*(undefined4 *)((longlong)param_1 + 0xc));
  }
  return param_1;
}



// FUNCTION 140ea93f4 FUN_140ea93f4 body=104 status=ok
// SIG undefined FUN_140ea93f4(void)

void FUN_140ea93f4(ulonglong *param_1,void *param_2,int param_3,int param_4)

{
  void *_Dst;
  
  *(int *)(param_1 + 1) = param_3;
  if (param_4 == 0 && param_3 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140ea945c(param_1,param_3,param_4);
    _Dst = (void *)*param_1;
    if (((ulonglong)_Dst & 1) != 0) {
      _Dst = (void *)((longlong)param_1 + ((longlong)_Dst >> 0x18));
    }
    if (param_3 != 0) {
      memcpy(_Dst,param_2,(longlong)param_3 * 2);
      return;
    }
  }
  return;
}



// FUNCTION 140ea945c FUN_140ea945c body=350 status=ok
// SIG undefined FUN_140ea945c(void)

void FUN_140ea945c(ulonglong *param_1,uint param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if (param_2 == 0) {
    uVar8 = 0;
    goto LAB_140ea94d6;
  }
  uVar8 = (ulonglong)param_2;
  uVar3 = (longlong)(int)param_2 * 2;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar5 = uVar3 + 0xf;
      if (0x7ff0 < uVar3) {
        uVar4 = uVar5 & 0xfffffffffffffff0;
        if (uVar4 < 0x7ff1) goto LAB_140ea9554;
        goto LAB_140ea9523;
      }
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 >> 4]];
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,2);
    }
  }
LAB_140ea94c9:
  do {
    iVar6 = (int)uVar8;
    uVar8 = 0x7fffffff;
    if (iVar6 <= (int)(uVar3 >> 1)) {
      uVar8 = uVar3 >> 1 & 0xffffffff;
    }
LAB_140ea94d6:
    iVar7 = (int)uVar8;
    iVar6 = param_3;
    if (iVar7 <= param_3) goto LAB_140ea9508;
    uVar3 = *param_1;
    if ((uVar3 & 1) == 0) {
      iVar6 = iVar7;
      if (iVar7 < 1 && uVar3 == 0) goto LAB_140ea9508;
      if (-1 < iVar7) {
        uVar8 = FUN_14001fdce(uVar3,iVar7 * 2,2);
        *param_1 = uVar8;
LAB_140ea9508:
        *(int *)((longlong)param_1 + 0xc) = iVar6;
        return;
      }
    }
    else {
      param_3 = 0;
      iVar6 = param_3;
      if (iVar7 == 0) goto LAB_140ea9508;
    }
    uVar5 = 0;
    uVar4 = uVar8;
    FUN_1467ac767();
LAB_140ea9554:
    bVar2 = (&DAT_14c841e00)[uVar5 >> 4];
    uVar5 = 0x32;
    if (0x32 < bVar2) {
      uVar5 = (ulonglong)bVar2;
    }
    uVar9 = 0x32 - (ulonglong)bVar2;
    do {
      uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar9 & 0xffffffff] & 0xf) == 0) goto LAB_140ea94c9;
      lVar1 = uVar5 + 1 + uVar9;
      uVar9 = uVar9 - 1;
    } while (lVar1 != 0x33);
LAB_140ea9523:
    uVar3 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar3 = (ulonglong)DAT_14c841df8;
    }
    uVar3 = -uVar3 & (uVar4 + uVar3) - 1;
  } while( true );
}



// FUNCTION 140ea95ba FUN_140ea95ba body=76 status=ok
// SIG undefined FUN_140ea95ba(void)

undefined8 FUN_140ea95ba(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = FUN_140ea9606(param_2);
  if ((lVar1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40), UNRECOVERED_JUMPTABLE != (code *)0x0)) {
    plVar2 = (longlong *)(lVar1 + 0x60);
    if (*(longlong **)(lVar1 + 0x50) != (longlong *)0x0) {
      plVar2 = *(longlong **)(lVar1 + 0x50);
    }
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
                    /* WARNING: Could not recover jumptable at 0x000140ea95fb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
    return uVar3;
  }
  return 0;
}



// FUNCTION 140ea9606 FUN_140ea9606 body=191 status=ok
// SIG undefined FUN_140ea9606(void)

longlong FUN_140ea9606(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  uint uVar6;
  undefined *puVar7;
  
  FUN_140ea96c6();
  lVar3 = *param_1;
  if (DAT_14cb704e0 != DAT_14cb7050c) {
    uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar6 = (uint)lVar3 & 0xffff;
    puVar7 = &DAT_14cb70510;
    if (DAT_14cb70518 != (undefined *)0x0) {
      puVar7 = DAT_14cb70518;
    }
    iVar2 = *(int *)(puVar7 + (ulonglong)
                              (DAT_14cb70520 - 1U &
                              (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                              (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
    while (iVar2 != -1) {
      plVar1 = (longlong *)(DAT_14cb704d8 + (longlong)iVar2 * 0x18);
      if (*plVar1 == lVar3) {
        if (plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) {
          return plVar1[1];
        }
        break;
      }
      iVar2 = (int)plVar1[2];
    }
  }
  lVar5 = DAT_14cb704d0;
  if (lVar3 != 0) {
    lVar5 = 0;
  }
  return lVar5;
}



// FUNCTION 140ea96c6 FUN_140ea96c6 body=152 status=ok
// SIG undefined FUN_140ea96c6(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140ea96c6(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cb70528) {
    FUN_144b3d300(&DAT_14cb70528);
    if (DAT_14cb70528 == -1) {
      DAT_14cb704f8 = 0;
      DAT_14cb70500 = 0;
      DAT_14cb704d8 = 0;
      _DAT_14cb704e0 = 0;
      _DAT_14cb70504 = 0xffffffff00000080;
      DAT_14cb7050c = 0;
      DAT_14cb70518 = 0;
      DAT_14cb70520 = 0;
      atexit(FUN_143c8de5f);
      _Init_thread_footer(&DAT_14cb70528);
      return;
    }
  }
  return;
}



// FUNCTION 140ea975e FUN_140ea975e body=88 status=ok
// SIG undefined FUN_140ea975e(void)

void FUN_140ea975e(undefined8 param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined8 local_38;
  undefined **local_28;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  local_28 = &PTR_LAB_14b9a2ca0;
  local_48 = &LAB_14423b91a;
  FUN_140ea97b8(*param_2);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea97b8 FUN_140ea97b8 body=385 status=ok
// SIG undefined FUN_140ea97b8(void)

void FUN_140ea97b8(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_88 [44];
  undefined4 local_5c;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  iVar8 = *(int *)(param_1 + 0x30);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  local_50 = iVar8;
  if (iVar8 == 0) {
    local_4c = 0;
    iVar8 = 0;
  }
  else {
    FUN_140ea9e16(&local_58,iVar8,0);
    FUN_140ea993a(local_58,uVar6,iVar8);
    lVar4 = local_58;
    lVar10 = (longlong)local_50;
    iVar8 = 0;
    if (lVar10 != 0) {
      lVar9 = 0;
      do {
        lVar2 = *(longlong *)(lVar4 + lVar9);
        iVar8 = *(int *)(lVar2 + 0x74);
        if ((((iVar8 != 0) && (uVar1 = *(uint *)(lVar2 + 0x70), -1 < (int)uVar1)) &&
            ((int)uVar1 < DAT_14c9647dc)) &&
           (((plVar7 = (longlong *)
                       ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
             plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar8)) &&
            (((*(uint *)(plVar7 + 1) & 0x10200000) == 0 && (lVar2 = *plVar7, lVar2 != 0)))))) {
          pcVar3 = (code *)*param_2;
          plVar7 = (longlong *)param_2[2];
          if ((longlong *)param_2[2] == (longlong *)0x0) {
            plVar7 = param_2 + 4;
          }
          uVar6 = (**(code **)(*plVar7 + 8))();
          cVar5 = (*pcVar3)(uVar6,lVar2);
          if (cVar5 == '\x01') {
            local_5c = 1;
            FUN_140ea9968(*(undefined8 *)(lVar4 + lVar9),&local_5c);
          }
        }
        lVar9 = lVar9 + 0x10;
        iVar8 = local_50;
      } while (lVar10 * 0x10 != lVar9);
    }
  }
  FUN_140cf8141(local_58,iVar8);
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if (*param_2 != 0) {
    plVar7 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_2[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140ea993a FUN_140ea993a body=45 status=ok
// SIG undefined FUN_140ea993a(void)

void FUN_140ea993a(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_3 != 0) {
    lVar2 = 0;
    do {
      *(undefined8 *)(param_1 + lVar2) = *(undefined8 *)(param_2 + lVar2);
      lVar1 = *(longlong *)(param_2 + 8 + lVar2);
      *(longlong *)(param_1 + 8 + lVar2) = lVar1;
      if (lVar1 != 0) {
        LOCK();
        *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
        UNLOCK();
      }
      lVar2 = lVar2 + 0x10;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 140ea9968 FUN_140ea9968 body=97 status=ok
// SIG undefined FUN_140ea9968(void)

undefined4 FUN_140ea9968(longlong *param_1,byte *param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  uVar3 = (**(code **)(*param_1 + 0x70))();
  if (((*param_2 & 1) != 0) && (lVar2 = param_1[0x11], (longlong)(int)lVar2 != 0)) {
    lVar1 = param_1[0x10];
    lVar4 = 0;
    do {
      (**(code **)(**(longlong **)(lVar1 + lVar4) + 0x20))();
      lVar4 = lVar4 + 0x10;
    } while ((longlong)(int)lVar2 * 0x10 != lVar4);
  }
  FUN_140ce80dc(param_1);
  return uVar3;
}



// FUNCTION 140ea99ca FUN_140ea99ca body=93 status=ok
// SIG undefined FUN_140ea99ca(void)

undefined8 FUN_140ea99ca(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_140ea9a28();
  *(undefined4 *)(param_1 + 0x160) = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_140ea9efa(param_1 + 0x158,0);
    iVar2 = *(int *)(param_1 + 0x160);
  }
  if (iVar2 != iVar1) {
    FUN_140c5ef80(param_1,iVar2,iVar1);
  }
  return 0;
}



// FUNCTION 140ea9a28 FUN_140ea9a28 body=145 status=ok
// SIG undefined FUN_140ea9a28(void)

void FUN_140ea9a28(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined **local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_140c5fc30(param_1,*(undefined4 *)(lVar1 + 4 + lVar3));
      lVar3 = lVar3 + 0x14;
    } while ((longlong)(int)lVar2 * 0x14 != lVar3);
  }
  local_38 = param_1 + 0x158;
  local_40 = &PTR_FUN_14b42f360;
  local_30 = 0;
  FUN_140c5fd14(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea9aba FUN_140ea9aba body=93 status=ok
// SIG undefined FUN_140ea9aba(void)

undefined8 FUN_140ea9aba(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  FUN_140ea9d84();
  *(undefined4 *)(param_1 + 0x160) = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x164) != 0) {
    FUN_140ea9f6c(param_1 + 0x158,0);
    iVar2 = *(int *)(param_1 + 0x160);
  }
  if (iVar2 != iVar1) {
    FUN_140c5ef80(param_1,iVar2,iVar1);
  }
  return 0;
}



// FUNCTION 140ea9b18 FUN_140ea9b18 body=157 status=ok
// SIG undefined FUN_140ea9b18(void)

void FUN_140ea9b18(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined4)param_1[0x13];
  local_28 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_140ea9bfb(param_1[0x12],(int)param_1[0x13]);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_1457bfcc4(param_1 + 0x12,0);
  }
  FUN_140ea9bb6(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea9bb6 FUN_140ea9bb6 body=68 status=ok
// SIG undefined FUN_140ea9bb6(void)

void FUN_140ea9bb6(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)*param_1;
  if ((int)plVar1[0x13] == (int)param_1[1]) {
    return;
  }
  (**(code **)(*plVar1 + 200))(plVar1);
  FUN_140c5f00a(plVar1);
  FUN_140ce80dc(*(undefined8 *)(*param_1 + 0x38));
  return;
}



// FUNCTION 140ea9bfb FUN_140ea9bfb body=121 status=ok
// SIG undefined FUN_140ea9bfb(void)

void FUN_140ea9bfb(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x38);
    do {
      plVar1[-2] = (longlong)&DAT_14a171d50;
      *(undefined4 *)(plVar1 + 1) = 0;
      if (*(int *)((longlong)plVar1 + 0xc) != 0) {
        FUN_140115c12(plVar1,0);
      }
      plVar1[-1] = 0;
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (*(char *)((longlong)plVar1 + -0x24) == '\x01') {
        *(undefined1 *)((longlong)plVar1 + -0x24) = 0;
      }
      if (*(int *)((longlong)plVar1 + -0x34) != -1) {
        *(undefined8 *)((longlong)plVar1 + -0x34) = 0xffffffff;
      }
      plVar1 = plVar1 + 9;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ea9c74 FUN_140ea9c74 body=163 status=ok
// SIG undefined FUN_140ea9c74(void)

void FUN_140ea9c74(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*(longlong *)(param_1 + 0xb8) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) &&
      (0 < *(int *)(*(longlong *)(param_1 + 0xc0) + 8))) &&
     ((longlong)*(int *)(param_1 + 0xa8) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar1 = (longlong)*(int *)(param_1 + 0xa8) * 0x48;
    do {
      FUN_14092557a(param_1,lVar2,0);
      lVar2 = lVar2 + 0x48;
      lVar1 = lVar1 + -0x48;
    } while (lVar1 != 0);
  }
  FUN_140ea9d17(*(undefined8 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa8));
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if (*(int *)(param_1 + 0xac) != 0) {
    FUN_1457bfd36(param_1 + 0xa0,0);
  }
  *(undefined8 *)(param_1 + 0xb0) = 0;
  return;
}



// FUNCTION 140ea9d17 FUN_140ea9d17 body=108 status=ok
// SIG undefined FUN_140ea9d17(void)

void FUN_140ea9d17(longlong param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  char *pcVar4;
  
  if (param_2 != 0) {
    pcVar4 = (char *)(param_1 + 0x44);
    do {
      if (*pcVar4 == '\x01') {
        *pcVar4 = '\0';
      }
      FUN_140925481(*(undefined8 *)(pcVar4 + -0x14),*(undefined4 *)(pcVar4 + -0xc));
      if (*(longlong *)(pcVar4 + -0x14) != 0) {
        FUN_1400020a8();
      }
      plVar3 = *(longlong **)(pcVar4 + -0x1c);
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
      pcVar4 = pcVar4 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ea9d84 FUN_140ea9d84 body=145 status=ok
// SIG undefined FUN_140ea9d84(void)

void FUN_140ea9d84(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_68 [40];
  undefined **local_40;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar2 = param_2[1];
  if ((longlong)(int)lVar2 != 0) {
    lVar1 = *param_2;
    lVar3 = 0;
    do {
      FUN_140f291e2(param_1,*(undefined4 *)(lVar1 + 4 + lVar3));
      lVar3 = lVar3 + 0xc;
    } while ((longlong)(int)lVar2 * 0xc != lVar3);
  }
  local_38 = param_1 + 0x158;
  local_40 = &PTR_FUN_14b42ef90;
  local_30 = 0;
  FUN_140c5fd14(param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140ea9e16 FUN_140ea9e16 body=228 status=ok
// SIG undefined FUN_140ea9e16(void)

void FUN_140ea9e16(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  
  if (param_2 == 0) {
    iVar4 = 0;
  }
  else {
    uVar2 = (longlong)param_2 * 0x10;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar2 < 0x7ff1) {
          uVar2 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(longlong)param_2 & 0xfffffffffffffff]];
        }
        else {
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar2 = -uVar3 & (uVar2 + uVar3) - 1;
        }
      }
      else {
        uVar2 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar2,8);
      }
    }
    iVar1 = (int)(uVar2 >> 4);
    iVar4 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar4 = iVar1;
    }
  }
  if (param_3 < iVar4) {
    FUN_1446f8d3c(param_1,0,iVar4,0x10,8);
    param_3 = iVar4;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140ea9efa FUN_140ea9efa body=113 status=ok
// SIG undefined FUN_140ea9efa(void)

void FUN_140ea9efa(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x14,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x14)) {
      uVar2 = uVar1 / 0x14 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x14,4);
  }
  return;
}



// FUNCTION 140ea9f6c FUN_140ea9f6c body=113 status=ok
// SIG undefined FUN_140ea9f6c(void)

void FUN_140ea9f6c(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0xc,4);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0xc,4);
  }
  return;
}



// FUNCTION 140ea9fde FUN_140ea9fde body=153 status=ok
// SIG undefined FUN_140ea9fde(void)

void FUN_140ea9fde(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong *local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = (undefined4)param_1[0x13];
  local_28 = param_1;
  (**(code **)(*param_1 + 0xb0))();
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  FUN_14024cf2e(param_1[0x12],(int)param_1[0x13]);
  *(undefined4 *)(param_1 + 0x13) = 0;
  if (*(int *)((longlong)param_1 + 0x9c) != 0) {
    FUN_140eaa07e(param_1 + 0x12);
  }
  FUN_140ce8090(&local_28);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eaa07e FUN_140eaa07e body=48 status=ok
// SIG undefined FUN_140eaa07e(void)

void FUN_140eaa07e(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x28,8);
  }
  return;
}



// FUNCTION 140eaa20a FUN_140eaa20a body=256 status=ok
// SIG undefined FUN_140eaa20a(void)

void FUN_140eaa20a(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  longlong *plVar7;
  bool bVar8;
  undefined1 auStack_58 [40];
  undefined1 local_30;
  undefined7 uStack_2f;
  longlong *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar6 = (**(code **)(*(longlong *)*param_1 + 8))();
  FUN_140ce87a4(&local_30,uVar6);
  if (local_28 != (longlong *)0x0) {
    iVar5 = (int)local_28[1];
    do {
      if (iVar5 == 0) {
        plVar7 = (longlong *)0x0;
        break;
      }
      LOCK();
      iVar4 = (int)local_28[1];
      bVar8 = iVar5 == iVar4;
      if (bVar8) {
        *(int *)(local_28 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      plVar7 = local_28;
    } while (!bVar8);
    LOCK();
    piVar1 = (int *)((longlong)local_28 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_28 + 0x10))();
    }
    if (plVar7 != (longlong *)0x0) {
      lVar3 = CONCAT71(uStack_2f,local_30);
      if (lVar3 != 0) {
        local_30 = 2;
        local_28 = (longlong *)*param_1;
        plVar2 = (longlong *)param_1[1];
        local_20 = plVar2;
        if (plVar2 == (longlong *)0x0) {
          FUN_140ce8b54(lVar3,&local_30);
        }
        else {
          LOCK();
          *(int *)((longlong)plVar2 + 0xc) = *(int *)((longlong)plVar2 + 0xc) + 1;
          UNLOCK();
          FUN_140ce8b54();
          if (plVar2 != (longlong *)0x0) {
            LOCK();
            piVar1 = (int *)((longlong)plVar2 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar2 + 0x10))(plVar2);
            }
          }
        }
      }
      LOCK();
      plVar2 = plVar7 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar7)(plVar7);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eaa30c FUN_140eaa30c body=107 status=ok
// SIG undefined FUN_140eaa30c(void)

ulonglong FUN_140eaa30c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  undefined8 unaff_RDI;
  ulonglong uVar7;
  bool bVar8;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_140eaa35a:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140eaa35a;
      LOCK();
      iVar5 = (int)plVar3[1];
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        *(int *)(plVar3 + 1) = iVar6 + 1;
        iVar5 = iVar6;
      }
      iVar6 = iVar5;
      UNLOCK();
    } while (!bVar8);
    lVar4 = *(longlong *)(param_1 + 0x18);
    uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),lVar4 != 0);
    if (lVar4 != 0) {
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30),*(undefined1 *)(param_1 + 8));
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
        (**(code **)(*plVar3 + 0x10))(plVar3);
      }
    }
  }
  return uVar7 & 0xffffffff;
}



// FUNCTION 140eaa38c FUN_140eaa38c body=143 status=ok
// SIG undefined FUN_140eaa38c(void)

undefined8 * FUN_140eaa38c(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
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



// FUNCTION 140eaa41c FUN_140eaa41c body=1758 status=ok
// SIG undefined FUN_140eaa41c(void)

void FUN_140eaa41c(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  longlong lVar12;
  undefined *puVar13;
  int iVar14;
  longlong *plVar15;
  longlong lVar16;
  longlong lVar17;
  bool bVar18;
  undefined1 auStack_b8 [32];
  char *local_98;
  longlong *local_90;
  byte local_88;
  longlong *local_80;
  int local_78;
  char local_70;
  undefined7 uStack_6f;
  longlong *local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined1 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  FUN_14066e964();
  plVar5 = (longlong *)param_1[9];
  cVar7 = (**(code **)(*plVar5 + 0x18))(plVar5);
  if (cVar7 == '\0') goto LAB_140eaa77a;
  bVar8 = (**(code **)(*param_1 + 0x28))(param_1);
  lVar16 = param_1[8];
  if (lVar16 == 0) {
    lVar12 = 0;
    local_68 = (longlong *)0x0;
LAB_140eaa93a:
    local_60 = (longlong *)0x0;
    bVar6 = true;
  }
  else {
    if (*(int *)(lVar16 + 0x4c) == 0) {
LAB_140eaa852:
      lVar12 = 0;
    }
    else {
      uVar4 = *(uint *)(lVar16 + 0x48);
      lVar12 = 0;
      if ((-1 < (int)uVar4) && ((int)uVar4 < DAT_14c9647dc)) {
        plVar15 = (longlong *)
                  ((ulonglong)((uVar4 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8));
        if ((plVar15 == (longlong *)0x0) ||
           (((int)plVar15[2] != *(int *)(lVar16 + 0x4c) ||
            ((*(uint *)(plVar15 + 1) & 0x10200000) != 0)))) goto LAB_140eaa852;
        lVar12 = *plVar15;
      }
    }
    plVar15 = *(longlong **)(lVar16 + 0x118);
    local_68 = param_1;
    if (plVar15 == (longlong *)0x0) goto LAB_140eaa93a;
    LOCK();
    *(int *)(plVar15 + 1) = (int)plVar15[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
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
    LOCK();
    *(int *)((longlong)plVar15 + 0xc) = *(int *)((longlong)plVar15 + 0xc) + 1;
    UNLOCK();
    bVar6 = false;
    local_60 = plVar15;
  }
  plVar15 = local_60;
  local_48 = 0;
  local_70 = '\x03';
  local_58._0_4_ = 0;
  if (lVar12 == 0) {
    iVar9 = 0;
    uVar4 = (uint)local_58;
  }
  else {
    uVar4 = *(uint *)(lVar12 + 0xc);
    local_58 = (ulonglong)uVar4;
    if ((int)uVar4 < DAT_14c9647dc) {
      lVar16 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
    }
    else {
      lVar16 = 0;
    }
    iVar9 = *(int *)(lVar16 + 0x10);
    if (*(int *)(lVar16 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      iVar10 = DAT_14c964868 + 1;
      bVar18 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar18) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar10);
      }
      LOCK();
      iVar9 = *(int *)(lVar16 + 0x10);
      bVar18 = iVar9 == 0;
      if (bVar18) {
        *(int *)(lVar16 + 0x10) = iVar10;
        iVar9 = 0;
      }
      UNLOCK();
      uVar4 = (uint)local_58;
      if (bVar18) {
        iVar9 = iVar10;
      }
    }
  }
  local_58._0_4_ = uVar4;
  local_58 = CONCAT44(iVar9,(uint)local_58);
  local_50 = 2;
  if (local_48 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_48 + -1,1);
    local_48 = 0;
  }
  plVar1 = param_1 + 0x1b;
  if (!bVar6) {
    LOCK();
    piVar2 = (int *)((longlong)plVar15 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar15 + 0x10))(plVar15);
    }
  }
  uVar3 = *(undefined1 *)((longlong)plVar5 + 0x331);
  uVar11 = FUN_140343d7a(param_1);
  local_98 = &local_70;
  local_90 = plVar5 + 0x5f;
  local_88 = bVar8 ^ 1;
  FUN_140a4089e(plVar1,uVar11,plVar5 + 0x10,
                CONCAT71((int7)((ulonglong)plVar15 >> 8),uVar3) & 0xffffffff);
  lVar16 = DAT_14c9a3da0;
  if ((longlong)local_48 != 0) {
    lVar12 = (longlong)local_48 + -1;
    lVar17 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                  *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
    if (*(longlong *)(lVar16 + lVar17) != 0) {
      FUN_1400020a8();
    }
    lVar16 = DAT_14c9a3da0;
    iVar9 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar9;
    }
    *(undefined4 *)(lVar16 + lVar17) = 0xffffffff;
    iVar10 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar10 = DAT_14c9a3dd0;
    }
    *(int *)(lVar16 + 4 + lVar17) = iVar10;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar13 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar13 = DAT_14c9a3dc0;
    }
    iVar10 = iVar9 + 0x1f;
    if (-1 < iVar9) {
      iVar10 = iVar9;
    }
    bVar8 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar9;
    *(uint *)(puVar13 + (longlong)(iVar10 >> 5) * 4) =
         *(uint *)(puVar13 + (longlong)(iVar10 >> 5) * 4) &
         (-2 << bVar8 | 0xfffffffeU >> 0x20 - bVar8);
    local_48 = 0;
  }
  if ((local_70 == '\x03') && (local_60 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_60 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  local_80 = (longlong *)0x0;
  local_78 = 0;
  FUN_1446efa72(&local_80,0,3,0x10);
  plVar5 = local_80;
  local_78 = 3;
  FUN_14045cb56(param_1,&local_70);
  plVar15 = local_68;
  if (local_68 == (longlong *)0x0) {
    *plVar5 = (longlong)&PTR_LAB_14a1c85c0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    plVar5[2] = lVar12;
    *plVar5 = (longlong)&PTR_FUN_14ac8ac60;
    plVar5[3] = CONCAT71(uStack_6f,local_70);
    plVar5[4] = 0;
    plVar5[5] = (longlong)FUN_14061a148;
  }
  else {
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    LOCK();
    *(int *)(local_68 + 1) = (int)local_68[1] + 1;
    UNLOCK();
    *plVar5 = (longlong)&PTR_LAB_14a1c85c0;
    LOCK();
    UNLOCK();
    lVar12 = DAT_14c758608 + 1;
    lVar16 = DAT_14c758608 + 1;
    if (lVar12 == 0) {
      LOCK();
      UNLOCK();
      lVar12 = DAT_14c758608 + 2;
      lVar16 = DAT_14c758608 + 2;
    }
    DAT_14c758608 = lVar16;
    plVar5[2] = lVar12;
    *plVar5 = (longlong)&PTR_FUN_14ac8ac60;
    plVar5[3] = CONCAT71(uStack_6f,local_70);
    plVar5[4] = (longlong)local_68;
    LOCK();
    *(int *)((longlong)local_68 + 0xc) = *(int *)((longlong)local_68 + 0xc) + 1;
    UNLOCK();
    plVar5[5] = (longlong)FUN_14061a148;
    LOCK();
    plVar5 = local_68 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar15 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar15 + 0x10))(plVar15);
      }
    }
    LOCK();
    plVar5 = plVar15 + 1;
    *(int *)plVar5 = (int)*plVar5 + -1;
    UNLOCK();
    if ((int)*plVar5 == 0) {
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
  plVar5 = local_68;
  if (local_68 != (longlong *)0x0) {
    LOCK();
    plVar15 = local_68 + 1;
    *(int *)plVar15 = (int)*plVar15 + -1;
    UNLOCK();
    if ((int)*plVar15 == 0) {
      (**(code **)*local_68)(local_68);
      LOCK();
      piVar2 = (int *)((longlong)plVar5 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar5 + 0x10))(plVar5);
      }
    }
  }
  if (((local_78 == 0) || (local_80 == (longlong *)0x0)) ||
     (cVar7 = (**(code **)(*local_80 + 0x30))(), cVar7 == '\0')) {
    if (local_78 != 0) {
      if (local_80 == (longlong *)0x0) goto LAB_140eaa77a;
      (**(code **)*local_80)(local_80,0);
      FUN_1446efa72(&local_80,0,0,0x10);
      goto LAB_140eaa764;
    }
  }
  else {
    if (*(int *)((longlong)param_1 + 0xec) < 1) {
      iVar9 = (int)param_1[0x1c];
      iVar10 = (int)param_1[0x1d] + -1;
      *(int *)(param_1 + 0x1d) = iVar10;
      if (iVar10 <= iVar9) {
        iVar10 = iVar9;
        if (0 < iVar9) {
          iVar14 = 0;
          do {
            if (((*(int *)(*plVar1 + 8 + (longlong)iVar14 * 0x10) == 0) ||
                (plVar5 = *(longlong **)(*plVar1 + (longlong)iVar14 * 0x10),
                plVar5 == (longlong *)0x0)) ||
               (cVar7 = (**(code **)(*plVar5 + 0x28))(), cVar7 != '\0')) {
              FUN_14005b288(plVar1,iVar14);
              FUN_14005b248(plVar1);
            }
            else {
              iVar14 = iVar14 + 1;
            }
            iVar10 = (int)param_1[0x1c];
          } while (iVar14 < iVar10);
        }
        iVar14 = 2;
        if (2 < iVar10 * 2) {
          iVar14 = iVar10 * 2;
        }
        *(int *)(param_1 + 0x1d) = iVar14;
        if ((iVar14 < iVar9) && (*(int *)((longlong)param_1 + 0xe4) != iVar10)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_78 != 0) && (local_80 != (longlong *)0x0)) {
      (**(code **)(*local_80 + 0x38))(local_80,&local_70);
    }
    iVar9 = (int)param_1[0x1c];
    *(uint *)(param_1 + 0x1c) = iVar9 + 1U;
    if (*(uint *)((longlong)param_1 + 0xe4) < iVar9 + 1U) {
      FUN_1447a71f6(plVar1,iVar9);
    }
    lVar16 = *plVar1;
    lVar12 = (longlong)iVar9 * 0x10;
    *(undefined8 *)(lVar16 + lVar12) = 0;
    *(undefined4 *)(lVar16 + 8 + lVar12) = 0;
    *(longlong **)(lVar16 + lVar12) = local_80;
    local_80 = (longlong *)0x0;
    *(int *)(lVar16 + 8 + lVar12) = local_78;
LAB_140eaa764:
    local_78 = 0;
  }
  if (local_80 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140eaa77a:
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140eaab24 FUN_140eaab24 body=431 status=ok
// SIG undefined FUN_140eaab24(void)

ulonglong FUN_140eaab24(longlong param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  bool bVar12;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  undefined7 uVar11;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar4 = FUN_144a746c6();
  if (cVar4 == '\0') {
    uVar10 = 0;
  }
  else {
    lVar6 = *(longlong *)(param_1 + 0xb0);
    if ((lVar6 == 0) && (lVar6 = FUN_1448abda6(param_1), lVar6 == 0)) {
      uVar10 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    }
    else {
      uVar2 = DAT_14cb1c840;
      if (DAT_14c9a7d10 == (undefined8 *)0x0) {
        DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
        *DAT_14c9a7d10 = 0;
        DAT_14c9a7d10[1] = 0;
        DAT_14c9a7d10[2] = 0;
        DAT_14c9a7d10[3] = 0;
      }
      FUN_14005915a(DAT_14c9a7d10,&local_38,uVar2,lVar6);
      plVar8 = local_30;
      if ((local_38 == 0) || (local_30 == (longlong *)0x0)) {
        plVar8 = (longlong *)0x0;
      }
      else {
        LOCK();
        *(int *)(local_30 + 1) = (int)local_30[1] + 1;
        UNLOCK();
        LOCK();
        *(int *)((longlong)local_30 + 0xc) = *(int *)((longlong)local_30 + 0xc) + 1;
        UNLOCK();
        LOCK();
        plVar7 = local_30 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)plVar8 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
      if (local_30 != (longlong *)0x0) {
        LOCK();
        plVar7 = local_30 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
          (**(code **)*local_30)(local_30);
          LOCK();
          piVar1 = (int *)((longlong)local_30 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
          }
        }
      }
      uVar11 = (undefined7)((ulonglong)local_30 >> 8);
      uVar10 = CONCAT71(uVar11,1);
      if (plVar8 != (longlong *)0x0) {
        iVar5 = (int)plVar8[1];
        do {
          plVar7 = (longlong *)0x0;
          if (iVar5 == 0) break;
          LOCK();
          iVar3 = (int)plVar8[1];
          bVar12 = iVar5 == iVar3;
          if (bVar12) {
            *(int *)(plVar8 + 1) = iVar5 + 1;
            iVar3 = iVar5;
          }
          iVar5 = iVar3;
          UNLOCK();
          plVar7 = plVar8;
        } while (!bVar12);
        LOCK();
        piVar1 = (int *)((longlong)plVar8 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar8 + 0x10))(plVar8);
        }
        if (plVar7 != (longlong *)0x0) {
          uVar9 = 1;
          if (local_38 != 0) {
            uVar9 = *(undefined1 *)(local_38 + 0x4e8);
          }
          uVar10 = CONCAT71(uVar11,uVar9);
          LOCK();
          plVar8 = plVar7 + 1;
          *(int *)plVar8 = (int)*plVar8 + -1;
          UNLOCK();
          if ((int)*plVar8 == 0) {
            (**(code **)*plVar7)(plVar7);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 140eaacda FUN_140eaacda body=57 status=ok
// SIG undefined FUN_140eaacda(void)

void FUN_140eaacda(void)

{
  undefined8 uVar1;
  
  if (DAT_14cba0d10 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cba0d10 = FUN_140002ddd(FUN_1465ac2bf,uVar1,L"GbxBrainAspect_CloakOverride");
  }
  return;
}



// FUNCTION 140eaad14 FUN_140eaad14 body=40 status=ok
// SIG undefined FUN_140eaad14(void)

undefined8 FUN_140eaad14(undefined8 param_1,int param_2)

{
  FUN_140eaad3c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140eaad3c FUN_140eaad3c body=491 status=ok
// SIG undefined FUN_140eaad3c(void)

void FUN_140eaad3c(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0dbb30;
  plVar1 = param_1 + 0x3e;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x42) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x41)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x41)) {
    FUN_1400020a8(*plVar1);
  }
  plVar1 = param_1 + 0x37;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x3b) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x3a)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x3a)) {
    FUN_1400020a8(*plVar1);
  }
  *param_1 = &PTR_FUN_14ac52c60;
  param_1[0x10] = &PTR_FUN_14ac52cf0;
  if (param_1[0x31] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2f] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x27] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x25] != 0) {
    FUN_1400020a8();
  }
  FUN_14076bd02(param_1 + 0x10);
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



// FUNCTION 140eaaf27 FUN_140eaaf27 body=49 status=ok
// SIG undefined FUN_140eaaf27(void)

longlong FUN_140eaaf27(void)

{
  if (DAT_14cab68d0 == 0) {
    FUN_140f50038(&DAT_14cab68d0,&PTR_s__Script_UMG_14a4edf58);
  }
  return DAT_14cab68d0;
}



// FUNCTION 140eaaf58 FUN_140eaaf58 body=84 status=ok
// SIG undefined FUN_140eaaf58(void)

void FUN_140eaaf58(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined1 auStack_48 [40];
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = param_3;
  FUN_140eaafae(&local_20,param_1 + 8);
  if (*(char *)(param_1 + 0x70) == '\x01') {
    *param_4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eaafae FUN_140eaafae body=779 status=ok
// SIG undefined FUN_140eaafae(void)

void FUN_140eaafae(longlong *param_1,ushort *param_2)

{
  uint *puVar1;
  ushort uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((char)param_2[1] == '\x01') {
    lVar4 = *param_1;
    uVar2 = *param_2;
    iVar6 = uVar2 + 1;
    iVar3 = *(int *)(lVar4 + 0x20);
    iVar8 = iVar6 - iVar3;
    if (iVar8 != 0 && iVar3 <= iVar6) {
      if (iVar3 == 0) {
LAB_140eab005:
        if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
          *(undefined4 *)(lVar4 + 0x24) = 0x100;
          FUN_14497ddce(lVar4,iVar3);
          iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
        }
        iVar7 = iVar6 + 0x1f;
        if (-1 < iVar6) {
          iVar7 = iVar6;
        }
        *(int *)(lVar4 + 0x20) = iVar6;
        if (iVar6 % 0x20 != 0) {
          bVar5 = -(char)(iVar6 % 0x20);
          *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
               (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
               (bVar5 & 0x1f);
        }
      }
      else {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140eab005;
        *(int *)(lVar4 + 0x20) = iVar6;
      }
      FUN_1447c45ca(lVar4,iVar3,iVar8,0);
    }
    puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  lVar4 = *param_1;
  uVar2 = param_2[0xc];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140eab091:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140eab091;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x18];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 != 0 && iVar3 <= iVar6) {
    if (iVar3 == 0) {
LAB_140eab123:
      if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
        *(undefined4 *)(lVar4 + 0x24) = 0x100;
        FUN_14497ddce(lVar4,iVar3);
        iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
      }
      iVar7 = iVar6 + 0x1f;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      *(int *)(lVar4 + 0x20) = iVar6;
      if (iVar6 % 0x20 != 0) {
        bVar5 = -(char)(iVar6 % 0x20);
        *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
             (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >>
             (bVar5 & 0x1f);
      }
    }
    else {
      iVar7 = iVar3 + 0x1e;
      if (-1 < iVar3 + -1) {
        iVar7 = iVar3 + -1;
      }
      if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140eab123;
      *(int *)(lVar4 + 0x20) = iVar6;
    }
    FUN_1447c45ca(lVar4,iVar3,iVar8,0);
  }
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  lVar4 = *param_1;
  uVar2 = param_2[0x24];
  iVar6 = uVar2 + 1;
  iVar3 = *(int *)(lVar4 + 0x20);
  iVar8 = iVar6 - iVar3;
  if (iVar8 == 0 || iVar6 < iVar3) goto LAB_140eab1e7;
  if (iVar3 == 0) {
LAB_140eab1a7:
    if (*(int *)(lVar4 + 0x24) <= (int)(uint)uVar2) {
      *(undefined4 *)(lVar4 + 0x24) = 0x100;
      FUN_14497ddce(lVar4,iVar3);
      iVar6 = *(int *)(lVar4 + 0x20) + iVar8;
    }
    iVar7 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(lVar4 + 0x20) = iVar6;
    if (iVar6 % 0x20 != 0) {
      bVar5 = -(char)(iVar6 % 0x20);
      *(uint *)(lVar4 + (longlong)(iVar7 >> 5) * 4) =
           (uint)(*(int *)(lVar4 + (longlong)(iVar7 >> 5) * 4) << (bVar5 & 0x1f)) >> (bVar5 & 0x1f);
    }
  }
  else {
    iVar7 = iVar3 + 0x1e;
    if (-1 < iVar3 + -1) {
      iVar7 = iVar3 + -1;
    }
    if (iVar7 >> 5 != (uint)(uVar2 >> 5)) goto LAB_140eab1a7;
    *(int *)(lVar4 + 0x20) = iVar6;
  }
  FUN_1447c45ca(lVar4,iVar3,iVar8,0);
LAB_140eab1e7:
  puVar1 = (uint *)(lVar4 + (ulonglong)(uVar2 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  if ((char)param_2[0x31] != '\x01') {
    return;
  }
  FUN_140dba9e6(*param_1,param_2[0x30]);
  return;
}



// FUNCTION 140eab2ba FUN_140eab2ba body=1084 status=ok
// SIG undefined FUN_140eab2ba(void)

undefined8 FUN_140eab2ba(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  int iVar11;
  bool bVar12;
  undefined1 auStack_78 [32];
  longlong *local_58;
  int local_50;
  undefined1 local_48 [8];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140eab6f8();
  if (((((param_2[1] == 0) || (uVar1 = *param_2, (int)uVar1 < 0)) || (DAT_14c9647dc <= (int)uVar1))
      || ((plVar10 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar10 == (longlong *)0x0 || (*(uint *)(plVar10 + 2) != param_2[1])))) ||
     (((*(uint *)(plVar10 + 1) & 0x10200000) != 0 || (lVar3 = *plVar10, lVar3 == 0))))
  goto LAB_140eab543;
  lVar8 = FUN_1409059be();
  if ((*(int *)(*(longlong *)(lVar3 + 0x10) + 0x38) < *(int *)(lVar8 + 0x38)) ||
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) !=
      lVar8 + 0x30)) goto LAB_140eab543;
  uVar1 = *(uint *)(lVar3 + 0xc);
  if ((int)uVar1 < DAT_14c9647dc) {
    lVar8 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
  }
  else {
    lVar8 = 0;
  }
  iVar7 = *(int *)(lVar8 + 0x10);
  if (*(int *)(lVar8 + 0x10) == 0) {
    LOCK();
    iVar7 = DAT_14c964868 + 1;
    UNLOCK();
    iVar6 = DAT_14c964868 + 1;
    bVar12 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar7;
    if (bVar12) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    iVar6);
    }
    LOCK();
    iVar7 = *(int *)(lVar8 + 0x10);
    bVar12 = iVar7 == 0;
    if (bVar12) {
      *(int *)(lVar8 + 0x10) = iVar6;
      iVar7 = 0;
    }
    UNLOCK();
    if (bVar12) {
      iVar7 = iVar6;
    }
  }
  local_58 = (longlong *)0x0;
  local_50 = 0;
  FUN_1446efa72(&local_58,0,3,0x10);
  plVar10 = local_58;
  local_50 = 3;
  *local_58 = (longlong)&PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar9 = DAT_14c758608 + 1;
  lVar8 = DAT_14c758608 + 1;
  if (lVar9 == 0) {
    LOCK();
    UNLOCK();
    lVar9 = DAT_14c758608 + 2;
    lVar8 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar8;
  local_58[2] = lVar9;
  *local_58 = (longlong)&PTR_FUN_14be78e60;
  local_58[3] = 0;
  iVar6 = 0;
  if (param_1 != 0) {
    uVar2 = *(uint *)(param_1 + 0xc);
    *(uint *)(local_58 + 3) = uVar2;
    if ((int)uVar2 < DAT_14c9647dc) {
      lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
    }
    else {
      lVar8 = 0;
    }
    iVar6 = *(int *)(lVar8 + 0x10);
    if (*(int *)(lVar8 + 0x10) == 0) {
      LOCK();
      iVar6 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar12 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar12) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar6 = *(int *)(lVar8 + 0x10);
      bVar12 = iVar6 == 0;
      if (bVar12) {
        *(int *)(lVar8 + 0x10) = iVar11;
        iVar6 = 0;
      }
      UNLOCK();
      if (bVar12) {
        iVar6 = iVar11;
      }
    }
  }
  *(int *)((longlong)plVar10 + 0x1c) = iVar6;
  plVar10[4] = param_1;
  plVar10[5] = CONCAT44(iVar7,uVar1);
  if (((local_50 == 0) || (local_58 == (longlong *)0x0)) ||
     (cVar5 = (**(code **)(*local_58 + 0x30))(), cVar5 == '\0')) {
    if (local_50 != 0) {
      if (local_58 == (longlong *)0x0) goto LAB_140eab543;
      (**(code **)*local_58)(local_58,0);
      FUN_1446efa72(&local_58,0,0,0x10);
      goto LAB_140eab52d;
    }
  }
  else {
    plVar10 = (longlong *)(lVar3 + 0x6d0);
    if (*(int *)(lVar3 + 0x6e4) < 1) {
      iVar7 = *(int *)(lVar3 + 0x6d8);
      iVar6 = *(int *)(lVar3 + 0x6e0) + -1;
      *(int *)(lVar3 + 0x6e0) = iVar6;
      if (iVar6 <= iVar7) {
        iVar6 = iVar7;
        if (0 < iVar7) {
          iVar11 = 0;
          do {
            if (((*(int *)(*plVar10 + 8 + (longlong)iVar11 * 0x10) == 0) ||
                (plVar4 = *(longlong **)(*plVar10 + (longlong)iVar11 * 0x10),
                plVar4 == (longlong *)0x0)) ||
               (cVar5 = (**(code **)(*plVar4 + 0x28))(), cVar5 != '\0')) {
              FUN_14005b288(plVar10,iVar11);
              FUN_14005b248(plVar10);
            }
            else {
              iVar11 = iVar11 + 1;
            }
            iVar6 = *(int *)(lVar3 + 0x6d8);
          } while (iVar11 < iVar6);
        }
        iVar11 = 2;
        if (2 < iVar6 * 2) {
          iVar11 = iVar6 * 2;
        }
        *(int *)(lVar3 + 0x6e0) = iVar11;
        if ((iVar11 < iVar7) && (*(int *)(lVar3 + 0x6dc) != iVar6)) {
          FUN_14045812c();
        }
      }
    }
    if ((local_50 != 0) && (local_58 != (longlong *)0x0)) {
      (**(code **)(*local_58 + 0x38))(local_58,local_48);
    }
    iVar7 = *(int *)(lVar3 + 0x6d8);
    *(uint *)(lVar3 + 0x6d8) = iVar7 + 1U;
    if (*(uint *)(lVar3 + 0x6dc) < iVar7 + 1U) {
      FUN_1447a71f6(plVar10,iVar7);
    }
    lVar3 = *plVar10;
    lVar8 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar3 + lVar8) = 0;
    *(undefined4 *)(lVar3 + 8 + lVar8) = 0;
    *(longlong **)(lVar3 + lVar8) = local_58;
    local_58 = (longlong *)0x0;
    *(int *)(lVar3 + 8 + lVar8) = local_50;
LAB_140eab52d:
    local_50 = 0;
  }
  if (local_58 != (longlong *)0x0) {
    FUN_1400020a8();
  }
LAB_140eab543:
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eab6f8 FUN_140eab6f8 body=4924 status=ok
// SIG undefined FUN_140eab6f8(void)

undefined8 FUN_140eab6f8(longlong *param_1,uint *param_2,longlong param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  undefined *puVar18;
  undefined4 *puVar19;
  uint *puVar20;
  undefined8 uVar21;
  byte bVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  undefined ***pppuVar26;
  ulonglong uVar27;
  uint uVar28;
  longlong *plVar29;
  uint *puVar30;
  ulonglong uVar31;
  int iVar32;
  uint uVar33;
  undefined8 *puVar34;
  ulonglong uVar35;
  undefined8 *puVar36;
  ulonglong uVar37;
  longlong *plVar38;
  int iVar39;
  longlong *plVar40;
  code *pcVar41;
  bool bVar42;
  bool bVar43;
  undefined1 auStack_138 [32];
  code **local_118;
  undefined4 local_110;
  undefined4 local_108;
  undefined8 local_100;
  wchar_t *local_f8;
  code *local_f0;
  undefined1 *local_e8;
  code **local_e0;
  code *local_d8;
  code *local_d0;
  uint *local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  uint *local_a0;
  uint *local_98;
  longlong local_90;
  code *local_88;
  double local_80;
  undefined ***local_78;
  double local_70;
  undefined **local_68;
  longlong *local_60;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  memset(param_2,0,0x2f0);
  *(undefined8 *)(param_2 + 2) = DAT_14c846330;
  param_2[4] = DAT_14c846338;
  puVar34 = &DAT_14c846480;
  puVar20 = param_2 + 0x88;
  for (lVar25 = 0xc; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar20 = *puVar34;
    puVar34 = puVar34 + 1;
    puVar20 = puVar20 + 2;
  }
  *(undefined8 *)(param_2 + 0xa4) = DAT_14c8464f0;
  uVar21 = DAT_14c8464e8;
  *(undefined8 *)(param_2 + 0xa0) = DAT_14c8464e0;
  *(undefined8 *)(param_2 + 0xa2) = uVar21;
  param_2[0xb9] = 0;
  param_2[0] = 0;
  param_2[1] = 0;
  local_b0 = param_2 + 8;
  puVar34 = &DAT_14c846400;
  puVar20 = local_b0;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar20 = *puVar34;
    puVar34 = puVar34 + 1;
    puVar20 = puVar20 + 2;
  }
  local_b8 = param_2 + 0x28;
  puVar34 = &DAT_14c846400;
  puVar20 = local_b8;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar20 = *puVar34;
    puVar34 = puVar34 + 1;
    puVar20 = puVar20 + 2;
  }
  local_c0 = param_2 + 0x48;
  puVar34 = &DAT_14c846400;
  puVar20 = local_c0;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar20 = *puVar34;
    puVar34 = puVar34 + 1;
    puVar20 = puVar20 + 2;
  }
  local_98 = param_2 + 0x68;
  puVar34 = &DAT_14c846400;
  puVar20 = local_98;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar20 = *puVar34;
    puVar34 = puVar34 + 1;
    puVar20 = puVar20 + 2;
  }
  local_a0 = param_2 + 0xa8;
  uVar21 = CONCAT44(DAT_14c84634c,DAT_14c846348);
  *(ulonglong *)(param_2 + 0xa8) = CONCAT44(DAT_14c846344,DAT_14c84633c._4_4_);
  *(undefined8 *)(param_2 + 0xaa) = uVar21;
  uVar11 = DAT_14c84634c;
  uVar33 = DAT_14c846348;
  uVar23 = DAT_14c846344;
  local_a8 = param_2 + 0xac;
  param_2[0xac] = DAT_14c84633c._4_4_;
  param_2[0xad] = uVar23;
  param_2[0xae] = uVar33;
  param_2[0xaf] = uVar11;
  param_2[0xb3] = DAT_14c846338;
  *(undefined8 *)(param_2 + 0xb1) = DAT_14c846330;
  param_2[0xb6] = DAT_14c846338;
  *(undefined8 *)(param_2 + 0xb4) = DAT_14c846330;
  param_2[4] = DAT_14c846338;
  *(undefined8 *)(param_2 + 2) = DAT_14c846330;
  param_2[0xb7] = (uint)*(byte *)(param_1 + 0x10);
  param_2[0xba] = *(uint *)((longlong)param_1 + 0x84);
  lVar25 = (**(code **)(*param_1 + 0x450))(param_1);
  bVar22 = *(byte *)(param_1 + 7);
  local_90 = lVar25;
  if (bVar22 < 2) {
    lVar15 = param_1[0xf];
    if ((lVar15 == 0) || ((*(uint *)(lVar15 + 8) >> 0x1e & 1) != 0)) {
      lVar15 = FUN_1404101e2(param_1 + 10);
      if (lVar15 == 0) goto LAB_140eab8de;
      lVar25 = FUN_1404101e2(param_1 + 10);
      uVar21 = 0;
LAB_140eaba0f:
      lVar15 = FUN_144616788(&local_90,lVar25,uVar21);
      if (lVar15 == 0) goto LAB_140eaba1c;
    }
LAB_140eaba55:
    uVar23 = *(uint *)(lVar15 + 0xc);
    *param_2 = uVar23;
    if ((int)uVar23 < DAT_14c9647dc) {
      lVar25 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
    }
    else {
      lVar25 = 0;
    }
    if (*(uint *)(lVar25 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar33 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar42) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar33);
      }
      bVar42 = false;
      LOCK();
      uVar23 = *(uint *)(lVar25 + 0x10);
      bVar43 = uVar23 == 0;
      if (bVar43) {
        *(uint *)(lVar25 + 0x10) = uVar33;
        uVar23 = 0;
      }
      UNLOCK();
      if (bVar43) {
        uVar23 = uVar33;
      }
    }
    else {
      bVar42 = false;
      uVar23 = *(uint *)(lVar25 + 0x10);
    }
  }
  else {
LAB_140eab8de:
    if ((((((param_3 != 0) && ((bVar22 & 0xfd) == 0)) && (*(int *)(param_3 + 0x4c) != 0)) &&
         ((uVar23 = *(uint *)(param_3 + 0x48), -1 < (int)uVar23 && ((int)uVar23 < DAT_14c9647dc))))
        && (plVar29 = (longlong *)
                      ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
           plVar29 != (longlong *)0x0)) &&
       ((((int)plVar29[2] == *(int *)(param_3 + 0x4c) &&
         ((*(uint *)(plVar29 + 1) & 0x10200000) == 0)) && (lVar4 = *plVar29, lVar4 != 0)))) {
      lVar15 = lVar4;
      do {
        if ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0) {
          if ((*(int *)(lVar25 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar25 + 0x38) * 8) == lVar25 + 0x30)) {
            lVar16 = FUN_14081cebe();
            if ((*(int *)(lVar16 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
               (*(longlong *)
                 (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
                 (longlong)*(int *)(lVar16 + 0x38) * 8) == lVar16 + 0x30)) goto LAB_140eaba55;
            break;
          }
        }
        lVar15 = *(longlong *)(lVar15 + 0x120);
      } while (lVar15 != 0);
      lVar16 = FUN_14081cebe();
      if (DAT_14c951858 == 0) {
        local_e0 = &local_88;
        local_88 = FUN_1449e2820;
        local_d0 = FUN_14081d0ea;
        local_d8 = FUN_14081d0ea;
        local_e8 = &LAB_1468c5283;
        local_f0 = FUN_142809da0;
        local_f8 = L"Engine";
        local_100 = 0x400000000;
        local_108 = 0x10000000;
        local_110 = 8;
        local_118 = (code **)CONCAT44(local_118._4_4_,0x50);
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar17 = *(longlong *)(lVar4 + 0x20);
      if (lVar17 != 0) {
        do {
          if ((*(int *)(*(longlong *)(lVar17 + 0x10) + 0x38) < *(int *)(lVar16 + 0x38)) ||
             (lVar15 = lVar17,
             *(longlong *)
              (*(longlong *)(*(longlong *)(lVar17 + 0x10) + 0x30) +
              (longlong)*(int *)(lVar16 + 0x38) * 8) != lVar16 + 0x30)) {
            lVar15 = 0;
          }
        } while ((lVar15 == 0) && (lVar17 = *(longlong *)(lVar17 + 0x20), lVar17 != 0));
        if ((lVar15 != 0) && ((*(uint *)(lVar15 + 8) >> 0x1e & 1) == 0)) {
          if ((*(int *)(lVar25 + 0x38) <= *(int *)(*(longlong *)(lVar15 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar15 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar25 + 0x38) * 8) == lVar25 + 0x30)) goto LAB_140eaba55;
        }
      }
      do {
        lVar25 = lVar4;
        lVar4 = *(longlong *)(lVar25 + 0x120);
      } while (lVar4 != 0);
      lVar25 = *(longlong *)(lVar25 + 0xa8);
      if (lVar25 != 0) {
        uVar21 = 1;
        goto LAB_140eaba0f;
      }
    }
LAB_140eaba1c:
    *param_2 = 0;
    lVar15 = 0;
    bVar42 = true;
    uVar23 = 0;
  }
  param_2[1] = uVar23;
  FUN_14052cdea(param_2,lVar15,param_3);
  puVar20 = local_b0;
  puVar30 = local_c0;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar30 = *(undefined8 *)puVar20;
    puVar20 = puVar20 + 2;
    puVar30 = puVar30 + 2;
  }
  puVar20 = local_b8;
  puVar30 = local_98;
  for (lVar25 = 0x10; lVar25 != 0; lVar25 = lVar25 + -1) {
    *(undefined8 *)puVar30 = *(undefined8 *)puVar20;
    puVar20 = puVar20 + 2;
    puVar30 = puVar30 + 2;
  }
  uVar23 = local_a0[1];
  uVar33 = local_a0[2];
  uVar11 = local_a0[3];
  *local_a8 = *local_a0;
  local_a8[1] = uVar23;
  local_a8[2] = uVar33;
  local_a8[3] = uVar11;
  if (!bVar42) {
    (**(code **)(*param_1 + 0x458))(param_1,lVar15,param_2 + 0xb9,param_2 + 0xb8);
    FUN_14487e4ca(lVar15,&local_88);
    param_2[0xb1] = (uint)(float)(double)local_88;
    param_2[0xb2] = (uint)(float)local_80;
    param_2[0xb3] = (uint)(float)(double)local_78;
    param_2[0xb4] = (uint)(float)local_70;
    param_2[0xb5] = (uint)(float)(double)local_68;
    param_2[0xb6] = (uint)(float)(double)local_60;
  }
  if ((*(byte *)(param_1 + 6) & 4) == 0) goto LAB_140eac34d;
  plVar29 = (longlong *)FUN_14001cc68(0x20,0x10);
  plVar29[2] = 0;
  plVar29[3] = 0;
  *plVar29 = param_1[5];
  plVar29[1] = *(longlong *)(param_3 + 0x100);
  if ((((param_2[1] != 0) && (uVar23 = *param_2, -1 < (int)uVar23)) && ((int)uVar23 < DAT_14c9647dc)
      ) && (((plVar38 = (longlong *)
                        ((ulonglong)((uVar23 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8)),
             plVar38 != (longlong *)0x0 && (*(uint *)(plVar38 + 2) == param_2[1])) &&
            (((*(uint *)(plVar38 + 1) & 0x10200000) == 0 &&
             ((lVar25 = *plVar38, lVar25 != 0 && (0 < (int)param_2[0xb8])))))))) {
    uVar23 = *(uint *)(lVar25 + 0xc);
    if ((int)uVar23 < DAT_14c9647dc) {
      lVar15 = (ulonglong)((uVar23 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar23 >> 0x10) * 8);
    }
    else {
      lVar15 = 0;
    }
    uVar33 = *(uint *)(lVar15 + 0x10);
    if (*(uint *)(lVar15 + 0x10) == 0) {
      LOCK();
      iVar9 = DAT_14c964868 + 1;
      UNLOCK();
      uVar11 = DAT_14c964868 + 1;
      bVar42 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar9;
      if (bVar42) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar11);
      }
      LOCK();
      uVar33 = *(uint *)(lVar15 + 0x10);
      bVar42 = uVar33 == 0;
      if (bVar42) {
        *(uint *)(lVar15 + 0x10) = uVar11;
        uVar33 = 0;
      }
      UNLOCK();
      if (bVar42) {
        uVar33 = uVar11;
      }
    }
    pcVar41 = (code *)CONCAT44(uVar33,uVar23);
    local_88 = pcVar41;
    iVar9 = FUN_140938134();
    lVar15 = 0;
    if (iVar9 != -1) {
      lVar15 = (longlong)iVar9 * 0x20 + DAT_14cc26540;
    }
    if ((((lVar15 == 0) || (*(longlong *)(lVar15 + 8) == 0)) ||
        (plVar38 = *(longlong **)(lVar15 + 0x10), plVar38 == (longlong *)0x0)) ||
       ((int)plVar38[1] < 1)) {
      if (DAT_14c872be0 < DAT_14cc26590 || DAT_14cc26590 + 0xe10 < DAT_14c872be0) {
        FUN_14104d9eb();
      }
      plVar38 = (longlong *)FUN_14001cc68(0x90,0x10);
      plVar38[1] = (longlong)&DAT_100000001;
      *plVar38 = (longlong)&PTR_FUN_14be787c0;
      plVar38[3] = 0;
      plVar38[4] = 0;
      plVar38[9] = 0;
      plVar38[10] = 0;
      plVar38[0xb] = 0;
      plVar38[0xc] = 0;
      plVar38[0xd] = 0;
      plVar38[0xe] = 0;
      plVar38[0xf] = 0;
      plVar38[0x10] = 0;
      plVar38[0x11] = 0;
      *(undefined4 *)(plVar38 + 3) = 0xffffffff;
      *(undefined2 *)((longlong)plVar38 + 0x1c) = 0x105;
      plVar38[4] = 0;
      plVar38[2] = (longlong)&PTR_FUN_14aa50910;
      plVar38[5] = 0;
      plVar38[6] = 0;
      plVar38[7] = 0;
      plVar38[8] = 0;
      *(undefined1 *)(plVar38 + 9) = 1;
      *(undefined4 *)(plVar38 + 0xb) = 0xffffffff;
      *(undefined2 *)((longlong)plVar38 + 0x5c) = 0x105;
      plVar38[0xc] = 0;
      plVar38[10] = (longlong)&PTR_FUN_14aa57ea0;
      plVar38[0xe] = 0;
      plVar38[0xf] = 0;
      plVar38[0xd] = (longlong)&PTR_FUN_14a3d4750;
      *(undefined4 *)(plVar38 + 0x11) = 0xffffffff;
      *(undefined1 *)((longlong)plVar38 + 0x8d) = 0;
      if (plVar38 == (longlong *)0x0) {
        plVar29[2] = 0x10;
        plVar40 = (longlong *)plVar29[3];
        if (plVar40 != (longlong *)0x0) {
          plVar29[3] = 0;
LAB_140eabe09:
          LOCK();
          plVar3 = plVar40 + 1;
          *(int *)plVar3 = (int)*plVar3 + -1;
          UNLOCK();
          if ((int)*plVar3 == 0) {
            (**(code **)*plVar40)(plVar40);
            LOCK();
            piVar1 = (int *)((longlong)plVar40 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar40 + 0x10))(plVar40);
            }
          }
          if (plVar38 != (longlong *)0x0) goto LAB_140eabe52;
        }
      }
      else {
        LOCK();
        *(int *)(plVar38 + 1) = (int)plVar38[1] + 1;
        UNLOCK();
        plVar29[2] = (longlong)(plVar38 + 2);
        plVar40 = (longlong *)plVar29[3];
        if (plVar38 == plVar40) {
          LOCK();
          plVar40 = plVar38 + 1;
          *(int *)plVar40 = (int)*plVar40 + -1;
          UNLOCK();
          if ((int)*plVar40 == 0) {
            (**(code **)*plVar38)(plVar38);
            LOCK();
            piVar1 = (int *)((longlong)plVar38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar38 + 0x10))(plVar38);
            }
          }
        }
        else {
          plVar29[3] = (longlong)plVar38;
          if (plVar40 != (longlong *)0x0) goto LAB_140eabe09;
        }
LAB_140eabe52:
        LOCK();
        plVar40 = plVar38 + 1;
        *(int *)plVar40 = (int)*plVar40 + -1;
        UNLOCK();
        if ((int)*plVar40 == 0) {
          (**(code **)*plVar38)(plVar38);
          LOCK();
          piVar1 = (int *)((longlong)plVar38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar38 + 0x10))(plVar38);
          }
        }
      }
      puVar20 = (uint *)plVar29[2];
      puVar30 = (uint *)plVar29[3];
      if (puVar30 != (uint *)0x0) {
        LOCK();
        puVar30[3] = puVar30[3] + 1;
        UNLOCK();
      }
      iVar32 = DAT_14cc26570;
      iVar9 = DAT_14cc26548;
      if (DAT_14cc26574 == 0) {
        iVar32 = DAT_14cc26548 + 1;
        bVar42 = DAT_14cc2654c == DAT_14cc26548;
        DAT_14cc26548 = iVar32;
        if (bVar42) {
          FUN_1447711aa(&DAT_14cc26540,iVar9);
        }
        iVar32 = DAT_14cc26568;
        if (DAT_14cc26568 == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = DAT_14cc26568 + 0x1e;
          if (-1 < DAT_14cc26568 + -1) {
            iVar10 = DAT_14cc26568 + -1;
          }
          iVar10 = iVar10 >> 5;
        }
        iVar24 = DAT_14cc26568 + 1;
        iVar39 = DAT_14cc26568 + 0x1f;
        if (-1 < DAT_14cc26568) {
          iVar39 = DAT_14cc26568;
        }
        iVar39 = iVar39 >> 5;
        if (iVar39 != iVar10) {
          if (DAT_14cc2656c <= DAT_14cc26568) {
            local_b8 = (uint *)CONCAT44(local_b8._4_4_,iVar39);
            local_c0 = puVar20;
            local_b0 = puVar30;
            if (DAT_14cc26568 + 0x20U < 0xa0) {
              DAT_14cc2656c = 0x80;
            }
            else {
              uVar11 = DAT_14cc26568 + 0x20U >> 5;
              if (DAT_14cc2656c + 0x1fU < 0xa0) {
                uVar28 = 4;
                if (4 < uVar11) {
                  uVar28 = uVar11;
                }
              }
              else {
                uVar28 = uVar11 + (uVar11 * 3 >> 3) + 0x10;
              }
              uVar35 = (ulonglong)(uVar28 * 4);
              if (DAT_14c872d28 != (longlong *)0x0) {
                if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
                  uVar12 = (uint)(uVar35 + 0xf);
                  if (uVar28 < 0x1ffd) {
                    uVar35 = (ulonglong)
                             (ushort)(&DAT_14c841d90)
                                     [0x32 - (byte)(&DAT_14c841e00)[uVar35 + 0xf >> 4]];
                  }
                  else {
                    uVar27 = (ulonglong)(uVar12 & 0xfffffff0);
                    if (uVar27 < 0x7ff1) {
                      bVar22 = (&DAT_14c841e00)[uVar12 >> 4];
                      uVar31 = 0x32;
                      if (0x32 < bVar22) {
                        uVar31 = (ulonglong)bVar22;
                      }
                      uVar37 = 0x32 - (ulonglong)bVar22;
                      do {
                        uVar35 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar37 & 0xffffffff];
                        if (((&DAT_14c841d90)[uVar37 & 0xffffffff] & 0xf) == 0) goto LAB_140eac739;
                        lVar15 = uVar31 + 1 + uVar37;
                        uVar37 = uVar37 - 1;
                      } while (lVar15 != 0x33);
                    }
                    uVar35 = 0x10;
                    if (0x10 < DAT_14c841df8) {
                      uVar35 = (ulonglong)DAT_14c841df8;
                    }
                    uVar35 = -uVar35 & (uVar27 + uVar35) - 1;
                  }
                }
                else {
                  uVar35 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar35,0);
                }
              }
LAB_140eac739:
              iVar10 = (int)(uVar35 >> 2);
              DAT_14cc2656c = -0x20;
              if ((int)uVar11 <= iVar10) {
                DAT_14cc2656c = iVar10 << 5;
              }
            }
            FUN_1446efbd8(&DAT_14cc26550,DAT_14cc26568);
            iVar24 = DAT_14cc26568 + 1;
            puVar20 = local_c0;
            puVar30 = local_b0;
            iVar39 = (int)local_b8;
          }
          iVar10 = iVar24 + 0x1f;
          if (-1 < iVar24) {
            iVar10 = iVar24;
          }
          if (iVar24 % 0x20 != 0) {
            puVar19 = &DAT_14cc26550;
            if (DAT_14cc26560 != (undefined4 *)0x0) {
              puVar19 = DAT_14cc26560;
            }
            bVar22 = -(char)(iVar24 % 0x20);
            DAT_14cc26568 = iVar24;
            puVar19[iVar10 >> 5] =
                 (uint)(puVar19[iVar10 >> 5] << (bVar22 & 0x1f)) >> (bVar22 & 0x1f);
            iVar24 = DAT_14cc26568;
          }
        }
        DAT_14cc26568 = iVar24;
        lVar15 = (longlong)iVar9;
        puVar19 = &DAT_14cc26550;
        if (DAT_14cc26560 != (undefined4 *)0x0) {
          puVar19 = DAT_14cc26560;
        }
        bVar22 = (byte)iVar32 & 0x1f;
        puVar19[iVar39] = puVar19[iVar39] & (-2 << bVar22 | 0xfffffffeU >> 0x20 - bVar22);
      }
      else {
        lVar15 = (longlong)DAT_14cc26570;
        DAT_14cc26570 = *(int *)(DAT_14cc26540 + 4 + lVar15 * 0x20);
        DAT_14cc26574 = DAT_14cc26574 + -1;
        iVar9 = iVar32;
        if (DAT_14cc26574 != 0) {
          *(undefined4 *)(DAT_14cc26540 + (longlong)DAT_14cc26570 * 0x20) = 0xffffffff;
        }
      }
      puVar19 = &DAT_14cc26550;
      if (DAT_14cc26560 != (undefined4 *)0x0) {
        puVar19 = DAT_14cc26560;
      }
      iVar32 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar32 = iVar9;
      }
      puVar19[iVar32 >> 5] = puVar19[iVar32 >> 5] | 1 << ((byte)iVar9 & 0x1f);
      lVar4 = DAT_14cc26540;
      iVar32 = 1;
      lVar15 = lVar15 * 0x20;
      puVar19 = (undefined4 *)(DAT_14cc26540 + lVar15);
      *(code **)(DAT_14cc26540 + lVar15) = pcVar41;
      *(uint **)(lVar4 + 8 + lVar15) = puVar20;
      *(uint **)(lVar4 + 0x10 + lVar15) = puVar30;
      *(undefined4 *)(lVar4 + 0x18 + lVar15) = 0xffffffff;
      if (DAT_14cc26548 - DAT_14cc26574 == 1) {
        uVar11 = 1;
LAB_140eabf7f:
        if (((int)uVar11 < 1) || (iVar32 <= DAT_14cc26588)) {
          uVar23 = DAT_14cc26588 - 1U & (uVar23 ^ uVar33);
          puVar19[7] = uVar23;
          puVar18 = DAT_14cc26580;
          if (DAT_14cc26580 == (undefined *)0x0) {
            puVar18 = &DAT_14cc26578;
          }
          puVar19[6] = *(undefined4 *)
                        (puVar18 + ((longlong)DAT_14cc26588 - 1U & (longlong)(int)uVar23) * 4);
          puVar18 = DAT_14cc26580;
          if (DAT_14cc26580 == (undefined *)0x0) {
            puVar18 = &DAT_14cc26578;
          }
          *(int *)(puVar18 + ((longlong)DAT_14cc26588 - 1U & (longlong)(int)uVar23) * 4) = iVar9;
        }
        else {
          DAT_14cc26588 = iVar32;
          FUN_14190ab10();
        }
      }
      else {
        local_88 = pcVar41;
        iVar10 = FUN_140938134(uVar23 ^ uVar33);
        if (iVar10 == -1) {
          uVar11 = DAT_14cc26548 - DAT_14cc26574;
          if (3 < uVar11) {
            uVar35 = (ulonglong)(uVar11 & 0xfffffffe) + 0xf;
            lVar15 = 0x3f;
            if (uVar35 != 0) {
              for (; uVar35 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar32 = 1 << ((byte)lVar15 & 0x1f);
          }
          goto LAB_140eabf7f;
        }
        puVar2 = (undefined4 *)(DAT_14cc26540 + (longlong)iVar10 * 0x20);
        plVar38 = *(longlong **)(DAT_14cc26540 + 0x10 + (longlong)iVar10 * 0x20);
        if (plVar38 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar38 + 0x10))();
          }
        }
        uVar5 = *puVar19;
        uVar6 = puVar19[1];
        uVar7 = puVar19[2];
        uVar8 = puVar19[3];
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(puVar19 + 4);
        *puVar2 = uVar5;
        puVar2[1] = uVar6;
        puVar2[2] = uVar7;
        puVar2[3] = uVar8;
        FUN_14104dc56(iVar9);
      }
      (**(code **)(*param_1 + 0x460))(param_1,lVar25,plVar29[2]);
    }
    else {
      iVar9 = (int)plVar38[1];
      do {
        if (iVar9 == 0) {
          plVar29[2] = 0;
          plVar38 = (longlong *)plVar29[3];
          if (plVar38 == (longlong *)0x0) goto LAB_140eabffb;
          plVar29[3] = 0;
          goto LAB_140eac12a;
        }
        LOCK();
        iVar32 = (int)plVar38[1];
        bVar42 = iVar9 == iVar32;
        if (bVar42) {
          *(int *)(plVar38 + 1) = iVar9 + 1;
          iVar32 = iVar9;
        }
        iVar9 = iVar32;
        UNLOCK();
      } while (!bVar42);
      plVar29[2] = *(longlong *)(lVar15 + 8);
      plVar40 = (longlong *)plVar29[3];
      if (plVar38 == plVar40) {
        LOCK();
        plVar40 = plVar38 + 1;
        *(int *)plVar40 = (int)*plVar40 + -1;
        UNLOCK();
        if ((int)*plVar40 == 0) {
          (**(code **)*plVar38)(plVar38);
          LOCK();
          piVar1 = (int *)((longlong)plVar38 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            lVar25 = *plVar38;
LAB_140eac1d6:
            (**(code **)(lVar25 + 0x10))(plVar38);
          }
        }
      }
      else {
        plVar29[3] = (longlong)plVar38;
        plVar38 = plVar40;
        if (plVar40 != (longlong *)0x0) {
LAB_140eac12a:
          LOCK();
          plVar40 = plVar38 + 1;
          *(int *)plVar40 = (int)*plVar40 + -1;
          UNLOCK();
          if ((int)*plVar40 == 0) {
            (**(code **)*plVar38)(plVar38);
            LOCK();
            piVar1 = (int *)((longlong)plVar38 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              lVar25 = *plVar38;
              goto LAB_140eac1d6;
            }
          }
        }
      }
    }
  }
LAB_140eabffb:
  lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  iVar9 = *(int *)(lVar25 + 0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar9 != 2) {
      if (iVar9 != 1) goto LAB_140eac021;
      DVar13 = FUN_140ad26c0();
      DVar14 = GetCurrentThreadId();
      if (DVar13 == DVar14) goto LAB_140eac02a;
      goto LAB_140eac297;
    }
LAB_140eac02a:
    lVar25 = *plVar29;
    local_88 = (code *)(plVar29 + 1);
    FUN_140bd9bca(lVar25 + 0x10,&local_90);
    FUN_14461aa3c(*(longlong *)(lVar25 + 0x10) + (longlong)(int)local_90 * 0x120 + 0x10,
                  &DAT_14ca85100,plVar29);
  }
  else {
LAB_140eac021:
    if (iVar9 == 0x10) goto LAB_140eac02a;
LAB_140eac297:
    if (DAT_14ca9a438 == '\0') {
      if ((DAT_14c86a9f8 != '\x01') || (iVar9 = *(int *)(lVar25 + 0xc60), iVar9 == 2))
      goto LAB_140eac02a;
      if (iVar9 == 1) {
        DVar13 = FUN_140ad26c0();
        DVar14 = GetCurrentThreadId();
        if (DVar13 == DVar14) goto LAB_140eac02a;
      }
    }
    if (DAT_14ca9a43c == 0) {
      puVar34 = (undefined8 *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x308);
      puVar20 = (uint *)*puVar34;
      if (puVar20 != (uint *)0x0) goto LAB_140eac41d;
      while( true ) {
        uVar23 = *(uint *)(*(longlong *)
                            ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                          0x318);
        if ((uVar23 & 1) == 0) {
          *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0x318) = uVar23 | 1;
          __tlregdtor(&LAB_1446187fd);
        }
        lVar25 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
        puVar19 = *(undefined4 **)(lVar25 + 0x310);
        *(undefined8 *)(lVar25 + 0x310) = 0;
        if (puVar19 == (undefined4 *)0x0) {
          puVar19 = _aligned_malloc(0x10000,0x10000);
        }
        *puVar19 = 0xffffffff;
        *(undefined4 **)(puVar19 + 0x10) = puVar19 + 0x16;
        puVar19[0x12] = 0;
        *puVar34 = puVar19;
        FUN_140217a48(puVar34);
        puVar20 = (uint *)*puVar34;
LAB_140eac41d:
        puVar36 = (undefined8 *)(*(longlong *)(puVar20 + 0x10) + 7U & 0xfffffffffffffff8);
        puVar30 = (uint *)(puVar36 + 0x16);
        uVar23 = puVar20[0x12];
        if (puVar30 <= puVar20 + 0x4000) break;
        while( true ) {
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x4000;
          LOCK();
          uVar33 = *puVar20;
          *puVar20 = *puVar20 + uVar23 + 1;
          UNLOCK();
          if ((uVar33 ^ uVar23) != 0xffffffff) break;
          puVar20 = (uint *)*puVar34;
          *puVar20 = 0xffffffff;
          *(uint **)(puVar20 + 0x10) = puVar20 + 0x16;
          puVar20[0x12] = 0;
          *puVar34 = puVar20;
          puVar36 = (undefined8 *)((longlong)puVar20 + 0x5fU & 0xfffffffffffffff8);
          puVar30 = (uint *)(puVar36 + 0x16);
          uVar23 = 0;
          if (puVar30 <= puVar20 + 0x4000) {
            uVar23 = 1;
            goto LAB_140eac49d;
          }
        }
      }
      uVar23 = uVar23 + 1;
LAB_140eac49d:
      *(uint **)(puVar20 + 0x10) = puVar30;
      puVar20[0x12] = uVar23;
      iVar9 = 0;
      FUN_1447247dc(puVar36,0);
      *puVar36 = &PTR_FUN_14be78800;
      puVar36[0x15] = plVar29;
      if (((ulonglong)DAT_14c7585c8 & 0xff) == 0xff) {
        uVar23 = DAT_14c7585c8 >> 10 & 3;
        if ((DAT_14c7585c8 >> 9 & 1) == 0 || uVar23 < 2) {
          uVar35 = (ulonglong)(byte)(&DAT_149e38edc)[uVar23];
          iVar9 = 0;
        }
        else {
          uVar35 = 2;
        }
      }
      else {
        iVar9 = (DAT_14c7585c8 >> 7 & 2 | DAT_14c7585c8 >> 9 & 1) +
                *(int *)(&DAT_149e38ed0 + ((ulonglong)DAT_14c7585c8 & 0xff) * 4);
        uVar35 = 5;
      }
      if (*(code **)(puVar36[0xe] + 0x18) != FUN_144713626) {
        (**(code **)(puVar36[0xe] + 0x18))(puVar36 + 0xe,puVar36 + 9);
      }
      puVar36[0xe] = LowLevelTasks::
                     TTaskDelegate<class_LowLevelTasks::FTask*___ptr64___cdecl(bool),48>::
                     TTaskDelegateImpl<`public:_void___cdecl_LowLevelTasks::FTask::Init<`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>_>(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,`protected:_void___cdecl_UE::Tasks::Private::FTaskBase::Init(wchar_t_const*___ptr64,LowLevelTasks::ETaskPriority,UE::Tasks::EExtendedTaskPriority,UE::Tasks::ETaskFlags)___ptr64'::`1'::<lambda_1>&&___ptr64,LowLevelTasks::ETaskFlags)___ptr64'::`1'::<lambda_1>,0>
                     ::vftable;
      puVar36[9] = puVar36;
      puVar36[10] = puVar36;
      lVar25 = *(longlong *)
                (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x2b8);
      if (lVar25 == 0) {
        uVar27 = 1;
        if ((char)uVar35 != '\x06') {
          uVar27 = uVar35;
        }
        uVar35 = uVar27;
        uVar21 = 0;
      }
      else {
        if ((char)uVar35 == '\x06') {
          uVar35 = *(ulonglong *)(lVar25 + 0x38) >> 0x3b;
        }
        uVar21 = *(undefined8 *)(lVar25 + 0x30);
      }
      puVar36[0xf] = uVar21;
      puVar36[0x10] = uVar35 << 0x3b | 0xc00000527800b400;
      *(int *)((longlong)puVar36 + 0x1c) = iVar9;
      if (puVar36 == (undefined8 *)0x0) {
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(0);
      }
      else {
        LOCK();
        *(int *)(puVar36 + 1) = *(int *)(puVar36 + 1) + 1;
        UNLOCK();
        local_88 = (code *)CONCAT71(local_88._1_7_,1);
        FUN_1447439e4(puVar36);
        LOCK();
        piVar1 = (int *)(puVar36 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*puVar36)(puVar36,1);
        }
      }
    }
    else {
      local_118 = &local_88;
      local_78 = (undefined ***)0x0;
      local_68 = &PTR_LAB_14be787e0;
      local_88 = FUN_14461aeca;
      local_60 = plVar29;
      FUN_14005a792(&DAT_14ca9a440,L"InitInstanceData",&DAT_14cc265a8);
      if (local_88 != (code *)0x0) {
        pppuVar26 = local_78;
        if (local_78 == (undefined ***)0x0) {
          pppuVar26 = &local_68;
        }
        (*(code *)(*pppuVar26)[2])();
      }
    }
    plVar29 = (longlong *)0x0;
  }
  FUN_14190ad60(plVar29);
  FUN_14190ad60(0);
LAB_140eac34d:
  if ((local_48 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eaca40 FUN_140eaca40 body=299 status=ok
// SIG undefined FUN_140eaca40(void)

undefined8 * FUN_140eaca40(undefined8 *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  longlong lVar4;
  
  FUN_140eacc52();
  *param_1 = &PTR_FUN_14b2edbe0;
  param_1[0x7b] = &PTR_LAB_14b2ee270;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  *(undefined1 *)((longlong)param_1 + 0x3fc) = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  *(undefined8 *)((longlong)param_1 + 0x419) = 0;
  *(undefined8 *)((longlong)param_1 + 0x421) = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3ef) = 0;
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined8 *)((longlong)param_1 + 0x444) = 0;
  *(undefined8 *)((longlong)param_1 + 0x44c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x454) = 0x200000000;
  *(undefined8 *)((longlong)param_1 + 0x45c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0;
  *(undefined8 *)((longlong)param_1 + 0x469) = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  plVar1 = (longlong *)param_1[0x75];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x728))(plVar1,DAT_14cb81868,0);
  }
  uVar2 = DAT_14cb81860;
  uVar3 = FUN_140eacb6c();
  lVar4 = FUN_14048696c(param_1,uVar2,uVar3,uVar3,1,0);
  if ((lVar4 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar4);
  }
  param_1[0x7c] = lVar4;
  return param_1;
}



// FUNCTION 140eacb6c FUN_140eacb6c body=228 status=ok
// SIG undefined FUN_140eacb6c(void)

longlong FUN_140eacb6c(void)

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
  if (DAT_14cb69510 == 0) {
    local_30 = &local_10;
    local_10 = FUN_144a7958c;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_142b47bc4;
    local_38 = &LAB_148751077;
    local_40 = &LAB_140e38100;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000004;
    local_60 = 0x10;
    local_68 = 0xa50;
    FUN_14081cfa3(L"/Script/GbxGame",L"HazardInteractionComponent",&DAT_14cb69510,FUN_146520a1e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb69510;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eacc52 FUN_140eacc52 body=697 status=ok
// SIG undefined FUN_140eacc52(void)

undefined8 * FUN_140eacc52(undefined8 *param_1)

{
  longlong lVar1;
  longlong *plVar2;
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
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1405ba846();
  *param_1 = &PTR_FUN_14aa3a820;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14caf8980) {
    FUN_144b3d300(&DAT_14caf8980);
    if (DAT_14caf8980 == -1) {
      FUN_1446f470e(&DAT_14caf8978,L"OverlapAllDynamic",1);
      _Init_thread_footer(&DAT_14caf8980);
    }
  }
  (**(code **)(*(longlong *)param_1[0x75] + 0x728))((longlong *)param_1[0x75],DAT_14caf8978,1);
  if (DAT_14caf84d0 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
  }
  plVar2 = DAT_14caf84d0;
  lVar1 = DAT_14caf84d0[0x22];
  if (lVar1 == 0) {
    (**(code **)(*DAT_14caf84d0 + 1000))(DAT_14caf84d0);
    lVar1 = plVar2[0x22];
  }
  plVar2 = DAT_14caf84d0;
  *(undefined4 *)(param_1 + 0x7a) = *(undefined4 *)(lVar1 + 0x40);
  if (plVar2 == (longlong *)0x0) {
    local_40 = &local_20;
    local_20 = FUN_1449e2820;
    local_30 = FUN_14081d0ea;
    local_38 = &LAB_145a62952;
    local_48 = &LAB_147c8cd45;
    local_50 = &LAB_1461468ae;
    local_58 = L"Engine";
    local_60 = 0;
    local_68 = 0x10000006;
    local_70 = 8;
    local_78 = 0x218;
    FUN_14081cfa3(L"/Script/Engine",L"PhysicsSettings",&DAT_14caf84d0,FUN_1463f75b4);
    plVar2 = DAT_14caf84d0;
  }
  lVar1 = plVar2[0x22];
  if (lVar1 == 0) {
    (**(code **)(*plVar2 + 1000))(plVar2);
    lVar1 = plVar2[0x22];
  }
  *(undefined4 *)(param_1 + 0x79) = *(undefined4 *)(lVar1 + 0x3c);
  *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) | 8;
  FUN_1405e4918(param_1,0x3dcccccd);
  FUN_1405ba932(param_1,0);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eacf18 FUN_140eacf18 body=144 status=ok
// SIG undefined FUN_140eacf18(void)

undefined8 * FUN_140eacf18(undefined8 *param_1)

{
  FUN_1400ead26();
  *param_1 = &PTR_FUN_14a625b80;
  param_1[5] = &PTR_FUN_14a626160;
  param_1[6] = &PTR_LAB_14a6261a0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 2;
  param_1[0x55] = 0x3fee666660000000;
  param_1[0x56] = 0x3fee666660000000;
  param_1[0x57] = 0x3fee666660000000;
  param_1[0x58] = 0x4059000000000000;
  param_1[0x59] = 0x4059000000000000;
  param_1[0x5a] = 0x4059000000000000;
  *(byte *)((longlong)param_1 + 0x1f9) = *(byte *)((longlong)param_1 + 0x1f9) | 0x28;
  return param_1;
}



// FUNCTION 140eacfa8 FUN_140eacfa8 body=60 status=ok
// SIG undefined FUN_140eacfa8(void)

void FUN_140eacfa8(longlong param_1)

{
  longlong lVar1;
  
  for (lVar1 = param_1; lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x20)) {
    if ((*(uint *)(lVar1 + 8) & 0x30) != 0) goto LAB_140eacfd7;
  }
  FUN_140eacfe4(param_1 + 0x638,0);
LAB_140eacfd7:
  FUN_140b00d24(param_1);
  return;
}



// FUNCTION 140eacfe4 FUN_140eacfe4 body=207 status=ok
// SIG undefined FUN_140eacfe4(void)

void FUN_140eacfe4(longlong *param_1,char param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  if (param_1[2] != 0) {
    LOCK();
    *(int *)(param_1[3] + 0x38) = *(int *)(param_1[3] + 0x38) + -1;
    UNLOCK();
    lVar2 = param_1[3];
    if (*param_1 == 0) {
      lVar3 = 0;
      lVar4 = lVar2;
    }
    else {
      *(undefined8 *)(*param_1 + 8) = 0;
      lVar3 = *param_1;
      lVar4 = param_1[3];
    }
    LOCK();
    bVar6 = param_1 == *(longlong **)(lVar4 + 0x30);
    if (bVar6) {
      *(longlong *)(lVar4 + 0x30) = lVar3;
    }
    UNLOCK();
    if (!bVar6) {
      while ((longlong *)param_1[1] == (longlong *)0x0) {
        SwitchToThread();
      }
      lVar3 = *param_1;
      *(longlong *)param_1[1] = lVar3;
      if (lVar3 != 0) {
        *(longlong *)(lVar3 + 8) = param_1[1];
      }
    }
    lVar3 = param_1[2];
    lVar4 = param_1[3];
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    if ((param_2 == '\0') && ((longlong)*(int *)(lVar4 + 0x20) != 0)) {
      lVar5 = 0;
      do {
        if ((*(int *)(*(longlong *)(lVar4 + 0x18) + 8 + lVar5) != 0) &&
           (*(longlong *)(*(longlong *)(lVar4 + 0x18) + lVar5) != 0)) {
          FUN_140ead0b4(lVar4 + 0x18,lVar3);
          break;
        }
        lVar5 = lVar5 + 0x10;
      } while ((longlong)*(int *)(lVar4 + 0x20) * 0x10 != lVar5);
    }
    LOCK();
    piVar1 = (int *)(lVar2 + 0x38);
    *piVar1 = *piVar1 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 140ead0b4 FUN_140ead0b4 body=162 status=ok
// SIG undefined FUN_140ead0b4(void)

void FUN_140ead0b4(longlong *param_1,undefined8 param_2)

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
           (cVar4 = (**(code **)(*plVar2 + 0x60))(plVar2,param_2), cVar4 != '\0'))) {
      lVar7 = lVar7 + -0x10;
      bVar3 = uVar8 < 2;
      uVar8 = uVar8 - 1;
      if (bVar3) {
        *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
        if (!bVar6) {
          return;
        }
        goto LAB_140ead141;
      }
    }
    uVar5 = uVar8 - 1;
    bVar6 = true;
  } while (1 < uVar8);
  *(int *)((longlong)param_1 + 0x14) = *(int *)((longlong)param_1 + 0x14) + -1;
LAB_140ead141:
  FUN_14474d06a(param_1,0);
  return;
}



// FUNCTION 140ead156 FUN_140ead156 body=40 status=ok
// SIG undefined FUN_140ead156(void)

undefined8 FUN_140ead156(undefined8 param_1,int param_2)

{
  FUN_140ead17e();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140ead17e FUN_140ead17e body=658 status=ok
// SIG undefined FUN_140ead17e(void)

void FUN_140ead17e(undefined8 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = &PTR_FUN_14b6aa910;
  param_1[0x72] = &PTR_FUN_14b6ab020;
  param_1[0x73] = &PTR_FUN_14b6ab090;
  param_1[0x74] = &PTR_FUN_14b6ab100;
  param_1[0x75] = &PTR_FUN_14b6ab130;
  param_1[0x76] = &PTR_FUN_14b6ab160;
  param_1[0x77] = &PTR_FUN_14b6ab190;
  param_1[0x78] = &PTR_FUN_14b6ab1d0;
  param_1[0x79] = &PTR_FUN_14b6ab1f0;
  param_1[0x7a] = &PTR_FUN_14b6ab220;
  param_1[0x7b] = &PTR_FUN_14b6ab2f0;
  param_1[0x7c] = &PTR_FUN_14b6ab340;
  param_1[0x7d] = &PTR_FUN_14b6ab400;
  param_1[0x7e] = &PTR_FUN_14b6ab420;
  param_1[0x7f] = &PTR_FUN_14b6ab4a0;
  param_1[0x80] = &PTR_FUN_14b6ab4c0;
  param_1[0x81] = &PTR_FUN_14b6ab4d0;
  param_1[0x82] = &PTR_FUN_14b6ab510;
  param_1[0x83] = &PTR_FUN_14b6ab580;
  param_1[0x84] = &PTR_FUN_14b6ab5b0;
  param_1[0x85] = &PTR_FUN_14b6ab650;
  param_1[0x86] = &PTR_FUN_14b6ab670;
  param_1[0x87] = &PTR_FUN_14b6ab690;
  param_1[0x2a7] = &PTR_FUN_14b6ab6b0;
  param_1[0x2a8] = &PTR_FUN_14b6ab6f0;
  param_1[0x2a9] = &PTR_FUN_14b6ab710;
  param_1[0x2aa] = &PTR_FUN_14b6ab7b0;
  param_1[0x2ab] = &PTR_FUN_14b6ab7e0;
  param_1[0x30e] = &PTR_FUN_14b6ab800;
  param_1[0x30f] = &PTR_FUN_14b6ab840;
  param_1[0x310] = &PTR_FUN_14b6ab870;
  lVar2 = 0x1cd8;
  do {
    puVar1 = *(undefined8 **)((longlong)param_1 + lVar2);
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
    lVar2 = lVar2 + -8;
  } while (lVar2 != 0x1cc8);
  puVar1 = (undefined8 *)param_1[0x399];
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,1);
  }
  FUN_140255aed(param_1[0x397],*(undefined4 *)(param_1 + 0x398));
  if (param_1[0x397] != 0) {
    FUN_1400020a8();
  }
  FUN_140368b56(param_1 + 0x37a);
  FUN_140a3299c(param_1 + 0x36a);
  if (param_1[0x365] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x363] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x361] != 0) {
    FUN_1400020a8();
  }
  FUN_140ead410(param_1 + 0x311);
  FUN_140ce470e(param_1);
  return;
}



// FUNCTION 140ead410 FUN_140ead410 body=180 status=ok
// SIG undefined FUN_140ead410(void)

void FUN_140ead410(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b6a9790;
  FUN_140ead4c4(param_1[0x4e],*(undefined4 *)(param_1 + 0x4f));
  if (param_1[0x4e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x4c] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x49],*(undefined4 *)(param_1 + 0x4a));
  if (param_1[0x49] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0x43],*(undefined4 *)(param_1 + 0x44));
  if (param_1[0x43] != 0) {
    FUN_1400020a8();
  }
  FUN_140ead512(param_1);
  return;
}



// FUNCTION 140ead4c4 FUN_140ead4c4 body=77 status=ok
// SIG undefined FUN_140ead4c4(void)

void FUN_140ead4c4(longlong param_1,int param_2)

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
      plVar4 = plVar4 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140ead512 FUN_140ead512 body=1848 status=ok
// SIG undefined FUN_140ead512(void)

void FUN_140ead512(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  *param_1 = &PTR_FUN_14b02e0f0;
  param_1[0x3f] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x42) = 0;
  if (*(int *)((longlong)param_1 + 0x214) != 0) {
    FUN_140115c12(param_1 + 0x41,0);
  }
  param_1[0x40] = 0;
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x3a) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x3a) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x3a) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x1c4) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x1c4) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x1c4) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x37) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x37) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x37) = 0;
  }
  FUN_140eadc4a(param_1[0x34],*(undefined4 *)(param_1 + 0x35));
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  FUN_140eadc4a(param_1[0x32],*(undefined4 *)(param_1 + 0x33));
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_140a32a72(param_1 + 0x28);
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x134) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x134) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x134) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x25) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x25) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x25) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x11c) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x11c) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x11c) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)(param_1 + 0x22) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)(param_1 + 0x22) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  lVar3 = DAT_14c9a3d60;
  if (*(int *)((longlong)param_1 + 0x104) != 0) {
    if (DAT_14c9a3d68 != DAT_14c9a3d94) {
      iVar4 = *(int *)((longlong)param_1 + 0x104) + -1;
      lVar2 = (longlong)iVar4 * 0x88;
      lVar1 = DAT_14c9a3d60 + lVar2;
      FUN_144760e21(*(undefined8 *)(DAT_14c9a3d60 + 0x70 + lVar2),
                    *(undefined4 *)(DAT_14c9a3d60 + 0x78 + lVar2));
      if (*(longlong *)(lVar3 + 0x70 + lVar2) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      FUN_14059507c(&DAT_14c9a3d60,iVar4,1);
    }
    *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  }
  param_1[0x1c] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  if (*(int *)((longlong)param_1 + 0xfc) != 0) {
    FUN_140115c12(param_1 + 0x1e,0);
  }
  param_1[0x1d] = 0;
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x18] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x14] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[0xd],*(undefined4 *)(param_1 + 0xe));
  if (param_1[0xd] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[7],*(undefined4 *)(param_1 + 8));
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 140eadc4a FUN_140eadc4a body=40 status=ok
// SIG undefined FUN_140eadc4a(void)

void FUN_140eadc4a(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1457bfdb8(param_1);
    param_1 = param_1 + 0x48;
  }
  return;
}



// FUNCTION 140eadc7f FUN_140eadc7f body=556 status=ok
// SIG undefined FUN_140eadc7f(void)

undefined8 FUN_140eadc7f(longlong param_1,char param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined1 auStack_c8 [32];
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
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_c8);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    puVar1 = (uint *)(param_1 + 8);
    uVar3 = *puVar1;
    uVar6 = 0;
    if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_140eadd6e;
    lVar5 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    if ((lVar5 != 0) &&
       ((*(int *)(lVar5 + 0x10) == *(int *)(param_1 + 0xc) &&
        ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
      if ((longlong)(int)DAT_14cb81ca8 != 0) {
        lVar5 = (longlong)(int)DAT_14cb81ca8 * 0x60;
        lVar7 = DAT_14cb81ca0;
        do {
          cVar4 = FUN_140eadec0(lVar7,puVar1);
          if (cVar4 != '\0') {
            FUN_140eae0b6(lVar7 + 0x50,param_1 + 0x30);
            goto LAB_140eadd6c;
          }
          lVar7 = lVar7 + 0x60;
          lVar5 = lVar5 + -0x60;
        } while (lVar5 != 0);
      }
      uVar6 = FUN_14479d2ce(puVar1);
      FUN_140eae114(&local_48,uVar6);
      cVar4 = FUN_144729dda(&uStack_30);
      if (cVar4 != '\0') {
        local_98 = local_38;
        uStack_94 = uStack_34;
        uStack_90 = uStack_30;
        uStack_8c = uStack_2c;
        local_a8 = local_48;
        uStack_a4 = uStack_44;
        uStack_a0 = uStack_40;
        uStack_9c = uStack_3c;
        FUN_140eae456(&local_88);
        uVar3 = DAT_14cb81ca8;
        lVar5 = (longlong)(int)DAT_14cb81ca8;
        DAT_14cb81ca8 = DAT_14cb81ca8 + 1;
        if (DAT_14cb81cac < DAT_14cb81ca8) {
          FUN_1457bfebe(uVar3);
        }
        lVar7 = DAT_14cb81ca0;
        lVar5 = lVar5 * 0x60;
        puVar2 = (undefined4 *)(DAT_14cb81ca0 + 0x10 + lVar5);
        *puVar2 = local_98;
        puVar2[1] = uStack_94;
        puVar2[2] = uStack_90;
        puVar2[3] = uStack_8c;
        *(undefined8 *)(lVar7 + lVar5) = CONCAT44(uStack_a4,local_a8);
        ((undefined8 *)(lVar7 + lVar5))[1] = CONCAT44(uStack_9c,uStack_a0);
        puVar2 = (undefined4 *)(lVar7 + 0x20 + lVar5);
        *puVar2 = local_88;
        puVar2[1] = uStack_84;
        puVar2[2] = uStack_80;
        puVar2[3] = uStack_7c;
        *(undefined8 *)(lVar7 + 0x30 + lVar5) = 0;
        *(undefined8 *)(lVar7 + 0x30 + lVar5) = local_78;
        local_78 = 0;
        *(undefined4 *)(lVar7 + 0x38 + lVar5) = (undefined4)local_70;
        *(undefined4 *)(lVar7 + 0x3c + lVar5) = local_70._4_4_;
        local_70 = 0;
        *(undefined8 *)(lVar7 + 0x40 + lVar5) = 0;
        *(undefined8 *)(lVar7 + 0x40 + lVar5) = local_68;
        local_68 = 0;
        *(undefined4 *)(lVar7 + 0x48 + lVar5) = (undefined4)local_60;
        *(undefined4 *)(lVar7 + 0x4c + lVar5) = local_60._4_4_;
        local_60 = 0;
        *(undefined8 *)(lVar7 + 0x50 + lVar5) = 0;
        *(undefined8 *)(lVar7 + 0x50 + lVar5) = local_58;
        local_58 = 0;
        *(undefined4 *)(lVar7 + 0x58 + lVar5) = (undefined4)local_50;
        *(undefined4 *)(lVar7 + 0x5c + lVar5) = local_50._4_4_;
        local_50 = 0;
        FUN_1412ca22e(&local_88);
LAB_140eadd6c:
        uVar6 = 1;
        goto LAB_140eadd6e;
      }
    }
  }
  uVar6 = 0;
LAB_140eadd6e:
  if ((local_28 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140eadec0 FUN_140eadec0 body=89 status=ok
// SIG undefined FUN_140eadec0(void)

undefined1 FUN_140eadec0(longlong param_1,undefined8 param_2)

{
  char cVar1;
  undefined1 uVar2;
  
  cVar1 = FUN_140eadf1a(param_2,param_1);
  if (cVar1 == '\0') {
    cVar1 = FUN_140eadfe8(param_2,param_1 + 8);
    if (cVar1 == '\0') {
      cVar1 = FUN_140eadf82(param_2,param_1 + 0x10);
      if (cVar1 == '\0') {
        uVar2 = FUN_140eae050(param_2,param_1 + 0x18);
        return uVar2;
      }
    }
  }
  return 1;
}



// FUNCTION 140eadf1a FUN_140eadf1a body=104 status=ok
// SIG undefined FUN_140eadf1a(void)

ulonglong FUN_140eadf1a(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 == *param_2) && (uVar2 == param_2[1])) {
    uVar3 = CONCAT71((uint7)(uint3)(uVar2 >> 8),1);
  }
  else {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar4 != 0)))) &&
       ((*(uint *)(lVar4 + 0x10) == uVar2 && ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar3 = FUN_144729dda(param_2);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3;
}



// FUNCTION 140eadf82 FUN_140eadf82 body=102 status=ok
// SIG undefined FUN_140eadf82(void)

ulonglong FUN_140eadf82(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140eadfe8 FUN_140eadfe8 body=104 status=ok
// SIG undefined FUN_140eadfe8(void)

ulonglong FUN_140eadfe8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 == 0) ||
        ((((int)uVar1 < 0 || (DAT_14c9647dc <= (int)uVar1)) ||
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 == 0)))) ||
       ((*(uint *)(lVar3 + 0x10) != uVar2 || ((*(uint *)(lVar3 + 8) & 0x10200000) != 0)))) {
      uVar4 = FUN_144729dda(param_2);
      uVar4 = uVar4 ^ 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



// FUNCTION 140eae050 FUN_140eae050 body=102 status=ok
// SIG undefined FUN_140eae050(void)

ulonglong FUN_140eae050(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  if ((uVar1 != *param_2) || (uVar4 = 1, uVar2 != param_2[1])) {
    if (((uVar2 != 0) &&
        (((-1 < (int)uVar1 && ((int)uVar1 < DAT_14c9647dc)) &&
         (lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar3 != 0)))) &&
       ((*(uint *)(lVar3 + 0x10) == uVar2 && ((*(uint *)(lVar3 + 8) & 0x10200000) == 0)))) {
      return 0;
    }
    uVar4 = FUN_144729dda(param_2);
    uVar4 = uVar4 ^ 1;
  }
  return uVar4;
}



// FUNCTION 140eae0b6 FUN_140eae0b6 body=93 status=ok
// SIG undefined FUN_140eae0b6(void)

undefined8 * FUN_140eae0b6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1404eec70(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1404dd0ca(param_1,iVar1);
      FUN_1404dd017(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}


