// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 147956a5c FUN_147956a5c body=624 status=ok
// SIG undefined FUN_147956a5c(void)

ulonglong FUN_147956a5c(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong *plVar3;
  size_t sVar4;
  ulonglong uVar5;
  wchar_t *_Str;
  longlong lVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_148 [44];
  uint local_11c;
  longlong *local_118;
  wchar_t *local_110;
  int local_108;
  undefined2 *local_100;
  int local_f8;
  undefined2 *local_f0;
  int local_e8;
  longlong local_e0 [16];
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_148;
  if ((int)param_3[1] == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = FUN_14047ac8c();
    FUN_1449b8608(local_e0,uVar2,L"Reports/");
    FUN_140aa5ef8(&local_f0,local_e0);
    if (local_e0[0] != 0) {
      FUN_1400020a8();
    }
    puVar8 = &DAT_149dfb77a;
    if ((int)param_2[1] != 0) {
      puVar8 = (undefined2 *)*param_2;
    }
    puVar7 = &DAT_149dfb77a;
    if (local_e8 != 0) {
      puVar7 = local_f0;
    }
    FUN_140002266(&local_100,L"%s%s",puVar7,puVar8);
    plVar3 = (longlong *)FUN_14054d1d4();
    puVar8 = &DAT_149dfb77a;
    if (local_f8 != 0) {
      puVar8 = local_100;
    }
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x20))(plVar3,puVar8,0);
    uVar5 = CONCAT71((int7)((ulonglong)puVar8 >> 8),plVar3 != (longlong *)0x0);
    if (plVar3 != (longlong *)0x0) {
      local_11c = (uint)uVar5;
      local_118 = param_2;
      if (0 < (int)param_3[1]) {
        lVar6 = 8;
        lVar9 = 0;
        do {
          puVar8 = &DAT_149dfb77a;
          if (*(int *)(*param_3 + lVar6) != 0) {
            puVar8 = *(undefined2 **)(*param_3 + -8 + lVar6);
          }
          FUN_140002266(local_e0,&DAT_149e0625e,puVar8);
          FUN_144a882a8(&local_110,local_e0,&DAT_149e02010);
          if (local_e0[0] != 0) {
            FUN_1400020a8();
          }
          iVar1 = local_108 + -1;
          if (local_108 == 0) {
            iVar1 = 0;
          }
          _Str = L"";
          if (local_108 != 0) {
            _Str = local_110;
          }
          local_60 = 0;
          if (_Str == (wchar_t *)0x0) {
            local_58 = 0;
            local_50 = 0;
          }
          else {
            sVar4 = wcslen(_Str);
            FUN_1449b853c(local_e0,_Str,sVar4 & 0xffffffff,1);
          }
          (**(code **)(*plVar3 + 0x170))(plVar3,local_58,(longlong)iVar1);
          if (local_60 != 0) {
            FUN_1400020a8();
          }
          if (local_110 != (wchar_t *)0x0) {
            FUN_1400020a8();
          }
          lVar9 = lVar9 + 1;
          lVar6 = lVar6 + 0x10;
        } while (lVar9 < (int)param_3[1]);
      }
      (**(code **)(*plVar3 + 0x1f8))(plVar3);
      (**(code **)*plVar3)(plVar3,1);
      uVar5 = (ulonglong)local_11c;
      param_2 = local_118;
    }
    if (local_100 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_f0 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5 & 0xffffffff;
}



// FUNCTION 147956cce FUN_147956cce body=130 status=ok
// SIG undefined FUN_147956cce(void)

undefined1 FUN_147956cce(undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [46];
  char local_1a;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*param_2 == DAT_14cacd8a8) || (*(char *)((longlong)param_2 + 0x39) != '\0')) {
    local_19 = 0;
  }
  else {
    FUN_147956d52(param_2,&local_19,&local_1a);
    if (local_1a == '\x01') {
      plVar1 = (longlong *)FUN_145d0c2fa(param_1);
      (**(code **)(*plVar1 + 0x1e0))(plVar1);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_19;
}



// FUNCTION 147956d52 FUN_147956d52 body=681 status=ok
// SIG undefined FUN_147956d52(void)

void FUN_147956d52(longlong *param_1,undefined1 *param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_78 [40];
  longlong local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_3 = 0;
  *param_2 = 0;
  if ((*param_1 == 0) || (param_1[2] == 0)) goto LAB_147956f51;
  plVar7 = param_1 + 1;
  param_1[1] = 0;
  lVar5 = FUN_14479d2ce(plVar7);
  if (lVar5 == 0) {
    if (param_1[2] != 0) {
      lVar5 = FUN_140007850();
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if ((lVar5 == 0) || (cVar3 == '\0')) {
        FUN_14485c47a(plVar7,lVar5);
        if (lVar5 == 0) goto LAB_147956f9d;
      }
      else {
        uVar1 = *(uint *)(lVar5 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar6 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar6 = 0;
        }
        if ((*(uint *)(lVar6 + 8) & 0x8400000) == 0) {
          FUN_14485c47a(plVar7,lVar5);
        }
      }
      if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) == 0) goto LAB_147956db5;
    }
LAB_147956f9d:
    param_1[6] = 0;
LAB_147956fa9:
    *param_3 = 1;
    lVar5 = FUN_147957e68(plVar7);
    if ((lVar5 == 0) || (DAT_14c950c29 == '\0')) {
      param_1[6] = lVar5;
      if (lVar5 == 0) {
        *param_3 = 0;
        goto LAB_147956f51;
      }
    }
    else {
      FUN_1456cec3c(lVar5);
      param_1[6] = lVar5;
    }
  }
  else {
LAB_147956db5:
    lVar6 = FUN_144a797b2();
    if ((((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(lVar6 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8
           ) != lVar6 + 0x30)) || (lVar6 = FUN_1446f8646(), lVar6 == 0)) ||
       (*(int *)(lVar5 + 0x38) < *(int *)(lVar6 + 0x38))) goto LAB_147956f9d;
    lVar8 = 0;
    if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar6 + 0x38) * 8) ==
        lVar6 + 0x30) {
      lVar8 = lVar5;
    }
    if ((lVar8 == 0) || (DAT_14c950c29 == '\0')) {
      param_1[6] = lVar8;
      if (lVar8 != 0) goto LAB_147956e2f;
      goto LAB_147956fa9;
    }
    FUN_1456cec3c(lVar8);
    param_1[6] = lVar8;
  }
