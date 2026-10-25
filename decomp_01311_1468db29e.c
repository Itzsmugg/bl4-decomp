// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1468db29e FUN_1468db29e body=64 status=ok
// SIG undefined FUN_1468db29e(void)

void FUN_1468db29e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x120))(*(longlong **)(*param_2 + 8),param_3);
                    /* WARNING: Could not recover jumptable at 0x0001468db2db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))(*(longlong **)(*param_2 + 8),param_3 + 8);
  return;
}



// FUNCTION 1468db2e2 FUN_1468db2e2 body=957 status=ok
// SIG undefined FUN_1468db2e2(void)

undefined8 FUN_1468db2e2(longlong param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  longlong *plVar1;
  void *_Src;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  uint uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  void *local_70;
  int local_68;
  undefined2 *local_60;
  undefined8 uStack_58;
  undefined2 *local_50;
  int iStack_48;
  int iStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_50 = *(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_50,&local_60);
  FUN_140056680(&local_70);
  uVar5 = local_68 - 1;
  if (local_68 == 0) {
    uVar5 = 0;
  }
  uVar11 = (int)uStack_58 - 1;
  if ((int)uStack_58 == 0) {
    uVar11 = 0;
  }
  uVar2 = uVar11 - uVar5;
  if ((int)uVar11 <= (int)(uVar11 - uVar5)) {
    uVar2 = uVar11;
  }
  uVar3 = (ulonglong)uVar2;
  if ((int)uVar2 < 1) {
    uVar3 = 0;
  }
  uVar11 = uVar11 - (int)uVar3;
  if ((int)uVar5 < (int)uVar11) {
    uVar11 = uVar5;
  }
  iVar8 = (int)uStack_58;
  if (0 < (int)uVar11) {
    iVar8 = (int)uStack_58 - (uVar11 + (int)uVar3);
    if (iVar8 != 0) {
      memmove(local_60 + uVar3,local_60 + uVar3 + uVar11,(longlong)iVar8 * 2);
    }
    iVar8 = (int)uStack_58 - uVar11;
  }
  puVar9 = local_60;
  local_50 = local_60;
  iStack_44 = uStack_58._4_4_;
  local_60 = (undefined2 *)0x0;
  uStack_58 = 0;
  iStack_48 = iVar8;
  if ((local_70 != (void *)0x0) && (FUN_1400020a8(), local_60 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  uVar5 = *(uint *)(*(longlong *)(param_1 + 0x70) + 0xc);
  if ((int)uVar5 < DAT_14c9647dc) {
    lVar6 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
  }
  else {
    lVar6 = 0;
  }
  if (((char)param_4 < '\0') && ((*(uint *)(lVar6 + 8) & 0x2000000) != 0)) {
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 0x20);
    if (plVar1 != (longlong *)0x0) {
      lVar6 = FUN_1449e2fb2();
      if ((*(int *)(lVar6 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
          lVar6 + 0x30)) {
        puVar10 = puVar9;
        if (iVar8 == 0) {
          puVar10 = &DAT_149dfb77a;
        }
        local_70 = (void *)plVar1[3];
        FUN_1400021e4(&local_70,&local_60);
        puVar7 = &DAT_149dfb77a;
        if ((int)uStack_58 != 0) {
          puVar7 = local_60;
        }
        uVar4 = (**(code **)(*plVar1 + 0x308))(plVar1);
        local_78 = puVar10;
        FUN_140002266(param_2,L"%s%s::F%s",uVar4,puVar7);
        if (local_60 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1468db65d;
      }
    }
  }
  else {
    lVar6 = FUN_14570ab3e();
    if ((lVar6 != 0) &&
       ((lVar6 = FUN_14570ab3e(*(undefined8 *)(param_1 + 0x70)), (char)param_4 < '\0' &&
        ((*(uint *)(lVar6 + 0xd4) & 0x80) == 0)))) {
      FUN_1468f9fe9(&local_60,&local_50,0,&DAT_149dfb77a);
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      local_50 = local_60;
      iStack_48 = (int)uStack_58;
      iStack_44 = uStack_58._4_4_;
      lVar6 = FUN_14570ab3e(*(undefined8 *)(param_1 + 0x70));
      local_60 = *(undefined2 **)(lVar6 + 0x18);
      FUN_1400021e4(&local_60,&local_70);
      FUN_1468f9fe9(&local_60,&local_70,0,&DAT_149dfb77a);
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      puVar9 = &DAT_149dfb77a;
      if ((int)uStack_58 != 0) {
        puVar9 = local_60;
      }
      puVar10 = &DAT_149dfb77a;
      if (iStack_48 != 0) {
        puVar10 = local_50;
      }
      FUN_140002266(&local_70,L"%s__%s",puVar10,puVar9);
      _Src = local_70;
      iStack_48 = local_68;
      if (local_68 == 0 && iStack_44 == 0) {
        iStack_44 = 0;
      }
      else {
        FUN_1446dd670(&local_50,local_68);
        if (local_68 != 0) {
          memcpy(local_50,_Src,(longlong)local_68 * 2);
        }
      }
      if (local_70 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_60 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
    if ((param_4 & 8) != 0) {
      FUN_1400020e8(&local_50,L"__SinglecastDelegate",0x14);
    }
  }
  FUN_140056680(&local_60,&DAT_149e25bf0);
  FUN_144a7dea0(param_2,&local_60,&local_50);
  puVar9 = local_50;
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
    puVar9 = local_50;
  }
LAB_1468db65d:
  if (puVar9 != (undefined2 *)0x0) {
    FUN_1400020a8(puVar9);
  }
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468db6aa FUN_1468db6aa body=235 status=ok
// SIG undefined FUN_1468db6aa(void)

void FUN_1468db6aa(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_20 = param_2;
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x88))();
    if (cVar1 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
    }
    else {
      local_38 = 0;
      uStack_30 = 0;
      cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar1 == '\0') {
        param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
        if (param_3 != &local_38) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,&local_38,param_3,(int)param_1[6]);
          }
          else {
            memcpy(&local_38,param_3,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_38);
      }
      param_3 = &local_38;
    }
  }
  FUN_142813ecc(&local_20,param_3);
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468db796 FUN_1468db796 body=305 status=ok
// SIG undefined FUN_1468db796(void)

void FUN_1468db796(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 *_Dst;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar1 != '\0') {
      local_48 = 0;
      uStack_40 = 0;
      local_58 = param_7;
      FUN_1468db8cd(&local_48,param_1[0xe],param_2,param_5);
      cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar1 == '\0') {
        _Dst = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (_Dst != &local_48) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_48,(int)param_1[6]);
          }
          else {
            memcpy(_Dst,&local_48,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_48);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
    }
    param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
  }
  local_58 = param_7;
  FUN_1468db8cd(param_3,param_1[0xe],param_2,param_5);
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468db8cd FUN_1468db8cd body=1941 status=ok
// SIG undefined FUN_1468db8cd(void)

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

wchar_t * FUN_1468db8cd(undefined8 *param_1,wchar_t *param_2,longlong param_3,longlong param_4,
                       undefined8 param_5)

{
  wchar_t wVar1;
  ushort uVar2;
  int iVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  wchar_t *pwVar9;
  wchar_t *pwVar10;
  uint uVar11;
  wchar_t *pwVar12;
  undefined2 *puVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_10d8 [32];
  wchar_t *local_10b8;
  wchar_t *local_10b0;
  undefined8 *local_10a8;
  undefined2 *local_10a0;
  int local_1098;
  wchar_t *local_1090;
  int local_1088;
  wchar_t *local_1080;
  longlong local_1078;
  undefined4 local_1070;
  undefined2 local_106c;
  undefined1 local_106a;
  wchar_t *local_1068;
  longlong local_1060;
  undefined4 local_1058;
  undefined2 local_1054;
  undefined1 local_1052;
  undefined8 local_1050;
  wchar_t local_1048;
  undefined6 uStack_1046;
  int local_1040;
  wchar_t local_848 [1024];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_10d8;
  param_3 = param_3 + -4;
  do {
    iVar3 = iswspace(*(wint_t *)(param_3 + 4));
    param_3 = param_3 + 2;
  } while (iVar3 != 0);
  do {
    lVar6 = param_3;
    uVar2 = *(ushort *)(lVar6 + 2);
    param_3 = lVar6 + 2;
  } while (uVar2 == 0x28);
  lVar7 = 0;
  for (uVar8 = 0;
      (((0x2e < uVar2 || ((0x420000000001U >> ((ulonglong)uVar2 & 0x3f) & 1) == 0)) &&
       (uVar2 != 0x2c)) && (uVar8 < 0x400)); uVar8 = uVar8 + 1) {
    *(ushort *)((longlong)local_848 + lVar7) = uVar2;
    uVar2 = *(ushort *)(lVar6 + 4 + lVar7);
    lVar7 = lVar7 + 2;
  }
  if (lVar7 != 0x800) {
    *(undefined2 *)((longlong)local_848 + lVar7) = 0;
    if (uVar2 == 0x29) {
      iVar3 = wcscmp(local_848,L"null");
      bVar15 = iVar3 == 0;
      lVar6 = lVar7 + (ulonglong)bVar15 * 2;
      uVar2 = *(ushort *)(param_3 + lVar6);
    }
    else {
      bVar15 = false;
      lVar6 = lVar7;
    }
    pwVar9 = (wchar_t *)(param_3 + lVar6);
    if (uVar2 == 0x2e) {
      uVar8 = 0;
      while( true ) {
        pwVar9 = pwVar9 + 1;
        wVar1 = *pwVar9;
        if (((wVar1 == L'\0') || (wVar1 == L')')) || ((wVar1 == L',' || (0x3ff < uVar8)))) break;
        (&local_1048)[uVar8] = wVar1;
        uVar8 = uVar8 + 1;
      }
      if (uVar8 != 0x400) {
        (&local_1048)[uVar8] = L'\0';
        if (bVar15) goto LAB_1468dba93;
        lVar6 = 0;
        local_10a8 = param_1;
LAB_1468dbb78:
        FUN_140056680(&local_1068,local_848);
        uVar4 = FUN_144a797b2();
        lVar5 = FUN_1427dcdfa(uVar4,&local_1068,0);
        if (local_1068 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        pwVar10 = pwVar9;
        if (lVar5 == 0) {
          bVar15 = lVar6 == 0;
          if (param_4 != 0 && bVar15) {
            do {
              uVar4 = FUN_1446f8646();
              lVar6 = FUN_140277b32(uVar4,param_4,local_848,0);
              bVar15 = lVar6 == 0;
              if (!bVar15) break;
              param_4 = *(longlong *)(param_4 + 0x20);
            } while (param_4 != 0);
          }
          if (bVar15) {
            uVar4 = FUN_1446f8646();
            local_10b8 = (wchar_t *)0x0;
            lVar5 = 0;
            lVar6 = FUN_140277cc4(uVar4,local_848,0xc,0);
            if (lVar6 == 0) {
              lVar6 = 0;
              goto LAB_1468dbc87;
            }
          }
          lVar5 = *(longlong *)(lVar6 + 0x10);
        }
        else {
          lVar6 = *(longlong *)(lVar5 + 0x110);
          if (lVar6 == 0) {
            FUN_140aa6c08(lVar5);
            lVar6 = *(longlong *)(lVar5 + 0x110);
          }
        }
LAB_1468dbc87:
        FUN_1446f470e(&local_1068,&local_1048,0);
        pwVar9 = (wchar_t *)FUN_1412964e9(lVar5,local_1068,3);
        if (pwVar9 == (wchar_t *)0x0) {
          if (lVar5 == 0) {
            FUN_140056680(&local_1068,&DAT_149e01fe8);
          }
          else {
            local_1080 = *(wchar_t **)(lVar5 + 0x18);
            FUN_1400021e4(&local_1080,&local_1068);
          }
          puVar14 = local_10a8;
          local_10b0 = local_1068;
          if ((int)local_1060 == 0) {
            local_10b0 = L"";
          }
          local_10b8 = local_848;
          FUN_146816218(param_5,3,
                        L"Unable to find function %s in object %s for delegate (found class: %s)",
                        &local_1048);
          pwVar9 = local_1068;
LAB_1468dbf75:
          if (pwVar9 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          bVar15 = false;
          uVar4 = 0;
          lVar7 = 0;
        }
        else {
          if ((char)pwVar9[0x5a] != (char)param_2[0x5a]) {
            local_1080 = *(wchar_t **)(param_2 + 0xc);
            FUN_1400021e4(&local_1080,&local_1068);
            puVar14 = local_10a8;
            pwVar12 = L"";
            if ((int)local_1060 != 0) {
              pwVar12 = local_1068;
            }
            local_1090 = *(wchar_t **)(pwVar9 + 0xc);
            FUN_1400021e4(&local_1090,&local_1080);
            pwVar9 = L"";
            if ((int)local_1078 != 0) {
              pwVar9 = local_1080;
            }
            local_10b8 = pwVar12;
            FUN_146816218(param_5,3,
                          L"Function %s does not match number of params with delegate signature %s",
                          pwVar9);
            pwVar9 = local_1068;
            if (local_1080 != (wchar_t *)0x0) {
              FUN_1400020a8();
              pwVar9 = local_1068;
            }
            goto LAB_1468dbf75;
          }
          local_1060 = *(longlong *)(pwVar9 + 0x28);
          local_1058 = 0xffffffff;
          local_1054 = 0x101;
          local_1052 = 0;
          local_1068 = pwVar9;
          FUN_144a2daf0();
          if (param_2 == (wchar_t *)0x0) {
            local_1078 = 0;
          }
          else {
            local_1078 = *(longlong *)(param_2 + 0x28);
          }
          local_1070 = 0xffffffff;
          local_106c = 0x101;
          local_106a = 0;
          local_1080 = param_2;
          FUN_144a2daf0();
          if ((char)param_2[0x5a] != '\0') {
            uVar11 = 0;
            do {
              if ((*(longlong *)(local_1060 + 8) != *(longlong *)(local_1078 + 8)) ||
                 (((*(uint *)(local_1078 + 0x38) ^ *(uint *)(local_1060 + 0x38)) >> 8 & 1) != 0)) {
                local_10a0 = *(undefined2 **)(param_2 + 0xc);
                FUN_1400021e4(&local_10a0,&local_1090);
                pwVar12 = L"";
                if (local_1088 != 0) {
                  pwVar12 = local_1090;
                }
                local_1050 = *(undefined8 *)(pwVar9 + 0xc);
                FUN_1400021e4(&local_1050,&local_10a0);
                puVar14 = local_10a8;
                puVar13 = &DAT_149dfb77a;
                if (local_1098 != 0) {
                  puVar13 = local_10a0;
                }
                local_10b8 = pwVar12;
                FUN_146816218(param_5,3,
                              L"Function %s does not match param types with delegate signature %s",
                              puVar13);
                pwVar9 = local_1090;
                if (local_10a0 != (undefined2 *)0x0) {
                  FUN_1400020a8();
                  pwVar9 = local_1090;
                }
                goto LAB_1468dbf75;
              }
              local_1060 = *(longlong *)(local_1060 + 0x18);
              FUN_144a2daf0(&local_1068);
              local_1078 = *(longlong *)(local_1078 + 0x18);
              FUN_144a2daf0(&local_1080);
              uVar11 = uVar11 + 1;
            } while (uVar11 < (byte)param_2[0x5a]);
          }
          uVar4 = *(undefined8 *)(pwVar9 + 0xc);
          bVar15 = true;
          lVar7 = lVar6;
          puVar14 = local_10a8;
        }
        FUN_14485c47a(puVar14,lVar7);
        puVar14[1] = uVar4;
        pwVar9 = (wchar_t *)0x0;
        if (bVar15) {
          pwVar9 = pwVar10;
        }
        if (lVar6 == 0) {
          pwVar9 = (wchar_t *)0x0;
        }
        goto LAB_1468db980;
      }
    }
    else {
      if (param_4 == 0) {
        local_1068 = (wchar_t *)param_1[1];
        FUN_1400021e4(&local_1068,&local_1048);
        if (param_2 == (wchar_t *)0x0) {
          FUN_140056680(&local_1068,&DAT_149e01fe8);
        }
        else {
          local_1080 = *(wchar_t **)(param_2 + 0xc);
          FUN_1400021e4(&local_1080,&local_1068);
        }
        puVar13 = &DAT_149dfb77a;
        local_10b8 = L"";
        if ((int)local_1060 != 0) {
          local_10b8 = local_1068;
        }
        if (local_1040 != 0) {
          puVar13 = (undefined2 *)CONCAT62(uStack_1046,local_1048);
        }
        FUN_146816218(param_5,3,
                      L"Cannot import unqualified delegate name; no object to search. Delegate=%s SignatureFunction=%s"
                      ,puVar13);
        if (local_1068 != (wchar_t *)0x0) {
          FUN_1400020a8();
        }
        pwVar9 = (wchar_t *)CONCAT62(uStack_1046,local_1048);
      }
      else {
        if (((*(uint *)(param_4 + 8) & 0x10) != 0) ||
           (lVar6 = *(longlong *)(param_4 + 0x20),
           (*(uint *)(*(longlong *)(param_4 + 0x20) + 8) & 0x10) == 0)) {
          lVar6 = param_4;
        }
        lVar5 = *(longlong *)(lVar6 + 0x10);
        local_10a8 = param_1;
        wcsncpy(&local_1048,local_848,uVar8);
        *(undefined2 *)((longlong)&local_1048 + lVar7) = 0;
        param_1 = local_10a8;
        if (!bVar15) {
          pwVar10 = pwVar9;
          if (lVar5 == 0) goto LAB_1468dbb78;
          goto LAB_1468dbc87;
        }
LAB_1468dba93:
        FUN_1446f470e(&local_10a0,&local_1048,1);
        if (local_10a0 == (undefined2 *)0x0) {
          *param_1 = 0;
          param_1[1] = 0;
          goto LAB_1468db980;
        }
        local_1080 = (wchar_t *)param_1[1];
        FUN_1400021e4(&local_1080,&local_1068);
        if (param_2 == (wchar_t *)0x0) {
          FUN_140056680(&local_1080,&DAT_149e01fe8);
        }
        else {
          local_1090 = *(wchar_t **)(param_2 + 0xc);
          FUN_1400021e4(&local_1090,&local_1080);
        }
        local_10b0 = L"";
        if ((int)local_1078 != 0) {
          local_10b0 = local_1080;
        }
        local_10b8 = L"";
        if ((int)local_1060 != 0) {
          local_10b8 = local_1068;
        }
        FUN_146816218(param_5,3,
                      L"Cannot import delegate with function name %s but null class. Delegate=%s SignatureFunction=%s"
                      ,local_1048);
        pwVar9 = local_1068;
        if (local_1080 != (wchar_t *)0x0) {
          FUN_1400020a8();
          pwVar9 = local_1068;
        }
      }
      if (pwVar9 != (wchar_t *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  pwVar9 = (wchar_t *)0x0;
LAB_1468db980:
  if ((local_48 ^ (ulonglong)auStack_10d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return pwVar9;
}



// FUNCTION 1468dc064 FUN_1468dc064 body=72 status=ok
// SIG undefined FUN_1468dc064(void)

undefined8 FUN_1468dc064(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x70);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x70) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1468dc0ac FUN_1468dc0ac body=140 status=ok
// SIG undefined FUN_1468dc0ac(void)

void FUN_1468dc0ac(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_14001206a();
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_18 = param_1;
      FUN_1468eaa82(lVar1 + 0x1b0);
    }
  }
  FUN_14689b13c(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc14e FUN_1468dc14e body=54 status=ok
// SIG undefined FUN_1468dc14e(void)

bool FUN_1468dc14e(undefined8 param_1)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  bVar4 = false;
  cVar1 = FUN_14280c97a(param_1,0);
  if (cVar1 != '\0') {
    lVar2 = FUN_14496b3f0(param_1);
    lVar3 = FUN_1446f8646();
    bVar4 = lVar2 != lVar3;
  }
  return bVar4;
}



// FUNCTION 1468dc184 FUN_1468dc184 body=240 status=ok
// SIG undefined FUN_1468dc184(void)

undefined4 * FUN_1468dc184(undefined4 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined1 auStack_118 [39];
  char local_f1;
  undefined1 local_f0 [120];
  undefined1 *local_78;
  undefined8 local_70;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_f1 = '\0';
  uVar1 = 0;
  local_78 = (undefined1 *)0x0;
  local_70 = 0xa00000000;
  local_40 = 0;
  local_38 = 0xa00000000;
  local_30 = 0xffffffff;
  FUN_142814050(param_2,local_f0,param_3,&local_f1);
  if (local_f1 == '\x01') {
    *param_1 = 0;
    if ((int)local_70 == 0) goto LAB_1468dc227;
    puVar2 = local_f0;
    if (local_78 != (undefined1 *)0x0) {
      puVar2 = local_78;
    }
    uVar1 = FUN_140242058(&DAT_14c952a70,puVar2);
  }
  *param_1 = uVar1;
LAB_1468dc227:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if (local_78 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc276 FUN_1468dc276 body=126 status=ok
// SIG undefined FUN_1468dc276(void)

undefined8 *
FUN_1468dc276(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468dc2f6(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea5c10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc2f6 FUN_1468dc2f6 body=126 status=ok
// SIG undefined FUN_1468dc2f6(void)

undefined8 *
FUN_1468dc2f6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468eaece(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9d7a0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc376 FUN_1468dc376 body=126 status=ok
// SIG undefined FUN_1468dc376(void)

undefined8 *
FUN_1468dc376(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468dc3f6(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea59a0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc3f6 FUN_1468dc3f6 body=126 status=ok
// SIG undefined FUN_1468dc3f6(void)

undefined8 *
FUN_1468dc3f6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468eafd6(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9d050;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc476 FUN_1468dc476 body=140 status=ok
// SIG undefined FUN_1468dc476(void)

void FUN_1468dc476(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_144a817a2();
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_18 = param_1;
      FUN_1468eaa82(lVar1 + 800);
    }
  }
  FUN_14689b13c(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dc504 FUN_1468dc504 body=64 status=ok
// SIG undefined FUN_1468dc504(void)

void FUN_1468dc504(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468dc544 FUN_1468dc544 body=254 status=ok
// SIG undefined FUN_1468dc544(void)

undefined8 FUN_1468dc544(longlong param_1,undefined8 param_2,longlong *param_3)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  longlong local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  for (lVar1 = *(longlong *)(param_1 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
    if ((*(byte *)(lVar1 + 0xd4) & 0x80) != 0) goto LAB_1468dc57c;
  }
  lVar1 = 0;
LAB_1468dc57c:
  local_38 = *(longlong *)(lVar1 + 0x18);
  FUN_1400021e4(&local_38,&local_48);
  puVar2 = local_48;
  if (local_40 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_38,&DAT_149e98d1a,puVar2);
  if (&local_38 == param_3) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_38;
    local_38 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_30;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_30._4_4_;
    local_30 = 0;
  }
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"TINTERFACE");
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468dc644 FUN_1468dc644 body=157 status=ok
// SIG undefined FUN_1468dc644(void)

undefined8 FUN_1468dc644(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [40];
  undefined2 *local_30;
  int local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  for (lVar1 = *(longlong *)(param_1 + 0x70); lVar1 != 0; lVar1 = *(longlong *)(lVar1 + 0x40)) {
    if ((*(byte *)(lVar1 + 0xd4) & 0x80) != 0) goto LAB_1468dc676;
  }
  lVar1 = 0;
LAB_1468dc676:
  local_20 = *(undefined8 *)(lVar1 + 0x18);
  FUN_1400021e4(&local_20,&local_30);
  puVar2 = local_30;
  if (local_28 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"class I%s;",puVar2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468dc6f8 FUN_1468dc6f8 body=554 status=ok
// SIG undefined FUN_1468dc6f8(void)

void FUN_1468dc6f8(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4,
                  undefined8 param_5,longlong param_6,uint param_7,longlong param_8)

{
  int iVar1;
  char cVar2;
  undefined2 *puVar3;
  longlong lVar4;
  undefined2 *puVar5;
  undefined1 auStack_88 [32];
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  undefined8 uStack_50;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))();
    if (cVar2 == '\0') {
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_1468dc76b;
    }
    local_48 = 0;
    uStack_40 = 0;
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 == '\0') {
      param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      lVar4 = local_48;
      if (param_3 != &local_48) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_48,param_3,(int)param_1[6]);
          lVar4 = local_48;
        }
        else {
          memcpy(&local_48,param_3,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          lVar4 = local_48;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_48);
      lVar4 = local_48;
    }
  }
  else {
LAB_1468dc76b:
    lVar4 = *param_3;
  }
  if (lVar4 == 0) {
    FUN_1400020e8(param_2,&DAT_149e01fe8,4);
    goto LAB_1468dc8ab;
  }
  if ((param_7 & 4) == 0) {
LAB_1468dc788:
    if (param_6 == 0 || (param_7 >> 0xd & 1) == 0) {
      param_8 = 0;
    }
    else {
      param_8 = FUN_144a79778(param_6);
    }
  }
  else {
    if (param_6 != 0 && param_8 == 0) {
      param_8 = FUN_144a79778(param_6);
    }
    cVar2 = FUN_144b00bde(lVar4,param_8);
    if (cVar2 == '\0') goto LAB_1468dc788;
  }
  local_58 = (undefined2 *)0x0;
  uStack_50 = 0;
  FUN_1401031ac(lVar4,param_8,&local_58);
  puVar3 = &DAT_149dfb77a;
  if ((int)uStack_50 != 0) {
    puVar3 = local_58;
  }
  local_48 = *(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x18);
  FUN_1400021e4(&local_48,&local_68);
  puVar5 = &DAT_149dfb77a;
  if (local_60 != 0) {
    puVar5 = local_68;
  }
  FUN_140002266(&local_48,L"%s\'%s\'",puVar5,puVar3);
  iVar1 = (int)uStack_40 + -1;
  if ((int)uStack_40 == 0) {
    iVar1 = 0;
  }
  FUN_1400020e8(param_2,local_48,iVar1);
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1468dc8ab:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468dc924 FUN_1468dc924 body=513 status=ok
// SIG undefined FUN_1468dc924(void)

undefined8 ****
FUN_1468dc924(longlong param_1,undefined8 ****param_2,longlong *param_3,int param_4,
             undefined8 param_5,undefined4 param_6,undefined8 param_7)

{
  char cVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 ****ppppuVar4;
  longlong lVar5;
  undefined2 *puVar6;
  longlong *plVar7;
  undefined2 *puVar8;
  undefined1 auStack_c8 [32];
  undefined8 ***local_a8;
  longlong *local_a0;
  undefined2 *local_90;
  int local_88;
  undefined2 *local_80;
  int local_78;
  undefined8 ***local_70;
  longlong *local_68;
  longlong *local_60;
  int local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  plVar7 = param_3;
  if (param_4 == 1) {
    plVar7 = (longlong *)((longlong)*(int *)(param_1 + 0x44) + (longlong)param_3);
  }
  local_48 = *plVar7;
  if ((local_48 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  local_70 = param_2;
  local_68 = plVar7;
  local_60 = param_3;
  local_58 = param_4;
  local_50 = param_1;
  uVar2 = FUN_1446f8646();
  local_a0 = &local_48;
  local_a8 = &local_70;
  cVar1 = FUN_1413627d4(param_1,param_5,uVar2,param_6);
  lVar5 = local_48;
  if (cVar1 == '\0') {
    if (*plVar7 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = plVar7[1];
    }
    FUN_142815320(&local_68,local_48,lVar5);
LAB_1468dca20:
    ppppuVar4 = (undefined8 ****)0x0;
    goto LAB_1468dca22;
  }
  if (local_48 == 0) {
    lVar5 = 0;
LAB_1468dca55:
    lVar3 = 0;
  }
  else {
    lVar3 = FUN_144718840(local_48,*(undefined8 *)(param_1 + 0x70));
    if (lVar3 == 0) {
      cVar1 = FUN_144a7ff9e(*(undefined8 *)(lVar5 + 0x10),*(undefined8 *)(param_1 + 0x70));
      if (cVar1 == '\0') {
        local_90 = *(undefined2 **)(*(longlong *)(param_1 + 0x70) + 0x18);
        FUN_1400021e4(&local_90,&local_80);
        puVar6 = &DAT_149dfb77a;
        if (local_78 != 0) {
          puVar6 = local_80;
        }
        FUN_14689aefa(param_1,&local_90);
        puVar8 = &DAT_149dfb77a;
        if (local_88 != 0) {
          puVar8 = local_90;
        }
        local_a8 = param_2;
        FUN_140047918(param_7,
                      L"%s: specified object doesn\'t implement the required interface class \'%s\': %s"
                      ,puVar8,puVar6);
        if (local_90 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_80 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        goto LAB_1468dca20;
      }
      goto LAB_1468dca55;
    }
  }
  FUN_142815320(&local_68,lVar5,lVar3);
  ppppuVar4 = (undefined8 ****)local_70;
LAB_1468dca22:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return ppppuVar4;
}



// FUNCTION 1468dcb26 FUN_1468dcb26 body=72 status=ok
// SIG undefined FUN_1468dcb26(void)

undefined8 FUN_1468dcb26(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x70);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x70) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1468dcb6e FUN_1468dcb6e body=176 status=ok
// SIG undefined FUN_1468dcb6e(void)

undefined8 * FUN_1468dcb6e(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_1456ac994();
  puVar1[1] = &DAT_14c951e88;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149ea60f0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468dcc20(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dcc20 FUN_1468dcc20 body=126 status=ok
// SIG undefined FUN_1468dcc20(void)

undefined8 *
FUN_1468dcc20(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468dcca0(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea60f0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dcca0 FUN_1468dcca0 body=134 status=ok
// SIG undefined FUN_1468dcca0(void)

undefined8 *
FUN_1468dcca0(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468eb0de(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9bdd0;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dcd28 FUN_1468dcd28 body=223 status=ok
// SIG undefined FUN_1468dcd28(void)

undefined8 FUN_1468dcd28(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1[0xe] + 0x18);
  FUN_1400021e4(local_48,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x308))();
  FUN_140002266(local_48,L"%s%s",uVar1,puVar2);
  local_68 = local_48;
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468dce08 FUN_1468dce08 body=55 status=ok
// SIG undefined FUN_1468dce08(void)

undefined8
FUN_1468dce08(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_5;
  }
  FUN_140002266(param_2,L"TLazyObjectPtr<%s>",puVar1);
  return param_2;
}



// FUNCTION 1468dce40 FUN_1468dce40 body=159 status=ok
// SIG undefined FUN_1468dce40(void)

undefined8 FUN_1468dce40(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468dcee0 FUN_1468dcee0 body=258 status=ok
// SIG undefined FUN_1468dcee0(void)

undefined8 FUN_1468dcee0(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(&local_40,L"TLazyObjectPtr<%s%s>",uVar1,puVar2);
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
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"LAZYOBJECT");
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468dcfe4 FUN_1468dcfe4 body=54 status=ok
// SIG undefined FUN_1468dcfe4(void)

ulonglong * FUN_1468dcfe4(undefined8 param_1,ulonglong *param_2)

{
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  *param_2 = (ulonglong)DAT_14c892b88;
  return param_2;
}



// FUNCTION 1468dd01a FUN_1468dd01a body=212 status=ok
// SIG undefined FUN_1468dd01a(void)

void FUN_1468dd01a(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(*param_2 + 8);
  if ((*(byte *)(lVar2 + 0x2b) & 6) != 2) {
    lVar1 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
    (**(code **)(**(longlong **)(*param_2 + 8) + 0x140))(*(longlong **)(*param_2 + 8),param_3);
    if (((*(byte *)(lVar2 + 0x28) & 1) != 0) || ((*(byte *)(lVar2 + 0x2b) & 4) != 0)) {
      lVar2 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
      if (lVar1 != lVar2) {
        local_38 = lVar1;
        if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
          FUN_1456cec3c(lVar1);
        }
        (**(code **)(*param_1 + 0x230))(param_1,param_3,&local_38);
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dd0f0 FUN_1468dd0f0 body=2635 status=ok
// SIG undefined FUN_1468dd0f0(void)

undefined8 FUN_1468dd0f0(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  bool bVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == (undefined8 *)0x0) {
    local_38 = 0;
    uStack_30 = 0;
    local_28 = 0;
  }
  else {
    local_28 = param_2[2];
    local_38 = *param_2;
    uStack_30 = param_2[1];
  }
  if (param_3 == (undefined8 *)0x0) {
    local_58 = 0;
    iStack_50 = 0;
    iStack_4c = 0;
    local_48 = 0;
  }
  else {
    local_48 = param_3[2];
    local_58 = *param_3;
    iStack_50 = *(int *)(param_3 + 1);
    iStack_4c = *(int *)((longlong)param_3 + 0xc);
  }
  if ((((param_4 >> 0x16 & 1) == 0) && ((int)uStack_30 == iStack_50)) &&
     (uStack_30._4_4_ == iStack_4c)) {
    if ((int)local_28 == (int)local_48) {
      uVar5 = CONCAT71((uint7)(uint3)((ulonglong)local_48 >> 8),1);
      if (local_28._4_4_ == local_48._4_4_) goto LAB_1468dd1ca;
    }
  }
  lVar3 = FUN_14479d2ce(&local_38);
  if (lVar3 == 0) {
    if (((uStack_30._4_4_ != 0 || (int)uStack_30 != 0) || (int)local_28 != 0) || local_28._4_4_ != 0
       ) {
      lVar3 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar3 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(&local_38,lVar3);
        if (lVar3 == 0) goto LAB_1468dd1c8;
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
          FUN_14485c47a(&local_38,lVar3);
        }
      }
      if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1468dd181;
    }
  }
  else {
LAB_1468dd181:
    lVar3 = FUN_14479d2ce(&local_58);
    if (lVar3 == 0) {
      if (((iStack_4c != 0 || iStack_50 != 0) || (int)local_48 != 0) || local_48._4_4_ != 0) {
        lVar3 = thunk_FUN_140971090();
        cVar2 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar3 == 0) || (cVar2 == '\0')) {
          FUN_14485c47a(&local_58,lVar3);
          if (lVar3 == 0) goto LAB_1468dd1c8;
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
            FUN_14485c47a(&local_58,lVar3);
          }
        }
        if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1468dd194;
      }
    }
    else {
LAB_1468dd194:
      lVar3 = FUN_14479d2ce(&local_38);
      if (lVar3 == 0) {
        if (((uStack_30._4_4_ == 0 && (int)uStack_30 == 0) && (int)local_28 == 0) &&
            local_28._4_4_ == 0) {
LAB_1468dd541:
          lVar3 = 0;
        }
        else {
          lVar4 = thunk_FUN_140971090();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar4 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(&local_38,lVar4);
            if (lVar4 == 0) goto LAB_1468dd541;
          }
          else {
            uVar1 = *(uint *)(lVar4 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar3 = 0;
            }
            if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(&local_38,lVar4);
            }
          }
          lVar3 = 0;
          if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
            lVar3 = lVar4;
          }
        }
      }
      lVar3 = *(longlong *)(lVar3 + 0x10);
      lVar4 = FUN_14479d2ce(&local_58);
      if (lVar4 == 0) {
        if (((iStack_4c == 0 && iStack_50 == 0) && (int)local_48 == 0) && local_48._4_4_ == 0) {
LAB_1468dd55e:
          lVar4 = 0;
        }
        else {
          lVar6 = thunk_FUN_140971090();
          cVar2 = (*(code *)PTR_FUN_14c758760)();
          if ((lVar6 == 0) || (cVar2 == '\0')) {
            FUN_14485c47a(&local_58,lVar6);
            if (lVar6 == 0) goto LAB_1468dd55e;
          }
          else {
            uVar1 = *(uint *)(lVar6 + 0xc);
            if ((int)uVar1 < DAT_14c9647dc) {
              lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
            }
            else {
              lVar4 = 0;
            }
            if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
              FUN_14485c47a(&local_58,lVar6);
            }
          }
          lVar4 = 0;
          if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
            lVar4 = lVar6;
          }
        }
      }
      if (lVar3 == *(longlong *)(lVar4 + 0x10)) {
        if ((param_4 & 0x300) == 0x200) {
          lVar3 = FUN_14479d2ce(&local_38);
          if (lVar3 == 0) {
            if (((uStack_30._4_4_ != 0 || (int)uStack_30 != 0) || (int)local_28 != 0) ||
                local_28._4_4_ != 0) {
              lVar3 = thunk_FUN_140971090();
              cVar2 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar3 == 0) || (cVar2 == '\0')) {
                FUN_14485c47a(&local_38,lVar3);
                if (lVar3 == 0) goto LAB_1468dd945;
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
                  FUN_14485c47a(&local_38,lVar3);
                }
              }
              if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1468dd3cd;
            }
LAB_1468dd945:
            bVar7 = false;
          }
          else {
LAB_1468dd3cd:
            do {
              bVar7 = (*(uint *)(lVar3 + 8) & 0x30) != 0;
              if (bVar7) break;
              lVar3 = *(longlong *)(lVar3 + 0x20);
            } while (lVar3 != 0);
          }
          lVar3 = FUN_14479d2ce(&local_58);
          if (lVar3 == 0) {
            if (((iStack_4c != 0 || iStack_50 != 0) || (int)local_48 != 0) || local_48._4_4_ != 0) {
              lVar3 = thunk_FUN_140971090();
              cVar2 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar3 == 0) || (cVar2 == '\0')) {
                FUN_14485c47a(&local_58,lVar3);
                if (lVar3 == 0) goto LAB_1468dd40a;
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
                  FUN_14485c47a(&local_58,lVar3);
                }
              }
              if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) goto LAB_1468dd3f6;
            }
          }
          else {
LAB_1468dd3f6:
            do {
              if ((*(uint *)(lVar3 + 8) & 0x30) != 0) {
                if (!bVar7) goto LAB_1468dd439;
                goto LAB_1468dd1c8;
              }
              lVar3 = *(longlong *)(lVar3 + 0x20);
            } while (lVar3 != 0);
          }
LAB_1468dd40a:
          if (bVar7) {
LAB_1468dd439:
            lVar3 = FUN_14479d2ce(&local_38);
            if (lVar3 == 0) {
              if (((uStack_30._4_4_ == 0 && (int)uStack_30 == 0) && (int)local_28 == 0) &&
                  local_28._4_4_ == 0) {
LAB_1468dd8c1:
                lVar3 = 0;
              }
              else {
                lVar4 = thunk_FUN_140971090();
                cVar2 = (*(code *)PTR_FUN_14c758760)();
                if ((lVar4 == 0) || (cVar2 == '\0')) {
                  FUN_14485c47a(&local_38,lVar4);
                  if (lVar4 == 0) goto LAB_1468dd8c1;
                }
                else {
                  uVar1 = *(uint *)(lVar4 + 0xc);
                  if ((int)uVar1 < DAT_14c9647dc) {
                    lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  }
                  else {
                    lVar3 = 0;
                  }
                  if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
                    FUN_14485c47a(&local_38,lVar4);
                  }
                }
                lVar3 = 0;
                if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
                  lVar3 = lVar4;
                }
              }
            }
            lVar3 = *(longlong *)(lVar3 + 0x18);
            lVar4 = FUN_14479d2ce(&local_58);
            if (lVar4 == 0) {
              if (((iStack_4c == 0 && iStack_50 == 0) && (int)local_48 == 0) && local_48._4_4_ == 0)
              {
LAB_1468dd8de:
                lVar4 = 0;
              }
              else {
                lVar6 = thunk_FUN_140971090();
                cVar2 = (*(code *)PTR_FUN_14c758760)();
                if ((lVar6 == 0) || (cVar2 == '\0')) {
                  FUN_14485c47a(&local_58,lVar6);
                  if (lVar6 == 0) goto LAB_1468dd8de;
                }
                else {
                  uVar1 = *(uint *)(lVar6 + 0xc);
                  if ((int)uVar1 < DAT_14c9647dc) {
                    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                  }
                  else {
                    lVar4 = 0;
                  }
                  if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
                    FUN_14485c47a(&local_58,lVar6);
                  }
                }
                lVar4 = 0;
                if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
                  lVar4 = lVar6;
                }
              }
            }
            if (lVar3 == *(longlong *)(lVar4 + 0x18)) {
              lVar3 = FUN_14479d2ce(&local_38);
              if (lVar3 == 0) {
                if (((uStack_30._4_4_ == 0 && (int)uStack_30 == 0) && (int)local_28 == 0) &&
                    local_28._4_4_ == 0) {
LAB_1468dd8fb:
                  lVar3 = 0;
                }
                else {
                  lVar4 = thunk_FUN_140971090();
                  cVar2 = (*(code *)PTR_FUN_14c758760)();
                  if ((lVar4 == 0) || (cVar2 == '\0')) {
                    FUN_14485c47a(&local_38,lVar4);
                    if (lVar4 == 0) goto LAB_1468dd8fb;
                  }
                  else {
                    uVar1 = *(uint *)(lVar4 + 0xc);
                    if ((int)uVar1 < DAT_14c9647dc) {
                      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                    }
                    else {
                      lVar3 = 0;
                    }
                    if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
                      FUN_14485c47a(&local_38,lVar4);
                    }
                  }
                  lVar3 = 0;
                  if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
                    lVar3 = lVar4;
                  }
                }
              }
              uVar5 = *(undefined8 *)(lVar3 + 0x10);
              lVar3 = FUN_14479d2ce(&local_38);
              if (lVar3 == 0) {
                if (((uStack_30._4_4_ == 0 && (int)uStack_30 == 0) && (int)local_28 == 0) &&
                    local_28._4_4_ == 0) {
LAB_1468dd918:
                  lVar3 = 0;
                }
                else {
                  lVar4 = thunk_FUN_140971090();
                  cVar2 = (*(code *)PTR_FUN_14c758760)();
                  if ((lVar4 == 0) || (cVar2 == '\0')) {
                    FUN_14485c47a(&local_38,lVar4);
                    if (lVar4 == 0) goto LAB_1468dd918;
                  }
                  else {
                    uVar1 = *(uint *)(lVar4 + 0xc);
                    if ((int)uVar1 < DAT_14c9647dc) {
                      lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                    }
                    else {
                      lVar3 = 0;
                    }
                    if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
                      FUN_14485c47a(&local_38,lVar4);
                    }
                  }
                  lVar3 = 0;
                  if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
                    lVar3 = lVar4;
                  }
                }
              }
              lVar3 = FUN_1468915d4(uVar5,*(undefined8 *)(lVar3 + 0x18));
              if (lVar3 != 0) {
                lVar3 = FUN_14479d2ce(&local_58);
                if (lVar3 == 0) {
                  if (((iStack_4c == 0 && iStack_50 == 0) && (int)local_48 == 0) &&
                      local_48._4_4_ == 0) {
LAB_1468dd4d4:
                    lVar3 = 0;
                  }
                  else {
                    lVar4 = thunk_FUN_140971090();
                    cVar2 = (*(code *)PTR_FUN_14c758760)();
                    if ((lVar4 == 0) || (cVar2 == '\0')) {
                      FUN_14485c47a(&local_58,lVar4);
                      if (lVar4 == 0) goto LAB_1468dd4d4;
                    }
                    else {
                      uVar1 = *(uint *)(lVar4 + 0xc);
                      if ((int)uVar1 < DAT_14c9647dc) {
                        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                      }
                      else {
                        lVar3 = 0;
                      }
                      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
                        FUN_14485c47a(&local_58,lVar4);
                      }
                    }
                    lVar3 = 0;
                    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
                      lVar3 = lVar4;
                    }
                  }
                }
                lVar4 = FUN_14479d2ce(&local_38);
                if (lVar4 == 0) {
                  if (((uStack_30._4_4_ == 0 && (int)uStack_30 == 0) && (int)local_28 == 0) &&
                      local_28._4_4_ == 0) {
LAB_1468dd4fb:
                    lVar4 = 0;
                  }
                  else {
                    lVar6 = thunk_FUN_140971090();
                    cVar2 = (*(code *)PTR_FUN_14c758760)();
                    if ((lVar6 == 0) || (cVar2 == '\0')) {
                      FUN_14485c47a(&local_38,lVar6);
                      if (lVar6 == 0) goto LAB_1468dd4fb;
                    }
                    else {
                      uVar1 = *(uint *)(lVar6 + 0xc);
                      if ((int)uVar1 < DAT_14c9647dc) {
                        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
                      }
                      else {
                        lVar4 = 0;
                      }
                      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
                        FUN_14485c47a(&local_38,lVar6);
                      }
                    }
                    lVar4 = 0;
                    if ((*(uint *)(lVar6 + 8) >> 0x1e & 1) == 0) {
                      lVar4 = lVar6;
                    }
                  }
                }
                uVar5 = FUN_1468d9831(lVar4,lVar3,param_4);
                goto LAB_1468dd1ca;
              }
            }
          }
        }
        else if ((param_4 >> 8 & 1) != 0) goto LAB_1468dd439;
      }
    }
  }
LAB_1468dd1c8:
  uVar5 = 0;
LAB_1468dd1ca:
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1468ddb3c FUN_1468ddb3c body=168 status=ok
// SIG undefined FUN_1468ddb3c(void)

longlong FUN_1468ddb3c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce(param_2);
  if (lVar3 != 0) {
    return lVar3;
  }
  if (((*(int *)(param_2 + 0xc) == 0 && *(int *)(param_2 + 8) == 0) && *(int *)(param_2 + 0x10) == 0
      ) && *(int *)(param_2 + 0x14) == 0) {
LAB_1468ddbb7:
    lVar4 = 0;
  }
  else {
    lVar3 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_1468ddbb7;
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
        FUN_14485c47a(param_2,lVar3);
      }
    }
    lVar4 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      lVar4 = lVar3;
    }
  }
  return lVar4;
}



// FUNCTION 1468ddbe4 FUN_1468ddbe4 body=206 status=ok
// SIG undefined FUN_1468ddbe4(void)

longlong * FUN_1468ddbe4(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce(param_3);
  if (lVar3 == 0) {
    if (((*(int *)(param_3 + 0xc) == 0 && *(int *)(param_3 + 8) == 0) &&
        *(int *)(param_3 + 0x10) == 0) && *(int *)(param_3 + 0x14) == 0) {
LAB_1468ddc77:
      *param_2 = 0;
      return param_2;
    }
    lVar4 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_3,lVar4);
      if (lVar4 == 0) goto LAB_1468ddc77;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_3,lVar4);
      }
    }
    lVar3 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      lVar3 = lVar4;
    }
  }
  *param_2 = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  return param_2;
}



// FUNCTION 1468ddcb2 FUN_1468ddcb2 body=85 status=ok
// SIG undefined FUN_1468ddcb2(void)

undefined8 FUN_1468ddcb2(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = 0;
  local_28 = 1;
  FUN_1468ddd08(param_1,&local_18,param_2,param_3);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ddd08 FUN_1468ddd08 body=882 status=ok
// SIG undefined FUN_1468ddd08(void)

void FUN_1468ddd08(longlong *param_1,longlong *param_2,longlong param_3,int param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  void *pvVar6;
  ulonglong uVar7;
  undefined8 *_Src;
  void *_Src_00;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar3 = (**(code **)(*param_1 + 0x88))();
  if (cVar3 == '\0') {
    if (param_5 == 0) goto LAB_1468ddda1;
    iVar1 = *(int *)((longlong)param_1 + 0x34);
    lVar4 = (longlong)param_4 * (longlong)iVar1 + param_3 + *(int *)((longlong)param_1 + 0x44);
    if (param_5 != 1) {
      uVar7 = 0;
      do {
        lVar5 = (**(code **)(*param_1 + 0x210))(param_1,lVar4);
        param_2[uVar7] = lVar5;
        uVar7 = uVar7 + 1;
        lVar4 = lVar4 + iVar1;
      } while (param_5 != uVar7);
      goto LAB_1468ddda1;
    }
    lVar4 = (**(code **)(*param_1 + 0x210))(param_1,lVar4);
  }
  else {
    if (param_5 != 1) {
      pvVar6 = (void *)FUN_1468c8356(param_1);
      cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar3 == '\0') {
        _Src_00 = (void *)(param_3 + *(int *)((longlong)param_1 + 0x44));
        if (_Src_00 != pvVar6) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,pvVar6,_Src_00,(int)param_1[6]);
          }
          else {
            memcpy(pvVar6,_Src_00,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,pvVar6);
      }
      if (param_5 != 0) {
        pvVar6 = (void *)((longlong)pvVar6 + (longlong)param_4 * 0x18);
        uVar7 = 0;
        do {
          lVar4 = FUN_14479d2ce(pvVar6);
          if (lVar4 == 0) {
            if (((*(int *)((longlong)pvVar6 + 0xc) == 0 && *(int *)((longlong)pvVar6 + 8) == 0) &&
                *(int *)((longlong)pvVar6 + 0x10) == 0) && *(int *)((longlong)pvVar6 + 0x14) == 0) {
LAB_1468de04d:
              lVar4 = 0;
            }
            else {
              lVar4 = thunk_FUN_140971090();
              cVar3 = (*(code *)PTR_FUN_14c758760)();
              if ((lVar4 == 0) || (cVar3 == '\0')) {
                FUN_14485c47a(pvVar6,lVar4);
                if (lVar4 == 0) goto LAB_1468de04d;
              }
              else {
                uVar2 = *(uint *)(lVar4 + 0xc);
                if ((int)uVar2 < DAT_14c9647dc) {
                  lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
                }
                else {
                  lVar5 = 0;
                }
                if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
                  FUN_14485c47a(pvVar6,lVar4);
                }
              }
              if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
                lVar4 = 0;
              }
            }
          }
          param_2[uVar7] = lVar4;
          uVar7 = uVar7 + 1;
          pvVar6 = (void *)((longlong)pvVar6 + 0x18);
        } while (param_5 != uVar7);
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_88);
    }
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar3 == '\0') {
      _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
      if (_Src != &local_68) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_68,_Src,(int)param_1[6]);
        }
        else {
          memcpy(&local_68,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_68);
    }
    lVar4 = FUN_14479d2ce(&local_68);
    if (lVar4 == 0) {
      if (((uStack_60._4_4_ == 0 && (int)uStack_60 == 0) && (int)local_58 == 0) &&
          local_58._4_4_ == 0) {
LAB_1468ddef1:
        lVar4 = 0;
      }
      else {
        lVar5 = thunk_FUN_140971090();
        cVar3 = (*(code *)PTR_FUN_14c758760)();
        if ((lVar5 == 0) || (cVar3 == '\0')) {
          FUN_14485c47a(&local_68,lVar5);
          if (lVar5 == 0) goto LAB_1468ddef1;
        }
        else {
          uVar2 = *(uint *)(lVar5 + 0xc);
          if ((int)uVar2 < DAT_14c9647dc) {
            lVar4 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          }
          else {
            lVar4 = 0;
          }
          if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
            FUN_14485c47a(&local_68,lVar5);
          }
        }
        lVar4 = 0;
        if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) {
          lVar4 = lVar5;
        }
      }
    }
  }
  *param_2 = lVar4;
LAB_1468ddda1:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468de096 FUN_1468de096 body=29 status=ok
// SIG undefined FUN_1468de096(void)

undefined8 * FUN_1468de096(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1468de0b4();
  return param_2;
}



// FUNCTION 1468de0b4 FUN_1468de0b4 body=503 status=ok
// SIG undefined FUN_1468de0b4(void)

void FUN_1468de0b4(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *_Src;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x210))
                      (param_1,(longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                               param_3 + *(int *)((longlong)param_1 + 0x44));
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *param_2 = lVar3;
    goto LAB_1468de254;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar2 == '\0') {
    _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_48) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_48,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_48,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_48);
  }
  lVar3 = FUN_14479d2ce(&local_48);
  if (lVar3 == 0) {
    if (((uStack_40._4_4_ != 0 || (int)uStack_40 != 0) || (int)local_38 != 0) || local_38._4_4_ != 0
       ) {
      lVar4 = thunk_FUN_140971090();
      cVar2 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar4 == 0) || (cVar2 == '\0')) {
        FUN_14485c47a(&local_48,lVar4);
        if (lVar4 == 0) goto LAB_1468de24f;
      }
      else {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar3 = 0;
        }
        if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(&local_48,lVar4);
        }
      }
      lVar3 = 0;
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
        lVar3 = lVar4;
      }
      goto LAB_1468de133;
    }
LAB_1468de24f:
    lVar3 = 0;
  }
  else {
LAB_1468de133:
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
  }
  *param_2 = lVar3;
LAB_1468de254:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468de2ac FUN_1468de2ac body=208 status=ok
// SIG undefined FUN_1468de2ac(void)

void FUN_1468de2ac(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (param_3 != 0) {
    FUN_1468b526e(&uStack_30,param_3);
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if (cVar2 != '\0') {
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) != 0) {
        local_38 = 0;
        goto LAB_1468de2da;
      }
    }
    FUN_14485c47a(&local_38,param_3);
  }
LAB_1468de2da:
  param_2[2] = local_28;
  *param_2 = local_38;
  param_2[1] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468de37e FUN_1468de37e body=208 status=ok
// SIG undefined FUN_1468de37e(void)

void FUN_1468de37e(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_3;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  if (lVar2 != 0) {
    FUN_1468b526e(&uStack_30,lVar2);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(lVar2 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        local_38 = 0;
        goto LAB_1468de3af;
      }
    }
    FUN_14485c47a(&local_38,lVar2);
  }
LAB_1468de3af:
  param_2[2] = local_28;
  *param_2 = local_38;
  param_2[1] = uStack_30;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468de450 FUN_1468de450 body=78 status=ok
// SIG undefined FUN_1468de450(void)

void FUN_1468de450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  undefined4 local_28;
  undefined4 local_20;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_20 = 1;
  local_28 = param_4;
  local_10 = param_3;
  FUN_142815486(param_1,param_2,1,&local_10);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468de4b8 FUN_1468de4b8 body=207 status=ok
// SIG undefined FUN_1468de4b8(void)

void FUN_1468de4b8(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce(param_3);
  if (lVar3 == 0) {
    if (((*(int *)(param_3 + 0xc) == 0 && *(int *)(param_3 + 8) == 0) &&
        *(int *)(param_3 + 0x10) == 0) && *(int *)(param_3 + 0x14) == 0) {
LAB_1468de54d:
      lVar3 = 0;
      goto LAB_1468de550;
    }
    lVar4 = thunk_FUN_140971090();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_3,lVar4);
      if (lVar4 == 0) goto LAB_1468de54d;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_3,lVar4);
      }
    }
    lVar3 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      lVar3 = lVar4;
    }
  }
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
LAB_1468de550:
  *param_2 = lVar3;
  return;
}



// FUNCTION 1468de588 FUN_1468de588 body=193 status=ok
// SIG undefined FUN_1468de588(void)

void FUN_1468de588(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *param_3;
  if (lVar2 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  FUN_1468b526e(&local_30,lVar2);
  *(undefined4 *)(param_2 + 1) = local_30;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_2c;
  *(undefined4 *)(param_2 + 2) = uStack_28;
  *(undefined4 *)((longlong)param_2 + 0x14) = uStack_24;
  cVar3 = (*(code *)PTR_FUN_14c758760)();
  if (cVar3 != '\0') {
    uVar1 = *(uint *)(lVar2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
      *param_2 = 0;
      goto LAB_1468de633;
    }
  }
  FUN_14485c47a(param_2,lVar2);
LAB_1468de633:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468de64a FUN_1468de64a body=108 status=ok
// SIG undefined FUN_1468de64a(void)

void FUN_1468de64a(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 6);
  if ((ulonglong)uVar1 != 0) {
    if (uVar1 == 1) {
      uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
      *param_2 = uVar3;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0x34);
      uVar4 = 0;
      do {
        uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
        param_2[uVar4] = uVar3;
        uVar4 = uVar4 + 1;
        param_3 = param_3 + iVar2;
      } while (uVar1 != uVar4);
    }
  }
  return;
}



// FUNCTION 1468de6b6 FUN_1468de6b6 body=36 status=ok
// SIG undefined FUN_1468de6b6(void)

void FUN_1468de6b6(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142815486(param_1,param_2,0,param_3,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1468de6da FUN_1468de6da body=25 status=ok
// SIG undefined FUN_1468de6da(void)

void FUN_1468de6da(void)

{
  FUN_1468ddd08();
  return;
}



// FUNCTION 1468de6f4 FUN_1468de6f4 body=36 status=ok
// SIG undefined FUN_1468de6f4(void)

void FUN_1468de6f4(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_142815486(param_1,param_2,1,param_3,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1468de718 FUN_1468de718 body=437 status=ok
// SIG undefined FUN_1468de718(void)

undefined8
FUN_1468de718(undefined8 *param_1,undefined4 param_2,int param_3,longlong param_4,undefined4 param_5
             )

{
  int iVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  char cVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined1 auStack_98 [40];
  longlong local_70;
  longlong local_68;
  longlong local_60;
  int local_58;
  int local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)*param_1;
  plVar3 = (longlong *)param_1[1];
  iVar1 = *(int *)(param_1 + 3);
  FUN_1468de8ce(&local_60,param_1,param_2);
  local_4c = local_58;
  cVar6 = FUN_1446ec082(local_60);
  if (param_3 == 0 || cVar6 != '\x01') {
    uVar8 = 0;
LAB_1468de8a2:
    if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return uVar8;
  }
  local_70 = param_4 + iVar1;
  local_68 = (longlong)iVar1;
  do {
    puVar4 = (ulonglong *)param_1[2];
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      uVar7 = *puVar4;
    }
    else {
      uVar5 = *puVar4;
      uVar7 = ((longlong)uVar5 >> 0x18) + (longlong)puVar4;
      if ((uVar5 & 1) == 0) {
        uVar7 = uVar5;
      }
    }
    cVar6 = (**(code **)(*plVar2 + 200))
                      (plVar2,(longlong)*(int *)((longlong)param_1 + 0x2c) * (longlong)local_58 +
                              uVar7,param_4,param_5);
    if (cVar6 != '\0') {
      puVar4 = (ulonglong *)param_1[2];
      if ((*(byte *)(param_1 + 6) & 1) == 0) {
        uVar7 = *puVar4;
      }
      else {
        uVar5 = *puVar4;
        uVar7 = ((longlong)uVar5 >> 0x18) + (longlong)puVar4;
        if ((uVar5 & 1) == 0) {
          uVar7 = uVar5;
        }
      }
      cVar6 = (**(code **)(*plVar3 + 200))
                        (plVar3,(longlong)*(int *)((longlong)param_1 + 0x2c) * (longlong)local_58 +
                                local_68 + uVar7,local_70,param_5);
      if (cVar6 != '\0') {
        uVar8 = 1;
        goto LAB_1468de8a2;
      }
    }
    iVar1 = *(int *)(*(longlong *)(local_60 + 0x10) + 8);
    do {
      local_58 = local_58 + 1;
      if (iVar1 <= local_58) break;
      local_4c = local_58;
      cVar6 = FUN_1446ec082(local_60,&local_4c);
    } while (cVar6 == '\0');
    local_54 = local_54 + 1;
    local_4c = local_58;
    cVar6 = FUN_1446ec082(local_60,&local_4c);
    uVar8 = 0;
    if ((cVar6 == '\0') || (param_3 = param_3 + -1, param_3 == 0)) goto LAB_1468de8a2;
  } while( true );
}



// FUNCTION 1468de8ce FUN_1468de8ce body=87 status=ok
// SIG undefined FUN_1468de8ce(void)

longlong * FUN_1468de8ce(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = -1;
  if (*(int *)(*(longlong *)(param_2 + 0x10) + 0x24 +
              (ulonglong)((*(byte *)(param_2 + 0x30) & 1) == 0) * 0x10) == 0) {
    *(int *)(param_1 + 1) = param_3;
    *(int *)((longlong)param_1 + 0xc) = param_3;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_2 + 0x10) + 8);
    do {
      FUN_1468eaa0c(param_1);
      if (param_3 <= *(int *)((longlong)param_1 + 0xc)) {
        return param_1;
      }
    } while ((int)param_1[1] < iVar1);
  }
  return param_1;
}



// FUNCTION 1468de925 FUN_1468de925 body=642 status=ok
// SIG undefined FUN_1468de925(void)

bool FUN_1468de925(undefined8 *param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  int param_5,longlong param_6,undefined4 param_7)

{
  int iVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  char cVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined1 auStack_c8 [36];
  int local_a4;
  int local_a0;
  int local_9c;
  longlong local_98;
  longlong local_90;
  longlong *local_88;
  undefined8 *local_80;
  longlong *local_78;
  longlong local_70;
  int local_68;
  int local_64;
  longlong local_60;
  int local_58;
  int local_54;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_78 = (longlong *)*param_1;
  local_88 = (longlong *)param_1[1];
  iVar1 = *(int *)(param_1 + 3);
  FUN_1468de8ce(&local_60,param_1,param_2);
  FUN_1468de8ce(&local_70,param_3,param_4);
  local_98 = param_6 + iVar1;
  local_a0 = 0;
  local_a4 = 0;
  local_90 = (longlong)iVar1;
  local_80 = param_1;
  do {
    puVar2 = (ulonglong *)param_1[2];
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      uVar5 = *puVar2;
    }
    else {
      uVar3 = *puVar2;
      uVar5 = ((longlong)uVar3 >> 0x18) + (longlong)puVar2;
      if ((uVar3 & 1) == 0) {
        uVar5 = uVar3;
      }
    }
    puVar2 = *(ulonglong **)(param_3 + 0x10);
    if ((*(byte *)(param_3 + 0x30) & 1) == 0) {
      uVar7 = *puVar2;
    }
    else {
      uVar3 = *puVar2;
      uVar7 = ((longlong)uVar3 >> 0x18) + (longlong)puVar2;
      if ((uVar3 & 1) == 0) {
        uVar7 = uVar3;
      }
    }
    lVar6 = uVar5 + (longlong)*(int *)((longlong)param_1 + 0x2c) * (longlong)local_58;
    lVar8 = (longlong)local_68;
    iVar1 = *(int *)(param_3 + 0x2c);
    local_9c = param_5;
    if ((lVar6 == param_6) ||
       ((cVar4 = (**(code **)(*local_78 + 200))(local_78,lVar6,param_6,param_7), param_1 = local_80,
        cVar4 != '\0' &&
        (cVar4 = (**(code **)(*local_88 + 200))(local_88,lVar6 + local_90,local_98,param_7),
        param_1 = local_80, cVar4 != '\0')))) {
      local_a0 = local_a0 + 1;
    }
    param_5 = local_9c;
    lVar6 = uVar7 + iVar1 * lVar8;
    if ((lVar6 == param_6) ||
       ((cVar4 = (**(code **)(*local_78 + 200))(local_78,lVar6,param_6,param_7), cVar4 != '\0' &&
        (cVar4 = (**(code **)(*local_88 + 200))(local_88,lVar6 + local_90,local_98,param_7),
        cVar4 != '\0')))) {
      local_a4 = local_a4 + 1;
    }
    iVar1 = *(int *)(*(longlong *)(local_60 + 0x10) + 8);
    do {
      local_58 = local_58 + 1;
      if (iVar1 <= local_58) break;
      local_4c = local_58;
      cVar4 = FUN_1446ec082(local_60,&local_4c);
    } while (cVar4 == '\0');
    local_54 = local_54 + 1;
    iVar1 = *(int *)(*(longlong *)(local_70 + 0x10) + 8);
    do {
      local_68 = local_68 + 1;
      if (iVar1 <= local_68) break;
      local_4c = local_68;
      cVar4 = FUN_1446ec082(local_70,&local_4c);
    } while (cVar4 == '\0');
    local_64 = local_64 + 1;
    param_5 = param_5 + -1;
    if (param_5 == 0) {
      if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return local_a0 == local_a4;
    }
  } while( true );
}



// FUNCTION 1468deba8 FUN_1468deba8 body=170 status=ok
// SIG undefined FUN_1468deba8(void)

void FUN_1468deba8(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  longlong local_30;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0xfff00007;
  local_28 = param_1;
  uVar4 = FUN_145a1bb4a(*(undefined8 *)(param_2 + 0x70),&local_28,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  local_38 = 0xfff00007;
  local_30 = param_1;
  uVar4 = FUN_145a1bb4a(*(undefined8 *)(param_2 + 0x78),&local_30,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x78) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x84);
  uVar2 = *(undefined4 *)(param_2 + 0x88);
  uVar3 = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0x8c) = uVar3;
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 0x90);
  FUN_145a1bbc6(param_1,param_2);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dec5c FUN_1468dec5c body=71 status=ok
// SIG undefined FUN_1468dec5c(void)

void FUN_1468dec5c(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_14689aaf4();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
  }
  plVar1 = *(longlong **)(param_1 + 0x78);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468dec98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1468deca4 FUN_1468deca4 body=138 status=ok
// SIG undefined FUN_1468deca4(void)

longlong FUN_1468deca4(undefined8 *param_1,undefined8 param_2)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined8 *local_28;
  undefined8 local_20;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_18 = *param_1;
  local_28 = param_1;
  local_20 = param_2;
  iVar3 = FUN_1468c91de(param_1,&local_28);
  if (iVar3 < 0) {
    lVar4 = 0;
  }
  else {
    puVar1 = (ulonglong *)param_1[2];
    if ((*(byte *)(param_1 + 6) & 1) == 0) {
      uVar5 = *puVar1;
    }
    else {
      uVar2 = *puVar1;
      uVar5 = ((longlong)uVar2 >> 0x18) + (longlong)puVar1;
      if ((uVar2 & 1) == 0) {
        uVar5 = uVar2;
      }
    }
    lVar4 = (longlong)iVar3 * (longlong)*(int *)((longlong)param_1 + 0x2c) + uVar5;
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468ded30 FUN_1468ded30 body=1375 status=ok
// SIG undefined FUN_1468ded30(void)

undefined8
FUN_1468ded30(undefined8 param_1,undefined2 **param_2,undefined8 *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 *param_6)

{
  void *pvVar1;
  bool bVar2;
  undefined2 *puVar3;
  ushort uVar4;
  ulonglong uVar5;
  undefined2 *puVar6;
  uint uVar7;
  ushort uVar8;
  ulonglong uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  bool bVar13;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  int local_90;
  undefined4 local_8c;
  undefined2 *local_88;
  int local_80;
  undefined2 *local_78;
  uint local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  int local_60;
  undefined2 *local_58;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 == (undefined2 **)0x0) goto LAB_1468df05a;
  local_58 = (undefined2 *)0x0;
  local_50 = *(uint *)(param_4 + 1);
  lVar12 = (longlong)(int)local_50;
  pvVar1 = (void *)*param_4;
  if (lVar12 == 0) {
    local_4c = 0;
LAB_1468dee7d:
    if (1 < *(uint *)(param_3 + 1)) {
      bVar2 = false;
LAB_1468df0ae:
      FUN_140056680(&local_78);
      puVar3 = &DAT_149dfb77a;
      if (local_70 != 0) {
        puVar3 = local_78;
      }
      lVar12 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar3 + lVar12);
        uVar10 = (uint)uVar4;
        uVar8 = *(ushort *)((longlong)&DAT_149e06342 + lVar12);
        uVar7 = (uint)uVar8;
        if (uVar4 != uVar8) {
          if ((uVar8 | uVar4) < 0x80) {
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar8]) goto LAB_1468df10e;
          }
          iVar11 = uVar10 - uVar7;
          goto LAB_1468df1c5;
        }
        if (uVar4 == 0) break;
LAB_1468df10e:
        lVar12 = lVar12 + 2;
      }
      iVar11 = 0;
LAB_1468df1c5:
      bVar13 = iVar11 == 0;
      if (local_78 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar2) goto LAB_1468df209;
      if (iVar11 != 0) goto LAB_1468dee89;
      goto LAB_1468df21c;
    }
  }
  else {
    FUN_1446dd670(&local_58,local_50,0);
    memcpy(local_58,pvVar1,lVar12 * 2);
    if (local_50 < 2) goto LAB_1468dee7d;
    FUN_140056680(&local_68);
    puVar3 = &DAT_149dfb77a;
    if (local_60 != 0) {
      puVar3 = local_68;
    }
    lVar12 = 0;
    while( true ) {
      uVar4 = *(ushort *)((longlong)puVar3 + lVar12);
      uVar5 = (ulonglong)uVar4;
      uVar8 = *(ushort *)((longlong)&DAT_149e06342 + lVar12);
      if (uVar4 != uVar8) break;
      if (uVar4 == 0) goto LAB_1468df206;
LAB_1468dee22:
      lVar12 = lVar12 + 2;
    }
    if ((uVar8 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar9 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_1468dee22;
    }
    if (uVar4 != uVar8) {
      if (1 < *(uint *)(param_3 + 1) && local_50 < 2) {
        bVar2 = true;
        goto LAB_1468df0ae;
      }
      bVar13 = false;
      goto LAB_1468df209;
    }
LAB_1468df206:
    bVar13 = true;
LAB_1468df209:
    if (local_68 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar13) {
LAB_1468df21c:
      FUN_1400020e8(&local_58,&DAT_149e001d8,1);
    }
  }
LAB_1468dee89:
  local_78 = (undefined2 *)0x0;
  local_70 = *(uint *)(param_6 + 1);
  lVar12 = (longlong)(int)local_70;
  pvVar1 = (void *)*param_6;
  if (lVar12 == 0) {
    local_6c = 0;
LAB_1468defa0:
    if (1 < *(uint *)(param_5 + 1)) {
      bVar2 = false;
LAB_1468df13c:
      FUN_140056680(&local_98);
      puVar3 = &DAT_149dfb77a;
      if (local_90 != 0) {
        puVar3 = local_98;
      }
      lVar12 = 0;
      while( true ) {
        uVar4 = *(ushort *)((longlong)puVar3 + lVar12);
        uVar10 = (uint)uVar4;
        uVar8 = *(ushort *)((longlong)&DAT_149e06342 + lVar12);
        uVar7 = (uint)uVar8;
        if (uVar4 != uVar8) {
          if ((uVar8 | uVar4) < 0x80) {
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar4];
            uVar7 = (uint)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar8]) goto LAB_1468df199;
          }
          iVar11 = uVar10 - uVar7;
          goto LAB_1468df1e9;
        }
        if (uVar4 == 0) break;
LAB_1468df199:
        lVar12 = lVar12 + 2;
      }
      iVar11 = 0;
LAB_1468df1e9:
      bVar13 = iVar11 == 0;
      if (local_98 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar2) goto LAB_1468df23b;
      if (iVar11 != 0) goto LAB_1468defad;
      goto LAB_1468df24e;
    }
  }
  else {
    FUN_1446dd670(&local_78,local_70,0);
    memcpy(local_78,pvVar1,lVar12 * 2);
    if (local_70 < 2) goto LAB_1468defa0;
    FUN_140056680(&local_88);
    puVar3 = &DAT_149dfb77a;
    if (local_80 != 0) {
      puVar3 = local_88;
    }
    lVar12 = 0;
    while( true ) {
      uVar4 = *(ushort *)((longlong)puVar3 + lVar12);
      uVar5 = (ulonglong)uVar4;
      uVar8 = *(ushort *)((longlong)&DAT_149e06342 + lVar12);
      if (uVar4 != uVar8) break;
      if (uVar4 == 0) goto LAB_1468df238;
LAB_1468def45:
      lVar12 = lVar12 + 2;
    }
    if ((uVar8 | uVar4) < 0x80) {
      uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
      uVar9 = (ulonglong)uVar8;
      uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
      if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar9]) goto LAB_1468def45;
    }
    if (uVar4 != uVar8) {
      if (1 < *(uint *)(param_5 + 1) && local_70 < 2) {
        bVar2 = true;
        goto LAB_1468df13c;
      }
      bVar13 = false;
      goto LAB_1468df23b;
    }
LAB_1468df238:
    bVar13 = true;
LAB_1468df23b:
    if (local_88 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar13) {
LAB_1468df24e:
      FUN_1400020e8(&local_78,&DAT_149e001d8,1);
    }
  }
LAB_1468defad:
  puVar3 = &DAT_149dfb77a;
  local_a0 = &DAT_149dfb77a;
  if (local_70 != 0) {
    local_a0 = local_78;
  }
  local_a8 = &DAT_149dfb77a;
  if (*(int *)(param_5 + 1) != 0) {
    local_a8 = (undefined2 *)*param_5;
  }
  puVar6 = &DAT_149dfb77a;
  if (local_50 != 0) {
    puVar6 = local_58;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar3 = (undefined2 *)*param_3;
  }
  FUN_140002266(&local_98,L"<%s%s,%s%s>",puVar3,puVar6);
  if (&local_98 == param_2) {
    if (local_98 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_98;
    local_98 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_90;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_8c;
  }
  if (local_78 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1468df05a:
  FUN_140056680(param_1,L"TMap");
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468df290 FUN_1468df290 body=297 status=ok
// SIG undefined FUN_1468df290(void)

undefined8 FUN_1468df290(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  longlong *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong local_78 [6];
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_48 = 0;
  uStack_40 = 0;
  local_78[4] = 0;
  local_78[5] = 0;
  local_78[2] = 0;
  local_78[3] = 0;
  local_78[0] = 0;
  local_78[1] = 0;
  if (param_3 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
              (*(longlong **)(param_1 + 0x70),&local_88,local_78 + 4,param_4 & 0xfffffffd);
    local_48 = CONCAT44(uStack_84,local_88);
    uStack_40 = CONCAT44(uStack_7c,uStack_80);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))
              (*(longlong **)(param_1 + 0x78),&local_88,local_78,param_4 & 0xfffffffd);
    local_78[2] = CONCAT44(uStack_84,local_88);
    local_78[3] = CONCAT44(uStack_7c,uStack_80);
  }
  lVar1 = local_78[2];
  local_90 = local_78;
  local_98 = local_78 + 2;
  FUN_1468ded30(param_2,param_3,&local_48,local_78 + 4);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if (local_78[4] != 0) {
    FUN_1400020a8();
  }
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468df3ba FUN_1468df3ba body=185 status=ok
// SIG undefined FUN_1468df3ba(void)

undefined8 FUN_1468df3ba(longlong param_1,undefined8 param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x78))(*(longlong **)(param_1 + 0x78),&local_38);
  puVar2 = &DAT_149dfb77a;
  if (local_30 != 0) {
    puVar2 = local_38;
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))(*(longlong **)(param_1 + 0x70),&local_48);
  puVar1 = &DAT_149dfb77a;
  if (local_40 != 0) {
    puVar1 = local_48;
  }
  FUN_140002266(param_2,L"%s %s",puVar1,puVar2);
  if (local_48 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468df474 FUN_1468df474 body=297 status=ok
// SIG undefined FUN_1468df474(void)

undefined8 FUN_1468df474(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(**(longlong **)(param_1 + 0x78) + 0x70))
            (*(longlong **)(param_1 + 0x78),&local_50,0,0);
  puVar1 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar1 = local_50;
  }
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),&local_60,0,0);
  puVar2 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar2 = local_60;
  }
  FUN_140002266(&local_40,L"%s,%s",puVar2,puVar1);
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
  FUN_140056680(param_2,L"TMAP");
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468df59e FUN_1468df59e body=105 status=ok
// SIG undefined FUN_1468df59e(void)

void FUN_1468df59e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  undefined1 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_10 = *(undefined1 *)(param_1 + 0x98);
  local_40 = *(undefined8 *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  local_28 = *(undefined4 *)(param_1 + 0x80);
  uStack_24 = *(undefined4 *)(param_1 + 0x84);
  uStack_20 = *(undefined4 *)(param_1 + 0x88);
  uStack_1c = *(undefined4 *)(param_1 + 0x8c);
  local_18 = *(undefined8 *)(param_1 + 0x90);
  local_30 = param_2;
  FUN_140458a4e(&local_40,0);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468df60c FUN_1468df60c body=96 status=ok
// SIG undefined FUN_1468df60c(void)

undefined8 FUN_1468df60c(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((((param_2 != 0) && (*(longlong *)(param_1 + 8) == *(longlong *)(param_2 + 8))) &&
      (plVar1 = *(longlong **)(param_1 + 0x70), plVar1 != (longlong *)0x0)) &&
     (*(longlong *)(param_1 + 0x78) != 0)) {
    cVar2 = (**(code **)(*plVar1 + 0x1b0))(plVar1,*(undefined8 *)(param_2 + 0x70));
    if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001468df669. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x1b0))
                        (*(longlong **)(param_1 + 0x78),*(undefined8 *)(param_2 + 0x78));
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 1468df698 FUN_1468df698 body=151 status=ok
// SIG undefined FUN_1468df698(void)

void FUN_1468df698(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1468984f2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),param_2);
  }
  lVar2 = *(longlong *)(param_1 + 0x78);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1468984f2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0001468df709. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x58))(*(longlong **)(param_1 + 0x78),param_2);
    return;
  }
  return;
}



// FUNCTION 1468df730 FUN_1468df730 body=194 status=ok
// SIG undefined FUN_1468df730(void)

undefined8 FUN_1468df730(longlong param_1,longlong param_2,undefined8 param_3,int param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  byte local_38;
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_38 = *(byte *)(param_1 + 0x98);
  local_68 = *(undefined8 *)(param_1 + 0x70);
  uStack_60 = *(undefined8 *)(param_1 + 0x78);
  local_50 = *(undefined4 *)(param_1 + 0x80);
  uStack_4c = *(undefined4 *)(param_1 + 0x84);
  uStack_48 = *(undefined4 *)(param_1 + 0x88);
  uStack_44 = *(undefined4 *)(param_1 + 0x8c);
  local_40 = *(undefined8 *)(param_1 + 0x90);
  local_58 = param_3;
  local_30 = &local_68;
  local_28 = param_4;
  if ((local_38 & 1) == 0) {
    iVar1 = FUN_146872bfe();
  }
  else {
    iVar1 = FUN_146872b2c(&local_30,param_3);
  }
  if (iVar1 == -1) {
    uVar2 = 0;
  }
  else {
    local_28 = iVar1;
    if (*(longlong *)(param_1 + 0x70) == param_2) {
      local_30 = &local_68;
      uVar2 = FUN_144aff4d2(&local_68);
    }
    else {
      local_30 = &local_68;
      uVar2 = FUN_1446ec24c(&local_68);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468df7f4 FUN_1468df7f4 body=74 status=ok
// SIG undefined FUN_1468df7f4(void)

undefined8 FUN_1468df7f4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_2 + 0x28) & 0x20) == 0) {
    plVar1 = *(longlong **)(param_1 + 0x78);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 400))(*(longlong **)(param_1 + 0x70));
    if (cVar2 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001468df83b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar1 + 400))(plVar1,param_2);
      return uVar3;
    }
  }
  return 1;
}



// FUNCTION 1468df83e FUN_1468df83e body=662 status=ok
// SIG undefined FUN_1468df83e(void)

ulonglong FUN_1468df83e(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  bool bVar12;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_1468c83be();
  uVar5 = 0;
  if (cVar1 != '\0') {
    lVar10 = (ulonglong)((param_2 & 0x1fff) << 2) * 3;
    uVar7 = (ulonglong)(param_2 + 1);
    if (*(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 + lVar10) <
        1) {
      uVar7 = uVar5;
    }
    if (1 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                    lVar10)) {
      iVar6 = 1;
      uVar5 = 0xc;
      do {
        iVar6 = iVar6 + *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8)
                                 + lVar10 + 8 + uVar5) + -1;
        uVar5 = uVar5 + 0xc;
      } while (0 < iVar6);
      uVar5 = (ulonglong)((int)(uVar5 >> 2) * -0x55555555 + param_2);
    }
    if (param_1 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = *(undefined8 *)(param_1 + 0x20);
    }
    local_60 = *(undefined8 *)
                (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)(uint)uVar7 >> 0xd) * 8) +
                (ulonglong)((uint)uVar7 & 0x1fff) * 0xc);
    uVar8 = 0;
    local_58 = param_1;
    plVar2 = (longlong *)FUN_14689ac8c();
    if (param_1 != 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x20);
    }
    local_60 = *(undefined8 *)
                (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)(uint)uVar5 >> 0xd) * 8) +
                (ulonglong)((uint)uVar5 & 0x1fff) * 0xc);
    local_58 = param_1;
    local_50 = uVar8;
    plVar3 = (longlong *)FUN_14689ac8c();
    plVar9 = (longlong *)0x0;
    if (plVar2 != (longlong *)0x0) {
      lVar10 = plVar2[1];
      lVar4 = FUN_1446ddbd2();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar12 = lVar10 != 0;
        if (lVar10 != lVar4 && bVar12) {
          do {
            lVar10 = *(longlong *)(lVar10 + 0x30);
            bVar12 = lVar10 != 0;
            if (lVar10 == lVar4) break;
          } while (lVar10 != 0);
        }
      }
      else {
        bVar12 = (*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
      }
      plVar9 = (longlong *)0x0;
      if (bVar12) {
        plVar9 = plVar2;
      }
    }
    if (plVar3 != (longlong *)0x0) {
      lVar10 = plVar3[1];
      lVar4 = FUN_1446ddbd2();
      if (*(ulonglong *)(lVar4 + 8) == 0) {
        bVar12 = lVar10 != 0;
        if (lVar10 != lVar4 && bVar12) {
          do {
            lVar10 = *(longlong *)(lVar10 + 0x30);
            bVar12 = lVar10 != 0;
            if (lVar10 == lVar4) break;
          } while (lVar10 != 0);
        }
      }
      else {
        bVar12 = (*(ulonglong *)(lVar10 + 0x18) & *(ulonglong *)(lVar4 + 8)) != 0;
      }
      plVar11 = (longlong *)0x0;
      if (bVar12) {
        plVar11 = plVar3;
      }
      if ((((plVar9 != (longlong *)0x0) && (bVar12)) &&
          (cVar1 = (**(code **)(*plVar9 + 0x198))(plVar9,uVar7,param_3), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*plVar11 + 0x198))(plVar11,uVar5,param_3), cVar1 != '\0')) {
        *(longlong **)(param_1 + 0x70) = plVar9;
        *(longlong **)(param_1 + 0x78) = plVar11;
        uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
        goto LAB_1468dfa37;
      }
    }
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 8))(plVar2,1);
    }
    if (plVar3 != (longlong *)0x0) {
      (**(code **)(*plVar3 + 8))(plVar3,1);
    }
    uVar5 = 0;
  }
LAB_1468dfa37:
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1468dfad6 FUN_1468dfad6 body=172 status=ok
// SIG undefined FUN_1468dfad6(void)

void FUN_1468dfad6(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  plVar1 = (longlong *)param_1[0xe];
  plVar2 = (longlong *)param_1[0xf];
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2);
  (**(code **)(*plVar2 + 0x1a0))(plVar2,param_2);
  lVar3 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar3 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar3 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dfb84 FUN_1468dfb84 body=253 status=ok
// SIG undefined FUN_1468dfb84(void)

int FUN_1468dfb84(longlong *param_1,uint param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar5 = (ulonglong)(param_2 & 0x1fff);
  lVar8 = (longlong)((int)param_2 >> 0xd);
  lVar1 = *(longlong *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + uVar5 * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_50);
  iVar7 = 0;
  if (lVar1 == local_50) {
    plVar2 = (longlong *)param_1[0xf];
    iVar6 = param_2 + 1;
    if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + 8 + uVar5 * 0xc) < 1) {
      iVar6 = iVar7;
    }
    cVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x1a8))((longlong *)param_1[0xe],iVar6);
    if (cVar3 != '\0') {
      if (*(int *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + 8 + uVar5 * 0xc) < 2) {
        iVar7 = 0;
      }
      else {
        iVar7 = 1;
        uVar4 = 0xc;
        do {
          iVar7 = iVar7 + *(int *)(*(longlong *)(&DAT_14c952ad0 + lVar8 * 8) + uVar5 * 0xc + 8 +
                                  uVar4) + -1;
          uVar4 = uVar4 + 0xc;
        } while (0 < iVar7);
        iVar7 = (int)(uVar4 >> 2) * -0x55555555 + param_2;
      }
      iVar7 = (**(code **)(*plVar2 + 0x1a8))(plVar2,iVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468dfc82 FUN_1468dfc82 body=869 status=ok
// SIG undefined FUN_1468dfc82(void)

ulonglong FUN_1468dfc82(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_f8 [32];
  longlong local_d8;
  undefined8 *local_d0;
  longlong *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  longlong local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulonglong *local_80;
  int local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  byte local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  *(undefined1 *)(*param_2 + 0x15 + (longlong)((int)param_2[1] + -1) * 0x18) = 1;
  local_58 = *param_4;
  local_50 = param_4[1];
  uVar4 = FUN_1468c826c(param_1);
  uVar10 = (ulonglong)uVar4;
  if ((char)uVar4 == '\x03') {
    local_80 = (ulonglong *)*param_3;
    local_60 = *(byte *)(param_1 + 0x98);
    local_90 = *(undefined8 *)(param_1 + 0x70);
    uStack_88 = *(undefined8 *)(param_1 + 0x78);
    local_78 = *(int *)(param_1 + 0x80);
    uStack_74 = *(undefined4 *)(param_1 + 0x84);
    uStack_70 = *(undefined4 *)(param_1 + 0x88);
    uStack_6c = *(undefined4 *)(param_1 + 0x8c);
    local_68 = *(undefined8 *)(param_1 + 0x90);
    iVar9 = (int)local_80[1];
    iVar8 = 0;
    iVar7 = iVar8;
    local_d8 = param_1;
    local_c8 = param_3;
    if (0 < iVar9) {
      do {
        local_a0 = CONCAT44(local_a0._4_4_,iVar8);
        cVar3 = FUN_1446ec082(&local_90,&local_a0);
        iVar7 = iVar8;
        if (cVar3 != '\0') break;
        iVar8 = iVar8 + 1;
        iVar7 = iVar9;
      } while (iVar9 != iVar8);
    }
    local_a0 = CONCAT44(local_a0._4_4_,iVar7);
    cVar3 = FUN_1446ec082(&local_90);
    uVar10 = CONCAT71((uint7)(uint3)(uVar4 >> 8),3);
    if (cVar3 != '\0') {
      iVar9 = 0;
      local_d0 = param_4;
      do {
        uVar1 = *(undefined8 *)(local_d8 + 0x70);
        iVar8 = (int)param_2[1];
        uVar10 = (ulonglong)iVar8;
        *(uint *)(param_2 + 1) = iVar8 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar8 + 1U) {
          FUN_146895f4a(param_2,iVar8);
        }
        lVar2 = *param_2;
        *(undefined8 *)(lVar2 + uVar10 * 0x18) = uVar1;
        *(undefined8 *)(lVar2 + 8 + uVar10 * 0x18) = 0;
        *(int *)(lVar2 + 0x10 + uVar10 * 0x18) = iVar9;
        *(undefined2 *)(lVar2 + 0x14 + uVar10 * 0x18) = 3;
        if ((local_60 & 1) == 0) {
          uVar5 = *local_80;
        }
        else {
          uVar6 = *local_80;
          uVar5 = ((longlong)uVar6 >> 0x18) + (longlong)local_80;
          if ((uVar6 & 1) == 0) {
            uVar5 = uVar6;
          }
        }
        local_a0 = (longlong)local_68._4_4_ * (longlong)iVar7 + uVar5;
        local_98 = local_c8[1];
        local_b0 = *param_4;
        local_a8 = param_4[1];
        cVar3 = (**(code **)(**(longlong **)(local_d8 + 0x70) + 0xa8))
                          (*(longlong **)(local_d8 + 0x70),param_2,&local_a0,&local_b0);
        if (cVar3 == '\0') {
LAB_1468dffac:
          uVar10 = 0;
LAB_1468dffb4:
          *(int *)(param_2 + 1) = (int)param_2[1] + -1;
          break;
        }
        if (cVar3 == '\x02') {
LAB_1468dffb1:
          uVar10 = CONCAT71((int7)(uVar10 >> 8),1);
          goto LAB_1468dffb4;
        }
        uVar4 = *(uint *)(param_2 + 1);
        uVar10 = (longlong)(int)uVar4 - 1;
        *(int *)(param_2 + 1) = (int)uVar10;
        uVar1 = *(undefined8 *)(local_d8 + 0x78);
        *(uint *)(param_2 + 1) = uVar4;
        if (*(uint *)((longlong)param_2 + 0xc) < uVar4) {
          FUN_146895f4a(param_2,uVar10 & 0xffffffff);
        }
        param_4 = local_d0;
        lVar2 = *param_2;
        *(undefined8 *)(lVar2 + uVar10 * 0x18) = uVar1;
        *(undefined8 *)(lVar2 + 8 + uVar10 * 0x18) = 0;
        *(int *)(lVar2 + 0x10 + uVar10 * 0x18) = iVar9;
        *(undefined2 *)(lVar2 + 0x14 + uVar10 * 0x18) = 4;
        if ((local_60 & 1) == 0) {
          uVar6 = *local_80;
        }
        else {
          uVar10 = *local_80;
          uVar6 = ((longlong)uVar10 >> 0x18) + (longlong)local_80;
          if ((uVar10 & 1) == 0) {
            uVar6 = uVar10;
          }
        }
        local_a0 = (longlong)local_78 + (longlong)local_68._4_4_ * (longlong)iVar7 + uVar6;
        local_98 = local_c8[1];
        local_c0 = *local_d0;
        local_b8 = local_d0[1];
        uVar4 = (**(code **)(**(longlong **)(local_d8 + 0x78) + 0xa8))
                          (*(longlong **)(local_d8 + 0x78),param_2,&local_a0,&local_c0);
        if ((char)uVar4 == '\0') goto LAB_1468dffac;
        uVar10 = (ulonglong)uVar4;
        if ((uVar4 & 0xff) == 2) goto LAB_1468dffb1;
        *(int *)(param_2 + 1) = (int)param_2[1] + -1;
        uVar6 = local_80[1];
        do {
          iVar7 = iVar7 + 1;
          if ((int)uVar6 <= iVar7) break;
          local_a0 = CONCAT44(local_a0._4_4_,iVar7);
          cVar3 = FUN_1446ec082(&local_90,&local_a0);
        } while (cVar3 == '\0');
        iVar9 = iVar9 + 1;
        local_a0 = CONCAT44(local_a0._4_4_,iVar7);
        cVar3 = FUN_1446ec082(&local_90,&local_a0);
      } while (cVar3 != '\0');
    }
  }
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar10 & 0xffffffff;
}



// FUNCTION 1468e0088 FUN_1468e0088 body=176 status=ok
// SIG undefined FUN_1468e0088(void)

void FUN_1468e0088(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_78 [40];
  longlong local_50;
  longlong lStack_48;
  undefined8 *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  undefined1 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar1 = (**(code **)(*param_1 + 0x1c8))();
  if (cVar1 != '\0') {
    local_20 = (undefined1)param_1[0x13];
    local_50 = param_1[0xe];
    lStack_48 = param_1[0xf];
    local_38 = (undefined4)param_1[0x10];
    uStack_34 = *(undefined4 *)((longlong)param_1 + 0x84);
    uStack_30 = (undefined4)param_1[0x11];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x8c);
    local_28 = param_1[0x12];
    local_40 = param_2;
    FUN_140458a4e(&local_50,0);
    if (*(int *)((longlong)param_2 + 0xc) != -1) {
      FUN_1468e9d84(param_2);
      *param_2 = 0;
      param_2[1] = 0xffffffff00000000;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0xffffffff;
      param_2[8] = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e013a FUN_1468e013a body=67 status=ok
// SIG undefined FUN_1468e013a(void)

void FUN_1468e013a(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    FUN_1468e9d84(param_2);
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0xffffffff;
    param_2[8] = 0;
  }
  return;
}



// FUNCTION 1468e017e FUN_1468e017e body=64 status=ok
// SIG undefined FUN_1468e017e(void)

void FUN_1468e017e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468e01cc FUN_1468e01cc body=748 status=ok
// SIG undefined FUN_1468e01cc(void)

void FUN_1468e01cc(longlong *param_1,undefined8 param_2,longlong *param_3,int param_4)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  undefined2 *puVar6;
  longlong lVar7;
  undefined2 *puVar8;
  bool bVar9;
  int iVar10;
  undefined1 auStack_d8 [32];
  undefined2 *local_b8;
  undefined8 uStack_b0;
  undefined8 local_a0;
  undefined2 *local_98;
  int local_90;
  undefined2 *local_88;
  int local_80;
  longlong local_78 [3];
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_78[0] = 0;
  local_78[1] = 0;
  if (param_4 == 1) {
    cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar2 != '\0') {
      cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar2 == '\0') {
        param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
        if (param_3 != local_78) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,local_78,param_3,(int)param_1[6]);
          }
          else {
            memcpy(local_78,param_3,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,local_78);
      }
      lVar7 = *param_1;
      param_3 = local_78;
      goto LAB_1468e0262;
    }
    param_3 = (longlong *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
  }
  lVar7 = *param_1;
LAB_1468e0262:
  plVar3 = (longlong *)(**(code **)(lVar7 + 0x208))(param_1,param_3,0);
  FUN_1400020e8(param_2,&DAT_149e06140,1);
  if ((plVar3 != &DAT_14c951f48 && plVar3 != (longlong *)0x0) && (0 < (int)plVar3[1])) {
    bVar9 = true;
    lVar7 = 0;
    iVar10 = 0;
    do {
      cVar2 = FUN_14171b2dc(*plVar3 + lVar7);
      if (cVar2 != '\0') {
        if (!bVar9) {
          FUN_1400020e8(param_2,&DAT_149e06196,1);
        }
        local_a0 = *(undefined8 *)(*plVar3 + 8 + lVar7);
        FUN_1400021e4(&local_a0,&local_98);
        puVar6 = &DAT_149dfb77a;
        if (local_90 != 0) {
          puVar6 = local_98;
        }
        lVar4 = FUN_14479d2ce(*plVar3 + lVar7);
        if (lVar4 == 0) {
          FUN_140002266(&local_88,L"%s.%s",L"(null)",puVar6);
          iVar1 = local_80 + -1;
          if (local_80 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(param_2,local_88,iVar1);
          puVar6 = local_88;
        }
        else {
          uVar5 = FUN_14479d2ce(*plVar3 + lVar7);
          local_b8 = (undefined2 *)0x0;
          uStack_b0 = 0;
          FUN_1401031ac(uVar5,0,&local_b8);
          puVar8 = &DAT_149dfb77a;
          if ((int)uStack_b0 != 0) {
            puVar8 = local_b8;
          }
          FUN_140002266(&local_88,L"%s.%s",puVar8,puVar6);
          iVar1 = local_80 + -1;
          if (local_80 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(param_2,local_88,iVar1);
          puVar6 = local_b8;
          if (local_88 != (undefined2 *)0x0) {
            FUN_1400020a8();
            puVar6 = local_b8;
          }
        }
        if (puVar6 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        bVar9 = false;
      }
      iVar10 = iVar10 + 1;
      lVar7 = lVar7 + 0x10;
    } while (iVar10 < (int)plVar3[1]);
  }
  FUN_1400020e8(param_2,&DAT_149e06144,1);
  if (local_78[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e04ba FUN_1468e04ba body=320 status=ok
// SIG undefined FUN_1468e04ba(void)

wint_t * FUN_1468e04ba(longlong param_1,longlong param_2,wint_t *param_3,undefined8 param_4,
                      undefined8 param_5)

{
  wint_t wVar1;
  int iVar2;
  wint_t *pwVar3;
  wint_t *pwVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (*param_3 == 0x28) {
    *(undefined4 *)(param_2 + 8) = 0;
    if (*(int *)(param_2 + 0xc) != 0) {
      FUN_1407d9874(param_2,0);
    }
    do {
      pwVar3 = param_3 + 1;
      param_3 = param_3 + 1;
      iVar2 = iswspace(*pwVar3);
    } while (iVar2 != 0);
    if (*param_3 == 0x29) goto LAB_1468e05c6;
    do {
      local_88 = 0;
      uStack_80 = 0;
      local_98 = param_5;
      param_3 = (wint_t *)FUN_1468db8cd(&local_88,*(undefined8 *)(param_1 + 0x70),param_3,param_4);
      if (param_3 == (wint_t *)0x0) goto LAB_1468e05c4;
      local_78 = (undefined4)local_88;
      uStack_74 = local_88._4_4_;
      uStack_70 = (undefined4)uStack_80;
      uStack_6c = uStack_80._4_4_;
      FUN_1403350f6(param_2,&local_78);
      FUN_144a7b126(param_2,&local_61,1);
      do {
        pwVar3 = param_3;
        iVar2 = iswspace(*pwVar3);
        param_3 = pwVar3 + 1;
      } while (iVar2 != 0);
      pwVar4 = pwVar3;
      wVar1 = *pwVar3;
    } while ((*pwVar3 == 0x2c) &&
            (pwVar4 = param_3, wVar1 = wRam0000000000000002, pwVar3 != (wint_t *)0x0));
    if (wVar1 == 0x29) {
      param_3 = pwVar4 + 1;
      if (*(int *)(param_2 + 8) < 1) {
        param_3 = (wint_t *)0x0;
      }
      goto LAB_1468e05c6;
    }
  }
LAB_1468e05c4:
  param_3 = (wint_t *)0x0;
LAB_1468e05c6:
  if ((local_60 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_3;
}



// FUNCTION 1468e05fc FUN_1468e05fc body=205 status=ok
// SIG undefined FUN_1468e05fc(void)

longlong FUN_1468e05fc(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  wint_t *pwVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar2 = FUN_140d50488(param_1,param_4,param_6);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_68 = param_6;
    lVar4 = FUN_1468db8cd(&local_48,param_1[0xe],param_2,param_5);
    if (lVar4 != 0) {
      local_58 = (undefined4)local_48;
      uStack_54 = local_48._4_4_;
      uStack_50 = (undefined4)uStack_40;
      uStack_4c = uStack_40._4_4_;
      (**(code **)(*param_1 + 0x1f0))(param_1,&local_58,param_5,param_3);
      lVar4 = lVar4 + -2;
      do {
        pwVar1 = (wint_t *)(lVar4 + 2);
        lVar4 = lVar4 + 2;
        iVar3 = iswspace(*pwVar1);
      } while (iVar3 != 0);
      goto LAB_1468e0638;
    }
  }
  lVar4 = 0;
LAB_1468e0638:
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1468e06ca FUN_1468e06ca body=197 status=ok
// SIG undefined FUN_1468e06ca(void)

longlong FUN_1468e06ca(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  wint_t *pwVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = FUN_140d50488(param_1,param_4,param_6);
  if (cVar2 != '\0') {
    local_48 = 0;
    uStack_40 = 0;
    local_58 = param_6;
    lVar4 = FUN_1468db8cd(&local_48,param_1[0xe],param_2,param_5);
    if (lVar4 != 0) {
      (**(code **)(*param_1 + 0x1f8))(param_1,&local_48,param_5,param_3);
      lVar4 = lVar4 + -2;
      do {
        pwVar1 = (wint_t *)(lVar4 + 2);
        lVar4 = lVar4 + 2;
        iVar3 = iswspace(*pwVar1);
      } while (iVar3 != 0);
      goto LAB_1468e0706;
    }
  }
  lVar4 = 0;
LAB_1468e0706:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar4;
}



// FUNCTION 1468e0790 FUN_1468e0790 body=140 status=ok
// SIG undefined FUN_1468e0790(void)

void FUN_1468e0790(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x70) != 0) {
    lVar3 = FUN_14001206a();
    lVar1 = *(longlong *)(param_1 + 0x70);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_18 = param_1;
      FUN_1468eaa82(lVar1 + 0x1b0);
    }
  }
  FUN_14689b13c(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e081e FUN_1468e081e body=72 status=ok
// SIG undefined FUN_1468e081e(void)

undefined8 FUN_1468e081e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined7 uVar3;
  undefined8 uVar2;
  undefined7 extraout_var;
  
  if ((param_2 == 0) || (*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8))) {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x70);
    uVar3 = (undefined7)((ulonglong)*(longlong *)(param_1 + 8) >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x70) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1468e0866 FUN_1468e0866 body=161 status=ok
// SIG undefined FUN_1468e0866(void)

undefined8 FUN_1468e0866(longlong *param_1,longlong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong uVar1;
  
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (((uVar1 != DAT_14c892b80) && (FUN_140017f82(), *(longlong *)(param_2 + 0xc) != DAT_14c951fb0))
     && (FUN_14001988a(), *(longlong *)(param_2 + 0xc) != DAT_14c952008)) {
    return 0;
  }
  (**(code **)(*param_1 + 0xd0))
            (param_1,param_3,
             (longlong)*(int *)((longlong)param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
             param_4 + *(int *)((longlong)param_1 + 0x44),0);
  return 3;
}



// FUNCTION 1468e0908 FUN_1468e0908 body=176 status=ok
// SIG undefined FUN_1468e0908(void)

undefined8 * FUN_1468e0908(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_140019da0();
  puVar1[1] = &DAT_14c951f58;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149e98f10;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1458660b0(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e09be FUN_1468e09be body=44 status=ok
// SIG undefined FUN_1468e09be(void)

void FUN_1468e09be(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_140bc16e2(param_2,param_3);
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468e09ea FUN_1468e09ea body=327 status=ok
// SIG undefined FUN_1468e09ea(void)

void FUN_1468e09ea(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char cVar1;
  longlong lVar2;
  longlong *_Dst;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong local_48 [3];
  
  local_48[2] = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_4 == 1) {
    cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
    if (cVar1 != '\0') {
      local_48[0] = 0;
      local_48[1] = 0;
      local_58 = param_7;
      lVar2 = FUN_1468e04ba(param_1,local_48,param_2,param_5);
      if (lVar2 != 0) {
        cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar1 == '\0') {
          _Dst = (longlong *)(param_3 + *(int *)((longlong)param_1 + 0x44));
          if (_Dst != local_48) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,local_48,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,local_48,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,local_48);
        }
      }
      if (local_48[0] != 0) {
        FUN_1400020a8();
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_48[2] ^ (ulonglong)auStack_78);
    }
    param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
  }
  local_58 = param_7;
  FUN_1468e04ba(param_1,param_3,param_2,param_5);
  if ((local_48[2] ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e0b62 FUN_1468e0b62 body=67 status=ok
// SIG undefined FUN_1468e0b62(void)

undefined8 FUN_1468e0b62(longlong param_1,char *param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  if (*param_2 == '\x01') {
    lVar1 = *(longlong *)(param_1 + 0x70);
    uVar2 = FUN_140bc13b4(param_2,*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
    uVar2 = FUN_140119b6e(uVar2,*(undefined8 *)(lVar1 + 0xe8));
    return uVar2;
  }
  return 0;
}



// FUNCTION 1468e0ba6 FUN_1468e0ba6 body=176 status=ok
// SIG undefined FUN_1468e0ba6(void)

void FUN_1468e0ba6(longlong param_1,char *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = *(longlong *)(param_1 + 0x70);
  uVar4 = FUN_140bc13b4(param_2,*(undefined8 *)(lVar1 + 0xe0),*(undefined8 *)(lVar1 + 0xe8));
  lVar2 = param_3[1];
  if ((int)lVar2 < 1) {
    if (*param_2 != '\x01') goto LAB_1468e0c13;
    FUN_1400fca8a(uVar4,*(undefined8 *)(lVar1 + 0xe8));
    cVar3 = '\0';
  }
  else {
    local_30 = *param_3;
    local_24 = *(undefined4 *)((longlong)param_3 + 0xc);
    *param_3 = 0;
    param_3[1] = 0;
    local_28 = (int)lVar2;
    FUN_140bc14b8(uVar4,*(undefined8 *)(lVar1 + 0xe8));
    cVar3 = '\x01';
  }
  *param_2 = cVar3;
LAB_1468e0c13:
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e0c58 FUN_1468e0c58 body=379 status=ok
// SIG undefined FUN_1468e0c58(void)

longlong FUN_1468e0c58(longlong *param_1,undefined8 param_2,longlong param_3,int param_4,
                      undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong lVar5;
  longlong *_Dst;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  longlong local_48;
  undefined8 uStack_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48 = 0;
  uStack_40 = 0;
  local_68 = param_7;
  lVar5 = FUN_1468e04ba(param_1,&local_48,param_2,param_5);
  if (lVar5 != 0) {
    if (param_4 == 1) {
      cVar4 = (**(code **)(*param_1 + 0x80))(param_1);
      if (cVar4 != '\0') {
        cVar4 = (**(code **)(*param_1 + 0x80))(param_1);
        if (cVar4 == '\0') {
          _Dst = (longlong *)(param_3 + *(int *)((longlong)param_1 + 0x44));
          if (_Dst != &local_48) {
            if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
              (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_48,(int)param_1[6]);
            }
            else {
              memcpy(_Dst,&local_48,
                     (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
            }
          }
        }
        else {
          (**(code **)(*param_1 + 0x98))(param_1,param_3,&local_48);
        }
        goto LAB_1468e0d41;
      }
      param_3 = param_3 + *(int *)((longlong)param_1 + 0x44);
    }
    lVar2 = local_48;
    iVar3 = (int)uStack_40;
    bVar1 = (int)uStack_40 < 1;
    if (bVar1) {
      FUN_1400fca8a(param_5,*(undefined8 *)(param_1[0xe] + 0xe8));
    }
    else {
      local_4c = uStack_40._4_4_;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = lVar2;
      local_50 = iVar3;
      FUN_140bc14b8(param_5,*(undefined8 *)(param_1[0xe] + 0xe8));
    }
    *(bool *)param_3 = !bVar1;
  }
LAB_1468e0d41:
  if (local_48 != 0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e0dd4 FUN_1468e0dd4 body=16 status=ok
// SIG undefined FUN_1468e0dd4(void)

undefined8 FUN_1468e0dd4(void)

{
  FUN_1468c83be();
  return 0;
}



// FUNCTION 1468e0de4 FUN_1468e0de4 body=176 status=ok
// SIG undefined FUN_1468e0de4(void)

undefined8 * FUN_1468e0de4(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_14001988a();
  puVar1[1] = &DAT_14c952008;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149ea6af0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468e0e96(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e0e96 FUN_1468e0e96 body=126 status=ok
// SIG undefined FUN_1468e0e96(void)

undefined8 *
FUN_1468e0e96(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468e9fe8(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149ea6af0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e0f50 FUN_1468e0f50 body=182 status=ok
// SIG undefined FUN_1468e0f50(void)

undefined8 * FUN_1468e0f50(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_14475b26a();
  puVar1[1] = &DAT_14c9520b8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e99390;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1405ebf1c(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1008 FUN_1468e1008 body=180 status=ok
// SIG undefined FUN_1468e1008(void)

undefined8 * FUN_1468e1008(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_14093f012();
  puVar1[1] = &DAT_14c952110;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149ea59a0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468dc376(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e10be FUN_1468e10be body=180 status=ok
// SIG undefined FUN_1468e10be(void)

undefined8 * FUN_1468e10be(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_14093f0c0();
  puVar1[1] = &DAT_14c952168;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149ea5c10;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468dc276(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1174 FUN_1468e1174 body=182 status=ok
// SIG undefined FUN_1468e1174(void)

undefined8 * FUN_1468e1174(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_140e98e1a();
  puVar1[1] = &DAT_14c952270;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149ea5e80;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468ec4aa(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e122c FUN_1468e122c body=182 status=ok
// SIG undefined FUN_1468e122c(void)

undefined8 * FUN_1468e122c(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_144a8cc30();
  puVar1[1] = &DAT_14c9522c8;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e6f6a0;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468ec5aa(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e12e4 FUN_1468e12e4 body=182 status=ok
// SIG undefined FUN_1468e12e4(void)

undefined8 * FUN_1468e12e4(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x70,0);
  FUN_144aa1f9a();
  puVar1[1] = &DAT_14c952320;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e6f910;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468ec6aa(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e139b FUN_1468e139b body=164 status=ok
// SIG undefined FUN_1468e139b(void)

longlong FUN_1468e139b(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    if (param_1 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = *(longlong *)(param_1 + 0x48);
    }
    local_20 = 0xffffffff;
    local_1c = 0x101;
    local_1a = 0;
    local_30 = param_1;
    FUN_1468eb240(&local_30);
    if (local_28 != 0) {
      do {
        lVar1 = local_28;
        if (*(longlong *)(local_28 + 0x18) == param_2) goto LAB_1468e13b7;
        local_28 = *(longlong *)(local_28 + 0x28);
        FUN_1468eb240(&local_30);
      } while (local_28 != 0);
    }
  }
  lVar1 = 0;
LAB_1468e13b7:
  if ((local_18 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1;
}



// FUNCTION 1468e147a FUN_1468e147a body=159 status=ok
// SIG undefined FUN_1468e147a(void)

undefined8 FUN_1468e147a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e151a FUN_1468e151a body=466 status=ok
// SIG undefined FUN_1468e151a(void)

undefined8 FUN_1468e151a(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x3f) & 1) == 0) {
    local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_40,&local_50);
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
    FUN_140002266(&local_40,L"%s%s",uVar1,puVar3);
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
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    pwVar2 = L"OBJECT";
  }
  else {
    local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
    FUN_1400021e4(&local_40,&local_50);
    puVar3 = local_50;
    if (local_48 == 0) {
      puVar3 = &DAT_149dfb77a;
    }
    uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
    FUN_140002266(&local_40,L"TObjectPtr<%s%s>",uVar1,puVar3);
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
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    pwVar2 = L"OBJECTPTR";
  }
  FUN_140056680(param_2,pwVar2);
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e16f8 FUN_1468e16f8 body=29 status=ok
// SIG undefined FUN_1468e16f8(void)

undefined8 * FUN_1468e16f8(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1468e1716();
  return param_2;
}



// FUNCTION 1468e1716 FUN_1468e1716 body=281 status=ok
// SIG undefined FUN_1468e1716(void)

void FUN_1468e1716(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *_Src;
  undefined1 auStack_58 [40];
  longlong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    lVar2 = (**(code **)(*param_1 + 0x210))
                      (param_1,(longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                               param_3 + *(int *)((longlong)param_1 + 0x44));
  }
  else {
    local_30 = 0;
    cVar1 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar1 == '\0') {
      _Src = (longlong *)(param_3 + *(int *)((longlong)param_1 + 0x44));
      lVar2 = local_30;
      if (_Src != &local_30) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_30,_Src,(int)param_1[6]);
          lVar2 = local_30;
        }
        else {
          memcpy(&local_30,_Src,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          lVar2 = local_30;
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_30);
      lVar2 = local_30;
    }
  }
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  *param_2 = lVar2;
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e1836 FUN_1468e1836 body=46 status=ok
// SIG undefined FUN_1468e1836(void)

void FUN_1468e1836(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  
  lVar1 = *param_3;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  *param_2 = lVar1;
  return;
}



// FUNCTION 1468e1864 FUN_1468e1864 body=108 status=ok
// SIG undefined FUN_1468e1864(void)

void FUN_1468e1864(longlong *param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar1 = *(uint *)(param_1 + 6);
  if ((ulonglong)uVar1 != 0) {
    if (uVar1 == 1) {
      uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
      *param_2 = uVar3;
    }
    else {
      iVar2 = *(int *)((longlong)param_1 + 0x34);
      uVar4 = 0;
      do {
        uVar3 = (**(code **)(*param_1 + 0x210))(param_1,param_3);
        param_2[uVar4] = uVar3;
        uVar4 = uVar4 + 1;
        param_3 = param_3 + iVar2;
      } while (uVar1 != uVar4);
    }
  }
  return;
}



// FUNCTION 1468e18d0 FUN_1468e18d0 body=36 status=ok
// SIG undefined FUN_1468e18d0(void)

void FUN_1468e18d0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_140892c84(param_1,param_2,1,param_3,0,*(undefined4 *)(param_1 + 0x30));
  return;
}



// FUNCTION 1468e18f4 FUN_1468e18f4 body=176 status=ok
// SIG undefined FUN_1468e18f4(void)

undefined8 * FUN_1468e18f4(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x78,0);
  FUN_140019ace();
  puVar1[1] = &DAT_14c952490;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *puVar1 = &PTR_LAB_149ea6d10;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468e19a6(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e19a6 FUN_1468e19a6 body=136 status=ok
// SIG undefined FUN_1468e19a6(void)

undefined8 *
FUN_1468e19a6(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  param_1[0xe] = 0;
  *param_1 = &PTR_LAB_149ea6d10;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1a30 FUN_1468e1a30 body=52 status=ok
// SIG undefined FUN_1468e1a30(void)

void FUN_1468e1a30(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149ea6d10;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
    param_1[0xe] = 0;
  }
  return;
}



// FUNCTION 1468e1a94 FUN_1468e1a94 body=84 status=ok
// SIG undefined FUN_1468e1a94(void)

void FUN_1468e1a94(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a658e();
  local_20 = param_1;
  FUN_140b8d077(param_2,param_1 + 0x70);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1aea FUN_1468e1aea body=40 status=ok
// SIG undefined FUN_1468e1aea(void)

void FUN_1468e1aea(longlong param_1,undefined8 param_2)

{
  FUN_14689aaf4();
                    /* WARNING: Could not recover jumptable at 0x0001468e1b0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x20))(*(longlong **)(param_1 + 0x70),param_2);
  return;
}



// FUNCTION 1468e1b12 FUN_1468e1b12 body=105 status=ok
// SIG undefined FUN_1468e1b12(void)

void FUN_1468e1b12(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0xfff00007;
  local_20 = param_1;
  uVar1 = FUN_145a1bb4a(*(undefined8 *)(param_2 + 0x70),&local_20,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x70) = uVar1;
  FUN_145a1bbc6(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1b98 FUN_1468e1b98 body=79 status=ok
// SIG undefined FUN_1468e1b98(void)

void FUN_1468e1b98(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1468984f2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0001468e1bd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),param_2);
  return;
}



// FUNCTION 1468e1be8 FUN_1468e1be8 body=267 status=ok
// SIG undefined FUN_1468e1be8(void)

undefined8 FUN_1468e1be8(longlong param_1,undefined8 param_2,longlong *param_3,uint param_4)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 *local_48;
  int local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_3 != (longlong *)0x0) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
              (*(longlong **)(param_1 + 0x70),&local_48,&local_38,param_4 & 0xfffffffd);
    puVar2 = &DAT_149dfb77a;
    if ((int)uStack_30 != 0) {
      puVar2 = local_38;
    }
    puVar1 = &DAT_149dfb77a;
    if (local_40 != 0) {
      puVar1 = local_48;
    }
    FUN_140002266(&local_58,L"<%s%s>",puVar1,puVar2);
    if (&local_58 == param_3) {
      if (local_58 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_3 != 0) {
        FUN_1400020a8();
      }
      *param_3 = local_58;
      local_58 = 0;
      *(undefined4 *)(param_3 + 1) = local_50;
      *(undefined4 *)((longlong)param_3 + 0xc) = local_4c;
    }
    if (local_48 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  FUN_140056680(param_2,L"TOptional");
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1cf4 FUN_1468e1cf4 body=166 status=ok
// SIG undefined FUN_1468e1cf4(void)

undefined8 FUN_1468e1cf4(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),&local_30,0,0);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  FUN_140056680(param_2,L"TOPTIONAL");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e1d9c FUN_1468e1d9c body=27 status=ok
// SIG undefined FUN_1468e1d9c(void)

undefined8 FUN_1468e1d9c(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))();
  return param_2;
}



// FUNCTION 1468e1db8 FUN_1468e1db8 body=237 status=ok
// SIG undefined FUN_1468e1db8(void)

ulonglong FUN_1468e1db8(longlong param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  undefined8 unaff_RBP;
  undefined7 uVar6;
  
  cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar5 = *(longlong **)(param_1 + 0x70);
  uVar6 = (undefined7)((ulonglong)unaff_RBP >> 8);
  if (param_3 == 0) {
    if (cVar1 == '\0') {
      uVar4 = CONCAT71(uVar6,*(undefined1 *)
                              (param_2 +
                              (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]
                              ));
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,param_2);
      uVar4 = (ulonglong)uVar3;
    }
  }
  else {
    if (cVar1 == '\0') {
      uVar4 = CONCAT71(uVar6,*(undefined1 *)
                              (param_2 +
                              (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]
                              ));
    }
    else {
      uVar3 = (**(code **)(*plVar5 + 0x1c8))(plVar5,param_2);
      uVar4 = (ulonglong)uVar3;
      plVar5 = *(longlong **)(param_1 + 0x70);
    }
    cVar1 = (**(code **)(*plVar5 + 0x1b8))();
    plVar5 = *(longlong **)(param_1 + 0x70);
    if (cVar1 == '\0') {
      bVar2 = *(byte *)(param_3 +
                       (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]);
    }
    else {
      bVar2 = (**(code **)(*plVar5 + 0x1c8))(plVar5,param_3);
    }
    if (((byte)uVar4 & bVar2) == 1) {
                    /* WARNING: Could not recover jumptable at 0x0001468e1e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 200))
                        (*(longlong **)(param_1 + 0x70),param_2,param_3,param_4);
      return uVar4;
    }
    uVar4 = CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 ^ bVar2);
  }
  return (uVar4 ^ 1) & 0xffffffff;
}



// FUNCTION 1468e1ea6 FUN_1468e1ea6 body=1501 status=ok
// SIG undefined FUN_1468e1ea6(void)

void FUN_1468e1ea6(longlong param_1,longlong *param_2,void *param_3,longlong param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong *plVar8;
  longlong lVar9;
  size_t sVar10;
  undefined1 auStack_108 [32];
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  int local_cc;
  undefined8 local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined5 uStack_60;
  undefined3 uStack_5b;
  undefined5 uStack_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  plVar7 = *(longlong **)(*param_2 + 8);
  bVar1 = *(byte *)(plVar7 + 5);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  if (cVar2 != '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1c8))();
  }
  cVar2 = FUN_146828308(*param_2);
  if (cVar2 == '\0') {
    if ((bVar1 & 1) != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar7 = *(longlong **)(param_1 + 0x70);
      if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
      }
      lVar9 = (longlong)*(int *)((longlong)plVar7 + 0x34) * (longlong)(int)plVar7[6];
      if (*(char *)((longlong)param_3 + lVar9) == '\x01') {
        if ((*(byte *)((longlong)plVar7 + 0x3c) & 0x10) == 0) {
          (**(code **)(*plVar7 + 0x148))(plVar7,param_3);
        }
        *(undefined1 *)((longlong)param_3 + lVar9) = 0;
      }
    }
    goto LAB_1468e1f5d;
  }
  if (param_4 == 0) {
    lVar9 = 0;
  }
  else {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar8 = *(longlong **)(param_1 + 0x70);
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_4 +
                       (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6]);
    }
    else {
      cVar2 = (**(code **)(*plVar8 + 0x1c8))();
    }
    lVar9 = 0;
    if (cVar2 != '\0') {
      lVar9 = param_4;
    }
  }
  if (((*(byte *)(*(longlong *)(*param_2 + 8) + 0x28) & 0x40) != 0) ||
     (0x3f3 < *(int *)((longlong)plVar7 + 0x44))) {
    if ((bVar1 & 1) != 0) {
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar7 = *(longlong **)(param_1 + 0x70);
      if (cVar2 == '\0') {
        sVar10 = (longlong)*(int *)((longlong)plVar7 + 0x34) * (longlong)(int)plVar7[6];
        if (*(char *)((longlong)param_3 + sVar10) == '\0') {
          if ((*(byte *)((longlong)plVar7 + 0x39) & 2) == 0) {
            (**(code **)(*plVar7 + 0x160))(plVar7,param_3);
          }
          else {
            memset(param_3,0,sVar10);
          }
          *(undefined1 *)((longlong)param_3 + sVar10) = 1;
        }
      }
      else {
        cVar2 = (**(code **)(*plVar7 + 0x1b8))();
        plVar7 = *(longlong **)(param_1 + 0x70);
        if (cVar2 == '\0') {
          if (*(char *)((longlong)param_3 +
                       (longlong)*(int *)((longlong)plVar7 + 0x34) * (longlong)(int)plVar7[6]) !=
              '\0') goto LAB_1468e201c;
        }
        else {
          cVar2 = (**(code **)(*plVar7 + 0x1c8))();
          if (cVar2 != '\0') goto LAB_1468e201c;
          plVar7 = *(longlong **)(param_1 + 0x70);
        }
        uVar5 = plVar7[7];
        if ((uVar5 >> 0x24 & 1) == 0) {
          (**(code **)(*plVar7 + 0x148))();
          plVar7 = *(longlong **)(param_1 + 0x70);
          uVar5 = plVar7[7];
        }
        if (((uint)uVar5 >> 9 & 1) == 0) {
          (**(code **)(*plVar7 + 0x160))(plVar7,param_3);
        }
        else {
          memset(param_3,0,(longlong)(int)plVar7[6] * (longlong)*(int *)((longlong)plVar7 + 0x34));
        }
      }
    }
LAB_1468e201c:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_48 ^ (ulonglong)auStack_108);
  }
  if ((bVar1 & 1) == 0) {
    FUN_140a6bd9e(&local_c8,*(undefined8 *)(param_1 + 0x70),0,param_3);
    FUN_140241707(param_2,&local_c8);
    iVar3 = (**(code **)(*plVar7 + 0x28))(plVar7);
    local_e8 = lVar9;
    FUN_142817a2a(&local_c8,param_2,*(undefined8 *)(param_1 + 0x70),param_3);
    uVar4 = (**(code **)(*plVar7 + 0x28))(plVar7);
    iVar3 = (int)uVar4 - iVar3;
    uStack_90 = CONCAT44(iVar3,(undefined4)uStack_90);
    if (0 < iVar3) {
      (**(code **)(*plVar7 + 0x1a0))(plVar7,local_80);
      plVar8 = (longlong *)plVar7[1];
      if ((undefined4 *)plVar8[1] < (undefined4 *)*plVar8 + 1) {
        if ((*(byte *)((longlong)plVar7 + 0x2a) & 2) == 0) {
          (**(code **)(*plVar7 + 0x170))(plVar7,(longlong)&uStack_90 + 4,4);
        }
        else {
          FUN_14572512c(plVar7,(longlong)&uStack_90 + 4);
        }
      }
      else {
        uStack_90 = CONCAT44(*(undefined4 *)*plVar8,(undefined4)uStack_90);
        *plVar8 = *plVar8 + 4;
      }
      (**(code **)(*plVar7 + 0x1a0))(plVar7,uVar4);
    }
    goto LAB_1468e1f5d;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  local_80 = 0xffffffffffffffff;
  local_88 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_5b = 0;
  uStack_58 = 0;
  FUN_140241707(param_2,&local_c8);
  FUN_1468dc184(&local_cc,uStack_c0,*(undefined8 *)(param_1 + 0x70));
  if (local_cc != 0) {
    FUN_140241d2e(&local_c8);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar8 = *(longlong **)(param_1 + 0x70);
  if (cVar2 == '\0') {
    sVar10 = (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6];
    if (*(char *)((longlong)param_3 + sVar10) == '\0') {
      if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
        (**(code **)(*plVar8 + 0x160))(plVar8,param_3);
      }
      else {
        memset(param_3,0,sVar10);
      }
      *(undefined1 *)((longlong)param_3 + sVar10) = 1;
    }
  }
  else {
    cVar2 = (**(code **)(*plVar8 + 0x1b8))();
    plVar8 = *(longlong **)(param_1 + 0x70);
    if (cVar2 == '\0') {
      if (*(char *)((longlong)param_3 +
                   (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6]) == '\0')
      goto LAB_1468e235f;
    }
    else {
      cVar2 = (**(code **)(*plVar8 + 0x1c8))();
      if (cVar2 == '\0') {
        plVar8 = *(longlong **)(param_1 + 0x70);
LAB_1468e235f:
        uVar5 = plVar8[7];
        if ((uVar5 >> 0x24 & 1) == 0) {
          (**(code **)(*plVar8 + 0x148))();
          plVar8 = *(longlong **)(param_1 + 0x70);
          uVar5 = plVar8[7];
        }
        if (((uint)uVar5 >> 9 & 1) == 0) {
          (**(code **)(*plVar8 + 0x160))(plVar8,param_3);
        }
        else {
          memset(param_3,0,(longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
        }
      }
    }
  }
  lVar6 = (**(code **)(*plVar7 + 0x28))(plVar7);
  plVar8 = *(longlong **)(param_1 + 0x70);
  local_e8 = FUN_1448f9ec4(param_1);
  local_e0 = lVar9;
  iVar3 = (**(code **)(*plVar8 + 0xc0))(plVar8,&local_c8,param_2,param_3);
  if (((iVar3 == 3) || (iVar3 == 1)) ||
     ((iVar3 == 0 &&
      (((**(code **)(**(longlong **)(param_1 + 0x70) + 0x168))
                  (*(longlong **)(param_1 + 0x70),&local_d8),
       CONCAT44(uStack_b8,uStack_bc) == local_d8 &&
       (local_e8 = lVar9, FUN_142817a2a(&local_c8,param_2,*(undefined8 *)(param_1 + 0x70),param_3),
       (*(byte *)((longlong)plVar7 + 0x29) & 4) == 0)))))) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  else {
    (**(code **)(*plVar7 + 0x1a0))(plVar7,lVar6 + uStack_90._4_4_);
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar7 = *(longlong **)(param_1 + 0x70);
    if (cVar2 == '\0') {
      lVar9 = (longlong)*(int *)((longlong)plVar7 + 0x34) * (longlong)(int)plVar7[6];
      if (*(char *)((longlong)param_3 + lVar9) == '\x01') {
        if ((*(byte *)((longlong)plVar7 + 0x3c) & 0x10) == 0) {
          (**(code **)(*plVar7 + 0x148))(plVar7,param_3);
        }
        *(undefined1 *)((longlong)param_3 + lVar9) = 0;
      }
    }
    else {
      (**(code **)(*plVar7 + 0x1d0))(plVar7,param_3);
    }
  }
LAB_1468e1f5d:
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e24c8 FUN_1468e24c8 body=568 status=ok
// SIG undefined FUN_1468e24c8(void)

undefined4
FUN_1468e24c8(longlong param_1,longlong *param_2,undefined8 param_3,void *param_4,undefined8 param_5
             )

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  size_t _Size;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  char local_41;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  bVar1 = *(byte *)(param_2 + 5);
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar5 = *(longlong **)(param_1 + 0x70);
  if (cVar2 == '\0') {
    local_41 = *(char *)((longlong)param_4 +
                        (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]);
  }
  else {
    local_41 = (**(code **)(*plVar5 + 0x1c8))(plVar5,param_4);
  }
  (**(code **)(*param_2 + 0x178))(param_2,&local_41,1);
  if (local_41 == '\0') {
    uVar3 = (undefined4)CONCAT71((int7)((ulonglong)param_3 >> 8),1);
    goto LAB_1468e2575;
  }
  if ((bVar1 & 1) != 0) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar5 = *(longlong **)(param_1 + 0x70);
    if (cVar2 == '\0') {
      _Size = (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6];
      if (*(char *)((longlong)param_4 + _Size) == '\0') {
        if ((*(byte *)((longlong)plVar5 + 0x39) & 2) == 0) {
          (**(code **)(*plVar5 + 0x160))(plVar5,param_4);
        }
        else {
          memset(param_4,0,_Size);
        }
        *(undefined1 *)((longlong)param_4 + _Size) = 1;
      }
    }
    else {
      cVar2 = (**(code **)(*plVar5 + 0x1b8))();
      plVar5 = *(longlong **)(param_1 + 0x70);
      if (cVar2 == '\0') {
        if (*(char *)((longlong)param_4 +
                     (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6]) == '\0'
           ) goto LAB_1468e2699;
      }
      else {
        cVar2 = (**(code **)(*plVar5 + 0x1c8))();
        if (cVar2 == '\0') {
          plVar5 = *(longlong **)(param_1 + 0x70);
LAB_1468e2699:
          uVar4 = plVar5[7];
          if ((uVar4 >> 0x24 & 1) == 0) {
            (**(code **)(*plVar5 + 0x148))();
            plVar5 = *(longlong **)(param_1 + 0x70);
            uVar4 = plVar5[7];
          }
          if (((uint)uVar4 >> 9 & 1) == 0) {
            (**(code **)(*plVar5 + 0x160))(plVar5,param_4);
          }
          else {
            memset(param_4,0,(longlong)(int)plVar5[6] * (longlong)*(int *)((longlong)plVar5 + 0x34))
            ;
          }
        }
      }
    }
  }
  local_58 = param_5;
  uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xd8))
                    (*(longlong **)(param_1 + 0x70),param_2,param_3,param_4);
LAB_1468e2575:
  if (((bVar1 & 1) != 0) && (((byte)uVar3 & local_41 != '\0') == 0)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar5 = *(longlong **)(param_1 + 0x70);
    if (cVar2 == '\0') {
      lVar6 = (longlong)*(int *)((longlong)plVar5 + 0x34) * (longlong)(int)plVar5[6];
      if (*(char *)((longlong)param_4 + lVar6) == '\x01') {
        if ((*(byte *)((longlong)plVar5 + 0x3c) & 0x10) == 0) {
          (**(code **)(*plVar5 + 0x148))(plVar5,param_4);
        }
        *(undefined1 *)((longlong)param_4 + lVar6) = 0;
      }
    }
    else {
      (**(code **)(*plVar5 + 0x1d0))(plVar5,param_4);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e2710 FUN_1468e2710 body=441 status=ok
// SIG undefined FUN_1468e2710(void)

void FUN_1468e2710(longlong param_1,undefined8 *param_2,longlong param_3,int param_4,
                  longlong param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  byte bVar4;
  undefined2 *puVar5;
  longlong lVar6;
  ushort uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  if (param_4 == 1) {
    param_3 = param_3 + *(int *)(param_1 + 0x44);
  }
  FUN_1400020e8(param_2,&DAT_149e06140,1);
  cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (cVar3 == '\0') {
    bVar4 = *(byte *)(param_3 +
                     (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
  else {
    bVar4 = (**(code **)(*plVar1 + 0x1c8))(plVar1,param_3);
  }
  if ((param_3 != 0 & bVar4) != 1) {
LAB_1468e2885:
    FUN_1400020e8(param_2,&DAT_149e06144,1);
    return;
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (param_5 == 0) {
    lVar6 = 0;
  }
  else {
    cVar3 = (**(code **)(*plVar1 + 0x1b8))(plVar1);
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = *(char *)(param_5 +
                       (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]);
    }
    else {
      cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_5);
    }
    lVar6 = 0;
    if (cVar3 != '\0') {
      lVar6 = param_5;
    }
  }
  lVar11 = 0;
  (**(code **)(*plVar1 + 0xf0))(plVar1,param_2,param_3,0,lVar6,param_6,param_7,param_8);
  if (*(int *)(param_2 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*param_2;
  }
  while( true ) {
    uVar7 = *(ushort *)((longlong)puVar5 + lVar11);
    uVar8 = (ulonglong)uVar7;
    uVar9 = *(ushort *)((longlong)&DAT_149e06140 + lVar11);
    if (uVar7 != uVar9) break;
    if (uVar7 == 0) goto LAB_1468e28aa;
LAB_1468e285b:
    lVar11 = lVar11 + 2;
  }
  if ((uVar9 | uVar7) < 0x80) {
    uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
    uVar10 = (ulonglong)uVar9;
    uVar9 = (ushort)(byte)(&DAT_149e05da0)[uVar10];
    if ((&DAT_149e05da0)[uVar8] == (&DAT_149e05da0)[uVar10]) goto LAB_1468e285b;
  }
  if (uVar7 != uVar9) goto LAB_1468e2885;
LAB_1468e28aa:
  FUN_144a787a6(param_2,&DAT_14c952508);
  return;
}



// FUNCTION 1468e28ca FUN_1468e28ca body=1172 status=ok
// SIG undefined FUN_1468e28ca(void)

wint_t * FUN_1468e28ca(longlong param_1,wint_t *param_2,void *param_3,int param_4,undefined8 param_5
                      ,uint param_6,undefined8 param_7)

{
  ushort uVar1;
  ushort uVar2;
  wint_t wVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  size_t sVar9;
  wint_t *pwVar10;
  longlong lVar11;
  uint uVar12;
  bool bVar13;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  uint local_70;
  undefined8 local_68;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_4 == 1) {
    param_3 = (void *)((longlong)param_3 + (longlong)*(int *)(param_1 + 0x44));
  }
  if (param_2 != (wint_t *)0x0) {
    FUN_140056680(&local_58);
    if (local_50 == DAT_14c952510) {
      bVar13 = true;
      if (1 < local_50) {
        lVar11 = 0;
        while( true ) {
          uVar1 = *(ushort *)(local_58 + lVar11);
          uVar5 = (uint)uVar1;
          uVar2 = *(ushort *)(DAT_14c952508 + lVar11);
          uVar12 = (uint)uVar2;
          if (uVar1 != uVar2) {
            if ((uVar2 | uVar1) < 0x80) {
              uVar5 = (uint)(byte)(&DAT_149e05da0)[uVar1];
              uVar12 = (uint)(byte)(&DAT_149e05da0)[uVar2];
              if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1468e295c;
            }
            iVar6 = uVar5 - uVar12;
            goto LAB_1468e2b04;
          }
          if (uVar1 == 0) break;
LAB_1468e295c:
          lVar11 = lVar11 + 2;
        }
        iVar6 = 0;
LAB_1468e2b04:
        bVar13 = iVar6 == 0;
      }
    }
    else {
      bVar13 = DAT_14c952510 + local_50 == 1;
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (bVar13) {
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar8 = *(longlong **)(param_1 + 0x70);
      if (cVar4 == '\0') {
        lVar11 = (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6];
        if (*(char *)((longlong)param_3 + lVar11) == '\x01') {
          if ((*(byte *)((longlong)plVar8 + 0x3c) & 0x10) == 0) {
            (**(code **)(*plVar8 + 0x148))();
          }
          *(undefined1 *)((longlong)param_3 + lVar11) = 0;
        }
      }
      else {
        (**(code **)(*plVar8 + 0x1d0))();
      }
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar8 = *(longlong **)(param_1 + 0x70);
      if (cVar4 == '\0') {
        sVar9 = (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6];
        if (*(char *)((longlong)param_3 + sVar9) == '\0') {
          if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
            (**(code **)(*plVar8 + 0x160))(plVar8,param_3);
          }
          else {
            memset(param_3,0,sVar9);
          }
          *(undefined1 *)((longlong)param_3 + sVar9) = 1;
        }
      }
      else {
        cVar4 = (**(code **)(*plVar8 + 0x1b8))();
        plVar8 = *(longlong **)(param_1 + 0x70);
        if (cVar4 == '\0') {
          if (*(char *)((longlong)param_3 +
                       (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6]) !=
              '\0') goto LAB_1468e2cef;
        }
        else {
          cVar4 = (**(code **)(*plVar8 + 0x1c8))();
          if (cVar4 != '\0') goto LAB_1468e2cef;
          plVar8 = *(longlong **)(param_1 + 0x70);
        }
        uVar7 = plVar8[7];
        if ((uVar7 >> 0x24 & 1) == 0) {
          (**(code **)(*plVar8 + 0x148))();
          plVar8 = *(longlong **)(param_1 + 0x70);
          uVar7 = plVar8[7];
        }
        if (((uint)uVar7 >> 9 & 1) == 0) {
          (**(code **)(*plVar8 + 0x160))(plVar8,param_3);
        }
        else {
          memset(param_3,0,(longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
        }
      }
      goto LAB_1468e2cef;
    }
    if (*param_2 == 0x28) {
      do {
        pwVar10 = param_2 + 1;
        param_2 = param_2 + 1;
        iVar6 = iswspace(*pwVar10);
      } while (iVar6 != 0);
      wVar3 = *param_2;
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar8 = *(longlong **)(param_1 + 0x70);
      if (wVar3 == 0x29) {
        if (cVar4 == '\0') {
          lVar11 = (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6];
          if (*(char *)((longlong)param_3 + lVar11) == '\x01') {
            if ((*(byte *)((longlong)plVar8 + 0x3c) & 0x10) == 0) {
              (**(code **)(*plVar8 + 0x148))(plVar8,param_3);
            }
            *(undefined1 *)((longlong)param_3 + lVar11) = 0;
          }
        }
        else {
          (**(code **)(*plVar8 + 0x1d0))(plVar8,param_3);
        }
LAB_1468e2a80:
        do {
          pwVar10 = param_2;
          iVar6 = iswspace(*pwVar10);
          param_2 = pwVar10 + 1;
        } while (iVar6 != 0);
        if (*pwVar10 != 0x29) {
          param_2 = (wint_t *)0x0;
        }
        goto LAB_1468e2cef;
      }
      if (cVar4 == '\0') {
        sVar9 = (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6];
        if (*(char *)((longlong)param_3 + sVar9) == '\0') {
          if ((*(byte *)((longlong)plVar8 + 0x39) & 2) == 0) {
            (**(code **)(*plVar8 + 0x160))(plVar8,param_3);
          }
          else {
            memset(param_3,0,sVar9);
          }
          *(undefined1 *)((longlong)param_3 + sVar9) = 1;
        }
      }
      else {
        cVar4 = (**(code **)(*plVar8 + 0x1b8))();
        plVar8 = *(longlong **)(param_1 + 0x70);
        if (cVar4 == '\0') {
          if (*(char *)((longlong)param_3 +
                       (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6]) ==
              '\0') goto LAB_1468e2c34;
        }
        else {
          cVar4 = (**(code **)(*plVar8 + 0x1c8))();
          if (cVar4 == '\0') {
            plVar8 = *(longlong **)(param_1 + 0x70);
LAB_1468e2c34:
            uVar7 = plVar8[7];
            if ((uVar7 >> 0x24 & 1) == 0) {
              (**(code **)(*plVar8 + 0x148))();
              plVar8 = *(longlong **)(param_1 + 0x70);
              uVar7 = plVar8[7];
            }
            if (((uint)uVar7 >> 9 & 1) == 0) {
              (**(code **)(*plVar8 + 0x160))(plVar8,param_3);
            }
            else {
              memset(param_3,0,
                     (longlong)(int)plVar8[6] * (longlong)*(int *)((longlong)plVar8 + 0x34));
            }
          }
        }
      }
      plVar8 = *(longlong **)(param_1 + 0x70);
      cVar4 = FUN_140d50488(plVar8,param_6,param_7);
      if ((param_2 != (wint_t *)0x0) && (cVar4 != '\0')) {
        local_70 = param_6 | 0x8000000;
        local_68 = param_7;
        local_78 = param_5;
        param_2 = (wint_t *)(**(code **)(*plVar8 + 0xf8))(plVar8,param_2,param_3,0);
        if (param_2 != (wint_t *)0x0) goto LAB_1468e2a80;
      }
      cVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar8 = *(longlong **)(param_1 + 0x70);
      if (cVar4 == '\0') {
        lVar11 = (longlong)*(int *)((longlong)plVar8 + 0x34) * (longlong)(int)plVar8[6];
        if (*(char *)((longlong)param_3 + lVar11) == '\x01') {
          if ((*(byte *)((longlong)plVar8 + 0x3c) & 0x10) == 0) {
            (**(code **)(*plVar8 + 0x148))(plVar8,param_3);
          }
          *(undefined1 *)((longlong)param_3 + lVar11) = 0;
        }
      }
      else {
        (**(code **)(*plVar8 + 0x1d0))(plVar8,param_3);
      }
    }
  }
  param_2 = (wint_t *)0x0;
LAB_1468e2cef:
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e2d60 FUN_1468e2d60 body=509 status=ok
// SIG undefined FUN_1468e2d60(void)

void FUN_1468e2d60(longlong param_1,void *param_2,void *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong *plVar4;
  longlong lVar5;
  size_t _Size;
  longlong lVar6;
  
  if (0 < param_4) {
    lVar5 = (longlong)*(int *)(param_1 + 0x30) * (longlong)*(int *)(param_1 + 0x34);
    do {
      cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
      plVar4 = *(longlong **)(param_1 + 0x70);
      if (cVar1 == '\0') {
        bVar2 = *(byte *)((longlong)param_3 +
                         (longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6]);
      }
      else {
        bVar2 = (**(code **)(*plVar4 + 0x1c8))();
        plVar4 = *(longlong **)(param_1 + 0x70);
      }
      cVar1 = (**(code **)(*plVar4 + 0x1b8))();
      plVar4 = *(longlong **)(param_1 + 0x70);
      if ((param_3 != (void *)0x0 & bVar2) == 1) {
        if (cVar1 == '\0') {
          _Size = (longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6];
          if (*(char *)((longlong)param_2 + _Size) == '\0') {
            if ((*(byte *)((longlong)plVar4 + 0x39) & 2) == 0) {
              (**(code **)(*plVar4 + 0x160))(plVar4,param_2);
            }
            else {
              memset(param_2,0,_Size);
            }
            *(undefined1 *)((longlong)param_2 + _Size) = 1;
          }
        }
        else {
          cVar1 = (**(code **)(*plVar4 + 0x1b8))();
          plVar4 = *(longlong **)(param_1 + 0x70);
          if (cVar1 == '\0') {
            if (*(char *)((longlong)param_2 +
                         (longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6]) ==
                '\0') goto LAB_1468e2eb0;
          }
          else {
            cVar1 = (**(code **)(*plVar4 + 0x1c8))();
            if (cVar1 == '\0') {
              plVar4 = *(longlong **)(param_1 + 0x70);
LAB_1468e2eb0:
              uVar3 = plVar4[7];
              if ((uVar3 & 0x1000000000) == 0) {
                (**(code **)(*plVar4 + 0x148))();
                plVar4 = *(longlong **)(param_1 + 0x70);
                uVar3 = plVar4[7];
              }
              if (((uint)uVar3 >> 9 & 1) == 0) {
                (**(code **)(*plVar4 + 0x160))(plVar4,param_2);
              }
              else {
                memset(param_2,0,
                       (longlong)(int)plVar4[6] * (longlong)*(int *)((longlong)plVar4 + 0x34));
              }
            }
          }
        }
        if (param_2 != param_3) {
          plVar4 = *(longlong **)(param_1 + 0x70);
          if ((*(byte *)((longlong)plVar4 + 0x3b) & 0x40) == 0) {
            (**(code **)(*plVar4 + 0x100))(plVar4,param_2,param_3,1);
          }
          else {
            memcpy(param_2,param_3,(longlong)*(int *)((longlong)plVar4 + 0x34));
          }
        }
      }
      else if (cVar1 == '\0') {
        lVar6 = (longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6];
        if (*(char *)((longlong)param_2 + lVar6) == '\x01') {
          if ((plVar4[7] & 0x1000000000U) == 0) {
            (**(code **)(*plVar4 + 0x148))(plVar4,param_2);
          }
          *(undefined1 *)((longlong)param_2 + lVar6) = 0;
        }
      }
      else {
        (**(code **)(*plVar4 + 0x1d0))(plVar4,param_2);
      }
      param_2 = (void *)((longlong)param_2 + lVar5);
      param_3 = (void *)((longlong)param_3 + lVar5);
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return;
}



// FUNCTION 1468e2f5e FUN_1468e2f5e body=102 status=ok
// SIG undefined FUN_1468e2f5e(void)

void FUN_1468e2f5e(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001468e2f92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1d0))(plVar1,param_2);
    return;
  }
  lVar3 = (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6];
  if (*(char *)(param_2 + lVar3) == '\x01') {
    if ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,param_2);
    }
    *(undefined1 *)(param_2 + lVar3) = 0;
  }
  return;
}



// FUNCTION 1468e2fc4 FUN_1468e2fc4 body=78 status=ok
// SIG undefined FUN_1468e2fc4(void)

void FUN_1468e2fc4(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x0001468e2ff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x1c0))(plVar1,param_2);
    return;
  }
  *(undefined1 *)(param_2 + (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6])
       = 0;
  return;
}



// FUNCTION 1468e3012 FUN_1468e3012 body=147 status=ok
// SIG undefined FUN_1468e3012(void)

void FUN_1468e3012(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (cVar2 == '\0') {
    lVar3 = (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6];
    if (*(char *)(param_2 + lVar3) == '\x01') {
      if ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0) {
        (**(code **)(*plVar1 + 0x148))(plVar1,param_2);
      }
      *(undefined1 *)(param_2 + lVar3) = 0;
    }
  }
  else {
    (**(code **)(*plVar1 + 0x1d0))(plVar1,param_2);
  }
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  if ((cVar2 != '\0') &&
     (plVar1 = *(longlong **)(param_1 + 0x70), (*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0001468e306f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x148))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1468e30a6 FUN_1468e30a6 body=115 status=ok
// SIG undefined FUN_1468e30a6(void)

void FUN_1468e30a6(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_2 +
                     (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2);
  }
  if (((param_2 != 0) && (cVar2 != '\0')) &&
     (plVar1 = *(longlong **)(param_1 + 0x70), (*(ushort *)((longlong)plVar1 + 0x3b) & 0x1040) == 0)
     ) {
                    /* WARNING: Could not recover jumptable at 0x0001468e3116. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x158))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1468e311a FUN_1468e311a body=138 status=ok
// SIG undefined FUN_1468e311a(void)

void FUN_1468e311a(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  longlong *plVar2;
  
  if (param_2 != 0) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar2 = *(longlong **)(param_1 + 0x70);
    if (cVar1 == '\0') {
      if (*(char *)(param_2 + (longlong)*(int *)((longlong)plVar2 + 0x34) * (longlong)(int)plVar2[6]
                   ) != '\x01') {
        return;
      }
    }
    else {
      cVar1 = (**(code **)(*plVar2 + 0x1c8))(plVar2,param_2);
      if (cVar1 == '\0') {
        return;
      }
      plVar2 = *(longlong **)(param_1 + 0x70);
    }
    if ((*(uint *)((longlong)plVar2 + 0x39) & 0x80000800) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001468e3196. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x170))(plVar2,param_2,param_3,param_4);
      return;
    }
  }
  return;
}



// FUNCTION 1468e31a4 FUN_1468e31a4 body=2317 status=ok
// SIG undefined FUN_1468e31a4(void)

int FUN_1468e31a4(longlong *param_1,undefined8 *param_2,longlong *param_3,longlong param_4,
                 longlong param_5,longlong param_6)

{
  undefined1 *puVar1;
  longlong *plVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  byte bVar8;
  longlong lVar9;
  longlong *plVar10;
  void *pvVar11;
  undefined8 *puVar12;
  longlong lVar13;
  size_t sVar14;
  char *pcVar15;
  undefined *puVar16;
  bool bVar17;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  ulonglong local_c0;
  char local_b8;
  undefined7 uStack_b7;
  ulonglong local_ac;
  undefined1 local_47 [7];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (*(int *)(*(longlong *)(*param_3 + 8) + 0x44) < 0x3f4) {
    if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                 0x110) < DAT_14c952520) && (FUN_144b3d300(&DAT_14c952520), DAT_14c952520 == -1)) {
      FUN_1446ddc76(&DAT_14c952518,"OptionProperty",1);
      _Init_thread_footer(&DAT_14c952520);
    }
    if (*(longlong *)((longlong)param_2 + 0xc) != DAT_14c952518) goto LAB_1468e33ec;
    iVar5 = FUN_1448332aa(*(undefined8 *)(*param_3 + 8),&DAT_14c9524e4);
    iVar6 = *(int *)((longlong)param_1 + 0x44);
    lVar9 = (longlong)*(int *)(param_2 + 8) * (longlong)*(int *)((longlong)param_1 + 0x34);
    if ((param_6 == 0 || param_5 == 0) ||
       (*(int *)(param_5 + 0x58) < *(int *)((longlong)param_1 + 0x34) * (int)param_1[6] + iVar6)) {
      lVar13 = 0;
    }
    else {
      lVar13 = param_6 + iVar6 + lVar9;
    }
    pvVar11 = (void *)(param_4 + iVar6 + lVar9);
    plVar10 = (longlong *)param_1[0xe];
    if (iVar5 < 3) {
      puVar16 = (undefined *)plVar10[1];
      FUN_140019cf2();
      if (DAT_14c951d88 == 0) {
        bVar17 = puVar16 != (undefined *)0x0;
        if (puVar16 != &DAT_14c951d80 && bVar17) {
          do {
            puVar16 = *(undefined **)(puVar16 + 0x30);
            bVar17 = puVar16 != (undefined *)0x0;
            if (puVar16 == &DAT_14c951d80) break;
          } while (puVar16 != (undefined *)0x0);
        }
        if (!bVar17) goto LAB_1468e3530;
LAB_1468e33c1:
        if (0 < iVar5) {
          plVar10 = (longlong *)param_1[0xe];
          goto LAB_1468e33cd;
        }
        local_b8 = '\0';
        FUN_1456bb002(*param_3);
        cVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x1b8))();
        plVar10 = (longlong *)param_1[0xe];
        if (cVar3 == '\0') {
          sVar14 = (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6];
          if (*(char *)((longlong)pvVar11 + sVar14) == '\0') {
            if ((*(byte *)((longlong)plVar10 + 0x39) & 2) == 0) {
              (**(code **)(*plVar10 + 0x160))(plVar10,pvVar11);
            }
            else {
              memset(pvVar11,0,sVar14);
            }
            *(undefined1 *)((longlong)pvVar11 + sVar14) = 1;
          }
        }
        else {
          cVar3 = (**(code **)(*plVar10 + 0x1b8))();
          plVar10 = (longlong *)param_1[0xe];
          if (cVar3 == '\0') {
            if (*(char *)((longlong)pvVar11 +
                         (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6])
                == '\0') goto LAB_1468e3950;
          }
          else {
            cVar3 = (**(code **)(*plVar10 + 0x1c8))();
            if (cVar3 == '\0') {
              plVar10 = (longlong *)param_1[0xe];
LAB_1468e3950:
              uVar7 = plVar10[7];
              if ((uVar7 >> 0x24 & 1) == 0) {
                (**(code **)(*plVar10 + 0x148))();
                plVar10 = (longlong *)param_1[0xe];
                uVar7 = plVar10[7];
              }
              if (((uint)uVar7 >> 9 & 1) == 0) {
                (**(code **)(*plVar10 + 0x160))(plVar10,pvVar11);
              }
              else {
                memset(pvVar11,0,
                       (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
              }
            }
          }
        }
        plVar10 = (longlong *)param_1[0xe];
        if (lVar13 == 0) {
          lVar9 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar10 + 0x1b8))(plVar10);
          plVar2 = (longlong *)param_1[0xe];
          if (cVar3 == '\0') {
            cVar3 = *(char *)(lVar13 + (longlong)*(int *)((longlong)plVar2 + 0x34) *
                                       (longlong)(int)plVar2[6]);
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,lVar13);
          }
          lVar9 = 0;
          if (cVar3 != '\0') {
            lVar9 = lVar13;
          }
        }
        (**(code **)(*plVar10 + 0xd0))(plVar10,param_3,pvVar11,lVar9);
        if (local_b8 != '\0') goto LAB_1468e391c;
        cVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x1b8))();
        plVar10 = (longlong *)param_1[0xe];
        goto LAB_1468e3a0e;
      }
      if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c951d88) != 0) goto LAB_1468e33c1;
LAB_1468e3530:
      puVar16 = *(undefined **)(param_1[0xe] + 8);
      FUN_144a810c6();
      if (DAT_14c952430 == 0) {
        bVar17 = puVar16 != (undefined *)0x0;
        if (puVar16 != &DAT_14c952428 && bVar17) {
          do {
            puVar16 = *(undefined **)(puVar16 + 0x30);
            bVar17 = puVar16 != (undefined *)0x0;
            if (puVar16 == &DAT_14c952428) break;
          } while (puVar16 != (undefined *)0x0);
        }
        bVar8 = 1;
        if (!bVar17) goto LAB_1468e3556;
      }
      else {
        bVar8 = 1;
        if ((*(ulonglong *)(puVar16 + 0x18) & DAT_14c952430) == 0) {
LAB_1468e3556:
          bVar8 = (*(byte *)(param_1[0xe] + 0x39) & 0x10) >> 4;
        }
      }
      if ((iVar5 == 2) || (bVar8 == 0)) goto LAB_1468e33c1;
      plVar10 = (longlong *)param_1[0xe];
      (**(code **)(*plVar10 + 0x218))(plVar10,&local_b8,pvVar11);
      local_c8 = CONCAT71(uStack_b7,local_b8);
      (**(code **)(**(longlong **)(*param_3 + 8) + 0x150))(*(longlong **)(*param_3 + 8),&local_c8);
      (**(code **)(*plVar10 + 0x218))(plVar10,&local_d0,pvVar11);
      local_e8 = local_c8;
      uStack_e0 = CONCAT44(uStack_e0._4_4_,1);
      FUN_1401306ba(plVar10,*(undefined8 *)(*param_3 + 8),pvVar11,local_d0);
    }
    else {
LAB_1468e33cd:
      cVar3 = (**(code **)(*plVar10 + 0x1b8))();
      plVar10 = (longlong *)param_1[0xe];
      if (cVar3 == '\0') {
        local_b8 = *(char *)((longlong)pvVar11 +
                            (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6]
                            );
      }
      else {
        local_b8 = (**(code **)(*plVar10 + 0x1c8))(plVar10,pvVar11);
      }
      FUN_1456bb002(*param_3);
      cVar3 = local_b8;
      cVar4 = (**(code **)(*(longlong *)param_1[0xe] + 0x1b8))();
      plVar10 = (longlong *)param_1[0xe];
      if (cVar3 == '\x01') {
        if (cVar4 == '\0') {
          sVar14 = (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6];
          if (*(char *)((longlong)pvVar11 + sVar14) == '\0') {
            if ((*(byte *)((longlong)plVar10 + 0x39) & 2) == 0) {
              (**(code **)(*plVar10 + 0x160))(plVar10,pvVar11);
            }
            else {
              memset(pvVar11,0,sVar14);
            }
            *(undefined1 *)((longlong)pvVar11 + sVar14) = 1;
          }
        }
        else {
          cVar3 = (**(code **)(*plVar10 + 0x1b8))();
          plVar10 = (longlong *)param_1[0xe];
          if (cVar3 == '\0') {
            if (*(char *)((longlong)pvVar11 +
                         (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6])
                == '\0') goto LAB_1468e3690;
          }
          else {
            cVar3 = (**(code **)(*plVar10 + 0x1c8))();
            if (cVar3 == '\0') {
              plVar10 = (longlong *)param_1[0xe];
LAB_1468e3690:
              uVar7 = plVar10[7];
              if ((uVar7 >> 0x24 & 1) == 0) {
                (**(code **)(*plVar10 + 0x148))();
                plVar10 = (longlong *)param_1[0xe];
                uVar7 = plVar10[7];
              }
              if (((uint)uVar7 >> 9 & 1) == 0) {
                (**(code **)(*plVar10 + 0x160))(plVar10,pvVar11);
              }
              else {
                memset(pvVar11,0,
                       (longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34));
              }
            }
          }
        }
        plVar10 = (longlong *)param_1[0xe];
        if (lVar13 == 0) {
          lVar9 = 0;
        }
        else {
          cVar3 = (**(code **)(*plVar10 + 0x1b8))(plVar10);
          plVar2 = (longlong *)param_1[0xe];
          if (cVar3 == '\0') {
            cVar3 = *(char *)(lVar13 + (longlong)*(int *)((longlong)plVar2 + 0x34) *
                                       (longlong)(int)plVar2[6]);
          }
          else {
            cVar3 = (**(code **)(*plVar2 + 0x1c8))(plVar2,lVar13);
          }
          lVar9 = 0;
          if (cVar3 != '\0') {
            lVar9 = lVar13;
          }
        }
        (**(code **)(*plVar10 + 0xd0))(plVar10,param_3,pvVar11,lVar9);
      }
      else {
LAB_1468e3a0e:
        if (cVar4 != '\0') goto LAB_1468e3a12;
        lVar9 = (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6];
        if (*(char *)((longlong)pvVar11 + lVar9) == '\x01') {
          if ((*(byte *)((longlong)plVar10 + 0x3c) & 0x10) == 0) {
            (**(code **)(*plVar10 + 0x148))(plVar10,pvVar11);
          }
          *(undefined1 *)((longlong)pvVar11 + lVar9) = 0;
        }
      }
    }
LAB_1468e391c:
    iVar6 = 3;
    goto LAB_1468e33ee;
  }
  cVar3 = (**(code **)(*param_1 + 0x1a8))(param_1);
  if (cVar3 != '\0') {
LAB_1468e33ec:
    iVar6 = 0;
    goto LAB_1468e33ee;
  }
  puVar12 = param_2;
  pcVar15 = &local_b8;
  for (lVar9 = 0xf; lVar9 != 0; lVar9 = lVar9 + -1) {
    *(undefined8 *)pcVar15 = *puVar12;
    puVar12 = puVar12 + 1;
    pcVar15 = pcVar15 + 8;
  }
  uVar7 = *(ulonglong *)((longlong)param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar7 == DAT_14c892bcc) {
    cVar3 = FUN_146828308(*param_3);
    if (cVar3 == '\0') {
      pvVar11 = (void *)(param_4 + *(int *)((longlong)param_1 + 0x44));
      cVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x1b8))();
      plVar10 = (longlong *)param_1[0xe];
      if (cVar3 == '\0') {
        lVar9 = (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6];
        iVar6 = 3;
        if (*(char *)((longlong)pvVar11 + lVar9) == '\x01') {
          if ((*(byte *)((longlong)plVar10 + 0x3c) & 0x10) == 0) {
            (**(code **)(*plVar10 + 0x148))(plVar10,pvVar11);
          }
          *(undefined1 *)((longlong)pvVar11 + lVar9) = 0;
        }
        goto LAB_1468e33ee;
      }
LAB_1468e3a12:
      (**(code **)(*plVar10 + 0x1d0))(plVar10,pvVar11);
      goto LAB_1468e391c;
    }
    FUN_140241d2e(&local_b8);
    uVar7 = local_ac;
    if (DAT_14c87ead8 == '\0') {
      FUN_140024d3a(&DAT_14c87eb00);
      DAT_14c87ead8 = '\x01';
    }
    if (uVar7 == DAT_14c892b4c) {
      plVar10 = *(longlong **)(*param_3 + 8);
      puVar1 = *(undefined1 **)plVar10[1];
      if ((undefined1 *)((undefined8 *)plVar10[1])[1] < puVar1 + 1) {
        (**(code **)(*plVar10 + 0x170))(plVar10,local_47,1);
      }
      else {
        local_47[0] = *puVar1;
        *(longlong *)plVar10[1] = *(longlong *)plVar10[1] + 1;
      }
    }
  }
  pvVar11 = (void *)(param_4 + *(int *)((longlong)param_1 + 0x44));
  cVar3 = (**(code **)(*(longlong *)param_1[0xe] + 0x1b8))();
  plVar10 = (longlong *)param_1[0xe];
  if (cVar3 == '\0') {
    sVar14 = (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6];
    if (*(char *)((longlong)pvVar11 + sVar14) == '\0') {
      if ((*(byte *)((longlong)plVar10 + 0x39) & 2) == 0) {
        (**(code **)(*plVar10 + 0x160))(plVar10,pvVar11);
      }
      else {
        memset(pvVar11,0,sVar14);
      }
      *(undefined1 *)((longlong)pvVar11 + sVar14) = 1;
    }
  }
  else {
    cVar3 = (**(code **)(*plVar10 + 0x1b8))();
    plVar10 = (longlong *)param_1[0xe];
    if (cVar3 == '\0') {
      if (*(char *)((longlong)pvVar11 +
                   (longlong)*(int *)((longlong)plVar10 + 0x34) * (longlong)(int)plVar10[6]) == '\0'
         ) goto LAB_1468e37ca;
    }
    else {
      cVar3 = (**(code **)(*plVar10 + 0x1c8))();
      if (cVar3 == '\0') {
        plVar10 = (longlong *)param_1[0xe];
LAB_1468e37ca:
        uVar7 = plVar10[7];
        if ((uVar7 >> 0x24 & 1) == 0) {
          (**(code **)(*plVar10 + 0x148))();
          plVar10 = (longlong *)param_1[0xe];
          uVar7 = plVar10[7];
        }
        if (((uint)uVar7 >> 9 & 1) == 0) {
          (**(code **)(*plVar10 + 0x160))(plVar10,pvVar11);
        }
        else {
          memset(pvVar11,0,(longlong)(int)plVar10[6] * (longlong)*(int *)((longlong)plVar10 + 0x34))
          ;
        }
      }
    }
  }
  local_e8 = 0;
  uStack_e0 = 0;
  iVar6 = (**(code **)(*(longlong *)param_1[0xe] + 0xc0))
                    ((longlong *)param_1[0xe],&local_b8,param_3,pvVar11);
  if (2 < iVar6 - 1U) {
    if (iVar6 == 0) {
      (**(code **)(*(longlong *)param_1[0xe] + 0x168))((longlong *)param_1[0xe],&local_c0);
      iVar6 = 2;
      if (local_ac == local_c0) {
        (**(code **)(*(longlong *)param_1[0xe] + 0xd0))((longlong *)param_1[0xe],param_3,pvVar11,0);
        iVar6 = 1;
      }
    }
    else {
      iVar6 = 2;
    }
  }
LAB_1468e33ee:
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e3ab2 FUN_1468e3ab2 body=98 status=ok
// SIG undefined FUN_1468e3ab2(void)

undefined8 FUN_1468e3ab2(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  
  cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (cVar2 == '\0') {
    cVar2 = *(char *)(param_2 +
                     (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2);
  }
  if ((param_2 != 0) && (cVar2 != '\0')) {
    uVar3 = FUN_1449b1a2a(*(undefined8 *)(param_1 + 0x70),param_2);
    return uVar3;
  }
  return 0;
}



// FUNCTION 1468e3b2e FUN_1468e3b2e body=331 status=ok
// SIG undefined FUN_1468e3b2e(void)

ulonglong FUN_1468e3b2e(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1468c83be();
  uVar6 = 0;
  if (cVar1 == '\0') goto LAB_1468e3c54;
  uVar4 = (ulonglong)(param_2 + 1);
  if (*(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
              (ulonglong)(param_2 & 0x1fff) * 0xc) < 1) {
    uVar4 = uVar6;
  }
  local_38 = uVar6;
  if (param_1 != 0) {
    local_38 = *(ulonglong *)(param_1 + 0x20);
  }
  local_48 = *(undefined8 *)
              (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)(uint)uVar4 >> 0xd) * 8) +
              (ulonglong)((uint)uVar4 & 0x1fff) * 0xc);
  uVar6 = 0;
  local_40 = param_1;
  plVar2 = (longlong *)FUN_14689ac8c();
  if (plVar2 == (longlong *)0x0) goto LAB_1468e3c54;
  lVar5 = plVar2[1];
  lVar3 = FUN_1446ddbd2();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar7) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar7 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar7) goto LAB_1468e3c25;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1468e3c25:
    cVar1 = (**(code **)(*plVar2 + 0x198))(plVar2,uVar4,param_3);
    if (cVar1 != '\0') {
      *(longlong **)(param_1 + 0x70) = plVar2;
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      goto LAB_1468e3c54;
    }
  }
  (**(code **)(*plVar2 + 8))(plVar2,1);
  uVar6 = 0;
LAB_1468e3c54:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1468e3c7a FUN_1468e3c7a body=153 status=ok
// SIG undefined FUN_1468e3c7a(void)

void FUN_1468e3c7a(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  plVar1 = (longlong *)param_1[0xe];
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2);
  lVar2 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar2 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e3d14 FUN_1468e3d14 body=168 status=ok
// SIG undefined FUN_1468e3d14(void)

void FUN_1468e3d14(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
           (ulonglong)(param_2 & 0x1fff) * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_48);
  if (lVar1 == local_48) {
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                    (ulonglong)(param_2 & 0x1fff) * 0xc)) {
      iVar2 = param_2 + 1;
    }
    (**(code **)(*(longlong *)param_1[0xe] + 0x1a8))((longlong *)param_1[0xe],iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e3dbe FUN_1468e3dbe body=310 status=ok
// SIG undefined FUN_1468e3dbe(void)

char FUN_1468e3dbe(longlong param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined1 *)(*param_2 + 0x15 + (longlong)((int)param_2[1] + -1) * 0x18) = 1;
  local_48 = *param_4;
  local_40 = param_4[1];
  cVar3 = FUN_1468c826c(param_1);
  if (cVar3 == '\x03') {
    lVar5 = *param_3;
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar6 = *(longlong **)(param_1 + 0x70);
    if (cVar3 == '\0') {
      cVar3 = '\x03';
      if (*(char *)(lVar5 + (longlong)*(int *)((longlong)plVar6 + 0x34) * (longlong)(int)plVar6[6])
          != '\x01') goto LAB_1468e3ec3;
    }
    else {
      cVar4 = (**(code **)(*plVar6 + 0x1c8))(plVar6,lVar5);
      cVar3 = '\x03';
      if (cVar4 == '\0') goto LAB_1468e3ec3;
      plVar6 = *(longlong **)(param_1 + 0x70);
    }
    iVar1 = (int)param_2[1];
    lVar5 = (longlong)iVar1;
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_146895f4a(param_2,iVar1);
    }
    lVar2 = *param_2;
    *(longlong **)(lVar2 + lVar5 * 0x18) = plVar6;
    *(undefined8 *)(lVar2 + 8 + lVar5 * 0x18) = 0;
    *(undefined4 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0xffffffff;
    *(undefined2 *)(lVar2 + 0x14 + lVar5 * 0x18) = 0;
    local_58 = *param_4;
    local_50 = param_4[1];
    cVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xa8))
                      (*(longlong **)(param_1 + 0x70),param_2,param_3);
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
LAB_1468e3ec3:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e3ef6 FUN_1468e3ef6 body=88 status=ok
// SIG undefined FUN_1468e3ef6(void)

longlong FUN_1468e3ef6(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  
  if ((longlong *)*param_3 == *(longlong **)(param_1 + 0x70)) {
    cVar2 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1b8))();
    plVar1 = *(longlong **)(param_1 + 0x70);
    if (cVar2 == '\0') {
      cVar2 = *(char *)(param_2 +
                       (longlong)*(int *)((longlong)plVar1 + 0x34) * (longlong)(int)plVar1[6]);
    }
    else {
      cVar2 = (**(code **)(*plVar1 + 0x1c8))(plVar1,param_2);
    }
    if (cVar2 != '\0') {
      return param_2;
    }
  }
  return 0;
}



// FUNCTION 1468e3f4e FUN_1468e3f4e body=411 status=ok
// SIG undefined FUN_1468e3f4e(void)

void FUN_1468e3f4e(longlong param_1,longlong *param_2)

{
  ulonglong *puVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a6a0c();
  local_28 = *(ulonglong *)(param_1 + 0x38) & 0xfff7ffefbffffdff;
  puVar2 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar2 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x30),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = *puVar2;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (ulonglong *)*puVar3 + 1;
  if ((ulonglong *)puVar3[1] < puVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_28,8);
    }
    else {
      FUN_146821949(param_2,&local_28);
    }
  }
  else {
    local_28 = *(ulonglong *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(ulonglong *)(param_1 + 0x38) =
         local_28 & 0xfff7ffefbffffdff | *(ulonglong *)(param_1 + 0x38) & 0x8001040000200;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1 + 0x48);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x44) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e31250);
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    iVar5 = FUN_1448332aa(param_2,&DAT_149e31250);
    if (iVar5 < 0x15) goto LAB_1468e40ac;
  }
  puVar4 = *(undefined1 **)param_2[1];
  if ((undefined1 *)((undefined8 *)param_2[1])[1] < puVar4 + 1) {
    (**(code **)(*param_2 + 0x170))(param_2,(undefined1 *)(param_1 + 0x42),1);
  }
  else {
    *(undefined1 *)(param_1 + 0x42) = *puVar4;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 1;
  }
LAB_1468e40ac:
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e40f2 FUN_1468e40f2 body=109 status=ok
// SIG undefined FUN_1468e40f2(void)

void FUN_1468e40f2(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  if (*(longlong *)(param_1 + 0x78) != 0) {
    (**(code **)(*param_2 + 0x198))(param_2);
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001468e4154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x198))(param_2);
    return;
  }
  return;
}



// FUNCTION 1468e4160 FUN_1468e4160 body=66 status=ok
// SIG undefined FUN_1468e4160(void)

void FUN_1468e4160(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001468e419f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,param_1,0);
  return;
}



// FUNCTION 1468e41aa FUN_1468e41aa body=46 status=ok
// SIG undefined FUN_1468e41aa(void)

void FUN_1468e41aa(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
                    /* WARNING: Could not recover jumptable at 0x0001468e41d5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1468e41fc FUN_1468e41fc body=46 status=ok
// SIG undefined FUN_1468e41fc(void)

void FUN_1468e41fc(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
                    /* WARNING: Could not recover jumptable at 0x0001468e4227. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1468e4232 FUN_1468e4232 body=182 status=ok
// SIG undefined FUN_1468e4232(void)

void FUN_1468e4232(longlong param_1,uint param_2,char param_3)

{
  byte bVar1;
  char cVar2;
  undefined1 auStack_38 [44];
  char local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (param_3 == '\0') {
    *(ulonglong *)(param_1 + 0x38) =
         *(ulonglong *)(param_1 + 0x38) & 0xffffffefbffffdff | 0x1000000000;
    local_c[0] = '\x01';
    local_c[1] = '\0';
    local_c[2] = '\0';
    local_c[3] = '\0';
    *(uint *)(param_1 + 0x34) = param_2;
    *(char *)(param_1 + 0x70) = (char)param_2;
    if (param_2 == 0) {
      cVar2 = *(char *)(param_1 + 0x72);
      bVar1 = 0;
    }
    else {
      bVar1 = 0;
      do {
        cVar2 = local_c[bVar1];
        if (cVar2 != '\0') {
          *(char *)(param_1 + 0x72) = cVar2;
          goto LAB_1468e42c0;
        }
        bVar1 = bVar1 + 1;
      } while (bVar1 < param_2);
      *(undefined1 *)(param_1 + 0x72) = 0;
      cVar2 = '\0';
    }
LAB_1468e42c0:
    *(byte *)(param_1 + 0x71) = bVar1;
  }
  else {
    *(ulonglong *)(param_1 + 0x38) = *(ulonglong *)(param_1 + 0x38) | 0x1040000200;
    *(uint *)(param_1 + 0x34) = param_2;
    *(char *)(param_1 + 0x70) = (char)param_2;
    *(undefined2 *)(param_1 + 0x71) = 0x100;
    cVar2 = -1;
  }
  *(char *)(param_1 + 0x73) = cVar2;
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e42ea FUN_1468e42ea body=300 status=ok
// SIG undefined FUN_1468e42ea(void)

void FUN_1468e42ea(longlong param_1,longlong *param_2)

{
  undefined1 *puVar1;
  char *pcVar2;
  ulonglong *puVar3;
  undefined1 auStack_48 [46];
  char local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1468e3f4e();
  local_19 = *(undefined1 *)(param_1 + 0x34);
  puVar3 = (ulonglong *)param_2[1];
  puVar1 = (undefined1 *)*puVar3 + 1;
  if ((undefined1 *)puVar3[1] < puVar1) {
    (**(code **)(*param_2 + 0x170))(param_2,&local_19,1);
  }
  else {
    local_19 = *(undefined1 *)*puVar3;
    *puVar3 = (ulonglong)puVar1;
  }
  local_1a = '\0';
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
      local_1a = false;
      if (((*(byte *)(param_2 + 5) & 4) != 0) && ((*(uint *)(param_1 + 8) & 0x40000000) == 0)) {
        local_1a = *(char *)(param_1 + 0x73) == -1;
      }
    }
    else {
      local_1a = false;
    }
    puVar3 = (ulonglong *)param_2[1];
    if (puVar3[1] < *puVar3 + 1) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1a,1);
    }
    else {
      *puVar3 = *puVar3 + 1;
    }
  }
  else {
    puVar3 = (ulonglong *)param_2[1];
    pcVar2 = (char *)*puVar3 + 1;
    if ((char *)puVar3[1] < pcVar2) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1a,1);
    }
    else {
      local_1a = *(char *)*puVar3;
      *puVar3 = (ulonglong)pcVar2;
    }
    if ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
      FUN_1468e4232(param_1,local_19,local_1a != '\0');
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e441e FUN_1468e441e body=72 status=ok
// SIG undefined FUN_1468e441e(void)

void FUN_1468e441e(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  if (*(longlong *)(param_1 + 0x70) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001468e445b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_2 + 0x198))(param_2);
    return;
  }
  return;
}



// FUNCTION 1468e448a FUN_1468e448a body=150 status=ok
// SIG undefined FUN_1468e448a(void)

void FUN_1468e448a(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1468e3f4e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  if ((*(longlong *)(param_1 + 0x78) == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    lVar1 = FUN_146890bba(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_144a797b2();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         ((*(uint *)(lVar1 + 0xd4) & 0x80000080) == 0x80)) {
        FUN_144a79778(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468e4520 FUN_1468e4520 body=66 status=ok
// SIG undefined FUN_1468e4520(void)

void FUN_1468e4520(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001468e455f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,param_1,0);
  return;
}



// FUNCTION 1468e456a FUN_1468e456a body=46 status=ok
// SIG undefined FUN_1468e456a(void)

void FUN_1468e456a(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
                    /* WARNING: Could not recover jumptable at 0x0001468e4595. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1468e45c4 FUN_1468e45c4 body=134 status=ok
// SIG undefined FUN_1468e45c4(void)

void FUN_1468e45c4(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1468e3f4e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  if ((*(longlong *)(param_1 + 0x70) == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    lVar1 = FUN_146890bba(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_144a797b2();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         ((*(uint *)(lVar1 + 0xd4) & 0x80000080) == 0x80)) {
        FUN_144a79778(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468e4674 FUN_1468e4674 body=62 status=ok
// SIG undefined FUN_1468e4674(void)

void FUN_1468e4674(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x0001468e46af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  return;
}



// FUNCTION 1468e46b2 FUN_1468e46b2 body=66 status=ok
// SIG undefined FUN_1468e46b2(void)

void FUN_1468e46b2(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001468e46f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,param_1,0);
  return;
}



// FUNCTION 1468e46fc FUN_1468e46fc body=46 status=ok
// SIG undefined FUN_1468e46fc(void)

void FUN_1468e46fc(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
                    /* WARNING: Could not recover jumptable at 0x0001468e4727. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x150))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1468e4749 FUN_1468e4749 body=35 status=ok
// SIG undefined FUN_1468e4749(void)

void FUN_1468e4749(void)

{
  if (DAT_14c952740 == 0) {
    DAT_14c952740 = FUN_145ce4e70();
  }
  return;
}



// FUNCTION 1468e4774 FUN_1468e4774 body=46 status=ok
// SIG undefined FUN_1468e4774(void)

void FUN_1468e4774(longlong param_1,longlong *param_2)

{
  FUN_1468e3f4e();
                    /* WARNING: Could not recover jumptable at 0x0001468e479f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  return;
}



// FUNCTION 1468e47c6 FUN_1468e47c6 body=150 status=ok
// SIG undefined FUN_1468e47c6(void)

void FUN_1468e47c6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1468e3f4e();
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  if ((*(longlong *)(param_1 + 0x78) == 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    lVar1 = FUN_146890bba(param_1);
    if (lVar1 != 0) {
      lVar2 = FUN_144a797b2();
      if (((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
            (longlong)*(int *)(lVar2 + 0x38) * 8) == lVar2 + 0x30)) &&
         ((*(uint *)(lVar1 + 0xd4) & 0x80000080) == 0x80)) {
        FUN_144a79778(lVar1);
        return;
      }
    }
  }
  return;
}



// FUNCTION 1468e485c FUN_1468e485c body=66 status=ok
// SIG undefined FUN_1468e485c(void)

void FUN_1468e485c(longlong param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x78,param_1,0);
                    /* WARNING: Could not recover jumptable at 0x0001468e489b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x70,param_1,0);
  return;
}



// FUNCTION 1468e48a5 FUN_1468e48a5 body=35 status=ok
// SIG undefined FUN_1468e48a5(void)

void FUN_1468e48a5(void)

{
  if (DAT_14c952788 == 0) {
    DAT_14c952788 = FUN_145ce5000();
  }
  return;
}



// FUNCTION 1468e48d6 FUN_1468e48d6 body=225 status=ok
// SIG undefined FUN_1468e48d6(void)

void FUN_1468e48d6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  FUN_1468e3f4e();
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14c9527b8) {
    FUN_144b3d300(&DAT_14c9527b8);
    if (DAT_14c9527b8 == -1) {
      DAT_14c9527b0 = FUN_145708010();
      _Init_thread_footer(&DAT_14c9527b8);
    }
  }
  if ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0) {
    lVar2 = (**(code **)(*param_2 + 0x20))(param_2);
    lVar1 = DAT_14c9527b0;
    if (((lVar2 != 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) &&
       (*(longlong *)(param_1 + 0x70) == 0)) {
      if ((DAT_14c9527b0 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c(DAT_14c9527b0);
      }
      *(longlong *)(param_1 + 0x70) = lVar1;
    }
  }
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x70);
  if (*(longlong **)(param_1 + 0x70) != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468e4932. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x368))();
    return;
  }
  return;
}



// FUNCTION 1468e4a0c FUN_1468e4a0c body=115 status=ok
// SIG undefined FUN_1468e4a0c(void)

void FUN_1468e4a0c(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  
  FUN_1468e3f4e();
  puVar1 = *(undefined4 **)param_2[1];
  if ((undefined4 *)((undefined8 *)param_2[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,(undefined4 *)(param_1 + 0x70),4);
    }
    else {
      FUN_14572512c(param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = *puVar1;
    *(longlong *)param_2[1] = *(longlong *)param_2[1] + 4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001468e4a72. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0x78);
  return;
}



// FUNCTION 1468e4aa3 FUN_1468e4aa3 body=231 status=ok
// SIG undefined FUN_1468e4aa3(void)

undefined8
FUN_1468e4aa3(undefined8 *param_1,undefined4 param_2,int param_3,undefined8 param_4,
             undefined4 param_5)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  longlong local_48;
  uint local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  plVar1 = (longlong *)*param_1;
  FUN_1468e4b8c(&local_48,param_1,param_2);
  if (-1 < (int)local_40) {
    do {
      lVar2 = *(longlong *)(local_48 + 8);
      if (*(int *)(lVar2 + 0x28) <= (int)local_40) break;
      lVar4 = lVar2 + 0x10;
      if (*(longlong *)(lVar2 + 0x20) != 0) {
        lVar4 = *(longlong *)(lVar2 + 0x20);
      }
      bVar6 = param_3 == 0;
      param_3 = param_3 + -1;
      uVar5 = 0;
      if (((*(uint *)(lVar4 + (ulonglong)(local_40 >> 5) * 4) >> (local_40 & 0x1f) & 1) == 0) ||
         (bVar6)) goto LAB_1468e4b63;
      cVar3 = (**(code **)(*plVar1 + 200))
                        (plVar1,(longlong)(int)local_40 * (longlong)*(int *)(param_1 + 4) +
                                *(longlong *)param_1[1],param_4,param_5);
      if (cVar3 != '\0') {
        uVar5 = 1;
        goto LAB_1468e4b63;
      }
      FUN_14000a0a0(&local_48);
    } while (-1 < (int)local_40);
  }
  uVar5 = 0;
LAB_1468e4b63:
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4b8c FUN_1468e4b8c body=74 status=ok
// SIG undefined FUN_1468e4b8c(void)

longlong * FUN_1468e4b8c(longlong *param_1,longlong param_2,int param_3)

{
  int iVar1;
  
  *param_1 = param_2;
  param_1[1] = -1;
  if (*(int *)(*(longlong *)(param_2 + 8) + 0x34) == 0) {
    *(int *)(param_1 + 1) = param_3;
    *(int *)((longlong)param_1 + 0xc) = param_3;
  }
  else {
    iVar1 = *(int *)(*(longlong *)(param_2 + 8) + 8);
    do {
      FUN_14000a0a0(param_1);
      if (param_3 <= *(int *)((longlong)param_1 + 0xc)) {
        return param_1;
      }
    } while ((int)param_1[1] < iVar1);
  }
  return param_1;
}



// FUNCTION 1468e4bd6 FUN_1468e4bd6 body=278 status=ok
// SIG undefined FUN_1468e4bd6(void)

bool FUN_1468e4bd6(undefined8 *param_1,undefined4 param_2,longlong param_3,undefined4 param_4,
                  int param_5,undefined8 param_6,undefined4 param_7)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  byte bVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined1 local_68 [8];
  int local_60;
  undefined1 local_58 [8];
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar2 = (longlong *)*param_1;
  FUN_1468e4b8c(local_58,param_1,param_2);
  local_70 = param_3;
  FUN_1468e4b8c(local_68,param_3,param_4);
  iVar7 = 0;
  iVar6 = 0;
  do {
    lVar5 = (longlong)local_60;
    iVar1 = *(int *)(local_70 + 0x20);
    lVar3 = **(longlong **)(local_70 + 8);
    bVar4 = (**(code **)(*plVar2 + 200))
                      (plVar2,(longlong)*(int *)(param_1 + 4) * (longlong)local_50 +
                              *(longlong *)param_1[1],param_6,param_7);
    iVar7 = iVar7 + (uint)bVar4;
    bVar4 = (**(code **)(*plVar2 + 200))(plVar2,iVar1 * lVar5 + lVar3,param_6,param_7);
    iVar6 = iVar6 + (uint)bVar4;
    FUN_14000a0a0(local_58);
    FUN_14000a0a0(local_68);
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return iVar7 == iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4cee FUN_1468e4cee body=180 status=ok
// SIG undefined FUN_1468e4cee(void)

undefined8 * FUN_1468e4cee(ulonglong *param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [40];
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  puVar1 = (undefined8 *)FUN_14001cc68(0x90,0);
  FUN_144a7e162();
  puVar1[1] = &DAT_14c9528b0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x1c) = 0;
  *(undefined8 *)((longlong)puVar1 + 0x24) = 0;
  puVar1[0xd] = 0;
  *puVar1 = &PTR_LAB_149e70450;
  local_30 = *param_1;
  if ((((local_30 & 1) != 0) && ((local_30 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468e4da4(puVar1,&local_30,param_2,param_3);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4da4 FUN_1468e4da4 body=134 status=ok
// SIG undefined FUN_1468e4da4(void)

undefined8 *
FUN_1468e4da4(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1468e4e2c(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e70450;
  param_1[0xe] = 0;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4e2c FUN_1468e4e2c body=135 status=ok
// SIG undefined FUN_1468e4e2c(void)

undefined8 *
FUN_1468e4e2c(undefined8 *param_1,ulonglong *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 auStack_48 [32];
  ulonglong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *param_2;
  if ((((local_28 & 1) != 0) && ((local_28 & 0xfffffffffffffffe) != 0)) && (DAT_14c950c29 == '\x01')
     ) {
    FUN_1456cec3c();
  }
  FUN_1403a630a(param_1,&local_28,param_3,param_4);
  *param_1 = &PTR_LAB_149e9fc50;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0x50;
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4eb4 FUN_1468e4eb4 body=125 status=ok
// SIG undefined FUN_1468e4eb4(void)

void FUN_1468e4eb4(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined4 local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0xfff00007;
  local_20 = param_1;
  uVar4 = FUN_145a1bb4a(*(undefined8 *)(param_2 + 0x70),&local_20,0,0xffffffff);
  *(undefined8 *)(param_1 + 0x70) = uVar4;
  uVar1 = *(undefined4 *)(param_2 + 0x7c);
  uVar2 = *(undefined4 *)(param_2 + 0x80);
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  *(undefined4 *)(param_1 + 0x7c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = uVar2;
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  FUN_145a1bbc6(param_1,param_2);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4f3a FUN_1468e4f3a body=53 status=ok
// SIG undefined FUN_1468e4f3a(void)

void FUN_1468e4f3a(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  
  FUN_14689aaf4();
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001468e4f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x20))(plVar1,param_2);
    return;
  }
  return;
}



// FUNCTION 1468e4f70 FUN_1468e4f70 body=84 status=ok
// SIG undefined FUN_1468e4f70(void)

void FUN_1468e4f70(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1403a658e();
  local_20 = param_1;
  FUN_140b8d077(param_2,param_1 + 0x70);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e4fc6 FUN_1468e4fc6 body=224 status=ok
// SIG undefined FUN_1468e4fc6(void)

undefined8 FUN_1468e4fc6(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined2 *puVar1;
  undefined1 auStack_68 [40];
  undefined2 *local_40;
  int local_38;
  longlong local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
            (*(longlong **)(param_1 + 0x70),&local_40,0,0);
  puVar1 = local_40;
  if (local_38 == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  FUN_140002266(&local_30,&DAT_149e0625e,puVar1);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = (undefined4)local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_28._4_4_;
    local_28 = 0;
  }
  if (local_40 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"TSET");
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e50a8 FUN_1468e50a8 body=751 status=ok
// SIG undefined FUN_1468e50a8(void)

undefined8
FUN_1468e50a8(undefined8 param_1,undefined2 **param_2,undefined8 *param_3,undefined8 *param_4)

{
  void *_Src;
  bool bVar1;
  undefined2 *puVar2;
  ushort uVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  ushort uVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  int local_68;
  undefined4 local_64;
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  uint local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_2 == (undefined2 **)0x0) goto LAB_1468e5263;
  local_50 = (undefined2 *)0x0;
  local_48 = *(uint *)(param_4 + 1);
  lVar11 = (longlong)(int)local_48;
  _Src = (void *)*param_4;
  if (lVar11 == 0) {
    local_44 = 0;
LAB_1468e51e4:
    if (1 < *(uint *)(param_3 + 1)) {
      bVar1 = false;
LAB_1468e52ae:
      FUN_140056680(&local_70);
      puVar2 = &DAT_149dfb77a;
      if (local_68 != 0) {
        puVar2 = local_70;
      }
      lVar11 = 0;
      while( true ) {
        uVar3 = *(ushort *)((longlong)puVar2 + lVar11);
        uVar9 = (uint)uVar3;
        uVar7 = *(ushort *)((longlong)&DAT_149e06342 + lVar11);
        uVar6 = (uint)uVar7;
        if (uVar3 != uVar7) {
          if ((uVar7 | uVar3) < 0x80) {
            uVar9 = (uint)(byte)(&DAT_149e05da0)[uVar3];
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar7];
            if ((&DAT_149e05da0)[uVar3] == (&DAT_149e05da0)[uVar7]) goto LAB_1468e530a;
          }
          iVar10 = uVar9 - uVar6;
          goto LAB_1468e5336;
        }
        if (uVar3 == 0) break;
LAB_1468e530a:
        lVar11 = lVar11 + 2;
      }
      iVar10 = 0;
LAB_1468e5336:
      bVar12 = iVar10 == 0;
      if (local_70 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (bVar1) goto LAB_1468e5356;
      if (iVar10 != 0) goto LAB_1468e51f0;
      goto LAB_1468e5369;
    }
  }
  else {
    FUN_1446dd670(&local_50,local_48,0);
    memcpy(local_50,_Src,lVar11 * 2);
    if (local_48 < 2) goto LAB_1468e51e4;
    FUN_140056680(&local_60);
    puVar2 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar2 = local_60;
    }
    lVar11 = 0;
    while( true ) {
      uVar3 = *(ushort *)((longlong)puVar2 + lVar11);
      uVar4 = (ulonglong)uVar3;
      uVar7 = *(ushort *)((longlong)&DAT_149e06342 + lVar11);
      if (uVar3 != uVar7) break;
      if (uVar3 == 0) goto LAB_1468e5353;
LAB_1468e518a:
      lVar11 = lVar11 + 2;
    }
    if ((uVar7 | uVar3) < 0x80) {
      uVar3 = (ushort)(byte)(&DAT_149e05da0)[uVar4];
      uVar8 = (ulonglong)uVar7;
      uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
      if ((&DAT_149e05da0)[uVar4] == (&DAT_149e05da0)[uVar8]) goto LAB_1468e518a;
    }
    if (uVar3 != uVar7) {
      if (1 < *(uint *)(param_3 + 1) && local_48 < 2) {
        bVar1 = true;
        goto LAB_1468e52ae;
      }
      bVar12 = false;
      goto LAB_1468e5356;
    }
LAB_1468e5353:
    bVar12 = true;
LAB_1468e5356:
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (bVar12) {
LAB_1468e5369:
      FUN_1400020e8(&local_50,&DAT_149e001d8,1);
    }
  }
LAB_1468e51f0:
  puVar2 = &DAT_149dfb77a;
  puVar5 = &DAT_149dfb77a;
  if (local_48 != 0) {
    puVar5 = local_50;
  }
  if (*(int *)(param_3 + 1) != 0) {
    puVar2 = (undefined2 *)*param_3;
  }
  FUN_140002266(&local_70,L"<%s%s>",puVar2,puVar5);
  if (&local_70 == param_2) {
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    *param_2 = local_70;
    local_70 = (undefined2 *)0x0;
    *(int *)(param_2 + 1) = local_68;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_64;
  }
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1468e5263:
  FUN_140056680(param_1,L"TSet");
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1468e5398 FUN_1468e5398 body=181 status=ok
// SIG undefined FUN_1468e5398(void)

undefined8 FUN_1468e5398(longlong param_1,undefined8 param_2,longlong param_3,uint param_4)

{
  longlong lVar1;
  undefined1 auStack_78 [32];
  longlong local_58;
  undefined8 local_50;
  longlong local_48 [5];
  
  local_48[4] = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  if (param_3 != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x70))
              (*(longlong **)(param_1 + 0x70),&local_58,local_48,param_4 & 0xfffffffd);
    local_48[2] = local_58;
    local_48[3] = local_50;
  }
  lVar1 = local_48[2];
  FUN_1468e50a8(param_2,param_3,local_48 + 2,local_48);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (lVar1 != 0) {
    FUN_1400020a8(lVar1);
  }
  if ((local_48[4] ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e544e FUN_1468e544e body=27 status=ok
// SIG undefined FUN_1468e544e(void)

undefined8 FUN_1468e544e(longlong param_1,undefined8 param_2)

{
  (**(code **)(**(longlong **)(param_1 + 0x70) + 0x78))();
  return param_2;
}



// FUNCTION 1468e546a FUN_1468e546a body=1144 status=ok
// SIG undefined FUN_1468e546a(void)

void FUN_1468e546a(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  longlong *param_5,undefined8 param_6,uint param_7,undefined8 param_8)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined1 *puVar10;
  uint uVar11;
  undefined8 *_Src;
  bool bVar12;
  undefined1 auStack_d8 [32];
  undefined1 *local_b8;
  undefined8 local_b0;
  uint local_a8;
  undefined8 local_a0;
  uint local_8c;
  undefined8 local_88;
  undefined1 *local_80;
  undefined8 *local_78;
  longlong local_70;
  longlong *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_88 = param_2;
  if (param_4 == 1) {
    cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar3 != '\0') {
      puVar5 = (undefined8 *)FUN_1468c8356(param_1);
      cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
      if (cVar3 == '\0') {
        _Src = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
        param_3 = puVar5;
        if (_Src != puVar5) {
          if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
            (**(code **)(*param_1 + 0x100))(param_1,puVar5,_Src,(int)param_1[6]);
          }
          else {
            memcpy(puVar5,_Src,
                   (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
          }
        }
      }
      else {
        (**(code **)(*param_1 + 0xa0))(param_1,param_3,puVar5);
        param_3 = puVar5;
      }
      goto LAB_1468e54ef;
    }
    param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
  }
  puVar5 = (undefined8 *)0x0;
LAB_1468e54ef:
  if (*(int *)(param_3 + 1) == *(int *)((longlong)param_3 + 0x34)) {
    FUN_1400020e8(local_88,&DAT_149e6ee3c,2);
  }
  else {
    local_78 = puVar5;
    if (param_1[0xe] == 0) {
      puVar7 = (undefined1 *)0x0;
    }
    else {
      puVar8 = *(undefined **)(param_1[0xe] + 8);
      FUN_1446dcc8c();
      if (DAT_14c952a10 == 0) {
        bVar12 = puVar8 != (undefined *)0x0;
        if (puVar8 != &DAT_14c952a08 && bVar12) {
          do {
            puVar8 = *(undefined **)(puVar8 + 0x30);
            bVar12 = puVar8 != (undefined *)0x0;
            if (puVar8 == &DAT_14c952a08) break;
          } while (puVar8 != (undefined *)0x0);
        }
      }
      else {
        bVar12 = (*(ulonglong *)(puVar8 + 0x18) & DAT_14c952a10) != 0;
      }
      puVar7 = (undefined1 *)0x0;
      if (((param_7 & 0x40) == 0) && (bVar12)) {
        puVar7 = (undefined1 *)FUN_14001cc68((longlong)(int)param_1[0x10]);
        plVar1 = (longlong *)param_1[0xe];
        if ((*(byte *)((longlong)plVar1 + 0x39) & 2) == 0) {
          (**(code **)(*plVar1 + 0x160))(plVar1,puVar7);
        }
        else {
          memset(puVar7,0,(longlong)(int)plVar1[6] * (longlong)*(int *)((longlong)plVar1 + 0x34));
        }
      }
    }
    uVar2 = local_88;
    local_70 = param_1[0xe];
    local_68 = param_5;
    local_50 = (int)param_1[0x11];
    local_60 = (undefined4)param_1[0xf];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0x7c);
    uStack_58 = (undefined4)param_1[0x10];
    uStack_54 = *(undefined4 *)((longlong)param_1 + 0x84);
    puVar10 = (undefined1 *)*param_3;
    iVar9 = *(int *)(param_3 + 1) - *(int *)((longlong)param_3 + 0x34);
    local_80 = puVar7;
    if ((param_7 >> 0x19 & 1) == 0) {
      if (iVar9 != 0) {
        local_8c = param_7 | 1;
        uVar11 = 0;
        puVar7 = &DAT_00000001;
        do {
          if ((int)uVar11 < *(int *)(param_3 + 5)) {
            puVar5 = (undefined8 *)param_3[4];
            if ((undefined8 *)param_3[4] == (undefined8 *)0x0) {
              puVar5 = param_3 + 2;
            }
            if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1)
                != 0) {
              FUN_140002184(uVar2,(~(byte)puVar7 & 1) * '\x04' + '(');
              puVar7 = (undefined1 *)0x0;
              local_b8 = puVar10;
              if ((param_7 & 0x40) == 0) {
                local_b8 = puVar7;
              }
              local_a0 = param_8;
              local_a8 = local_8c;
              local_b0 = param_6;
              (**(code **)(*(longlong *)param_1[0xe] + 0xf0))
                        ((longlong *)param_1[0xe],uVar2,puVar10,0);
              iVar9 = iVar9 + -1;
            }
          }
          puVar10 = puVar10 + (int)param_1[0x10];
          uVar11 = uVar11 + 1;
        } while (iVar9 != 0);
      }
      FUN_1400020e8(local_88,&DAT_149e06144,1);
    }
    else if (iVar9 != 0) {
      local_8c = param_7 | 1;
      uVar11 = 0;
      bVar12 = true;
      do {
        if ((int)uVar11 < *(int *)(param_3 + 5)) {
          puVar5 = (undefined8 *)param_3[4];
          if ((undefined8 *)param_3[4] == (undefined8 *)0x0) {
            puVar5 = param_3 + 2;
          }
          if ((*(uint *)((longlong)puVar5 + (ulonglong)(uVar11 >> 5) * 4) >> (uVar11 & 0x1f) & 1) !=
              0) {
            if (!bVar12) {
              FUN_140002184(local_88,10);
            }
            puVar6 = local_80;
            if (param_5 != (longlong *)0x0 && puVar7 == (undefined1 *)0x0) {
              iVar4 = FUN_140260ba4(&local_70,puVar10,0);
              if (iVar4 < 0) {
                puVar6 = (undefined1 *)0x0;
              }
              else {
                puVar6 = (undefined1 *)((longlong)iVar4 * (longlong)local_50 + *local_68);
              }
            }
            local_b8 = puVar6;
            if ((param_7 & 0x40) != 0) {
              local_b8 = puVar10;
            }
            local_a0 = param_8;
            local_a8 = local_8c;
            local_b0 = param_6;
            bVar12 = false;
            (**(code **)(*(longlong *)param_1[0xe] + 0xf0))
                      ((longlong *)param_1[0xe],local_88,puVar10,0);
            iVar9 = iVar9 + -1;
          }
        }
        puVar10 = puVar10 + (int)param_1[0x10];
        uVar11 = uVar11 + 1;
      } while (iVar9 != 0);
    }
    puVar5 = local_78;
    puVar7 = local_80;
    if (local_80 != (undefined1 *)0x0) {
      plVar1 = (longlong *)param_1[0xe];
      if ((*(byte *)((longlong)plVar1 + 0x3c) & 0x10) == 0) {
        (**(code **)(*plVar1 + 0x148))(plVar1,local_80);
      }
      FUN_1400020a8(puVar7);
    }
  }
  FUN_146224210(param_1,puVar5);
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e58e4 FUN_1468e58e4 body=89 status=ok
// SIG undefined FUN_1468e58e4(void)

void FUN_1468e58e4(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [40];
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x70);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  uStack_1c = *(undefined4 *)(param_1 + 0x7c);
  uStack_18 = *(undefined4 *)(param_1 + 0x80);
  uStack_14 = *(undefined4 *)(param_1 + 0x84);
  local_10 = *(undefined4 *)(param_1 + 0x88);
  local_28 = param_2;
  FUN_1402608fa(&local_30,0);
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e593e FUN_1468e593e body=102 status=ok
// SIG undefined FUN_1468e593e(void)

void FUN_1468e593e(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = *(undefined8 *)(param_1 + 0x70);
  local_28 = *(undefined4 *)(param_1 + 0x78);
  uStack_24 = *(undefined4 *)(param_1 + 0x7c);
  uStack_20 = *(undefined4 *)(param_1 + 0x80);
  uStack_1c = *(undefined4 *)(param_1 + 0x84);
  local_18 = *(undefined4 *)(param_1 + 0x88);
  local_30 = param_2;
  FUN_1402608fa(&local_38,0);
  FUN_1468e59a6(param_2);
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e59a6 FUN_1468e59a6 body=61 status=ok
// SIG undefined FUN_1468e59a6(void)

void FUN_1468e59a6(longlong *param_1)

{
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468e59e8 FUN_1468e59e8 body=252 status=ok
// SIG undefined FUN_1468e59e8(void)

void FUN_1468e59e8(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  longlong *local_58;
  undefined8 local_50;
  longlong local_48;
  longlong *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(ushort *)(*(longlong *)(param_1 + 0x70) + 0x3b) & 0x1040) == 0) {
    local_58 = &local_48;
    local_38 = *(undefined4 *)(param_1 + 0x78);
    uStack_34 = *(undefined4 *)(param_1 + 0x7c);
    uStack_30 = *(undefined4 *)(param_1 + 0x80);
    uStack_2c = *(undefined4 *)(param_1 + 0x84);
    local_28 = *(int *)(param_1 + 0x88);
    local_50 = 0xffffffffffffffff;
    local_48 = *(longlong *)(param_1 + 0x70);
    local_40 = param_2;
    FUN_14000a0a0(&local_58);
    if (-1 < (int)(uint)local_50) {
      do {
        lVar1 = local_58[1];
        if (*(int *)(lVar1 + 0x28) <= (int)(uint)local_50) break;
        lVar3 = lVar1 + 0x10;
        if (*(longlong *)(lVar1 + 0x20) != 0) {
          lVar3 = *(longlong *)(lVar1 + 0x20);
        }
        if ((*(uint *)(lVar3 + (ulonglong)((uint)local_50 >> 5) * 4) >> ((uint)local_50 & 0x1f) & 1)
            == 0) break;
        plVar2 = *(longlong **)(param_1 + 0x70);
        if ((plVar2[7] & 0x1040000000U) == 0) {
          (**(code **)(*plVar2 + 0x158))
                    (plVar2,(longlong)(int)(uint)local_50 * (longlong)local_28 + *local_40);
        }
        FUN_14000a0a0(&local_58);
      } while (-1 < (int)(uint)local_50);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e5ae6 FUN_1468e5ae6 body=549 status=ok
// SIG undefined FUN_1468e5ae6(void)

void FUN_1468e5ae6(longlong param_1,longlong *param_2,longlong *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 ****ppppuVar1;
  undefined8 ***pppuVar2;
  int iVar3;
  undefined8 ***pppuVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined8 local_a8;
  undefined8 ***local_98;
  undefined8 local_90;
  undefined8 ***local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined8 ***local_60;
  longlong *local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((param_2 != (longlong *)0x0) &&
     (ppppuVar1 = *(undefined8 *****)(param_1 + 0x70),
     (*(uint *)((longlong)ppppuVar1 + 0x39) & 0x80000800) != 0)) {
    local_50 = *(undefined4 *)(param_1 + 0x78);
    uStack_4c = *(undefined4 *)(param_1 + 0x7c);
    uStack_48 = *(undefined4 *)(param_1 + 0x80);
    uStack_44 = *(undefined4 *)(param_1 + 0x84);
    local_40 = *(int *)(param_1 + 0x88);
    local_60 = ppppuVar1;
    local_58 = param_2;
    if (param_3 == (longlong *)0x0) {
      local_88 = &local_60;
      local_80 = (longlong *)0xffffffffffffffff;
      FUN_14000a0a0(&local_88);
      if (-1 < (int)(uint)local_80) {
        do {
          pppuVar2 = (undefined8 ***)local_88[1];
          if (*(int *)(pppuVar2 + 5) <= (int)(uint)local_80) break;
          pppuVar4 = pppuVar2 + 2;
          if ((undefined8 ***)pppuVar2[4] != (undefined8 ***)0x0) {
            pppuVar4 = (undefined8 ***)pppuVar2[4];
          }
          if ((*(uint *)((longlong)pppuVar4 + (ulonglong)((uint)local_80 >> 5) * 4) >>
               ((uint)local_80 & 0x1f) & 1) == 0) break;
          local_a8 = param_5;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x170))
                    (*(longlong **)(param_1 + 0x70),
                     (longlong)(int)(uint)local_80 * (longlong)local_40 + *local_58,0,param_4);
          FUN_14000a0a0(&local_88);
        } while (-1 < (int)(uint)local_80);
      }
    }
    else {
      local_78 = *(undefined4 *)(param_1 + 0x78);
      uStack_74 = *(undefined4 *)(param_1 + 0x7c);
      uStack_70 = *(undefined4 *)(param_1 + 0x80);
      uStack_6c = *(undefined4 *)(param_1 + 0x84);
      local_68 = *(int *)(param_1 + 0x88);
      local_98 = &local_60;
      local_90 = 0xffffffffffffffff;
      local_88 = ppppuVar1;
      local_80 = param_3;
      FUN_14000a0a0(&local_98);
      if (-1 < (int)(uint)local_90) {
        do {
          pppuVar2 = (undefined8 ***)local_98[1];
          if (*(int *)(pppuVar2 + 5) <= (int)(uint)local_90) break;
          pppuVar4 = pppuVar2 + 2;
          if ((undefined8 ***)pppuVar2[4] != (undefined8 ***)0x0) {
            pppuVar4 = (undefined8 ***)pppuVar2[4];
          }
          if ((*(uint *)((longlong)pppuVar4 + (ulonglong)((uint)local_90 >> 5) * 4) >>
               ((uint)local_90 & 0x1f) & 1) == 0) break;
          lVar6 = (longlong)(int)(uint)local_90 * (longlong)local_40 + *local_58;
          iVar3 = FUN_140260ba4(&local_88,lVar6,local_90._4_4_);
          if (iVar3 < 0) {
            lVar5 = 0;
          }
          else {
            lVar5 = (longlong)iVar3 * (longlong)local_68 + *local_80;
          }
          local_a8 = param_5;
          (**(code **)(**(longlong **)(param_1 + 0x70) + 0x170))
                    (*(longlong **)(param_1 + 0x70),lVar6,lVar5,param_4);
          FUN_14000a0a0(&local_98);
        } while (-1 < (int)(uint)local_90);
      }
    }
  }
  if ((local_38 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e5d52 FUN_1468e5d52 body=95 status=ok
// SIG undefined FUN_1468e5d52(void)

void FUN_1468e5d52(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 0x70);
  if (lVar2 != 0) {
    iVar1 = (int)param_2[1];
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_1468984f2(param_2,iVar1);
    }
    *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x0001468e5d97. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x58))(*(longlong **)(param_1 + 0x70),param_2);
    return;
  }
  return;
}



// FUNCTION 1468e5db2 FUN_1468e5db2 body=118 status=ok
// SIG undefined FUN_1468e5db2(void)

longlong FUN_1468e5db2(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4)

{
  int iVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  longlong *local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = *(undefined8 *)(param_1 + 0x70);
  local_20 = *(undefined4 *)(param_1 + 0x78);
  uStack_1c = *(undefined4 *)(param_1 + 0x7c);
  uStack_18 = *(undefined4 *)(param_1 + 0x80);
  uStack_14 = *(undefined4 *)(param_1 + 0x84);
  local_10 = *(int *)(param_1 + 0x88);
  local_28 = param_3;
  iVar1 = FUN_14686d5e8(&local_30,param_4);
  if (iVar1 == -1) {
    lVar2 = 0;
  }
  else {
    lVar2 = (longlong)iVar1 * (longlong)local_10 + *local_28;
  }
  if ((local_8 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e5e44 FUN_1468e5e44 body=331 status=ok
// SIG undefined FUN_1468e5e44(void)

ulonglong FUN_1468e5e44(longlong param_1,uint param_2,undefined8 param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  bool bVar7;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  longlong local_40;
  ulonglong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = FUN_1468c83be();
  uVar6 = 0;
  if (cVar1 == '\0') goto LAB_1468e5f6a;
  uVar4 = (ulonglong)(param_2 + 1);
  if (*(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
              (ulonglong)(param_2 & 0x1fff) * 0xc) < 1) {
    uVar4 = uVar6;
  }
  local_38 = uVar6;
  if (param_1 != 0) {
    local_38 = *(ulonglong *)(param_1 + 0x20);
  }
  local_48 = *(undefined8 *)
              (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)(uint)uVar4 >> 0xd) * 8) +
              (ulonglong)((uint)uVar4 & 0x1fff) * 0xc);
  uVar6 = 0;
  local_40 = param_1;
  plVar2 = (longlong *)FUN_14689ac8c();
  if (plVar2 == (longlong *)0x0) goto LAB_1468e5f6a;
  lVar5 = plVar2[1];
  lVar3 = FUN_1446ddbd2();
  if (*(ulonglong *)(lVar3 + 8) == 0) {
    bVar7 = lVar5 != 0;
    if (lVar5 != lVar3 && bVar7) {
      do {
        lVar5 = *(longlong *)(lVar5 + 0x30);
        bVar7 = lVar5 != 0;
        if (lVar5 == lVar3) break;
      } while (lVar5 != 0);
    }
    if (bVar7) goto LAB_1468e5f3b;
  }
  else if ((*(ulonglong *)(lVar5 + 0x18) & *(ulonglong *)(lVar3 + 8)) != 0) {
LAB_1468e5f3b:
    cVar1 = (**(code **)(*plVar2 + 0x198))(plVar2,uVar4,param_3);
    if (cVar1 != '\0') {
      *(longlong **)(param_1 + 0x70) = plVar2;
      uVar6 = CONCAT71((int7)((ulonglong)lVar5 >> 8),1);
      goto LAB_1468e5f6a;
    }
  }
  (**(code **)(*plVar2 + 8))(plVar2,1);
  uVar6 = 0;
LAB_1468e5f6a:
  if ((local_30 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 1468e5f90 FUN_1468e5f90 body=153 status=ok
// SIG undefined FUN_1468e5f90(void)

void FUN_1468e5f90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  (**(code **)(*param_1 + 0x168))(param_1,&local_28);
  FUN_140a6c050(param_2,local_28);
  plVar1 = (longlong *)param_1[0xe];
  *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0x80) + -1;
  (**(code **)(*plVar1 + 0x1a0))(plVar1,param_2);
  lVar2 = param_2 + 0x88;
  if (*(longlong *)(param_2 + 0xb0) != 0) {
    lVar2 = *(longlong *)(param_2 + 0xb0);
  }
  *(undefined4 *)(param_2 + 0xc0) = *(undefined4 *)(lVar2 + (longlong)*(int *)(param_2 + 0xc0) * 4);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e602a FUN_1468e602a body=168 status=ok
// SIG undefined FUN_1468e602a(void)

void FUN_1468e602a(longlong *param_1,uint param_2)

{
  longlong lVar1;
  int iVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = *(longlong *)
           (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) +
           (ulonglong)(param_2 & 0x1fff) * 0xc);
  (**(code **)(*param_1 + 0x168))(param_1,&local_48);
  if (lVar1 == local_48) {
    iVar2 = 0;
    if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                    (ulonglong)(param_2 & 0x1fff) * 0xc)) {
      iVar2 = param_2 + 1;
    }
    (**(code **)(*(longlong *)param_1[0xe] + 0x1a8))((longlong *)param_1[0xe],iVar2);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e60d4 FUN_1468e60d4 body=563 status=ok
// SIG undefined FUN_1468e60d4(void)

ulonglong FUN_1468e60d4(longlong param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_d8 [40];
  undefined8 local_b0;
  undefined8 local_a8;
  longlong local_a0;
  undefined8 local_98;
  undefined8 *local_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_60;
  undefined8 local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  *(undefined1 *)(*param_2 + 0x15 + (longlong)((int)param_2[1] + -1) * 0x18) = 1;
  local_58 = *param_4;
  local_50 = param_4[1];
  uVar3 = FUN_1468c826c(param_1);
  uVar5 = (ulonglong)uVar3;
  if ((char)uVar3 == '\x03') {
    local_78 = (longlong *)*param_3;
    uVar2 = *(undefined8 *)(param_1 + 0x70);
    local_70 = *(undefined4 *)(param_1 + 0x78);
    uStack_6c = *(undefined4 *)(param_1 + 0x7c);
    uStack_68 = *(undefined4 *)(param_1 + 0x80);
    uStack_64 = *(undefined4 *)(param_1 + 0x84);
    local_60 = *(int *)(param_1 + 0x88);
    iVar1 = (int)param_2[1];
    lVar6 = (longlong)iVar1;
    *(uint *)(param_2 + 1) = iVar1 + 1U;
    local_80 = uVar2;
    if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
      FUN_146895f4a(param_2,iVar1);
    }
    lVar4 = *param_2;
    *(undefined8 *)(lVar4 + lVar6 * 0x18) = uVar2;
    *(undefined8 *)(lVar4 + 8 + lVar6 * 0x18) = 0;
    *(undefined4 *)(lVar4 + 0x10 + lVar6 * 0x18) = 0xffffffff;
    *(undefined2 *)(lVar4 + 0x14 + lVar6 * 0x18) = 0;
    local_90 = &local_80;
    local_88 = 0xffffffffffffffff;
    FUN_14000a0a0(&local_90);
    uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),3);
    if ((-1 < (int)(uint)local_88) &&
       (lVar6 = local_90[1], (int)(uint)local_88 < *(int *)(lVar6 + 0x28))) {
      lVar4 = lVar6 + 0x10;
      if (*(longlong *)(lVar6 + 0x20) != 0) {
        lVar4 = *(longlong *)(lVar6 + 0x20);
      }
      if ((*(uint *)(lVar4 + (ulonglong)((uint)local_88 >> 5) * 4) >> ((uint)local_88 & 0x1f) & 1)
          != 0) {
        while( true ) {
          lVar6 = *param_2;
          lVar4 = (longlong)((int)param_2[1] + -1);
          *(undefined4 *)(lVar6 + 0x10 + lVar4 * 0x18) = local_88._4_4_;
          *(undefined1 *)(lVar6 + 0x14 + lVar4 * 0x18) = 2;
          local_a0 = (longlong)local_60 * (longlong)(int)(uint)local_88 + *local_78;
          local_98 = param_3[1];
          local_b0 = *param_4;
          local_a8 = param_4[1];
          uVar3 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0xa8))
                            (*(longlong **)(param_1 + 0x70),param_2,&local_a0,&local_b0);
          if ((char)uVar3 == '\0') {
            uVar5 = 0;
            goto LAB_1468e62d5;
          }
          uVar5 = (ulonglong)uVar3;
          if ((uVar3 & 0xff) == 2) break;
          FUN_14000a0a0(&local_90);
          if (((int)(uint)local_88 < 0) ||
             (lVar6 = local_90[1], *(int *)(lVar6 + 0x28) <= (int)(uint)local_88))
          goto LAB_1468e62d5;
          lVar4 = lVar6 + 0x10;
          if (*(longlong *)(lVar6 + 0x20) != 0) {
            lVar4 = *(longlong *)(lVar6 + 0x20);
          }
          if ((*(uint *)(lVar4 + (ulonglong)((uint)local_88 >> 5) * 4) >> ((uint)local_88 & 0x1f) &
              1) == 0) goto LAB_1468e62d5;
        }
        uVar5 = CONCAT71((uint7)(uint3)(uVar3 >> 8),1);
      }
    }
LAB_1468e62d5:
    *(int *)(param_2 + 1) = (int)param_2[1] + -1;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1468e6396 FUN_1468e6396 body=164 status=ok
// SIG undefined FUN_1468e6396(void)

void FUN_1468e6396(longlong *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auStack_68 [40];
  longlong local_40;
  undefined8 *local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  cVar1 = (**(code **)(*param_1 + 0x1c8))();
  if (cVar1 != '\0') {
    local_40 = param_1[0xe];
    local_30 = (undefined4)param_1[0xf];
    uStack_2c = *(undefined4 *)((longlong)param_1 + 0x7c);
    uStack_28 = (undefined4)param_1[0x10];
    uStack_24 = *(undefined4 *)((longlong)param_1 + 0x84);
    local_20 = (undefined4)param_1[0x11];
    local_38 = param_2;
    FUN_1402608fa(&local_40,0);
    if (*(int *)((longlong)param_2 + 0xc) != -1) {
      FUN_1468e59a6(param_2);
      *param_2 = 0;
      param_2[1] = 0xffffffff00000000;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0xffffffff;
      param_2[8] = 0;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e643c FUN_1468e643c body=69 status=ok
// SIG undefined FUN_1468e643c(void)

void FUN_1468e643c(undefined8 param_1,undefined8 *param_2)

{
  if (*(int *)((longlong)param_2 + 0xc) != -1) {
    FUN_1468e59a6(param_2);
    *param_2 = 0;
    param_2[1] = 0xffffffff00000000;
    param_2[4] = 0;
    param_2[5] = 0;
    param_2[6] = 0xffffffff;
    param_2[8] = 0;
  }
  return;
}



// FUNCTION 1468e6482 FUN_1468e6482 body=138 status=ok
// SIG undefined FUN_1468e6482(void)

void FUN_1468e6482(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar3 = FUN_144a817a2();
    lVar1 = *(longlong *)(param_1 + 0x78);
    if ((((lVar1 != 0) && (lVar3 != 0)) && (lVar2 = *(longlong *)(lVar1 + 0x10), lVar2 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar2 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_18 = param_1;
      FUN_1468eaa82(lVar1 + 800);
    }
  }
  FUN_1468d97a4(param_1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e650e FUN_1468e650e body=101 status=ok
// SIG undefined FUN_1468e650e(void)

void FUN_1468e650e(longlong param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x78);
  if (DAT_14c950c29 == 1) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x78);
    }
  }
  bVar1 = DAT_14c950c29;
  *(longlong *)(param_1 + 0x78) = lVar2;
  lVar2 = *(longlong *)(param_2 + 0x70);
  if ((bVar1 & 1) != 0) {
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar2 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar2;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468e6574 FUN_1468e6574 body=223 status=ok
// SIG undefined FUN_1468e6574(void)

undefined8 FUN_1468e6574(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1[0xf] + 0x18);
  FUN_1400021e4(local_48,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xf] + 0x308))();
  FUN_140002266(local_48,L"%s%s",uVar1,puVar2);
  local_68 = local_48;
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e6654 FUN_1468e6654 body=55 status=ok
// SIG undefined FUN_1468e6654(void)

undefined8
FUN_1468e6654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  undefined2 *puVar1;
  
  if (*(int *)(param_5 + 1) == 0) {
    puVar1 = &DAT_149dfb77a;
  }
  else {
    puVar1 = (undefined2 *)*param_5;
  }
  FUN_140002266(param_2,L"TSoftClassPtr<%s> ",puVar1);
  return param_2;
}



// FUNCTION 1468e668c FUN_1468e668c body=258 status=ok
// SIG undefined FUN_1468e668c(void)

undefined8 FUN_1468e668c(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x308))();
  FUN_140002266(&local_40,L"TSoftClassPtr<%s%s> ",uVar1,puVar2);
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
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"SOFTCLASS");
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e6790 FUN_1468e6790 body=159 status=ok
// SIG undefined FUN_1468e6790(void)

undefined8 FUN_1468e6790(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x78) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x78) + 0x308))();
  FUN_140002266(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e6830 FUN_1468e6830 body=239 status=ok
// SIG undefined FUN_1468e6830(void)

void FUN_1468e6830(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong local_28;
  undefined1 local_1c [4];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    lVar2 = FUN_144a817a2();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(param_2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
         ) == lVar2 + 0x30)) {
      local_28 = param_1;
      FUN_1468eabe6(param_2 + 800,local_1c,&local_28,0);
    }
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar3 = FUN_144a817a2();
    lVar2 = *(longlong *)(param_1 + 0x78);
    if ((((lVar2 != 0) && (lVar3 != 0)) && (lVar1 = *(longlong *)(lVar2 + 0x10), lVar1 != 0)) &&
       ((*(int *)(lVar3 + 0x38) <= *(int *)(lVar1 + 0x38) &&
        (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
         lVar3 + 0x30)))) {
      local_30 = param_1;
      FUN_1468eaa82(lVar2 + 800);
    }
  }
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(param_1 + 0x78) = param_2;
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e6920 FUN_1468e6920 body=69 status=ok
// SIG undefined FUN_1468e6920(void)

undefined8 FUN_1468e6920(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined7 uVar3;
  undefined7 extraout_var;
  
  uVar2 = FUN_142811f30();
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
  }
  else {
    lVar1 = *(longlong *)(param_2 + 0x78);
    uVar3 = (undefined7)((ulonglong)uVar2 >> 8);
    if ((lVar1 != 0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(lVar1);
      uVar3 = extraout_var;
    }
    uVar2 = CONCAT71(uVar3,*(longlong *)(param_1 + 0x78) == lVar1);
  }
  return uVar2;
}



// FUNCTION 1468e6966 FUN_1468e6966 body=258 status=ok
// SIG undefined FUN_1468e6966(void)

undefined8 FUN_1468e6966(longlong param_1,undefined8 param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_78 [40];
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_40 = *(longlong *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_40,&local_50);
  puVar2 = local_50;
  if (local_48 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(&local_40,L"TSoftObjectPtr<%s%s>",uVar1,puVar2);
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
  if (local_50 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_140056680(param_2,L"SOFTOBJECT");
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e6a6a FUN_1468e6a6a body=159 status=ok
// SIG undefined FUN_1468e6a6a(void)

undefined8 FUN_1468e6a6a(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = *(undefined8 *)(*(longlong *)(param_1 + 0x70) + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x308))();
  FUN_140002266(param_2,L"class %s%s;",uVar1,puVar2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e6b16 FUN_1468e6b16 body=718 status=ok
// SIG undefined FUN_1468e6b16(void)

void FUN_1468e6b16(longlong *param_1,undefined8 param_2,undefined8 *param_3,int param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  ulonglong uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  void *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  longlong lStack_60;
  undefined8 local_58;
  void *pvStack_50;
  ulonglong local_48;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  local_58 = 0;
  pvStack_50 = (void *)0x0;
  local_68 = 0;
  lStack_60 = 0;
  local_48 = 0;
  if (param_4 == 1) {
    cVar3 = (**(code **)(*param_1 + 0x88))();
    if (cVar3 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      goto LAB_1468e6b9c;
    }
    cVar3 = (**(code **)(*param_1 + 0x88))(param_1);
    if (cVar3 == '\0') {
      param_3 = (undefined8 *)((longlong)param_3 + (longlong)*(int *)((longlong)param_1 + 0x44));
      if (param_3 != &local_68) {
        if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
          (**(code **)(*param_1 + 0x100))(param_1,&local_68,param_3,(int)param_1[6]);
        }
        else {
          memcpy(&local_68,param_3,
                 (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
        }
      }
    }
    else {
      (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_68);
    }
  }
  else {
LAB_1468e6b9c:
    local_68 = *param_3;
    lStack_60 = param_3[1];
    local_58 = param_3[2];
    FUN_144a787a6(&pvStack_50,param_3 + 3);
  }
  local_78 = (void *)0x0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  lVar4 = FUN_14479d2ce(&local_68);
  if ((lVar4 == 0) && (lStack_60 != 0)) {
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(&local_68,lVar4);
      if (lVar4 == 0) goto LAB_1468e6d66;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar5 = 0;
      }
      if ((*(uint *)(lVar5 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_68,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
LAB_1468e6c54:
      FUN_1400bbfc4(&local_a8,lVar4);
      local_88 = CONCAT44(uStack_a4,local_a8);
      uStack_80 = CONCAT44(uStack_9c,uStack_a0);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      local_78 = local_98;
      uStack_70 = uStack_90;
      goto LAB_1468e6c85;
    }
  }
  else if (lVar4 != 0) goto LAB_1468e6c54;
LAB_1468e6d66:
  _Src = pvStack_50;
  local_88 = lStack_60;
  uStack_80 = local_58;
  iVar2 = (int)local_48;
  lVar4 = (longlong)(int)local_48;
  uStack_70 = CONCAT44(uStack_70._4_4_,(int)local_48);
  if ((int)local_48 == 0 && uStack_70._4_4_ == 0) {
    uStack_70 = local_48 & 0xffffffff;
  }
  else {
    FUN_1446dd670(&local_78,local_48 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy(local_78,_Src,lVar4 * 2);
    }
  }
LAB_1468e6c85:
  local_b0 = param_8;
  local_b8 = param_7;
  FUN_1468fc1fc(&local_88,param_2,&local_88,param_6);
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (pvStack_50 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1468e6dee FUN_1468e6dee body=161 status=ok
// SIG undefined FUN_1468e6dee(void)

longlong FUN_1468e6dee(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce(param_2);
  if (lVar3 != 0) {
    return lVar3;
  }
  if (*(longlong *)(param_2 + 8) == 0) {
LAB_1468e6e62:
    lVar4 = 0;
  }
  else {
    lVar3 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar3 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_2,lVar3);
      if (lVar3 == 0) goto LAB_1468e6e62;
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
        FUN_14485c47a(param_2,lVar3);
      }
    }
    lVar4 = 0;
    if ((*(uint *)(lVar3 + 8) >> 0x1e & 1) == 0) {
      lVar4 = lVar3;
    }
  }
  return lVar4;
}



// FUNCTION 1468e6e90 FUN_1468e6e90 body=199 status=ok
// SIG undefined FUN_1468e6e90(void)

longlong * FUN_1468e6e90(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = FUN_14479d2ce(param_3);
  if (lVar3 == 0) {
    if (*(longlong *)(param_3 + 8) == 0) {
LAB_1468e6f1c:
      *param_2 = 0;
      return param_2;
    }
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(param_3,lVar4);
      if (lVar4 == 0) goto LAB_1468e6f1c;
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_3,lVar4);
      }
    }
    lVar3 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      lVar3 = lVar4;
    }
  }
  *param_2 = lVar3;
  if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar3);
  }
  return param_2;
}



// FUNCTION 1468e6f58 FUN_1468e6f58 body=77 status=ok
// SIG undefined FUN_1468e6f58(void)

undefined8 FUN_1468e6f58(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = 0;
  FUN_1468e6fa6(param_1,&local_18,param_2,param_3);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return local_18;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e6fa6 FUN_1468e6fa6 body=465 status=ok
// SIG undefined FUN_1468e6fa6(void)

void FUN_1468e6fa6(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *_Src;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x210))
                      (param_1,(longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                               param_3 + *(int *)((longlong)param_1 + 0x44));
    *param_2 = lVar3;
    goto LAB_1468e70ab;
  }
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_38 = 0;
  cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar2 == '\0') {
    _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_58) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_58,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_58,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_58);
  }
  lVar3 = FUN_14479d2ce(&local_58);
  if ((lVar3 == 0) && (lStack_50 != 0)) {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar2 == '\0')) {
      FUN_14485c47a(&local_58,lVar4);
      if (lVar4 == 0) {
        lVar3 = 0;
        goto LAB_1468e715d;
      }
    }
    else {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar4);
      }
    }
    lVar3 = 0;
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
      lVar3 = lVar4;
    }
  }
LAB_1468e715d:
  *param_2 = lVar3;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
LAB_1468e70ab:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e7178 FUN_1468e7178 body=29 status=ok
// SIG undefined FUN_1468e7178(void)

undefined8 * FUN_1468e7178(undefined8 param_1,undefined8 *param_2)

{
  *param_2 = 0;
  FUN_1468e7196();
  return param_2;
}



// FUNCTION 1468e7196 FUN_1468e7196 body=526 status=ok
// SIG undefined FUN_1468e7196(void)

void FUN_1468e7196(longlong *param_1,longlong *param_2,longlong param_3,int param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 *_Src;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  longlong lStack_50;
  undefined8 local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  cVar2 = (**(code **)(*param_1 + 0x88))();
  if (cVar2 == '\0') {
    lVar3 = (**(code **)(*param_1 + 0x210))
                      (param_1,(longlong)param_4 * (longlong)*(int *)((longlong)param_1 + 0x34) +
                               param_3 + *(int *)((longlong)param_1 + 0x44));
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
    *param_2 = lVar3;
    goto LAB_1468e72b3;
  }
  local_48 = 0;
  lStack_40 = 0;
  local_58 = 0;
  lStack_50 = 0;
  local_38 = 0;
  cVar2 = (**(code **)(*param_1 + 0x88))(param_1);
  if (cVar2 == '\0') {
    _Src = (undefined8 *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_58) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_58,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_58,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_58);
  }
  lVar3 = FUN_14479d2ce(&local_58);
  if ((lVar3 == 0) && (lStack_50 != 0)) {
    lVar4 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 != 0) && (cVar2 != '\0')) {
      uVar1 = *(uint *)(lVar4 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar3 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar3 = 0;
      }
      if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(&local_58,lVar4);
      }
LAB_1468e7358:
      lVar3 = 0;
      if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0) {
        lVar3 = lVar4;
      }
      goto LAB_1468e7365;
    }
    FUN_14485c47a(&local_58,lVar4);
    if (lVar4 != 0) goto LAB_1468e7358;
    lVar3 = 0;
  }
  else {
LAB_1468e7365:
    if ((lVar3 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar3);
    }
  }
  *param_2 = lVar3;
  if (lStack_40 != 0) {
    FUN_1400020a8();
  }
LAB_1468e72b3:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e73a6 FUN_1468e73a6 body=339 status=ok
// SIG undefined FUN_1468e73a6(void)

void FUN_1468e73a6(undefined8 param_1,undefined8 *param_2,longlong param_3)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  char cVar3;
  longlong lVar4;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = 0;
  uStack_60 = (void *)0x0;
  local_78 = 0;
  uStack_70 = 0;
  local_58 = 0;
  if (param_3 == 0) {
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0;
  }
  else {
    FUN_1400bbfc4(&local_48,param_3);
    uStack_70 = CONCAT44(uStack_44,local_48);
    local_68 = CONCAT44(uStack_3c,uStack_40);
    if (uStack_60 != (void *)0x0) {
      FUN_1400020a8();
    }
    uStack_60 = (void *)CONCAT44(uStack_34,local_38);
    local_58 = CONCAT44(uStack_2c,uStack_30);
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if (cVar3 != '\0') {
      uVar1 = *(uint *)(param_3 + 0xc);
      if ((int)uVar1 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
        local_78 = 0;
        goto LAB_1468e7476;
      }
    }
    FUN_14485c47a(&local_78,param_3);
  }
LAB_1468e7476:
  _Src = uStack_60;
  *param_2 = local_78;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_70;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_70._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_68;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_68._4_4_;
  iVar2 = (int)local_58;
  lVar4 = (longlong)(int)local_58;
  *(int *)(param_2 + 4) = (int)local_58;
  if ((int)local_58 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
    *(undefined4 *)((longlong)param_2 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_2 + 3,local_58 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)param_2[3],_Src,lVar4 * 2);
    }
  }
  if (uStack_60 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e74fa FUN_1468e74fa body=254 status=ok
// SIG undefined FUN_1468e74fa(void)

void FUN_1468e74fa(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  void *_Src;
  int iVar1;
  longlong lVar2;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  void *pvStack_40;
  ulonglong local_38;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar2 = *param_3;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  pvStack_40 = (void *)0x0;
  local_38 = 0;
  local_28 = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar2);
  }
  FUN_1468ea8d6(&local_58,&local_28);
  _Src = pvStack_40;
  *param_2 = local_58;
  *(undefined4 *)(param_2 + 1) = (undefined4)uStack_50;
  *(undefined4 *)((longlong)param_2 + 0xc) = uStack_50._4_4_;
  *(undefined4 *)(param_2 + 2) = (undefined4)local_48;
  *(undefined4 *)((longlong)param_2 + 0x14) = local_48._4_4_;
  if (&local_58 != param_2) {
    iVar1 = (int)local_38;
    lVar2 = (longlong)(int)local_38;
    *(int *)(param_2 + 4) = (int)local_38;
    if ((int)local_38 == 0 && *(int *)((longlong)param_2 + 0x24) == 0) {
      *(undefined4 *)((longlong)param_2 + 0x24) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 3,local_38 & 0xffffffff);
      if (iVar1 != 0) {
        memcpy((void *)param_2[3],_Src,lVar2 * 2);
      }
    }
  }
  if (pvStack_40 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e75fa FUN_1468e75fa body=62 status=ok
// SIG undefined FUN_1468e75fa(void)

void FUN_1468e75fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_3;
  FUN_1428188ac(param_1,param_2,&local_10);
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e7644 FUN_1468e7644 body=64 status=ok
// SIG undefined FUN_1468e7644(void)

void FUN_1468e7644(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_2 + 0x70);
  if (DAT_14c950c29 == '\x01') {
    if (lVar1 == 0) {
      lVar1 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar1 = *(longlong *)(param_2 + 0x70);
    }
  }
  *(longlong *)(param_1 + 0x70) = lVar1;
  FUN_145a1bbc6(param_1,param_2);
  return;
}



// FUNCTION 1468e7684 FUN_1468e7684 body=230 status=ok
// SIG undefined FUN_1468e7684(void)

void FUN_1468e7684(longlong param_1,ulonglong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  uint uVar4;
  undefined1 auStack_58 [40];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0x70);
  if (*(code **)(*plVar1 + 0x360) != FUN_1447a13b0) {
    if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001468e778e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x360))(plVar1,param_2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  lVar2 = *(longlong *)plVar1[0x17];
  pcVar3 = *(code **)(lVar2 + 0xa0);
  if (pcVar3 == (code *)&LAB_14008dd9c) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  if (pcVar3 == FUN_14011c504) {
    (**(code **)(lVar2 + 8))((longlong *)plVar1[0x17],local_30);
    uVar4 = (uint)(*param_2 >> 0x10);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58,(*param_2 & 0xffff) >> 4,
                  uVar4 << 0x13 | uVar4 & 0xffff);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
}



// FUNCTION 1468e779a FUN_1468e779a body=62 status=ok
// SIG undefined FUN_1468e779a(void)

void FUN_1468e779a(longlong param_1,longlong *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_14689aaf4();
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1447f76d2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = uVar2;
  return;
}



// FUNCTION 1468e77d8 FUN_1468e77d8 body=184 status=ok
// SIG undefined FUN_1468e77d8(void)

undefined8 * FUN_1468e77d8(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined2 *local_30;
  int local_28;
  byte local_23;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = *(longlong *)(param_1 + 0x70);
  plVar1 = *(longlong **)(lVar2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,&local_30);
    if ((local_23 & 8) != 0) {
      *param_2 = 0;
      param_2[1] = 0;
      goto LAB_1468e7867;
    }
    lVar2 = *(longlong *)(param_1 + 0x70);
  }
  local_38 = *(undefined8 *)(lVar2 + 0x18);
  FUN_1400021e4(&local_38,&local_30);
  puVar3 = local_30;
  if (local_28 == 0) {
    puVar3 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"struct F%s;",puVar3);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
LAB_1468e7867:
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e7892 FUN_1468e7892 body=162 status=ok
// SIG undefined FUN_1468e7892(void)

undefined8 FUN_1468e7892(longlong *param_1,undefined8 param_2,longlong *param_3)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  undefined4 local_28;
  undefined4 local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_1 + 0x70))(param_1,&local_30,0,0);
  if (&local_30 == param_3) {
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_3 != 0) {
      FUN_1400020a8();
    }
    *param_3 = local_30;
    local_30 = 0;
    *(undefined4 *)(param_3 + 1) = local_28;
    *(undefined4 *)((longlong)param_3 + 0xc) = local_24;
  }
  FUN_140056680(param_2,L"STRUCT");
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e7954 FUN_1468e7954 body=51 status=ok
// SIG undefined FUN_1468e7954(void)

ulonglong FUN_1468e7954(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = param_1[0xe];
  plVar1 = *(longlong **)(lVar2 + 0xb8);
  if (plVar1 != (longlong *)0x0) {
    param_1 = plVar1;
    lVar2 = (**(code **)(*plVar1 + 0xb0))(plVar1);
  }
  return CONCAT71((int7)((ulonglong)param_1 >> 8),plVar1 != (longlong *)0x0 & (byte)lVar2) &
         0xffffffff;
}



// FUNCTION 1468e79a6 FUN_1468e79a6 body=344 status=ok
// SIG undefined FUN_1468e79a6(void)

undefined8 FUN_1468e79a6(longlong param_1,uint param_2)

{
  undefined2 *puVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_268 [32];
  undefined8 local_248;
  longlong local_240;
  undefined2 *local_238;
  undefined2 *local_230;
  ulonglong *local_228;
  char local_220;
  undefined2 local_218 [256];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_268;
  cVar2 = FUN_1468c83be();
  uVar4 = 0;
  if (cVar2 == '\0') goto LAB_1468e7aac;
  uVar3 = 0;
  if (0 < *(int *)(*(longlong *)(&DAT_14c952ad0 + (longlong)((int)param_2 >> 0xd) * 8) + 8 +
                  (ulonglong)(param_2 & 0x1fff) * 0xc)) {
    uVar3 = param_2 + 1;
  }
  local_240 = *(longlong *)
               (*(longlong *)(&DAT_14c952ad0 + (longlong)((int)uVar3 >> 0xd) * 8) +
               (ulonglong)(uVar3 & 0x1fff) * 0xc);
  if (local_240 != 0) {
    local_238 = local_218;
    local_220 = '\0';
    local_228 = &local_18;
    local_230 = local_238;
    FUN_14005eb5c(&local_240,&local_238);
    *local_230 = 0;
    puVar1 = local_238;
    uVar4 = FUN_1446f4bba();
    local_248 = 0;
    lVar5 = FUN_140277cc4(uVar4,puVar1,4,0);
    if ((lVar5 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar5);
      *(longlong *)(param_1 + 0x70) = lVar5;
      if (local_220 == '\x01') {
        FUN_1400020a8(local_238);
      }
      uVar4 = 1;
      goto LAB_1468e7aac;
    }
    *(longlong *)(param_1 + 0x70) = lVar5;
    if (local_220 == '\x01') {
      FUN_1400020a8(local_238);
    }
    uVar4 = 1;
    if (lVar5 != 0) goto LAB_1468e7aac;
  }
  uVar4 = 0;
LAB_1468e7aac:
  if ((local_18 ^ (ulonglong)auStack_268) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e7b00 FUN_1468e7b00 body=156 status=ok
// SIG undefined FUN_1468e7b00(void)

void FUN_1468e7b00(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 *param_4)

{
  char cVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined1 *)(*param_2 + 0x15 + (longlong)((int)param_2[1] + -1) * 0x18) = 1;
  local_38 = *param_4;
  local_30 = param_4[1];
  cVar1 = FUN_1468c826c(param_1);
  if (cVar1 == '\x03') {
    local_48 = *param_4;
    local_40 = param_4[1];
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x330))
              (*(longlong **)(param_1 + 0x70),param_2,param_3);
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e8294 FUN_1468e8294 body=29 status=ok
// SIG undefined FUN_1468e8294(void)

undefined8 FUN_1468e8294(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e82b2 FUN_1468e82b2 body=63 status=ok
// SIG undefined FUN_1468e82b2(void)

undefined8 FUN_1468e82b2(undefined8 param_1,undefined8 param_2)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0xa25,
                L"Pure virtual not implemented (%s)",L"FObjectPropertyBase::GetCPPTypeCustom");
  FUN_140056680(param_2,&DAT_149dfb77a);
  return param_2;
}



// FUNCTION 1468e83da FUN_1468e83da body=26 status=ok
// SIG undefined FUN_1468e83da(void)

void FUN_1468e83da(undefined8 param_1,undefined2 *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = (short)iVar1;
  return;
}



// FUNCTION 1468e83f4 FUN_1468e83f4 body=182 status=ok
// SIG undefined FUN_1468e83f4(void)

void FUN_1468e83f4(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  int iVar2;
  undefined2 *_Dst;
  undefined1 auStack_48 [46];
  undefined2 local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = _wtoi(param_3);
  local_1a = (short)iVar2;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (undefined2 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_1a) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_1a,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_1a,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e84b2 FUN_1468e84b2 body=178 status=ok
// SIG undefined FUN_1468e84b2(void)

longlong FUN_1468e84b2(longlong *param_1,longlong param_2)

{
  char cVar1;
  short *_Src;
  undefined1 auStack_48 [46];
  short local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (short *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1a) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1a,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1a,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e856c FUN_1468e856c body=178 status=ok
// SIG undefined FUN_1468e856c(void)

longlong FUN_1468e856c(longlong *param_1,longlong param_2)

{
  char cVar1;
  short *_Src;
  undefined1 auStack_48 [46];
  short local_1a;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_1a = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (short *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_1a) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_1a,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_1a,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_1a);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_1a;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e8628 FUN_1468e8628 body=36 status=ok
// SIG undefined FUN_1468e8628(void)

undefined8 FUN_1468e8628(undefined8 param_1,undefined8 param_2,short *param_3)

{
  FUN_140002266(param_2,&DAT_149e063bc,(int)*param_3);
  return param_2;
}



// FUNCTION 1468e864c FUN_1468e864c body=204 status=ok
// SIG undefined FUN_1468e864c(void)

undefined8 FUN_1468e864c(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  short *_Src;
  undefined1 auStack_48 [38];
  short local_22;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_22 = 0;
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (short *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_22) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_22,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_22,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_22);
  }
  FUN_140002266(param_2,&DAT_149e063bc,(int)local_22);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e875e FUN_1468e875e body=627 status=ok
// SIG undefined FUN_1468e875e(void)

undefined8
FUN_1468e875e(longlong param_1,longlong param_2,longlong *param_3,longlong param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  longlong *plVar2;
  ulonglong *puVar3;
  undefined1 uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined1 auStack_58 [40];
  float local_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  piVar5 = (int *)FUN_1400760d0(&DAT_14c87eb00,*(undefined4 *)(param_2 + 0xc));
  uVar6 = 0;
  if ((piVar5 == (int *)0x0) || (*(int *)(param_2 + 0x10) != 0)) goto switchD_1468e87cb_caseD_5;
  switch(*piVar5) {
  case 1:
    if (0 < *(int *)(*(longlong *)
                      (&DAT_14c952ad0 + (longlong)((int)*(uint *)(param_2 + 8) >> 0xd) * 8) + 8 +
                    (ulonglong)(*(uint *)(param_2 + 8) & 0x1fff) * 0xc)) goto LAB_1468e8836;
    plVar2 = *(longlong **)(*param_3 + 8);
    puVar3 = (ulonglong *)plVar2[1];
    puVar1 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar1) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_30,1);
    }
    else {
      local_30._0_1_ = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    break;
  case 2:
    FUN_144aa02de(*param_3,&local_30);
    break;
  case 3:
    *(undefined1 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = *(undefined1 *)(param_2 + 0x71);
    goto LAB_1468e8971;
  case 4:
    FUN_144aa025c(*param_3,&local_30);
    uVar4 = (undefined1)(int)local_30;
    goto LAB_1468e892c;
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x15:
    goto switchD_1468e87cb_caseD_5;
  case 8:
    FUN_144aa029c(*param_3,&local_30);
    uVar4 = (undefined1)(int)(double)CONCAT44(uStack_2c,local_30);
LAB_1468e892c:
    *(undefined1 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = uVar4;
    goto LAB_1468e8971;
  case 0x14:
    FUN_1408383eb(*(undefined8 *)(*param_3 + 8),&local_30);
    break;
  case 0x16:
    FUN_1458ec23e(*param_3,&local_30);
    break;
  case 0x17:
    plVar2 = *(longlong **)(*param_3 + 8);
    puVar3 = (ulonglong *)plVar2[1];
    puVar1 = (undefined1 *)*puVar3 + 1;
    if ((undefined1 *)puVar3[1] < puVar1) {
      (**(code **)(*plVar2 + 0x170))(plVar2,&local_30,1);
    }
    else {
      local_30._0_1_ = *(undefined1 *)*puVar3;
      *puVar3 = (ulonglong)puVar1;
    }
    *(undefined1 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = local_30._0_1_;
    uVar6 = 1;
    goto switchD_1468e87cb_caseD_5;
  case 0x18:
    FUN_144aa04bc(*param_3,&local_30);
    break;
  case 0x19:
    FUN_144afef32(*param_3,&local_30);
    break;
  case 0x1a:
    FUN_144afeef0(*param_3,&local_30);
    break;
  default:
    uVar6 = 0;
    if (*piVar5 != 0x22) goto switchD_1468e87cb_caseD_5;
LAB_1468e8836:
    uVar4 = FUN_14281294c(param_3,param_5,param_2);
    *(undefined1 *)
     ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
     param_4 + *(int *)(param_1 + 0x44)) = uVar4;
    goto LAB_1468e8971;
  }
  *(undefined1 *)
   ((longlong)*(int *)(param_1 + 0x34) * (longlong)*(int *)(param_2 + 0x40) +
   param_4 + *(int *)(param_1 + 0x44)) = local_30._0_1_;
LAB_1468e8971:
  uVar6 = 3;
switchD_1468e87cb_caseD_5:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1468e8a44 FUN_1468e8a44 body=25 status=ok
// SIG undefined FUN_1468e8a44(void)

void FUN_1468e8a44(undefined8 param_1,undefined1 *param_2,wchar_t *param_3)

{
  int iVar1;
  
  iVar1 = _wtoi(param_3);
  *param_2 = (char)iVar1;
  return;
}



// FUNCTION 1468e8a5e FUN_1468e8a5e body=181 status=ok
// SIG undefined FUN_1468e8a5e(void)

void FUN_1468e8a5e(longlong *param_1,longlong param_2,wchar_t *param_3)

{
  char cVar1;
  int iVar2;
  undefined1 *_Dst;
  undefined1 auStack_48 [47];
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  iVar2 = _wtoi(param_3);
  local_19 = (char)iVar2;
  cVar1 = (**(code **)(*param_1 + 0x80))(param_1);
  if (cVar1 == '\0') {
    _Dst = (undefined1 *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Dst != &local_19) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,_Dst,&local_19,(int)param_1[6]);
      }
      else {
        memcpy(_Dst,&local_19,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0x98))(param_1,param_2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e8b1a FUN_1468e8b1a body=176 status=ok
// SIG undefined FUN_1468e8b1a(void)

longlong FUN_1468e8b1a(longlong *param_1,longlong param_2)

{
  char cVar1;
  char *_Src;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (char *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_19) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_19,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_19,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e8bd2 FUN_1468e8bd2 body=176 status=ok
// SIG undefined FUN_1468e8bd2(void)

longlong FUN_1468e8bd2(longlong *param_1,longlong param_2)

{
  char cVar1;
  char *_Src;
  undefined1 auStack_48 [47];
  char local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_19 = '\0';
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (char *)(param_2 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_19) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_19,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_19,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_2,&local_19);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return (longlong)local_19;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e8c8c FUN_1468e8c8c body=36 status=ok
// SIG undefined FUN_1468e8c8c(void)

undefined8 FUN_1468e8c8c(undefined8 param_1,undefined8 param_2,char *param_3)

{
  FUN_140002266(param_2,&DAT_149e063bc,(int)*param_3);
  return param_2;
}



// FUNCTION 1468e8cb0 FUN_1468e8cb0 body=202 status=ok
// SIG undefined FUN_1468e8cb0(void)

undefined8 FUN_1468e8cb0(longlong *param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  char *_Src;
  undefined1 auStack_48 [39];
  char local_21;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_21 = '\0';
  cVar1 = (**(code **)(*param_1 + 0x88))();
  if (cVar1 == '\0') {
    _Src = (char *)(param_3 + *(int *)((longlong)param_1 + 0x44));
    if (_Src != &local_21) {
      if ((*(byte *)((longlong)param_1 + 0x3b) & 0x40) == 0) {
        (**(code **)(*param_1 + 0x100))(param_1,&local_21,_Src,(int)param_1[6]);
      }
      else {
        memcpy(&local_21,_Src,
               (longlong)(int)param_1[6] * (longlong)*(int *)((longlong)param_1 + 0x34));
      }
    }
  }
  else {
    (**(code **)(*param_1 + 0xa0))(param_1,param_3,&local_21);
  }
  FUN_140002266(param_2,&DAT_149e063bc,(int)local_21);
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e8dbc FUN_1468e8dbc body=103 status=ok
// SIG undefined FUN_1468e8dbc(void)

void FUN_1468e8dbc(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (0 < (int)param_4) {
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
      lVar3 = lVar3 + 0x10;
    } while ((ulonglong)param_4 << 4 != lVar3);
  }
  return;
}



// FUNCTION 1468e8f34 FUN_1468e8f34 body=29 status=ok
// SIG undefined FUN_1468e8f34(void)

undefined8 FUN_1468e8f34(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e8f52 FUN_1468e8f52 body=42 status=ok
// SIG undefined FUN_1468e8f52(void)

undefined8 FUN_1468e8f52(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x183c,
                L"Pure virtual not implemented (%s)",
                L"FMulticastDelegateProperty::GetMulticastDelegate");
  return 0;
}



// FUNCTION 1468e8f7c FUN_1468e8f7c body=64 status=ok
// SIG undefined FUN_1468e8f7c(void)

void FUN_1468e8f7c(undefined8 param_1,undefined8 param_2,longlong *param_3)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x183d,
                L"Pure virtual not implemented (%s)",
                L"FMulticastDelegateProperty::SetMulticastDelegate");
  if (*param_3 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1468e8fbc FUN_1468e8fbc body=41 status=ok
// SIG undefined FUN_1468e8fbc(void)

void FUN_1468e8fbc(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x183f,
                L"Pure virtual not implemented (%s)",L"FMulticastDelegateProperty::AddDelegate");
  return;
}



// FUNCTION 1468e8fe6 FUN_1468e8fe6 body=41 status=ok
// SIG undefined FUN_1468e8fe6(void)

void FUN_1468e8fe6(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x1840,
                L"Pure virtual not implemented (%s)",L"FMulticastDelegateProperty::RemoveDelegate");
  return;
}



// FUNCTION 1468e9010 FUN_1468e9010 body=41 status=ok
// SIG undefined FUN_1468e9010(void)

void FUN_1468e9010(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x1841,
                L"Pure virtual not implemented (%s)",L"FMulticastDelegateProperty::ClearDelegate");
  return;
}



// FUNCTION 1468e903a FUN_1468e903a body=47 status=ok
// SIG undefined FUN_1468e903a(void)

undefined8 * FUN_1468e903a(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x1847,
                L"Pure virtual not implemented (%s)",
                L"FMulticastDelegateProperty::GetMulticastScriptDelegate");
  return &DAT_14c951f48;
}



// FUNCTION 1468e9074 FUN_1468e9074 body=83 status=ok
// SIG undefined FUN_1468e9074(void)

void FUN_1468e9074(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_140311eb6(param_2,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1468e90fc FUN_1468e90fc body=37 status=ok
// SIG undefined FUN_1468e90fc(void)

void FUN_1468e90fc(undefined8 param_1,longlong *param_2)

{
  if ((char)param_2[2] == '\x01') {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 2) = 0;
  }
  return;
}



// FUNCTION 1468e912c FUN_1468e912c body=22 status=ok
// SIG undefined FUN_1468e912c(void)

undefined8 FUN_1468e912c(undefined8 param_1,undefined8 param_2)

{
  FUN_145c7d120();
  return param_2;
}



// FUNCTION 1468e918a FUN_1468e918a body=29 status=ok
// SIG undefined FUN_1468e918a(void)

undefined8 FUN_1468e918a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e91a8 FUN_1468e91a8 body=42 status=ok
// SIG undefined FUN_1468e91a8(void)

undefined8 FUN_1468e91a8(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x71c,
                L"Pure virtual not implemented (%s)",L"FNumericProperty::CanHoldDoubleValueInternal"
               );
  return 0;
}



// FUNCTION 1468e91d2 FUN_1468e91d2 body=42 status=ok
// SIG undefined FUN_1468e91d2(void)

undefined8 FUN_1468e91d2(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x71d,
                L"Pure virtual not implemented (%s)",L"FNumericProperty::CanHoldSignedValueInternal"
               );
  return 0;
}



// FUNCTION 1468e91fc FUN_1468e91fc body=42 status=ok
// SIG undefined FUN_1468e91fc(void)

undefined8 FUN_1468e91fc(void)

{
  FUN_140033559("Runtime\\CoreUObject\\Public\\UObject/UnrealType.h",0x71e,
                L"Pure virtual not implemented (%s)",
                L"FNumericProperty::CanHoldUnsignedValueInternal");
  return 0;
}



// FUNCTION 1468e922c FUN_1468e922c body=29 status=ok
// SIG undefined FUN_1468e922c(void)

undefined8 FUN_1468e922c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e924a FUN_1468e924a body=29 status=ok
// SIG undefined FUN_1468e924a(void)

undefined8 FUN_1468e924a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9268 FUN_1468e9268 body=29 status=ok
// SIG undefined FUN_1468e9268(void)

undefined8 FUN_1468e9268(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9286 FUN_1468e9286 body=29 status=ok
// SIG undefined FUN_1468e9286(void)

undefined8 FUN_1468e9286(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e92a4 FUN_1468e92a4 body=88 status=ok
// SIG undefined FUN_1468e92a4(void)

void FUN_1468e92a4(undefined8 param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  if (0 < (int)param_4) {
    uVar3 = 0;
    bVar1 = DAT_14c950c29;
    do {
      lVar2 = *(longlong *)(param_3 + uVar3 * 8);
      if ((bVar1 & 1) != 0) {
        if (lVar2 == 0) {
          lVar2 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar2 = *(longlong *)(param_3 + uVar3 * 8);
          bVar1 = DAT_14c950c29;
        }
      }
      *(longlong *)(param_2 + uVar3 * 8) = lVar2;
      uVar3 = uVar3 + 1;
    } while (param_4 != uVar3);
  }
  return;
}



// FUNCTION 1468e9316 FUN_1468e9316 body=29 status=ok
// SIG undefined FUN_1468e9316(void)

undefined8 FUN_1468e9316(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9334 FUN_1468e9334 body=32 status=ok
// SIG undefined FUN_1468e9334(void)

undefined8 FUN_1468e9334(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e9354 FUN_1468e9354 body=29 status=ok
// SIG undefined FUN_1468e9354(void)

undefined8 FUN_1468e9354(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e9372 FUN_1468e9372 body=32 status=ok
// SIG undefined FUN_1468e9372(void)

undefined8 FUN_1468e9372(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e9392 FUN_1468e9392 body=29 status=ok
// SIG undefined FUN_1468e9392(void)

undefined8 FUN_1468e9392(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e93b0 FUN_1468e93b0 body=32 status=ok
// SIG undefined FUN_1468e93b0(void)

undefined8 FUN_1468e93b0(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e93d0 FUN_1468e93d0 body=29 status=ok
// SIG undefined FUN_1468e93d0(void)

undefined8 FUN_1468e93d0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e93ee FUN_1468e93ee body=223 status=ok
// SIG undefined FUN_1468e93ee(void)

undefined8 FUN_1468e93ee(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined1 auStack_88 [32];
  longlong *local_68;
  undefined2 *local_58;
  int local_50;
  longlong local_48 [2];
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_48[0] = *(longlong *)(param_1[0xe] + 0x18);
  FUN_1400021e4(local_48,&local_58);
  puVar2 = local_58;
  if (local_50 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  uVar1 = (**(code **)(*(longlong *)param_1[0xe] + 0x308))();
  FUN_140002266(local_48,L"%s%s",uVar1,puVar2);
  local_68 = local_48;
  (**(code **)(*param_1 + 0x1e0))(param_1,param_2,param_3,param_4);
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1468e94ce FUN_1468e94ce body=29 status=ok
// SIG undefined FUN_1468e94ce(void)

undefined8 FUN_1468e94ce(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e94ec FUN_1468e94ec body=32 status=ok
// SIG undefined FUN_1468e94ec(void)

undefined8 FUN_1468e94ec(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e950c FUN_1468e950c body=29 status=ok
// SIG undefined FUN_1468e950c(void)

undefined8 FUN_1468e950c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1468e952e FUN_1468e952e body=32 status=ok
// SIG undefined FUN_1468e952e(void)

undefined8 FUN_1468e952e(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Unknown");
  return param_2;
}



// FUNCTION 1468e9550 FUN_1468e9550 body=85 status=ok
// SIG undefined FUN_1468e9550(void)

void FUN_1468e9550(void)

{
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uStack_20 = 0;
  local_18 = 0;
  uStack_10 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_28 = 0xffffffff;
  FUN_1468e9d84();
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