LAB_147956e2f:
  if ((longlong)(int)param_1[0xb] != 0) {
    plVar7 = (longlong *)param_1[10];
    lVar5 = (longlong)(int)param_1[0xb] << 5;
    do {
      if (*plVar7 != 0) {
        FUN_14475cc44(plVar7,local_50);
        FUN_1405e9454(param_1 + 0xe,local_50);
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
      }
      plVar7 = plVar7 + 4;
      lVar5 = lVar5 + -0x20;
    } while (lVar5 != 0);
  }
  if ((longlong)(int)param_1[9] != 0) {
    lVar5 = param_1[8];
    lVar6 = (longlong)(int)param_1[9] << 4;
    do {
      if (1 < *(int *)(lVar5 + 8)) {
        FUN_1479509c2(local_50,lVar5);
        FUN_1405e9454(param_1 + 0xe,local_50);
        if (local_50[0] != 0) {
          FUN_1400020a8();
        }
      }
      lVar5 = lVar5 + 0x10;
      lVar6 = lVar6 + -0x10;
    } while (lVar6 != 0);
  }
  if (((*param_1 == 0) || (param_1[6] == 0)) ||
     (((int)param_1[0xf] == 0 &&
      (iVar4 = (int)param_1[0xb] + (int)param_1[9],
      iVar4 != 0 && SCARRY4((int)param_1[0xb],(int)param_1[9]) == iVar4 < 0)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  *param_2 = uVar2;
LAB_147956f51:
  if ((local_40 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147956ffc FUN_147956ffc body=233 status=ok
// SIG undefined FUN_147956ffc(void)

void FUN_147956ffc(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_58 = 0;
  uStack_50 = 0;
  (**(code **)(*param_1 + 0x350))(0,*param_2,&local_58,0);
  lVar3 = local_58;
  lVar6 = (longlong)(int)uStack_50;
  if (lVar6 != 0) {
    lVar5 = 0;
    do {
      puVar1 = (undefined8 *)(lVar3 + lVar5);
      local_68 = *puVar1;
      uStack_60 = puVar1[1];
      puVar2 = (undefined4 *)(lVar3 + lVar5);
      local_78 = *puVar2;
      uStack_74 = puVar2[1];
      uStack_70 = puVar2[2];
      uStack_6c = puVar2[3];
      cVar4 = (**(code **)(*param_1 + 0x528))(param_1,&local_78,param_2);
      if (cVar4 != '\0') {
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        (**(code **)(*param_1 + 0x3f0))(param_1,&local_88,param_2 + 5);
      }
      lVar5 = lVar5 + 0x10;
    } while (lVar6 * 0x10 != lVar5);
  }
  if (local_58 != 0) {
    FUN_1400020a8(local_58);
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479570e6 FUN_1479570e6 body=223 status=ok
// SIG undefined FUN_1479570e6(void)

undefined8 FUN_1479570e6(longlong *param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  undefined8 uVar2;
  size_t sVar3;
  wchar_t *_Str;
  bool bVar4;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 local_50;
  longlong local_48 [2];
  undefined1 local_38 [16];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (1 < *(int *)(param_3 + 0x10)) {
    (**(code **)(*param_1 + 0x318))(param_1,local_38,param_2);
    FUN_14475cc44(local_38,local_48);
    if (*(int *)(param_3 + 0x10) == 0) {
      _Str = L"";
    }
    else {
      _Str = *(wchar_t **)(param_3 + 8);
    }
    if (_Str == (wchar_t *)0x0) {
      bVar4 = false;
    }
    else {
      sVar3 = wcslen(_Str);
      local_50 = 0xffffffff;
      local_58 = 0;
      iVar1 = FUN_1447ee042(local_48,_Str,sVar3 & 0xffffffff,1);
      bVar4 = iVar1 != -1;
    }
    if (local_48[0] != 0) {
      FUN_1400020a8();
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (!bVar4) {
      uVar2 = 0;
      goto LAB_147957107;
    }
  }
  uVar2 = 1;
LAB_147957107:
  if ((local_18 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479571ce FUN_1479571ce body=785 status=ok
// SIG undefined FUN_1479571ce(void)

ulonglong FUN_1479571ce(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  longlong lVar10;
  longlong *plVar11;
  ulonglong uVar12;
  code *pcVar13;
  int iVar14;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  longlong *local_88;
  ulonglong local_80;
  longlong *local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_88 = param_2;
  if ((int)param_2[1] < 1) {
    uVar12 = 0;
  }
  else {
    local_70 = (longlong *)(param_1 + 0x1c8);
    plVar5 = (longlong *)(param_1 + 0x1d8);
    uVar12 = 0;
    iVar14 = 0;
    pcVar13 = wcslen_exref;
    local_78 = plVar5;
    do {
      puVar9 = &DAT_149dfb77a;
      if (DAT_14cacd8c0 != 0) {
        puVar9 = DAT_14cacd8b8;
      }
      lVar6 = (longlong)iVar14;
      if (puVar9 == (undefined2 *)0x0) {
LAB_1479573fc:
        puVar9 = &DAT_149dfb77a;
        if (DAT_14cacd8d0 != 0) {
          puVar9 = DAT_14cacd8c8;
        }
        if (puVar9 != (undefined2 *)0x0) {
          lVar10 = *local_88;
          uVar3 = (*pcVar13)(puVar9);
          local_90 = 0xffffffff;
          local_98 = 0;
          iVar4 = FUN_1447ee042(lVar6 * 0x10 + lVar10,puVar9,uVar3,1);
          puVar7 = &DAT_14cacd8c8;
          plVar11 = plVar5;
          if (iVar4 != -1) goto LAB_147957294;
        }
      }
      else {
        lVar10 = *local_88;
        uVar3 = (*pcVar13)(puVar9);
        local_90 = 0xffffffff;
        local_98 = 0;
        iVar4 = FUN_1447ee042(lVar6 * 0x10 + lVar10,puVar9,uVar3,1);
        puVar7 = &DAT_14cacd8b8;
        plVar11 = local_70;
        if (iVar4 == -1) goto LAB_1479573fc;
LAB_147957294:
        plVar2 = local_88;
        uVar12 = (ulonglong)*(uint *)(plVar11 + 1);
        if (uVar12 == 0) {
          FUN_14101da94(local_88,iVar14);
          FUN_140b12644(plVar2);
          iVar14 = iVar14 + -1;
          uVar12 = CONCAT71((int7)((ulonglong)plVar2 >> 8),1);
        }
        else {
          lVar6 = lVar6 * 0x10;
          local_58 = (void *)0x0;
          local_50 = *(int *)(*local_88 + 8 + lVar6);
          lVar10 = (longlong)local_50;
          plVar5 = *(longlong **)(*local_88 + lVar6);
          local_80 = uVar12;
          if (lVar10 == 0) {
            local_4c = 0;
          }
          else {
            FUN_1446dd670(&local_58,local_50,0);
            memcpy(local_58,plVar5,lVar10 * 2);
          }
          iVar4 = (int)local_80;
          if (iVar4 < 2) {
            if (iVar4 == 1) goto LAB_14795730c;
          }
          else {
            FUN_1479574e0(local_88,iVar14 + 1,iVar4 + -1);
LAB_14795730c:
            lVar10 = 8;
            uVar12 = local_80;
            do {
              puVar9 = &DAT_149dfb77a;
              if (*(int *)(*plVar11 + lVar10) != 0) {
                puVar9 = *(undefined2 **)(*plVar11 + -8 + lVar10);
              }
              puVar8 = &DAT_149dfb77a;
              if (*(int *)(puVar7 + 1) != 0) {
                puVar8 = (undefined2 *)*puVar7;
              }
              local_98 = 1;
              plVar5 = &local_68;
              FUN_140807d8e(&local_58,plVar5,puVar8,puVar9);
              lVar1 = *local_88;
              if ((longlong *)(lVar1 + lVar6) != plVar5) {
                if (*(longlong *)(lVar1 + lVar6) != 0) {
                  FUN_1400020a8();
                }
                *(longlong *)(lVar1 + lVar6) = local_68;
                local_68 = 0;
                *(undefined4 *)(lVar1 + 8 + lVar6) = (undefined4)local_60;
                *(undefined4 *)(lVar1 + 0xc + lVar6) = local_60._4_4_;
                local_60 = 0;
              }
              if (local_68 != 0) {
                FUN_1400020a8();
              }
              lVar6 = lVar6 + 0x10;
              lVar10 = lVar10 + 0x10;
              uVar12 = uVar12 - 1;
            } while (uVar12 != 0);
          }
          if (local_58 != (void *)0x0) {
            FUN_1400020a8();
          }
          iVar14 = iVar14 + (int)local_80 + -1;
          uVar12 = CONCAT71((int7)((ulonglong)plVar5 >> 8),1);
          plVar5 = local_78;
          pcVar13 = wcslen_exref;
        }
      }
      iVar14 = iVar14 + 1;
    } while (iVar14 < (int)local_88[1]);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12 & 0xffffff01;
}



// FUNCTION 1479574e0 FUN_1479574e0 body=111 status=ok
// SIG undefined FUN_1479574e0(void)

void FUN_1479574e0(longlong *param_1,int param_2,uint param_3)

{
  int iVar1;
  void *_Src;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_3;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_3) {
    FUN_1447a1bd6(param_1,iVar1);
  }
  _Src = (void *)(*param_1 + (longlong)param_2 * 0x10);
  memmove((void *)((longlong)_Src + (ulonglong)param_3 * 0x10),_Src,
          (ulonglong)(uint)(iVar1 - param_2) << 4);
  memset((void *)((longlong)param_2 * 0x10 + *param_1),0,(ulonglong)param_3 * 0x10);
  return;
}



// FUNCTION 147957550 FUN_147957550 body=307 status=ok
// SIG undefined FUN_147957550(void)

ulonglong FUN_147957550(undefined8 param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined1 auStack_b8 [32];
  undefined2 *local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined2 local_50 [8];
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_68 = 0;
  uStack_60 = 0;
  plVar3 = (longlong *)FUN_145d0c2fa();
  local_98 = local_50;
  local_40 = 0;
  local_38 = 0x100000000;
  local_50[0] = 0;
  local_88 = 0;
  local_80 = *param_2;
  local_78 = param_2[1];
  local_70 = 0;
  (**(code **)(*plVar3 + 0x108))(plVar3,&local_88,&local_68,2);
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  lVar2 = local_68;
  lVar4 = (longlong)(int)uStack_60;
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    lVar6 = 0;
    uVar5 = 0;
    do {
      if (*(longlong *)(lVar2 + lVar6) != 0) {
        iVar1 = (int)param_3[1];
        *(uint *)(param_3 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_3 + 0xc) < iVar1 + 1U) {
          FUN_1446f84a2(param_3,iVar1);
        }
        *(undefined8 *)(*param_3 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar6);
        uVar5 = CONCAT71((int7)(int3)((uint)iVar1 >> 8),1);
      }
      lVar6 = lVar6 + 0x20;
    } while (lVar4 * 0x20 != lVar6);
  }
  FUN_1447a1747(0,0);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if ((local_30 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return uVar5 & 0xffffff01;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147957684 FUN_147957684 body=419 status=ok
// SIG undefined FUN_147957684(void)

undefined4 FUN_147957684(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_108 [40];
  longlong *local_e0;
  undefined8 local_d8;
  undefined1 *local_d0;
  uint local_c8;
  int iStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined1 *local_b0;
  uint local_a8;
  int iStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  longlong local_98 [2];
  undefined1 local_88 [16];
  undefined8 local_78;
  int local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_108;
  local_78 = 0;
  local_70 = 0;
  local_98[0] = 0;
  local_98[1] = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  uVar1 = (**(code **)(*param_1 + 0x410))();
  local_b8 = 0x100000000;
  local_a8 = 0xffffffff;
  iStack_a4 = 0;
  local_a0 = 0;
  iVar2 = 0;
  local_b0 = local_88;
  if (local_70 != 0) {
    FUN_1449c0562(&local_b8);
    iVar2 = local_70;
  }
  local_c8 = local_a8;
  iStack_c4 = iStack_a4;
  local_c0 = local_a0;
  local_bc = local_9c;
  local_d8 = local_b8;
  local_d0 = local_b0;
  local_e0 = local_98;
  if ((iStack_a4 != iVar2) || (local_b0 != local_88)) {
    do {
      FUN_140da9508(param_4,&local_b8,(longlong)iStack_c4 * 0x1c + *local_e0,0);
      local_c8 = local_c8 & ~local_d8._4_4_;
      FUN_1449c0562(&local_d8);
    } while (local_e0 != local_98 || (local_d0 != local_88 || iStack_c4 != iVar2));
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_14796459a(local_98);
  if ((local_40 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147957828 FUN_147957828 body=746 status=ok
// SIG undefined FUN_147957828(void)

undefined8 FUN_147957828(longlong param_1,ulonglong param_2,char param_3,undefined8 param_4)

{
  ulonglong *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  longlong *plVar10;
  byte *pbVar11;
  char *pcVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_f8 [32];
  ulonglong *local_d8;
  byte local_ca;
  undefined1 local_c9;
  longlong local_c8;
  longlong local_c0;
  ulonglong local_b8 [5];
  undefined8 uStack_90;
  ulonglong local_80;
  longlong local_78;
  longlong local_70;
  undefined8 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  plVar10 = (longlong *)FUN_145d0c2fa();
  local_b8[4] = 0;
  uStack_90 = 0;
  FUN_1470a30b0(local_b8 + 4,0x80);
  local_d8 = &local_80;
  local_70 = 0;
  local_68 = 0x100000000;
  local_80 = local_80 & 0xffffffffffff0000;
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[0] = param_2;
  (**(code **)(*plVar10 + 0x120))(plVar10,local_b8,local_b8 + 4,2);
  if (local_70 != 0) {
    FUN_1400020a8();
  }
  if ((int)uStack_90 < 1) {
    uVar14 = 0;
  }
  else {
    lVar16 = 0;
    local_c0 = param_1 + 0x100;
    uVar14 = 0;
    do {
      uVar4 = *(ulonglong *)(local_b8[4] + 8 + lVar16 * 0x24);
      if (uVar4 != 0) {
        lVar17 = local_b8[4] + lVar16 * 0x24;
        local_78 = *(longlong *)(lVar17 + 0x10);
        local_80 = uVar4;
        if (local_78 != 0) {
          local_b8[0] = local_b8[0] & 0xffffffffffffff00;
          uVar7 = FUN_1415cecbb(&local_80);
          pbVar11 = (byte *)FUN_147968de6(param_4,uVar7,&local_80,local_b8);
          *pbVar11 = *pbVar11 | *(byte *)(lVar17 + 0x21);
          uVar14 = 1;
          if ((param_3 != '\0') &&
             (uVar8 = FUN_1415cecbb(&local_80), *(int *)(param_1 + 0xd0) != *(int *)(param_1 + 0xfc)
             )) {
            lVar13 = *(longlong *)(param_1 + 0x108);
            if (*(longlong *)(param_1 + 0x108) == 0) {
              lVar13 = local_c0;
            }
            iVar9 = *(int *)(lVar13 + (ulonglong)(*(int *)(param_1 + 0x110) - 1U & uVar8) * 4);
            if (iVar9 != -1) {
              do {
                puVar1 = (ulonglong *)(*(longlong *)(param_1 + 200) + (longlong)iVar9 * 0x28);
                if ((*puVar1 == local_80) &&
                   (*(longlong *)(*(longlong *)(param_1 + 200) + 8 + (longlong)iVar9 * 0x28) ==
                    local_78)) {
                  if ((((ulonglong)(puVar1 + 2) & 0xffffffffffffffef) != 0) &&
                     ((longlong)(int)puVar1[3] != 0)) {
                    local_c9 = *(undefined1 *)(lVar17 + 0x20);
                    local_ca = *(byte *)(lVar17 + 0x21) & 0xf7;
                    puVar15 = (undefined4 *)puVar1[2];
                    lVar17 = (longlong)(int)puVar1[3] << 4;
                    do {
                      local_b8[0] = CONCAT71(local_b8[0]._1_7_,0xff);
                      uVar7 = FUN_1415cecbb(puVar15);
                      pcVar12 = (char *)FUN_147968de6(param_4,uVar7,puVar15,local_b8);
                      if (*pcVar12 == -1) {
                        *pcVar12 = '\0';
                        lVar13 = (longlong)(int)uStack_90;
                        uVar8 = (int)uStack_90 + 1;
                        uStack_90 = CONCAT44(uStack_90._4_4_,uVar8);
                        if (uStack_90._4_4_ < uVar8) {
                          local_c8 = lVar13;
                          FUN_14701fc64(local_b8 + 4,lVar13);
                          lVar13 = local_c8;
                        }
                        puVar2 = (undefined8 *)(local_b8[4] + 0x10 + lVar13 * 0x24);
                        *puVar2 = 0;
                        puVar2[1] = 0;
                        puVar2 = (undefined8 *)(local_b8[4] + lVar13 * 0x24);
                        *puVar2 = 0;
                        puVar2[1] = 0;
                        *(undefined4 *)(local_b8[4] + 0x20 + lVar13 * 0x24) = 0;
                        uVar7 = puVar15[1];
                        uVar5 = puVar15[2];
                        uVar6 = puVar15[3];
                        puVar3 = (undefined4 *)(local_b8[4] + 8 + lVar13 * 0x24);
                        *puVar3 = *puVar15;
                        puVar3[1] = uVar7;
                        puVar3[2] = uVar5;
                        puVar3[3] = uVar6;
                        *(undefined8 *)(local_b8[4] + 0x18 + lVar13 * 0x24) = 0;
                        *(undefined1 *)(local_b8[4] + 0x20 + lVar13 * 0x24) = local_c9;
                        *(byte *)(local_b8[4] + 0x21 + lVar13 * 0x24) = local_ca;
                      }
                      puVar15 = puVar15 + 4;
                      lVar17 = lVar17 + -0x10;
                    } while (lVar17 != 0);
                  }
                  break;
                }
                iVar9 = (int)puVar1[4];
              } while (iVar9 != -1);
            }
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (lVar16 < (int)uStack_90);
  }
  if (local_b8[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_60 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar14;
}



// FUNCTION 147957b14 FUN_147957b14 body=155 status=ok
// SIG undefined FUN_147957b14(void)

undefined8 FUN_147957b14(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  size_t sVar4;
  wchar_t *_Str;
  longlong lVar5;
  
  lVar3 = FUN_1411df190();
  iVar1 = *(int *)(lVar3 + 0x50);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(lVar3 + 0x48);
    lVar5 = 0;
    do {
      _Str = L"";
      if (*(int *)(lVar3 + 8 + lVar5) != 0) {
        _Str = *(wchar_t **)(lVar3 + lVar5);
      }
      if (_Str != (wchar_t *)0x0) {
        sVar4 = wcslen(_Str);
        iVar2 = FUN_1447ee042(param_2,_Str,sVar4 & 0xffffffff,1,0,0xffffffff);
        if (iVar2 != -1) {
          return 1;
        }
      }
      lVar5 = lVar5 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar5);
  }
  return 0;
}



// FUNCTION 147957bb8 FUN_147957bb8 body=569 status=ok
// SIG undefined FUN_147957bb8(void)

void FUN_147957bb8(longlong *param_1,char param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  int iVar9;
  undefined1 auStack_d8 [32];
  undefined1 local_b8;
  undefined1 local_b0;
  undefined1 local_a8;
  undefined1 local_92;
  char local_91;
  longlong *local_90;
  undefined4 local_88;
  uint uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_147957df2(param_1 + 0x2d);
  cVar5 = (**(code **)(*param_1 + 0x2e0))(param_1);
  if ((cVar5 != '\0') && ((param_2 != '\0' || (*(char *)((longlong)param_1 + 0x35c) == '\0')))) {
    lVar8 = param_1[0x6b];
    *(int *)(param_1 + 0x6b) = (int)lVar8 + 1;
    if ((int)lVar8 == 0) {
      (**(code **)(*param_1 + 0x2c0))(param_1);
    }
    local_92 = *(undefined1 *)((longlong)param_1 + 0x479);
    *(undefined1 *)((longlong)param_1 + 0x479) = 1;
    plVar1 = param_1 + 0x90;
    plVar2 = param_1 + 0x92;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = plVar2;
    if ((int)param_1[0x95] == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar9 = (int)param_1[0x95];
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    iVar6 = local_78._4_4_;
    local_90 = plVar1;
    if ((local_78._4_4_ != iVar9) || (local_78 = uVar4, uStack_60 != plVar2)) {
      do {
        local_78 = uVar4;
        lVar8 = *local_90;
        lVar3 = *(longlong *)(lVar8 + 8 + (longlong)iVar6 * 0x20);
        FUN_147956d52(lVar3,&local_68,&local_91);
        if (local_91 == '\x01') {
          plVar7 = (longlong *)FUN_145d0c2fa(param_1);
          (**(code **)(*plVar7 + 0x1e0))(plVar7);
        }
        if (((char)local_68 == '\x01') && (*(int *)(lVar3 + 0x78) != 0)) {
          FUN_140c9de40(lVar3,param_1 + 5);
          local_b0 = *(undefined1 *)(lVar3 + 0x39);
          local_b8 = *(undefined1 *)(lVar3 + 0x38);
          local_a8 = 0;
          (**(code **)(*param_1 + 0x2a0))
                    (param_1,*(undefined8 *)(lVar8 + (longlong)iVar6 * 0x20),lVar3 + 0x70,
                     *(undefined8 *)(lVar3 + 0x30));
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != plVar1 ||
               ((longlong *)CONCAT44(uStack_7c,uStack_80) != plVar2 || local_78._4_4_ != iVar9));
    }
    plVar1 = param_1 + 0x6b;
    *(int *)plVar1 = (int)*plVar1 + -1;
    lVar8 = *param_1;
    if ((int)*plVar1 == 0) {
      (**(code **)(lVar8 + 0x2c8))(param_1);
      lVar8 = *param_1;
    }
    (**(code **)(lVar8 + 0x530))(param_1);
    *(undefined1 *)((longlong)param_1 + 0x479) = local_92;
  }
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147957df2 FUN_147957df2 body=68 status=ok
// SIG undefined FUN_147957df2(void)

void FUN_147957df2(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1479693c0();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_1405357e8(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147957e68 FUN_147957e68 body=100 status=ok
// SIG undefined FUN_147957e68(void)

longlong FUN_147957e68(void)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_144a6654a();
  if (lVar1 != 0) {
    lVar2 = FUN_144a797b2();
    if ((((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) && (lVar2 = FUN_1446f8646(), lVar2 != 0)) &&
       (*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38))) {
      if (*(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
          lVar2 + 0x30) {
        return 0;
      }
      return lVar1;
    }
  }
  return 0;
}



// FUNCTION 147957ecc FUN_147957ecc body=26 status=ok
// SIG undefined FUN_147957ecc(void)

void FUN_147957ecc(void)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14050fd64();
                    /* WARNING: Could not recover jumptable at 0x000147957edf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x4b8))(plVar1);
  return;
}



// FUNCTION 147957eee FUN_147957eee body=339 status=ok
// SIG undefined FUN_147957eee(void)

void FUN_147957eee(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uVar1 = FUN_147958042(local_28,&local_58,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147958042 FUN_147958042 body=129 status=ok
// SIG undefined FUN_147958042(void)

longlong * FUN_147958042(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_147958ead(DAT_14c951640);
  iVar2 = (int)plVar6[7];
  *(uint *)(plVar6 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar6 + 0x3c) < iVar2 + 1U) {
    FUN_1417b92ae(plVar6 + 6,iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(plVar6[6] + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  FUN_1406fa324(plVar6 + 8,param_3);
  *(undefined1 *)(plVar6 + 0xe) = 0;
  (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1);
  return plVar6;
}



// FUNCTION 1479580c6 FUN_1479580c6 body=339 status=ok
// SIG undefined FUN_1479580c6(void)

void FUN_1479580c6(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48 [2];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_28);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_28);
  }
  local_38 = 0;
  uStack_30 = 0;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_38);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_38);
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
  local_58 = (undefined4)local_38;
  uStack_54 = local_38._4_4_;
  uStack_50 = (undefined4)uStack_30;
  uStack_4c = uStack_30._4_4_;
  uVar1 = FUN_14795821a(local_28,&local_58,plVar2);
  *param_3 = uVar1;
  if (local_48[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795821a FUN_14795821a body=129 status=ok
// SIG undefined FUN_14795821a(void)

longlong * FUN_14795821a(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  longlong *plVar6;
  
  plVar6 = (longlong *)FUN_147958fcc(DAT_14c951640);
  iVar2 = (int)plVar6[7];
  *(uint *)(plVar6 + 7) = iVar2 + 1U;
  if (*(uint *)((longlong)plVar6 + 0x3c) < iVar2 + 1U) {
    FUN_1417b92ae(plVar6 + 6,iVar2);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  puVar1 = (undefined4 *)(plVar6[6] + (longlong)iVar2 * 0x10);
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  FUN_1406fa324(plVar6 + 8,param_3);
  *(undefined1 *)(plVar6 + 0xe) = 0;
  (**(code **)(*plVar6 + 0x2b0))(plVar6,param_1);
  return plVar6;
}



// FUNCTION 14795829e FUN_14795829e body=96 status=ok
// SIG undefined FUN_14795829e(void)

void FUN_14795829e(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_144affaec(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147958300 FUN_147958300 body=367 status=ok
// SIG undefined FUN_147958300(void)

void FUN_147958300(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147958470(local_30,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147958470 FUN_147958470 body=90 status=ok
// SIG undefined FUN_147958470(void)

longlong * FUN_147958470(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1479591bd(DAT_14c951640);
  FUN_147959252(plVar1 + 6,param_2);
  FUN_1406fa324(plVar1 + 8,param_3);
  *(undefined1 *)(plVar1 + 0xe) = 0;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 1479584cd FUN_1479584cd body=96 status=ok
// SIG undefined FUN_1479584cd(void)

void FUN_1479584cd(undefined8 param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  FUN_14795852e(local_28);
  FUN_1447cd2ec(param_1,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795852e FUN_14795852e body=79 status=ok
// SIG undefined FUN_14795852e(void)

undefined8 * FUN_14795852e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147969504(param_1,iVar1);
      FUN_147969566(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14795857e FUN_14795857e body=367 status=ok
// SIG undefined FUN_14795857e(void)

void FUN_14795857e(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479586ee(local_30,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479586ee FUN_1479586ee body=90 status=ok
// SIG undefined FUN_1479586ee(void)

longlong * FUN_1479586ee(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_14795931b(DAT_14c951640);
  FUN_147959252(plVar1 + 6,param_2);
  FUN_1406fa324(plVar1 + 8,param_3);
  *(undefined1 *)(plVar1 + 0xe) = 0;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 14795874c FUN_14795874c body=367 status=ok
// SIG undefined FUN_14795874c(void)

void FUN_14795874c(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined1 auStack_78 [32];
  longlong local_58 [5];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_30 = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_30);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_30);
  }
  local_58[2] = 0;
  local_58[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58 + 2);
  }
  plVar2 = local_58 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_58[0] = 0;
  local_58[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_58);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_58);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_58;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_1479588bc(local_30,plVar2,plVar3);
  *param_3 = uVar1;
  if (local_58[0] != 0) {
    FUN_1400020a8();
  }
  if (local_58[2] != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479588bc FUN_1479588bc body=90 status=ok
// SIG undefined FUN_1479588bc(void)

longlong * FUN_1479588bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1479594ef(DAT_14c951640);
  FUN_1406fa324(plVar1 + 8,param_2);
  FUN_1406fa324(plVar1 + 10,param_3);
  *(undefined1 *)(plVar1 + 0xe) = 1;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 147958916 FUN_147958916 body=474 status=ok
// SIG undefined FUN_147958916(void)

void FUN_147958916(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 auStack_88 [32];
  longlong local_68 [8];
  
  local_68[7] = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68[6] = 0;
  FUN_1446f4b16();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 6);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 6);
  }
  local_68[4] = 0;
  local_68[5] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 4);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 4);
  }
  plVar2 = local_68 + 4;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
  }
  local_68[2] = 0;
  local_68[3] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68 + 2);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68 + 2);
  }
  plVar4 = local_68 + 2;
  if (*(longlong **)(param_2 + 0x38) != (longlong *)0x0) {
    plVar4 = *(longlong **)(param_2 + 0x38);
  }
  local_68[0] = 0;
  local_68[1] = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_68);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_68);
  }
  plVar3 = *(longlong **)(param_2 + 0x38);
  if (*(longlong **)(param_2 + 0x38) == (longlong *)0x0) {
    plVar3 = local_68;
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  uVar1 = FUN_147958af2(local_68[6],plVar2,plVar4,plVar3);
  *param_3 = uVar1;
  if (local_68[0] != 0) {
    FUN_1400020a8();
  }
  if (local_68[2] != 0) {
    FUN_1400020a8();
  }
  if (local_68[4] != 0) {
    FUN_1400020a8();
  }
  if ((local_68[7] ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147958af2 FUN_147958af2 body=109 status=ok
// SIG undefined FUN_147958af2(void)

longlong *
FUN_147958af2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_1479594ef(DAT_14c951640);
  FUN_1406fa324(plVar1 + 8,param_3);
  FUN_1406fa324(plVar1 + 10,param_4);
  FUN_147959252(plVar1 + 6,param_2);
  *(undefined1 *)(plVar1 + 0xe) = 2;
  (**(code **)(*plVar1 + 0x2b0))(plVar1,param_1);
  return plVar1;
}



// FUNCTION 147958b62 FUN_147958b62 body=621 status=ok
// SIG undefined FUN_147958b62(void)

void FUN_147958b62(longlong *param_1)

{
  int *piVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 auStack_b8 [32];
  longlong *local_98;
  uint local_90;
  undefined8 *local_88;
  undefined4 local_80;
  undefined8 *local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  longlong local_58 [5];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  plVar7 = (longlong *)FUN_14050fd64();
  cVar2 = (char)param_1[0xe];
  if (cVar2 == '\x02') {
    local_98 = param_1 + 10;
    local_88 = &local_68;
    local_68 = 0;
    uStack_60 = 0;
    local_80 = 0;
    local_90 = local_90 & 0xffffff00;
    (**(code **)(*plVar7 + 0x398))(plVar7,&local_30,param_1 + 6,param_1 + 8);
  }
  else if (cVar2 == '\x01') {
    local_98 = local_58;
    local_58[0] = 0;
    local_58[1] = 0;
    local_90 = 0;
    (**(code **)(*plVar7 + 0x3a0))(plVar7,&local_30,param_1 + 8,param_1 + 10);
  }
  else {
    if (cVar2 != '\0') goto LAB_147958ceb;
    local_98 = local_58 + 2;
    local_58[2] = 0;
    local_58[3] = 0;
    local_90 = 0;
    (**(code **)(*plVar7 + 0x368))(plVar7,&local_30,param_1 + 6,param_1 + 8);
  }
  plVar7 = local_28;
  if (param_1 + 0xc != &local_30) {
    param_1[0xc] = local_30;
    local_30 = 0;
    plVar3 = (longlong *)param_1[0xd];
    if (local_28 != plVar3) {
      local_28 = (longlong *)0x0;
      param_1[0xd] = (longlong)plVar7;
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
  }
  plVar7 = local_28;
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar3 = local_28 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_147958ceb:
  lVar4 = param_1[0xc];
  if ((lVar4 == 0) || (*(char *)(lVar4 + 0x10) != '\0')) {
    (**(code **)(*param_1 + 0x2c0))(param_1);
  }
  else {
    local_78 = (undefined8 *)0x0;
    local_70 = 0;
    FUN_1446efa72(&local_78,0,3,0x10);
    puVar5 = local_78;
    local_70 = 3;
    *local_78 = &PTR_LAB_149e020b0;
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
    local_78[2] = lVar8;
    *local_78 = &PTR_FUN_14a7ec6f0;
    local_78[3] = 0;
    FUN_14485c47a(local_78 + 3,param_1);
    puVar5[4] = &LAB_147958dd0;
    FUN_1417f21ce(lVar4,&local_78);
  }
  if ((local_20 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147958dde FUN_147958dde body=82 status=ok
// SIG undefined FUN_147958dde(void)

void FUN_147958dde(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  param_1[0xc] = 0;
  plVar3 = (longlong *)param_1[0xd];
  if (plVar3 != (longlong *)0x0) {
    param_1[0xd] = 0;
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
                    /* WARNING: Could not recover jumptable at 0x000147958e29. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2b8))(param_1);
  return;
}



// FUNCTION 147958e30 FUN_147958e30 body=125 status=ok
// SIG undefined FUN_147958e30(void)

void FUN_147958e30(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  plVar2 = (longlong *)FUN_14050fd64();
  if ((longlong)*(int *)(param_1 + 0x38) != 0) {
    lVar4 = *(longlong *)(param_1 + 0x30);
    lVar5 = (longlong)*(int *)(param_1 + 0x38) << 4;
    do {
      lVar3 = (**(code **)(*plVar2 + 0x308))(plVar2,lVar4);
      if (lVar3 != 0) {
        iVar1 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar1 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
          FUN_1447f76d2(param_2,iVar1);
        }
        *(longlong *)(*param_2 + (longlong)iVar1 * 8) = lVar3;
      }
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
  }
  return;
}



// FUNCTION 147958ead FUN_147958ead body=148 status=ok
// SIG undefined FUN_147958ead(void)

undefined8 FUN_147958ead(undefined8 param_1)

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
  uVar1 = FUN_145992574();
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



// FUNCTION 147958f42 FUN_147958f42 body=137 status=ok
// SIG undefined FUN_147958f42(void)

void FUN_147958f42(longlong *param_1)

{
  undefined8 uVar1;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 uStack_30;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  uStack_30 = 0;
  (**(code **)(*param_1 + 0x2c8))(0,&local_38);
  if ((int)uStack_30 < 1) {
    uVar1 = 0;
  }
  else {
    uVar1 = *local_38;
  }
  FUN_147958dde(param_1);
  local_20 = uVar1;
  FUN_1447cd2ec(param_1 + 0xf);
  if (local_38 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147958fcc FUN_147958fcc body=148 status=ok
// SIG undefined FUN_147958fcc(void)

undefined8 FUN_147958fcc(undefined8 param_1)

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
  uVar1 = FUN_145992660();
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



// FUNCTION 147959062 FUN_147959062 body=215 status=ok
// SIG undefined FUN_147959062(void)

void FUN_147959062(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_28 = (longlong *)0x0;
  uStack_20 = 0;
  (**(code **)(*param_1 + 0x2c8))(0,&local_28);
  if ((0 < (int)uStack_20) && (lVar2 = *local_28, lVar2 != 0)) {
    lVar1 = FUN_144a797b2();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8)
        == lVar1 + 0x30)) {
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(lVar2);
      }
      goto LAB_1479590d9;
    }
  }
  lVar2 = 0;
LAB_1479590d9:
  FUN_147958dde(param_1);
  local_30 = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  FUN_14795913a(param_1 + 0xf,&local_30);
  if (local_28 != (longlong *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795913a FUN_14795913a body=130 status=ok
// SIG undefined FUN_14795913a(void)

void FUN_14795913a(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [40];
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  lVar1 = *param_2;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar1);
  }
  local_20 = lVar1;
  FUN_1447cd2ec(param_1);
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479591bd FUN_1479591bd body=148 status=ok
// SIG undefined FUN_1479591bd(void)

undefined8 FUN_1479591bd(undefined8 param_1)

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
  uVar1 = FUN_14599274c();
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



// FUNCTION 147959252 FUN_147959252 body=88 status=ok
// SIG undefined FUN_147959252(void)

undefined8 * FUN_147959252(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140923498(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 1479592aa FUN_1479592aa body=112 status=ok
// SIG undefined FUN_1479592aa(void)

void FUN_1479592aa(longlong *param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  
  local_28[2] = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28[0] = 0;
  local_28[1] = 0;
  (**(code **)(*param_1 + 0x2c8))(0,local_28);
  FUN_147958dde(param_1);
  FUN_14795829e(param_1 + 0xf,local_28);
  if (local_28[0] != 0) {
    FUN_1400020a8();
  }
  if ((local_28[2] ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795931b FUN_14795931b body=148 status=ok
// SIG undefined FUN_14795931b(void)

undefined8 FUN_14795931b(undefined8 param_1)

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
  uVar1 = FUN_145992838();
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



// FUNCTION 1479593b0 FUN_1479593b0 body=318 status=ok
// SIG undefined FUN_1479593b0(void)

void FUN_1479593b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  longlong local_68;
  undefined8 uStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  (**(code **)(*param_1 + 0x2c8))(0,&local_68);
  lVar2 = local_68;
  lVar7 = (longlong)(int)uStack_60;
  if (lVar7 != 0) {
    lVar6 = 0;
    do {
      lVar1 = *(longlong *)(lVar2 + lVar6);
      if (lVar1 != 0) {
        lVar5 = FUN_144a797b2();
        if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar5 + 0x38) * 8) == lVar5 + 0x30)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
          uVar3 = uStack_50;
          lVar5 = (longlong)(int)uStack_50;
          uVar4 = (int)uStack_50 + 1;
          uStack_50 = CONCAT44(uStack_50._4_4_,uVar4);
          if (uStack_50._4_4_ < uVar4) {
            FUN_14796982e(&local_58,uVar3 & 0xffffffff);
          }
          *(longlong *)(local_58 + lVar5 * 8) = lVar1;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar1);
          }
        }
      }
      lVar6 = lVar6 + 8;
    } while (lVar7 * 8 != lVar6);
  }
  FUN_147958dde(param_1);
  FUN_1479584cd(param_1 + 0xf,&local_58);
  if (local_68 != 0) {
    FUN_1400020a8();
  }
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479594ef FUN_1479594ef body=148 status=ok
// SIG undefined FUN_1479594ef(void)

undefined8 FUN_1479594ef(undefined8 param_1)

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
  uVar1 = FUN_145921968();
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



// FUNCTION 147959584 FUN_147959584 body=32 status=ok
// SIG undefined FUN_147959584(void)

void FUN_147959584(longlong param_1)

{
  FUN_147958dde();
  FUN_1447cd2ec(param_1 + 0x78,0);
  return;
}



// FUNCTION 1479595a4 FUN_1479595a4 body=1 status=ok
// SIG undefined FUN_1479595a4(void)

void FUN_1479595a4(void)

{
  return;
}



// FUNCTION 1479595ae FUN_1479595ae body=137 status=ok
// SIG undefined FUN_1479595ae(void)

void FUN_1479595ae(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795963c FUN_14795963c body=137 status=ok
// SIG undefined FUN_14795963c(void)

void FUN_14795963c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a5ab96();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479596c6 FUN_1479596c6 body=137 status=ok
// SIG undefined FUN_1479596c6(void)

void FUN_1479596c6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959750 FUN_147959750 body=137 status=ok
// SIG undefined FUN_147959750(void)

void FUN_147959750(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479597da FUN_1479597da body=129 status=ok
// SIG undefined FUN_1479597da(void)

void FUN_1479597da(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [40];
  undefined1 local_20 [16];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1446dcc8c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,local_20);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),local_20);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795985c FUN_14795985c body=137 status=ok
// SIG undefined FUN_14795985c(void)

void FUN_14795985c(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479598e6 FUN_1479598e6 body=137 status=ok
// SIG undefined FUN_1479598e6(void)

void FUN_1479598e6(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959970 FUN_147959970 body=137 status=ok
// SIG undefined FUN_147959970(void)

void FUN_147959970(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479599fa FUN_1479599fa body=137 status=ok
// SIG undefined FUN_1479599fa(void)

void FUN_1479599fa(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959a84 FUN_147959a84 body=137 status=ok
// SIG undefined FUN_147959a84(void)

void FUN_147959a84(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959b0e FUN_147959b0e body=298 status=ok
// SIG undefined FUN_147959b0e(void)

void FUN_147959b0e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [44];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  local_18 = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_18);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_18);
  }
  local_1c = 0;
  FUN_144a7452c();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_1c);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_1c);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959c3a FUN_147959c3a body=137 status=ok
// SIG undefined FUN_147959c3a(void)

void FUN_147959c3a(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959cc4 FUN_147959cc4 body=137 status=ok
// SIG undefined FUN_147959cc4(void)

void FUN_147959cc4(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_38 [36];
  undefined4 local_14;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_14 = 0;
  FUN_144a64e42();
  if (*(longlong *)(param_2 + 0x20) == 0) {
    *(undefined8 *)(param_2 + 0x88) = *(undefined8 *)(*(longlong *)(param_2 + 0x88) + 0x18);
    FUN_144a5ded6(param_2,&local_14);
  }
  else {
    FUN_14470e992(param_2,*(undefined8 *)(param_2 + 0x18),&local_14);
  }
  *(ulonglong *)(param_2 + 0x20) =
       (*(longlong *)(param_2 + 0x20) + 1) - (ulonglong)(*(longlong *)(param_2 + 0x20) == 0);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959d52 FUN_147959d52 body=75 status=ok
// SIG undefined FUN_147959d52(void)

void FUN_147959d52(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = param_2;
  uVar1 = FUN_144aff0e0();
  FUN_147959d9e(param_1,uVar1);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959d9e FUN_147959d9e body=515 status=ok
// SIG undefined FUN_147959d9e(void)

void FUN_147959d9e(undefined8 param_1,longlong *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  int iVar3;
  undefined1 auStack_f8 [32];
  undefined4 local_d8;
  undefined1 local_d0;
  undefined4 local_bc;
  undefined8 local_b8;
  undefined5 uStack_b0;
  undefined4 uStack_ab;
  undefined1 uStack_a7;
  undefined6 uStack_a6;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined5 uStack_80;
  undefined4 uStack_7b;
  undefined1 uStack_77;
  undefined6 uStack_76;
  undefined8 local_70;
  undefined4 local_68;
  undefined8 local_58;
  undefined5 uStack_50;
  undefined4 uStack_4b;
  undefined1 uStack_47;
  undefined6 uStack_46;
  undefined8 local_40;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_1463bd6f0();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  iVar3 = FUN_1448332aa(param_2,&DAT_149e3cc78);
  if ((iVar3 < 0x2e) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    uStack_46 = 0;
    local_58 = 0;
    uStack_50 = 0;
    uStack_47 = 0xff;
    uStack_4b = 0xffffffff;
    local_40 = DAT_14c845dbc;
    local_38 = DAT_14c845dc4;
    uStack_76 = 0;
    local_88 = 0;
    uStack_80 = 0;
    uStack_77 = 0xff;
    uStack_7b = 0xffffffff;
    local_70 = DAT_14c845dbc;
    local_68 = DAT_14c845dc4;
    uStack_a6 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    uStack_a7 = 0xff;
    uStack_ab = 0xffffffff;
    local_98 = DAT_14c845dc4;
    local_a0 = DAT_14c845dbc;
    if (0x118 < (int)param_2[8]) {
      local_d0 = 0;
      local_d8 = 1;
      FUN_140430222(&local_58,param_2,param_1,0);
      local_d0 = 0;
      local_d8 = 1;
      FUN_140430222(&local_88,param_2,param_1,0);
    }
    local_d0 = 0;
    local_d8 = 1;
    FUN_140430222(&local_b8,param_2,param_1,0);
    local_bc = 0;
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_bc,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_bc);
      }
    }
    else {
      local_bc = *(undefined4 *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    FUN_145beab9a(param_1);
    FUN_147a183b8(param_1);
    FUN_14102a02c(&local_b8);
    FUN_14102a02c(&local_88);
    FUN_14102a02c(&local_58);
  }
  if ((local_28 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147959fa6 FUN_147959fa6 body=111 status=ok
// SIG undefined FUN_147959fa6(void)

float FUN_147959fa6(longlong param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = (float)FUN_14795a016();
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
  case 3:
    dVar2 = (double)fVar1 + *(double *)(param_1 + 0x10);
    goto LAB_147959ffb;
  case 1:
    dVar2 = *(double *)(param_1 + 0x10);
    if (*(double *)(param_1 + 0x10) <= *(double *)(param_1 + 0x18)) {
      dVar2 = *(double *)(param_1 + 0x18);
    }
    break;
  case 2:
    dVar2 = *(double *)(param_1 + 0x10);
    if (*(double *)(param_1 + 0x10) <= *(double *)(param_1 + 0x18)) {
      dVar2 = *(double *)(param_1 + 0x18);
    }
    if (dVar2 <= *(double *)(param_1 + 0x20)) {
      dVar2 = *(double *)(param_1 + 0x20);
    }
    break;
  default:
    goto switchD_147959fcb_default;
  }
  dVar2 = (double)fVar1 + dVar2;
LAB_147959ffb:
  fVar1 = (float)dVar2;
switchD_147959fcb_default:
  if (DAT_14c761324 <= fVar1) {
    fVar1 = DAT_14c761324;
  }
  if (fVar1 <= 0.0) {
    fVar1 = 0.0;
  }
  return fVar1;
}



// FUNCTION 14795a016 FUN_14795a016 body=343 status=ok
// SIG undefined FUN_14795a016(void)

float FUN_14795a016(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cacdc3c) && (FUN_144b3d300(&DAT_14cacdc3c), DAT_14cacdc3c == -1)) {
    DAT_14cacdc38 = DAT_14c761324;
    _Init_thread_footer(&DAT_14cacdc3c);
  }
  fVar1 = *(float *)(param_1 + 0x2c);
  if (fVar1 <= DAT_14cacdc38) {
    if (*(char *)(param_1 + 8) != '\x04') {
      if (*(char *)(param_1 + 8) != '\x05') {
        return fVar1;
      }
      lVar3 = FUN_1401e2d36(param_1 + 0x38);
      if ((longlong)*(int *)(lVar3 + 0x78) == 0) {
        fVar6 = 0.0;
      }
      else {
        lVar4 = *(longlong *)(lVar3 + 0x70);
        lVar3 = (longlong)*(int *)(lVar3 + 0x78) * 0x1c;
        lVar5 = 0;
        fVar7 = 0.0;
        do {
          fVar6 = *(float *)(lVar4 + 4);
          lVar2 = lVar4;
          if (fVar6 <= fVar7) {
            fVar6 = fVar7;
            lVar2 = lVar5;
          }
          lVar5 = lVar2;
          lVar4 = lVar4 + 0x1c;
          lVar3 = lVar3 + -0x1c;
          fVar7 = fVar6;
        } while (lVar3 != 0);
        if (lVar5 != 0) {
          fVar7 = *(float *)(lVar5 + 8);
          if (fVar7 <= 0.0) {
            fVar7 = 0.0;
          }
          return (float)((uint)(fVar1 * fVar6) & -(uint)(fVar7 <= 0.001) |
                        ~-(uint)(fVar7 <= 0.001) & (uint)DAT_14cacdc38);
        }
      }
      return fVar1 * fVar6;
    }
    if (*(char *)(param_1 + 10) == '\0') {
      fVar6 = *(float *)(param_1 + 0xc);
      if (-0.0001 <= fVar6) {
        fVar6 = -0.0001;
      }
      return (fVar1 * -60.0) / fVar6;
    }
    if (*(char *)(param_1 + 10) != '\x02') {
      return fVar1;
    }
  }
  return DAT_14cacdc38;
}



// FUNCTION 14795a16e FUN_14795a16e body=355 status=ok
// SIG undefined FUN_14795a16e(void)

void FUN_14795a16e(longlong param_1,undefined8 param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
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
  undefined8 local_68;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_b8);
  case 1:
    local_68 = *(undefined8 *)(param_3 + 4);
    local_78 = *param_3;
    uStack_74 = param_3[1];
    uStack_70 = param_3[2];
    uStack_6c = param_3[3];
    uVar1 = FUN_14795a714(param_1,param_2,&local_78,param_4);
    break;
  case 2:
    local_48 = *(undefined8 *)(param_3 + 4);
    local_58 = *param_3;
    uStack_54 = param_3[1];
    uStack_50 = param_3[2];
    uStack_4c = param_3[3];
    uVar1 = FUN_14795a470(param_1,param_2,&local_58,param_4);
    break;
  case 3:
    local_88 = *(undefined8 *)(param_3 + 4);
    local_98 = *param_3;
    uStack_94 = param_3[1];
    uStack_90 = param_3[2];
    uStack_8c = param_3[3];
    uVar1 = FUN_14795a99a(param_1,param_2,&local_98,param_4);
    break;
  default:
    uVar1 = 0x3f800000;
  }
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(uVar1);
}



// FUNCTION 14795a306 FUN_14795a306 body=454 status=ok
// SIG undefined FUN_14795a306(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014795b203) overlaps instruction at (ram,0x00014795b200)
    */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_14795a306(byte *param_1,float param_2,float param_3,float param_4)

{
  bool bVar1;
  code *pcVar2;
  uint uVar3;
  byte bVar4;
  byte bVar9;
  uint *puVar6;
  uint *extraout_RAX;
  uint *extraout_RAX_00;
  uint *extraout_RAX_01;
  undefined8 uVar7;
  uint *puVar8;
  longlong lVar10;
  char *pcVar11;
  undefined1 *puVar12;
  char *unaff_RBP;
  uint *unaff_RSI;
  longlong *unaff_RDI;
  char in_R8B;
  ulonglong uVar13;
  ulonglong uVar14;
  float _X;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar15;
  undefined4 extraout_XMM0_Da_00;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined1 auStack_58 [40];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iVar5;
  
  puVar12 = auStack_58;
  puVar8 = (uint *)(ulonglong)param_1[8];
  if ((uint *)0x5 < puVar8) {
    switchD_14795a34f::caseD_17 = 0xfd16d429;
    return puVar8;
  }
  if (param_3 <= 1.0) {
    param_3 = 1.0;
  }
  param_2 = param_2 * param_4;
  puVar6 = (uint *)((longlong)&switchD_14795a34f::caseD_17 +
                   (longlong)(int)(&switchD_14795a34f::caseD_17)[(longlong)puVar8]);
  bVar4 = (byte)puVar6;
  bVar9 = (byte)((ulonglong)puVar6 >> 8);
  iVar5 = (int)puVar6;
  pcVar11 = (char *)&switchD_14795a34f::caseD_17;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[8]) {
  case 0:
    break;
  case 1:
    if (param_2 <= 0.0001) {
      param_2 = 0.0001;
    }
    logf(param_2 / param_3);
    puVar6 = extraout_RAX_01;
    break;
  case 2:
    break;
  case 3:
    if (param_2 <= param_3) {
      _X = 1.0 - param_2 / param_3;
      if (_X <= 0.0001) {
        _X = 0.0001;
      }
      logf(_X);
      puVar6 = extraout_RAX_00;
    }
    break;
  case 4:
    param_2 = param_2 / param_3;
    if (param_1[10] == 1) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
      if (1.0 <= param_2) {
        switchD_14795a34f::caseD_17 = 0xfd16d429;
        return (uint *)&DAT_00000001;
      }
    }
    else if (param_1[10] == 2) {
      if (1.0 <= param_2) {
        param_2 = 1.0;
      }
      if (param_2 <= 0.0) {
        param_2 = 0.0;
      }
    }
    powf(10.0,(param_2 * *(float *)(param_1 + 0xc)) / 20.0);
    puVar6 = extraout_RAX;
    break;
  case 5:
    uVar7 = FUN_1401e2d36(param_1 + 0x38);
    puVar6 = (uint *)FUN_1448c9f94(uVar7,param_2 / param_3,0);
    break;
  case 6:
    goto switchD_14795a34f_caseD_6;
  case 7:
switchD_14795a34f_caseD_7:
    puVar6 = (uint *)FUN_14797484e();
    if (puVar6 == (uint *)0x0) {
      return (uint *)0x0;
    }
    lVar10 = 0x38;
    goto LAB_14795ae58;
  case 8:
switchD_14795a34f_caseD_8:
    lVar10 = 0x28;
    goto LAB_14795ae58;
  case 9:
    switch((ulonglong)param_1 & 0xff) {
    case 0:
      goto switchD_14795a34f_caseD_7;
    case 1:
      puVar6 = (uint *)FUN_147974c2c();
      break;
    case 2:
      puVar6 = (uint *)FUN_147974e9c();
      break;
    default:
      goto switchD_14795a34f_caseD_6;
    case 4:
      puVar6 = (uint *)FUN_1479749bc();
      if (puVar6 == (uint *)0x0) {
        return (uint *)0x0;
      }
      goto switchD_14795a34f_caseD_8;
    }
    if (puVar6 == (uint *)0x0) {
switchD_14795a34f_caseD_6:
                    /* WARNING: Read-only address (ram,0x00014a7ecf28) is written */
      return (uint *)0x0;
    }
    lVar10 = 0x30;
LAB_14795ae58:
                    /* WARNING: Could not recover jumptable at 0x00014795ae62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar8 = (uint *)(**(code **)(*(longlong *)puVar6 + lVar10))(puVar6);
    return puVar8;
  case 10:
    puVar8 = (uint *)((longlong)&PTR__purecall_14a7eceb0 +
                     (longlong)(int)(&switchD_14795a34f::caseD_17)[(longlong)puVar8] + 5);
    *puVar8 = *puVar8 >> 0xd | *puVar8 << 0x13;
    *param_1 = *param_1 ^ bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0xb:
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    uStack_30 = unaff_XMM6_Dc;
    uStack_2c = unaff_XMM6_Dd;
    puVar8 = (uint *)(**(code **)(*unaff_RDI + 0x2f0))();
    if ((0 < (int)puVar8) && (0 < (int)unaff_RDI[6])) {
      uVar13 = (ulonglong)puVar8 & 0xffffffff;
      uVar14 = 1;
      uVar15 = extraout_XMM0_Da;
      do {
        puVar8 = (uint *)FUN_14795b132(uVar15,*(undefined8 *)(unaff_RDI[5] + -8 + uVar14 * 8));
        if (uVar13 <= uVar14) break;
        puVar8 = (uint *)(longlong)(int)unaff_RDI[6];
        bVar1 = (longlong)uVar14 < (longlong)puVar8;
        uVar14 = uVar14 + 1;
        uVar15 = extraout_XMM0_Da_00;
      } while (bVar1);
    }
    if ((CONCAT44(uStack_2c,uStack_30) ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return puVar8;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  case 0xc:
  case 0x10:
    puVar12 = (undefined1 *)(ulonglong)((int)auStack_58 - 0x20);
    unaff_RSI = &switchD_14795a34f::caseD_17;
    switch(*(undefined4 *)(param_1 + 0xc)) {
    case 1:
      pcVar11 = &DAT_149ee9dd9;
switchD_14795a34f_caseD_d:
      break;
    case 2:
      pcVar11 = "Stereo";
      break;
    default:
      *(undefined8 *)(puVar12 + -8) = 0x14795b25f;
      FUN_140002266(&switchD_14795a34f::caseD_17,L"%d Channels");
      return unaff_RSI;
    case 6:
      pcVar11 = &DAT_14a7e7ea7;
      break;
    case 8:
      pcVar11 = &DAT_14a7e7eab;
    }
    *(undefined8 *)(puVar12 + -8) = 0x14795b247;
    FUN_1400b22c2(unaff_RSI,pcVar11);
                    /* WARNING: Read-only address (ram,0x00014a7ecf28) is written */
    return unaff_RSI;
  default:
    goto switchD_14795a34f_caseD_d;
  case 0x12:
    switchD_14795a34f::caseD_17 = 0xfd16d429;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x13:
    switchD_14795a34f::caseD_17 = 0xfd16d429;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x14:
    pcVar2 = (code *)swi(1);
    puVar8 = (uint *)(*pcVar2)();
    return puVar8;
  case 0x15:
    _DAT_115aba96c = _DAT_115aba96c - iVar5;
                    /* WARNING (jumptable): Read-only address (ram,0x00014a7ecf28) is written */
                    /* WARNING: Read-only address (ram,0x00014a7ecf28) is written */
    switchD_14795a34f::caseD_17 = (int)unaff_RSI + 0xfd16d429;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 0x16:
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar9;
    *(char *)((longlong)unaff_RSI + 0x4b) =
         *(char *)((longlong)unaff_RSI + 0x4b) >> ((byte)param_1 & 0x1f);
    *puVar6 = *puVar6 + iVar5;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    uVar3 = *puVar6;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4 + CARRY1((byte)uVar3,bVar4);
    *(byte *)puVar6 = (byte)*puVar6 + in_R8B;
    *unaff_RBP = *unaff_RBP + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *(byte *)puVar6 = (byte)*puVar6 + bVar4;
    *puVar6 = *puVar6 + iVar5;
    *puVar6 = *puVar6 + iVar5;
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    switchD_14795a34f::caseD_17 = 0xfd16d429;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Read-only address (ram,0x00014a7ecf28) is written */
  return puVar6;
}



// FUNCTION 14795a470 FUN_14795a470 body=675 status=ok
// SIG undefined FUN_14795a470(void)

void FUN_14795a470(longlong param_1,double *param_2,double *param_3,undefined8 param_4)

{
  float fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar13 = *param_3 - param_2[4];
  dVar14 = param_3[1] - param_2[5];
  dVar7 = param_3[2] - param_2[6];
  dVar9 = param_2[2] * -1.0;
  dVar11 = param_2[3] * 1.0;
  dVar2 = -*param_2;
  dVar3 = -param_2[1];
  dVar15 = dVar13 * dVar9 - dVar2 * dVar7;
  dVar4 = dVar14 * dVar2 - dVar13 * dVar3;
  dVar5 = dVar7 * dVar3 - dVar14 * dVar9;
  dVar5 = dVar5 + dVar5;
  dVar15 = dVar15 + dVar15;
  dVar4 = dVar4 + dVar4;
  dVar10 = (dVar4 * dVar3 - dVar15 * dVar9) + dVar11 * dVar5 + dVar13;
  dVar12 = *param_2 * dVar4 + dVar9 * dVar5 + dVar11 * dVar15 + dVar14;
  dVar9 = *(double *)(param_1 + 0x20);
  dVar13 = *(double *)(param_1 + 0x10);
  dVar14 = *(double *)(param_1 + 0x18);
  if (-dVar13 <= dVar10) {
    dVar8 = 0.0;
    if (dVar13 < dVar10) {
      dVar8 = (dVar10 - dVar13) * (dVar10 - dVar13);
    }
  }
  else {
    dVar8 = (dVar13 + dVar10) * (dVar13 + dVar10);
  }
  dVar13 = dVar11 * dVar4 + dVar7 + (dVar15 * dVar2 - dVar5 * dVar3);
  if (-dVar14 <= dVar12) {
    if (dVar14 < dVar12) {
      dVar8 = dVar8 + (dVar12 - dVar14) * (dVar12 - dVar14);
    }
  }
  else {
    dVar8 = dVar8 + (dVar14 + dVar12) * (dVar14 + dVar12);
  }
  if (-dVar9 <= dVar13) {
    if (dVar9 < dVar13) {
      dVar8 = dVar8 + (dVar13 - dVar9) * (dVar13 - dVar9);
    }
  }
  else {
    dVar8 = dVar8 + (dVar9 + dVar13) * (dVar9 + dVar13);
  }
  fVar6 = (float)dVar8;
  fVar1 = *(float *)(param_1 + 0x2c);
  if ((1e-08 < ABS(fVar6)) && (fVar1 * fVar1 <= fVar6)) {
    return;
  }
  if (fVar6 < 0.0) {
    fVar6 = sqrtf(fVar6);
  }
  else {
    fVar6 = SQRT(fVar6);
  }
  FUN_14795a306(param_1,fVar6,fVar1,param_4);
  return;
}



// FUNCTION 14795a714 FUN_14795a714 body=644 status=ok
// SIG undefined FUN_14795a714(void)

void FUN_14795a714(longlong param_1,double *param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  undefined1 auStack_d8 [40];
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  fVar9 = (float)*(double *)(param_1 + 0x18);
  if ((float)*(double *)(param_1 + 0x10) <= fVar9) {
    dVar7 = SQRT((param_3[2] - param_2[6]) * (param_3[2] - param_2[6]) +
                 (param_3[1] - param_2[5]) * (param_3[1] - param_2[5]) +
                 (*param_3 - param_2[4]) * (*param_3 - param_2[4])) - (double)fVar9;
    if (dVar7 <= 0.0) {
      dVar7 = 0.0;
    }
    fVar6 = (float)dVar7;
  }
  else {
    dVar3 = *param_2;
    dVar4 = param_2[1];
    dVar5 = param_2[2];
    dVar7 = param_2[3];
    dVar8 = dVar3 * 0.0 - dVar4 * 0.0;
    dVar1 = dVar4 * 1.0 - dVar5 * 0.0;
    dVar2 = dVar3 * -1.0 + dVar5 * 0.0;
    dVar1 = dVar1 + dVar1;
    dVar2 = dVar2 + dVar2;
    dVar8 = dVar8 + dVar8;
    local_b0 = (double)((float)*(double *)(param_1 + 0x10) - fVar9);
    local_a0 = (dVar8 * dVar7 + 1.0 + (dVar2 * dVar3 - dVar1 * dVar4)) * local_b0;
    local_a8 = ((dVar5 * dVar1 - dVar3 * dVar8) + param_2[3] * dVar2 + 0.0) * local_b0;
    local_b0 = ((dVar8 * dVar4 - dVar2 * dVar5) + dVar7 * dVar1 + 0.0) * local_b0;
    local_88 = param_2[6] + local_a0;
    local_90 = param_2[5] + local_a8;
    local_98 = param_2[4] + local_b0;
    local_a0 = param_2[6] - local_a0;
    local_a8 = param_2[5] - local_a8;
    local_b0 = param_2[4] - local_b0;
    fVar6 = (float)FUN_14096b4ee(param_3,&local_98,&local_b0);
    fVar6 = fVar6 - fVar9;
  }
  FUN_14795a306(param_1,fVar6,*(undefined4 *)(param_1 + 0x2c),param_4);
  if ((local_80 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795a99a FUN_14795a99a body=971 status=ok
// SIG undefined FUN_14795a99a(void)

undefined8 FUN_14795a99a(longlong param_1,double *param_2,double *param_3,undefined8 param_4)

{
  double dVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  undefined4 uVar8;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  
  dVar4 = *param_2;
  dVar1 = param_2[1];
  dVar9 = param_2[2];
  dVar7 = param_2[3];
  dVar11 = dVar4 * 0.0 - dVar1 * 1.0;
  dVar12 = dVar1 * 0.0 - dVar9 * 0.0;
  dVar13 = dVar9 * 1.0 - dVar4 * 0.0;
  dVar12 = dVar12 + dVar12;
  dVar13 = dVar13 + dVar13;
  dVar11 = dVar11 + dVar11;
  dVar14 = dVar11 * dVar7 + 0.0 + (dVar13 * dVar4 - dVar12 * dVar1);
  dVar1 = (dVar11 * dVar1 - dVar13 * dVar9) + dVar7 * dVar12 + 1.0;
  dVar11 = (dVar9 * dVar12 - dVar4 * dVar11) + param_2[3] * dVar13 + 0.0;
  dVar4 = (double)*(float *)(param_1 + 0x28);
  dVar13 = param_2[6] - dVar14 * dVar4;
  dVar7 = param_2[5] - dVar11 * dVar4;
  dVar4 = param_2[4] - dVar4 * dVar1;
  fVar3 = *(float *)(param_1 + 0x30);
  fVar2 = 0.0;
  uVar8 = 0;
  if (1e-08 < ABS(fVar3)) {
    dVar9 = SQRT((param_3[2] - dVar13) * (param_3[2] - dVar13) +
                 (param_3[1] - dVar7) * (param_3[1] - dVar7) +
                 (*param_3 - dVar4) * (*param_3 - dVar4)) - (double)fVar3;
    fVar3 = (float)dVar9;
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    uVar5 = FUN_14795a306(param_1,CONCAT44((int)((ulonglong)dVar9 >> 0x20),fVar3),
                          *(undefined4 *)(param_1 + 0x34),param_4);
    fVar2 = (float)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    fVar3 = *(float *)(param_1 + 0x30);
  }
  fVar15 = fVar2;
  if ((double)fVar3 < *(double *)(param_1 + 0x10)) {
    dVar9 = SQRT((param_3[2] - dVar13) * (param_3[2] - dVar13) +
                 (param_3[1] - dVar7) * (param_3[1] - dVar7) +
                 (*param_3 - dVar4) * (*param_3 - dVar4)) - *(double *)(param_1 + 0x10);
    if (dVar9 <= 0.0) {
      dVar9 = 0.0;
    }
    uVar5 = FUN_14795a306(param_1,CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9),
                          *(undefined4 *)(param_1 + 0x2c),param_4);
    fVar15 = (float)uVar5;
    uVar8 = (undefined4)((ulonglong)uVar5 >> 0x20);
    if (0.0 < fVar15) {
      dVar13 = param_3[2] - dVar13;
      dVar7 = param_3[1] - dVar7;
      dVar4 = *param_3 - dVar4;
      dVar9 = dVar13 * dVar13 + dVar4 * dVar4 + dVar7 * dVar7;
      if (((dVar9 != 1.0) || (dVar6 = dVar13, dVar10 = dVar4, dVar12 = dVar7, NAN(dVar9))) &&
         (dVar6 = DAT_14c8464f0, dVar10 = DAT_14c8464e0, dVar12 = DAT_14c8464e8,
         9.99999993922529e-09 <= dVar9)) {
        dVar9 = 1.0 / SQRT(dVar9);
        dVar6 = dVar13 * dVar9;
        dVar10 = dVar4 * dVar9;
        dVar12 = dVar7 * dVar9;
      }
      dVar11 = dVar14 * dVar6 + dVar1 * dVar10 + dVar11 * dVar12;
      dVar7 = dVar11;
      if (1.0 <= dVar11) {
        dVar7 = 1.0;
      }
      dVar7 = acos((double)(-(ulonglong)(dVar11 < -1.0) & 0xbff0000000000000 |
                           ~-(ulonglong)(dVar11 < -1.0) & (ulonglong)dVar7));
      fVar3 = (float)FUN_14795a306(param_1,(float)((double)(float)(ABS(dVar7) * 57.29577951308232) -
                                                  *(double *)(param_1 + 0x18)),
                                   (float)*(double *)(param_1 + 0x20),0x3f800000);
      fVar15 = fVar15 * fVar3;
    }
    if (fVar15 <= fVar2) {
      fVar15 = fVar2;
    }
  }
  return CONCAT44(uVar8,fVar15);
}



// FUNCTION 14795ad66 FUN_14795ad66 body=150 status=ok
// SIG undefined FUN_14795ad66(void)

void FUN_14795ad66(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_78 [44];
  uint local_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint *local_20;
  undefined8 *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_38 = *(undefined8 *)(param_1 + 0x20);
  local_18 = &local_48;
  local_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = *(undefined8 *)(param_1 + 0x18);
  local_30 = *(undefined4 *)(param_1 + 0x2c);
  local_2c = *(undefined4 *)(param_1 + 0x28);
  local_28 = *(undefined4 *)(param_1 + 0x30);
  local_24 = *(undefined4 *)(param_1 + 0x34);
  local_20 = &local_4c;
  local_4c = (uint)*(byte *)(param_1 + 9);
  FUN_147969968(param_2,local_c);
  if ((local_8 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795adfd FUN_14795adfd body=105 status=ok
// SIG undefined FUN_14795adfd(void)

undefined8 FUN_14795adfd(undefined1 param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  switch(param_1) {
  case 0:
    plVar1 = (longlong *)FUN_14797484e();
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = 0x38;
    goto LAB_14795ae58;
  case 1:
    plVar1 = (longlong *)FUN_147974c2c();
    break;
  case 2:
    plVar1 = (longlong *)FUN_147974e9c();
    break;
  default:
    goto switchD_14795a34f_caseD_6;
  case 4:
    plVar1 = (longlong *)FUN_1479749bc();
    if (plVar1 == (longlong *)0x0) {
      return 0;
    }
    lVar3 = 0x28;
    goto LAB_14795ae58;
  }
  if (plVar1 == (longlong *)0x0) {
switchD_14795a34f_caseD_6:
    return 0;
  }
  lVar3 = 0x30;
LAB_14795ae58:
                    /* WARNING: Could not recover jumptable at 0x00014795ae62. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + lVar3))(plVar1);
  return uVar2;
}



// FUNCTION 14795ae66 FUN_14795ae66 body=24 status=ok
// SIG undefined FUN_14795ae66(void)

void FUN_14795ae66(undefined8 *param_1)

{
  longlong lVar1;
  
  *param_1 = &PTR_FUN_14a7e7e50;
  lVar1 = param_1[2];
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



// FUNCTION 14795ae7e FUN_14795ae7e body=583 status=ok
// SIG undefined FUN_14795ae7e(void)

undefined8 * FUN_14795ae7e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  bool bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  undefined8 uVar7;
  bool bVar8;
  bool bVar9;
  undefined1 auStack_a8 [32];
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  int local_70;
  uint local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_14795b0c6(&local_78);
  uVar7 = *param_2;
  uVar4 = (ulonglong)local_68;
  bVar2 = true;
  if (((int)local_68 < 0) || (local_70 <= (int)local_68)) {
LAB_14795b06b:
    *param_2 = uVar7;
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    if (bVar2) {
      *param_2 = 0;
    }
    if ((local_60 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    return param_2;
  }
  do {
    plVar1 = *(longlong **)(local_78 + (uVar4 & 0xffffffff) * 8);
    if (plVar1 == (longlong *)0x0) {
LAB_14795af0c:
      plVar1 = *(longlong **)(local_78 + (longlong)(int)local_68 * 8);
      if (plVar1 != (longlong *)0x0) {
        lVar3 = FUN_1410ed3ca();
        if (((*(int *)(lVar3 + 0x38) <= *(int *)(plVar1[2] + 0x38)) &&
            (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
             == lVar3 + 0x30)) && (*(int *)((longlong)plVar1 + 0x374) == *(int *)(param_1 + 8))) {
          lVar3 = (**(code **)(*plVar1 + 0x318))(plVar1);
          if (lVar3 == 0) {
            uVar7 = 0;
          }
          else {
            lVar3 = (**(code **)(*plVar1 + 0x318))(plVar1);
            uVar7 = *(undefined8 *)(lVar3 + 0x18);
          }
          goto LAB_14795b069;
        }
      }
    }
    else {
      lVar3 = FUN_145992be8();
      if ((*(int *)(plVar1[2] + 0x38) < *(int *)(lVar3 + 0x38)) ||
         (*(longlong *)(*(longlong *)(plVar1[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) goto LAB_14795af0c;
      local_88 = 0;
      uStack_80 = 0;
      FUN_14795b132(plVar1,plVar1[0x2d],&local_88);
      uVar4 = (ulonglong)(int)uStack_80;
      if ((longlong)uVar4 < 1) {
        bVar8 = false;
      }
      else {
        bVar8 = true;
        uVar5 = 1;
        do {
          lVar3 = *(longlong *)(*(longlong *)(local_88 + -8 + uVar5 * 8) + 0x70);
          if ((lVar3 != 0) && (*(int *)(lVar3 + 0x374) == *(int *)(param_1 + 8))) {
            lVar3 = (**(code **)(*plVar1 + 0x318))(plVar1);
            bVar6 = 1;
            if (lVar3 == 0) {
              uVar7 = 0;
            }
            else {
              lVar3 = (**(code **)(*plVar1 + 0x318))(plVar1);
              uVar7 = *(undefined8 *)(lVar3 + 0x18);
            }
            goto LAB_14795b004;
          }
          bVar8 = uVar5 < uVar4;
          bVar9 = uVar5 != uVar4;
          uVar5 = uVar5 + 1;
        } while (bVar9);
      }
      bVar6 = 0;
LAB_14795b004:
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      if ((bool)(bVar8 & bVar6)) {
LAB_14795b069:
        bVar2 = false;
        goto LAB_14795b06b;
      }
    }
    uVar4 = (longlong)(int)local_68;
    do {
      uVar5 = uVar4;
      uVar4 = uVar5 + 1;
      local_68 = (uint)uVar4;
      if ((longlong)local_70 <= (longlong)uVar4) break;
    } while (*(longlong *)(local_78 + uVar4 * 8) == 0);
    if (((longlong)uVar5 < -1) || (local_70 <= (int)local_68)) goto LAB_14795b06b;
  } while( true );
}



// FUNCTION 14795b0c6 FUN_14795b0c6 body=107 status=ok
// SIG undefined FUN_14795b0c6(void)

longlong * FUN_14795b0c6(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14101bb0e();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14795b132 FUN_14795b132 body=196 status=ok
// SIG undefined FUN_14795b132(void)

void FUN_14795b132(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  bool bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined1 auStack_58 [32];
  longlong *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != (longlong *)0x0) {
    lVar3 = FUN_145b5ac1e();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(param_2[2] + 0x38)) &&
       (*(longlong *)(*(longlong *)(param_2[2] + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
        lVar3 + 0x30)) {
      local_38 = param_2;
      FUN_147969cf8(param_3);
    }
    uVar2 = (**(code **)(*param_2 + 0x2f0))(param_2);
    if ((0 < (int)uVar2) && (0 < (int)param_2[6])) {
      uVar4 = 1;
      do {
        FUN_14795b132(param_1,*(undefined8 *)(param_2[5] + -8 + uVar4 * 8),param_3);
        if (uVar2 <= uVar4) break;
        bVar1 = (longlong)uVar4 < (longlong)(int)param_2[6];
        uVar4 = uVar4 + 1;
      } while (bVar1);
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795b1f8 FUN_14795b1f8 body=105 status=ok
// SIG undefined FUN_14795b1f8(void)

undefined8 FUN_14795b1f8(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    pcVar1 = "Mono";
    break;
  case 2:
    pcVar1 = "Stereo";
    break;
  default:
    FUN_140002266(param_2,L"%d Channels");
    return param_2;
  case 6:
    pcVar1 = "5.1";
    break;
  case 8:
    pcVar1 = "7.1";
  }
  FUN_1400b22c2(param_2,pcVar1);
  return param_2;
}



// FUNCTION 14795b262 FUN_14795b262 body=452 status=ok
// SIG undefined FUN_14795b262(void)

undefined8 FUN_14795b262(longlong *param_1,undefined8 param_2,char param_3)

{
  void *_Src;
  int iVar1;
  wchar_t *pwVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  longlong lVar6;
  undefined1 auStack_c8 [32];
  undefined2 *local_a8;
  undefined2 *local_a0;
  undefined2 *local_98;
  undefined2 *local_90;
  int local_88;
  void *local_80;
  int local_78;
  undefined4 local_74;
  undefined2 *local_70;
  int local_68;
  undefined2 *local_60;
  int local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_14795ae7e(param_1,local_50);
  pwVar2 = L"Permanent, ";
  if ((char)param_1[4] == '\0') {
    pwVar2 = L"";
  }
  FUN_140056680(&local_60,pwVar2);
  FUN_14795b1f8(param_1,&local_70);
  if (param_3 == '\0') {
    FUN_144a06df0(&local_80,param_1 + 2,0);
  }
  else {
    local_80 = (void *)0x0;
    local_78 = (int)param_1[3];
    lVar6 = (longlong)local_78;
    _Src = (void *)param_1[2];
    if (lVar6 == 0) {
      local_74 = 0;
    }
    else {
      FUN_1446dd670(&local_80,local_78,0);
      memcpy(local_80,_Src,lVar6 * 2);
    }
  }
  FUN_1400021e4(local_50,&local_90);
  local_98 = &DAT_149dfb77a;
  if (local_88 != 0) {
    local_98 = local_90;
  }
  puVar4 = &DAT_149dfb77a;
  if ((int)param_1[3] != 0) {
    puVar4 = (undefined2 *)param_1[2];
  }
  puVar5 = &DAT_149dfb77a;
  if (local_68 != 0) {
    puVar5 = local_70;
  }
  puVar3 = &DAT_149dfb77a;
  if (local_58 != 0) {
    puVar3 = local_60;
  }
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  local_a8 = puVar5;
  local_a0 = puVar4;
  FUN_140002266(param_2,L"%8.2fkb, %s%s, \'%s\', Class: %s",(double)((float)iVar1 * 0.0009765625),
                puVar3);
  if (local_90 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_80 != (void *)0x0) {
    FUN_1400020a8();
  }
  if (local_70 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_60 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795b428 FUN_14795b428 body=303 status=ok
// SIG undefined FUN_14795b428(void)

undefined8 FUN_14795b428(longlong param_1,undefined8 param_2,char param_3)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined1 auStack_98 [32];
  undefined2 *local_78;
  undefined2 *local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar4 = *(longlong **)(param_1 + 0x10);
  lVar3 = plVar4[0xc];
  if (lVar3 == 0) {
    puVar6 = &DAT_149e01fe8;
  }
  else {
    FUN_1478b3f56(lVar3,&local_58);
    puVar6 = local_58;
    if (local_50 == 0) {
      puVar6 = &DAT_149dfb77a;
    }
    plVar4 = *(longlong **)(param_1 + 0x10);
  }
  fVar1 = *(float *)(plVar4 + 0x12);
  fVar2 = *(float *)((longlong)plVar4 + 0x9c);
  if (param_3 == '\0') {
    local_48 = *(undefined8 *)(*plVar4 + 0x18);
    FUN_1400021e4(&local_48,&local_68);
  }
  else {
    local_68 = (undefined2 *)0x0;
    uStack_60 = 0;
    FUN_1401031ac(*plVar4,0,&local_68);
  }
  puVar5 = local_68;
  if ((int)uStack_60 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  local_78 = puVar6;
  FUN_140002266(param_2,L"Wave: %s, Volume: %6.2f, Owner: %s",puVar5,(double)(fVar1 * fVar2));
  if (local_68 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((lVar3 != 0) && (local_58 != (undefined2 *)0x0)) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14795b558 FUN_14795b558 body=17 status=ok
// SIG undefined FUN_14795b558(void)

float FUN_14795b558(longlong param_1)

{
  return *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x9c);
}



// FUNCTION 14795b56a FUN_14795b56a body=286 status=ok
// SIG undefined FUN_14795b56a(void)

void FUN_14795b56a(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined1 auStack_c8 [32];
  code *local_a8;
  undefined8 local_98;
  undefined **local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  code *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar1 = ((undefined8 *)param_1[2])[0xc];
  lVar2 = *(longlong *)(lVar1 + 0x30);
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)param_1[2];
    bVar4 = *(byte *)(lVar1 + 0x19b);
    if ((bVar4 & 1) != 0) {
      local_30 = (**(code **)(*param_1 + 0x70))(param_1);
      local_58 = 0;
      local_48 = &PTR_LAB_14a7ec760;
      local_68 = FUN_143409daa;
      local_40 = lVar2;
      local_38 = uVar3;
      FUN_1434130f2();
      bVar4 = *(byte *)(*(longlong *)(param_1[2] + 0x60) + 0x19b);
    }
    if ((bVar4 & 2) != 0) {
      local_70 = (**(code **)(*param_1 + 0x98))(param_1);
      local_98 = 0;
      local_88 = &PTR_LAB_14a7ec780;
      local_a8 = FUN_143409ec8;
      local_80 = lVar2;
      local_78 = uVar3;
      FUN_1434130f2();
      bVar4 = *(byte *)(*(longlong *)(param_1[2] + 0x60) + 0x19b);
    }
    if ((bVar4 & 4) != 0) {
      uVar5 = (**(code **)(*param_1 + 0x98))(param_1);
      *(undefined4 *)(param_1[2] + 0xa0) = uVar5;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795b68a FUN_14795b68a body=44 status=ok
// SIG undefined FUN_14795b68a(void)

void FUN_14795b68a(longlong param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0xc0);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (*(char *)(*(longlong *)(param_1 + 8) + 0x168) == '\x05') {
    uVar1 = 0x41200000;
  }
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



// FUNCTION 14795b6b6 FUN_14795b6b6 body=269 status=ok
// SIG undefined FUN_14795b6b6(void)

void FUN_14795b6b6(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  float fVar3;
  
  cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x168);
  if (cVar1 == '\x06') {
    *(undefined4 *)(param_1 + 0x24) = 0x469c4000;
  }
  else if (cVar1 == '\x03') {
    *(undefined4 *)(param_1 + 0x24) = 0x41a00000;
  }
  else {
    lVar2 = *(longlong *)(param_1 + 0x10);
    if (DAT_14cacdc78 == 1) {
      fVar3 = *(float *)(&DAT_14a7dfba8 +
                        (ulonglong)(ABS(*(float *)(lVar2 + 0x108) + -20000.0) <= 1e-08) * 4);
    }
    else {
      fVar3 = 1.0;
    }
    fVar3 = *(float *)(lVar2 + 0x108) * fVar3;
    *(float *)(param_1 + 0x24) = fVar3;
    if ((*(byte *)(lVar2 + 0xcd) & 4) != 0) {
      if (*(float *)(lVar2 + 0xfc) <= fVar3) {
        fVar3 = *(float *)(lVar2 + 0xfc);
      }
      *(float *)(param_1 + 0x24) = fVar3;
    }
    if (*(float *)(lVar2 + 0x10c) <= fVar3) {
      fVar3 = *(float *)(lVar2 + 0x10c);
    }
    *(float *)(param_1 + 0x24) = fVar3;
    if (*(float *)(lVar2 + 0x110) <= fVar3) {
      fVar3 = *(float *)(lVar2 + 0x110);
    }
    *(float *)(param_1 + 0x24) = fVar3;
    if (*(float *)(lVar2 + 0x104) <= fVar3) {
      fVar3 = *(float *)(lVar2 + 0x104);
    }
    *(float *)(param_1 + 0x24) = fVar3;
  }
  cVar1 = *(char *)(*(longlong *)(param_1 + 8) + 0x168);
  if (cVar1 != '\a') {
    if (cVar1 == '\x04') {
      *(undefined4 *)(param_1 + 0x28) = 0x469c4000;
      return;
    }
    lVar2 = *(longlong *)(param_1 + 0x10);
    fVar3 = *(float *)(lVar2 + 0x114);
    *(float *)(param_1 + 0x28) = fVar3;
    if ((*(byte *)(lVar2 + 0xcd) & 8) != 0) {
      if (fVar3 <= *(float *)(lVar2 + 0x100)) {
        fVar3 = *(float *)(lVar2 + 0x100);
      }
      *(float *)(param_1 + 0x28) = fVar3;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x28) = 0x41a00000;
  return;
}



// FUNCTION 14795b7c4 FUN_14795b7c4 body=638 status=ok
// SIG undefined FUN_14795b7c4(void)

void FUN_14795b7c4(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  double *pdVar8;
  longlong lVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  
  lVar9 = *(longlong *)(param_1 + 0x10);
  if ((DAT_14cacdc50 != 0) || (*(float *)(lVar9 + 0x144) <= 0.0)) {
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(lVar9 + 0x130);
    uVar5 = *(undefined8 *)(lVar9 + 0x128);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(lVar9 + 0x120);
    *(undefined8 *)(param_1 + 0x50) = uVar5;
    uVar5 = *(undefined8 *)(lVar9 + 0x128);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(lVar9 + 0x120);
    *(undefined8 *)(param_1 + 0x68) = uVar5;
    *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(lVar9 + 0x130);
    return;
  }
  if (*(longlong *)(lVar9 + 0x60) == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_1478b4d4e();
    if (iVar7 == -1) {
      uVar15 = SUB84(DAT_14c8464f0,0);
      uVar16 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
      pdVar8 = &DAT_14c8464e0;
      goto LAB_14795b887;
    }
  }
  lVar9 = *(longlong *)(param_1 + 8);
  cVar6 = FUN_146269f19();
  if (cVar6 == '\0') {
    lVar9 = (longlong)iVar7 * 0x80 + *(longlong *)(lVar9 + 0x130);
  }
  else {
    lVar9 = (longlong)iVar7 * 0x110 + *(longlong *)(lVar9 + 0x1e0);
  }
  uVar15 = (undefined4)*(undefined8 *)(lVar9 + 0x30);
  uVar16 = (undefined4)((ulonglong)*(undefined8 *)(lVar9 + 0x30) >> 0x20);
  pdVar8 = (double *)(lVar9 + 0x20);
LAB_14795b887:
  lVar9 = *(longlong *)(param_1 + 0x10);
  dVar1 = *(double *)(lVar9 + 0x130);
  dVar2 = *(double *)(lVar9 + 0x128);
  dVar12 = dVar2 - pdVar8[1];
  dVar13 = *(double *)(lVar9 + 0x120) - *pdVar8;
  dVar10 = dVar1 - (double)CONCAT44(uVar16,uVar15);
  dVar3 = dVar10 * dVar10 + dVar13 * dVar13 + dVar12 * dVar12;
  if (((dVar3 != 1.0) || (dVar11 = dVar10, dVar14 = dVar13, dVar4 = dVar12, NAN(dVar3))) &&
     (dVar11 = DAT_14c8464f0, dVar14 = DAT_14c8464e0, dVar4 = DAT_14c8464e8,
     9.99999993922529e-09 <= dVar3)) {
    dVar3 = 1.0 / SQRT(dVar3);
    dVar11 = dVar10 * dVar3;
    dVar14 = dVar13 * dVar3;
    dVar4 = dVar12 * dVar3;
  }
  dVar12 = (double)(*(float *)(lVar9 + 0x144) * 0.5);
  dVar10 = (dVar14 * DAT_14c8462c8 - DAT_14c8462c0 * dVar4) * dVar12;
  dVar3 = (DAT_14c8462c0 * dVar11 - dVar14 * DAT_14c8462d0) * dVar12;
  dVar12 = (dVar4 * DAT_14c8462d0 - DAT_14c8462c8 * dVar11) * dVar12;
  *(double *)(param_1 + 0x48) = *(double *)(lVar9 + 0x120) + dVar12;
  *(double *)(param_1 + 0x50) = dVar2 + dVar3;
  *(double *)(param_1 + 0x58) = dVar1 + dVar10;
  dVar1 = *(double *)(lVar9 + 0x130);
  dVar2 = *(double *)(lVar9 + 0x128);
  *(double *)(param_1 + 0x60) = *(double *)(lVar9 + 0x120) - dVar12;
  *(double *)(param_1 + 0x68) = dVar2 - dVar3;
  *(double *)(param_1 + 0x70) = dVar1 - dVar10;
  return;
}



// FUNCTION 14795ba42 FUN_14795ba42 body=170 status=ok
// SIG undefined FUN_14795ba42(void)

bool FUN_14795ba42(longlong param_1,int param_2,undefined8 *param_3,char param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  param_3[2] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8._4_4_;
  uVar7 = (undefined4)DAT_14c8464e8;
  uVar6 = DAT_14c8464e0._4_4_;
  *(undefined4 *)param_3 = (undefined4)DAT_14c8464e0;
  *(undefined4 *)((longlong)param_3 + 4) = uVar6;
  *(undefined4 *)(param_3 + 1) = uVar7;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar2;
  if (param_2 == -1) goto LAB_14795ba68;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    lVar4 = (longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x130);
    if ((param_4 == '\0') || ((*(byte *)(lVar4 + 0x78) & 1) == 0)) goto LAB_14795bacb;
    uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x70);
    uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x70) >> 0x20);
    puVar5 = (undefined8 *)(lVar4 + 0x60);
  }
  else {
    lVar4 = (longlong)param_2 * 0x110 + *(longlong *)(param_1 + 0x1e0);
    if ((param_4 == '\0') || ((*(byte *)(lVar4 + 0x90) & 1) == 0)) {
LAB_14795bacb:
      uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x30);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x30) >> 0x20);
      puVar5 = (undefined8 *)(lVar4 + 0x20);
    }
    else {
      uVar6 = (undefined4)*(undefined8 *)(lVar4 + 0x88);
      uVar7 = (undefined4)((ulonglong)*(undefined8 *)(lVar4 + 0x88) >> 0x20);
      puVar5 = (undefined8 *)(lVar4 + 0x78);
    }
  }
  uVar1 = puVar5[1];
  *param_3 = *puVar5;
  param_3[1] = uVar1;
  param_3[2] = CONCAT44(uVar7,uVar6);
LAB_14795ba68:
  return param_2 != -1;
}



// FUNCTION 14795baec FUN_14795baec body=948 status=ok
// SIG undefined FUN_14795baec(void)

undefined8 * FUN_14795baec(longlong param_1,undefined8 *param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  param_2[2] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  *param_2 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[1] = uVar5;
  uVar5 = DAT_14c8463e8;
  param_2[6] = DAT_14c8463e0;
  param_2[7] = uVar5;
  uVar5 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[4] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[5] = uVar5;
  puVar9 = param_2 + 8;
  param_2[10] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[8] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[9] = uVar5;
  param_2[0xd] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0xb] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0xc] = uVar5;
  uVar5 = DAT_14c8463e8;
  param_2[0x10] = DAT_14c8463e0;
  param_2[0x11] = uVar5;
  uVar5 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[0xe] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[0xf] = uVar5;
  uVar5 = CONCAT44(DAT_14c8463d8._4_4_,(undefined4)DAT_14c8463d8);
  param_2[0x12] = CONCAT44(DAT_14c8463d0._4_4_,(undefined4)DAT_14c8463d0);
  param_2[0x13] = uVar5;
  uVar5 = DAT_14c8463e8;
  param_2[0x14] = DAT_14c8463e0;
  param_2[0x15] = uVar5;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x16] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x17] = uVar5;
  param_2[0x18] = DAT_14c8464f0;
  param_2[0x1b] = DAT_14c8464f0;
  uVar5 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
  param_2[0x19] = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
  param_2[0x1a] = uVar5;
  param_2[0x1c] = 0;
  param_2[0x1d] = 0;
  uVar5 = (**(code **)(**(longlong **)(param_1 + 8) + 0x100))();
  param_2[0x1e] = uVar5;
  if ((DAT_14c7612fc == 0) || ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xcd) & 2) == 0)) {
    param_2[0x1d] = 0;
    *(undefined4 *)(param_2 + 0x1c) = 0;
    param_2[10] = DAT_14c8464f0;
    local_68 = (undefined4)DAT_14c8464e0;
    uStack_64 = DAT_14c8464e0._4_4_;
    uStack_60 = (undefined4)DAT_14c8464e8;
    uStack_5c = DAT_14c8464e8._4_4_;
LAB_14795bc3c:
    *(undefined4 *)puVar9 = local_68;
    *(undefined4 *)((longlong)puVar9 + 4) = uStack_64;
    *(undefined4 *)(puVar9 + 1) = uStack_60;
    *(undefined4 *)((longlong)puVar9 + 0xc) = uStack_5c;
  }
  else {
    FUN_1433fc35c(*(undefined8 *)(param_1 + 8),&local_50,*(longlong *)(param_1 + 0x10) + 0x120,
                  param_2 + 0x1c);
    uVar10 = FUN_14795bea2(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 0x10) + 0x120);
    *(undefined4 *)((longlong)param_2 + 0xe4) = uVar10;
    fVar11 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x138);
    fVar16 = 0.0;
    if (fVar11 <= 0.0) {
LAB_14795be1a:
      *(float *)((longlong)param_2 + 0xec) = fVar16;
    }
    else {
      fVar1 = *(float *)(param_2 + 0x1c);
      if (0.0 < fVar1) {
        fVar2 = *(float *)(*(longlong *)(param_1 + 0x10) + 0x13c);
        fVar16 = fVar11;
        if (fVar2 <= fVar11) {
          fVar16 = fVar2;
        }
        if (fVar16 <= 0.0) {
          fVar11 = fVar11 / fVar1;
          if (1e+06 <= fVar11) {
            fVar11 = 1e+06;
          }
          fVar16 = 0.0;
          if (fVar11 <= 0.0) {
            fVar11 = 0.0;
          }
          if (1.0 < fVar11) {
            fVar16 = 1.0 - 1.0 / (fVar11 * fVar11);
          }
        }
        else {
          if (fVar11 <= fVar1) goto LAB_14795be22;
          fVar16 = fVar11 - fVar16;
          if (fVar16 <= 1.0) {
            fVar16 = 1.0;
          }
          fVar16 = (fVar11 - fVar1) / fVar16;
          if (1.0 <= fVar16) {
            fVar16 = 1.0;
          }
          if (fVar16 <= 0.0) {
            fVar16 = 0.0;
          }
        }
        goto LAB_14795be1a;
      }
    }
LAB_14795be22:
    param_2[10] = local_40;
    *(undefined4 *)puVar9 = local_50;
    *(undefined4 *)((longlong)param_2 + 0x44) = uStack_4c;
    *(undefined4 *)(param_2 + 9) = uStack_48;
    *(undefined4 *)((longlong)param_2 + 0x4c) = uStack_44;
    if (*(int *)(param_1 + 0x84) == 2) {
      puVar9 = param_2 + 0x19;
      FUN_1433fc35c(*(undefined8 *)(param_1 + 8),&local_68,param_1 + 0x48,0);
      param_2[0x18] = local_58;
      *(undefined4 *)(param_2 + 0x16) = local_68;
      *(undefined4 *)((longlong)param_2 + 0xb4) = uStack_64;
      *(undefined4 *)(param_2 + 0x17) = uStack_60;
      *(undefined4 *)((longlong)param_2 + 0xbc) = uStack_5c;
      FUN_1433fc35c(*(undefined8 *)(param_1 + 8),&local_68,param_1 + 0x60,0);
      param_2[0x1b] = local_58;
      goto LAB_14795bc3c;
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x10);
  param_2[0xd] = *(undefined8 *)(lVar3 + 0x130);
  uVar5 = *(undefined8 *)(lVar3 + 0x128);
  param_2[0xb] = *(undefined8 *)(lVar3 + 0x120);
  param_2[0xc] = uVar5;
  uVar5 = DAT_14c8463e8;
  lVar4 = *(longlong *)(lVar3 + 0x60);
  if (lVar4 == 0) {
    param_2[0x10] = DAT_14c8463e0;
    param_2[0x11] = uVar5;
    uVar13 = DAT_14c8463d8._4_4_;
    uVar12 = (undefined4)DAT_14c8463d8;
    uVar10 = DAT_14c8463d0._4_4_;
    *(undefined4 *)(param_2 + 0xe) = (undefined4)DAT_14c8463d0;
    *(undefined4 *)((longlong)param_2 + 0x74) = uVar10;
    *(undefined4 *)(param_2 + 0xf) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x7c) = uVar13;
    iVar7 = 0;
LAB_14795bcf4:
    lVar3 = *(longlong *)(param_1 + 8);
    cVar6 = FUN_146269f19();
    if (cVar6 == '\0') {
      if (iVar7 < *(int *)(lVar3 + 0x138)) {
        puVar8 = (undefined4 *)((longlong)iVar7 * 0x80 + *(longlong *)(lVar3 + 0x130));
        goto LAB_14795bd36;
      }
    }
    else if (iVar7 < *(int *)(lVar3 + 0x1e8)) {
      puVar8 = (undefined4 *)((longlong)iVar7 * 0x110 + *(longlong *)(lVar3 + 0x1e0));
LAB_14795bd36:
      uVar10 = *puVar8;
      uVar12 = puVar8[1];
      uVar13 = puVar8[2];
      uVar14 = puVar8[3];
      uVar15 = puVar8[4];
      uVar17 = puVar8[5];
      uVar18 = puVar8[6];
      uVar19 = puVar8[7];
      uVar20 = puVar8[8];
      uVar21 = puVar8[9];
      uVar22 = puVar8[10];
      uVar23 = puVar8[0xb];
      uVar24 = puVar8[0xc];
      uVar25 = puVar8[0xd];
      goto LAB_14795bca2;
    }
  }
  else {
    uVar10 = *(undefined4 *)(lVar4 + 0x234);
    uVar12 = *(undefined4 *)(lVar4 + 0x238);
    uVar13 = *(undefined4 *)(lVar4 + 0x23c);
    uVar14 = *(undefined4 *)(lVar4 + 0x240);
    uVar15 = *(undefined4 *)(lVar4 + 0x244);
    uVar17 = *(undefined4 *)(lVar4 + 0x248);
    uVar18 = *(undefined4 *)(lVar4 + 0x24c);
    *(undefined4 *)(param_2 + 0xe) = *(undefined4 *)(lVar4 + 0x230);
    *(undefined4 *)((longlong)param_2 + 0x74) = uVar10;
    *(undefined4 *)(param_2 + 0xf) = uVar12;
    *(undefined4 *)((longlong)param_2 + 0x7c) = uVar13;
    *(undefined4 *)(param_2 + 0x10) = uVar14;
    *(undefined4 *)((longlong)param_2 + 0x84) = uVar15;
    *(undefined4 *)(param_2 + 0x11) = uVar17;
    *(undefined4 *)((longlong)param_2 + 0x8c) = uVar18;
    iVar7 = FUN_1478b4d4e(*(undefined8 *)(lVar3 + 0x60));
    if (iVar7 != -1) goto LAB_14795bcf4;
  }
  uVar10 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar17 = 0;
  uVar18 = 0;
  uVar19 = 0x3ff00000;
  uVar20 = 0;
  uVar21 = 0;
  uVar22 = 0;
  uVar23 = 0;
  uVar24 = 0;
  uVar25 = 0;
LAB_14795bca2:
  *(undefined4 *)(param_2 + 4) = uVar10;
  *(undefined4 *)((longlong)param_2 + 0x24) = uVar12;
  *(undefined4 *)(param_2 + 5) = uVar13;
  *(undefined4 *)((longlong)param_2 + 0x2c) = uVar14;
  *(undefined4 *)(param_2 + 6) = uVar15;
  *(undefined4 *)((longlong)param_2 + 0x34) = uVar17;
  *(undefined4 *)(param_2 + 7) = uVar18;
  *(undefined4 *)((longlong)param_2 + 0x3c) = uVar19;
  *(undefined4 *)param_2 = uVar20;
  *(undefined4 *)((longlong)param_2 + 4) = uVar21;
  *(undefined4 *)(param_2 + 1) = uVar22;
  *(undefined4 *)((longlong)param_2 + 0xc) = uVar23;
  param_2[2] = CONCAT44(uVar25,uVar24);
  if ((local_38 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14795bea2 FUN_14795bea2 body=144 status=ok
// SIG undefined FUN_14795bea2(void)

void FUN_14795bea2(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  float fVar2;
  undefined1 auStack_58 [36];
  float local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_146269f19();
  FUN_144a61b4f();
  iVar1 = FUN_1479629ac(param_1,param_2,&local_34,1);
  fVar2 = DAT_14c761324;
  if (iVar1 != -1) {
    if (local_34 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_58);
    }
    fVar2 = SQRT(local_34);
  }
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(fVar2);
  }
  return;
}



// FUNCTION 14795bf48 FUN_14795bf48 body=163 status=ok
// SIG undefined FUN_14795bf48(void)

undefined8 FUN_14795bf48(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  
  *param_3 = 0;
  param_3[1] = 0;
  *(undefined4 *)(param_3 + 2) = 0;
  *(undefined4 *)((longlong)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(undefined4 *)((longlong)param_3 + 0x1c) = 0x3ff00000;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  *(undefined4 *)(param_3 + 8) = 0;
  *(undefined4 *)((longlong)param_3 + 0x44) = 0x3ff00000;
  *(undefined4 *)(param_3 + 9) = 0;
  *(undefined4 *)((longlong)param_3 + 0x4c) = 0x3ff00000;
  param_3[10] = 0x3ff0000000000000;
  param_3[0xb] = 0;
  if (param_2 != -1) {
    cVar1 = FUN_146269f19();
    if (cVar1 == '\0') {
      if (param_2 < *(int *)(param_1 + 0x138)) {
        puVar3 = (undefined8 *)((longlong)param_2 * 0x80 + *(longlong *)(param_1 + 0x130));
        goto LAB_14795bfdf;
      }
    }
    else if (param_2 < *(int *)(param_1 + 0x1e8)) {
      puVar3 = (undefined8 *)((longlong)param_2 * 0x110 + *(longlong *)(param_1 + 0x1e0));
LAB_14795bfdf:
      for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
        *param_3 = *puVar3;
        puVar3 = puVar3 + 1;
        param_3 = param_3 + 1;
      }
      return 1;
    }
  }
  return 0;
}



// FUNCTION 14795bfec FUN_14795bfec body=9 status=ok
// SIG undefined FUN_14795bfec(void)

undefined4 FUN_14795bfec(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x118);
}



// FUNCTION 14795bff6 FUN_14795bff6 body=20 status=ok
// SIG undefined FUN_14795bff6(void)

float FUN_14795bff6(longlong param_1,float param_2)

{
  if (*(float *)(param_1 + 0xa58) <= param_2) {
    param_2 = *(float *)(param_1 + 0xa58);
  }
  if (param_2 <= *(float *)(param_1 + 0xa54)) {
    param_2 = *(float *)(param_1 + 0xa54);
  }
  return param_2;
}



// FUNCTION 14795c00a FUN_14795c00a body=17 status=ok
// SIG undefined FUN_14795c00a(void)

float FUN_14795c00a(longlong param_1)

{
  float fVar1;
  
  fVar1 = *(float *)(param_1 + 0x5ac);
  if (0.5 <= fVar1) {
    fVar1 = 0.5;
  }
  return fVar1;
}



// FUNCTION 14795c01c FUN_14795c01c body=106 status=ok
// SIG undefined FUN_14795c01c(void)

ulonglong FUN_14795c01c(longlong param_1)

{
  float fVar1;
  ulonglong uVar2;
  float fVar3;
  
  fVar3 = *(float *)(param_1 + 0x34);
  fVar1 = (float)(**(code **)(*(longlong *)**(undefined8 **)(param_1 + 0x10) + 0x2c8))();
  fVar3 = fVar3 / fVar1;
  if (*(int *)(*(longlong *)(param_1 + 0x10) + 0xc4) != 0) {
    uVar2 = FUN_1447c7e44(fVar3,0x3f800000);
    return uVar2;
  }
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  return (ulonglong)(uint)fVar3;
}



// FUNCTION 14795c0c4 FUN_14795c0c4 body=124 status=ok
// SIG undefined FUN_14795c0c4(void)

void FUN_14795c0c4(longlong *param_1,longlong param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14796a106(param_1,iVar1);
  }
  lVar2 = *param_1;
  *(longlong *)(lVar2 + (longlong)iVar1 * 0x10) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(undefined8 *)(lVar2 + (longlong)iVar1 * 0x10 + 8) = param_3;
  return;
}



// FUNCTION 14795c140 FUN_14795c140 body=46 status=ok
// SIG undefined FUN_14795c140(void)

undefined8 FUN_14795c140(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  
  if ((longlong)(int)param_1[1] == 0) {
    return 0;
  }
  lVar1 = 0;
  do {
    if (*(longlong *)(*param_1 + lVar1) == param_2) {
      return *(undefined8 *)(*param_1 + 8 + lVar1);
    }
    lVar1 = lVar1 + 0x10;
  } while ((longlong)(int)param_1[1] * 0x10 != lVar1);
  return 0;
}



// FUNCTION 14795c16e FUN_14795c16e body=389 status=ok
// SIG undefined FUN_14795c16e(void)

void FUN_14795c16e(undefined8 *param_1,undefined8 param_2,longlong param_3)

{
  uint uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0xc] = param_3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined8 *)((longlong)param_1 + 0x71) = 0;
  *(undefined8 *)((longlong)param_1 + 0x79) = 0;
  *(undefined1 *)((longlong)param_1 + 0x81) = 1;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f80000000000000;
  param_1[0x13] = &DAT_3f8000003f800000;
  param_1[0x14] = 0x3f80000000000000;
  param_1[0x15] = 0x640000000a;
  *(undefined4 *)(param_1 + 0x16) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0xb4) = 0;
  *(undefined8 *)((longlong)param_1 + 0xbc) = 0;
  *(undefined4 *)((longlong)param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 0x19) = 0xbf800000;
  uVar1 = *(uint *)((longlong)param_1 + 0xcc);
  uVar3 = *(uint *)(param_3 + 0x19c) >> 1 & 1;
  *(uint *)((longlong)param_1 + 0xcc) = uVar1 & 0xfffffffe | uVar3;
  uVar4 = *(uint *)(param_3 + 0x19c) >> 1 & 2;
  *(uint *)((longlong)param_1 + 0xcc) = uVar1 & 0xfffffffc | uVar3 | uVar4;
  *(uint *)((longlong)param_1 + 0xcc) =
       (*(uint *)(param_3 + 0x19c) >> 1 & 4) + (uVar1 & 0xffc00108 | uVar3 | uVar4) + 0x8000;
  *(undefined4 *)(param_1 + 0x1a) = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0x41a00000469c4000;
  *(undefined8 *)((longlong)param_1 + 0x104) = 0x469c4000469c4000;
  *(undefined8 *)((longlong)param_1 + 0x10c) = 0x469c4000469c4000;
  *(undefined8 *)((longlong)param_1 + 0x114) = 0x41a00000;
  uVar2 = DAT_14c8464e8;
  param_1[0x24] = DAT_14c8464e0;
  param_1[0x25] = uVar2;
  param_1[0x26] = DAT_14c8464f0;
  param_1[0x27] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0;
  *(undefined8 *)((longlong)param_1 + 0x15c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x144) = 0;
  *(undefined8 *)((longlong)param_1 + 0x14c) = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x30] = param_2;
  *(undefined1 *)(param_1 + 0x31) = 0;
  DAT_14cacdca8 = DAT_14cacdca8 + 1;
  *(int *)(param_1 + 0x2f) = DAT_14cacdca8;
  return;
}



// FUNCTION 14795c2f4 FUN_14795c2f4 body=196 status=ok
// SIG undefined FUN_14795c2f4(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14795c2f4(longlong *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (*param_1 == 0) {
    uVar6 = 0;
  }
  else if ((((*(byte *)(param_1[0xc] + 0x199) & 4) == 0) ||
           ((uVar6 = 1, (*(byte *)(param_1[0xc] + 0x199) & 8) == 0 &&
            (*(int *)(*param_1 + 0x388) < 1)))) &&
          ((cVar5 = FUN_1478b3d3e(), cVar5 == '\0' ||
           ((uVar6 = 1, DAT_14cacdc90 != 0 && ((*(byte *)(*param_1 + 0x34c) & 1) == 0)))))) {
    fVar1 = *(float *)(param_1 + 0x12);
    fVar2 = *(float *)((longlong)param_1 + 0x9c);
    fVar3 = *(float *)((longlong)param_1 + 0x94);
    fVar4 = *(float *)(param_1 + 0x13);
    fVar7 = (float)FUN_14795c3ca(param_1);
    uVar6 = 1;
    if (fVar7 * fVar3 * fVar4 * fVar1 * fVar2 <= _DAT_14c761300) {
      uVar6 = FUN_147041418(param_1[0xc] + 0x1c8);
      return uVar6;
    }
  }
  return uVar6;
}



// FUNCTION 14795c3b8 FUN_14795c3b8 body=17 status=ok
// SIG undefined FUN_14795c3b8(void)

float FUN_14795c3b8(longlong param_1)

{
  return *(float *)(param_1 + 0x94) * *(float *)(param_1 + 0x98);
}



// FUNCTION 14795c3ca FUN_14795c3ca body=269 status=ok
// SIG undefined FUN_14795c3ca(void)

undefined8 FUN_14795c3ca(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  undefined8 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  fVar7 = 1.0;
  uVar8 = 0;
  if ((DAT_14cb0d2b0 != 0) && (lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0xf50), lVar2 != 0)) {
    if (*param_1 == 0) {
      uVar6 = 0x3f800000;
    }
    else {
      local_38 = *(undefined8 *)(*param_1 + 0x18);
      uVar6 = FUN_147973a00(lVar2,2);
    }
    uVar8 = (undefined4)((ulonglong)uVar6 >> 0x20);
    fVar7 = (float)uVar6;
    if ((param_1[0xc] != 0) && (lVar3 = *(longlong *)(param_1[0xc] + 0x18), lVar3 != 0)) {
      lVar4 = FUN_145992be8();
      iVar1 = *(int *)(lVar4 + 0x38);
      if ((iVar1 <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)(*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) + (longlong)iVar1 * 8) ==
          lVar4 + 0x30)) {
        local_38 = *(undefined8 *)(lVar3 + 0x18);
        fVar5 = (float)FUN_147973a00(lVar2,CONCAT71((int7)(int3)((uint)iVar1 >> 8),1));
        fVar7 = fVar7 * fVar5;
      }
    }
    if (param_1[1] != 0) {
      local_38 = *(undefined8 *)(param_1[1] + 0x18);
      fVar5 = (float)FUN_147973a00(lVar2,0);
      fVar7 = fVar7 * fVar5;
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return CONCAT44(uVar8,fVar7);
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795c4d8 FUN_14795c4d8 body=315 status=ok
// SIG undefined FUN_14795c4d8(void)

void FUN_14795c4d8(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  
  (**(code **)(*param_2 + 0x88))(param_2,param_1,0,0);
  if (*param_1 != 0) {
    uVar2 = FUN_1459e6c6c();
    bVar1 = FUN_144a7ca96(param_1,uVar2);
    if ((*param_1 != 0 & bVar1) == 1) {
      FUN_140bcc8a6(param_2,*param_1 + 0x440,0,0);
    }
  }
  if ((longlong)(int)param_1[4] != 0) {
    lVar5 = (longlong)(int)param_1[4] * 0xb8;
    plVar3 = (longlong *)(param_1[3] + 8);
    do {
      if (*plVar3 != 0) {
        (**(code **)(*param_2 + 0x88))(param_2,plVar3,0,0);
      }
      plVar3 = plVar3 + 0x17;
      lVar5 = lVar5 + -0xb8;
    } while (lVar5 != 0);
  }
  if ((longlong)(int)param_1[0x2e] != 0) {
    lVar5 = (longlong)(int)param_1[0x2e] * 0xb0;
    plVar3 = (longlong *)(param_1[0x2d] + 8);
    do {
      if (*plVar3 != 0) {
        (**(code **)(*param_2 + 0x88))(param_2,plVar3,0,0);
      }
      plVar3 = plVar3 + 0x16;
      lVar5 = lVar5 + -0xb0;
    } while (lVar5 != 0);
  }
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 1,0,0);
  if ((longlong)(int)param_1[0xb] != 0) {
    lVar5 = param_1[10];
    lVar4 = (longlong)(int)param_1[0xb] << 4;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar5,0,0);
      lVar5 = lVar5 + 0x10;
      lVar4 = lVar4 + -0x10;
    } while (lVar4 != 0);
  }
  return;
}



// FUNCTION 14795c614 FUN_14795c614 body=132 status=ok
// SIG undefined FUN_14795c614(void)

float FUN_14795c614(longlong *param_1)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x16);
  if (fVar1 <= 100.0) {
    fVar2 = *(float *)((longlong)param_1 + 0x94) * *(float *)(param_1 + 0x13) *
            *(float *)(param_1 + 0x12) * *(float *)((longlong)param_1 + 0x9c);
    if (fVar2 <= 0.0) {
      if ((*(byte *)((longlong)param_1 + 0xce) & 0x10) != 0) {
        return fVar2 * fVar1 + -100.0 + -1.0;
      }
      fVar1 = fVar1 + -200.0 + -1.0;
    }
    else if ((*param_1 == 0) || (-1 < *(char *)(*param_1 + 0x38))) {
      return fVar1 * fVar2;
    }
  }
  return fVar1;
}



// FUNCTION 14795c698 FUN_14795c698 body=110 status=ok
// SIG undefined FUN_14795c698(void)

undefined8 FUN_14795c698(longlong *param_1,undefined8 param_2)

{
  undefined1 auStack_38 [32];
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (*param_1 != 0) {
    local_18 = *(undefined8 *)(*param_1 + 0x18);
    FUN_1400021e4(&local_18,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_38);
  }
  FUN_140056680(param_2,&DAT_149e43d78);
  if ((local_10 ^ (ulonglong)auStack_38) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14795c708 FUN_14795c708 body=152 status=ok
// SIG undefined FUN_14795c708(void)

void FUN_14795c708(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacdcc0) {
    FUN_144b3d300(&DAT_14cacdcc0);
    if (DAT_14cacdcc0 == -1) {
      DAT_14cacdcb0 = (undefined8 *)0x0;
      DAT_14cacdcb8 = 2;
      FUN_1447bda9e(&DAT_14cacdcb0,2,0);
      *DAT_14cacdcb0 = 0x6174616420746d66;
      atexit((_func_5014 *)&LAB_1433fc524);
      _Init_thread_footer(&DAT_14cacdcc0);
      return;
    }
  }
  return;
}



// FUNCTION 14795c7a0 FUN_14795c7a0 body=179 status=ok
// SIG undefined FUN_14795c7a0(void)

undefined8 * FUN_14795c7a0(void)

{
  undefined8 *puVar1;
  
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cacdcd8) {
    FUN_144b3d300(&DAT_14cacdcd8);
    if (DAT_14cacdcd8 == -1) {
      DAT_14cacdcc8 = (undefined8 *)0x0;
      DAT_14cacdcd0 = 0xc;
      FUN_1447bda9e(&DAT_14cacdcc8,0xc,0);
      puVar1 = DAT_14cacdcc8;
      DAT_14cacdcc8[4] = 0x6469636174736e69;
      puVar1[5] = 0x4c4d586974786562;
      puVar1[2] = 0x7478746c6c62616c;
      puVar1[3] = 0x6c706d7365746f6e;
      *puVar1 = 0x2065756374636166;
      puVar1[1] = 0x5453494c74736c70;
      atexit((_func_5014 *)&LAB_1433fc535);
      _Init_thread_footer(&DAT_14cacdcd8);
    }
  }
  return &DAT_14cacdcc8;
}



// FUNCTION 14795c853 FUN_14795c853 body=121 status=ok
// SIG undefined FUN_14795c853(void)

longlong FUN_14795c853(int param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  
  FUN_14795c708();
  if ((longlong)DAT_14cacdcb8 != 0) {
    lVar1 = (longlong)DAT_14cacdcb8 * 4;
    lVar2 = 0;
    do {
      if (*(int *)(DAT_14cacdcb0 + lVar2) == param_1) {
        return CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      }
      lVar2 = lVar2 + 4;
    } while (lVar1 != lVar2);
  }
  FUN_14795c7a0();
  lVar1 = (longlong)DAT_14cacdcd0;
  if (lVar1 == 0) {
    lVar1 = 0;
  }
  else {
    lVar2 = lVar1 * 4;
    lVar3 = 0;
    do {
      bVar4 = *(int *)(DAT_14cacdcc8 + lVar3) == param_1;
      lVar1 = CONCAT71((int7)((ulonglong)lVar1 >> 8),bVar4);
      if (bVar4) {
        return lVar1;
      }
      bVar4 = lVar2 + -4 != lVar3;
      lVar3 = lVar3 + 4;
    } while (bVar4);
  }
  return lVar1;
}



// FUNCTION 14795c8cc FUN_14795c8cc body=126 status=ok
// SIG undefined FUN_14795c8cc(void)

int * FUN_14795c8cc(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  
  if (param_1 < param_2 && param_1 != (int *)0x0) {
    do {
      if (*param_1 == param_3) {
        return param_1;
      }
      uVar2 = param_1[1];
      if ((ulonglong)uVar2 == 0) {
        return (int *)0x0;
      }
      lVar3 = (ulonglong)uVar2 + (longlong)param_1;
      if ((uVar2 & 1) != 0) {
        if ((int *)(lVar3 + 0x10U) < param_2) {
          cVar1 = FUN_14795c853(*(undefined4 *)(lVar3 + 8));
          if (cVar1 != '\0') goto LAB_14795c90b;
          uVar2 = param_1[1];
        }
        lVar3 = (longlong)param_1 + (ulonglong)(uVar2 + 1 & 0xfffffffe);
      }
LAB_14795c90b:
      param_1 = (int *)(lVar3 + 8);
    } while (param_1 < param_2);
  }
  return (int *)0x0;
}



// FUNCTION 14795c94a FUN_14795c94a body=838 status=ok
// SIG undefined FUN_14795c94a(void)

/* WARNING: Removing unreachable block (ram,0x00014795cb18) */
/* WARNING: Removing unreachable block (ram,0x00014795cc0e) */
/* WARNING: Removing unreachable block (ram,0x00014795cb27) */
/* WARNING: Removing unreachable block (ram,0x00014795cc1d) */

void FUN_14795c94a(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  longlong local_58;
  undefined1 local_50;
  undefined4 local_4c;
  longlong *local_48;
  undefined8 uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14cad8288 != 0) {
    local_48 = (longlong *)0x0;
    uStack_40 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    FUN_140056680(local_88,L"Format");
    FUN_14795ccfa(&local_78,local_88,uVar1);
    uStack_40._0_4_ = 1;
    FUN_146b17dba(&local_48,0);
    *local_48 = 0;
    *local_48 = local_78;
    local_78 = 0;
    *(undefined4 *)(local_48 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_48 + 0xc) = local_70._4_4_;
    local_70 = 0;
    local_48[2] = 0;
    local_48[2] = local_68;
    local_68 = 0;
    *(undefined4 *)(local_48 + 3) = (undefined4)local_60;
    *(undefined4 *)((longlong)local_48 + 0x1c) = local_60._4_4_;
    local_60 = 0;
    local_48[4] = local_58;
    *(undefined1 *)(local_48 + 5) = local_50;
    *(undefined4 *)((longlong)local_48 + 0x2c) = local_4c;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_140056680(local_98,L"Channels");
    FUN_14795cd60(&local_78,local_98,uVar1);
    lVar4 = (longlong)(int)(uint)uStack_40;
    uStack_40._0_4_ = (uint)uStack_40 + 1;
    if (uStack_40._4_4_ < (uint)uStack_40) {
      FUN_146b17dba(&local_48);
    }
    lVar3 = lVar4 * 0x30;
    local_48[lVar4 * 6] = 0;
    local_48[lVar4 * 6] = local_78;
    *(undefined4 *)(local_48 + lVar4 * 6 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_48 + lVar3 + 0xc) = local_70._4_4_;
    local_48[lVar4 * 6 + 2] = 0;
    local_48[lVar4 * 6 + 2] = local_68;
    *(undefined4 *)(local_48 + lVar4 * 6 + 3) = (undefined4)local_60;
    *(undefined4 *)((longlong)local_48 + lVar3 + 0x1c) = local_60._4_4_;
    local_48[lVar4 * 6 + 4] = local_58;
    *(undefined1 *)(local_48 + lVar4 * 6 + 5) = local_50;
    *(undefined4 *)((longlong)local_48 + lVar3 + 0x2c) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    FUN_140056680(local_a8,L"BitsPerSample");
    FUN_14795cd60(&local_78,local_a8,uVar1);
    lVar4 = (longlong)(int)(uint)uStack_40;
    uStack_40._0_4_ = (uint)uStack_40 + 1;
    if (uStack_40._4_4_ < (uint)uStack_40) {
      FUN_146b17dba(&local_48);
    }
    lVar3 = lVar4 * 0x30;
    local_48[lVar4 * 6] = 0;
    local_48[lVar4 * 6] = local_78;
    *(undefined4 *)(local_48 + lVar4 * 6 + 1) = (undefined4)local_70;
    *(undefined4 *)((longlong)local_48 + lVar3 + 0xc) = local_70._4_4_;
    local_48[lVar4 * 6 + 2] = 0;
    local_48[lVar4 * 6 + 2] = local_68;
    *(undefined4 *)(local_48 + lVar4 * 6 + 3) = (undefined4)local_60;
    *(undefined4 *)((longlong)local_48 + lVar3 + 0x1c) = local_60._4_4_;
    local_48[lVar4 * 6 + 4] = local_58;
    *(undefined1 *)(local_48 + lVar4 * 6 + 5) = local_50;
    *(undefined4 *)((longlong)local_48 + lVar3 + 0x2c) = local_4c;
    local_60 = 0;
    local_68 = 0;
    local_70 = 0;
    local_78 = 0;
    plVar2 = (longlong *)FUN_147a89392();
    FUN_1400b22c2(&local_78,"Editor.Usage.WaveImportFailure");
    (**(code **)(*plVar2 + 0xf0))(plVar2,&local_78,&local_48);
    if (local_78 != 0) {
      FUN_1400020a8();
    }
    FUN_146b17e4e(local_48,uStack_40 & 0xffffffff);
    if (local_48 != (longlong *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795cc92 FUN_14795cc92 body=61 status=ok
// SIG undefined FUN_14795cc92(void)

void FUN_14795cc92(undefined8 *param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  if (*(int *)((longlong)param_1 + 0xc) < param_2) {
    FUN_14796a18c(param_1);
    return;
  }
  FUN_1477f0a95(*param_1,*(undefined4 *)(param_1 + 1));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



// FUNCTION 14795ccd0 FUN_14795ccd0 body=41 status=ok
// SIG undefined FUN_14795ccd0(void)

void FUN_14795ccd0(longlong param_1,int param_2)

{
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (param_2 <= *(int *)(param_1 + 0xc)) {
    return;
  }
  FUN_14796a470();
  return;
}



// FUNCTION 14795ccfa FUN_14795ccfa body=102 status=ok
// SIG undefined FUN_14795ccfa(void)

longlong * FUN_14795ccfa(longlong *param_1,longlong *param_2,undefined2 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e061aa,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14795cd60 FUN_14795cd60 body=102 status=ok
// SIG undefined FUN_14795cd60(void)

longlong * FUN_14795cd60(longlong *param_1,longlong *param_2,undefined2 *param_3)

{
  *param_1 = 0;
  *param_1 = *param_2;
  *param_2 = 0;
  *(int *)(param_1 + 1) = (int)param_2[1];
  *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
  param_2[1] = 0;
  FUN_140002266(param_1 + 2,&DAT_149e061aa,*param_3);
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined4 *)((longlong)param_1 + 0x2c) = 4;
  if (*param_2 != 0) {
    FUN_1400020a8();
  }
  return param_1;
}



// FUNCTION 14795cdc6 FUN_14795cdc6 body=525 status=ok
// SIG undefined FUN_14795cdc6(void)

void FUN_14795cdc6(longlong *param_1,void *param_2,undefined8 param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = (int)param_3;
  uVar4 = iVar1 + 0x2c;
  if (-0x2d < iVar1) {
    *(undefined4 *)(param_1 + 1) = 0;
    iVar3 = 0;
    uVar2 = uVar4;
    if (*(uint *)((longlong)param_1 + 0xc) != uVar4) {
      FUN_144893a1c(param_1);
      iVar3 = (int)param_1[1];
      uVar2 = *(uint *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar3 + uVar4;
    if (uVar2 - iVar3 < uVar4) {
      FUN_1447403be(param_1);
    }
    memset((void *)((longlong)iVar3 + *param_1),0,(ulonglong)uVar4);
    *(undefined1 *)*param_1 = 0x52;
    *(undefined1 *)(*param_1 + 1) = 0x49;
    *(undefined1 *)(*param_1 + 2) = 0x46;
    *(undefined1 *)(*param_1 + 3) = 0x46;
    iVar3 = iVar1 + 0x24;
    *(char *)(*param_1 + 4) = (char)iVar3;
    *(char *)(*param_1 + 5) = (char)((uint)iVar3 >> 8);
    *(char *)(*param_1 + 6) = (char)((uint)iVar3 >> 0x10);
    *(char *)(*param_1 + 7) = (char)((uint)iVar3 >> 0x18);
    *(undefined1 *)(*param_1 + 8) = 0x57;
    *(undefined1 *)(*param_1 + 9) = 0x41;
    *(undefined1 *)(*param_1 + 10) = 0x56;
    *(undefined1 *)(*param_1 + 0xb) = 0x45;
    *(undefined1 *)(*param_1 + 0xc) = 0x66;
    *(undefined1 *)(*param_1 + 0xd) = 0x6d;
    *(undefined1 *)(*param_1 + 0xe) = 0x74;
    *(undefined1 *)(*param_1 + 0xf) = 0x20;
    *(undefined1 *)(*param_1 + 0x10) = 0x10;
    *(undefined1 *)(*param_1 + 0x11) = 0;
    *(undefined1 *)(*param_1 + 0x12) = 0;
    *(undefined1 *)(*param_1 + 0x13) = 0;
    *(undefined1 *)(*param_1 + 0x14) = 1;
    *(undefined1 *)(*param_1 + 0x15) = 0;
    *(char *)(*param_1 + 0x16) = (char)param_4;
    *(char *)(*param_1 + 0x17) = (char)((uint)param_4 >> 8);
    *(char *)(*param_1 + 0x18) = (char)param_5;
    *(char *)(*param_1 + 0x19) = (char)((uint)param_5 >> 8);
    *(char *)(*param_1 + 0x1a) = (char)((uint)param_5 >> 0x10);
    uVar4 = param_4 * param_5;
    *(char *)(*param_1 + 0x1b) = (char)((uint)param_5 >> 0x18);
    *(char *)(*param_1 + 0x1c) = (char)uVar4 * '\x02';
    *(char *)(*param_1 + 0x1d) = (char)(uVar4 >> 7);
    *(char *)(*param_1 + 0x1e) = (char)(uVar4 >> 0xf);
    *(char *)(*param_1 + 0x1f) = (char)(uVar4 >> 0x17);
    *(undefined1 *)(*param_1 + 0x20) = 2;
    *(undefined1 *)(*param_1 + 0x21) = 0;
    *(undefined1 *)(*param_1 + 0x22) = 0x10;
    *(undefined1 *)(*param_1 + 0x23) = 0;
    *(undefined1 *)(*param_1 + 0x24) = 100;
    *(undefined1 *)(*param_1 + 0x25) = 0x61;
    *(undefined1 *)(*param_1 + 0x26) = 0x74;
    *(undefined1 *)(*param_1 + 0x27) = 0x61;
    *(char *)(*param_1 + 0x28) = (char)param_3;
    *(char *)(*param_1 + 0x29) = (char)((ulonglong)param_3 >> 8);
    *(char *)(*param_1 + 0x2a) = (char)((ulonglong)param_3 >> 0x10);
    *(char *)(*param_1 + 0x2b) = (char)((ulonglong)param_3 >> 0x18);
    memcpy((void *)(*param_1 + 0x2c),param_2,(longlong)iVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar4);
}



// FUNCTION 14795cfd8 FUN_14795cfd8 body=166 status=ok
// SIG undefined FUN_14795cfd8(void)

undefined8 * FUN_14795cfd8(undefined8 *param_1,ulonglong param_2)

{
  uint uVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_14796a574(&local_28);
  param_1[1] = local_28;
  *param_1 = &PTR_FUN_14a7e86c8;
  param_1[2] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 3) = 0xffffffff;
  if (param_2 != 0) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0xc);
    *(uint *)((longlong)param_1 + 0x14) = *(byte *)(param_2 + 0x30) + 1;
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    *(uint *)(param_1 + 3) = uVar1 >> 0x10 ^ uVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795d080 FUN_14795d080 body=131 status=ok
// SIG undefined FUN_14795d080(void)

longlong * FUN_14795d080(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  plVar3 = (longlong *)FUN_14001cc68(0x30,0x10);
  plVar3[1] = (longlong)&DAT_100000001;
  *plVar3 = (longlong)&PTR_FUN_14a7ec7b0;
  FUN_14795cfd8(plVar3 + 2,param_1 + -0x28);
  *param_2 = (longlong)(plVar3 + 2);
  param_2[1] = (longlong)plVar3;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
    UNLOCK();
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
  return param_2;
}



// FUNCTION 14795d104 FUN_14795d104 body=141 status=ok
// SIG undefined FUN_14795d104(void)

undefined4 FUN_14795d104(byte param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  
  pcVar2 = (char *)FUN_1461a8840(0,0);
  if (((pcVar2 != (char *)0x0) && (*pcVar2 == '\x01')) &&
     (*(int *)(pcVar2 + 0x10) != *(int *)(pcVar2 + 0x3c))) {
    pcVar4 = pcVar2 + 0x40;
    if (*(char **)(pcVar2 + 0x48) != (char *)0x0) {
      pcVar4 = *(char **)(pcVar2 + 0x48);
    }
    iVar3 = *(int *)(pcVar4 + (ulonglong)(*(int *)(pcVar2 + 0x50) - 1U & (uint)param_1) * 4);
    if (iVar3 != -1) {
      do {
        lVar1 = *(longlong *)(pcVar2 + 8) + (longlong)iVar3 * 0x10;
        if (*(byte *)(*(longlong *)(pcVar2 + 8) + (longlong)iVar3 * 0x10) == param_1) {
          if ((undefined4 *)(lVar1 + 4) == (undefined4 *)0x0 || lVar1 == 0) {
            return 0xbf800000;
          }
          return *(undefined4 *)(lVar1 + 4);
        }
        iVar3 = *(int *)(lVar1 + 8);
      } while (iVar3 != -1);
    }
  }
  return 0xbf800000;
}



// FUNCTION 14795d192 FUN_14795d192 body=3 status=ok
// SIG undefined FUN_14795d192(void)

undefined8 FUN_14795d192(void)

{
  return 0;
}



// FUNCTION 14795d196 FUN_14795d196 body=6 status=ok
// SIG undefined FUN_14795d196(void)

undefined8 FUN_14795d196(void)

{
  return 0xffffffff;
}



// FUNCTION 14795d19c FUN_14795d19c body=193 status=ok
// SIG undefined FUN_14795d19c(void)

undefined8 * FUN_14795d19c(undefined8 *param_1)

{
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_LAB_14a7e8f80;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x61) = 0;
  *(undefined8 *)((longlong)param_1 + 0x69) = 0;
  FUN_145a3da42(param_1 + 0x12);
  param_1[0x17] = 0;
  param_1[0x18] = 0xffffffff;
  *(undefined4 *)(param_1 + 0x19) = 0xffffffff;
  QueryPerformanceCounter(&local_20);
  *(LARGE_INTEGER *)(param_1 + 0x10) = local_20;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795d25e FUN_14795d25e body=25 status=ok
// SIG undefined FUN_14795d25e(void)

void FUN_14795d25e(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_14a7e9050;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



// FUNCTION 14795d278 FUN_14795d278 body=124 status=ok
// SIG undefined FUN_14795d278(void)

void FUN_14795d278(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_LAB_14a7e8f80;
  lVar3 = param_1[0x17];
  if (lVar3 != 0) {
    (**(code **)(lVar3 + -0x10))(lVar3 + -0x10);
  }
  FUN_141289612(param_1 + 0x12);
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a7e9050;
  plVar4 = (longlong *)param_1[3];
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
                    /* WARNING: Could not recover jumptable at 0x00014795d2e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar4 + 0x10))(plVar4);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14795d2f4 FUN_14795d2f4 body=66 status=ok
// SIG undefined FUN_14795d2f4(void)

void FUN_14795d2f4(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a7e9050;
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
                    /* WARNING: Could not recover jumptable at 0x00014795d32b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar3 + 0x10))(plVar3);
        return;
      }
    }
  }
  return;
}



// FUNCTION 14795d336 FUN_14795d336 body=58 status=ok
// SIG undefined FUN_14795d336(void)

uint FUN_14795d336(longlong param_1,void *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0x30) - *(uint *)(param_1 + 0x34);
  if (param_3 < uVar1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    memcpy(param_2,(void *)((ulonglong)*(uint *)(param_1 + 0x34) + *(longlong *)(param_1 + 0x28)),
           (ulonglong)uVar1);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar1;
  }
  return uVar1;
}



// FUNCTION 14795d370 FUN_14795d370 body=167 status=ok
// SIG undefined FUN_14795d370(void)

void FUN_14795d370(longlong param_1,uint param_2)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  lVar4 = *(longlong *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar6 = *(ulonglong *)(lVar4 + 0x10);
    plVar5 = *(longlong **)(lVar4 + 0x18);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if ((uVar6 != 0) && (piVar1 = (int *)(uVar6 + 0x20), 0 < (longlong)*piVar1)) {
      plVar2 = (longlong *)(uVar6 + 0x18);
      uVar6 = 0xffffffff;
      uVar7 = 0;
      do {
        uVar3 = *(uint *)(*(longlong *)(*plVar2 + uVar7 * 8) + 8);
        if (uVar3 != 0xffffffff) {
          if (param_2 < uVar3) break;
          uVar6 = uVar7 & 0xffffffff;
        }
        uVar7 = uVar7 + 1;
      } while ((longlong)*piVar1 != uVar7);
      if (-1 < (int)(uint)uVar6) {
        LOCK();
        uVar3 = *(uint *)(param_1 + 0xc0);
        *(uint *)(param_1 + 0xc0) = (uint)uVar6;
        uVar6 = (ulonglong)uVar3;
        UNLOCK();
        *(undefined4 *)(param_1 + 0xc4) = 0;
        *(uint *)(param_1 + 200) = param_2;
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar2 = plVar5 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*plVar5)(plVar5,param_2,uVar6);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00014795d40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar5 + 0x10))(plVar5);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 14795d418 FUN_14795d418 body=223 status=ok
// SIG undefined FUN_14795d418(void)

void FUN_14795d418(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(param_3 + 0xc) != 0) {
    uVar5 = 0;
    do {
      iVar2 = FUN_1433fd640(param_1);
      if (iVar2 < 0) {
        uVar6 = *(int *)(param_3 + 0xc) - uVar5;
        if (uVar6 == 0) goto LAB_14795d4dd;
        memset((void *)((ulonglong)uVar5 + param_2),0,(ulonglong)uVar6);
      }
      else {
        iVar2 = iVar2 * (uint)*(byte *)(param_1 + 0x48);
        uVar4 = *(uint *)(param_1 + 0x40);
        uVar6 = iVar2 + *(int *)(param_1 + 0x44);
        iVar1 = uVar4 - *(int *)(param_1 + 0x44);
        if (uVar6 <= uVar4) {
          iVar1 = iVar2;
        }
        if (uVar6 < uVar4) {
          uVar4 = uVar6;
        }
        *(uint *)(param_1 + 0x44) = uVar4;
        *(int *)(param_1 + 0x68) = iVar1 * 2;
        uVar3 = *(int *)(param_3 + 0xc) - uVar5;
        uVar4 = *(uint *)(param_1 + 0x6c);
        uVar6 = iVar1 * 2 - uVar4;
        if (uVar3 < uVar6) {
          uVar6 = uVar3;
        }
        uVar3 = *(int *)(param_1 + 0x60) - uVar4;
        if (uVar3 <= uVar6) {
          uVar6 = uVar3;
        }
        if (uVar6 == 0) {
LAB_14795d4dd:
          uVar6 = 0;
        }
        else {
          memcpy((void *)((ulonglong)uVar5 + param_2),
                 (void *)((ulonglong)uVar4 + *(longlong *)(param_1 + 0x58)),(ulonglong)uVar6);
          uVar4 = *(int *)(param_1 + 0x6c) + uVar6;
          *(uint *)(param_1 + 0x6c) = uVar4;
          if (*(uint *)(param_1 + 0x68) <= uVar4) {
            *(undefined8 *)(param_1 + 0x68) = 0;
          }
        }
      }
      uVar5 = uVar5 + uVar6;
    } while (uVar5 < *(uint *)(param_3 + 0xc));
  }
  return;
}



// FUNCTION 14795d4f8 FUN_14795d4f8 body=353 status=ok
// SIG undefined FUN_14795d4f8(void)

undefined8 FUN_14795d4f8(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  uint local_38;
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar8 = 0;
  if ((param_1[2] != 0) && (param_1[2] == *param_2)) {
    *(undefined4 *)((longlong)param_1 + 0x74) = 0;
    local_34 = 0;
    lVar7 = FUN_14795d65a(param_1,param_1 + 2,0);
    lVar3 = *(longlong *)(*param_2 + 0x10);
    plVar4 = *(longlong **)(*param_2 + 0x18);
    if (plVar4 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
      UNLOCK();
    }
    iVar9 = *(int *)((longlong)param_1 + 0x74);
    if (((longlong)iVar9 < 0) || (*(int *)(lVar3 + 0x20) <= iVar9)) {
      bVar10 = false;
    }
    else {
      bVar10 = *(int *)(*(longlong *)(*(longlong *)(lVar3 + 0x18) + (longlong)iVar9 * 8) + 8) != -1;
    }
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
    if (bVar10) {
      local_38 = 0;
      uVar8 = FUN_14795d740(param_1);
      uVar5 = local_34;
      cVar6 = FUN_14371c0be(lVar7,local_34,&local_38,uVar8);
      if (cVar6 != '\0') {
        local_34 = uVar5 - local_38;
        lVar7 = lVar7 + (ulonglong)local_38;
      }
    }
    uVar5 = local_34;
    *(undefined1 *)(param_1 + 4) = 1;
    if (lVar7 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)(*param_1 + 8))(param_1,lVar7,local_34,param_3);
      if (uVar5 <= *(uint *)((longlong)param_1 + 0x34)) {
        iVar9 = *(int *)((longlong)param_1 + 0x74) + 1;
        *(int *)((longlong)param_1 + 0x74) = iVar9;
        param_1[5] = 0;
        *(undefined4 *)(param_1 + 6) = 0;
        *(int *)((longlong)param_1 + 0x3c) = iVar9;
        *(uint *)(param_1 + 7) = (int)param_1[7] - uVar5;
      }
    }
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795d65a FUN_14795d65a body=229 status=ok
// SIG undefined FUN_14795d65a(void)

undefined8 FUN_14795d65a(longlong param_1,longlong *param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined4 local_50;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*param_2 == 0) || (*(uint *)(*(longlong *)(*param_2 + 0x10) + 0x20) <= param_3)) {
    *param_4 = 0;
    local_58 = 0;
  }
  else if (param_3 == 0) {
    FUN_147d41890(&local_58,param_2,1);
    *param_4 = local_50;
  }
  else {
    uVar2 = FUN_140083894();
    plVar3 = (longlong *)FUN_147a355e6(uVar2);
    local_60 = 1;
    local_68 = 0;
    (**(code **)(*plVar3 + 0xb0))(plVar3,&local_58,param_2,param_3);
    param_1 = param_1 + 0x90;
    FUN_1434a218e(param_1,&local_58);
    FUN_141289612(&local_58);
    uVar1 = FUN_147a359ec(param_1);
    *param_4 = uVar1;
    local_58 = FUN_147a359e8(param_1);
  }
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return local_58;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795d740 FUN_14795d740 body=116 status=ok
// SIG undefined FUN_14795d740(void)

undefined8 * FUN_14795d740(longlong param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(param_1 + 0xb8);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x20,0x10);
    *puVar2 = FUN_14796a727;
    puVar2[1] = 0;
    puVar2 = puVar2 + 2;
    FUN_147d5ee4e(puVar2,0);
    lVar1 = *(longlong *)(param_1 + 0xb8);
    *(undefined8 **)(param_1 + 0xb8) = puVar2;
    if (lVar1 != 0) {
      (**(code **)(lVar1 + -0x10))(lVar1 + -0x10);
      puVar2 = *(undefined8 **)(param_1 + 0xb8);
    }
  }
  return puVar2;
}



// FUNCTION 14795d7b4 FUN_14795d7b4 body=4 status=ok
// SIG undefined FUN_14795d7b4(void)

undefined1 FUN_14795d7b4(longlong param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



// FUNCTION 14795d7b8 FUN_14795d7b8 body=95 status=ok
// SIG undefined FUN_14795d7b8(void)

longlong * FUN_14795d7b8(longlong *param_1,longlong param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = param_3;
  FUN_1412feae2();
  plVar1 = (longlong *)
           (**(code **)(DAT_14cacdd90 + 0x18))
                     (&DAT_14cacdd90,*(undefined8 *)(*(longlong *)(param_2 + 0x3e0) + 0x8c));
  if (plVar1 == (longlong *)0x0) {
    lVar2 = 0;
  }
  else {
    lVar2 = (**(code **)(*plVar1 + 8))(plVar1);
  }
  param_1[1] = lVar2;
  return param_1;
}



// FUNCTION 14795d817 FUN_14795d817 body=70 status=ok
// SIG undefined FUN_14795d817(void)

bool FUN_14795d817(void)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  
  lVar1 = DAT_14cacdd88;
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0xc60) == 0x40000002) {
    uVar3 = 0;
  }
  else {
    bVar2 = FUN_144a61b4f();
    uVar3 = (ulonglong)(bVar2 ^ 1);
  }
  return *(int *)(lVar1 + uVar3 * 4) != 0;
}



// FUNCTION 14795d85e FUN_14795d85e body=243 status=ok
// SIG undefined FUN_14795d85e(void)

undefined8 FUN_14795d85e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    FUN_1436fb532(param_2,&local_38);
    plVar2 = local_30;
    plVar1 = param_1 + 2;
    if (plVar1 != &local_38) {
      param_1[2] = local_38;
      local_38 = 0;
      plVar4 = (longlong *)param_1[3];
      if (local_30 != plVar4) {
        local_30 = (longlong *)0x0;
        param_1[3] = (longlong)plVar2;
        if (plVar4 != (longlong *)0x0) {
          LOCK();
          plVar2 = plVar4 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plVar4)(plVar4);
            LOCK();
            piVar3 = (int *)((longlong)plVar4 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar4 + 0x10))(plVar4);
            }
          }
        }
      }
    }
    plVar2 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar4 = local_30 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar3 = (int *)((longlong)plVar2 + 0xc);
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (*piVar3 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    if (*plVar1 != 0) {
      uVar5 = (**(code **)(*param_1 + 0x70))(param_1,plVar1,param_3);
      goto LAB_14795d931;
    }
  }
  uVar5 = 0;
LAB_14795d931:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795d952 FUN_14795d952 body=5 status=ok
// SIG undefined FUN_14795d952(void)

longlong FUN_14795d952(longlong param_1)

{
  return param_1 + 8;
}



// FUNCTION 14795d958 FUN_14795d958 body=4 status=ok
// SIG undefined FUN_14795d958(void)

undefined4 FUN_14795d958(longlong param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



// FUNCTION 14795d95c FUN_14795d95c body=10 status=ok
// SIG undefined FUN_14795d95c(void)

undefined8 * FUN_14795d95c(undefined8 *param_1,undefined8 *param_2)

{
  *param_2 = *param_1;
  return param_2;
}



// FUNCTION 14795d966 FUN_14795d966 body=432 status=ok
// SIG undefined FUN_14795d966(void)

void FUN_14795d966(longlong param_1,longlong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  ulonglong *puVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  undefined1 auStack_98 [40];
  longlong *local_70;
  int local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_64 = 0;
  if ((*(byte *)(param_2 + 5) & 4) != 0) {
    local_64 = *(int *)(param_1 + 0x10);
  }
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_64,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_64);
    }
  }
  else {
    local_64 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  (**(code **)(*param_2 + 0x160))(param_2,param_1);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_70 = (longlong *)(param_1 + 8);
    FUN_1478a769e(local_70,local_64);
    if (0 < local_64) {
      iVar6 = 0;
      iVar5 = local_64;
      do {
        puVar4 = (undefined8 *)FUN_14001cc68(0x40,0x10);
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[6] = 0;
        *(undefined4 *)(puVar4 + 1) = 0xffffffff;
        puVar4[4] = 0;
        *(undefined4 *)((longlong)puVar4 + 0x1d) = 0xffffffff;
        *(undefined1 *)((longlong)puVar4 + 0x21) = 0xff;
        puVar4[5] = DAT_14c845dbc;
        *(undefined4 *)(puVar4 + 6) = DAT_14c845dc4;
        puVar4[7] = 0;
        iVar2 = *(int *)(param_1 + 0x10);
        *(uint *)(param_1 + 0x10) = iVar2 + 1U;
        if (*(uint *)(param_1 + 0x14) < iVar2 + 1U) {
          FUN_1456bd870(local_70,iVar2);
          iVar5 = local_64;
        }
        *(undefined8 **)(*local_70 + (longlong)iVar2 * 8) = puVar4;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
    }
  }
  if (0 < *(int *)(param_1 + 0x10)) {
    uVar7 = 0;
    do {
      FUN_1436fdfb0(*(undefined8 *)(*(longlong *)(param_1 + 8) + uVar7 * 8),param_2,param_3,
                    uVar7 & 0xffffffff);
      uVar7 = uVar7 + 1;
    } while ((longlong)uVar7 < (longlong)*(int *)(param_1 + 0x10));
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14795db18 FUN_14795db18 body=915 status=ok
// SIG undefined FUN_14795db18(void)

double * FUN_14795db18(double *param_1,longlong param_2,int param_3,double *param_4,double param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 *puVar8;
  double *pdVar9;
  longlong lVar10;
  longlong lVar11;
  double *pdVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  float fVar20;
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
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined1 auStack_168 [32];
  double local_148 [13];
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_168;
  uVar22 = 0;
  uVar23 = 0x3ff00000;
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  uVar27 = 0x3ff00000;
  uVar28 = 0;
  uVar29 = 0x3ff00000;
  if (param_3 == -1) {
LAB_14795dbb6:
    uVar30 = 0;
    uVar31 = 0;
    uVar32 = 0;
    uVar33 = 0;
    uVar34 = 0;
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0x3ff00000;
    dVar13 = 0.0;
    dVar14 = 0.0;
    dVar15 = 0.0;
    dVar16 = 0.0;
  }
  else {
    cVar7 = FUN_146269f19();
    if (cVar7 == '\0') {
      if (param_3 < *(int *)(param_2 + 0x138)) {
        puVar8 = (undefined4 *)((longlong)param_3 * 0x80 + *(longlong *)(param_2 + 0x130));
        goto LAB_14795de21;
      }
      goto LAB_14795dbb6;
    }
    if (*(int *)(param_2 + 0x1e8) <= param_3) goto LAB_14795dbb6;
    puVar8 = (undefined4 *)((longlong)param_3 * 0x110 + *(longlong *)(param_2 + 0x1e0));
LAB_14795de21:
    uVar30 = *puVar8;
    uVar31 = puVar8[1];
    uVar32 = puVar8[2];
    uVar33 = puVar8[3];
    uVar34 = puVar8[4];
    uVar35 = puVar8[5];
    uVar36 = puVar8[6];
    uVar37 = puVar8[7];
    dVar13 = *(double *)(puVar8 + 8);
    dVar14 = *(double *)(puVar8 + 10);
    dVar15 = *(double *)(puVar8 + 0xc);
    dVar16 = *(double *)(puVar8 + 0xe);
    uVar26 = puVar8[0x10];
    uVar27 = puVar8[0x11];
    uVar28 = puVar8[0x12];
    uVar29 = puVar8[0x13];
    uVar22 = puVar8[0x14];
    uVar23 = puVar8[0x15];
    uVar24 = puVar8[0x16];
    uVar25 = puVar8[0x17];
  }
  pdVar9 = param_4;
  pdVar12 = local_148;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  dVar3 = param_4[4];
  dVar4 = param_4[5];
  dVar21 = param_4[6];
  dVar18 = dVar21 - dVar15;
  dVar17 = dVar3 - dVar13;
  dVar19 = dVar4 - dVar14;
  dVar1 = SQRT(dVar18 * dVar18 + dVar17 * dVar17 + dVar19 * dVar19);
  dVar5 = DAT_14c8464f0;
  dVar6 = DAT_14c8464e8;
  dVar2 = DAT_14c8464e0;
  if (9.99999993922529e-09 < dVar1) {
    dVar2 = 1.0 / dVar1;
    dVar5 = dVar18 * dVar2;
    dVar6 = dVar19 * dVar2;
    dVar2 = dVar2 * dVar17;
  }
  dVar18 = dVar1;
  if (param_3 == -1) goto LAB_14795dc8b;
  cVar7 = FUN_146269f19();
  if (cVar7 == '\0') {
    lVar11 = (longlong)param_3 * 0x80;
    lVar10 = *(longlong *)(param_2 + 0x130) + lVar11;
    if ((*(byte *)(*(longlong *)(param_2 + 0x130) + 0x78 + lVar11) & 1) == 0) goto LAB_14795de57;
    dVar15 = *(double *)(lVar10 + 0x70);
    pdVar9 = (double *)(lVar10 + 0x60);
  }
  else {
    lVar11 = (longlong)param_3 * 0x110;
    lVar10 = *(longlong *)(param_2 + 0x1e0) + lVar11;
    if ((*(byte *)(*(longlong *)(param_2 + 0x1e0) + 0x90 + lVar11) & 1) == 0) {
LAB_14795de57:
      dVar15 = *(double *)(lVar10 + 0x30);
      pdVar9 = (double *)(lVar10 + 0x20);
    }
    else {
      dVar15 = *(double *)(lVar10 + 0x88);
      pdVar9 = (double *)(lVar10 + 0x78);
    }
  }
  dVar13 = *pdVar9;
  dVar14 = pdVar9[1];
  dVar21 = dVar21 - dVar15;
  dVar3 = dVar3 - dVar13;
  dVar4 = dVar4 - dVar14;
  dVar18 = SQRT(dVar21 * dVar21 + dVar3 * dVar3 + dVar4 * dVar4);
  dVar16 = 0.0;
LAB_14795dc8b:
  if (((*(byte *)((longlong)param_5 + 0xc0) & 4) != 0) ||
     (dVar21 = 0.0,
     (*(byte *)((longlong)param_5 + 0xc0) & 1) != 0 && *(char *)((longlong)param_5 + 9) == '\0')) {
    fVar20 = (float)(dVar18 - *(double *)((longlong)param_5 + 0x10));
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    dVar21 = (double)fVar20;
  }
  *param_1 = dVar2;
  param_1[1] = dVar6;
  param_1[2] = dVar5;
  param_1[3] = dVar21;
  param_1[4] = dVar18;
  param_1[5] = dVar1;
  *(undefined4 *)(param_1 + 6) = uVar30;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar31;
  *(undefined4 *)(param_1 + 7) = uVar32;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar33;
  *(undefined4 *)(param_1 + 8) = uVar34;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar35;
  *(undefined4 *)(param_1 + 9) = uVar36;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uVar37;
  param_1[10] = dVar13;
  param_1[0xb] = dVar14;
  param_1[0xc] = dVar15;
  param_1[0xd] = dVar16;
  *(undefined4 *)(param_1 + 0xe) = uVar26;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar27;
  *(undefined4 *)(param_1 + 0xf) = uVar28;
  *(undefined4 *)((longlong)param_1 + 0x7c) = uVar29;
  *(undefined4 *)(param_1 + 0x10) = uVar22;
  *(undefined4 *)((longlong)param_1 + 0x84) = uVar23;
  *(undefined4 *)(param_1 + 0x11) = uVar24;
  *(undefined4 *)((longlong)param_1 + 0x8c) = uVar25;
  pdVar9 = local_148;
  pdVar12 = param_1 + 0x12;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *pdVar12 = *pdVar9;
    pdVar9 = pdVar9 + 1;
    pdVar12 = pdVar12 + 1;
  }
  param_1[0x1e] = param_5;
  if ((local_e0 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14795deac FUN_14795deac body=1451 status=ok
// SIG undefined FUN_14795deac(void)

undefined8 * FUN_14795deac(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 auStack_78 [32];
  LARGE_INTEGER local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = &PTR_LAB_14a7ea940;
  param_1[1] = 0;
  param_1[2] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 3),4000);
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 2;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0;
  *(undefined8 *)((longlong)param_1 + 0x5c) = 0;
  *(undefined4 *)((longlong)param_1 + 100) = 0;
  param_1[0xd] = 2;
  param_1[0xe] = 0x20;
  param_1[0xf] = 0x4000000bb80;
  param_1[0x10] = 2;
  param_1[0x11] = 0x12c000000000;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  memset(param_1 + 0x13,0,0xb4);
  *(undefined1 **)((longlong)param_1 + 0x14c) = &DAT_3f8000003f800000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *(undefined1 *)(param_1 + 0x2d) = 0;
  *(undefined4 *)((longlong)param_1 + 0x16c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2e) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x174) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x2f) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x17c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x184) = 0;
  *(undefined4 *)((longlong)param_1 + 0x18c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x32) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x33) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x19c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1a4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x35) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1ac) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x36) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1b4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x37) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1bc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1c4) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x39) = 0x3f800000;
  *(undefined4 *)((longlong)param_1 + 0x1cc) = 0x3f800000;
  QueryPerformanceCounter(&local_58);
  param_1[0x3a] = (double)local_58.QuadPart * DAT_14c83f420 + 16777216.0;
  *(undefined4 *)(param_1 + 0x3b) = 1;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  uVar1 = FUN_1459586ea();
  FUN_14112365e(param_1 + 0x43,uVar1);
  param_1[0x5b] = &PTR_LAB_149e668b0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  FUN_1405bceb4(param_1 + 0x5b);
  param_1[0x43] = &PTR_FUN_14a7ec160;
  param_1[0x5b] = &PTR_LAB_14a7ec170;
  param_1[0x61] = 0;
  *(undefined4 *)(param_1 + 0x62) = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  *(undefined8 *)((longlong)param_1 + 0x314) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x31c) = 0;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x66) = 0;
  param_1[0x6b] = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  *(undefined8 *)((longlong)param_1 + 0x364) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x36c) = 0;
  param_1[0x6f] = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  param_1[0x75] = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3b4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x3bc) = 0;
  param_1[0x79] = 0;
  *(undefined4 *)(param_1 + 0x7a) = 0;
  param_1[0x81] = 0;
  *(undefined4 *)(param_1 + 0x82) = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  *(undefined8 *)((longlong)param_1 + 0x414) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x41c) = 0;
  param_1[0x85] = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  param_1[0x8b] = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined8 *)((longlong)param_1 + 0x464) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x46c) = 0;
  param_1[0x8f] = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  *(undefined4 *)(param_1 + 0x93) = 0x3f800000;
  param_1[0x98] = 0;
  *(undefined4 *)(param_1 + 0x99) = 0;
  *(undefined8 *)((longlong)param_1 + 0x49c) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4a4) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4ac) = 0;
  *(undefined8 *)((longlong)param_1 + 0x4cc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x4d4) = 0;
  param_1[0x9c] = 0;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 1;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0x400000003f000000;
  *(undefined4 *)(param_1 + 0xa2) = 0;
  param_1[0xa3] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa4) = 1;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0x400000003f000000;
  *(undefined1 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)((longlong)param_1 + 0x544) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xa9) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x54c) = 0x469c4000;
  *(undefined4 *)(param_1 + 0xaa) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x554) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xab) = 0x3f000000;
  *(undefined4 *)((longlong)param_1 + 0x55c) = 0x469c4000;
  *(undefined4 *)(param_1 + 0xac) = 0x3f000000;
  *(undefined2 *)(param_1 + 0xb2) = 0;
  *(undefined1 *)(param_1 + 0xb1) = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  *(undefined1 *)((longlong)param_1 + 0x592) = 1;
  *(undefined1 *)(param_1 + 0xb3) = 0;
  *(byte *)((longlong)param_1 + 0x599) = *(byte *)((longlong)param_1 + 0x599) & 0xf8;
  param_1[0xb4] = 0;
  *(byte *)(param_1 + 0xb5) = *(byte *)(param_1 + 0xb5) & 0xfe;
  *(undefined4 *)((longlong)param_1 + 0x5ac) = 0;
  *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) & 0xf8 | 2;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xb7] = 0;
  param_1[0xb8] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbd));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0xbd),4000);
  param_1[0xca] = 0;
  *(undefined4 *)(param_1 + 0xcb) = 0;
  param_1[0xc2] = 0;
  param_1[0xc3] = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  param_1[0xc6] = 0;
  param_1[199] = 0;
  *(undefined8 *)((longlong)param_1 + 0x65c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x664) = 0;
  param_1[0xce] = 0;
  *(undefined4 *)(param_1 + 0xcf) = 0;
  param_1[0xd6] = 0;
  *(undefined4 *)(param_1 + 0xd7) = 0;
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  param_1[0xd3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6bc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x6c4) = 0;
  param_1[0xda] = 0;
  *(undefined4 *)(param_1 + 0xdb) = 0;
  puVar2 = (undefined8 *)FUN_14001cc68(0x10,0x10);
  *puVar2 = 0;
  param_1[0xdd] = puVar2;
  param_1[0xdc] = puVar2;
  param_1[0xe5] = 0;
  *(undefined4 *)(param_1 + 0xe6) = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  *(undefined8 *)((longlong)param_1 + 0x734) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x73c) = 0;
  param_1[0xe9] = 0;
  *(undefined4 *)(param_1 + 0xea) = 0;
  param_1[0xef] = 0;
  *(undefined4 *)(param_1 + 0xf0) = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  *(undefined8 *)((longlong)param_1 + 0x784) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x78c) = 0;
  param_1[0xf3] = 0;
  *(undefined4 *)(param_1 + 0xf4) = 0;
  param_1[0xf9] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  param_1[0xf5] = 0;
  param_1[0xf6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x7d4) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x7dc) = 0;
  param_1[0xfd] = 0;
  *(undefined4 *)(param_1 + 0xfe) = 0;
  param_1[0x103] = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  param_1[0xff] = 0;
  param_1[0x100] = 0;
  *(undefined8 *)((longlong)param_1 + 0x824) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x82c) = 0;
  param_1[0x107] = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  param_1[0x10f] = 0;
  *(undefined4 *)(param_1 + 0x110) = 0;
  param_1[0x10b] = 0;
  param_1[0x10c] = 0;
  param_1[0x109] = 0;
  param_1[0x10a] = 0;
  *(undefined8 *)((longlong)param_1 + 0x884) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x88c) = 0;
  param_1[0x113] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  FUN_147d31ba8(param_1 + 0x115,param_1);
  param_1[0x148] = 0;
  param_1[0x149] = 0;
  *(undefined4 *)(param_1 + 0x14a) = 0;
  *(undefined8 *)((longlong)param_1 + 0xa54) = 0x400000003ecccccd;
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795e458 FUN_14795e458 body=1313 status=ok
// SIG undefined FUN_14795e458(void)

void FUN_14795e458(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_LAB_14a7ea940;
  if (param_1[0x148] != 0) {
    FUN_1400020a8();
  }
  FUN_147d31c8a(param_1 + 0x115);
  *(undefined4 *)(param_1 + 0x114) = 0;
  if (param_1[0x113] != 0) {
    FUN_1400020a8();
  }
  FUN_140105116(param_1 + 0x10b);
  if (param_1[0x109] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x108) = 0;
  if (param_1[0x107] != 0) {
    FUN_1400020a8();
  }
  FUN_147964f6e(param_1 + 0xff);
  *(undefined4 *)(param_1 + 0xfe) = 0;
  if (param_1[0xfd] != 0) {
    FUN_1400020a8();
  }
  FUN_147964ffc(param_1 + 0xf5);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  if (param_1[0xf3] != 0) {
    FUN_1400020a8();
  }
  FUN_1479651b2(param_1 + 0xeb);
  *(undefined4 *)(param_1 + 0xea) = 0;
  if (param_1[0xe9] != 0) {
    FUN_1400020a8();
  }
  FUN_147965240(param_1 + 0xe1);
  if (param_1[0xdf] != 0) goto LAB_14795e583;
  while ((undefined8 *)param_1[0xdd] != (undefined8 *)0x0) {
    param_1[0xdd] = *(undefined8 *)param_1[0xdd];
LAB_14795e583:
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xdb) = 0;
  if (param_1[0xda] != 0) {
    FUN_1400020a8();
  }
  FUN_14796a7e2(param_1 + 0xd2);
  if (param_1[0xd0] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xcf) = 0;
  if (param_1[0xce] != 0) {
    FUN_1400020a8();
  }
  FUN_1479653ae(param_1 + 0xc6);
  if (param_1[0xc4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc2] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbd));
  if (param_1[0xbb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb7] != 0) {
    FUN_1400020a8();
  }
  FUN_1478b62f0(param_1 + 0xa3);
  *(undefined4 *)(param_1 + 0x9d) = 0;
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  FUN_147965466(param_1 + 0x94);
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8f] != 0) {
    FUN_1400020a8();
  }
  FUN_1479654f4(param_1 + 0x87);
  *(undefined4 *)(param_1 + 0x86) = 0;
  if (param_1[0x85] != 0) {
    FUN_1400020a8();
  }
  FUN_147965714(param_1 + 0x7d);
  *(undefined4 *)(param_1 + 0x7a) = 0;
  if (param_1[0x79] != 0) {
    FUN_1400020a8();
  }
  FUN_1479657a2(param_1 + 0x71);
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (param_1[0x6f] != 0) {
    FUN_1400020a8();
  }
  FUN_147965830(param_1 + 0x67);
  *(undefined4 *)(param_1 + 0x66) = 0;
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  FUN_14796599e(param_1 + 0x5d);
  param_1[0x5b] = &PTR_LAB_149e668b0;
  FUN_14019e1de(param_1 + 0x5b);
  FUN_14079057a(param_1 + 0x43);
  if (param_1[0x42] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x42] = 0;
  }
  if (param_1[0x40] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    param_1[0x2c] = 0;
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  FUN_14796a798(param_1[0x24],*(undefined4 *)(param_1 + 0x25));
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  plVar3 = (longlong *)param_1[0x23];
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
  plVar3 = (longlong *)param_1[0x21];
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
  plVar3 = (longlong *)param_1[0x1f];
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
  plVar3 = (longlong *)param_1[0x1d];
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
  FUN_14796a74f(param_1[0x16],*(undefined4 *)(param_1 + 0x17));
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
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
  FUN_144760e21(param_1[0xb],*(undefined4 *)(param_1 + 0xc));
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  FUN_14114f6bc(param_1);
  return;
}



// FUNCTION 14795e97a FUN_14795e97a body=39 status=ok
// SIG undefined FUN_14795e97a(void)

void FUN_14795e97a(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14001cc68(0x230,0x10);
  FUN_147974366(uVar1,param_1);
  return;
}



// FUNCTION 14795e9a2 FUN_14795e9a2 body=86 status=ok
// SIG undefined FUN_14795e9a2(void)

void FUN_14795e9a2(void)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  longlong lVar4;
  
  plVar1 = (longlong *)FUN_145b54fcc();
  lVar4 = plVar1[0x22];
  if (lVar4 == 0) {
    (**(code **)(*plVar1 + 1000))(plVar1);
    lVar4 = plVar1[0x22];
  }
  if (DAT_14cb0d2b0 == 0) {
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_141283ace();
    uVar3 = *(undefined4 *)(lVar2 + 0xb0);
  }
  FUN_147975438(lVar4,uVar3);
  return;
}



// FUNCTION 14795e9f8 FUN_14795e9f8 body=433 status=ok
// SIG undefined FUN_14795e9f8(void)

void FUN_14795e9f8(longlong param_1)

{
  float fVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  float local_b0;
  longlong local_a8;
  longlong local_a0;
  int local_98;
  uint local_90;
  longlong *local_88;
  undefined8 *local_80;
  undefined1 local_74 [4];
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  FUN_14795fb8e(&local_a0);
  uVar2 = (ulonglong)local_90;
  local_d0 = param_1;
  if ((-1 < (int)local_90) && ((int)local_90 < local_98)) {
    do {
      local_a8 = *(longlong *)(local_a0 + (uVar2 & 0xffffffff) * 8);
      local_c0 = local_a8 + 0x28;
      local_c8 = &local_a8;
      FUN_14796b49e(param_1 + 0x338,&local_88,&local_c8);
      local_c8 = (longlong *)&DAT_3f8000003f800000;
      local_c0 = 0;
      local_b0 = 1.0;
      fVar1 = *(float *)(local_a8 + 0x34);
      if ((fVar1 != 1.0) || (NAN(fVar1))) {
        local_c8 = (longlong *)CONCAT44(fVar1,fVar1);
        local_b0 = fVar1;
      }
      uStack_b8 = 0;
      local_88 = &local_a8;
      local_80 = &local_c8;
      FUN_14796b888(param_1 + 0x388,local_74,&local_88,0);
      uVar2 = (longlong)(int)local_90;
      do {
        uVar3 = uVar2;
        uVar2 = uVar3 + 1;
        local_90 = (uint)uVar2;
        if ((longlong)local_98 <= (longlong)uVar2) break;
      } while (*(longlong *)(local_a0 + uVar2 * 8) == 0);
    } while ((-2 < (longlong)uVar3) && ((int)local_90 < local_98));
  }
  if (local_a0 != 0) {
    FUN_1400020a8();
  }
  FUN_14795fbfa(local_d0,0);
  if ((local_70 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795ebaa FUN_14795ebaa body=305 status=ok
// SIG undefined FUN_14795ebaa(void)

undefined8 *
FUN_14795ebaa(undefined8 *param_1,undefined8 param_2,longlong param_3,longlong *param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 1;
  *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) & 0xfd;
  if (param_4 != (longlong *)0x0 && param_3 != 0) {
    (**(code **)(*param_4 + 0x30))(param_4,&local_38);
    plVar1 = local_30;
    if (param_1 + 1 != &local_38) {
      param_1[1] = local_38;
      local_38 = 0;
      plVar3 = (longlong *)param_1[2];
      if (local_30 != plVar3) {
        local_30 = (longlong *)0x0;
        param_1[2] = plVar1;
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
      }
    }
    plVar1 = local_30;
    if (local_30 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_30 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_30)(local_30);
        LOCK();
        piVar2 = (int *)((longlong)plVar1 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar1 + 0x10))(plVar1);
        }
      }
    }
    bVar4 = (**(code **)(*param_4 + 0x10))(param_4);
    *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) & 0xfe | bVar4;
    uVar6 = (**(code **)(*param_4 + 0x28))(param_4);
    *(undefined4 *)(param_1 + 3) = uVar6;
    cVar5 = (**(code **)(*param_4 + 0x18))(param_4);
    *(byte *)((longlong)param_1 + 0x1c) = *(byte *)((longlong)param_1 + 0x1c) & 0xfb | cVar5 << 2;
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795ecdc FUN_14795ecdc body=10 status=ok
// SIG undefined FUN_14795ecdc(void)

int FUN_14795ecdc(longlong param_1)

{
  return *(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x140);
}



// FUNCTION 14795ece6 FUN_14795ece6 body=202 status=ok
// SIG undefined FUN_14795ece6(void)

void FUN_14795ece6(longlong *param_1)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  
  if (((int)param_1[0x3f] == 0) &&
     (iVar4 = (int)param_1[0xe] + (int)param_1[0x28],
     iVar4 != 0 && SCARRY4((int)param_1[0xe],(int)param_1[0x28]) == iVar4 < 0)) {
    iVar3 = 0;
    do {
      plVar2 = (longlong *)(**(code **)(*param_1 + 0x228))(param_1);
      (**(code **)(*plVar2 + 0x68))(plVar2,iVar3);
      iVar1 = (int)param_1[0x3f];
      *(uint *)(param_1 + 0x3f) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x1fc) < iVar1 + 1U) {
        FUN_147969fb8(param_1 + 0x3e,iVar1);
      }
      *(longlong **)(param_1[0x3e] + (longlong)iVar1 * 8) = plVar2;
      iVar1 = (int)param_1[0x41];
      *(uint *)(param_1 + 0x41) = iVar1 + 1U;
      if (*(uint *)((longlong)param_1 + 0x20c) < iVar1 + 1U) {
        FUN_147969fb8(param_1 + 0x40,iVar1);
      }
      *(longlong **)(param_1[0x40] + (longlong)iVar1 * 8) = plVar2;
      iVar3 = iVar3 + 1;
    } while (iVar4 != iVar3);
  }
  return;
}



// FUNCTION 14795edb0 FUN_14795edb0 body=60 status=ok
// SIG undefined FUN_14795edb0(void)

void FUN_14795edb0(longlong *param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_14796aa2e(param_1,iVar1);
  }
  FUN_14796a9e3((longlong)iVar1 * 0x80 + *param_1,1);
  return;
}



// FUNCTION 14795edec FUN_14795edec body=232 status=ok
// SIG undefined FUN_14795edec(void)

void FUN_14795edec(longlong *param_1)

{
  char cVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  longlong local_30;
  int local_28;
  uint local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (DAT_14cb0d2b0 != (longlong *)0x0) {
    cVar1 = (**(code **)(*DAT_14cb0d2b0 + 0x400))();
    if ((cVar1 != '\0') && (DAT_14cacde88 == 0)) {
      FUN_14795f1f0(&local_30,0x10,1,0);
      uVar2 = (ulonglong)local_20;
      if ((-1 < (int)local_20) && ((int)local_20 < local_28)) {
        do {
          local_38 = 0;
          (**(code **)(*param_1 + 0x60))
                    (param_1,*(undefined8 *)(local_30 + (uVar2 & 0xffffffff) * 8),0,1);
          uVar2 = (longlong)(int)local_20;
          do {
            uVar3 = uVar2;
            uVar2 = uVar3 + 1;
            local_20 = (uint)uVar2;
            if ((longlong)local_28 <= (longlong)uVar2) break;
          } while (*(longlong *)(local_30 + uVar2 * 8) == 0);
        } while ((-2 < (longlong)uVar3) && ((int)local_20 < local_28));
      }
      if (local_30 != 0) {
        FUN_1400020a8();
      }
      *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) | 1;
    }
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795eed6 FUN_14795eed6 body=54 status=ok
// SIG undefined FUN_14795eed6(void)

void FUN_14795eed6(longlong param_1,int param_2)

{
  if (*(int *)(param_1 + 0x90) == param_2) {
    FUN_1433ff676();
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_141092d32(&DAT_14caced90);
      return;
    }
  }
  return;
}



// FUNCTION 14795ef2a FUN_14795ef2a body=228 status=ok
// SIG undefined FUN_14795ef2a(void)

undefined8 FUN_14795ef2a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined8 *)0x0;
  local_30 = 0;
  FUN_1446efa72(&local_38,0,3,0x10);
  local_30 = 3;
  *local_38 = &PTR_LAB_149e020b0;
  LOCK();
  UNLOCK();
  lVar2 = DAT_14c758608 + 1;
  lVar1 = DAT_14c758608 + 1;
  if (lVar2 == 0) {
    LOCK();
    UNLOCK();
    lVar2 = DAT_14c758608 + 2;
    lVar1 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar1;
  local_38[2] = lVar2;
  *local_38 = &PTR_FUN_14a7ec840;
  local_38[3] = param_3;
  local_38[4] = &LAB_14795f010;
  FUN_1448b6402(param_1,param_2,&local_38);
  FUN_1449db362(&local_38);
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795f026 FUN_14795f026 body=193 status=ok
// SIG undefined FUN_14795f026(void)

ulonglong FUN_14795f026(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  longlong *unaff_RBX;
  ulonglong uVar2;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_1[0x15] == param_2) {
LAB_14795f045:
    uVar2 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  }
  else {
    uVar2 = 0;
    (**(code **)(*param_1 + 0x68))(param_1,0);
    if ((longlong)(int)param_1[0x17] != 0) {
      unaff_RBX = (longlong *)param_1[0x16];
      lVar1 = (longlong)(int)param_1[0x17] << 5;
      do {
        if (*unaff_RBX == param_2) {
          param_1[0x15] = param_2;
          param_1[0x18] = (longlong)unaff_RBX;
          if (((*(byte *)((longlong)unaff_RBX + 0x1c) & 2) == 0) &&
             ((longlong *)unaff_RBX[1] != (longlong *)0x0)) {
            local_28 = param_1[0x1b];
            local_38 = (undefined4)param_1[0x19];
            uStack_34 = *(undefined4 *)((longlong)param_1 + 0xcc);
            uStack_30 = (undefined4)param_1[0x1a];
            uStack_2c = *(undefined4 *)((longlong)param_1 + 0xd4);
            (**(code **)(*(longlong *)unaff_RBX[1] + 0x70))();
            *(byte *)((longlong)unaff_RBX + 0x1c) = *(byte *)((longlong)unaff_RBX + 0x1c) | 2;
          }
          goto LAB_14795f045;
        }
        unaff_RBX = unaff_RBX + 4;
        lVar1 = lVar1 + -0x20;
      } while (lVar1 != 0);
      uVar2 = 0;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar2 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795f0e8 FUN_14795f0e8 body=106 status=ok
// SIG undefined FUN_14795f0e8(void)

longlong * FUN_14795f0e8(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  *param_2 = 0;
  param_2[1] = 0;
  iVar1 = *(int *)(param_1 + 0xb8);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0xb0);
    lVar4 = 0;
    do {
      iVar2 = (int)param_2[1];
      *(uint *)(param_2 + 1) = iVar2 + 1U;
      if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
        FUN_1446f84a2(param_2,iVar2);
      }
      *(undefined8 *)(*param_2 + (longlong)iVar2 * 8) = *(undefined8 *)(lVar3 + lVar4);
      lVar4 = lVar4 + 0x20;
    } while ((longlong)iVar1 * 0x20 != lVar4);
  }
  return param_2;
}



// FUNCTION 14795f152 FUN_14795f152 body=157 status=ok
// SIG undefined FUN_14795f152(void)

void FUN_14795f152(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  
  plVar1 = *(longlong **)(param_1 + 0xc0);
  if ((plVar1 != (longlong *)0x0) && (*plVar1 == *(longlong *)(param_1 + 0xa8))) {
    *param_2 = *(longlong *)(param_1 + 0xa8);
LAB_14795f170:
    param_2[1] = plVar1[1];
    lVar2 = plVar1[2];
    param_2[2] = lVar2;
    if (lVar2 != 0) {
      LOCK();
      *(int *)(lVar2 + 8) = *(int *)(lVar2 + 8) + 1;
      UNLOCK();
    }
    *(undefined1 *)((longlong)param_2 + 0x1c) = *(undefined1 *)((longlong)plVar1 + 0x1c);
    *(int *)(param_2 + 3) = (int)plVar1[3];
    return;
  }
  *(undefined8 *)(param_1 + 0xc0) = 0;
  if ((longlong)*(int *)(param_1 + 0xb8) != 0) {
    plVar1 = *(longlong **)(param_1 + 0xb0);
    lVar2 = (longlong)*(int *)(param_1 + 0xb8) << 5;
    do {
      if (*plVar1 == *(longlong *)(param_1 + 0xa8)) {
        *(longlong **)(param_1 + 0xc0) = plVar1;
        *param_2 = *plVar1;
        goto LAB_14795f170;
      }
      plVar1 = plVar1 + 4;
      lVar2 = lVar2 + -0x20;
    } while (lVar2 != 0);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined4 *)(param_2 + 3) = 1;
  return;
}



// FUNCTION 14795f1f0 FUN_14795f1f0 body=126 status=ok
// SIG undefined FUN_14795f1f0(void)

longlong * FUN_14795f1f0(longlong *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_1410ed3ca();
  FUN_14123d74c(uVar2,param_1,param_3,param_2,uVar1 | param_4 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14795f26e FUN_14795f26e body=112 status=ok
// SIG undefined FUN_14795f26e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_14795f26e(longlong param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  bVar1 = FUN_146269f19();
  fVar4 = *(float *)(param_1 + 0x14c + (ulonglong)(bVar1 ^ 1) * 4) * _DAT_14c761314;
  bVar1 = FUN_146269f19();
  iVar3 = DAT_14cacde18;
  if (DAT_14cacde18 < 1) {
    iVar3 = *(int *)(param_1 + 0x144 + (ulonglong)(bVar1 ^ 1) * 4);
  }
  iVar2 = (int)(fVar4 * (float)iVar3);
  iVar3 = *(int *)(param_1 + 0x140);
  if (iVar2 < *(int *)(param_1 + 0x140)) {
    iVar3 = iVar2;
  }
  iVar2 = 1;
  if (1 < iVar3) {
    iVar2 = iVar3;
  }
  return iVar2;
}



// FUNCTION 14795f2de FUN_14795f2de body=63 status=ok
// SIG undefined FUN_14795f2de(void)

void FUN_14795f2de(longlong param_1)

{
  FUN_140790e84(param_1 + 0x218);
  if (*(longlong *)(param_1 + 0x210) != 0) {
    if (DAT_14c872a72 == '\0') {
      FUN_140113f48();
    }
    *(undefined8 *)(param_1 + 0x210) = 0;
  }
  return;
}



// FUNCTION 14795f31e FUN_14795f31e body=433 status=ok
// SIG undefined FUN_14795f31e(void)

void FUN_14795f31e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x1f8) << 3,
             (longlong)*(int *)(param_1 + 0x1fc) << 3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x208) << 3,
             (longlong)*(int *)(param_1 + 0x20c) << 3);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x2f0) * 0x18,
             (longlong)*(int *)(param_1 + 0x2f4) * 0x18);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x310) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x314) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x330) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  lVar1 = ((longlong)*(int *)(param_1 + 0x2f0) - (longlong)*(int *)(param_1 + 0x31c)) * 400;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x340) * 0x1a8,
             (longlong)*(int *)(param_1 + 0x344) * 0x1a8);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x360) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x364) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x380) << 2;
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  (**(code **)(*param_2 + 0x10))
            (param_2,(longlong)*(int *)(param_1 + 0x3f0) * 0x50,
             (longlong)*(int *)(param_1 + 0x3f4) * 0x50);
  (**(code **)(*param_2 + 0x10))
            (param_2,*(int *)(param_1 + 0x410) + 0x1fU >> 3 & 0xfffffffc,
             *(int *)(param_1 + 0x414) + 0x1fU >> 3 & 0xfffffffc);
  lVar1 = (longlong)*(int *)(param_1 + 0x430) << 2;
                    /* WARNING: Could not recover jumptable at 0x00014795f4cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2,lVar1,lVar1);
  return;
}



// FUNCTION 14795f4d0 FUN_14795f4d0 body=764 status=ok
// SIG undefined FUN_14795f4d0(void)

void FUN_14795f4d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  longlong *local_90;
  undefined8 local_88;
  longlong local_80;
  uint local_78;
  int iStack_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong local_60;
  uint local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  iVar4 = 0;
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x3e0,0,0);
  local_98 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x848),*(undefined4 *)(param_1 + 0x850),0);
  FUN_14795f7ce(param_2,param_1 + 1000);
  plVar1 = (longlong *)(param_1 + 0x4a0);
  lVar2 = param_1 + 0x4b0;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x4c8) != 0) {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x4c8);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (local_60 != lVar2)) {
    do {
      (**(code **)(*param_2 + 0x88))(param_2,*local_90 + (longlong)iStack_74 * 0x38 + 0x10,0,0);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != lVar2 || iStack_74 != iVar4));
  }
  if (*(longlong *)(param_1 + 0x488) != 0) {
    FUN_147974538(*(longlong *)(param_1 + 0x488),param_2);
  }
  iVar4 = *(int *)(param_1 + 0x5c0);
  if ((longlong)iVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x5b8);
    lVar3 = 0;
    do {
      FUN_1478b359c(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar4 * 8 != lVar3);
  }
  iVar4 = *(int *)(param_1 + 0x700);
  if ((longlong)iVar4 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x6f8);
    lVar3 = 0;
    do {
      FUN_1478b359c(*(undefined8 *)(lVar2 + lVar3),param_2);
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar4 * 8 != lVar3);
  }
  plVar1 = (longlong *)(param_1 + 0x630);
  lVar2 = param_1 + 0x640;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  iStack_54 = 0;
  local_50 = 0;
  iVar4 = 0;
  local_60 = lVar2;
  if (*(int *)(param_1 + 0x658) != 0) {
    FUN_1449c0562(&local_68);
    iVar4 = *(int *)(param_1 + 0x658);
  }
  local_78 = local_58;
  iStack_74 = iStack_54;
  local_70 = local_50;
  local_6c = local_4c;
  local_88 = local_68;
  local_80 = local_60;
  local_90 = plVar1;
  if ((iStack_54 != iVar4) || (local_60 != lVar2)) {
    do {
      FUN_1478b359c(*(undefined8 *)(*local_90 + (longlong)iStack_74 * 0x28),param_2);
      local_78 = local_78 & ~local_88._4_4_;
      FUN_1449c0562(&local_88);
    } while (local_90 != plVar1 || (local_80 != lVar2 || iStack_74 != iVar4));
  }
  FUN_14795f8d8(param_1);
  local_98 = 0;
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x5c8),*(undefined4 *)(param_1 + 0x5d0),0);
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795f7ce FUN_14795f7ce body=265 status=ok
// SIG undefined FUN_14795f7ce(void)

void FUN_14795f7ce(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  int iVar2;
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
  plVar1 = param_2 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  uStack_38 = 0;
  uStack_48 = plVar1;
  if ((int)param_2[5] == 0) {
    iVar2 = 0;
  }
  else {
    FUN_1449c0562(&local_50);
    iVar2 = (int)param_2[5];
  }
  uStack_58 = CONCAT44(uStack_34,uStack_38);
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_70 = (undefined4)local_50;
  uStack_6c = local_50._4_4_;
  uStack_68 = (undefined4)uStack_48;
  uStack_64 = uStack_48._4_4_;
  local_78 = param_2;
  if ((iStack_3c != iVar2) || (uStack_48 != plVar1)) {
    do {
      (**(code **)(*param_1 + 0x88))(param_1,(longlong)iStack_5c * 0x50 + *local_78,0,0);
      local_60 = local_60 & ~uStack_6c;
      FUN_1449c0562(&local_70);
    } while (local_78 != param_2 ||
             ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || iStack_5c != iVar2));
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14795f8d8 FUN_14795f8d8 body=438 status=ok
// SIG undefined FUN_14795f8d8(void)

void FUN_14795f8d8(longlong param_1)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_78 [40];
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e8));
  iVar1 = *(int *)(param_1 + 0x5e0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x5d8);
    lVar6 = 0;
    do {
      local_50 = *(longlong *)(lVar3 + lVar6);
      if ((local_50 != 0) && (DAT_14c950c29 != '\0')) {
        FUN_1456cec3c();
      }
      FUN_14796ecfc(param_1 + 0x5c8,&local_50);
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  *(undefined4 *)(param_1 + 0x5e0) = 0;
  if (*(int *)(param_1 + 0x5e4) < 0) {
    FUN_14796ee40(param_1 + 0x5d8);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x5e8));
  iVar1 = *(int *)(param_1 + 0x5d0);
  if (0 < (longlong)iVar1) {
    iVar7 = -iVar1;
    uVar5 = (longlong)iVar1;
    do {
      lVar3 = *(longlong *)(*(longlong *)(param_1 + 0x5c8) + -8 + uVar5 * 8);
      if (lVar3 == 0) {
LAB_14795f9f5:
        uVar4 = *(uint *)(param_1 + 0x5d0);
        if (uVar5 != uVar4) {
          iVar1 = iVar7 + uVar4;
          if (0 < (int)(iVar7 + uVar4)) {
            iVar1 = 1;
          }
          memmove((void *)(*(longlong *)(param_1 + 0x5c8) + uVar5 * 8 + -8),
                  (void *)(*(longlong *)(param_1 + 0x5c8) + (longlong)(int)(uVar4 - iVar1) * 8),
                  (longlong)iVar1 << 3);
          uVar4 = *(uint *)(param_1 + 0x5d0);
        }
        *(uint *)(param_1 + 0x5d0) = uVar4 - 1;
      }
      else {
        iVar1 = *(int *)(lVar3 + 0x330);
        LOCK();
        bVar8 = *(char *)(lVar3 + 0x34f) == '\0';
        if (bVar8) {
          *(char *)(lVar3 + 0x34f) = '\x01';
        }
        UNLOCK();
        if (!bVar8) {
          FUN_1447d2058();
        }
        iVar2 = *(int *)(lVar3 + 0x340);
        LOCK();
        bVar8 = *(char *)(lVar3 + 0x34f) == '\x01';
        if (bVar8) {
          *(char *)(lVar3 + 0x34f) = '\0';
        }
        UNLOCK();
        if (!bVar8) {
          FUN_14008cdb0();
        }
        if ((iVar1 == 2) && (iVar2 < 1)) goto LAB_14795f9f5;
      }
      iVar7 = iVar7 + 1;
      bVar8 = 1 < uVar5;
      uVar5 = uVar5 - 1;
    } while (bVar8);
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14795fa90 FUN_14795fa90 body=115 status=ok
// SIG undefined FUN_14795fa90(void)

undefined4 * FUN_14795fa90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  uVar6 = param_2[6];
  uVar7 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  FUN_1477e8570(param_1 + 10,param_2 + 10);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)(param_2 + 0x62);
  lVar8 = *(longlong *)(param_2 + 100);
  if (DAT_14c950c29 == '\x01') {
    if (lVar8 == 0) {
      lVar8 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar8 = *(longlong *)(param_2 + 100);
    }
  }
  *(longlong *)(param_1 + 100) = lVar8;
  return param_1;
}



// FUNCTION 14795fb04 FUN_14795fb04 body=85 status=ok
// SIG undefined FUN_14795fb04(void)

undefined8 FUN_14795fb04(longlong param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar2 = FUN_146269f19();
  if ((char)uVar2 == '\0') {
    if ((DAT_14cacdf30 == 1 | *(byte *)(param_1 + 0x590)) == 1) {
      cVar1 = *(char *)(param_1 + 0x598);
      goto LAB_14795fb4b;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x598);
    if (cVar1 < '\0' || DAT_14cacdf30 == 1) {
LAB_14795fb4b:
      uVar3 = CONCAT71((int7)((ulonglong)uVar2 >> 8),cVar1) & 0xffffffffffffff02;
      return CONCAT71((int7)(uVar3 >> 8),(byte)uVar3 >> 1);
    }
  }
  return 0;
}



// FUNCTION 14795fb5a FUN_14795fb5a body=52 status=ok
// SIG undefined FUN_14795fb5a(void)

byte FUN_14795fb5a(longlong param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    bVar2 = *(byte *)(param_1 + 0x591);
  }
  else {
    bVar2 = *(byte *)(param_1 + 0x599) & 1;
  }
  return DAT_14cacdf48 == 1 | bVar2;
}



// FUNCTION 14795fb8e FUN_14795fb8e body=107 status=ok
// SIG undefined FUN_14795fb8e(void)

longlong * FUN_14795fb8e(longlong *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0xffffffff;
  uVar1 = FUN_14482ca40();
  uVar2 = FUN_14113d19a();
  FUN_14123d74c(uVar2,param_1,1,0x10,uVar1 | 0x90000000);
  lVar3 = (longlong)(int)param_1[2];
  do {
    lVar3 = lVar3 + 1;
    *(int *)(param_1 + 2) = (int)lVar3;
    if ((int)param_1[1] <= lVar3) {
      return param_1;
    }
  } while (*(longlong *)(*param_1 + lVar3 * 8) == 0);
  return param_1;
}



// FUNCTION 14795fbfa FUN_14795fbfa body=919 status=ok
// SIG undefined FUN_14795fbfa(void)

void FUN_14795fbfa(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  longlong *local_c8;
  undefined8 local_c0;
  longlong local_b8;
  uint local_b0;
  int iStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  longlong *local_a0;
  longlong *local_98;
  undefined2 local_90;
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_70;
  longlong local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  plVar1 = (longlong *)(param_1 + 0x338);
  local_68 = param_1 + 0x348;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  if (*(int *)(param_1 + 0x360) != 0) {
    FUN_1449c0562(&local_70);
  }
  local_b0 = local_60;
  iStack_ac = iStack_5c;
  local_a8 = local_58;
  local_a4 = local_54;
  local_c0 = local_70;
  local_b8 = local_68;
  local_90 = 0;
  local_c8 = plVar1;
  local_a0 = plVar1;
  local_98 = plVar1;
  if (iStack_5c < *(int *)(local_68 + 0x18)) {
    do {
      lVar8 = *local_c8;
      lVar9 = (longlong)iStack_ac;
      uVar2 = *(ulonglong *)(lVar8 + lVar9 * 0x1a8);
      if (uVar2 != 0) {
        if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
          uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
          uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
          lVar7 = *(longlong *)(param_1 + 0x3c8);
          if (*(longlong *)(param_1 + 0x3c8) == 0) {
            lVar7 = param_1 + 0x3c0;
          }
          iVar4 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(param_1 + 0x3d0) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
          if (iVar4 != -1) {
            do {
              lVar7 = *(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 0x30;
              if (*(ulonglong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 0x30) == uVar2)
              {
                if (lVar7 + 8 != 0 && lVar7 != 0) {
                  FUN_147973c6e(lVar7 + 8,param_2);
                  lVar9 = (longlong)iStack_ac;
                  lVar8 = *local_c8;
                }
                break;
              }
              iVar4 = *(int *)(lVar7 + 0x28);
            } while (iVar4 != -1);
          }
        }
        FUN_14795fa90(lVar9 * 0x1a8 + lVar8 + 8,uVar2 + 0x28);
        uVar3 = uStack_80;
        if (*(longlong *)(uVar2 + 0x1e0) == 0) {
          lVar8 = (longlong)(int)uStack_80;
          uVar5 = (int)uStack_80 + 1;
          uStack_80 = CONCAT44(uStack_80._4_4_,uVar5);
          if (uStack_80._4_4_ < uVar5) {
            FUN_14796c188(&local_88,uVar3 & 0xffffffff);
          }
          *(ulonglong *)(local_88 + lVar8 * 8) = uVar2;
        }
      }
      local_b0 = local_b0 & ~local_c0._4_4_;
      FUN_1449c0562(&local_c0);
    } while (iStack_ac < *(int *)(local_b8 + 0x18));
    if (((local_90 & 1) != 0) && (local_90._1_1_ == '\x01')) {
      FUN_14796b276(local_98,(int)local_98[1] - *(int *)((longlong)local_98 + 0x34));
    }
  }
  if (0 < (int)uStack_80) {
    lVar8 = 0;
    iVar4 = (int)uStack_80;
    do {
      uVar2 = *(ulonglong *)(local_88 + lVar8 * 8);
      if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
        uVar5 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        lVar9 = *(longlong *)(param_1 + 0x378);
        if (*(longlong *)(param_1 + 0x378) == 0) {
          lVar9 = param_1 + 0x370;
        }
        iVar6 = *(int *)(lVar9 + (ulonglong)
                                 (*(int *)(param_1 + 0x380) - 1U & (uVar5 >> 0x10 ^ uVar5)) * 4);
        if (iVar6 != -1) {
          do {
            lVar9 = *plVar1 + (longlong)iVar6 * 0x1a8;
            if (*(ulonglong *)(*plVar1 + (longlong)iVar6 * 0x1a8) == uVar2) goto LAB_14795fe72;
            iVar6 = *(int *)(lVar9 + 0x1a0);
          } while (iVar6 != -1);
        }
      }
      lVar9 = 0;
LAB_14795fe72:
      lVar7 = lVar9 + 8;
      if (lVar9 == 0) {
        lVar7 = 0;
      }
      if ((uVar2 != 0) && (lVar7 != 0)) {
        FUN_1434005a0(param_1);
        iVar4 = (int)uStack_80;
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar4);
  }
  if (local_88 != 0) {
    FUN_1400020a8();
  }
  if ((local_50 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14795ff92 FUN_14795ff92 body=148 status=ok
// SIG undefined FUN_14795ff92(void)

undefined8 FUN_14795ff92(undefined8 param_1)

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
  uVar1 = FUN_145b0eddc();
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



// FUNCTION 147960028 FUN_147960028 body=77 status=ok
// SIG undefined FUN_147960028(void)

void FUN_147960028(longlong param_1,longlong param_2)

{
  if (param_2 != 0) {
    if (*(longlong *)(param_1 + 0x3e0) == param_2) {
      *(undefined8 *)(param_1 + 0x3e0) = 0;
    }
    FUN_147960076(param_1);
    if (*(longlong *)(param_1 + 0x3d8) == 0) {
      FUN_143400306(param_1,*(undefined8 *)(param_1 + 0x3e0));
      return;
    }
  }
  return;
}



// FUNCTION 147960076 FUN_147960076 body=578 status=ok
// SIG undefined FUN_147960076(void)

void FUN_147960076(longlong param_1,ulonglong **param_2)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong ***ppplVar8;
  undefined1 auStack_a8 [40];
  ulonglong **local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong **local_58;
  longlong local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (ulonglong **)0x0) {
    if (*(ulonglong ***)(param_1 + 0x3d8) == param_2) {
      *(undefined8 *)(param_1 + 0x3d8) = 0;
    }
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_80 = param_2;
    if ((DAT_14c950c29 & 1) != 0) {
      FUN_1456cec3c(param_2);
    }
    FUN_14796c548(param_1 + 1000,&local_80);
    local_58 = (longlong **)param_2;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_2);
    }
    local_80 = (ulonglong **)&local_58;
    FUN_14796c75e(param_1 + 0x848);
    if (*(int *)(param_1 + 0x440) != *(int *)(param_1 + 0x46c)) {
      uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
              -0x7a143595;
      uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
      lVar6 = param_1 + 0x470;
      if (*(longlong *)(param_1 + 0x478) != 0) {
        lVar6 = *(longlong *)(param_1 + 0x478);
      }
      iVar7 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x480) - 1U & (uVar4 >> 0x10 ^ uVar4))
                               * 4);
      if (iVar7 != -1) {
        do {
          lVar6 = *(longlong *)(param_1 + 0x438) + (longlong)iVar7 * 0x60;
          if (*(ulonglong ***)(*(longlong *)(param_1 + 0x438) + (longlong)iVar7 * 0x60) == param_2)
          {
            ppplVar8 = (longlong ***)(lVar6 + 8);
            if (ppplVar8 != (longlong ***)0x0 && lVar6 != 0) {
              lVar1 = lVar6 + 0x18;
              local_58 = (longlong **)0x100000000;
              local_48 = 0xffffffff;
              local_40 = 0;
              iVar7 = 0;
              local_50 = lVar1;
              if (*(int *)(lVar6 + 0x30) != 0) {
                FUN_1449c0562(&local_58);
                iVar7 = *(int *)(lVar6 + 0x30);
              }
              local_78 = (ulonglong **)local_58;
              local_70 = local_50;
              local_68 = local_48;
              uVar3 = local_68;
              local_60 = local_40;
              local_5c = local_3c;
              local_68._4_4_ = (int)((ulonglong)local_48 >> 0x20);
              iVar5 = local_68._4_4_;
              local_80 = (ulonglong **)ppplVar8;
              if ((local_68._4_4_ != iVar7) || (local_68 = local_48, local_50 != lVar1)) {
                do {
                  local_68 = uVar3;
                  pbVar2 = (byte *)((longlong)*local_80 + (longlong)iVar5 * 0x70 + 100);
                  *pbVar2 = *pbVar2 & 0xfe;
                  local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
                  FUN_1449c0562(&local_78);
                  iVar5 = local_68._4_4_;
                  uVar3 = local_68;
                } while ((longlong ***)local_80 != ppplVar8 ||
                         (local_70 != lVar1 || local_68._4_4_ != iVar7));
              }
            }
            break;
          }
          iVar7 = *(int *)(lVar6 + 0x58);
        } while (iVar7 != -1);
      }
    }
    FUN_147960612(param_1,param_2);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479602ba FUN_1479602ba body=221 status=ok
// SIG undefined FUN_1479602ba(void)

longlong FUN_1479602ba(longlong param_1,ulonglong param_2)

{
  longlong lVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  bool bVar6;
  
  if (*(int *)(param_1 + 0x698) != *(int *)(param_1 + 0x6c4)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 0x6c8;
    if (*(longlong *)(param_1 + 0x6d0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x6d0);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x6d8) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x690);
      do {
        if (*(ulonglong *)(lVar3 + (longlong)iVar4 * 0x10) == param_2) {
          return CONCAT71((int7)((ulonglong)lVar3 >> 8),1);
        }
        iVar4 = *(int *)((longlong)iVar4 * 0x10 + lVar3 + 8);
      } while (iVar4 != -1);
    }
  }
  lVar3 = (longlong)*(int *)(param_1 + 0x700);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar1 = lVar3 * 8;
    lVar5 = 0;
    do {
      bVar6 = *(ulonglong *)(*(longlong *)(param_1 + 0x6f8) + lVar5) == param_2;
      lVar3 = CONCAT71((int7)((ulonglong)lVar3 >> 8),bVar6);
      if (bVar6) {
        return lVar3;
      }
      bVar6 = lVar1 + -8 != lVar5;
      lVar5 = lVar5 + 8;
    } while (bVar6);
  }
  return lVar3;
}



// FUNCTION 147960398 FUN_147960398 body=17 status=ok
// SIG undefined FUN_147960398(void)

float FUN_147960398(void)

{
  float fVar1;
  
  fVar1 = (float)DAT_14c759090;
  if (0.5 <= fVar1) {
    fVar1 = 0.5;
  }
  return fVar1;
}



// FUNCTION 1479603aa FUN_1479603aa body=322 status=ok
// SIG undefined FUN_1479603aa(void)

void FUN_1479603aa(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  double dVar3;
  
  if (0.0 <= *(double *)(param_3 + 0x28)) {
    dVar3 = *(double *)(param_1 + 0x5a0);
    *(double *)(param_3 + 0x10) = dVar3;
    iVar2 = *(int *)(param_3 + 0x3c);
    if (iVar2 != 0) {
      *(undefined8 *)(param_3 + 0x28) = 0xbff0000000000000;
      *(undefined8 *)(param_3 + 0x30) = 0xbff0000000000000;
      fVar1 = *(float *)(param_2 + 0x88);
      if (0.0 <= fVar1) {
        if (iVar2 - 3U < 2) {
          *(undefined8 *)(param_3 + 0x38) = 0x100000000;
          dVar3 = *(double *)(param_1 + 0x5a0) - (double)(*(float *)(param_2 + 0x84) * 0.0);
          *(double *)(param_3 + 0x18) = dVar3;
          *(double *)(param_3 + 0x10) = dVar3;
          dVar3 = (double)*(float *)(param_2 + 0x84) + *(double *)(param_1 + 0x5a0);
          fVar1 = *(float *)(param_2 + 0x88);
        }
        else {
          if (1 < iVar2 - 1U) {
            return;
          }
          dVar3 = dVar3 + (double)*(float *)(param_2 + 0x84);
        }
        *(double *)(param_3 + 0x28) = (double)fVar1 + dVar3;
        *(double *)(param_3 + 0x30) = (double)*(float *)(param_2 + 0x8c) + (double)fVar1 + dVar3;
        return;
      }
      if (iVar2 - 3U < 2) {
        dVar3 = *(double *)(param_1 + 0x5a0);
        *(double *)(param_3 + 0x10) = dVar3;
        dVar3 = dVar3 - (double)((1.0 - *(float *)(param_3 + 0x38)) * *(float *)(param_2 + 0x84));
        *(double *)(param_3 + 0x18) = dVar3;
        *(undefined4 *)(param_3 + 0x3c) = 1;
        *(double *)(param_3 + 0x20) = (double)*(float *)(param_2 + 0x84) + dVar3;
      }
    }
  }
  return;
}



// FUNCTION 1479604ec FUN_1479604ec body=79 status=ok
// SIG undefined FUN_1479604ec(void)

undefined8 * FUN_1479604ec(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_1479698b4(param_1,iVar1);
      FUN_147969916(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14796053c FUN_14796053c body=213 status=ok
// SIG undefined FUN_14796053c(void)

void FUN_14796053c(longlong param_1,ulonglong **param_2,char *param_3)

{
  longlong lVar1;
  byte *pbVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  longlong ***ppplVar8;
  double dVar9;
  undefined1 auStack_a8 [40];
  ulonglong **ppuStack_80;
  undefined8 uStack_78;
  longlong lStack_70;
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong **pplStack_58;
  longlong lStack_50;
  undefined8 uStack_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  ulonglong uStack_38;
  
  if ((((param_3 != (char *)0x0) &&
       (*(float *)(param_2 + 0x11) <= 0.0 && *(float *)(param_2 + 0x11) != 0.0)) &&
      (*(int *)(param_3 + 4) == 0)) && ((*(int *)(param_3 + 8) == 0 && (*param_3 == '\0')))) {
    if (*(float *)((longlong)param_2 + 0x8c) <= 0.0) {
      uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
      if (param_2 != (ulonglong **)0x0) {
        if (*(ulonglong ***)(param_1 + 0x3d8) == param_2) {
          *(undefined8 *)(param_1 + 0x3d8) = 0;
        }
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        ppuStack_80 = param_2;
        if ((DAT_14c950c29 & 1) != 0) {
          FUN_1456cec3c(param_2);
        }
        FUN_14796c548(param_1 + 1000,&ppuStack_80);
        pplStack_58 = (longlong **)param_2;
        if (DAT_14c950c29 == 1) {
          FUN_1456cec3c(param_2);
        }
        ppuStack_80 = (ulonglong **)&pplStack_58;
        FUN_14796c75e(param_1 + 0x848);
        if (*(int *)(param_1 + 0x440) != *(int *)(param_1 + 0x46c)) {
          uVar4 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
                  -0x7a143595;
          uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
          lVar6 = param_1 + 0x470;
          if (*(longlong *)(param_1 + 0x478) != 0) {
            lVar6 = *(longlong *)(param_1 + 0x478);
          }
          iVar7 = *(int *)(lVar6 + (ulonglong)
                                   (*(int *)(param_1 + 0x480) - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
          if (iVar7 != -1) {
            do {
              lVar6 = *(longlong *)(param_1 + 0x438) + (longlong)iVar7 * 0x60;
              if (*(ulonglong ***)(*(longlong *)(param_1 + 0x438) + (longlong)iVar7 * 0x60) ==
                  param_2) {
                ppplVar8 = (longlong ***)(lVar6 + 8);
                if (ppplVar8 != (longlong ***)0x0 && lVar6 != 0) {
                  lVar1 = lVar6 + 0x18;
                  pplStack_58 = (longlong **)0x100000000;
                  uStack_48 = 0xffffffff;
                  uStack_40 = 0;
                  iVar7 = 0;
                  lStack_50 = lVar1;
                  if (*(int *)(lVar6 + 0x30) != 0) {
                    FUN_1449c0562(&pplStack_58);
                    iVar7 = *(int *)(lVar6 + 0x30);
                  }
                  uStack_78 = (ulonglong **)pplStack_58;
                  lStack_70 = lStack_50;
                  uStack_68 = uStack_48;
                  uVar3 = uStack_68;
                  uStack_60 = uStack_40;
                  uStack_5c = uStack_3c;
                  uStack_68._4_4_ = (int)((ulonglong)uStack_48 >> 0x20);
                  iVar5 = uStack_68._4_4_;
                  ppuStack_80 = (ulonglong **)ppplVar8;
                  if ((uStack_68._4_4_ != iVar7) || (uStack_68 = uStack_48, lStack_50 != lVar1)) {
                    do {
                      uStack_68 = uVar3;
                      pbVar2 = (byte *)((longlong)*ppuStack_80 + (longlong)iVar5 * 0x70 + 100);
                      *pbVar2 = *pbVar2 & 0xfe;
                      uStack_68 = CONCAT44(uStack_68._4_4_,(uint)uStack_68 & ~uStack_78._4_4_);
                      FUN_1449c0562(&uStack_78);
                      iVar5 = uStack_68._4_4_;
                      uVar3 = uStack_68;
                    } while ((longlong ***)ppuStack_80 != ppplVar8 ||
                             (lStack_70 != lVar1 || uStack_68._4_4_ != iVar7));
                  }
                }
                break;
              }
              iVar7 = *(int *)(lVar6 + 0x58);
            } while (iVar7 != -1);
          }
        }
        FUN_147960612(param_1,param_2);
      }
      if ((uStack_38 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    iVar7 = *(int *)(param_3 + 0x3c);
    if (iVar7 == 2) {
      dVar9 = *(double *)(param_1 + 0x5a0);
      *(double *)(param_3 + 0x28) = dVar9;
      *(double *)(param_3 + 0x30) = (double)*(float *)((longlong)param_2 + 0x8c) + dVar9;
      FUN_147960612();
      return;
    }
    if (iVar7 == 1) {
      dVar9 = *(double *)(param_1 + 0x5a0) -
              (double)(*(float *)((longlong)param_2 + 0x8c) * (1.0 - *(float *)(param_3 + 0x38)));
      *(double *)(param_3 + 0x28) = dVar9;
      *(double *)(param_3 + 0x30) = (double)*(float *)((longlong)param_2 + 0x8c) + dVar9;
      dVar9 = dVar9 + -1.0;
      *(double *)(param_3 + 0x20) = dVar9;
      *(double *)(param_3 + 0x18) = dVar9;
      *(double *)(param_3 + 0x10) = dVar9;
      FUN_147960612();
      return;
    }
    if (iVar7 == 0) {
      FUN_147960076();
      return;
    }
  }
  return;
}



// FUNCTION 147960612 FUN_147960612 body=90 status=ok
// SIG undefined FUN_147960612(void)

void FUN_147960612(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (((param_2 != 0) && (*(longlong *)(param_1 + 0x488) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x488) + 0x160) == param_2)) {
    lVar1 = FUN_14796066c(param_1);
    if (lVar1 != 0) {
      FUN_14340e162(*(undefined8 *)(param_1 + 0x488),lVar1,1,0);
      return;
    }
    FUN_14340de62(*(undefined8 *)(param_1 + 0x488));
    return;
  }
  return;
}



// FUNCTION 14796066c FUN_14796066c body=387 status=ok
// SIG undefined FUN_14796066c(void)

longlong FUN_14796066c(longlong param_1,longlong param_2)

{
  float *pfVar1;
  double *pdVar2;
  longlong *plVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_a8 [32];
  longlong *local_88;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined2 local_50;
  undefined8 local_48;
  longlong local_40;
  uint local_38;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar3 = (longlong *)(param_1 + 1000);
  local_40 = param_1 + 0x3f8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if (*(int *)(param_1 + 0x410) != 0) {
    FUN_1449c0562(&local_48);
  }
  local_70 = local_38;
  iStack_6c = iStack_34;
  local_68 = local_30;
  local_64 = local_2c;
  local_80 = local_48;
  local_78 = local_40;
  local_50 = 0;
  local_88 = plVar3;
  local_60 = plVar3;
  local_58 = plVar3;
  if (iStack_34 < *(int *)(local_40 + 0x18)) {
    lVar9 = 0;
    lVar8 = 0;
    do {
      lVar5 = *local_88;
      lVar7 = (longlong)iStack_6c * 0x50;
      lVar6 = *(longlong *)(lVar5 + lVar7);
      if ((lVar6 != param_2) && (*(int *)(lVar5 + 0x44 + lVar7) < 3)) {
        if (lVar8 != 0) {
          fVar4 = *(float *)(lVar6 + 0x2c);
          pfVar1 = (float *)(lVar8 + 0x2c);
          if ((fVar4 < *pfVar1 || fVar4 == *pfVar1) &&
             (((fVar4 != *pfVar1 || (NAN(fVar4) || NAN(*pfVar1))) ||
              (pdVar2 = (double *)(lVar5 + lVar7 + 0x18),
              *(double *)(lVar9 + 0x10) < *pdVar2 || *(double *)(lVar9 + 0x10) == *pdVar2))))
          goto LAB_14796076f;
        }
        lVar8 = lVar6;
        lVar9 = lVar5 + lVar7 + 8;
      }
LAB_14796076f:
      local_70 = local_70 & ~local_80._4_4_;
      FUN_1449c0562(&local_80);
    } while (iStack_6c < *(int *)(local_78 + 0x18));
    if (((local_50 & 1) != 0) && (local_50._1_1_ == '\x01')) {
      FUN_14796c300(local_58,(int)local_58[1] - *(int *)((longlong)local_58 + 0x34));
    }
  }
  else {
    lVar8 = 0;
  }
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar8;
}



// FUNCTION 1479607f0 FUN_1479607f0 body=285 status=ok
// SIG undefined FUN_1479607f0(void)

float FUN_1479607f0(float param_1,float param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = 20.0;
  fVar2 = 0.0;
  if (20.0 < param_1) {
    if (20000.0 <= param_1) {
      fVar2 = 1.0;
    }
    else {
      iVar1 = _isnan((double)param_1);
      fVar2 = 0.0;
      if (iVar1 == 0) {
        fVar2 = logf(param_1);
        fVar2 = (fVar2 + -2.9957323) / 6.9077554 + 0.0;
      }
    }
  }
  param_2 = (fVar2 * param_2 + 1.0) - param_2;
  if (0.0 < param_2) {
    if (1.0 <= param_2) {
      fVar3 = 20000.0;
    }
    else {
      iVar1 = _isnan((double)param_2);
      if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001479608e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        fVar2 = expf((float)((double)param_2 * 6.907755278982137 + 2.995732273553991));
        return fVar2;
      }
    }
  }
  return fVar3;
}



// FUNCTION 14796090e FUN_14796090e body=79 status=ok
// SIG undefined FUN_14796090e(void)

undefined8 * FUN_14796090e(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_14796c892(param_1,iVar1);
      FUN_14796c8f4(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14796095e FUN_14796095e body=340 status=ok
// SIG undefined FUN_14796095e(void)

void FUN_14796095e(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [7];
  char local_61;
  ulonglong local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_61 = '\0';
  local_60 = param_2;
  FUN_147970086(param_1 + 0x690,local_68,&local_60,&local_61);
  if (local_61 == '\0') {
    if (*(int *)(param_1 + 0x638) != *(int *)(param_1 + 0x664)) {
      uVar1 = ((uint)(local_60 >> 0x14) & 0xffff ^ (uint)(local_60 >> 4)) * -0x7a143595;
      uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
      lVar2 = param_1 + 0x668;
      if (*(longlong *)(param_1 + 0x670) != 0) {
        lVar2 = *(longlong *)(param_1 + 0x670);
      }
      iVar3 = *(int *)(lVar2 + (ulonglong)(*(int *)(param_1 + 0x678) - 1U & (uVar1 >> 0x10 ^ uVar1))
                               * 4);
      if (iVar3 != -1) {
        do {
          if (*(ulonglong *)(*(longlong *)(param_1 + 0x630) + (longlong)iVar3 * 0x28) == local_60) {
            local_30 = *(undefined8 *)(local_60 + 0x30);
            local_48 = 0;
            local_38 = &PTR_LAB_14a7ecb90;
            local_58 = FUN_14340adc4;
            FUN_1434130f2();
            FUN_1479620d4(param_1,local_60);
            *(byte *)(local_60 + 0x19b) = *(byte *)(local_60 + 0x19b) | 0x20;
            goto LAB_14796099f;
          }
          iVar3 = *(int *)(*(longlong *)(param_1 + 0x630) + (longlong)iVar3 * 0x28 + 0x20);
        } while (iVar3 != -1);
      }
    }
    FUN_1479620d4(param_1);
    FUN_1436fa464(param_1 + 0x8a8,local_60);
  }
LAB_14796099f:
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147960ab4 FUN_147960ab4 body=296 status=ok
// SIG undefined FUN_147960ab4(void)

void FUN_147960ab4(longlong param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  
  dVar2 = DAT_14c866ff8;
  dVar1 = *(double *)(param_1 + 200);
  if (dVar1 <= DAT_14c866ff8) {
    dVar3 = DAT_14c866ff8 - dVar1;
    fVar4 = 1.0;
    if (DAT_14c866ff8 < *(double *)(param_1 + 0xd0)) {
      fVar4 = (float)(dVar3 / (*(double *)(param_1 + 0xd0) - dVar1));
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
    *(float *)(param_1 + 0xf0) = fVar4;
    fVar4 = 1.0;
    if (dVar2 < *(double *)(param_1 + 0xd8)) {
      fVar4 = (float)(dVar3 / (*(double *)(param_1 + 0xd8) - dVar1));
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
    *(float *)(param_1 + 0xf8) = fVar4;
    fVar4 = 1.0;
    if (dVar2 < *(double *)(param_1 + 0xe0)) {
      fVar4 = (float)(dVar3 / (*(double *)(param_1 + 0xe0) - dVar1));
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
    *(float *)(param_1 + 0xf4) = fVar4;
    fVar4 = 1.0;
    if (dVar2 < *(double *)(param_1 + 0xe8)) {
      fVar4 = (float)(dVar3 / (*(double *)(param_1 + 0xe8) - dVar1));
      if (1.0 <= fVar4) {
        fVar4 = 1.0;
      }
      if (fVar4 <= 0.0) {
        fVar4 = 0.0;
      }
    }
  }
  else {
    *(undefined8 *)(param_1 + 0xf0) = 0;
    *(undefined4 *)(param_1 + 0xf8) = 0;
    fVar4 = 0.0;
  }
  *(float *)(param_1 + 0xfc) = fVar4;
  return;
}



// FUNCTION 147960bdc FUN_147960bdc body=251 status=ok
// SIG undefined FUN_147960bdc(void)

void FUN_147960bdc(longlong param_1,int param_2,char *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  char cVar5;
  float *pfVar6;
  
  if ((*(int *)(param_1 + 0xb8) == param_2) &&
     (cVar5 = FUN_147978524(param_3,param_1 + 0x94), cVar5 == '\0')) {
    return;
  }
  dVar4 = DAT_14c866ff8;
  *(double *)(param_1 + 200) = DAT_14c866ff8;
  pfVar6 = (float *)(param_3 + 0x18);
  if (*param_3 != '\0') {
    pfVar6 = (float *)(param_1 + 0xac);
  }
  *(double *)(param_1 + 0xd0) = (double)*pfVar6 + dVar4;
  pfVar6 = (float *)(param_3 + 8);
  if (*param_3 != '\0') {
    pfVar6 = (float *)(param_1 + 0x9c);
  }
  *(double *)(param_1 + 0xd8) = (double)*pfVar6 + dVar4;
  pfVar6 = (float *)(param_3 + 0x20);
  if (*param_3 != '\0') {
    pfVar6 = (float *)(param_1 + 0xb4);
  }
  *(double *)(param_1 + 0xe0) = (double)*pfVar6 + dVar4;
  pfVar6 = (float *)(param_3 + 0x10);
  if (*param_3 != '\0') {
    pfVar6 = (float *)(param_1 + 0xa4);
  }
  *(double *)(param_1 + 0xe8) = (double)*pfVar6 + dVar4;
  *(int *)(param_1 + 0xb8) = param_2;
  uVar1 = *(undefined8 *)(param_3 + 8);
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  *(undefined8 *)(param_1 + 0x94) = *(undefined8 *)param_3;
  *(undefined8 *)(param_1 + 0x9c) = uVar1;
  *(undefined8 *)(param_1 + 0xa4) = uVar2;
  *(undefined8 *)(param_1 + 0xac) = uVar3;
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)(param_3 + 0x20);
  return;
}



// FUNCTION 147960cd8 FUN_147960cd8 body=65 status=ok
// SIG undefined FUN_147960cd8(void)

void FUN_147960cd8(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14796aa2e(param_1,iVar1);
  }
  FUN_14796a9e3((longlong)iVar1 * 0x80 + *param_1,param_2);
  return;
}



// FUNCTION 147960d1a FUN_147960d1a body=783 status=ok
// SIG undefined FUN_147960d1a(void)

void FUN_147960d1a(longlong param_1,undefined4 param_2)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char cVar7;
  uint uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  float fVar13;
  undefined1 auStack_c8 [40];
  longlong *local_a0;
  undefined4 local_98;
  uint uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  int iStack_84;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  uint local_58;
  int iStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (DAT_14c76135c == 0) {
    plVar1 = (longlong *)(param_1 + 0x630);
    lVar9 = param_1 + 0x640;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = lVar9;
    if (*(int *)(param_1 + 0x658) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 0x658);
    }
    local_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    local_88 = local_58;
    iStack_84 = iStack_54;
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    local_a0 = plVar1;
    if ((iStack_54 != iVar10) || (uStack_60 != lVar9)) {
      do {
        lVar11 = *(longlong *)(*local_a0 + (longlong)iStack_84 * 0x28);
        FUN_1479620d4(param_1,lVar11);
        FUN_147961ab6(param_1,lVar11,0);
        *(undefined8 *)(lVar11 + 0x40) = 0;
        *(undefined8 *)(lVar11 + 0x48) = 0;
        *(undefined8 *)(lVar11 + 0x30) = 0;
        *(undefined8 *)(lVar11 + 0x38) = 0;
        *(undefined4 *)(lVar11 + 0x50) = 0;
        FUN_14796095e(param_1,lVar11);
        local_88 = local_88 & ~uStack_94;
        FUN_1449c0562(&local_98);
      } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar9 || iStack_84 != iVar10)
              );
    }
  }
  else {
    plVar1 = (longlong *)(param_1 + 0x630);
    local_78 = 0;
    uStack_70 = 0;
    lVar9 = param_1 + 0x640;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    iStack_54 = 0;
    uStack_50 = 0;
    uStack_60 = lVar9;
    if (*(int *)(param_1 + 0x658) == 0) {
      iVar10 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar10 = *(int *)(param_1 + 0x658);
    }
    uStack_80 = CONCAT44(uStack_4c,uStack_50);
    local_88 = local_58;
    iStack_84 = iStack_54;
    local_98 = (undefined4)local_68;
    uStack_94 = local_68._4_4_;
    uStack_90 = (undefined4)uStack_60;
    uStack_8c = uStack_60._4_4_;
    local_a0 = plVar1;
    if ((iStack_54 != iVar10) || (uStack_60 != lVar9)) {
      do {
        lVar11 = *(longlong *)(*local_a0 + 0x18 + (longlong)iStack_84 * 0x28);
        if ((*(byte *)(lVar11 + 0x19b) & 0x20) == 0) {
          if (*(char *)(lVar11 + 0x19e) == '\0') {
            lVar11 = *local_a0 + (longlong)iStack_84 * 0x28;
            fVar13 = *(float *)(param_1 + 0x5ac);
            if (0.5 <= fVar13) {
              fVar13 = 0.5;
            }
            cVar7 = FUN_1434137ba((undefined4 *)(lVar11 + 8),fVar13,param_2);
            uVar6 = uStack_70;
            if (cVar7 != '\0') {
              lVar12 = (longlong)(int)uStack_70;
              uVar8 = (int)uStack_70 + 1;
              uStack_70 = CONCAT44(uStack_70._4_4_,uVar8);
              if (uStack_70._4_4_ < uVar8) {
                FUN_1479723ba(&local_78,uVar6 & 0xffffffff);
              }
              *(undefined8 *)(local_78 + 0x10 + lVar12 * 0x18) = *(undefined8 *)(lVar11 + 0x18);
              uVar3 = *(undefined4 *)(lVar11 + 0xc);
              uVar4 = *(undefined4 *)(lVar11 + 0x10);
              uVar5 = *(undefined4 *)(lVar11 + 0x14);
              puVar2 = (undefined4 *)(local_78 + lVar12 * 0x18);
              *puVar2 = *(undefined4 *)(lVar11 + 8);
              puVar2[1] = uVar3;
              puVar2[2] = uVar4;
              puVar2[3] = uVar5;
            }
          }
          else {
            FUN_14796095e(param_1);
          }
        }
        local_88 = local_88 & ~uStack_94;
        FUN_1449c0562(&local_98);
      } while (local_a0 != plVar1 || (CONCAT44(uStack_8c,uStack_90) != lVar9 || iStack_84 != iVar10)
              );
      if ((longlong)(int)uStack_70 != 0) {
        lVar9 = (longlong)(int)uStack_70 * 0x18;
        lVar11 = local_78;
        do {
          FUN_147961fd8(param_1,lVar11);
          lVar11 = lVar11 + 0x18;
          lVar9 = lVar9 + -0x18;
        } while (lVar9 != 0);
      }
      if (local_78 != 0) {
        FUN_1400020a8(local_78);
      }
    }
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14796102a FUN_14796102a body=165 status=ok
// SIG undefined FUN_14796102a(void)

undefined8 FUN_14796102a(longlong param_1,uint param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  
  if (*(int *)(param_1 + 0x800) != *(int *)(param_1 + 0x82c)) {
    lVar6 = param_1 + 0x830;
    if (*(longlong *)(param_1 + 0x838) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x838);
    }
    iVar4 = *(int *)(lVar6 + (ulonglong)(*(int *)(param_1 + 0x840) - 1U & param_2) * 4);
    if (iVar4 != -1) {
      do {
        uVar5 = *(longlong *)(param_1 + 0x7f8) + (longlong)iVar4 * 0x58;
        if (*(uint *)(*(longlong *)(param_1 + 0x7f8) + (longlong)iVar4 * 0x58) == param_2)
        goto LAB_147961043;
        iVar4 = *(int *)(uVar5 + 0x50);
      } while (iVar4 != -1);
    }
  }
  uVar5 = 0;
LAB_147961043:
  lVar6 = uVar5 + 8;
  if (uVar5 == 0) {
    lVar6 = 0;
  }
  if (lVar6 != 0) {
    FUN_143402760(param_3,lVar6);
    uVar1 = *(undefined8 *)(lVar6 + 0x28);
    uVar2 = *(undefined8 *)(lVar6 + 0x30);
    uVar3 = *(undefined8 *)(lVar6 + 0x38);
    *param_4 = *(undefined8 *)(lVar6 + 0x20);
    param_4[1] = uVar1;
    param_4[2] = uVar2;
    param_4[3] = uVar3;
    uVar5 = (ulonglong)*(uint *)(lVar6 + 0x40);
    *(uint *)(param_4 + 4) = *(uint *)(lVar6 + 0x40);
  }
  return CONCAT71((int7)(uVar5 >> 8),lVar6 != 0);
}



// FUNCTION 1479610d0 FUN_1479610d0 body=102 status=ok
// SIG undefined FUN_1479610d0(void)

undefined1 * FUN_1479610d0(undefined1 *param_1,undefined1 *param_2)

{
  longlong lVar1;
  byte bVar2;
  
  *param_1 = *param_2;
  lVar1 = *(longlong *)(param_2 + 8);
  *(longlong *)(param_1 + 8) = lVar1;
  if ((lVar1 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  bVar2 = DAT_14c950c29;
  lVar1 = *(longlong *)(param_2 + 0x10);
  *(longlong *)(param_1 + 0x10) = lVar1;
  if ((lVar1 != 0 & bVar2) == 1) {
    FUN_1456cec3c();
  }
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  return param_1;
}



// FUNCTION 147961136 FUN_147961136 body=263 status=ok
// SIG undefined FUN_147961136(void)

void FUN_147961136(longlong param_1)

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
  plVar1 = (longlong *)(param_1 + 0x7a8);
  lVar2 = param_1 + 0x7b8;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  uStack_30 = 0;
  uStack_40 = lVar2;
  if (*(int *)(param_1 + 2000) == 0) {
    iVar3 = 0;
  }
  else {
    FUN_1449c0562(&local_48);
    iVar3 = *(int *)(param_1 + 2000);
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
      *(undefined1 *)(*local_70 + 0x88 + (longlong)iStack_54 * 0x98) = 0;
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



// FUNCTION 14796123e FUN_14796123e body=628 status=ok
// SIG undefined FUN_14796123e(void)

void FUN_14796123e(longlong param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  char cVar11;
  int iVar12;
  longlong lVar13;
  undefined1 auStack_e8 [40];
  undefined4 *local_c0;
  longlong local_b8;
  float local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  longlong local_98;
  uint local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong local_78;
  uint local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  plVar1 = (longlong *)(param_1 + 0x7a8);
  lVar2 = param_1 + 0x7b8;
  local_80 = 0x100000000;
  local_70 = 0xffffffff;
  iStack_6c = 0;
  local_68 = 0;
  iVar12 = 0;
  local_c0 = param_4;
  local_78 = lVar2;
  if (*(int *)(param_1 + 2000) != 0) {
    FUN_1449c0562(&local_80);
    iVar12 = *(int *)(param_1 + 2000);
  }
  local_90 = local_70;
  iStack_8c = iStack_6c;
  local_88 = local_68;
  local_84 = local_64;
  local_a0 = local_80;
  local_98 = local_78;
  local_b8 = param_1;
  local_a8 = plVar1;
  if ((iStack_6c != iVar12) || (local_78 != lVar2)) {
    do {
      if (*(int *)(*local_a8 + 0xc + (longlong)iStack_8c * 0x98) == param_2) {
        lVar13 = *local_a8 + (longlong)iStack_8c * 0x98;
        local_ac = 0.0;
        cVar11 = thunk_FUN_14004245a(*(undefined8 *)(lVar13 + 0x80),param_3,&local_ac,&local_80);
        puVar10 = local_c0;
        if (((cVar11 != '\0') && (local_ac == 0.0)) && (!NAN(local_ac))) {
          *local_c0 = *(undefined4 *)(lVar13 + 8);
          local_c0[1] = *(undefined4 *)(lVar13 + 0x10);
          FUN_143402760(local_c0 + 2,lVar13 + 0x18);
          uVar3 = *(undefined4 *)(lVar13 + 0x3c);
          uVar4 = *(undefined4 *)(lVar13 + 0x40);
          uVar5 = *(undefined4 *)(lVar13 + 0x44);
          uVar6 = *(undefined4 *)(lVar13 + 0x48);
          uVar7 = *(undefined4 *)(lVar13 + 0x4c);
          uVar8 = *(undefined4 *)(lVar13 + 0x50);
          uVar9 = *(undefined4 *)(lVar13 + 0x54);
          puVar10[10] = *(undefined4 *)(lVar13 + 0x38);
          puVar10[0xb] = uVar3;
          puVar10[0xc] = uVar4;
          puVar10[0xd] = uVar5;
          puVar10[0xe] = uVar6;
          puVar10[0xf] = uVar7;
          puVar10[0x10] = uVar8;
          puVar10[0x11] = uVar9;
          puVar10[0x12] = *(undefined4 *)(lVar13 + 0x58);
          FUN_1478b6290(puVar10 + 0x14,lVar13 + 0x60);
          FUN_1479614b4(puVar10 + 0x18,lVar13 + 0x70);
          *(undefined1 *)(puVar10 + 0x1c) = *(undefined1 *)(lVar13 + 0x88);
          goto LAB_14796133f;
        }
      }
      local_90 = local_90 & ~local_a0._4_4_;
      FUN_1449c0562(&local_a0);
    } while ((local_98 != lVar2 || iStack_8c != iVar12) || local_a8 != plVar1);
  }
  puVar10 = local_c0;
  *local_c0 = 0;
  cVar11 = FUN_14796102a(local_b8,param_2,local_c0 + 2,local_c0 + 10);
  if (cVar11 != '\0') {
    iVar12 = puVar10[0x17];
    FUN_145bf91aa(*(undefined8 *)(puVar10 + 0x14),puVar10[0x16]);
    puVar10[0x16] = 0;
    if ((iVar12 < 0) && (puVar10[0x17] != 0)) {
      FUN_14796d2a2(puVar10 + 0x14);
    }
  }
LAB_14796133f:
  if ((local_60 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1479614b4 FUN_1479614b4 body=95 status=ok
// SIG undefined FUN_1479614b4(void)

undefined8 * FUN_1479614b4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_145bf9179(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_147965a2c(param_1,iVar1);
      FUN_147965a8e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 147961514 FUN_147961514 body=120 status=ok
// SIG undefined FUN_147961514(void)

void FUN_147961514(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  code **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_40;
  local_10 = 0;
  local_18 = &local_30;
  local_30 = FUN_14340a872;
  local_20 = &LAB_14796d3b2;
  local_40 = param_2;
  local_38 = param_3;
  FUN_14796d2d2(param_1 + 0x218);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14796158e FUN_14796158e body=120 status=ok
// SIG undefined FUN_14796158e(void)

void FUN_14796158e(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  undefined1 *local_20;
  code **local_18;
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = &local_40;
  local_10 = 0;
  local_18 = &local_30;
  local_30 = FUN_14340a892;
  local_20 = &LAB_14796d3b2;
  local_40 = param_2;
  local_38 = param_3;
  FUN_14796d2d2(param_1 + 0x218);
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147961608 FUN_147961608 body=238 status=ok
// SIG undefined FUN_147961608(void)

void FUN_147961608(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = (uint)((ulonglong)param_3 >> 0x10);
  uVar3 = (uint)param_3 & 0xffff;
  local_58 = param_3;
  lVar2 = FUN_14796e226(param_1 + 0x4a0,
                        ((uint)param_3 << 0x10 | uVar3) + (int)((ulonglong)param_3 >> 0x20) +
                        (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar3 >> 4));
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(longlong *)(lVar2 + 8) = param_2;
  *(undefined4 *)(lVar2 + 0x18) = param_5;
  *(undefined4 *)(lVar2 + 0x1c) = param_6;
  *(undefined4 *)(lVar2 + 0x20) = param_4;
  FUN_1434006ca(param_1);
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479616f8 FUN_1479616f8 body=44 status=ok
// SIG undefined FUN_1479616f8(void)

void FUN_1479616f8(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_14796e61e(param_1 + 0x4a0);
  if (iVar1 != 0) {
    FUN_1434006ca(param_1);
    return;
  }
  return;
}



// FUNCTION 147961724 FUN_147961724 body=327 status=ok
// SIG undefined FUN_147961724(void)

void FUN_147961724(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong *plVar9;
  float fVar10;
  float fVar11;
  longlong *local_60;
  
  iVar1 = *(int *)(param_1 + 0x1f8);
  if ((longlong)iVar1 == 0) {
    local_60 = (longlong *)0x0;
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0x1f0);
    lVar8 = 0;
    plVar9 = (longlong *)0x0;
    local_60 = (longlong *)0x0;
    plVar6 = (longlong *)0x0;
    do {
      plVar2 = *(longlong **)(lVar5 + lVar8);
      cVar4 = (**(code **)(*plVar2 + 0x48))(plVar2);
      if (cVar4 == '\0') {
        lVar3 = plVar2[2];
        if (lVar3 != 0) {
          plVar7 = plVar6;
          if (((*(int *)(lVar3 + 0xc4) != 2) && ((*(byte *)(lVar3 + 0xcd) & 0x20) == 0)) &&
             (plVar7 = plVar2, plVar6 != (longlong *)0x0)) {
            fVar10 = (float)FUN_14795c614(lVar3);
            fVar11 = (float)FUN_14795c614(plVar6[2]);
            plVar7 = plVar6;
            if (fVar10 < fVar11) {
              plVar7 = plVar2;
            }
          }
          plVar6 = plVar7;
          if (local_60 != (longlong *)0x0) {
            fVar10 = (float)FUN_14795c614(lVar3);
            fVar11 = (float)FUN_14795c614(local_60[2]);
            if (fVar11 <= fVar10) goto LAB_14796177d;
          }
          local_60 = plVar2;
        }
      }
      else {
        if (plVar9 != (longlong *)0x0) {
          fVar10 = (float)FUN_14795c614(plVar2[2]);
          fVar11 = (float)FUN_14795c614(plVar9[2]);
          if (fVar11 <= fVar10) goto LAB_14796177d;
        }
        plVar9 = plVar2;
      }
LAB_14796177d:
      lVar8 = lVar8 + 8;
    } while ((longlong)iVar1 * 8 != lVar8);
    if (plVar9 != (longlong *)0x0) {
      lVar5 = *plVar9;
      plVar6 = plVar9;
      goto LAB_147961818;
    }
    if (plVar6 != (longlong *)0x0) {
      lVar5 = *plVar6;
      goto LAB_147961818;
    }
  }
  plVar6 = local_60;
  lVar5 = *plVar6;
LAB_147961818:
                    /* WARNING: Could not recover jumptable at 0x00014796182d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 0x40))(plVar6);
  return;
}



// FUNCTION 14796186c FUN_14796186c body=116 status=ok
// SIG undefined FUN_14796186c(void)

void FUN_14796186c(longlong *param_1,int param_2,char param_3)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140518214(param_1,iVar1);
    }
    FUN_14796ee70((longlong)iVar1 * 0x80 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 1) = param_2, param_3 == '\x01')) {
      FUN_141063fe8(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1479618e2 FUN_1479618e2 body=203 status=ok
// SIG undefined FUN_1479618e2(void)

undefined8 * FUN_1479618e2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  *param_1 = *param_2;
  FUN_1479610d0(param_1 + 1,param_2 + 1);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 6);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 7);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 8);
  uVar9 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x34) = uVar5;
  *(undefined4 *)(param_1 + 7) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar7;
  *(undefined4 *)(param_1 + 8) = uVar8;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar9;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
  param_1[10] = 0;
  iVar1 = *(int *)(param_2 + 0xb);
  uVar2 = param_2[10];
  *(int *)(param_1 + 0xb) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  }
  else {
    FUN_1478c3a1c(param_1 + 10,iVar1,0);
    FUN_1478c3a8f(param_1[10],uVar2,iVar1);
  }
  param_1[0xc] = 0;
  iVar1 = *(int *)(param_2 + 0xd);
  uVar2 = param_2[0xc];
  *(int *)(param_1 + 0xd) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x6c) = 0;
  }
  else {
    FUN_147965a2c(param_1 + 0xc,iVar1,0);
    FUN_147965a8e(param_1[0xc],uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  return param_1;
}



// FUNCTION 1479619ae FUN_1479619ae body=146 status=ok
// SIG undefined FUN_1479619ae(void)

void FUN_1479619ae(longlong param_1,undefined8 *param_2)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  code *local_30;
  undefined8 *local_28;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_20 = FUN_1459586ea();
  if ((local_20 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(local_20);
  }
  local_40 = *param_2;
  local_28 = &local_40;
  local_38 = param_2[1];
  local_30 = FUN_14796eea2;
  FUN_14796d2d2(param_1 + 0x218,&local_30,&local_20);
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147961a42 FUN_147961a42 body=58 status=ok
// SIG undefined FUN_147961a42(void)

void FUN_147961a42(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_14796eee6(param_1 + 0x40,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147961a75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 147961a7c FUN_147961a7c body=58 status=ok
// SIG undefined FUN_147961a7c(void)

void FUN_147961a7c(longlong param_1,undefined8 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_14796eee6(param_1 + 0x58,param_2);
                    /* WARNING: Could not recover jumptable at 0x000147961aaf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  return;
}



// FUNCTION 147961ab6 FUN_147961ab6 body=148 status=ok
// SIG undefined FUN_147961ab6(void)

void FUN_147961ab6(undefined8 param_1,longlong param_2,longlong param_3)

{
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  if (param_3 != 0) {
    FUN_147961b4c(&local_38,param_3);
  }
  if (*(longlong **)(param_2 + 0x18) != (longlong *)0x0) {
    (**(code **)(**(longlong **)(param_2 + 0x18) + 0x348))();
  }
  FUN_143406258(param_1,param_2,&local_38,0);
  FUN_145aa5488(local_38,uStack_30 & 0xffffffff);
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147961b4c FUN_147961b4c body=95 status=ok
// SIG undefined FUN_147961b4c(void)

void FUN_147961b4c(longlong *param_1,undefined8 *param_2)

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
    FUN_147046b0e(param_1,iVar2);
  }
  FUN_1477cf9c9((longlong)iVar2 * 0xa0 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 147961c38 FUN_147961c38 body=339 status=ok
// SIG undefined FUN_147961c38(void)

ulonglong FUN_147961c38(longlong param_1,longlong param_2)

{
  float fVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 unaff_RBX;
  ulonglong uVar6;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x2b0))();
  uVar6 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (((cVar2 == '\0') &&
      ((((*(byte *)(param_1 + 0x5b0) & 2) == 0 ||
        ((cVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x2a8))(), cVar2 == '\0' &&
         ((~*(byte *)(param_2 + 0x199) & 0xc) != 0)))) &&
       (cVar2 = (**(code **)(**(longlong **)(param_2 + 0x18) + 0x2d0))(), cVar2 == '\0')))) &&
     ((((((*(byte *)(param_2 + 0x198) & 4) != 0 && ((*(byte *)(param_2 + 0x388) & 1) != 0)) &&
        (*(float *)(param_2 + 0x4e4) == 1.0)) &&
       ((!NAN(*(float *)(param_2 + 0x4e4)) && (*(float *)(param_2 + 0x4e8) == 1.0)))) &&
      (!NAN(*(float *)(param_2 + 0x4e8)))))) {
    bVar3 = FUN_146269f19();
    lVar5 = (ulonglong)(bVar3 ^ 1) * 0x20;
    fVar1 = *(float *)(param_1 + 0x198 + lVar5);
    if (((fVar1 == 1.0) && (!NAN(fVar1))) &&
       ((fVar1 = *(float *)(param_1 + 0x19c + lVar5), fVar1 == 1.0 && (!NAN(fVar1))))) {
      local_38 = *(undefined8 *)(param_2 + 0x250);
      uStack_30 = *(undefined8 *)(param_2 + 600);
      local_28 = *(undefined8 *)(param_2 + 0x260);
      uVar4 = FUN_1479627d2(param_1,&local_38,
                            *(float *)(param_2 + 0x22c) * *(float *)(param_2 + 0x29c));
      uVar6 = (ulonglong)uVar4;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6 & 0xffffffff;
}



// FUNCTION 147961d8c FUN_147961d8c body=586 status=ok
// SIG undefined FUN_147961d8c(void)

void FUN_147961d8c(longlong param_1,longlong param_2,ulonglong *param_3,char param_4)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  uint uVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  longlong *local_60;
  ulonglong local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_2 + 0x188);
  if (plVar2 == (longlong *)0x0) {
    plVar2 = *(longlong **)(param_2 + 0x18);
    if (plVar2 == (longlong *)0x0) goto LAB_147961f9e;
    uVar7 = (int)*(ulonglong *)(param_2 + 0x30) + (int)(*(ulonglong *)(param_2 + 0x30) / 0xffffffff)
    ;
    local_58 = (ulonglong)
               (uVar7 * 0x40 + *(int *)(param_2 + 0x54) + (uVar7 >> 2) + 0x9e3779b9 ^ uVar7);
    uStack_50 = CONCAT44(uStack_50._4_4_,(float)*(int *)(param_1 + 0x74));
    local_48 = *param_3;
    *param_3 = 0;
    local_40 = (undefined4)param_3[1];
    local_3c = *(undefined4 *)((longlong)param_3 + 0xc);
    param_3[1] = 0;
    local_38 = *(undefined4 *)(param_1 + 0x90);
    (**(code **)(*plVar2 + 0x368))(plVar2,&local_68);
    plVar2 = local_60;
    if ((undefined8 *)(param_2 + 0x188) != &local_68) {
      *(undefined8 *)(param_2 + 0x188) = local_68;
      local_68 = 0;
      plVar3 = *(longlong **)(param_2 + 400);
      if (local_60 != plVar3) {
        local_60 = (longlong *)0x0;
        *(longlong **)(param_2 + 400) = plVar2;
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
      }
    }
    plVar2 = local_60;
    if (local_60 != (longlong *)0x0) {
      LOCK();
      plVar3 = local_60 + 1;
      *(int *)plVar3 = (int)*plVar3 + -1;
      UNLOCK();
      if ((int)*plVar3 == 0) {
        (**(code **)*local_60)(local_60);
        LOCK();
        piVar1 = (int *)((longlong)plVar2 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar2 + 0x10))(plVar2);
        }
      }
    }
    FUN_145aa5488(local_48,local_40);
    uVar6 = local_48;
  }
  else {
    if (param_4 == '\0') {
      (**(code **)(*plVar2 + 0x38))(plVar2,param_3);
      goto LAB_147961f9e;
    }
    local_58 = 0;
    uStack_50 = 0;
    if (*(longlong *)(param_2 + 0x30) != 0) {
      lVar4 = FUN_1479bd5a0();
      if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x460) != 0)) {
        uVar5 = (**(code **)(*(longlong *)(lVar4 + 0x2a8) + 0x98))(lVar4 + 0x2a8);
        FUN_1477c2298(&local_58,uVar5);
        (**(code **)(**(longlong **)(lVar4 + 0x460) + 0x340))
                  (*(longlong **)(lVar4 + 0x460),&local_58,0);
      }
    }
    FUN_1470429a6(param_3,&local_58);
    plVar2 = *(longlong **)(param_2 + 0x188);
    (**(code **)(*plVar2 + 0x48))(plVar2,&local_58);
    FUN_145aa5488(local_58,uStack_50 & 0xffffffff);
    uVar6 = local_58;
  }
  if (uVar6 != 0) {
    FUN_1400020a8();
  }
LAB_147961f9e:
  FUN_145aa5488(*param_3,(int)param_3[1]);
  if (*param_3 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147961fd8 FUN_147961fd8 body=106 status=ok
// SIG undefined FUN_147961fd8(void)

void FUN_147961fd8(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  uStack_20 = 0;
  FUN_143406258(0,*(undefined8 *)(param_2 + 0x10),&local_28,param_2);
  lVar1 = local_28;
  FUN_145aa5488(local_28,uStack_20 & 0xffffffff);
  if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_10 ^ (ulonglong)auStack_48);
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147962050 FUN_147962050 body=132 status=ok
// SIG undefined FUN_147962050(void)

void FUN_147962050(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(uVar1 >> 0x10 ^ uVar1) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x10) == param_2) {
          FUN_14796ffba(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_1 + 8);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1479620d4 FUN_1479620d4 body=320 status=ok
// SIG undefined FUN_1479620d4(void)

void FUN_1479620d4(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  
  lVar2 = *(longlong *)(param_2 + 0x30);
  if (lVar2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x710) == *(int *)(param_1 + 0x73c)) {
    return;
  }
  lVar5 = param_1 + 0x740;
  if (*(longlong *)(param_1 + 0x748) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x748);
  }
  iVar4 = *(int *)(lVar5 + (ulonglong)
                           (*(int *)(param_1 + 0x750) - 1U &
                           (int)lVar2 + (int)((ulonglong)lVar2 >> 0x20) * 0x17) * 4);
  if (iVar4 == -1) {
    return;
  }
  lVar5 = *(longlong *)(param_1 + 0x708);
  do {
    lVar1 = lVar5 + (longlong)iVar4 * 0x20;
    if (*(longlong *)(lVar5 + (longlong)iVar4 * 0x20) == lVar2) {
      if ((longlong *)(lVar1 + 8) == (longlong *)0x0 || lVar1 == 0) {
        return;
      }
      iVar4 = *(int *)(lVar1 + 0x10);
      if (0 < (longlong)iVar4) {
        lVar5 = *(longlong *)(lVar1 + 8);
        uVar6 = (longlong)iVar4 + 1;
        iVar7 = 0;
        while ((lVar3 = *(longlong *)(lVar5 + -0x10 + uVar6 * 8), lVar3 == 0 ||
               (*(int *)(lVar3 + 0x54) != *(int *)(param_2 + 0x54)))) {
          iVar7 = iVar7 + 1;
          uVar6 = uVar6 - 1;
          if (uVar6 < 2) {
            return;
          }
        }
        if (iVar7 != 0) {
          iVar8 = 1;
          if (iVar7 < 1) {
            iVar8 = iVar7;
          }
          memmove((void *)(lVar5 + -0x10 + uVar6 * 8),
                  (void *)(lVar5 + (ulonglong)(uint)(iVar4 - iVar8) * 8),(longlong)iVar8 << 3);
          iVar4 = *(int *)(lVar1 + 0x10);
        }
        iVar4 = iVar4 + -1;
        *(int *)(lVar1 + 0x10) = iVar4;
      }
      if (iVar4 != 0) {
        return;
      }
      FUN_147970a88((longlong *)(param_1 + 0x708),lVar2);
      FUN_147970b92(param_1 + 0x758,lVar2);
      return;
    }
    iVar4 = *(int *)(lVar1 + 0x18);
  } while (iVar4 != -1);
  return;
}



// FUNCTION 147962214 FUN_147962214 body=564 status=ok
// SIG undefined FUN_147962214(void)

void FUN_147962214(longlong param_1,longlong param_2,longlong *param_3)

{
  void *pvVar1;
  longlong lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  int iVar6;
  longlong *plVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_e8 [32];
  void *local_c8;
  int local_c0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  code *local_88 [2];
  undefined8 *local_78;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  cVar4 = FUN_146269f19();
  if (cVar4 == '\0') {
    lVar9 = *param_3;
    lVar8 = param_3[2];
    param_3[2] = 0;
    local_98 = param_3[6];
    uStack_90 = param_3[7];
    local_a8 = (undefined4)param_3[4];
    uStack_a4 = *(undefined4 *)((longlong)param_3 + 0x24);
    uStack_a0 = (undefined4)param_3[5];
    uStack_9c = *(undefined4 *)((longlong)param_3 + 0x2c);
    if (lVar9 != 0) {
      *param_3 = 0;
    }
    local_88[0] = (code *)0x0;
    local_78 = (undefined8 *)FUN_14001cc68(0x60,0x10);
    *local_78 = &PTR_LAB_14a7ecc10;
    local_78[2] = param_1;
    local_78[3] = param_2;
    local_78[4] = lVar9;
    local_78[6] = lVar8;
    *(undefined4 *)(local_78 + 10) = (undefined4)local_98;
    *(undefined4 *)((longlong)local_78 + 0x54) = local_98._4_4_;
    *(undefined4 *)(local_78 + 0xb) = (undefined4)uStack_90;
    *(undefined4 *)((longlong)local_78 + 0x5c) = uStack_90._4_4_;
    *(undefined4 *)(local_78 + 8) = local_a8;
    *(undefined4 *)((longlong)local_78 + 0x44) = uStack_a4;
    *(undefined4 *)(local_78 + 9) = uStack_a0;
    *(undefined4 *)((longlong)local_78 + 0x4c) = uStack_9c;
    if (local_78 + 2 != (longlong *)0x0) {
      local_88[0] = FUN_14340af5c;
    }
    FUN_1415826cc(local_88);
  }
  else if (*(int *)(param_1 + 0x710) != *(int *)(param_1 + 0x73c)) {
    lVar9 = param_1 + 0x740;
    if (*(longlong *)(param_1 + 0x748) != 0) {
      lVar9 = *(longlong *)(param_1 + 0x748);
    }
    iVar6 = *(int *)(lVar9 + (ulonglong)
                             (*(int *)(param_1 + 0x750) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar6 != -1) {
      do {
        lVar9 = *(longlong *)(param_1 + 0x708) + (longlong)iVar6 * 0x20;
        if (*(longlong *)(*(longlong *)(param_1 + 0x708) + (longlong)iVar6 * 0x20) == param_2) {
          if (lVar9 != 0) {
            local_c8 = (void *)0x0;
            local_c0 = *(int *)(lVar9 + 0x10);
            lVar8 = (longlong)local_c0;
            pvVar1 = *(void **)(lVar9 + 8);
            if (lVar8 != 0) {
              FUN_14796e710(&local_c8,local_c0);
              memcpy(local_c8,pvVar1,lVar8 << 3);
              pvVar1 = local_c8;
              lVar9 = (longlong)local_c0;
              if (lVar9 != 0) {
                lVar8 = 0;
                do {
                  lVar2 = *(longlong *)((longlong)pvVar1 + lVar8);
                  if (lVar2 != 0) {
                    pcVar3 = (code *)*param_3;
                    plVar7 = (longlong *)param_3[2];
                    if ((longlong *)param_3[2] == (longlong *)0x0) {
                      plVar7 = param_3 + 4;
                    }
                    uVar5 = (**(code **)(*plVar7 + 8))();
                    (*pcVar3)(uVar5,lVar2);
                  }
                  lVar8 = lVar8 + 8;
                } while (lVar9 * 8 != lVar8);
              }
              if (local_c8 != (void *)0x0) {
                FUN_1400020a8(local_c8);
              }
            }
          }
          break;
        }
        iVar6 = *(int *)(lVar9 + 0x18);
      } while (iVar6 != -1);
    }
  }
  if (*param_3 != 0) {
    plVar7 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar7 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar7 + 0x10))(plVar7);
  }
  if ((local_40 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 147962554 FUN_147962554 body=153 status=ok
// SIG undefined FUN_147962554(void)

undefined8 FUN_147962554(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  FUN_146269f19();
  if (*(int *)(param_1 + 0x760) != *(int *)(param_1 + 0x78c)) {
    lVar4 = param_1 + 0x790;
    if (*(longlong *)(param_1 + 0x798) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x798);
    }
    iVar2 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x7a0) - 1U &
                             (int)param_2 + (int)((ulonglong)param_2 >> 0x20) * 0x17) * 4);
    if (iVar2 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x758) + (longlong)iVar2 * 0x18);
        if (*plVar1 == param_2) {
          plVar3 = plVar1 + 1;
          if (plVar3 == (longlong *)0x0 || plVar1 == (longlong *)0x0) {
            return 0;
          }
          return CONCAT71((int7)((ulonglong)plVar3 >> 8),(char)*plVar3);
        }
        iVar2 = (int)plVar1[2];
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1479625ee FUN_1479625ee body=187 status=ok
// SIG undefined FUN_1479625ee(void)

void FUN_1479625ee(longlong param_1,undefined8 param_2,byte param_3)

{
  char cVar1;
  byte *pbVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  byte local_69;
  undefined1 *local_68;
  undefined8 local_58;
  undefined **local_48;
  longlong local_40;
  undefined8 local_38;
  byte local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_78 = param_2;
  local_69 = param_3;
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    local_58 = 0;
    local_48 = &PTR_LAB_14a7ecc30;
    local_68 = &LAB_14340b048;
    local_40 = param_1;
    local_38 = param_2;
    local_30 = param_3;
    FUN_1415826cc();
  }
  else {
    pbVar2 = (byte *)FUN_14797051c(param_1 + 0x758,
                                   (int)((ulonglong)param_2 >> 0x20) * 0x17 + (int)param_2,&local_78
                                   ,&local_69);
    *pbVar2 = *pbVar2 | local_69;
  }
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479626aa FUN_1479626aa body=133 status=ok
// SIG undefined FUN_1479626aa(void)

void FUN_1479626aa(longlong param_1,longlong param_2)

{
  undefined1 auStack_88 [40];
  longlong local_60;
  code *local_58;
  undefined8 local_48;
  undefined **local_38;
  undefined8 local_30;
  undefined1 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = *(undefined8 *)(param_2 + 0x30);
  local_48 = 0;
  local_38 = &PTR_LAB_14a83c470;
  local_28 = 0;
  local_58 = FUN_143473988;
  local_60 = param_2;
  FUN_1434130f2();
  FUN_147962730(param_1 + 0x5b8,&local_60,1);
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147962730 FUN_147962730 body=162 status=ok
// SIG undefined FUN_147962730(void)

int FUN_147962730(longlong *param_1,longlong *param_2,char param_3)

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
      FUN_14796f6a2(param_1);
      iVar4 = (int)param_1[1];
    }
  }
  return iVar1 - iVar4;
}



// FUNCTION 1479627d2 FUN_1479627d2 body=125 status=ok
// SIG undefined FUN_1479627d2(void)

char FUN_1479627d2(longlong param_1,undefined8 param_2,float param_3)

{
  int iVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  cVar2 = '\x01';
  if (param_3 < DAT_14c761324) {
    cVar2 = FUN_146269f19();
    FUN_144a61b4f();
    piVar3 = (int *)(param_1 + 0x138);
    if (cVar2 != '\0') {
      piVar3 = (int *)(param_1 + 0x1e8);
    }
    iVar1 = *piVar3;
    if (iVar1 < 1) {
      cVar2 = '\0';
    }
    else {
      iVar4 = 0;
      do {
        cVar2 = FUN_147962850(param_1,param_2,iVar4,param_3);
        if (cVar2 != '\0') {
          return cVar2;
        }
        bVar5 = iVar1 + -1 != iVar4;
        cVar2 = '\0';
        iVar4 = iVar4 + 1;
      } while (bVar5);
    }
  }
  return cVar2;
}



// FUNCTION 147962850 FUN_147962850 body=218 status=ok
// SIG undefined FUN_147962850(void)

bool FUN_147962850(longlong param_1,double *param_2,int param_3,float param_4)

{
  char cVar1;
  double *pdVar2;
  longlong lVar3;
  longlong lVar4;
  double dVar5;
  
  if (DAT_14c761324 <= param_4) {
    return true;
  }
  if (param_3 == -1) {
    return false;
  }
  cVar1 = FUN_146269f19();
  if (cVar1 == '\0') {
    lVar4 = (longlong)param_3 * 0x80;
    lVar3 = *(longlong *)(param_1 + 0x130) + lVar4;
    if ((*(byte *)(*(longlong *)(param_1 + 0x130) + 0x78 + lVar4) & 1) != 0) {
      dVar5 = *(double *)(lVar3 + 0x70);
      pdVar2 = (double *)(lVar3 + 0x60);
      goto LAB_1479628dd;
    }
  }
  else {
    lVar4 = (longlong)param_3 * 0x110;
    lVar3 = *(longlong *)(param_1 + 0x1e0) + lVar4;
    if ((*(byte *)(*(longlong *)(param_1 + 0x1e0) + 0x90 + lVar4) & 1) != 0) {
      dVar5 = *(double *)(lVar3 + 0x88);
      pdVar2 = (double *)(lVar3 + 0x78);
      goto LAB_1479628dd;
    }
  }
  dVar5 = *(double *)(lVar3 + 0x30);
  pdVar2 = (double *)(lVar3 + 0x20);
LAB_1479628dd:
  return (dVar5 - param_2[2]) * (dVar5 - param_2[2]) +
         (*pdVar2 - *param_2) * (*pdVar2 - *param_2) +
         (pdVar2[1] - param_2[1]) * (pdVar2[1] - param_2[1]) < (double)(param_4 * param_4);
}



// FUNCTION 14796292a FUN_14796292a body=129 status=ok
// SIG undefined FUN_14796292a(void)

bool FUN_14796292a(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *param_3 = 0x7f7fffff;
  FUN_146269f19();
  FUN_144a61b4f();
  iVar1 = FUN_1479629ac(param_1,param_2,&local_2c,1);
  puVar2 = &DAT_14c761324;
  if (iVar1 != -1) {
    puVar2 = &local_2c;
  }
  *param_3 = *puVar2;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479629ac FUN_1479629ac body=467 status=ok
// SIG undefined FUN_1479629ac(void)

ulonglong FUN_1479629ac(longlong param_1,double *param_2,float *param_3,char param_4)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  double *pdVar4;
  longlong lVar5;
  int *piVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  float fVar11;
  double dVar12;
  
  *param_3 = 0.0;
  cVar3 = FUN_146269f19();
  if (cVar3 == '\0') {
    lVar7 = *(longlong *)(param_1 + 0x130);
    if ((param_4 != '\0') && ((*(byte *)(lVar7 + 0x78) & 1) != 0)) {
      dVar12 = *(double *)(lVar7 + 0x70);
      pdVar4 = (double *)(lVar7 + 0x60);
      goto LAB_147962a1c;
    }
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0x1e0);
    if ((param_4 != '\0') && ((*(byte *)(lVar7 + 0x90) & 1) != 0)) {
      dVar12 = *(double *)(lVar7 + 0x88);
      pdVar4 = (double *)(lVar7 + 0x78);
      goto LAB_147962a1c;
    }
  }
  dVar12 = *(double *)(lVar7 + 0x30);
  pdVar4 = (double *)(lVar7 + 0x20);
LAB_147962a1c:
  *param_3 = (float)((dVar12 - param_2[2]) * (dVar12 - param_2[2]) +
                    (pdVar4[1] - param_2[1]) * (pdVar4[1] - param_2[1]) +
                    (*pdVar4 - *param_2) * (*pdVar4 - *param_2));
  cVar3 = FUN_146269f19();
  piVar6 = (int *)(param_1 + 0x138);
  if (cVar3 != '\0') {
    piVar6 = (int *)(param_1 + 0x1e8);
  }
  iVar1 = *piVar6;
  uVar8 = 0;
  if (1 < (longlong)iVar1) {
    uVar8 = 0;
    uVar9 = 1;
    lVar10 = 0xf8;
    lVar7 = 0x1a0;
    do {
      cVar3 = FUN_146269f19();
      if (cVar3 == '\0') {
        lVar2 = *(longlong *)(param_1 + 0x130);
        if ((param_4 == '\0') || ((*(byte *)(lVar2 + lVar10) & 1) == 0)) {
          pdVar4 = (double *)(lVar2 + lVar10 + -0x58);
          dVar12 = *(double *)(lVar2 + lVar10 + -0x48);
        }
        else {
          pdVar4 = (double *)(uVar9 * 0x80 + lVar2 + 0x60);
          dVar12 = *(double *)(lVar2 + -8 + lVar10);
        }
      }
      else {
        lVar2 = *(longlong *)(param_1 + 0x1e0);
        lVar5 = uVar9 * 0x110 + lVar2;
        if ((param_4 == '\0') || ((*(byte *)(lVar2 + lVar7) & 1) == 0)) {
          pdVar4 = (double *)(lVar5 + 0x20);
          dVar12 = *(double *)(lVar2 + -0x60 + lVar7);
        }
        else {
          pdVar4 = (double *)(lVar5 + 0x78);
          dVar12 = *(double *)(lVar2 + -8 + lVar7);
        }
      }
      fVar11 = (float)((dVar12 - param_2[2]) * (dVar12 - param_2[2]) +
                      (pdVar4[1] - param_2[1]) * (pdVar4[1] - param_2[1]) +
                      (*pdVar4 - *param_2) * (*pdVar4 - *param_2));
      if (fVar11 < *param_3) {
        *param_3 = fVar11;
        uVar8 = uVar9 & 0xffffffff;
      }
      uVar9 = uVar9 + 1;
      lVar10 = lVar10 + 0x80;
      lVar7 = lVar7 + 0x110;
    } while ((longlong)iVar1 != uVar9);
  }
  return uVar8;
}



// FUNCTION 147962b80 FUN_147962b80 body=84 status=ok
// SIG undefined FUN_147962b80(void)

void FUN_147962b80(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = *(undefined8 *)(param_2 + 0x20);
  uStack_20 = *(undefined8 *)(param_2 + 0x28);
  local_18 = *(undefined8 *)(param_2 + 0x30);
  FUN_1479629ac((int)local_18,&local_28,local_c,1);
  if ((local_8 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147962bd6 FUN_147962bd6 body=818 status=ok
// SIG undefined FUN_147962bd6(void)

void FUN_147962bd6(undefined8 param_1,double *param_2,float *param_3,float *param_4)

{
  double dVar1;
  double dVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  
  dVar4 = param_2[6];
  dVar2 = param_2[7];
  dVar8 = param_2[8];
  dVar1 = param_2[9];
  dVar5 = dVar4 * 0.0 - dVar2 * 1.0;
  dVar6 = dVar2 * 0.0 - dVar8 * 0.0;
  dVar7 = dVar8 * 1.0 - dVar4 * 0.0;
  dVar6 = dVar6 + dVar6;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  fVar9 = (float)((dVar5 * dVar1 + 0.0 + (dVar7 * dVar4 - dVar6 * dVar2)) * param_2[2] +
                 *param_2 * ((dVar5 * dVar2 - dVar7 * dVar8) + dVar1 * dVar6 + 1.0) +
                 ((dVar8 * dVar6 - dVar4 * dVar5) + param_2[9] * dVar7 + 0.0) * param_2[1]);
  fVar3 = fVar9;
  if (1.0 <= fVar9) {
    fVar3 = 1.0;
  }
  fVar3 = acosf((float)(-(uint)(fVar9 < -1.0) & 0xbf800000 | ~-(uint)(fVar9 < -1.0) & (uint)fVar3));
  *param_3 = fVar3 * 57.295776;
  dVar7 = param_2[6];
  dVar4 = param_2[7];
  dVar2 = param_2[8];
  dVar1 = param_2[9];
  dVar8 = dVar7 * 1.0 - dVar4 * 0.0;
  dVar6 = dVar4 * 0.0 - dVar2 * 1.0;
  dVar5 = dVar2 * 0.0 - dVar7 * 0.0;
  dVar6 = dVar6 + dVar6;
  dVar5 = dVar5 + dVar5;
  dVar8 = dVar8 + dVar8;
  dVar7 = (double)(float)((dVar8 * dVar1 + 0.0 + (dVar5 * dVar7 - dVar6 * dVar4)) * param_2[2] +
                         *param_2 * ((dVar8 * dVar4 - dVar5 * dVar2) + dVar1 * dVar6 + 0.0) +
                         ((dVar2 * dVar6 - dVar7 * dVar8) + param_2[9] * dVar5 + 1.0) * param_2[1]);
  dVar1 = (double)fVar9;
  dVar4 = dVar1 * dVar1 + dVar7 * dVar7;
  dVar7 = (double)(~-(ulonglong)(9.99999993922529e-09 < dVar4) & (ulonglong)dVar7 |
                  (ulonglong)((1.0 / SQRT(dVar4)) * dVar7) &
                  -(ulonglong)(9.99999993922529e-09 < dVar4));
  if (9.99999993922529e-09 < dVar4) {
    dVar1 = dVar1 * (1.0 / SQRT(dVar4));
  }
  if (ABS(dVar1) <= 1e-08) {
    fVar3 = 90.0;
  }
  else {
    dVar4 = atan(dVar7 / dVar1);
    fVar3 = (float)dVar4 * 57.295776;
  }
  fVar3 = ABS(fVar3);
  *param_4 = fVar3;
  if ((dVar1 <= 0.0) || (0.0 <= dVar7)) {
    if ((dVar1 < 0.0) && (dVar7 < 0.0)) {
      fVar9 = fVar3 + 180.0;
      goto LAB_147962ea8;
    }
    if (0.0 <= dVar1) {
      return;
    }
    if (dVar7 <= 0.0) {
      return;
    }
    fVar9 = 180.0;
  }
  else {
    fVar9 = 360.0;
  }
  fVar9 = fVar9 - fVar3;
LAB_147962ea8:
  *param_4 = fVar9;
  return;
}



// FUNCTION 147962f08 FUN_147962f08 body=110 status=ok
// SIG undefined FUN_147962f08(void)

float FUN_147962f08(longlong param_1,float param_2,longlong param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = *(float *)(param_1 + 400) * *(float *)(param_3 + 0x214);
  if (180.0 <= fVar2) {
    fVar2 = 180.0;
  }
  fVar1 = 0.0;
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  fVar3 = *(float *)(param_1 + 0x194) * *(float *)(param_3 + 0x218);
  if (180.0 <= fVar3) {
    fVar3 = 180.0;
  }
  if (fVar3 <= 0.0) {
    fVar3 = 0.0;
  }
  if ((fVar2 == fVar3) && (!NAN(fVar2) && !NAN(fVar3))) {
    if (fVar2 <= param_2) {
      fVar1 = 1.0;
    }
    return fVar1;
  }
  fVar2 = (param_2 - fVar2) / (fVar3 - fVar2);
  if (1.0 <= fVar2) {
    fVar2 = 1.0;
  }
  if (fVar2 <= 0.0) {
    fVar2 = 0.0;
  }
  return fVar2;
}



// FUNCTION 147962f76 FUN_147962f76 body=249 status=ok
// SIG undefined FUN_147962f76(void)

undefined8
FUN_147962f76(longlong param_1,undefined8 param_2,longlong param_3,undefined8 param_4,
             longlong param_5,float param_6,float param_7)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined7 uVar5;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  byte bVar6;
  float fVar7;
  float fVar8;
  
  uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = 1;
  if (param_3 != 0) {
    bVar6 = *(char *)(param_3 + 0x152) - 1;
    if (bVar6 < 6) {
      if ((0x35U >> (bVar6 & 0x1f) & 1) != 0) goto LAB_147962fc2;
    }
    uVar2 = CONCAT71(uVar5,*(undefined1 *)(param_1 + 0x5b0)) & 0xffffffffffffff04;
    uVar5 = (undefined7)(uVar2 >> 8);
    bVar1 = (byte)uVar2 >> 2;
  }
LAB_147962fc2:
  fVar8 = 1.0;
  if ((param_5 != 0) && (bVar1 != 0)) {
    if ((*(byte *)(param_5 + 0xc0) & 1) == 0) {
      return CONCAT71(uVar5,1);
    }
    bVar1 = FUN_146269f19();
    lVar3 = (ulonglong)(bVar1 ^ 1) * 0x20;
    fVar7 = *(float *)(param_1 + 0x198 + lVar3) * *(float *)(param_5 + 0x21c);
    fVar7 = (*(float *)(param_1 + 0x19c + lVar3) * *(float *)(param_5 + 0x220) - fVar7) * param_7 +
            fVar7;
    fVar8 = 0.0;
    if (0.0 <= fVar7) {
      fVar8 = fVar7;
    }
  }
  if (fVar8 <= 0.0001) {
    fVar8 = 0.0001;
  }
  uVar4 = FUN_1479627d2(param_1,param_4,param_6 / fVar8);
  return uVar4;
}



// FUNCTION 147963070 FUN_147963070 body=36 status=ok
// SIG undefined FUN_147963070(void)

longlong FUN_147963070(longlong param_1)

{
  byte bVar1;
  
  bVar1 = FUN_146269f19();
  return (ulonglong)(bVar1 ^ 1) * 0x20 + param_1 + 400;
}



// FUNCTION 147963094 FUN_147963094 body=278 status=ok
// SIG undefined FUN_147963094(void)

undefined8 * FUN_147963094(undefined8 *param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_14117d122();
  param_1[1] = lVar1;
  if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar1);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = param_2;
  if (param_3 == 0) {
    if (param_2 != 0) {
      param_3 = FUN_14494016c(param_2,0,1);
      param_2 = param_1[0xd];
      goto LAB_14796311d;
    }
    param_1[0xe] = 0;
LAB_147963126:
    param_1[0xf] = 0;
  }
  else {
LAB_14796311d:
    param_1[0xe] = param_3;
    if (param_2 == 0) goto LAB_147963126;
    lVar1 = FUN_144a7b302(param_2);
    param_1[0xf] = lVar1;
    if (lVar1 != 0) goto LAB_14796314a;
  }
  if (DAT_14cb0d2b0 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_145bdace4();
  }
  param_1[0xf] = uVar2;
LAB_14796314a:
  *(undefined2 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_147963248(param_1 + 2);
  param_1[0x13] = DAT_14c8464f0;
  uVar2 = DAT_14c8464e8;
  param_1[0x11] = DAT_14c8464e0;
  param_1[0x12] = uVar2;
  return param_1;
}



// FUNCTION 1479631aa FUN_1479631aa body=158 status=ok
// SIG undefined FUN_1479631aa(void)

undefined8 * FUN_1479631aa(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14117d122();
  param_1[1] = lVar2;
  if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar2);
  }
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined8 *)((longlong)param_1 + 0x3c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  param_1[10] = 0;
  *(undefined4 *)(param_1 + 0xb) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = param_2;
  *(undefined2 *)(param_1 + 0xc) = 1;
  *(undefined1 *)((longlong)param_1 + 0x62) = 1;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_147963248(param_1 + 2);
  param_1[0x13] = DAT_14c8464f0;
  uVar1 = DAT_14c8464e8;
  param_1[0x11] = DAT_14c8464e0;
  param_1[0x12] = uVar1;
  return param_1;
}



// FUNCTION 147963248 FUN_147963248 body=68 status=ok
// SIG undefined FUN_147963248(void)

void FUN_147963248(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_147970c68();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_14474875a(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 14796328c FUN_14796328c body=175 status=ok
// SIG undefined FUN_14796328c(void)

undefined8 FUN_14796328c(undefined8 param_1,undefined8 param_2)

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
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  FUN_144a5c54a(local_b8,param_2);
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = param_1;
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



// FUNCTION 14796333e FUN_14796333e body=133 status=ok
// SIG undefined FUN_14796333e(void)

ulonglong FUN_14796333e(longlong *param_1,char param_2,longlong param_3,longlong param_4,
                       float param_5)

{
  char cVar1;
  undefined8 unaff_RSI;
  ulonglong uVar2;
  undefined7 uVar3;
  
  if (param_2 == '\0') {
    cVar1 = (**(code **)(*param_1 + 0xd0))();
    if (cVar1 != '\0') {
      uVar3 = (undefined7)((ulonglong)unaff_RSI >> 8);
      uVar2 = CONCAT71(uVar3,1);
      if ((*(byte *)((longlong)param_1 + 0x592) & 2) != 0) goto LAB_1479633b7;
      cVar1 = (**(code **)(*param_1 + 0xd8))(param_1);
      if (cVar1 != '\0') goto LAB_1479633b7;
      if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
        if ((DAT_14cacde58 == 0) && (*(float *)(param_4 + 0x100) <= param_5)) {
          uVar2 = CONCAT71(uVar3,*(float *)(param_4 + 0x100) <= 0.0 && DAT_14cacdeb8 != 0);
        }
        goto LAB_1479633b7;
      }
    }
  }
  uVar2 = 0;
LAB_1479633b7:
  return uVar2 & 0xffffffff;
}



// FUNCTION 1479633e0 FUN_1479633e0 body=180 status=ok
// SIG undefined FUN_1479633e0(void)

longlong FUN_1479633e0(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x340) != *(int *)(param_1 + 0x36c)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x370;
    if (*(longlong *)(param_1 + 0x378) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x378);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x380) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x338) + (longlong)iVar4 * 0x1a8;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x338) + (longlong)iVar4 * 0x1a8) == param_2)
        goto LAB_1479633f5;
        iVar4 = *(int *)(lVar3 + 0x1a0);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1479633f5:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147963494 FUN_147963494 body=178 status=ok
// SIG undefined FUN_147963494(void)

longlong FUN_147963494(longlong param_1,ulonglong param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x390) != *(int *)(param_1 + 0x3bc)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    lVar3 = param_1 + 0x3c0;
    if (*(longlong *)(param_1 + 0x3c8) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x3c8);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x3d0) - 1U & (uVar1 >> 0x10 ^ uVar1)) *
                             4);
    if (iVar4 != -1) {
      do {
        lVar3 = *(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 0x30;
        if (*(ulonglong *)(*(longlong *)(param_1 + 0x388) + (longlong)iVar4 * 0x30) == param_2)
        goto LAB_1479634a9;
        iVar4 = *(int *)(lVar3 + 0x28);
      } while (iVar4 != -1);
    }
  }
  lVar3 = 0;
LAB_1479634a9:
  lVar2 = lVar3 + 8;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  return lVar2;
}



// FUNCTION 147963546 FUN_147963546 body=109 status=ok
// SIG undefined FUN_147963546(void)

undefined8 FUN_147963546(longlong *param_1)

{
  char cVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  lVar2 = *(longlong *)(DAT_14cb0d2b0 + 0xf50);
  lVar4 = DAT_14cb0d2b0;
  if (lVar2 != 0) {
    cVar1 = *(char *)(lVar2 + 0x180);
    cVar3 = FUN_1479739f4();
    if (cVar3 == '\0') {
      cVar3 = '\0';
    }
    else {
      cVar3 = (**(code **)(*param_1 + 0x118))(param_1);
    }
    if (cVar3 != '\0') {
      return 0;
    }
    if (cVar1 != '\0') {
      return 0;
    }
    lVar4 = FUN_14797379c(lVar2);
    if ((char)lVar4 == '\x01') {
      return 0;
    }
  }
  uVar5 = CONCAT71((int7)((ulonglong)lVar4 >> 8),*(undefined1 *)((longlong)param_1 + 0x599)) &
          0xffffffffffffff02;
  return CONCAT71((int7)(uVar5 >> 8),(byte)uVar5 >> 1);
}



// FUNCTION 1479635b4 FUN_1479635b4 body=163 status=ok
// SIG undefined FUN_1479635b4(void)

ulonglong FUN_1479635b4(longlong param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x2f0) != *(int *)(param_1 + 0x31c)) {
    uVar2 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
    lVar3 = param_1 + 800;
    if (*(longlong *)(param_1 + 0x328) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x328);
    }
    iVar4 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x330) - 1U & (uVar2 >> 0x10 ^ uVar2)) *
                             4);
    if (iVar4 != -1) {
      do {
        puVar1 = (ulonglong *)(*(longlong *)(param_1 + 0x2e8) + (longlong)iVar4 * 0x18);
        if (*puVar1 == param_2) {
          if (puVar1 != (ulonglong *)0x0) {
            return puVar1[1];
          }
          return 0;
        }
        iVar4 = (int)puVar1[2];
      } while (iVar4 != -1);
      return 0;
    }
  }
  return 0;
}



// FUNCTION 147963658 FUN_147963658 body=125 status=ok
// SIG undefined FUN_147963658(void)

void FUN_147963658(longlong param_1,char param_2)

{
  longlong lVar1;
  float fVar2;
  float fVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x60);
  if ((lVar1 != 0) &&
     (((param_2 != '\0' || (*(char *)(lVar1 + 0x199) < '\0')) &&
      (fVar2 = (float)FUN_147041406(lVar1 + 0x1c8), 0.0 < fVar2)))) {
    fVar3 = (float)DAT_14c759090;
    if (0.5 <= fVar3) {
      fVar3 = 0.5;
    }
    if (0.0 <= fVar2 + fVar3) {
      *(float *)(lVar1 + 0x1d0) = fVar2 + fVar3;
      *(undefined4 *)(lVar1 + 0x1d8) = 0;
    }
    else if ((*(float *)(lVar1 + 0x1d0) == 0.0) && (!NAN(*(float *)(lVar1 + 0x1d0)))) {
      *(undefined4 *)(lVar1 + 0x1d0) = 0xbf800000;
    }
  }
  return;
}



// FUNCTION 147963708 FUN_147963708 body=45 status=ok
// SIG undefined FUN_147963708(void)

longlong FUN_147963708(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x28;
  thunk_FUN_14006e79a(param_1);
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147963736 FUN_147963736 body=57 status=ok
// SIG undefined FUN_147963736(void)

undefined8 * FUN_147963736(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a7e7e50;
  if (param_1[2] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147963770 FUN_147963770 body=42 status=ok
// SIG undefined FUN_147963770(void)

undefined8 FUN_147963770(void)

{
  FUN_140033559("Runtime\\Engine\\Public\\Audio.h",0x225,L"Pure virtual not implemented (%s)",
                L"FSoundBuffer::GetSize");
  return 0;
}



// FUNCTION 1479637b0 FUN_1479637b0 body=29 status=ok
// SIG undefined FUN_1479637b0(void)

undefined8 FUN_1479637b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 147963850 FUN_147963850 body=120 status=ok
// SIG undefined FUN_147963850(void)

void FUN_147963850(longlong param_1)

{
  double dVar1;
  undefined1 auStack_48 [40];
  LARGE_INTEGER local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  QueryPerformanceCounter(&local_20);
  dVar1 = (double)local_20.QuadPart * DAT_14c83f420 + 16777216.0;
  *(float *)(param_1 + 0x5ac) = (float)(dVar1 - *(double *)(param_1 + 0x1d0));
  *(double *)(param_1 + 0x1d0) = dVar1;
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147963940 FUN_147963940 body=59 status=ok
// SIG undefined FUN_147963940(void)

undefined8 FUN_147963940(longlong *param_1)

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



// FUNCTION 147963a3a FUN_147963a3a body=84 status=ok
// SIG undefined FUN_147963a3a(void)

undefined8 FUN_147963a3a(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 8;
    param_2 = param_2 + 8;
    do {
      *(undefined8 *)(param_2 + -8) = *(undefined8 *)(param_3 + -8);
      FUN_147963b70(param_2,param_3);
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
      *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_3 + 0x18);
      param_3 = param_3 + 0x28;
      param_2 = param_2 + 0x28;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147963ab6 FUN_147963ab6 body=59 status=ok
// SIG undefined FUN_147963ab6(void)

undefined8 FUN_147963ab6(longlong *param_1)

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



// FUNCTION 147963afc FUN_147963afc body=38 status=ok
// SIG undefined FUN_147963afc(void)

void FUN_147963afc(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x28) == '\x01') {
    if (*(longlong *)(param_2 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_2 + 0x28) = 0;
  }
  return;
}



// FUNCTION 147963b70 FUN_147963b70 body=88 status=ok
// SIG undefined FUN_147963b70(void)

undefined8 * FUN_147963b70(undefined8 *param_1,undefined8 *param_2)

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
      FUN_147963bc8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 147963bc8 FUN_147963bc8 body=98 status=ok
// SIG undefined FUN_147963bc8(void)

void FUN_147963bc8(longlong param_1,int param_2,int param_3)

{
  int iVar1;
  ulonglong uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    iVar3 = 0;
  }
  else {
    uVar2 = FUN_144a3809e((longlong)param_2 << 4,4);
    iVar1 = (int)(uVar2 >> 4);
    iVar3 = 0x7fffffff;
    if (param_2 <= iVar1) {
      iVar3 = iVar1;
    }
  }
  if (param_3 < iVar3) {
    FUN_1446f8d3c(param_1,0,iVar3,0x10,4);
    param_3 = iVar3;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 147963c4c FUN_147963c4c body=48 status=ok
// SIG undefined FUN_147963c4c(void)

void FUN_147963c4c(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x20) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_2 + 0x10) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147963c92 FUN_147963c92 body=99 status=ok
// SIG undefined FUN_147963c92(void)

undefined8 FUN_147963c92(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  if (param_4 != 0) {
    lVar2 = 0;
    do {
      lVar1 = param_2 + 0x10 + lVar2;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((undefined8 *)(param_3 + lVar2) + 1);
      *(undefined8 *)(lVar1 + -0x10) = *(undefined8 *)(param_3 + lVar2);
      FUN_144a67f5c();
      FUN_144a67f5c(param_2 + lVar2 + 0x20,param_3 + lVar2 + 0x20);
      lVar2 = lVar2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147963d1e FUN_147963d1e body=59 status=ok
// SIG undefined FUN_147963d1e(void)

undefined8 FUN_147963d1e(longlong *param_1)

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



// FUNCTION 147963dbc FUN_147963dbc body=52 status=ok
// SIG undefined FUN_147963dbc(void)

void FUN_147963dbc(longlong param_1)

{
  if (*(char *)(param_1 + 0x30) == '\x01') {
    if (*(longlong *)(param_1 + 0x20) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  return;
}



// FUNCTION 147963e7e FUN_147963e7e body=59 status=ok
// SIG undefined FUN_147963e7e(void)

undefined8 FUN_147963e7e(longlong *param_1)

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



// FUNCTION 147963f58 FUN_147963f58 body=103 status=ok
// SIG undefined FUN_147963f58(void)

undefined1 FUN_147963f58(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong *plVar1;
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
      lVar7 = *(longlong *)(param_3 + lVar8);
      if ((bVar6 & 1) != 0) {
        if (lVar7 == 0) {
          lVar7 = 0;
        }
        else {
          FUN_1456cec3c();
          lVar7 = *(longlong *)(param_3 + lVar8);
          bVar6 = DAT_14c950c29;
        }
      }
      plVar1 = (longlong *)(param_2 + lVar8);
      *plVar1 = lVar7;
      puVar2 = (undefined4 *)(param_3 + 8 + lVar8);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(undefined4 *)(plVar1 + 1) = *puVar2;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
      *(undefined4 *)(plVar1 + 2) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar5;
      lVar8 = lVar8 + 0x18;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 147963fe8 FUN_147963fe8 body=59 status=ok
// SIG undefined FUN_147963fe8(void)

undefined8 FUN_147963fe8(longlong *param_1)

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



// FUNCTION 1479640f6 FUN_1479640f6 body=59 status=ok
// SIG undefined FUN_1479640f6(void)

undefined8 FUN_1479640f6(longlong *param_1)

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



// FUNCTION 147964198 FUN_147964198 body=278 status=ok
// SIG undefined FUN_147964198(void)

undefined8 * FUN_147964198(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_140b856de(param_1,iVar1,0);
    FUN_140b8566a(*param_1,uVar2,iVar1);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  uVar2 = param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 2,iVar1,0);
    FUN_140b8566a(param_1[2],uVar2,iVar1);
  }
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  uVar2 = param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_140b856de(param_1 + 4,iVar1,0);
    FUN_140b8566a(param_1[4],uVar2,iVar1);
  }
  lVar3 = param_2[6];
  param_1[6] = lVar3;
  if ((lVar3 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1479642ae(param_1 + 8,param_2 + 8);
  return param_1;
}



// FUNCTION 1479642ae FUN_1479642ae body=130 status=ok
// SIG undefined FUN_1479642ae(void)

void FUN_1479642ae(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_2 != param_1) {
    local_28 = 0;
    local_20 = 0;
    plVar1 = (longlong *)*param_2;
    if (plVar1 != (longlong *)0x0 && (int)param_2[1] != 0) {
      (**(code **)(*plVar1 + 0x40))(plVar1,&local_28);
    }
    FUN_144a450dc(param_1,&local_28);
    FUN_1449db362(&local_28);
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 147964332 FUN_147964332 body=379 status=ok
// SIG undefined FUN_147964332(void)

undefined8 *
FUN_147964332(undefined8 *param_1,undefined8 param_2,longlong param_3,undefined1 param_4)

{
  uint uVar1;
  char cVar2;
  longlong lVar3;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  undefined4 local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_3 == 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[6] = 0;
    goto LAB_147964447;
  }
  FUN_1400bbfc4(&local_58,param_3);
  *(undefined4 *)(param_1 + 2) = local_58;
  *(undefined4 *)((longlong)param_1 + 0x14) = uStack_54;
  *(undefined4 *)(param_1 + 3) = uStack_50;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_4c;
  if (param_1 + 2 == (undefined8 *)&local_58) {
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = local_48;
    local_48 = 0;
    *(undefined4 *)(param_1 + 5) = local_40;
    *(undefined4 *)((longlong)param_1 + 0x2c) = local_3c;
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  if (cVar2 == '\0') {
LAB_14796442f:
    FUN_14485c47a(param_1 + 1,param_3);
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
    if ((*(uint *)(lVar3 + 8) & 0x8400000) == 0) goto LAB_14796442f;
    param_1[1] = 0;
  }
  param_1[6] = param_3;
  if (DAT_14c950c29 == '\x01') {
    FUN_1456cec3c(param_3);
  }
LAB_147964447:
  *(undefined1 *)(param_1 + 7) = param_4;
  *(undefined1 *)((longlong)param_1 + 0x39) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 0xd) = 1;
  *(undefined4 *)((longlong)param_1 + 0x84) = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1479644ae FUN_1479644ae body=93 status=ok
// SIG undefined FUN_1479644ae(void)

undefined8 * FUN_1479644ae(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_14111bf7d(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_145d54e2c(param_1,iVar1);
      FUN_145d54e8e(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14796450c FUN_14796450c body=52 status=ok
// SIG undefined FUN_14796450c(void)

void FUN_14796450c(longlong *param_1)

{
  FUN_147964540();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 147964540 FUN_147964540 body=89 status=ok
// SIG undefined FUN_147964540(void)

void FUN_147964540(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14472eb64(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 14796459a FUN_14796459a body=52 status=ok
// SIG undefined FUN_14796459a(void)

void FUN_14796459a(longlong *param_1)

{
  FUN_1479645ce();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1479645ce FUN_1479645ce body=89 status=ok
// SIG undefined FUN_1479645ce(void)

void FUN_1479645ce(longlong param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_140411364(param_1,0);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (0x80 < *(uint *)(param_1 + 0x2c)) {
    *(undefined4 *)(param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}


