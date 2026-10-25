// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140966bee FUN_140966bee body=353 status=ok
// SIG undefined FUN_140966bee(void)

void FUN_140966bee(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 4;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140966c73;
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
LAB_140966c73:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 2)) {
    uVar7 = uVar5 >> 2 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,4,4);
  return;
}



// FUNCTION 140966d50 FUN_140966d50 body=583 status=ok
// SIG undefined FUN_140966d50(void)

undefined8
FUN_140966d50(longlong *param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             char param_5)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined1 auStack_98 [40];
  undefined2 *local_70;
  undefined8 local_68;
  undefined2 *local_60;
  int local_58;
  int local_54;
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 8;
  if (0 < (int)param_1[9]) {
    FUN_1408eddbe(param_1);
  }
  FUN_140966f98(plVar1,param_2);
  *(undefined1 *)(param_1 + 10) = param_3;
  *(undefined1 *)((longlong)param_1 + 0x51) = param_4;
  if ((param_5 != '\0') && (cVar5 = FUN_1409671e2(param_1), cVar5 == '\0')) {
    FUN_140967468(param_1);
    iVar2 = (int)local_68;
    iVar6 = ((int)local_68 == 0) + 4;
    local_60 = local_70;
    local_70 = (undefined2 *)0x0;
    local_58 = (int)local_68;
    iVar4 = local_68._4_4_;
    local_54 = local_68._4_4_;
    local_68 = 0;
    iVar11 = iVar6 + iVar2;
    if (iVar11 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar6);
    }
    if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar11);
    }
    if (iVar4 < iVar11) {
      FUN_1446f8c06(&local_60);
    }
    FUN_1400020e8(&local_60,L"_MAX",4);
    puVar12 = &DAT_149dfb77a;
    if (local_58 != 0) {
      puVar12 = local_60;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_50,puVar12);
    puVar12 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar12 = local_50;
    }
    FUN_1446f470e(&local_40,puVar12,1);
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    plVar9 = param_1;
    uVar8 = local_40;
    if (local_70 != (undefined2 *)0x0) {
      FUN_1400020a8();
      uVar8 = local_40;
    }
LAB_140966eae:
    plVar10 = plVar9;
    plVar9 = plVar10;
    if ((longlong *)plVar10[4] != (longlong *)0x0) goto code_r0x000140966ebd;
    goto LAB_140966ecc;
  }
LAB_140966f2b:
  FUN_1409676c4(param_1);
  uVar8 = 1;
LAB_140966f35:
  if ((local_38 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
code_r0x000140966ebd:
  plVar9 = (longlong *)plVar10[4];
  if ((*(uint *)(plVar10 + 1) >> 0x1c & 1) == 0) goto LAB_140966eae;
  plVar9 = (longlong *)FUN_142840154(plVar10);
LAB_140966ecc:
  if (plVar9 == (longlong *)0x0) {
    plVar9 = (longlong *)plVar10[4];
    goto LAB_140966eae;
  }
  lVar7 = FUN_1409678c4(plVar9[3],uVar8,0,0);
  if (lVar7 != -1) {
    uVar8 = 0;
    goto LAB_140966f35;
  }
  lVar7 = FUN_1404d8156(param_1);
  iVar2 = (int)param_1[9];
  *(uint *)(param_1 + 9) = iVar2 + 1U;
  if (*(uint *)((longlong)param_1 + 0x4c) < iVar2 + 1U) {
    FUN_1409670d4(plVar1,iVar2);
  }
  lVar3 = *plVar1;
  *(undefined8 *)(lVar3 + (longlong)iVar2 * 0x10) = local_40;
  *(longlong *)(lVar3 + 8 + (longlong)iVar2 * 0x10) = lVar7 + 1;
  goto LAB_140966f2b;
}



// FUNCTION 140966f98 FUN_140966f98 body=88 status=ok
// SIG undefined FUN_140966f98(void)

undefined8 * FUN_140966f98(undefined8 *param_1,undefined8 *param_2)

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
      FUN_140966ff0(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140966ff0 FUN_140966ff0 body=228 status=ok
// SIG undefined FUN_140966ff0(void)

void FUN_140966ff0(longlong param_1,int param_2,int param_3)

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



// FUNCTION 1409670d4 FUN_1409670d4 body=269 status=ok
// SIG undefined FUN_1409670d4(void)

void FUN_1409670d4(longlong param_1,int param_2)

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



// FUNCTION 1409671e2 FUN_1409671e2 body=444 status=ok
// SIG undefined FUN_1409671e2(void)

bool FUN_1409671e2(longlong *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  undefined8 local_58;
  undefined2 *local_50;
  int local_48;
  int local_44;
  undefined8 local_40;
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  (**(code **)(*param_1 + 0x2c8))(param_1,&local_38,&DAT_149e74618);
  puVar5 = local_38;
  if (local_30 == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  FUN_1446f470e(&local_28,puVar5,1);
  iVar2 = FUN_1448e5bf4(param_1,local_28,2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (iVar2 == -1) {
    FUN_140967468(param_1);
    iVar2 = (int)local_58;
    iVar3 = ((int)local_58 == 0) + 4;
    local_50 = local_60;
    local_60 = (undefined2 *)0x0;
    local_48 = (int)local_58;
    iVar1 = local_58._4_4_;
    local_44 = local_58._4_4_;
    local_58 = 0;
    iVar4 = iVar3 + iVar2;
    if (iVar4 < iVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar3);
    }
    if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456afac4(iVar4);
    }
    if (iVar1 < iVar4) {
      FUN_1446f8c06(&local_50);
    }
    FUN_1400020e8(&local_50,L"_MAX",4);
    puVar5 = &DAT_149dfb77a;
    if (local_48 != 0) {
      puVar5 = local_50;
    }
    (**(code **)(*param_1 + 0x2c8))(param_1,&local_38,puVar5);
    puVar5 = &DAT_149dfb77a;
    if (local_30 != 0) {
      puVar5 = local_38;
    }
    FUN_1446f470e(&local_40,puVar5,1);
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if (local_60 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    iVar2 = FUN_1448e5bf4(param_1,local_40,2);
    bVar6 = iVar2 != -1;
  }
  else {
    bVar6 = true;
  }
  if ((local_20 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar6;
}



// FUNCTION 1409673a0 FUN_1409673a0 body=196 status=ok
// SIG undefined FUN_1409673a0(void)

undefined8 FUN_1409673a0(longlong param_1,undefined8 param_2,wchar_t *param_3)

{
  wchar_t *pwVar1;
  undefined2 *puVar2;
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  int local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(char *)(param_1 + 0x50) == '\0') ||
     (pwVar1 = wcsstr(param_3,L"::"), pwVar1 != (wchar_t *)0x0)) {
    FUN_140056680(param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_58);
  }
  local_28 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_28,&local_38);
  puVar2 = local_38;
  if (local_30 == 0) {
    puVar2 = &DAT_149dfb77a;
  }
  FUN_140002266(param_2,L"%s::%s",puVar2,param_3);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 140967468 FUN_140967468 body=603 status=ok
// SIG undefined FUN_140967468(void)

longlong * FUN_140967468(longlong param_1,longlong *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulonglong uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined4 local_60;
  longlong local_58;
  int local_50;
  undefined4 local_4c;
  undefined8 local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  *param_2 = 0;
  param_2[1] = 0;
  if (0 < *(int *)(param_1 + 0x48)) {
    FUN_1400348e2(*(undefined8 *)(param_1 + 0x40),param_2);
    if (1 < *(int *)(param_1 + 0x48)) {
      lVar9 = 1;
      do {
        FUN_1400021e4(lVar9 * 0x10 + *(longlong *)(param_1 + 0x40),&local_58);
        iVar6 = (int)param_2[1];
        uVar8 = iVar6 - 1;
        if (iVar6 == 0) {
          uVar8 = 0;
        }
        uVar2 = 0;
        if (0 < (int)uVar8) {
          uVar1 = local_50 - 1;
          if (local_50 == 0) {
            uVar1 = 0;
          }
          uVar2 = (ulonglong)uVar1;
          if ((int)uVar1 < 1) {
            uVar2 = 0;
          }
          uVar7 = 0;
          do {
            if (uVar2 == uVar7) goto LAB_140967525;
            if (*(short *)(*param_2 + uVar7 * 2) != *(short *)(local_58 + uVar7 * 2)) {
              uVar2 = uVar7 & 0xffffffff;
              goto LAB_140967525;
            }
            uVar7 = uVar7 + 1;
          } while (uVar8 != uVar7);
          uVar2 = (ulonglong)uVar8;
        }
LAB_140967525:
        uVar1 = (uint)uVar2;
        if ((int)uVar8 <= (int)(uint)uVar2) {
          uVar1 = uVar8;
        }
        uVar2 = (ulonglong)uVar1;
        if ((int)uVar1 < 1) {
          uVar2 = 0;
        }
        uVar8 = uVar8 - (int)uVar2;
        if (0 < (int)uVar8) {
          iVar5 = iVar6 - (uVar8 + (int)uVar2);
          if (iVar5 != 0) {
            pvVar3 = (void *)(uVar2 * 2 + *param_2);
            memmove(pvVar3,(void *)((longlong)pvVar3 + (ulonglong)uVar8 * 2),(longlong)iVar5 * 2);
            iVar6 = (int)param_2[1];
          }
          *(uint *)(param_2 + 1) = iVar6 - uVar8;
        }
        if (local_58 != 0) {
          FUN_1400020a8();
        }
        lVar9 = lVar9 + 1;
      } while (lVar9 < *(int *)(param_1 + 0x48));
    }
    local_60 = 0xffffffff;
    local_68 = 1;
    uVar8 = FUN_1447ee042(param_2,&DAT_149e01f60,1,0);
    if ((int)uVar8 < 1) {
      *(undefined4 *)(param_2 + 1) = 0;
      if (*(int *)((longlong)param_2 + 0xc) == 0) goto LAB_1409675d2;
      FUN_1446f8c06(param_2,0);
      uVar1 = *(uint *)(param_2 + 1);
    }
    else {
      uVar1 = *(uint *)(param_2 + 1);
      uVar4 = uVar1 - 1;
      if (uVar1 == 0) {
        uVar4 = 0;
      }
      if ((int)uVar4 <= (int)uVar8) {
        uVar8 = uVar4;
      }
      uVar2 = (ulonglong)uVar8;
      if ((int)uVar8 < 1) {
        uVar2 = 0;
      }
      uVar4 = uVar4 - (int)uVar2;
      if (0 < (int)uVar4) {
        iVar6 = uVar1 - (uVar4 + (int)uVar2);
        if (iVar6 != 0) {
          pvVar3 = (void *)(uVar2 * 2 + *param_2);
          memmove(pvVar3,(void *)((longlong)pvVar3 + (ulonglong)uVar4 * 2),(longlong)iVar6 * 2);
          uVar1 = *(uint *)(param_2 + 1);
        }
        uVar1 = uVar1 - uVar4;
        *(uint *)(param_2 + 1) = uVar1;
      }
    }
    if (1 < uVar1) goto LAB_140967616;
  }
LAB_1409675d2:
  local_48 = *(undefined8 *)(param_1 + 0x18);
  FUN_1400021e4(&local_48,&local_58);
  if (&local_58 == param_2) {
    if (local_58 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*param_2 != 0) {
      FUN_1400020a8();
    }
    *param_2 = local_58;
    *(int *)(param_2 + 1) = local_50;
    *(undefined4 *)((longlong)param_2 + 0xc) = local_4c;
  }
LAB_140967616:
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409676c4 FUN_1409676c4 body=511 status=ok
// SIG undefined FUN_1409676c4(void)

void FUN_1409676c4(longlong param_1)

{
  undefined8 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  undefined1 auStack_a8 [40];
  longlong local_80;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c949618);
  lVar3 = param_1;
LAB_1409676fc:
  lVar6 = lVar3;
  lVar3 = lVar6;
  if (*(longlong *)(lVar6 + 0x20) != 0) goto code_r0x00014096770b;
  goto LAB_14096771c;
code_r0x00014096770b:
  lVar3 = *(longlong *)(lVar6 + 0x20);
  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) != 0) {
    lVar3 = FUN_142840154(lVar6);
LAB_14096771c:
    if (lVar3 != 0) {
      uVar1 = *(undefined8 *)(lVar3 + 0x18);
      *(undefined8 *)(param_1 + 0x54) = uVar1;
      uVar2 = (uint)((ulonglong)uVar1 >> 0x10);
      uVar8 = (uint)uVar1 & 0xffff;
      plVar4 = (longlong *)
               FUN_14103fdc6(&DAT_14c949620,
                             ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4),param_1 + 0x54);
      if ((longlong)*(int *)(param_1 + 0x48) != 0) {
        puVar10 = *(uint **)(param_1 + 0x40);
        puVar9 = puVar10 + (longlong)*(int *)(param_1 + 0x48) * 4;
        do {
          local_78 = *puVar10;
          uStack_74 = puVar10[1];
          uStack_70 = puVar10[2];
          uStack_6c = puVar10[3];
          if ((int)plVar4[1] != *(int *)((longlong)plVar4 + 0x34)) {
            uVar2 = (uint)((ulonglong)*(longlong *)puVar10 >> 0x10);
            plVar5 = (longlong *)plVar4[8];
            if ((longlong *)plVar4[8] == (longlong *)0x0) {
              plVar5 = plVar4 + 7;
            }
            iVar7 = *(int *)((longlong)plVar5 +
                            (ulonglong)
                            ((int)plVar4[9] - 1U &
                            uStack_74 + (local_78 << 0x10 | local_78 & 0xffff) +
                            (uVar2 << 0x13 | uVar2 & 0xffff) + ((local_78 & 0xffff) >> 4)) * 4);
            if (iVar7 != -1) {
              do {
                plVar5 = (longlong *)(*plVar4 + (longlong)iVar7 * 0x18);
                if (*plVar5 == *(longlong *)puVar10) {
                  if (((plVar5 != (longlong *)0x0) && (lVar3 = plVar5[1], lVar3 != 0)) &&
                     ((*(uint *)(lVar3 + 8) >> 0xe & 1) == 0)) {
                    if (lVar3 == param_1) goto LAB_140967882;
                    goto LAB_14096782c;
                  }
                  break;
                }
                iVar7 = (int)plVar5[2];
              } while (iVar7 != -1);
            }
          }
          local_60 = &local_78;
          local_58 = &local_80;
          local_80 = param_1;
          FUN_141716ebc(plVar4,local_4c,&local_60,0);
LAB_140967882:
          puVar10 = puVar10 + 4;
        } while (puVar10 != puVar9);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c949618);
      if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0();
      }
      return;
    }
    lVar3 = *(longlong *)(lVar6 + 0x20);
  }
  goto LAB_1409676fc;
LAB_14096782c:
  lVar6 = lVar3;
  lVar3 = lVar6;
  if (*(longlong *)(lVar6 + 0x20) != 0) goto code_r0x00014096783b;
  goto LAB_14096784d;
code_r0x00014096783b:
  lVar3 = *(longlong *)(lVar6 + 0x20);
  if ((*(uint *)(lVar6 + 8) >> 0x1c & 1) != 0) {
    lVar3 = FUN_142840154(lVar6);
LAB_14096784d:
    if (lVar3 == 0) {
      lVar3 = *(longlong *)(lVar6 + 0x20);
      goto LAB_14096782c;
    }
    goto LAB_140967882;
  }
  goto LAB_14096782c;
}



// FUNCTION 1409678c4 FUN_1409678c4 body=925 status=ok
// SIG undefined FUN_1409678c4(void)

undefined8 FUN_1409678c4(longlong param_1,longlong *param_2,int param_3,longlong *param_4)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  undefined8 uVar12;
  undefined1 auStack_b8 [32];
  undefined1 *local_98;
  longlong **local_90;
  longlong *local_88;
  undefined4 local_80;
  uint uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  AcquireSRWLockShared((PSRWLOCK)&DAT_14c949618);
  uVar11 = (uint)param_2;
  iVar4 = (int)((ulonglong)param_2 >> 0x20);
  uVar3 = (uint)((ulonglong)param_2 >> 0x10);
  if ((param_1 == 0) || (param_3 != 0)) {
    if (param_3 != 0) {
      local_90 = &local_88;
      local_98 = &LAB_1427f07da;
      local_88 = param_2;
      lVar7 = FUN_14689a264(param_1,param_3);
      goto LAB_140967a2c;
    }
    local_60 = 0x100000000;
    uStack_58 = &DAT_14c949630;
    local_50 = 0xffffffff;
    uStack_48 = 0;
    if (DAT_14c949648 == 0) {
      iVar9 = 0;
    }
    else {
      FUN_1449c0562(&local_60);
      iVar9 = DAT_14c949648;
    }
    local_80 = (undefined4)local_60;
    uStack_7c = local_60._4_4_;
    uStack_78 = (undefined4)uStack_58;
    uStack_74 = uStack_58._4_4_;
    uStack_68 = CONCAT44(uStack_44,uStack_48);
    local_70 = local_50;
    uVar12 = local_70;
    local_88 = &DAT_14c949620;
    local_70._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    if ((local_70._4_4_ != iVar9) || (uStack_58 != &DAT_14c949630)) {
      iVar5 = local_70._4_4_;
      local_70 = uVar12;
      do {
        lVar7 = *local_88;
        lVar6 = (longlong)iVar5 * 0x60;
        if (*(int *)(lVar7 + 0x10 + lVar6) != *(int *)(lVar7 + 0x3c + lVar6)) {
          lVar6 = lVar6 + lVar7;
          lVar7 = lVar6 + 0x40;
          if (*(longlong *)(lVar6 + 0x48) != 0) {
            lVar7 = *(longlong *)(lVar6 + 0x48);
          }
          iVar5 = *(int *)(lVar7 + (ulonglong)
                                   (*(int *)(lVar6 + 0x50) - 1U &
                                   (uVar11 << 0x10 | uVar11 & 0xffff) + iVar4 +
                                   (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar11 & 0xffff) >> 4)) * 4)
          ;
          if (iVar5 != -1) {
            do {
              puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar5 * 0x18);
              if ((longlong *)*puVar1 == param_2) {
                if ((puVar1 != (undefined8 *)0x0) && (lVar7 = puVar1[1], lVar7 != 0))
                goto LAB_140967a2c;
                break;
              }
              iVar5 = *(int *)(puVar1 + 2);
            } while (iVar5 != -1);
          }
        }
        local_70 = CONCAT44(local_70._4_4_,(uint)local_70 & ~uStack_7c);
        FUN_1449c0562(&local_80);
        iVar5 = local_70._4_4_;
        uVar12 = local_70;
      } while (local_88 != &DAT_14c949620 ||
               ((undefined *)CONCAT44(uStack_74,uStack_78) != &DAT_14c949630 ||
               local_70._4_4_ != iVar9));
    }
  }
  else {
    uVar12 = local_70;
    if (DAT_14c949628 != DAT_14c949654) {
      uVar2 = (uint)((ulonglong)param_1 >> 0x10);
      uVar8 = (uint)param_1 & 0xffff;
      puVar10 = &DAT_14c949658;
      if (DAT_14c949660 != (undefined *)0x0) {
        puVar10 = DAT_14c949660;
      }
      iVar9 = *(int *)(puVar10 +
                      (ulonglong)
                      (DAT_14c949668 - 1U &
                      (int)((ulonglong)param_1 >> 0x20) + ((uint)param_1 << 0x10 | uVar8) +
                      (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) * 4);
      if (iVar9 != -1) {
        lVar7 = 0;
        do {
          lVar6 = DAT_14c949620 + (longlong)iVar9 * 0x60;
          if (*(longlong *)(DAT_14c949620 + (longlong)iVar9 * 0x60) == param_1) {
            if (((longlong *)(lVar6 + 8) == (longlong *)0x0 || lVar6 == 0) ||
               (*(int *)(lVar6 + 0x10) == *(int *)(lVar6 + 0x3c))) goto LAB_1409679b3;
            lVar7 = lVar6 + 0x40;
            if (*(longlong *)(lVar6 + 0x48) != 0) {
              lVar7 = *(longlong *)(lVar6 + 0x48);
            }
            iVar4 = *(int *)(lVar7 + (ulonglong)
                                     (*(int *)(lVar6 + 0x50) - 1U &
                                     iVar4 + (uVar11 << 0x10 | uVar11 & 0xffff) +
                                     (uVar3 << 0x13 | uVar3 & 0xffff) + ((uVar11 & 0xffff) >> 4)) *
                                     4);
            if (iVar4 == -1) goto LAB_1409679b3;
            lVar7 = 0;
            goto LAB_140967a14;
          }
          iVar9 = *(int *)(lVar6 + 0x58);
        } while (iVar9 != -1);
        goto LAB_140967a2c;
      }
    }
  }
LAB_1409679b3:
  local_70 = uVar12;
  lVar7 = 0;
  goto LAB_140967a2c;
  while (iVar4 = *(int *)(puVar1 + 2), iVar4 != -1) {
LAB_140967a14:
    puVar1 = (undefined8 *)(*(longlong *)(lVar6 + 8) + (longlong)iVar4 * 0x18);
    if ((longlong *)*puVar1 == param_2) {
      if (puVar1 == (undefined8 *)0x0) goto LAB_1409679b3;
      lVar7 = puVar1[1];
      break;
    }
  }
LAB_140967a2c:
  if (param_4 != (longlong *)0x0) {
    *param_4 = lVar7;
  }
  uVar12 = 0xffffffffffffffff;
  if ((lVar7 != 0) && (iVar4 = FUN_1448e5bf4(lVar7,param_2,0), iVar4 != -1)) {
    uVar12 = *(undefined8 *)(*(longlong *)(lVar7 + 0x40) + 8 + (longlong)iVar4 * 0x10);
  }
  ReleaseSRWLockShared((PSRWLOCK)&DAT_14c949618);
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 140967c62 FUN_140967c62 body=374 status=ok
// SIG undefined FUN_140967c62(void)

undefined4 * FUN_140967c62(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  void *_Src;
  char cVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  uint *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_140967e96(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar4 = *(uint *)*param_3;
  *local_40 = uVar4;
  local_40[2] = 0;
  local_40[3] = 0;
  uVar5 = *(uint *)(puVar1 + 1);
  _Src = (void *)*puVar1;
  local_40[4] = uVar5;
  if ((longlong)(int)uVar5 == 0) {
    local_40[5] = 0;
  }
  else {
    FUN_1446dd670(local_40 + 2,uVar5,0);
    memcpy(*(void **)(local_40 + 2),_Src,(longlong)(int)uVar5 * 2);
    uVar4 = *local_40;
  }
  local_40[6] = 0xffffffff;
  local_4c = local_48[0];
  local_58 = 0;
  cVar2 = FUN_140967dda(param_1,uVar4,local_40);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar5 < 4) {
      iVar6 = 1;
    }
    else {
      uVar3 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      local_40[7] = uVar4;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      local_40[6] = *(uint *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U &
                                      (longlong)(int)uVar4) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140968080(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140967dda FUN_140967dda body=187 status=ok
// SIG undefined FUN_140967dda(void)

void FUN_140967dda(longlong *param_1,uint param_2,int *param_3,int *param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  longlong *plVar7;
  int iVar8;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      do {
        piVar1 = (int *)(*param_1 + (longlong)iVar8 * 0x20);
        if (*(int *)(*param_1 + (longlong)iVar8 * 0x20) == *param_3) {
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar2 = *param_3;
          iVar3 = param_3[1];
          iVar4 = param_3[2];
          iVar5 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar2;
          piVar1[1] = iVar3;
          piVar1[2] = iVar4;
          piVar1[3] = iVar5;
          FUN_1409682f4(param_1,*param_4,1);
          *param_4 = iVar8;
          uVar6 = 1;
          goto LAB_140967e4b;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  uVar6 = 0;
LAB_140967e4b:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar6;
  }
  return;
}



// FUNCTION 140967e96 FUN_140967e96 body=489 status=ok
// SIG undefined FUN_140967e96(void)

int * FUN_140967e96(longlong *param_1,int *param_2)

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
      FUN_1447711aa(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x20);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x20) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 140968080 FUN_140968080 body=628 status=ok
// SIG undefined FUN_140968080(void)

void FUN_140968080(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_1409680f2;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_1409680f2:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x20;
      uVar15 = (longlong)(int)param_1[9] - 1U & (longlong)*(int *)(lVar6 + lVar13);
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0x1c + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 0x18 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 1409682f4 FUN_1409682f4 body=138 status=ok
// SIG undefined FUN_1409682f4(void)

void FUN_1409682f4(longlong *param_1,int param_2,int param_3)

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
      puVar7 = puVar7 + 8;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14096837e FUN_14096837e body=102 status=ok
// SIG undefined FUN_14096837e(void)

void FUN_14096837e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  
  lVar1 = (longlong)(int)(*(longlong **)(param_1 + 8))[1];
  if (lVar1 != 0) {
    lVar3 = 0;
    do {
      if (*(longlong *)(**(longlong **)(param_1 + 8) + lVar3) == param_2) {
        return;
      }
      lVar3 = lVar3 + 0x10;
    } while (lVar1 * 0x10 != lVar3);
  }
  plVar2 = (longlong *)FUN_1409683e4();
  *plVar2 = param_2;
  *(uint *)(plVar2 + 1) = *(int *)(*(longlong *)(param_1 + 0x18) + 0x10) + 0xfU & 0xfffffff0;
  FUN_140968440(*(undefined8 *)(param_1 + 0x18),param_2,0);
  return;
}



// FUNCTION 1409683e4 FUN_1409683e4 body=64 status=ok
// SIG undefined FUN_1409683e4(void)

longlong FUN_1409683e4(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1409684e6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0x10 + *param_1;
  FUN_140968424(lVar2,1);
  return lVar2;
}



// FUNCTION 140968424 FUN_140968424 body=27 status=ok
// SIG undefined FUN_140968424(void)

void FUN_140968424(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 140968440 FUN_140968440 body=166 status=ok
// SIG undefined FUN_140968440(void)

void FUN_140968440(longlong *param_1,longlong param_2,undefined1 param_3)

{
  int iVar1;
  undefined8 uVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  
  uVar4 = (int)param_1[2] + 0xfU & 0xfffffff0;
  *(uint *)(param_1 + 2) = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140870184(param_1,iVar1);
    uVar4 = *(uint *)(param_1 + 2);
  }
  lVar3 = *param_1;
  lVar5 = (longlong)iVar1 * 0x30;
  *(undefined2 **)(lVar3 + lVar5) = &DAT_149dfb77a;
  *(undefined8 *)(lVar3 + 8 + lVar5) = uVar2;
  *(undefined4 *)(lVar3 + 0x10 + lVar5) = 0x27;
  *(uint *)(lVar3 + 0x14 + lVar5) = uVar4;
  *(undefined1 *)(lVar3 + 0x18 + lVar5) = 0x15;
  *(undefined1 *)(lVar3 + 0x19 + lVar5) = param_3;
  *(undefined1 **)(lVar3 + 0x1c + lVar5) = &DAT_100000001;
  *(undefined4 *)(lVar3 + 0x24 + lVar5) = 0;
  *(longlong *)(lVar3 + 0x28 + lVar5) = param_2;
  *(uint *)(param_1 + 2) = (int)param_1[2] + (*(int *)(param_2 + 0x3c) + 0xfU & 0xfffffff0);
  return;
}



// FUNCTION 1409684e6 FUN_1409684e6 body=269 status=ok
// SIG undefined FUN_1409684e6(void)

void FUN_1409684e6(longlong param_1,int param_2)

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



// FUNCTION 1409685f4 FUN_1409685f4 body=3113 status=ok
// SIG undefined FUN_1409685f4(void)

/* WARNING: Removing unreachable block (ram,0x0001409690ec) */

void FUN_1409685f4(longlong param_1)

{
  float *pfVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong *plVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_1e8 [44];
  int local_1bc;
  uint local_1b8;
  int local_1b4;
  longlong *local_1b0;
  longlong local_1a8;
  longlong *local_1a0;
  longlong *local_198;
  longlong *local_190;
  longlong local_188;
  longlong local_180;
  longlong local_178;
  longlong local_170;
  longlong local_168;
  longlong local_160;
  longlong local_158;
  longlong local_150;
  longlong local_148;
  int local_140 [2];
  longlong local_138;
  longlong *local_130;
  int local_128;
  longlong *local_120;
  longlong *local_118;
  longlong local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 local_f8;
  ulonglong local_f0;
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_1e8;
  plVar12 = (longlong *)(param_1 + 0x148);
  local_1b0 = (longlong *)(param_1 + 0x168);
  local_198 = (longlong *)(param_1 + 0x10);
  local_158 = param_1 + 0x110;
  local_190 = (longlong *)(param_1 + 0x20);
  local_160 = param_1 + 0xec;
  local_1a0 = plVar12;
  local_188 = param_1;
  do {
    if (*(int *)(param_1 + 0x150) == 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      break;
    }
    iVar6 = *(int *)(param_1 + 0x150) + -1;
    local_1b4 = *(int *)(*plVar12 + (longlong)iVar6 * 4);
    lVar8 = (longlong)local_1b4;
    lVar14 = lVar8 * 0x90;
    if (*(int *)(*local_1b0 + lVar14) == 2) {
      *(int *)(param_1 + 0x150) = iVar6;
LAB_140968860:
      FUN_14096963a(param_1,local_1b4);
      iVar6 = 2;
    }
    else {
      iVar6 = *(int *)(*local_1b0 + lVar14 + 0x4c);
      local_178 = lVar8;
      if (*(int *)(param_1 + 0x18) <= iVar6) {
        FUN_140969316(local_198,(iVar6 - *(int *)(param_1 + 0x18)) + 1);
      }
      cVar5 = FUN_14096921e(param_1,1);
      if (cVar5 == '\0') break;
      lVar13 = (longlong)iVar6;
      local_138 = local_158;
      local_130 = local_1b0;
      local_128 = local_1b4;
      local_120 = local_190;
      local_118 = local_198;
      local_110 = local_160;
      lVar8 = *(longlong *)(param_1 + 0x168);
      local_140[0] = iVar6;
      if ((*(int *)(lVar8 + 0x28 + lVar14) <= *(int *)(param_1 + 0x120)) ||
         (*(int *)(param_1 + 0x124) <= ((int *)(lVar8 + lVar14))[0x12])) {
        pbVar2 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x3c + lVar13 * 0x40);
        *pbVar2 = *pbVar2 | 1;
        FUN_140969456(&local_108,*(longlong *)(param_1 + 0x168) + lVar14 + 0x20);
        iVar6 = *(int *)(param_1 + 0x28);
        *(uint *)(param_1 + 0x28) = iVar6 + 1U;
        if (*(uint *)(param_1 + 0x2c) < iVar6 + 1U) {
          FUN_140969c9a(local_190,iVar6);
        }
        lVar14 = (longlong)iVar6;
        lVar8 = *local_190;
        *(undefined8 *)(lVar8 + lVar14 * 0x18) = 0;
        *(undefined8 *)(lVar8 + lVar14 * 0x18) = local_108;
        *(undefined4 *)(lVar8 + 8 + lVar14 * 0x18) = (undefined4)local_100;
        *(undefined4 *)(lVar8 + 0xc + lVar14 * 0x18) = local_100._4_4_;
        *(undefined1 *)(lVar8 + 0x10 + lVar14 * 0x18) = local_f8;
        *(int *)(*local_198 + 0x30 + lVar13 * 0x40) = iVar6;
        local_100 = 0;
        local_108 = 0;
        *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
        goto LAB_140968860;
      }
      iVar6 = *(int *)(lVar8 + lVar14);
      local_1a8 = lVar14;
      if (iVar6 == 0) {
        iVar6 = FUN_14096939a(param_1);
        iVar7 = FUN_14096939a(param_1);
        lVar8 = local_178 * 0x90;
        *(int *)(*(longlong *)(param_1 + 0x168) + 0x6c + lVar8) = iVar6;
        *(int *)(*(longlong *)(param_1 + 0x168) + 0x88 + lVar8) = iVar7;
        lVar14 = *(longlong *)(param_1 + 0x168) + lVar8;
        lVar9 = 0;
        do {
          puVar3 = (undefined8 *)(lVar14 + 0x54 + lVar9);
          *puVar3 = 0x7f7fffff7f7fffff;
          puVar3[1] = 0xff7fffff7f7fffff;
          *(undefined1 **)(lVar14 + 100 + lVar9) = &DAT_ff7fffffff7fffff;
          lVar9 = lVar9 + 0x1c;
        } while (lVar9 != 0x38);
        *(undefined4 *)(*local_1b0 + 0x50 + lVar8) = 0;
        *(undefined4 *)(*local_1b0 + lVar8) = 1;
        lVar14 = *local_1b0;
        iVar4 = *(int *)(lVar14 + 0x28 + lVar8);
        iVar18 = iVar4 / 2;
        if (iVar4 < -1) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar18);
        }
        if (*(int *)((longlong)iVar6 * 0x90 + lVar14 + 0x2c) < iVar18) {
          FUN_1409694e8();
          lVar14 = *local_1b0;
        }
        lVar8 = (longlong)iVar7 * 0x90;
        if (*(int *)(lVar14 + 0x2c + lVar8) < iVar18) {
          FUN_1409694e8(lVar8 + lVar14 + 0x20);
          lVar14 = *local_1b0;
        }
        lVar9 = (longlong)iVar6 * 0x90;
        *(undefined8 *)(lVar14 + 0x30 + lVar9) = 0;
        *(undefined4 *)(lVar14 + 0x38 + lVar9) = 0;
        lVar8 = *(longlong *)(param_1 + 0x168);
        *(undefined8 *)(lVar8 + 0x3c + lVar9) = 0;
        *(undefined4 *)(lVar8 + 0x44 + lVar9) = 0;
        lVar8 = *(longlong *)(param_1 + 0x168);
        lVar14 = (longlong)iVar7 * 0x90;
        *(undefined8 *)(lVar8 + 0x30 + lVar14) = 0;
        *(undefined4 *)(lVar8 + 0x38 + lVar14) = 0;
        lVar8 = *(longlong *)(param_1 + 0x168);
        *(undefined8 *)(lVar8 + 0x3c + lVar14) = 0;
        *(undefined4 *)(lVar8 + 0x44 + lVar14) = 0;
        cVar5 = FUN_14096921e(param_1,1);
        if (cVar5 != '\0') {
          lVar8 = *local_1b0;
          iVar6 = *(int *)(lVar8 + local_1a8);
          goto LAB_140968a09;
        }
LAB_1409690bd:
        iVar6 = 1;
      }
      else {
LAB_140968a09:
        lVar14 = local_1a8;
        if (iVar6 == 1) {
          lVar14 = lVar8 + local_1a8;
          if (DAT_14c75efd0 == '\x01') {
            local_1bc = *(int *)(lVar8 + 0x28 + local_1a8);
          }
          else {
            plVar12 = local_1a0;
            if (*(int *)(param_1 + 300) < 1) {
              param_1 = local_188;
              local_1bc = *(int *)(lVar8 + 0x28 + local_1a8);
            }
            else {
              local_1bc = (*(int *)(param_1 + 300) - *(int *)(local_188 + 0x130)) +
                          *(int *)(lVar14 + 0x50);
              param_1 = local_188;
              if (*(int *)(lVar14 + 0x28) <= local_1bc) {
                local_1bc = *(int *)(lVar14 + 0x28);
              }
            }
          }
          if (DAT_14c75efc8 == 1) {
            fVar20 = *(float *)(lVar8 + 0x3c + local_1a8);
            fVar23 = *(float *)(lVar8 + 0x40 + local_1a8);
            fVar25 = *(float *)(lVar8 + 0x44 + local_1a8);
            if (fVar20 <= fVar23) {
              local_1b8 = (fVar23 <= fVar25) + 1;
            }
            else {
              local_1b8 = (uint)(fVar20 <= fVar25) * 2;
            }
          }
          else {
            fVar20 = *(float *)(lVar8 + 0x18 + local_1a8) - *(float *)(lVar8 + 0xc + local_1a8);
            fVar25 = *(float *)(lVar8 + 0x14 + local_1a8) - *(float *)(lVar8 + 8 + local_1a8);
            fVar23 = *(float *)(lVar8 + 0x10 + local_1a8) - *(float *)(lVar8 + 4 + local_1a8);
            local_1b8 = 0;
            if (fVar23 <= fVar25 || fVar23 <= fVar20) {
              local_1b8 = (fVar25 <= fVar20) + 1;
            }
          }
          if (DAT_14c75efcc == 1) {
            fVar20 = *(float *)(lVar8 + 0x38 + local_1a8);
            local_108 = *(undefined8 *)(lVar8 + 0x30 + local_1a8);
          }
          else {
            fVar20 = *(float *)(lVar8 + 0xc + local_1a8);
            fVar23 = *(float *)(lVar8 + 4 + local_1a8);
            fVar25 = *(float *)(lVar8 + 8 + local_1a8);
            fVar20 = (*(float *)(lVar8 + 0x18 + local_1a8) - fVar20) * 0.5 + fVar20;
            local_108 = CONCAT44((*(float *)(lVar8 + 0x14 + local_1a8) - fVar25) * 0.5 + fVar25,
                                 (*(float *)(lVar8 + 0x10 + local_1a8) - fVar23) * 0.5 + fVar23);
          }
          local_100 = CONCAT44(local_100._4_4_,fVar20);
          lVar8 = (longlong)*(int *)(lVar14 + 0x50);
          iVar6 = local_1bc;
          if (*(int *)(lVar14 + 0x50) < local_1bc) {
            fVar20 = *(float *)((longlong)&local_108 + (ulonglong)local_1b8 * 4);
            lVar9 = lVar14 + 0x54;
            local_150 = lVar8 - local_1bc;
            lVar15 = lVar8 * 0x1c + 0x18;
            lVar11 = 0;
            local_180 = lVar13;
            local_170 = lVar8;
            local_148 = lVar14;
            do {
              lVar8 = *(longlong *)(local_148 + 0x20);
              fVar23 = *(float *)(lVar8 + -0xc + lVar15);
              fVar25 = *(float *)(lVar8 + -0x14 + lVar15);
              fVar24 = *(float *)(lVar8 + -0x10 + lVar15);
              fVar23 = (*(float *)(lVar8 + lVar15) - fVar23) * 0.5 + fVar23;
              fVar24 = (*(float *)(lVar8 + -4 + lVar15) - fVar24) * 0.5 + fVar24;
              fVar25 = (*(float *)(lVar8 + -8 + lVar15) - fVar25) * 0.5 + fVar25;
              fVar21 = fVar24;
              if ((local_1b8 != 1) && (fVar21 = fVar25, local_1b8 == 2)) {
                fVar21 = fVar23;
              }
              lVar13 = (ulonglong)(fVar20 < fVar21) * 0x1c;
              lVar14 = *local_1b0;
              lVar10 = (longlong)*(int *)(lVar9 + 0x18 + lVar13) * 0x90;
              iVar6 = *(int *)(lVar14 + 0x28 + lVar10);
              uVar16 = iVar6 + 1;
              *(uint *)(lVar14 + 0x28 + lVar10) = uVar16;
              if (*(uint *)(lVar14 + 0x2c + lVar10) < uVar16) {
                local_168 = lVar9;
                FUN_140969b20(lVar10 + lVar14 + 0x20,iVar6);
                lVar9 = local_168;
              }
              param_1 = local_188;
              pfVar1 = (float *)(lVar8 + lVar15);
              pfVar17 = (float *)(lVar13 + lVar9);
              lVar14 = lVar14 + lVar10;
              lVar8 = *(longlong *)(lVar14 + 0x20);
              lVar13 = (longlong)iVar6 * 0x1c;
              *(float *)(lVar8 + lVar13) = pfVar1[-6];
              *(float *)(lVar8 + 0xc + lVar13) = pfVar1[-3];
              *(undefined8 *)(lVar8 + 4 + lVar13) = *(undefined8 *)(pfVar1 + -5);
              *(undefined8 *)(lVar8 + 0x10 + lVar13) = *(undefined8 *)(pfVar1 + -2);
              fVar19 = (float)(int)uVar16;
              *(float *)(lVar8 + 0x18 + lVar13) = *pfVar1;
              fVar21 = pfVar17[2];
              if (pfVar1[-3] <= pfVar17[2]) {
                fVar21 = pfVar1[-3];
              }
              fVar22 = pfVar17[1];
              if (pfVar1[-4] <= pfVar17[1]) {
                fVar22 = pfVar1[-4];
              }
              fVar26 = pfVar1[-5];
              fVar27 = *pfVar17;
              if (fVar26 <= *pfVar17) {
                fVar27 = fVar26;
              }
              *pfVar17 = fVar27;
              pfVar17[1] = fVar22;
              pfVar17[2] = fVar21;
              fVar21 = pfVar17[5];
              if (pfVar17[5] <= *pfVar1) {
                fVar21 = *pfVar1;
              }
              fVar22 = pfVar17[4];
              if (pfVar17[4] <= pfVar1[-1]) {
                fVar22 = pfVar1[-1];
              }
              fVar26 = pfVar17[3];
              if (pfVar17[3] <= pfVar1[-2]) {
                fVar26 = pfVar1[-2];
              }
              pfVar17[3] = fVar26;
              pfVar17[4] = fVar22;
              pfVar17[5] = fVar21;
              fVar22 = fVar23 - *(float *)(lVar14 + 0x38);
              fVar21 = fVar24 - *(float *)(lVar14 + 0x34);
              fVar26 = fVar25 - *(float *)(lVar14 + 0x30);
              fVar28 = fVar26 / fVar19 + *(float *)(lVar14 + 0x30);
              *(float *)(lVar14 + 0x30) = fVar28;
              fVar27 = fVar21 / fVar19 + *(float *)(lVar14 + 0x34);
              *(float *)(lVar14 + 0x34) = fVar27;
              fVar19 = fVar22 / fVar19 + *(float *)(lVar14 + 0x38);
              *(float *)(lVar14 + 0x38) = fVar19;
              *(float *)(lVar14 + 0x3c) = (fVar25 - fVar28) * fVar26 + *(float *)(lVar14 + 0x3c);
              *(float *)(lVar14 + 0x40) = (fVar24 - fVar27) * fVar21 + *(float *)(lVar14 + 0x40);
              *(float *)(lVar14 + 0x44) = (fVar23 - fVar19) * fVar22 + *(float *)(lVar14 + 0x44);
              cVar5 = FUN_14096921e(local_188,0);
              plVar12 = local_1a0;
              lVar13 = local_180;
              lVar8 = local_170;
              iVar6 = local_1bc;
              if (cVar5 == '\0') {
                iVar7 = (int)local_170 + 1;
                if (iVar7 - local_1bc != (int)lVar11) {
                  iVar6 = iVar7 - (int)lVar11;
                }
                break;
              }
              lVar11 = lVar11 + -1;
              lVar15 = lVar15 + 0x1c;
            } while (local_150 != lVar11);
          }
          lVar14 = local_1a8;
          *(int *)(param_1 + 0x130) = *(int *)(param_1 + 0x130) + (iVar6 - (int)lVar8);
          *(int *)(*(longlong *)(param_1 + 0x168) + 0x50 + local_1a8) = iVar6;
          cVar5 = FUN_14096921e(param_1,1);
          if (cVar5 == '\0') goto LAB_1409690bd;
          lVar8 = *local_1b0;
        }
        iVar6 = *(int *)(lVar8 + 0x6c + lVar14);
        if (*(int *)(lVar8 + 0x28 + (longlong)iVar6 * 0x90) == 0) {
LAB_1409690c7:
          FUN_146e4f4f4(local_140);
          *(int *)(param_1 + 0x150) = *(int *)(param_1 + 0x150) + -1;
          FUN_14096963a(param_1,local_1b4);
        }
        else {
          iVar7 = *(int *)(lVar8 + 0x88 + lVar14);
          if (*(int *)(lVar8 + 0x28 + (longlong)iVar7 * 0x90) == 0) goto LAB_1409690c7;
          lVar13 = lVar13 * 0x40;
          pbVar2 = (byte *)(*(longlong *)(param_1 + 0x10) + 0x3c + lVar13);
          *pbVar2 = *pbVar2 & 0xfe;
          lVar8 = *(longlong *)(param_1 + 0x10);
          lVar14 = *(longlong *)(param_1 + 0x168);
          lVar9 = local_178 * 0x90;
          *(undefined4 *)(lVar8 + 8 + lVar13) = *(undefined4 *)(lVar14 + 0x5c + lVar9);
          *(undefined8 *)(lVar8 + lVar13) = *(undefined8 *)(lVar14 + 0x54 + lVar9);
          *(undefined4 *)(lVar8 + 0x14 + lVar13) = *(undefined4 *)(lVar14 + 0x68 + lVar9);
          *(undefined8 *)(lVar8 + 0xc + lVar13) = *(undefined8 *)(lVar14 + 0x60 + lVar9);
          lVar8 = *(longlong *)(param_1 + 0x10);
          lVar14 = *(longlong *)(param_1 + 0x168);
          lVar11 = (longlong)iVar6 * 0x90;
          *(undefined4 *)(lVar14 + 0xc + lVar11) = *(undefined4 *)(lVar8 + 8 + lVar13);
          *(undefined8 *)(lVar14 + 4 + lVar11) = *(undefined8 *)(lVar8 + lVar13);
          *(undefined4 *)(lVar14 + 0x18 + lVar11) = *(undefined4 *)(lVar8 + 0x14 + lVar13);
          *(undefined8 *)(lVar14 + 0x10 + lVar11) = *(undefined8 *)(lVar8 + 0xc + lVar13);
          *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x30 + lVar13) =
               *(undefined4 *)(param_1 + 0x18);
          lVar8 = *(longlong *)(param_1 + 0x10);
          lVar14 = *(longlong *)(param_1 + 0x168);
          *(undefined4 *)(lVar8 + 0x20 + lVar13) = *(undefined4 *)(lVar14 + 0x78 + lVar9);
          *(undefined8 *)(lVar8 + 0x18 + lVar13) = *(undefined8 *)(lVar14 + 0x70 + lVar9);
          *(undefined4 *)(lVar8 + 0x2c + lVar13) = *(undefined4 *)(lVar14 + 0x84 + lVar9);
          *(undefined8 *)(lVar8 + 0x24 + lVar13) = *(undefined8 *)(lVar14 + 0x7c + lVar9);
          lVar8 = *(longlong *)(param_1 + 0x10);
          lVar14 = *(longlong *)(param_1 + 0x168);
          lVar15 = (longlong)iVar7 * 0x90;
          *(undefined4 *)(lVar14 + 0xc + lVar15) = *(undefined4 *)(lVar8 + 0x20 + lVar13);
          *(undefined8 *)(lVar14 + 4 + lVar15) = *(undefined8 *)(lVar8 + 0x18 + lVar13);
          *(undefined4 *)(lVar14 + 0x18 + lVar15) = *(undefined4 *)(lVar8 + 0x2c + lVar13);
          *(undefined8 *)(lVar14 + 0x10 + lVar15) = *(undefined8 *)(lVar8 + 0x24 + lVar13);
          *(int *)(*(longlong *)(param_1 + 0x10) + 0x34 + lVar13) = *(int *)(param_1 + 0x18) + 1;
          *(int *)(*(longlong *)(param_1 + 0x168) + 0x48 + lVar11) =
               *(int *)(*(longlong *)(param_1 + 0x168) + 0x48 + lVar9) + 1;
          *(int *)(*(longlong *)(param_1 + 0x168) + 0x48 + lVar15) =
               *(int *)(*(longlong *)(param_1 + 0x168) + 0x48 + lVar9) + 1;
          *(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0x4c + lVar11) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x30 + lVar13);
          *(undefined4 *)(*(longlong *)(param_1 + 0x168) + 0x4c + lVar15) =
               *(undefined4 *)(*(longlong *)(param_1 + 0x10) + 0x34 + lVar13);
          iVar4 = *(int *)(param_1 + 0x150);
          *(uint *)(param_1 + 0x150) = iVar4 + 1U;
          if (*(uint *)(param_1 + 0x154) < iVar4 + 1U) {
            FUN_1446f48e2(plVar12,iVar4);
          }
          *(int *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar4 * 4) = iVar7;
          iVar7 = *(int *)(param_1 + 0x150);
          *(uint *)(param_1 + 0x150) = iVar7 + 1U;
          if (*(uint *)(param_1 + 0x154) < iVar7 + 1U) {
            FUN_1446f48e2(plVar12,iVar7);
          }
          *(int *)(*(longlong *)(param_1 + 0x148) + (longlong)iVar7 * 4) = iVar6;
          FUN_140969316(local_198,
                        (*(int *)(*(longlong *)(param_1 + 0x10) + 0x34 + lVar13) -
                        *(int *)(param_1 + 0x18)) + 1);
          *(undefined4 *)(*(longlong *)(param_1 + 0x168) + local_1a8) = 2;
        }
        iVar6 = 0;
      }
    }
  } while (iVar6 != 1);
  if ((local_f0 ^ (ulonglong)auStack_1e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096921e FUN_14096921e body=247 status=ok
// SIG undefined FUN_14096921e(void)

ulonglong FUN_14096921e(longlong param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  int iVar6;
  undefined1 auStack_38 [32];
  LARGE_INTEGER local_18;
  ulonglong local_10;
  
  iVar3 = DAT_14c75efd4;
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  if (DAT_14c75efd0 == '\x01') {
    if (param_2 == '\0') {
      iVar1 = *(int *)(param_1 + 0x140);
      uVar5 = CONCAT71((int7)(local_10 >> 8),1);
      iVar6 = 0;
      if (iVar1 < DAT_14c75efd4) {
        iVar6 = iVar1 + 1;
      }
      *(int *)(param_1 + 0x140) = iVar6;
      if (iVar1 < iVar3) goto LAB_140969264;
    }
    BVar4 = QueryPerformanceCounter(&local_18);
    uVar5 = CONCAT44(extraout_var,BVar4);
    if (0.0 < DAT_14c75efd8) {
      uVar5 = CONCAT71((int7)(uVar5 >> 8),
                       ((double)local_18.QuadPart * DAT_14c83f420 + 16777216.0) -
                       *(double *)(param_1 + 0x138) <= (double)DAT_14c75efd8 ||
                       (ABS(*(double *)(param_1 + 0x138)) <= 1e-08 || *(int *)(param_1 + 300) < 1));
      goto LAB_140969264;
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 300);
    uVar5 = (ulonglong)uVar2;
    if (0 < (int)uVar2) {
      uVar5 = (ulonglong)CONCAT31((int3)(uVar2 >> 8),*(int *)(param_1 + 0x130) < (int)uVar2);
      goto LAB_140969264;
    }
  }
  uVar5 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_140969264:
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140969316 FUN_140969316 body=68 status=ok
// SIG undefined FUN_140969316(void)

int FUN_140969316(longlong *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + param_2;
  if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < param_2) {
    FUN_14096990c(param_1,iVar1);
  }
  FUN_14096935a((longlong)iVar1 * 0x40 + *param_1,param_2);
  return iVar1;
}



// FUNCTION 14096935a FUN_14096935a body=64 status=ok
// SIG undefined FUN_14096935a(void)

void FUN_14096935a(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0x7f7fffff7f7fffff;
    param_1[1] = 0xff7fffff7f7fffff;
    param_1[2] = &DAT_ff7fffffff7fffff;
    param_1[3] = 0x7f7fffff7f7fffff;
    param_1[4] = 0xff7fffff7f7fffff;
    param_1[5] = &DAT_ff7fffffff7fffff;
    param_1[6] = 0xffffffffffffffff;
    *(undefined4 *)(param_1 + 7) = 0xffffffff;
    *(byte *)((longlong)param_1 + 0x3c) = *(byte *)((longlong)param_1 + 0x3c) & 0xfc;
    param_1 = param_1 + 8;
  }
  return;
}



// FUNCTION 14096939a FUN_14096939a body=127 status=ok
// SIG undefined FUN_14096939a(void)

int FUN_14096939a(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x160);
  if ((longlong)iVar1 == 0) {
    iVar2 = *(int *)(param_1 + 0x170);
    *(int *)(param_1 + 0x170) = iVar2 + 1;
    if (*(int *)(param_1 + 0x174) == iVar2) {
      FUN_140969a0c((longlong *)(param_1 + 0x168),iVar2);
    }
    FUN_140969419((longlong)iVar2 * 0x90 + *(longlong *)(param_1 + 0x168));
  }
  else {
    iVar2 = *(int *)(*(longlong *)(param_1 + 0x158) + -4 + (longlong)iVar1 * 4);
    *(int *)(param_1 + 0x160) = iVar1 + -1;
    FUN_14479f406(param_1 + 0x158);
  }
  return iVar2;
}



// FUNCTION 140969419 FUN_140969419 body=61 status=ok
// SIG undefined FUN_140969419(void)

void FUN_140969419(undefined4 *param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  *param_1 = 0;
  *(undefined8 *)(param_1 + 1) = 0x7f7fffff7f7fffff;
  *(undefined8 *)(param_1 + 3) = 0xff7fffff7f7fffff;
  *(undefined1 **)(param_1 + 5) = &DAT_ff7fffffff7fffff;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  lVar2 = 0;
  do {
    puVar1 = (undefined8 *)((longlong)param_1 + lVar2 + 0x54);
    *puVar1 = 0x7f7fffff7f7fffff;
    puVar1[1] = 0xff7fffff7f7fffff;
    *(undefined1 **)((longlong)param_1 + lVar2 + 100) = &DAT_ff7fffffff7fffff;
    lVar2 = lVar2 + 0x1c;
  } while (lVar2 != 0x38);
  return;
}



// FUNCTION 140969456 FUN_140969456 body=81 status=ok
// SIG undefined FUN_140969456(void)

undefined8 * FUN_140969456(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  uVar2 = *param_2;
  *(int *)(param_1 + 1) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1409697b8(param_1,iVar1,0);
    FUN_1409694a7(*param_1,uVar2,iVar1);
  }
  *(undefined1 *)(param_1 + 2) = 0;
  return param_1;
}



// FUNCTION 1409694a7 FUN_1409694a7 body=65 status=ok
// SIG undefined FUN_1409694a7(void)

void FUN_1409694a7(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  
  if (param_3 != 0) {
    lVar1 = 0;
    do {
      *(undefined4 *)(param_1 + lVar1) = *(undefined4 *)(param_2 + lVar1);
      *(undefined8 *)(param_1 + 4 + lVar1) = *(undefined8 *)(param_2 + 4 + lVar1);
      *(undefined4 *)(param_1 + 0xc + lVar1) = *(undefined4 *)(param_2 + 0xc + lVar1);
      *(undefined8 *)(param_1 + 0x10 + lVar1) = *(undefined8 *)(param_2 + 0x10 + lVar1);
      *(undefined4 *)(param_1 + 0x18 + lVar1) = *(undefined4 *)(param_2 + 0x18 + lVar1);
      lVar1 = lVar1 + 0x1c;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1409694e8 FUN_1409694e8 body=338 status=ok
// SIG undefined FUN_1409694e8(void)

void FUN_1409694e8(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = (longlong)param_2 * 0x1c;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_140969559;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,4);
      }
    }
LAB_140969559:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 / 0x1c)) {
      uVar5 = uVar3 / 0x1c & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,0x1c,4);
  }
  return;
}



// FUNCTION 14096963a FUN_14096963a body=380 status=ok
// SIG undefined FUN_14096963a(void)

void FUN_14096963a(longlong param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_d8 [12];
  undefined4 auStack_cc [4];
  undefined1 auStack_bc [8];
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 auStack_a4 [3];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  auStack_bc._4_4_ = 0;
  local_b4 = 0x7f7fffff;
  uStack_b0 = 0x7f7fffff;
  uStack_ac._0_4_ = 0x7f7fffff;
  uStack_ac._4_4_ = 0xff7fffff;
  auStack_a4[0] = 0xff7fffff;
  auStack_a4[1] = 0xff7fffff;
  local_98 = 0;
  uStack_90 = 0;
  lVar3 = 0x68;
  do {
    *(undefined4 *)((longlong)auStack_cc + lVar3) = 0x7f7fffff;
    *(undefined4 *)((longlong)auStack_cc + lVar3 + 4) = 0x7f7fffff;
    *(undefined4 *)((longlong)auStack_cc + lVar3 + 8) = 0x7f7fffff;
    *(undefined4 *)((longlong)auStack_cc + lVar3 + 0xc) = 0xff7fffff;
    *(undefined1 **)(auStack_bc + lVar3) = &DAT_ff7fffffff7fffff;
    lVar3 = lVar3 + 0x1c;
  } while (lVar3 != 0xa0);
  lVar2 = *(longlong *)(param_1 + 0x168);
  lVar4 = (longlong)param_2 * 0x90;
  lVar3 = lVar2 + lVar4;
  *(undefined4 *)(lVar2 + lVar4) = 0;
  *(undefined8 *)(lVar2 + 4 + lVar4) = 0x7f7fffff7f7fffff;
  *(undefined4 *)(lVar2 + 0xc + lVar4) = 0x7f7fffff;
  *(undefined1 **)(lVar2 + 0x10 + lVar4) = &DAT_ff7fffffff7fffff;
  *(undefined4 *)(lVar2 + 0x18 + lVar4) = 0xff7fffff;
  if (*(longlong *)(lVar2 + 0x20 + lVar4) != 0) {
    FUN_1400020a8();
  }
  *(undefined8 *)(lVar3 + 0x20) = local_98;
  *(undefined4 *)(lVar3 + 0x28) = (undefined4)uStack_90;
  *(undefined4 *)(lVar3 + 0x2c) = uStack_90._4_4_;
  *(undefined4 *)(lVar3 + 0x30) = local_88;
  *(undefined4 *)(lVar3 + 0x34) = uStack_84;
  *(undefined4 *)(lVar3 + 0x38) = uStack_80;
  *(undefined4 *)(lVar3 + 0x3c) = uStack_7c;
  *(undefined4 *)(lVar3 + 0x40) = local_78;
  *(undefined4 *)(lVar3 + 0x44) = uStack_74;
  *(undefined4 *)(lVar3 + 0x48) = uStack_70;
  *(undefined4 *)(lVar3 + 0x4c) = uStack_6c;
  *(undefined4 *)(lVar3 + 0x50) = local_68;
  lVar2 = 0x54;
  do {
    *(undefined4 *)(lVar3 + 8 + lVar2) = *(undefined4 *)((longlong)&uStack_b0 + lVar2);
    *(undefined8 *)(lVar3 + lVar2) = *(undefined8 *)(auStack_bc + lVar2 + 4);
    *(undefined8 *)(lVar3 + 0xc + lVar2) = *(undefined8 *)((longlong)&uStack_ac + lVar2);
    *(undefined4 *)(lVar3 + 0x14 + lVar2) = *(undefined4 *)((longlong)auStack_a4 + lVar2);
    *(undefined4 *)(lVar3 + 0x18 + lVar2) = *(undefined4 *)((longlong)auStack_a4 + lVar2 + 4);
    lVar2 = lVar2 + 0x1c;
  } while (lVar2 != 0x8c);
  iVar1 = *(int *)(param_1 + 0x160);
  *(uint *)(param_1 + 0x160) = iVar1 + 1U;
  if (*(uint *)(param_1 + 0x164) < iVar1 + 1U) {
    FUN_1446f48e2((longlong *)(param_1 + 0x158),iVar1);
  }
  *(int *)(*(longlong *)(param_1 + 0x158) + (longlong)iVar1 * 4) = param_2;
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409697b8 FUN_1409697b8 body=340 status=ok
// SIG undefined FUN_1409697b8(void)

void FUN_1409697b8(longlong param_1,int param_2,int param_3)

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
    uVar4 = (longlong)param_2 * 0x1c;
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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14096982d;
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
LAB_14096982d:
    iVar5 = (int)(uVar4 / 0x1c);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar5) {
      iVar7 = iVar5;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,0x1c,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14096990c FUN_14096990c body=255 status=ok
// SIG undefined FUN_14096990c(void)

void FUN_14096990c(longlong param_1,int param_2)

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
    uVar4 = uVar3 * 0x40;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x3ffffffffffffff) * 4]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 6)) {
      uVar3 = uVar4 >> 6 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x40,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140969a0c FUN_140969a0c body=275 status=ok
// SIG undefined FUN_140969a0c(void)

void FUN_140969a0c(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x90;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x90)) {
      uVar5 = uVar4 / 0x90 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x90,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140969b20 FUN_140969b20 body=378 status=ok
// SIG undefined FUN_140969b20(void)

void FUN_140969b20(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
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
    lVar5 = (longlong)(int)uVar3;
  }
  else {
    lVar5 = (longlong)(int)uVar2 + ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + 0x10;
  }
  uVar4 = lVar5 * 0x1c;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (uVar4 < 0x7ff1) {
        uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
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
            uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140969baf;
            lVar5 = uVar6 + 1 + uVar8;
            uVar8 = uVar8 - 1;
          } while (lVar5 != 0x33);
        }
        uVar4 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar4 = (ulonglong)DAT_14c841df8;
        }
        uVar4 = -uVar4 & ((uVar7 & 0xfffffffffffffff0) + uVar4) - 1;
      }
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_140969baf:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar4 / 0x1c)) {
    uVar7 = uVar4 / 0x1c & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x1c,4);
  return;
}



// FUNCTION 140969c9a FUN_140969c9a body=373 status=ok
// SIG undefined FUN_140969c9a(void)

void FUN_140969c9a(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140969d23;
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
LAB_140969d23:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x18)) {
    uVar7 = uVar5 / 0x18 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x18,8);
  return;
}



// FUNCTION 140969e16 FUN_140969e16 body=57 status=ok
// SIG undefined FUN_140969e16(void)

void FUN_140969e16(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb21f00 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb21f00 = FUN_140002ddd(FUN_146436782,uVar1,L"GbxBrainTask_Tagged");
  }
  return;
}



// FUNCTION 140969e50 FUN_140969e50 body=38 status=ok
// SIG undefined FUN_140969e50(void)

undefined8 FUN_140969e50(undefined8 param_1,int param_2)

{
  FUN_140969e76();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140969e76 FUN_140969e76 body=80 status=ok
// SIG undefined FUN_140969e76(void)

void FUN_140969e76(undefined8 *param_1)

{
  longlong *plVar1;
  
  *param_1 = &PTR_LAB_149ea6520;
  plVar1 = (longlong *)param_1[0xe];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xe] = 0;
  plVar1 = (longlong *)param_1[0xf];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
  }
  param_1[0xf] = 0;
  return;
}



// FUNCTION 140969ec6 FUN_140969ec6 body=591 status=ok
// SIG undefined FUN_140969ec6(void)

void FUN_140969ec6(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong *plVar7;
  undefined8 uVar8;
  undefined1 auStack_208 [32];
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined **local_1d0;
  longlong *local_1c8;
  undefined ***local_1c0;
  undefined ****local_1b8;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_208;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc08);
  if ((param_2[0xd] != 0) && (lVar3 = *(longlong *)(param_2[0xd] + 0x10), lVar3 != 0)) {
    *(byte *)(param_1 + 0xbc) = *(byte *)(param_1 + 0xbc) & 0xfe | *(int *)(lVar3 + 0x68) == 2;
  }
  local_1d0 = &PTR_FUN_149e37810;
  local_1c8 = param_2;
  local_1c0 = &local_1d0;
  local_1b8 = &local_1c0;
  switchD_143c3d4dc::caseD_20(param_1,&local_1c0);
  iVar4 = FUN_1448332aa(param_2,&DAT_149e3cc08);
  if (0xd < iVar4) {
    if (((param_2[0xd] != 0) && (*(longlong *)(param_2[0xd] + 0x10) != 0)) ||
       ((uVar5 = 0, (*(byte *)(param_2 + 5) & 4) != 0 &&
        ((*(byte *)((longlong)param_2 + 0x35) & 0x10) != 0)))) {
      uVar5 = (uint)(*(longlong *)(param_1 + 0xc0) != 0);
    }
    puVar2 = (ulonglong *)param_2[1];
    puVar1 = (uint *)*puVar2 + 1;
    if ((uint *)puVar2[1] < puVar1) {
      local_1d0 = (undefined **)CONCAT44(local_1d0._4_4_,uVar5);
      (**(code **)(*param_2 + 0x170))(param_2,&local_1d0,4);
      uVar5 = (uint)local_1d0;
      if (1 < (uint)local_1d0) {
        FUN_14572541c(param_2);
        uVar5 = (uint)local_1d0;
      }
    }
    else {
      uVar5 = *(uint *)*puVar2;
      *puVar2 = (ulonglong)puVar1;
    }
    if (uVar5 != 0) {
      if ((*(byte *)(param_2 + 5) & 1) != 0) {
        lVar6 = FUN_14001cc68(0x470,0x10);
        FUN_14096a150(lVar6);
        lVar3 = *(longlong *)(param_1 + 0xc0);
        if ((lVar3 != lVar6) && (*(longlong *)(param_1 + 0xc0) = lVar6, lVar3 != 0)) {
          FUN_14063db7c(lVar3);
          FUN_1400020a8(lVar3);
        }
        *(undefined1 *)(param_1 + 0xbd) = 1;
      }
      plVar7 = (longlong *)FUN_14096a116();
      local_1d0 = &PTR_FUN_149e37810;
      local_1e8 = 0;
      uStack_1e0 = 0;
      local_1c8 = param_2;
      local_1c0 = &local_1d0;
      local_1b8 = &local_1c0;
      (**(code **)(*plVar7 + 0x2d0))(plVar7,&local_1c0,*(undefined8 *)(param_1 + 0xc0),plVar7);
      goto LAB_140969f8c;
    }
  }
  if (((*(byte *)((longlong)param_2 + 0x2b) & 2) != 0) && (*(longlong *)(param_1 + 0xc0) != 0)) {
    uVar8 = FUN_14096a116();
    local_1e8 = 0;
    uStack_1e0 = 0;
    FUN_14496b17c(uVar8,param_2,*(undefined8 *)(param_1 + 0xc0),uVar8);
  }
LAB_140969f8c:
  if ((local_40 ^ (ulonglong)auStack_208) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096a116 FUN_14096a116 body=57 status=ok
// SIG undefined FUN_14096a116(void)

void FUN_14096a116(void)

{
  undefined8 uVar1;
  
  if (DAT_14caea240 == 0) {
    uVar1 = FUN_140002dac();
    DAT_14caea240 = FUN_140002ddd(FUN_1463ea1ac,uVar1,L"MaterialCachedExpressionData");
  }
  return;
}



// FUNCTION 14096a150 FUN_14096a150 body=240 status=ok
// SIG undefined FUN_14096a150(void)

longlong FUN_14096a150(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = 0x48;
  do {
    *(undefined8 *)(param_1 + -0x28 + lVar2) = 0;
    *(undefined4 *)(param_1 + -0x20 + lVar2) = 0;
    puVar1 = (undefined8 *)(param_1 + -0x48 + lVar2);
    *puVar1 = 0;
    puVar1[1] = 0;
    *(undefined8 *)(param_1 + -0x1c + lVar2) = 0xffffffff00000080;
    *(undefined4 *)(param_1 + -0x14 + lVar2) = 0;
    *(undefined8 *)(param_1 + -8 + lVar2) = 0;
    *(undefined4 *)(param_1 + lVar2) = 0;
    lVar2 = lVar2 + 0x50;
  } while (lVar2 != 0x318);
  memset((void *)(param_1 + 0x2d0),0,0x100);
  *(undefined4 *)(param_1 + 0x3d0) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x3d8) = 0;
  *(undefined8 *)(param_1 + 0x3e0) = 0;
  *(undefined8 *)(param_1 + 1000) = 0;
  *(undefined8 *)(param_1 + 0x3f0) = 0;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  *(undefined8 *)(param_1 + 0x410) = 0;
  *(undefined8 *)(param_1 + 0x418) = 0;
  *(undefined8 *)(param_1 + 0x420) = 0;
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined8 *)(param_1 + 0x430) = 0;
  *(undefined4 *)(param_1 + 0x438) = 0xffffffff;
  *(undefined8 *)(param_1 + 0x450) = 0;
  *(undefined8 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x440) = 0;
  *(undefined8 *)(param_1 + 0x448) = 0;
  *(uint *)(param_1 + 0x460) = *(uint *)(param_1 + 0x460) & 0xfffffe00;
  *(undefined4 *)(param_1 + 0x464) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  *(undefined4 *)(param_1 + 0x458) = 4;
  FUN_1401c3474(param_1 + 0x450,0);
  **(undefined4 **)(param_1 + 0x450) = 0;
  return param_1;
}



// FUNCTION 14096a240 FUN_14096a240 body=40 status=ok
// SIG undefined FUN_14096a240(void)

undefined8 FUN_14096a240(undefined8 param_1,int param_2)

{
  FUN_14096a268();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14096a268 FUN_14096a268 body=177 status=ok
// SIG undefined FUN_14096a268(void)

void FUN_14096a268(undefined8 *param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a9c9130;
  param_1[5] = &PTR_FUN_14a9c96e0;
  param_1[6] = &DAT_14a9c9700;
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc455(param_1[0x48],*(undefined4 *)(param_1 + 0x49));
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x47];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  if (param_1[0x2b] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x23] != 0) {
    FUN_1400020a8();
  }
  FUN_1401fc5a0(param_1);
  return;
}



// FUNCTION 14096a31a FUN_14096a31a body=946 status=ok
// SIG undefined FUN_14096a31a(void)

int * FUN_14096a31a(longlong *param_1,int *param_2,longlong *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong uVar15;
  byte bVar16;
  int iVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  longlong *plVar21;
  longlong *plVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_1447711aa(param_1,iVar19);
    }
    iVar12 = (int)param_1[5];
    if (iVar12 == 0) {
      iVar11 = -1;
    }
    else {
      iVar11 = iVar12 + 0x1e;
      if (-1 < iVar12 + -1) {
        iVar11 = iVar12 + -1;
      }
      iVar11 = iVar11 >> 5;
    }
    plVar21 = param_1 + 2;
    iVar17 = iVar12 + 1;
    iVar23 = iVar12 + 0x1f;
    if (-1 < iVar12) {
      iVar23 = iVar12;
    }
    if (iVar23 >> 5 == iVar11) {
      *(int *)(param_1 + 5) = iVar17;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar12) {
        if (iVar12 + 0x20U < 0xa0) {
          iVar17 = 0x80;
          iVar11 = iVar12;
        }
        else {
          uVar13 = iVar12 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar20 = 4;
            if (4 < uVar13) {
              uVar20 = uVar13;
            }
          }
          else {
            uVar20 = (uVar13 * 3 >> 3) + uVar13 + 0x10;
          }
          uVar15 = FUN_144a3809e(uVar20 << 2,0);
          iVar11 = (int)(uVar15 >> 2);
          iVar17 = -0x20;
          if ((int)uVar13 <= iVar11) {
            iVar17 = iVar11 << 5;
          }
          iVar11 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar17;
        FUN_1446efbd8(plVar21,iVar11);
        iVar17 = (int)param_1[5] + 1;
      }
      iVar11 = iVar17 + 0x1f;
      if (-1 < iVar17) {
        iVar11 = iVar17;
      }
      *(int *)(param_1 + 5) = iVar17;
      if (iVar17 % 0x20 != 0) {
        plVar22 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar22 = plVar21;
        }
        bVar16 = -(char)(iVar17 % 0x20);
        *(uint *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar22 + (longlong)(iVar11 >> 5) * 4) << (bVar16 & 0x1f)) >>
             (bVar16 & 0x1f);
      }
    }
    lVar14 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar21 = (longlong *)param_1[4];
    }
    bVar16 = (byte)iVar12 & 0x1f;
    puVar2 = (uint *)((longlong)plVar21 + (longlong)(iVar23 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar16 | 0xfffffffeU >> 0x20 - bVar16);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar14 = (longlong)iVar19;
    iVar12 = *(int *)(*param_1 + 4 + lVar14 * 0x20);
    *(int *)(param_1 + 6) = iVar12;
    iVar11 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar11;
    if (iVar11 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar12 * 0x20) = 0xffffffff;
    }
  }
  plVar21 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar21 = (longlong *)param_1[4];
  }
  iVar12 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar12 = iVar19;
  }
  puVar2 = (uint *)((longlong)plVar21 + (longlong)(iVar12 >> 5) * 4);
  *puVar2 = *puVar2 | 1 << ((byte)iVar19 & 0x1f);
  lVar3 = *param_1;
  lVar14 = lVar14 * 0x20;
  puVar4 = (ulonglong *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  uVar13 = (uint)puVar4[1];
  *(uint *)(lVar3 + 8 + lVar14) = uVar13;
  uVar15 = *puVar4;
  *(ulonglong *)(lVar3 + lVar14) = uVar15;
  *(undefined8 *)(lVar3 + 0x10 + lVar14) = *puVar5;
  *(undefined4 *)(lVar3 + 0x18 + lVar14) = 0xffffffff;
  if (uVar13 != 0) {
    uVar20 = uVar13 >> 0xd ^ (int)uVar15 - uVar13;
    uVar24 = uVar20 << 8 ^ (-0x61c88647 - uVar13) - uVar20;
    uVar25 = uVar24 >> 0xd ^ (uVar13 - uVar20) - uVar24;
    uVar13 = uVar25 >> 0xc ^ (uVar20 - uVar24) - uVar25;
    uVar20 = uVar13 << 0x10 ^ (uVar24 - uVar25) - uVar13;
    uVar24 = uVar20 >> 5 ^ (uVar25 - uVar13) - uVar20;
    uVar13 = uVar24 >> 3 ^ (uVar13 - uVar20) - uVar24;
    uVar20 = uVar13 << 10 ^ (uVar20 - uVar24) - uVar13;
    uVar15 = (ulonglong)(uVar20 >> 0xf ^ uVar24 - (uVar13 + uVar20));
  }
  puVar26 = (undefined4 *)(lVar3 + lVar14);
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar12 = FUN_14096a6cc(param_1,uVar15 & 0xffffffff,puVar26);
    if (iVar12 != -1) {
      lVar14 = *param_1;
      uVar6 = *puVar26;
      uVar7 = puVar26[1];
      uVar8 = puVar26[2];
      uVar9 = puVar26[3];
      *(undefined8 *)(lVar14 + 0x10 + (longlong)iVar12 * 0x20) = *(undefined8 *)(puVar26 + 4);
      puVar1 = (undefined4 *)(lVar14 + (longlong)iVar12 * 0x20);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      FUN_148966c50(param_1,iVar19);
      cVar10 = '\x01';
      goto LAB_14096a440;
    }
  }
  cVar10 = '\0';
  iVar12 = iVar19;
LAB_14096a440:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar10;
  }
  if (cVar10 == '\0') {
    uVar13 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar13 < 4) {
      iVar19 = 1;
    }
    else {
      uVar18 = (ulonglong)(uVar13 & 0xfffffffe) + 0xf;
      lVar14 = 0x3f;
      if (uVar18 != 0) {
        for (; uVar18 >> lVar14 == 0; lVar14 = lVar14 + -1) {
        }
      }
      iVar19 = 1 << ((byte)lVar14 & 0x1f);
    }
    if (((int)uVar13 < 1) || (iVar19 <= (int)param_1[9])) {
      uVar13 = (int)param_1[9] - 1U & (uint)uVar15;
      puVar26[7] = uVar13;
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = param_1 + 7;
      }
      puVar26[6] = *(undefined4 *)
                    ((longlong)plVar21 +
                    ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4);
      plVar21 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar21 = param_1 + 7;
      }
      *(int *)((longlong)plVar21 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar13) * 4) =
           iVar12;
    }
    else {
      *(int *)(param_1 + 9) = iVar19;
      FUN_14096a72c(param_1);
    }
  }
  *param_2 = iVar12;
  return param_2;
}



// FUNCTION 14096a6cc FUN_14096a6cc body=95 status=ok
// SIG undefined FUN_14096a6cc(void)

int FUN_14096a6cc(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + lVar4 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x18 + lVar4);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 14096a72c FUN_14096a72c body=795 status=ok
// SIG undefined FUN_14096a72c(void)

void FUN_14096a72c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  uint *puVar10;
  ulonglong uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar12 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar12,4);
    if ((int)uVar12 < 1) goto LAB_14096a7a1;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar12 != uVar2);
LAB_14096a7a1:
  iVar6 = (int)param_1[5];
  if (iVar6 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar15 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar12 = *puVar10;
    if (uVar12 == 0) {
      iVar15 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar15 = iVar6 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar15 >> 5);
      if (iVar15 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar12 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar7 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar7 != 0) {
      for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (iVar6 <= iVar15) {
      iVar15 = iVar6;
    }
  }
  if (iVar15 < iVar6) {
    uVar12 = 0xffffffff;
    do {
      lVar9 = *param_1;
      lVar8 = (longlong)iVar15 * 0x20;
      uVar2 = *(uint *)(lVar9 + lVar8);
      uVar17 = *(uint *)(lVar9 + 8 + lVar8);
      if (uVar17 != 0) {
        uVar16 = uVar17 >> 0xd ^ uVar2 - uVar17;
        uVar2 = uVar16 << 8 ^ (-0x61c88647 - uVar17) - uVar16;
        uVar17 = uVar2 >> 0xd ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 0xc ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 0x10 ^ (uVar2 - uVar17) - uVar16;
        uVar17 = uVar2 >> 5 ^ (uVar17 - uVar16) - uVar2;
        uVar16 = uVar17 >> 3 ^ (uVar16 - uVar2) - uVar17;
        uVar2 = uVar16 << 10 ^ (uVar2 - uVar17) - uVar16;
        uVar2 = uVar2 >> 0xf ^ uVar17 - (uVar16 + uVar2);
      }
      uVar7 = (longlong)(int)uVar2 & (longlong)(int)param_1[9] - 1U;
      iVar6 = (int)uVar7;
      *(int *)(lVar9 + lVar8 + 0x1c) = iVar6;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar9 + lVar8 + 0x18) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar15;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar6 = (int)param_1[5];
      iVar15 = (int)uVar3;
      lVar9 = (longlong)iVar15;
      uVar2 = puVar10[lVar9] & uVar12;
      if (uVar2 == 0) {
        iVar13 = iVar6 + 0x1e;
        if (-1 < iVar6 + -1) {
          iVar13 = iVar6 + -1;
        }
        iVar13 = iVar13 >> 5;
        iVar14 = iVar13;
        if (iVar13 < iVar15) {
          iVar14 = iVar15;
        }
        if (iVar13 <= iVar15) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar9 + lVar8 + 1];
          if (uVar2 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar14 - lVar9 == lVar8) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar15 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar7 = uVar11 * 2 + 1;
      lVar9 = 0x3f;
      if (uVar7 != 0) {
        for (; uVar7 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar15 = (iVar4 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    } while (iVar15 < iVar6);
  }
  return;
}



// FUNCTION 14096aa56 FUN_14096aa56 body=93 status=ok
// SIG undefined FUN_14096aa56(void)

undefined8 * FUN_14096aa56(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b316f70;
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[7] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14096aac2 FUN_14096aac2 body=88 status=ok
// SIG undefined FUN_14096aac2(void)

undefined8 * FUN_14096aac2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14b07f2f0;
  FUN_14096ab1a(param_1[0x11],*(undefined4 *)(param_1 + 0x12));
  if (param_1[0x11] != 0) {
    FUN_1400020a8();
  }
  FUN_1403d767a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14096ab1a FUN_14096ab1a body=61 status=ok
// SIG undefined FUN_14096ab1a(void)

void FUN_14096ab1a(longlong param_1,int param_2)

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
      plVar1 = plVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14096ab60 FUN_14096ab60 body=576 status=ok
// SIG undefined FUN_14096ab60(void)

void FUN_14096ab60(longlong *param_1,longlong param_2)

{
  uint uVar1;
  undefined2 *puVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
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
  if ((*(byte *)(param_2 + 0x28) & 1) != 0) {
    if (*param_1 == 0) {
      lVar4 = FUN_1404101e2(param_1 + 1);
      if ((lVar4 == 0) || (DAT_14c950c29 == 0)) {
        *param_1 = lVar4;
        if (lVar4 == 0) goto LAB_14096ac5f;
      }
      else {
        FUN_1456cec3c(lVar4);
        *param_1 = lVar4;
      }
      if ((*(uint *)(lVar4 + 8) & 0x1400) == 0) {
        lVar4 = FUN_14048be0a(lVar4);
        if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar4);
        }
      }
      else {
        lVar4 = 0;
      }
      param_1[6] = lVar4;
    }
    else {
      if ((*(uint *)(*param_1 + 8) & 0x1400) == 0) {
        lVar4 = FUN_14048be0a();
        if ((lVar4 != 0) && (DAT_14c950c29 != 0)) {
          FUN_1456cec3c(lVar4);
        }
      }
      else {
        lVar4 = 0;
      }
      param_1[6] = lVar4;
      lVar4 = *param_1;
      if ((lVar4 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar4);
      }
      else if (lVar4 == 0) {
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        *(undefined4 *)(param_1 + 5) = 0;
        if (*(int *)((longlong)param_1 + 0x2c) < 0) {
          FUN_1446f8c06(param_1 + 4,0);
        }
        puVar2 = (undefined2 *)param_1[4];
        if (puVar2 != (undefined2 *)0x0) {
          *puVar2 = 0;
        }
        goto LAB_14096ac5f;
      }
      FUN_1400bbfc4(&local_48,lVar4);
      *(undefined4 *)(param_1 + 2) = local_48;
      *(undefined4 *)((longlong)param_1 + 0x14) = uStack_44;
      *(undefined4 *)(param_1 + 3) = uStack_40;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_3c;
      if (param_1 + 2 == (longlong *)&local_48) {
        if (local_38 != 0) {
          FUN_1400020a8();
        }
      }
      else {
        if (param_1[4] != 0) {
          FUN_1400020a8();
        }
        param_1[4] = local_38;
        local_38 = 0;
        *(undefined4 *)(param_1 + 5) = local_30;
        *(undefined4 *)((longlong)param_1 + 0x2c) = local_2c;
      }
      cVar3 = (*(code *)PTR_FUN_14c758760)();
      if (cVar3 != '\0') {
        uVar1 = *(uint *)(lVar4 + 0xc);
        if ((int)uVar1 < DAT_14c9647dc) {
          lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
        }
        else {
          lVar5 = 0;
        }
        if ((*(uint *)(lVar5 + 8) & 0x8400000) != 0) {
          param_1[1] = 0;
          goto LAB_14096ac5f;
        }
      }
      FUN_14485c47a(param_1 + 1,lVar4);
    }
  }
LAB_14096ac5f:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096ada2 FUN_14096ada2 body=104 status=ok
// SIG undefined FUN_14096ada2(void)

void FUN_14096ada2(longlong param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong lVar3;
  
  lVar3 = (longlong)param_2;
  if (*(longlong *)(*(longlong *)(param_1 + 0x4a0) + lVar3 * 8) == 0) {
    uVar2 = FUN_14001cc68(0x48,0x10);
    FUN_14096ae0a(uVar2);
    lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x4a0) + lVar3 * 8);
    *(undefined8 *)(*(longlong *)(param_1 + 0x4a0) + lVar3 * 8) = uVar2;
    if (lVar1 != 0) {
      FUN_140191cfe(lVar1);
      FUN_1400020a8(lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 14096ae0a FUN_14096ae0a body=133 status=ok
// SIG undefined FUN_14096ae0a(void)

undefined8 * FUN_14096ae0a(undefined8 *param_1)

{
  undefined8 uVar1;
  
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *param_1 = &PTR_FUN_149f48bf8;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[4] = &PTR_LAB_149f48c00;
  *(undefined1 *)(param_1 + 7) = 0;
  FUN_14062dc0c(0,param_1 + 4);
  *param_1 = &PTR_FUN_149f47480;
  uVar1 = FUN_14001cc68(0xd8,0x10);
  FUN_14096ae90(uVar1,param_1,DAT_14c75f1f0,0,0);
  param_1[8] = uVar1;
  return param_1;
}



// FUNCTION 14096ae90 FUN_14096ae90 body=186 status=ok
// SIG undefined FUN_14096ae90(void)

undefined8 *
FUN_14096ae90(undefined8 *param_1,longlong param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined2 *)((longlong)param_1 + 0xc) = 0x401;
  *param_1 = &PTR_FUN_149f473d0;
  param_1[2] = param_2;
  param_1[9] = 0;
  *(undefined4 *)(param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined8 *)((longlong)param_1 + 0x54) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x5c) = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = param_3;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x16));
  SetCriticalSectionSpinCount((LPCRITICAL_SECTION)(param_1 + 0x16),4000);
  if (0 < *(int *)(param_2 + 0x18)) {
    FUN_140b8800e(param_1,0,param_4,0);
  }
  return param_1;
}



// FUNCTION 14096af4a FUN_14096af4a body=412 status=ok
// SIG undefined FUN_14096af4a(void)

undefined8 FUN_14096af4a(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar9 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar9 = 0;
    }
    uVar3 = *(uint *)(lVar9 + 0x10);
    if (*(uint *)(lVar9 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar8 = DAT_14c964868 + 1;
      bVar10 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar10) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar8);
      }
      LOCK();
      uVar3 = *(uint *)(lVar9 + 0x10);
      bVar10 = uVar3 == 0;
      if (bVar10) {
        *(uint *)(lVar9 + 0x10) = uVar8;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar10) {
        uVar3 = uVar8;
      }
    }
    local_38 = CONCAT44(uVar3,uVar1);
    iVar2 = FUN_1409a82f2((longlong *)(param_1 + 0x58),uVar1 ^ uVar3);
    if (iVar2 != -1) {
      lVar9 = *(longlong *)(param_1 + 0x58);
      lVar7 = lVar9 + (longlong)iVar2 * 0x90;
      uVar5 = 0;
      if ((lVar7 == 0) ||
         (pcVar6 = (char *)(lVar9 + (longlong)iVar2 * 0x90 + 8), pcVar6 == (char *)0x0))
      goto LAB_14096b075;
      if ((*pcVar6 == '\x01') && (*(int *)(lVar7 + 0x30) != 0)) {
        uVar1 = *(uint *)(lVar7 + 0x2c);
        uVar5 = 0;
        if (((int)uVar1 < 0) || (uVar5 = 0, DAT_14c9647dc <= (int)uVar1)) goto LAB_14096b075;
        plVar4 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
        if ((plVar4 != (longlong *)0x0) &&
           (((((int)plVar4[2] == *(int *)(lVar7 + 0x30) &&
              ((*(uint *)(plVar4 + 1) & 0x10200000) == 0)) &&
             (plVar4 = (longlong *)*plVar4, plVar4 != (longlong *)0x0)) &&
            ((*(char *)(lVar7 + 10) != '\0' ||
             (plVar4 = (longlong *)(**(code **)(*plVar4 + 0x9f8))(), plVar4 != (longlong *)0x0))))))
        {
          uVar5 = FUN_14096b0e8(plVar4,param_2);
          goto LAB_14096b075;
        }
      }
    }
  }
  uVar5 = 0;
LAB_14096b075:
  if ((local_30 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 14096b0e8 FUN_14096b0e8 body=1017 status=ok
// SIG undefined FUN_14096b0e8(void)

undefined8 FUN_14096b0e8(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  longlong *plVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  bool bVar14;
  float fVar15;
  float extraout_XMM0_Da;
  double dVar16;
  undefined1 auStack_108 [32];
  undefined8 local_e8;
  undefined8 uStack_e0;
  double local_d8;
  double local_c8;
  double dStack_c0;
  double local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  double local_98;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  double local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_2 != 0) {
    lVar10 = FUN_14070cc62();
    if (((*(int *)(*(longlong *)(param_2 + 0x10) + 0x38) < *(int *)(lVar10 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(param_2 + 0x10) + 0x30) +
          (longlong)*(int *)(lVar10 + 0x38) * 8) != lVar10 + 0x30)) ||
       (lVar10 = *(longlong *)(param_2 + 0x858), lVar10 == 0)) {
      bVar14 = false;
    }
    else {
      lVar11 = *(longlong *)(lVar10 + 0x1518);
      plVar6 = *(longlong **)(lVar10 + 0x1520);
      if (plVar6 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
        UNLOCK();
      }
      if ((lVar11 == 0) || (uVar5 = *(uint *)(lVar11 + 0x250), uVar5 < 0x15)) {
        bVar14 = false;
      }
      else {
        bVar14 = uVar5 - 0x15 < 10;
      }
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
    }
    lVar10 = *(longlong *)(param_2 + 0x1c8);
    if (lVar10 == 0) {
      local_98 = DAT_14c8464f0;
      local_a8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
      uStack_a0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
    }
    else {
      local_a8 = *(double *)(lVar10 + 0x260);
      uStack_a0 = *(double *)(lVar10 + 0x268);
      local_98 = *(double *)(lVar10 + 0x270);
    }
    dVar9 = (double)param_1[0x4c];
    dVar8 = (double)param_1[0x4d];
    dVar3 = (double)param_1[0x4d];
    dVar4 = (double)param_1[0x4e];
    if (bVar14) {
      dVar4 = dVar4 + (double)*(float *)((longlong)param_1 + 0xfa4);
    }
    local_c8 = dVar9;
    dStack_c0 = dVar8;
    local_b8 = dVar4;
    lVar10 = (**(code **)(*param_1 + 0xa08))(param_1);
    if (lVar10 == 0) {
      lVar10 = (**(code **)(*param_1 + 0xa00))(param_1);
      if (lVar10 == 0) goto LAB_14096b391;
      local_88 = *(undefined4 *)(lVar10 + 0x260);
      uStack_84 = *(undefined4 *)(lVar10 + 0x264);
      uStack_80 = *(undefined4 *)(lVar10 + 0x268);
      uStack_7c = *(undefined4 *)(lVar10 + 0x26c);
      local_78 = *(double *)(lVar10 + 0x270);
      if (bVar14) {
        local_78 = local_78 + (double)*(float *)((longlong)param_1 + 0xfa4);
      }
    }
    else {
      lVar10 = *(longlong *)(lVar10 + 0x1c8);
      if (lVar10 == 0) {
        puVar13 = &DAT_14c8464e0;
        local_78 = DAT_14c8464f0;
      }
      else {
        puVar13 = (undefined8 *)(lVar10 + 0x260);
        local_78 = *(double *)(lVar10 + 0x270);
      }
      local_88 = *(undefined4 *)puVar13;
      uStack_84 = *(undefined4 *)((longlong)puVar13 + 4);
      uStack_80 = *(undefined4 *)(puVar13 + 1);
      uStack_7c = *(undefined4 *)((longlong)puVar13 + 0xc);
    }
    local_70 = 1;
    dVar7 = dVar9 - (double)CONCAT44(uStack_84,local_88);
    dVar8 = dVar8 - (double)CONCAT44(uStack_7c,uStack_80);
    dVar16 = dVar7 * dVar7 + dVar8 * dVar8;
    if ((dVar16 != 1.0) || (NAN(dVar16))) {
      if (dVar16 < 9.99999993922529e-09) {
        dVar7 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
        dVar8 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
        dVar16 = DAT_14c8464f0;
      }
      else {
        dVar8 = dVar8 * (1.0 / SQRT(dVar16));
        dVar7 = dVar7 * (1.0 / SQRT(dVar16));
        dVar16 = 0.0;
      }
    }
    else {
      dVar16 = (double)(-(ulonglong)(dVar4 - local_78 == 0.0) & (ulonglong)(dVar4 - local_78));
    }
    if (0.0 < (float)((local_a8 - dVar9) * dVar7 + (uStack_a0 - dVar3) * dVar8 +
                     (local_98 - dVar4) * dVar16)) {
LAB_14096b42b:
      uVar12 = 1;
      goto LAB_14096b393;
    }
    lVar10 = (**(code **)(*param_1 + 0x9f8))(param_1);
    if (lVar10 != 0) {
      lVar11 = FUN_14048bbc8(param_1 + 0xeb);
      if ((lVar10 != lVar11) && (*(char *)(lVar10 + 0x6f1) == '\x01')) {
        local_e8 = *(undefined8 *)(lVar10 + 0x260);
        uStack_e0 = *(undefined8 *)(lVar10 + 0x268);
        local_d8 = *(double *)(lVar10 + 0x270);
        if (bVar14) {
          local_d8 = local_d8 + (double)*(float *)((longlong)param_1 + 0xfa4);
        }
        fVar15 = (float)FUN_14096b4ee(&local_a8,&local_88,&local_c8);
        FUN_14096b4ee(&local_a8,&local_c8,&local_e8);
        if (extraout_XMM0_Da < fVar15) goto LAB_14096b42b;
      }
    }
  }
LAB_14096b391:
  uVar12 = 0;
LAB_14096b393:
  if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096b4ee FUN_14096b4ee body=400 status=ok
// SIG undefined FUN_14096b4ee(void)

undefined8 FUN_14096b4ee(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  dVar9 = param_2[2];
  dVar3 = param_3[2] - dVar9;
  dVar1 = *param_3;
  uVar11 = SUB84(dVar1,0);
  uVar12 = (undefined4)((ulonglong)dVar1 >> 0x20);
  dVar10 = *param_2;
  dVar2 = param_2[1];
  dVar4 = param_3[1] - dVar2;
  dVar1 = dVar1 - dVar10;
  dVar5 = (param_1[2] - dVar9) * dVar3 + (*param_1 - dVar10) * dVar1 + (param_1[1] - dVar2) * dVar4;
  if (0.0 < dVar5) {
    dVar6 = dVar3 * dVar3 + dVar1 * dVar1 + dVar4 * dVar4;
    dVar7 = param_3[2];
    dVar8 = param_3[1];
    if (dVar6 <= dVar5) goto LAB_14096b616;
    dVar5 = dVar5 / dVar6;
    dVar9 = dVar9 + dVar3 * dVar5;
    dVar2 = dVar2 + dVar4 * dVar5;
    dVar10 = dVar10 + dVar1 * dVar5;
  }
  uVar11 = SUB84(dVar10,0);
  uVar12 = (undefined4)((ulonglong)dVar10 >> 0x20);
  dVar7 = dVar9;
  dVar8 = dVar2;
LAB_14096b616:
  dVar7 = param_1[2] - dVar7;
  dVar8 = param_1[1] - dVar8;
  dVar9 = *param_1 - (double)CONCAT44(uVar12,uVar11);
  dVar9 = SQRT(dVar7 * dVar7 + dVar9 * dVar9 + dVar8 * dVar8);
  return CONCAT44((int)((ulonglong)dVar9 >> 0x20),(float)dVar9);
}



// FUNCTION 14096b67e FUN_14096b67e body=282 status=ok
// SIG undefined FUN_14096b67e(void)

longlong FUN_14096b67e(longlong param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  
  puVar1 = (uint *)(param_1 + 0x730);
  if (((((*(int *)(param_1 + 0x734) == 0) || (uVar2 = *puVar1, (int)uVar2 < 0)) ||
       (DAT_14c9647dc <= (int)uVar2)) ||
      ((plVar6 = (longlong *)
                 ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
       plVar6 == (longlong *)0x0 || ((int)plVar6[2] != *(int *)(param_1 + 0x734))))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar4 = *plVar6, lVar4 == 0)))) {
    if (*(longlong *)(param_1 + 0x738) == 0) {
      return 0;
    }
    lVar4 = FUN_140007850();
    cVar3 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar4 == 0) || (cVar3 == '\0')) {
      FUN_14485c47a(puVar1,lVar4);
      if (lVar4 == 0) {
        return 0;
      }
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
        FUN_14485c47a(puVar1,lVar4);
      }
    }
    if ((*(uint *)(lVar4 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar5 = FUN_1407bec78();
  if ((*(int *)(lVar5 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
      lVar5 + 0x30)) {
    return lVar4;
  }
  return 0;
}



// FUNCTION 14096b798 FUN_14096b798 body=162 status=ok
// SIG undefined FUN_14096b798(void)

void FUN_14096b798(longlong param_1)

{
  undefined1 in_stack_00000028;
  undefined4 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined4 *in_stack_00000040;
  undefined4 in_stack_00000048;
  undefined4 in_stack_00000050;
  undefined1 auStack_78 [32];
  undefined1 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 *local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_28 = *in_stack_00000040;
  uStack_24 = in_stack_00000040[1];
  uStack_20 = in_stack_00000040[2];
  uStack_1c = in_stack_00000040[3];
  local_40 = &local_28;
  local_18 = *(undefined8 *)(in_stack_00000040 + 4);
  local_30 = in_stack_00000050;
  local_38 = in_stack_00000048;
  local_48 = in_stack_00000038;
  local_50 = in_stack_00000030;
  local_58 = in_stack_00000028;
  FUN_14096b83c(param_1 + -0x960);
  if ((local_10 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096b83c FUN_14096b83c body=247 status=ok
// SIG undefined FUN_14096b83c(void)

void FUN_14096b83c(longlong *param_1,longlong *param_2,undefined4 param_3,undefined1 param_4,
                  undefined1 param_5,undefined4 param_6,undefined8 param_7,undefined4 *param_8,
                  undefined4 param_9,undefined4 param_10)

{
  undefined8 uVar1;
  undefined1 auStack_88 [32];
  longlong local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_68 = 0;
  local_60 = 0x7012;
  local_58 = 0;
  if ((*param_2 != 0) || ((int)param_2[1] != 0x7012)) {
    local_68 = *param_2;
    local_60 = (int)param_2[1];
  }
  local_4b = param_5;
  local_48 = param_6;
  local_40 = param_7;
  local_38 = *param_8;
  uStack_34 = param_8[1];
  uStack_30 = param_8[2];
  uStack_2c = param_8[3];
  local_28 = *(undefined8 *)(param_8 + 4);
  local_20 = param_9;
  local_1c = param_10;
  local_50 = param_3;
  local_4c = param_4;
  uVar1 = FUN_14477b072(param_1,DAT_14cb61b88);
  (**(code **)(*param_1 + 0x248))(param_1,uVar1,&local_68);
  if ((local_18 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096b934 FUN_14096b934 body=323 status=ok
// SIG undefined FUN_14096b934(void)

void FUN_14096b934(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  undefined1 auStack_68 [40];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puVar3 = *(undefined4 **)(param_2 + 0x20);
  uVar1 = *puVar3;
  uVar2 = puVar3[2];
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(longlong *)(param_2 + 0x20) = (longlong)puVar3 + 0xd;
  (*(code *)(&DAT_14c962c70)[*(byte *)(puVar3 + 3)])(*(undefined8 *)(param_2 + 0x18),param_2,0);
  puVar4 = *(uint **)(param_2 + 0x38);
  local_40 = 0;
  pbVar5 = *(byte **)(param_2 + 0x20);
  *(byte **)(param_2 + 0x20) = pbVar5 + 1;
  (*(code *)(&DAT_14c962c70)[*pbVar5])(*(undefined8 *)(param_2 + 0x18),param_2);
  if (puVar4 != (uint *)0x0) {
    if (local_40 == 0) {
      *puVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(local_40 + 0xc);
      *puVar4 = uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar9 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar9 = 0;
      }
      uVar7 = *(uint *)(lVar9 + 0x10);
      if (*(uint *)(lVar9 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        uVar8 = DAT_14c964868 + 1;
        bVar10 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar10) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar8);
        }
        LOCK();
        uVar7 = *(uint *)(lVar9 + 0x10);
        bVar10 = uVar7 == 0;
        if (bVar10) {
          *(uint *)(lVar9 + 0x10) = uVar8;
          uVar7 = 0;
        }
        UNLOCK();
        if (bVar10) {
          uVar7 = uVar8;
        }
      }
    }
    puVar4[1] = uVar7;
    *(ulonglong *)(puVar4 + 2) = CONCAT44(uVar2,uVar1);
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096ba78 FUN_14096ba78 body=382 status=ok
// SIG undefined FUN_14096ba78(void)

void FUN_14096ba78(undefined8 param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  undefined1 auStack_88 [32];
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  longlong *local_60;
  undefined4 local_58;
  wchar_t *local_50;
  longlong *local_48;
  undefined4 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = param_1;
    goto LAB_14096bb99;
  }
  local_50 = L"AccessSelfAddress";
  local_48._0_4_ = 0x11;
  FUN_1446e940c(local_64,&local_50);
  local_50 = L"ScriptCore";
  local_48._0_4_ = 10;
  FUN_1446e940c(local_68,&local_50);
  local_50 = L"Attempted to reference \'self\' as an addressable property.";
  local_48 = (longlong *)CONCAT44(local_48._4_4_,0x39);
  FUN_140208c1e(&local_60,local_68,local_64,&local_50);
  local_50 = (wchar_t *)CONCAT44(local_50._4_4_,3);
  local_48 = local_60;
  if (local_60 == (longlong *)0x0) {
    local_40 = local_58;
  }
  else {
    (**(code **)(*local_60 + 8))();
    local_40 = local_58;
    if (local_60 != (longlong *)0x0) {
      (**(code **)(*local_60 + 0x10))();
    }
  }
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14096bbcf;
    if (iVar1 == 1) {
      DVar2 = FUN_140ad26c0();
      DVar3 = GetCurrentThreadId();
      if (DVar2 == DVar3) goto LAB_14096bbcf;
    }
  }
  else {
LAB_14096bbcf:
    FUN_14282d110(&DAT_14c963468,param_1,param_2,&local_50);
    if ((int)local_50 == 7) {
      *(undefined1 *)(param_2 + 0xa1) = 1;
    }
  }
  if (local_48 != (longlong *)0x0) {
    (**(code **)(*local_48 + 0x10))();
  }
LAB_14096bb99:
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096bbf8 FUN_14096bbf8 body=233 status=ok
// SIG undefined FUN_14096bbf8(void)

void FUN_14096bbf8(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  bool bVar6;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  plVar3 = (longlong *)FUN_140b95304(param_1,param_2,param_4,0);
  if (plVar3 != (longlong *)0x0) {
    lVar1 = *plVar3;
    local_24 = 0;
    if (param_3 == 0) {
      local_28 = 0;
      iVar2 = 0;
    }
    else {
      local_28 = *(uint *)(param_3 + 0xc);
      if ((int)local_28 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((local_28 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      iVar2 = *(int *)(lVar4 + 0x10);
      if (*(int *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar2 = DAT_14c964868 + 1;
        UNLOCK();
        iVar5 = DAT_14c964868 + 1;
        bVar6 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar2;
        if (bVar6) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar5);
        }
        LOCK();
        iVar2 = *(int *)(lVar4 + 0x10);
        bVar6 = iVar2 == 0;
        if (bVar6) {
          *(int *)(lVar4 + 0x10) = iVar5;
          iVar2 = 0;
        }
        UNLOCK();
        if (bVar6) {
          iVar2 = iVar5;
        }
      }
    }
    local_24 = iVar2;
    FUN_14096bce2(lVar1 + 0x80);
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096bce2 FUN_14096bce2 body=120 status=ok
// SIG undefined FUN_14096bce2(void)

undefined8 FUN_14096bce2(longlong *param_1,uint *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 +
                    ((longlong)(int)(param_2[1] ^ *param_2) & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x10;
        if ((*(uint *)(lVar2 + lVar4) == *param_2) && (*(uint *)(lVar2 + 4 + lVar4) == param_2[1]))
        {
          FUN_14096bd5a();
          return 1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 8);
      } while (iVar1 != -1);
    }
  }
  return 0;
}



// FUNCTION 14096bd5a FUN_14096bd5a body=95 status=ok
// SIG undefined FUN_14096bd5a(void)

void FUN_14096bd5a(longlong *param_1,int param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int *piVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar3 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar3 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar2 = *(int *)((longlong)plVar3 + lVar5 * 4);
  if (iVar2 == param_2) {
    piVar4 = (int *)((longlong)plVar3 + lVar5 * 4);
  }
  else {
    do {
      piVar4 = (int *)(lVar1 + (longlong)iVar2 * 0x10 + 8);
      iVar2 = *piVar4;
    } while (iVar2 != param_2);
  }
  *piVar4 = *(int *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_14096bdba(param_1,param_2,1);
  return;
}



// FUNCTION 14096bdba FUN_14096bdba body=144 status=ok
// SIG undefined FUN_14096bdba(void)

void FUN_14096bdba(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x10 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
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
      puVar7 = puVar7 + 4;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 14096be4a FUN_14096be4a body=325 status=ok
// SIG undefined FUN_14096be4a(void)

void FUN_14096be4a(longlong *param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined4 local_70;
  uint uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  iVar6 = (int)param_1[9];
  iVar4 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) < iVar4 >> 2) {
    plVar1 = param_1 + 2;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = plVar1;
    if ((int)param_1[5] == 0) {
      iVar6 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar6 = (int)param_1[5];
    }
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = local_40, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x1c + (longlong)iVar4 * 0x20) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar4 = local_60._4_4_;
        uVar2 = local_60;
      } while (local_78 != param_1 ||
               ((longlong *)CONCAT44(uStack_64,uStack_68) != plVar1 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar3 = 0;
    do {
      *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < (int)param_1[9]);
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096bf90 FUN_14096bf90 body=434 status=ok
// SIG undefined FUN_14096bf90(void)

void FUN_14096bf90(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  longlong *plVar9;
  longlong lVar10;
  int iVar11;
  longlong lVar12;
  ulonglong uVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_88 [40];
  ulonglong local_60;
  longlong *local_58;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_58 = param_1 + 2;
  local_60 = 0x100000000;
  local_50 = 0xffffffff;
  local_48 = 0;
  if ((int)param_1[5] == 0) {
    uVar13 = 1;
    local_50._0_4_ = 0xffffffff;
    local_50._4_4_ = 0;
    local_60._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_60);
    uVar13 = local_60 >> 0x20;
  }
  plVar6 = local_58;
  iVar14 = (int)local_60;
  uVar15 = (uint)local_50;
  iVar8 = local_50._4_4_;
  iVar11 = local_48;
  if (local_50._4_4_ < (int)local_58[3]) {
    do {
      plVar9 = *(longlong **)(*param_1 + 0x10 + (longlong)iVar8 * 0x20);
      if (plVar9 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar9 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)*plVar9)(plVar9);
          LOCK();
          piVar2 = (int *)((longlong)plVar9 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar9 + 0x10))(plVar9);
          }
        }
      }
      uVar15 = uVar15 & ~(uint)uVar13;
      plVar9 = (longlong *)plVar6[2];
      if ((longlong *)plVar6[2] == (longlong *)0x0) {
        plVar9 = plVar6;
      }
      iVar4 = (int)plVar6[3];
      lVar12 = (longlong)iVar14;
      uVar7 = *(uint *)((longlong)plVar9 + lVar12 * 4) & uVar15;
      if (uVar7 == 0) {
        iVar8 = iVar4 + 0x1e;
        if (-1 < iVar4 + -1) {
          iVar8 = iVar4 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar5 = iVar8;
        if (iVar8 < iVar14) {
          iVar5 = iVar14;
        }
        if (iVar8 <= iVar14) break;
        lVar10 = 0;
        while( true ) {
          iVar11 = iVar11 + 0x20;
          uVar7 = *(uint *)((longlong)plVar9 + lVar10 * 4 + lVar12 * 4 + 4);
          if (uVar7 != 0) break;
          lVar10 = lVar10 + 1;
          if (iVar5 - lVar12 == lVar10) goto LAB_14096c0cb;
        }
        iVar14 = iVar14 + (int)lVar10 + 1;
        uVar15 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar7 & uVar7);
      uVar3 = uVar13 * 2 + 1;
      lVar12 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar12 == 0; lVar12 = lVar12 + -1) {
        }
      }
      iVar8 = (iVar11 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    } while (iVar8 < iVar4);
  }
LAB_14096c0cb:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096c144 FUN_14096c144 body=133 status=ok
// SIG undefined FUN_14096c144(void)

void FUN_14096c144(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  
  lVar3 = *(longlong *)(param_1 + 0x10);
  if (lVar3 != 0) {
    plVar4 = *(longlong **)(lVar3 + 0x40);
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
    FUN_14024d120(*(undefined8 *)(lVar3 + 0x28),*(undefined4 *)(lVar3 + 0x30));
    if (*(longlong *)(lVar3 + 0x28) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar3 + 0x18) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(lVar3 + 8) != 0) {
      FUN_1400020a8();
    }
    FUN_1400020a8(lVar3);
    return;
  }
  return;
}



// FUNCTION 14096c1ca FUN_14096c1ca body=41 status=ok
// SIG undefined FUN_14096c1ca(void)

void FUN_14096c1ca(longlong param_1,undefined8 param_2)

{
  FUN_14096c1f4(param_1 + 0x2858);
  FUN_14096c2dc(param_1,param_2);
  return;
}



// FUNCTION 14096c1f4 FUN_14096c1f4 body=59 status=ok
// SIG undefined FUN_14096c1f4(void)

void FUN_14096c1f4(longlong param_1,undefined8 param_2)

{
  if (*(longlong *)(param_1 + 0x10) != 0) {
    FUN_14096c230(*(longlong *)(param_1 + 0x10),param_2);
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_14096c230(*(longlong *)(param_1 + 0x18),param_2);
  return;
}



// FUNCTION 14096c230 FUN_14096c230 body=171 status=ok
// SIG undefined FUN_14096c230(void)

void FUN_14096c230(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  (**(code **)(*param_2 + 0x88))(param_2,param_1 + 0x48,0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x58),0,0);
  (**(code **)(*param_2 + 0x90))
            (param_2,*(undefined8 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x70),0,0);
  if ((longlong)*(int *)(param_1 + 0x98) != 0) {
    lVar1 = (longlong)*(int *)(param_1 + 0x98) * 0xf0;
    lVar2 = *(longlong *)(param_1 + 0x90) + 0xe8;
    do {
      (**(code **)(*param_2 + 0x88))(param_2,lVar2,0,0);
      lVar2 = lVar2 + 0xf0;
      lVar1 = lVar1 + -0xf0;
    } while (lVar1 != 0);
  }
  return;
}



// FUNCTION 14096c2dc FUN_14096c2dc body=95 status=ok
// SIG undefined FUN_14096c2dc(void)

void FUN_14096c2dc(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  (**(code **)(*param_2 + 0x30))(param_2,param_1 + 0x240);
  if ((param_1 != 0) && ((*(uint *)(param_1 + 8) & 0x10) == 0)) {
    plVar1 = (longlong *)(**(code **)(*(longlong *)(param_1 + 0x3a8) + 0x20))(param_1 + 0x3a8);
    if (plVar1 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00014096c330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x30))(plVar1,param_2,*(code **)(*plVar1 + 0x30));
      return;
    }
  }
  return;
}



// FUNCTION 14096c33c FUN_14096c33c body=96 status=ok
// SIG undefined FUN_14096c33c(void)

ulonglong FUN_14096c33c(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 unaff_RDI;
  ulonglong uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
LAB_14096c37f:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_14096c37f;
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar7 = iVar5 == iVar4;
      if (bVar7) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
    } while (!bVar7);
    bVar7 = *(longlong *)(param_1 + 0x18) != 0;
    uVar6 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),bVar7);
    if (bVar7) {
      (**(code **)(param_1 + 0x28))();
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
  return uVar6 & 0xffffffff;
}



// FUNCTION 14096c39c FUN_14096c39c body=42 status=ok
// SIG undefined FUN_14096c39c(void)

void FUN_14096c39c(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  lVar2 = FUN_14070ca4c();
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_14096c3c6(lVar2);
  }
  *(undefined1 *)(param_1 + 0x770) = uVar1;
  return;
}



// FUNCTION 14096c3c6 FUN_14096c3c6 body=626 status=ok
// SIG undefined FUN_14096c3c6(void)

longlong FUN_14096c3c6(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char cVar3;
  undefined8 uVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  longlong local_c8;
  longlong *local_c0;
  undefined1 local_b8 [40];
  longlong local_90;
  undefined1 local_80 [40];
  longlong local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_1 != (longlong *)0x0) {
    uVar4 = FUN_140427846();
    plVar5 = (longlong *)(**(code **)(*param_1 + 0x288))(param_1,uVar4);
    if (plVar5 != (longlong *)0x0) {
      uVar4 = FUN_140427846();
      plVar6 = (longlong *)FUN_144718840(plVar5,uVar4);
      lVar9 = 0;
      if ((plVar5 != plVar6) && (plVar6 != (longlong *)0x0)) {
        (**(code **)(*plVar6 + 0x50))(plVar6,local_80);
        cVar3 = FUN_1401144ce(local_80);
        if (cVar3 != '\0') {
          uVar4 = FUN_1447210f0(param_1);
          plVar5 = (longlong *)FUN_140d28a87(uVar4);
          if (plVar5 != (longlong *)0x0) {
            plVar6 = (longlong *)(**(code **)(*plVar5 + 0xc0))(plVar5);
            if ((longlong)(int)plVar6[1] != 0) {
              lVar8 = *plVar6;
              local_d0 = lVar8 + (longlong)(int)plVar6[1] * 0xc;
              lVar9 = 0;
LAB_14096c4af:
              (**(code **)(*plVar5 + 0x78))(plVar5,&local_c8,lVar8);
              if (local_c8 != 0) {
                lVar7 = FUN_1405f6336();
                if ((lVar7 != 0) && ((longlong)*(int *)(lVar7 + 0x98) != 0)) {
                  lVar10 = *(longlong *)(lVar7 + 0x90) + 0x10;
                  lVar7 = (longlong)*(int *)(lVar7 + 0x98) * 0x48;
                  do {
                    FUN_14096c63a(lVar10,local_b8);
                    cVar3 = FUN_14493b798(local_b8,local_80);
                    if (local_90 != 0) {
                      FUN_1400020a8();
                    }
                    if (cVar3 != '\0') goto LAB_14096c611;
                    lVar10 = lVar10 + 0x48;
                    lVar7 = lVar7 + -0x48;
                  } while (lVar7 != 0);
                }
                if (lVar9 == 0) {
                  lVar7 = (longlong)*(int *)(*(longlong *)(local_c8 + 8) + 0x120);
                  if (lVar7 != 0) {
                    lVar10 = *(longlong *)(*(longlong *)(local_c8 + 8) + 0x118) + 0x10;
                    lVar7 = lVar7 * 0x48;
                    do {
                      FUN_14096c63a(lVar10,local_b8);
                      cVar3 = FUN_14493b798(local_b8,local_80);
                      if (local_90 != 0) {
                        FUN_1400020a8();
                      }
                      if (cVar3 != '\0') goto LAB_14096c611;
                      lVar10 = lVar10 + 0x48;
                      lVar7 = lVar7 + -0x48;
                    } while (lVar7 != 0);
                  }
                }
              }
              goto LAB_14096c598;
            }
          }
        }
        lVar9 = 0;
LAB_14096c5c9:
        if (local_58 != 0) {
          FUN_1400020a8();
        }
      }
      goto LAB_14096c5d6;
    }
  }
  lVar9 = 0;
LAB_14096c5d6:
  if ((local_48 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar9;
LAB_14096c611:
  lVar9 = 1;
LAB_14096c598:
  plVar6 = local_c0;
  if (local_c0 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_c0 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_c0)(local_c0);
      LOCK();
      piVar2 = (int *)((longlong)plVar6 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
      }
    }
  }
  if ((lVar9 != 0) || (lVar8 = lVar8 + 0xc, lVar8 == local_d0)) goto LAB_14096c5c9;
  goto LAB_14096c4af;
}



// FUNCTION 14096c63a FUN_14096c63a body=305 status=ok
// SIG undefined FUN_14096c63a(void)

undefined8 * FUN_14096c63a(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 ****ppppuVar3;
  undefined1 auStack_68 [40];
  undefined8 ***local_40 [3];
  ushort local_28;
  byte local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((char)param_1[4] == '\x1f') {
    puVar1 = (undefined8 *)*param_1;
    *(undefined2 *)param_2 = 0;
    *(undefined8 *)((longlong)param_2 + 4) = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    *(undefined4 *)(param_2 + 4) = 0;
    param_2[5] = 0;
    param_2[6] = 0;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(puVar1 + 1);
    *param_2 = *puVar1;
    FUN_1447715ec(param_2 + 2,puVar1 + 2);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_68);
  }
  FUN_1400b56fe(local_40,param_1,0x1f);
  ppppuVar3 = (undefined8 ****)local_40[0];
  if (local_20 == 0) {
    ppppuVar3 = (undefined8 ****)&DAT_14cb7be28;
  }
  *(undefined2 *)param_2 = 0;
  *(undefined8 *)((longlong)param_2 + 4) = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *(undefined4 *)(param_2 + 4) = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  *(undefined4 *)(param_2 + 1) = *(undefined4 *)(ppppuVar3 + 1);
  *param_2 = *ppppuVar3;
  FUN_1447715ec(param_2 + 2,ppppuVar3 + 2);
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_20 * 0x120));
  if (pcVar2 != (code *)0x0) {
    ppppuVar3 = local_40;
    if (0x18 < local_28) {
      ppppuVar3 = (undefined8 ****)local_40[0];
    }
    (*pcVar2)(ppppuVar3);
  }
  if (0x18 < local_28) {
    FUN_1400020a8(local_40[0]);
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096c76c FUN_14096c76c body=84 status=ok
// SIG undefined FUN_14096c76c(void)

undefined8 FUN_14096c76c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  if (param_4 != 0) {
    param_3 = param_3 + 0x20;
    param_2 = param_2 + 0x20;
    do {
      *(undefined2 *)(param_2 + -0x10) = *(undefined2 *)(param_3 + -0x10);
      *(undefined8 *)(param_2 + -0x18) = *(undefined8 *)(param_3 + -0x18);
      *(undefined1 *)(param_2 + -8) = *(undefined1 *)(param_3 + -8);
      FUN_14096c7c0(param_2,param_3);
      param_3 = param_3 + 0x30;
      param_2 = param_2 + 0x30;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 14096c7c0 FUN_14096c7c0 body=314 status=ok
// SIG undefined FUN_14096c7c0(void)

void FUN_14096c7c0(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (param_2 == param_1) goto LAB_14096c84d;
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  plVar1 = (longlong *)*param_2;
  if (plVar1 == (longlong *)0x0 || (int)param_2[1] == 0) {
    puVar3 = (undefined8 *)0x0;
    iVar4 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x40))(plVar1,&local_30);
    puVar3 = local_30;
    iVar4 = local_28;
  }
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  if ((int)param_1[1] == 0) {
LAB_14096c826:
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*param_1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(param_1,0,0,0x10);
      *(undefined4 *)(param_1 + 1) = 0;
      goto LAB_14096c826;
    }
  }
  *param_1 = (longlong)puVar3;
  *(int *)(param_1 + 1) = iVar4;
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_14096c84d;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14096c84d:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096c90a FUN_14096c90a body=26 status=ok
// SIG undefined FUN_14096c90a(void)

void FUN_14096c90a(undefined8 param_1)

{
  FUN_14024bcf8();
  FUN_140c15808(param_1);
  return;
}



// FUNCTION 14096c924 FUN_14096c924 body=40 status=ok
// SIG undefined FUN_14096c924(void)

undefined8 FUN_14096c924(undefined8 param_1,int param_2)

{
  FUN_14096c94c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14096c94c FUN_14096c94c body=1922 status=ok
// SIG undefined FUN_14096c94c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14096c94c(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong *plVar4;
  
  *param_1 = &PTR_FUN_14b635600;
  plVar2 = (longlong *)param_1[0x213];
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
  plVar2 = param_1 + 0x20a;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x20e) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x20d)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x20d)) {
    FUN_1400020a8(*plVar2);
  }
  if (param_1[0x201] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1fc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1fa] != 0) {
    FUN_1400020a8();
  }
  if (param_1[499] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1f1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ef] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1ed] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e5] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x1db];
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
  if (param_1[0x1cf] != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(param_1[0x1c3],*(undefined4 *)(param_1 + 0x1c4));
  if (param_1[0x1c3] != 0) {
    FUN_1400020a8();
  }
  FUN_1405214e6(param_1[0x1c1],*(undefined4 *)(param_1 + 0x1c2));
  if (param_1[0x1c1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1aa] != 0) {
    FUN_1400020a8();
  }
  plVar2 = param_1 + 0x1a1;
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x1a5) * 0x120));
  if (pcVar3 != (code *)0x0) {
    plVar4 = plVar2;
    if (0x18 < *(ushort *)(param_1 + 0x1a4)) {
      plVar4 = (longlong *)*plVar2;
    }
    (*pcVar3)(plVar4);
  }
  if (0x18 < *(ushort *)(param_1 + 0x1a4)) {
    FUN_1400020a8(*plVar2);
  }
  if (param_1[0x195] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d0ce(param_1[400],*(undefined4 *)(param_1 + 0x191));
  if (param_1[400] != 0) {
    FUN_1400020a8();
  }
  param_1[0x187] = &PTR_FUN_14a171dc0;
  if ((*(char *)(param_1 + 0x189) != '\0') &&
     (plVar2 = (longlong *)param_1[0x188], plVar2 != (longlong *)0x0)) {
    if (plVar2[3] != 0) {
      FUN_1400020a8();
    }
    AcquireSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    _DAT_14c9a0eac = _DAT_14c9a0eac + -1;
    *plVar2 = (longlong)DAT_14c9a0ea0;
    DAT_14c9a0ea0 = plVar2;
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
  }
  FUN_14063a91c(param_1 + 0x16f);
  FUN_14096d148(param_1[0x169],*(undefined4 *)(param_1 + 0x16a));
  if (param_1[0x169] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x167] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x165] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x162] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x15d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x158] != 0) {
    FUN_1400020a8();
  }
  plVar2 = (longlong *)param_1[0x153];
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
  FUN_140d01cbe(param_1[0x14f],*(undefined4 *)(param_1 + 0x150));
  if (param_1[0x14f] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d17b(param_1[0x14d],*(undefined4 *)(param_1 + 0x14e));
  if (param_1[0x14d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x147] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x145] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x139] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x132] != 0) {
    FUN_1400020a8();
  }
  FUN_14067009e(param_1[300],*(undefined4 *)(param_1 + 0x12d));
  if (param_1[300] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x129] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x123] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x11d] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x115] != 0) {
    FUN_1400020a8();
  }
  if ((param_1[0x111] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x111] + 0x50));
  }
  if ((param_1[0x10b] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x10b] + 0x50));
  }
  if ((param_1[0x105] != 0 & DAT_14cb26569) == 1) {
    FUN_1400848c0(*(undefined8 *)(param_1[0x105] + 0x50));
  }
  if ((param_1[0xff] != 0) && ((DAT_14cb26569 & 1) != 0)) {
    FUN_1400848c0(*(undefined8 *)(param_1[0xff] + 0x50));
  }
  if (param_1[0xe8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe2] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdf] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdd] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xdb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xd7] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d0f4(param_1[0xd3],*(undefined4 *)(param_1 + 0xd4));
  if (param_1[0xd3] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d11c(param_1[0xd1],*(undefined4 *)(param_1 + 0xd2));
  if (param_1[0xd1] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xcd] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d1ae(param_1);
  return;
}



// FUNCTION 14096d0ce FUN_14096d0ce body=38 status=ok
// SIG undefined FUN_14096d0ce(void)

void FUN_14096d0ce(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140485912(param_1);
    param_1 = param_1 + 0x68;
  }
  return;
}



// FUNCTION 14096d0f4 FUN_14096d0f4 body=40 status=ok
// SIG undefined FUN_14096d0f4(void)

void FUN_14096d0f4(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_140485912(param_1);
    param_1 = param_1 + 0x70;
  }
  return;
}



// FUNCTION 14096d11c FUN_14096d11c body=44 status=ok
// SIG undefined FUN_14096d11c(void)

void FUN_14096d11c(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 8;
    do {
      FUN_140485912(param_1);
      param_1 = param_1 + 0x80;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14096d148 FUN_14096d148 body=51 status=ok
// SIG undefined FUN_14096d148(void)

void FUN_14096d148(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14096d17b FUN_14096d17b body=51 status=ok
// SIG undefined FUN_14096d17b(void)

void FUN_14096d17b(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x18);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 5;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14096d1ae FUN_14096d1ae body=891 status=ok
// SIG undefined FUN_14096d1ae(void)

void FUN_14096d1ae(undefined8 *param_1)

{
  longlong *plVar1;
  code *pcVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b0e7150;
  if (param_1[0xca] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0xc6) = 0;
  if (param_1[0xc5] != 0) {
    FUN_1400020a8();
  }
  FUN_14096d55a(param_1 + 0xbd);
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  param_1[0xb1] = &PTR_FUN_14affcd20;
  FUN_14096d529(param_1[0xb6],*(undefined4 *)(param_1 + 0xb7));
  if (param_1[0xb6] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xab] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x9c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x96] != 0) {
    FUN_1400020a8();
  }
  plVar1 = param_1 + 0x8c;
  pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 +
                     (ulonglong)((uint)*(byte *)(param_1 + 0x90) * 0x120));
  if (pcVar2 != (code *)0x0) {
    plVar3 = plVar1;
    if (0x18 < *(ushort *)(param_1 + 0x8f)) {
      plVar3 = (longlong *)*plVar1;
    }
    (*pcVar2)(plVar3);
  }
  if (0x18 < *(ushort *)(param_1 + 0x8f)) {
    FUN_1400020a8(*plVar1);
  }
  param_1[0x79] = &PTR_FUN_14ac47960;
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (param_1[0x88] != 0) {
    FUN_1400020a8();
  }
  FUN_140820740(param_1 + 0x80);
  if (param_1[0x7e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x6b] != 0) {
    FUN_1400020a8();
  }
  FUN_140753a84(param_1[0x65],*(undefined4 *)(param_1 + 0x66));
  if (param_1[0x65] != 0) {
    FUN_1400020a8();
  }
  if (param_1[99] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a2e0(param_1 + 0x4c);
  FUN_14028f404(param_1[0x4a],*(undefined4 *)(param_1 + 0x4b));
  if (param_1[0x4a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x48] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x46] != 0) {
    FUN_1400020a8();
  }
  FUN_14063a2ad(param_1[0x41],*(undefined4 *)(param_1 + 0x42));
  if (param_1[0x41] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3f] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  FUN_1403c3d38(param_1 + 0x2a);
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_14ab72890;
  FUN_14052c7cd(param_1[0x1d],*(undefined4 *)(param_1 + 0x1e));
  if (param_1[0x1d] != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (param_1[0x1b] != 0) {
    FUN_1400020a8();
  }
  FUN_14052c796(param_1 + 0x13);
  FUN_140753ab6(param_1);
  return;
}



// FUNCTION 14096d529 FUN_14096d529 body=49 status=ok
// SIG undefined FUN_14096d529(void)

void FUN_14096d529(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14096d55a FUN_14096d55a body=55 status=ok
// SIG undefined FUN_14096d55a(void)

void FUN_14096d55a(longlong *param_1)

{
  FUN_14096d592(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14096d592 FUN_14096d592 body=123 status=ok
// SIG undefined FUN_14096d592(void)

void FUN_14096d592(longlong param_1,int param_2)

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



// FUNCTION 14096d60e FUN_14096d60e body=9 status=ok
// SIG undefined FUN_14096d60e(void)

void FUN_14096d60e(longlong param_1)

{
  FUN_14096d618(param_1 + 0x10);
  return;
}



// FUNCTION 14096d618 FUN_14096d618 body=275 status=ok
// SIG undefined FUN_14096d618(void)

void FUN_14096d618(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  undefined1 local_58 [24];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((int)param_1[1] != 0) {
    plVar3 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar3 = param_1 + 2;
    }
    lVar1 = param_1[9];
    if ((longlong)(int)lVar1 != 0) {
      lVar2 = 0;
      do {
        FUN_144b44800(local_58);
        FUN_144b44830(local_5c,(longlong)*(int *)((longlong)plVar3 + lVar2) + *param_1,
                      (longlong)*(int *)((longlong)plVar3 + lVar2 + 4));
        FUN_144b44810(local_58);
        lVar2 = lVar2 + 0xc;
      } while ((longlong)(int)lVar1 * 0xc != lVar2);
    }
    *(undefined4 *)(param_1 + 9) = 0;
    if (*(int *)((longlong)param_1 + 0x4c) != 0) {
      FUN_14096d72c(param_1 + 2,0);
    }
    *(undefined4 *)(param_1 + 1) = 0;
    if (*(int *)((longlong)param_1 + 0xc) != 0) {
      FUN_144893a1c(param_1,0);
    }
  }
  lVar1 = param_1[10];
  if (lVar1 != 0) {
    FUN_144b44810(lVar1);
    FUN_1400020a8(lVar1);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
  }
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096d72c FUN_14096d72c body=118 status=ok
// SIG undefined FUN_14096d72c(void)

void FUN_14096d72c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  uVar2 = 0;
  if ((param_2 != 0) && (uVar2 = 4, 4 < param_2)) {
    uVar1 = FUN_144a3809e((longlong)(int)param_2 * 0xc,0);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 / 0xc)) {
      uVar2 = uVar1 / 0xc & 0xffffffff;
    }
  }
  if ((int)uVar2 == *(int *)(param_1 + 0x3c)) {
    return;
  }
  *(int *)(param_1 + 0x3c) = (int)uVar2;
  FUN_14096d7a2(param_1,*(undefined4 *)(param_1 + 0x38),uVar2,0xc);
  return;
}



// FUNCTION 14096d7a2 FUN_14096d7a2 body=140 status=ok
// SIG undefined FUN_14096d7a2(void)

void FUN_14096d7a2(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x30);
  if ((uint)param_3 < 5) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0xc);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x30,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x30),param_1,(longlong)param_2 * 0xc);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x30,param_2,param_3,param_4);
  return;
}



// FUNCTION 14096d82e FUN_14096d82e body=329 status=ok
// SIG undefined FUN_14096d82e(void)

undefined4 *
FUN_14096d82e(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14096da0c(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14096d978(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar5 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar6 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar5 = 1 << ((byte)lVar6 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar5 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0xc) = uVar2;
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 1) =
           *(undefined4 *)
            (lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar6 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar6 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar6 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar5;
      FUN_14096dbe8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096d978 FUN_14096d978 body=147 status=ok
// SIG undefined FUN_14096d978(void)

void FUN_14096d978(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
                  )

{
  undefined1 uVar1;
  longlong *plVar2;
  int iVar3;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar3 != -1) {
      do {
        plVar2 = (longlong *)(*param_1 + (longlong)iVar3 * 0x10);
        if (*(longlong *)(*param_1 + (longlong)iVar3 * 0x10) == *param_3) {
          *plVar2 = *param_3;
          FUN_1468841ba(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          break;
        }
        iVar3 = (int)plVar2[1];
        uVar1 = 0;
      } while (iVar3 != -1);
      goto LAB_14096d99c;
    }
  }
  uVar1 = 0;
LAB_14096d99c:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14096da0c FUN_14096da0c body=476 status=ok
// SIG undefined FUN_14096da0c(void)

int * FUN_14096da0c(longlong *param_1,int *param_2)

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
      FUN_1446efaca(param_1,iVar11);
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
    iVar6 = *(int *)(*param_1 + 4 + lVar3 * 0x10);
    *(int *)(param_1 + 6) = iVar6;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0x10) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar3 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14096dbe8 FUN_14096dbe8 body=682 status=ok
// SIG undefined FUN_14096dbe8(void)

void FUN_14096dbe8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lVar13;
  int iVar14;
  ulonglong uVar15;
  
  plVar5 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar5,0,0,4);
  }
  plVar1 = param_1 + 7;
  uVar7 = *(uint *)(param_1 + 9);
  if (uVar7 == 1) {
    if (*plVar5 != 0) {
      FUN_1446efa72(plVar5,0,0,4);
    }
  }
  else {
    if (uVar7 == 0) {
      return;
    }
    FUN_1446efa72(plVar5,0,uVar7,4);
    if ((int)uVar7 < 1) goto LAB_14096dc4c;
  }
  uVar2 = 0;
  do {
    plVar5 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar5 = plVar1;
    }
    *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar2) * 4) =
         0xffffffff;
    uVar2 = uVar2 + 1;
  } while (uVar7 != uVar2);
LAB_14096dc4c:
  iVar14 = (int)param_1[5];
  if (iVar14 == 0) {
    uVar3 = 0;
    uVar11 = 1;
    iVar12 = 0;
    iVar4 = 0;
  }
  else {
    puVar10 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar10 = (uint *)(param_1 + 2);
    }
    uVar7 = *puVar10;
    if (uVar7 == 0) {
      iVar12 = iVar14 + 0x1e;
      if (-1 < iVar14 + -1) {
        iVar12 = iVar14 + -1;
      }
      uVar3 = 0;
      uVar11 = (ulonglong)(uint)(iVar12 >> 5);
      if (iVar12 >> 5 < 1) {
        uVar11 = uVar3;
      }
      iVar4 = 0;
      do {
        if (uVar11 == uVar3) {
          return;
        }
        iVar4 = iVar4 + 0x20;
        uVar7 = puVar10[uVar3 + 1];
        uVar3 = uVar3 + 1;
      } while (uVar7 == 0);
    }
    else {
      uVar3 = 0;
      iVar4 = 0;
    }
    uVar11 = (ulonglong)(-uVar7 & uVar7);
    uVar15 = uVar11 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    if (iVar14 <= iVar12) {
      iVar12 = iVar14;
    }
  }
  if (iVar12 < iVar14) {
    uVar7 = 0xffffffff;
    do {
      lVar6 = *param_1;
      lVar13 = (longlong)iVar12 * 0x10;
      uVar2 = ((uint)(*(ulonglong *)(lVar6 + lVar13) >> 0x14) & 0xffff ^
              (uint)(*(ulonglong *)(lVar6 + lVar13) >> 4)) * -0x7a143595;
      uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
      uVar15 = (longlong)(int)(uVar2 >> 0x10 ^ uVar2) & (longlong)(int)param_1[9] - 1U;
      iVar14 = (int)uVar15;
      *(int *)(lVar6 + 0xc + lVar13) = iVar14;
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(undefined4 *)(lVar6 + 8 + lVar13) =
           *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar5 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar5 = plVar1;
      }
      *(int *)((longlong)plVar5 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12;
      uVar7 = ~(uint)uVar11 & uVar7;
      puVar10 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar10 = (uint *)(param_1 + 2);
      }
      iVar14 = (int)param_1[5];
      iVar12 = (int)uVar3;
      lVar6 = (longlong)iVar12;
      uVar2 = puVar10[lVar6] & uVar7;
      if (uVar2 == 0) {
        iVar8 = iVar14 + 0x1e;
        if (-1 < iVar14 + -1) {
          iVar8 = iVar14 + -1;
        }
        iVar8 = iVar8 >> 5;
        iVar9 = iVar8;
        if (iVar8 < iVar12) {
          iVar9 = iVar12;
        }
        if (iVar8 <= iVar12) {
          return;
        }
        lVar13 = 0;
        while( true ) {
          iVar4 = iVar4 + 0x20;
          uVar2 = puVar10[lVar6 + lVar13 + 1];
          if (uVar2 != 0) break;
          lVar13 = lVar13 + 1;
          if (iVar9 - lVar6 == lVar13) {
            return;
          }
        }
        uVar3 = (ulonglong)(iVar12 + (int)lVar13 + 1);
        uVar7 = 0xffffffff;
      }
      uVar11 = (ulonglong)(-uVar2 & uVar2);
      uVar15 = uVar11 * 2 + 1;
      lVar6 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar6 == 0; lVar6 = lVar6 + -1) {
        }
      }
      iVar12 = (iVar4 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
    } while (iVar12 < iVar14);
  }
  return;
}



// FUNCTION 14096de92 FUN_14096de92 body=205 status=ok
// SIG undefined FUN_14096de92(void)

undefined8
FUN_14096de92(longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  undefined1 auStack_68 [32];
  undefined1 local_48;
  undefined1 *local_40;
  undefined1 local_31;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = (**(code **)(*param_1 + 8))();
  if (lVar1 != 0) {
    uVar2 = FUN_1407ca880();
    plVar3 = (longlong *)FUN_144718840(lVar1,uVar2);
    if (plVar3 != (longlong *)0x0) {
      local_40 = &local_31;
      local_31 = 1;
      local_48 = param_6;
      lVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2,param_3,param_4);
      if (lVar1 != 0) {
        uVar2 = (**(code **)(*plVar3 + 0x50))(plVar3);
        uVar2 = FUN_14096df60(uVar2,lVar1,local_31,param_5);
        goto LAB_14096df39;
      }
    }
  }
  uVar2 = 0;
LAB_14096df39:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096df60 FUN_14096df60 body=141 status=ok
// SIG undefined FUN_14096df60(void)

ulonglong FUN_14096df60(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  longlong *plVar1;
  int *piVar2;
  ulonglong uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined1 local_30;
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_30 = 1;
  local_38 = param_4;
  FUN_14096dfee(param_1,&local_28,param_2,param_3);
  if (local_28 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CONCAT71((int7)((ulonglong)&local_28 >> 8),*(undefined1 *)(local_28 + 0x40));
  }
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
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096dfee FUN_14096dfee body=2785 status=ok
// SIG undefined FUN_14096dfee(void)

code ** FUN_14096dfee(longlong *param_1,code **param_2,longlong param_3,char param_4,
                     undefined8 param_5,undefined1 param_6)

{
  int *piVar1;
  code *pcVar2;
  code *pcVar3;
  uint uVar4;
  longlong *plVar5;
  bool bVar6;
  char cVar7;
  char cVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined ***pppuVar14;
  longlong *plVar15;
  int iVar16;
  int iVar17;
  code *pcVar18;
  int iVar19;
  ulonglong uVar20;
  code *pcVar21;
  code **ppcVar22;
  bool bVar23;
  undefined4 uVar24;
  undefined1 auStack_168 [40];
  longlong *local_140;
  uint local_134;
  undefined1 *local_130;
  longlong *local_128;
  code *local_120;
  code *pcStack_118;
  longlong local_110;
  char local_108;
  undefined1 local_107;
  char local_106;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined4 local_cc;
  longlong local_c0;
  undefined4 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  code *pcStack_a0;
  undefined ***local_98;
  undefined **local_88;
  code **local_80;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if ((((param_3 == 0 || *param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) ||
     (*(char *)((longlong)param_1 + 0x39) == '\x01')) goto LAB_14096e048;
  if (param_4 != '\x01') {
    if ((param_4 == '\x03') || (param_4 == '\x02')) {
      if ((char)param_1[7] != '\0') goto LAB_14096e08d;
      cVar8 = FUN_14124e3da();
    }
    else {
      cVar8 = (char)param_1[7];
    }
    if (cVar8 == '\0') {
LAB_14096e048:
      *param_2 = (code *)0x0;
      param_2[1] = (code *)0x0;
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_168);
    }
  }
LAB_14096e08d:
  cVar8 = *(char *)((longlong)param_1 + 0x3a);
  cVar7 = cVar8 + '\x01';
  if ((byte)(cVar8 + 1U) < 2) {
    cVar7 = '\x01';
  }
  local_128 = param_1 + 8;
  *(char *)((longlong)param_1 + 0x3a) = cVar7;
  local_108 = cVar8;
  if ((longlong)(int)param_1[9] != 0) {
    plVar10 = (longlong *)*local_128;
    plVar15 = plVar10 + (longlong)(int)param_1[9] * 2;
    do {
      while ((*plVar10 != 0 && (*(char *)(*plVar10 + 0x40) == local_108))) {
        if (plVar10 == (longlong *)0x0) goto LAB_14096e163;
        plVar10 = (longlong *)plVar10[1];
        if (plVar10 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar10 + 1) = (int)plVar10[1] + 1;
          UNLOCK();
          cVar7 = *(char *)((longlong)param_1 + 0x3a);
          LOCK();
          plVar15 = plVar10 + 1;
          *(int *)plVar15 = (int)*plVar15 + -1;
          UNLOCK();
          if ((int)*plVar15 == 0) {
            (**(code **)*plVar10)(plVar10);
            LOCK();
            piVar1 = (int *)((longlong)plVar10 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar10 + 0x10))(plVar10);
            }
          }
        }
        if (cVar8 == cVar7) goto LAB_14096e163;
        local_108 = *(char *)((longlong)param_1 + 0x3a);
        cVar7 = local_108 + '\x01';
        if ((byte)(local_108 + 1U) < 2) {
          cVar7 = '\x01';
        }
        *(char *)((longlong)param_1 + 0x3a) = cVar7;
        plVar10 = (longlong *)param_1[8];
        plVar15 = plVar10 + (longlong)(int)param_1[9] * 2;
        if ((longlong)(int)param_1[9] == 0) goto LAB_14096e163;
      }
      plVar10 = plVar10 + 2;
    } while (plVar10 != plVar15);
  }
LAB_14096e163:
  if (param_1[1] == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1[2];
  }
  local_110 = *param_1;
  local_107 = param_6;
  local_e0 = 0;
  local_d8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_d4 = 0xffffffff00000080;
  local_cc = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_106 = param_4;
  uVar24 = FUN_140725242(&local_100,param_5);
  local_b0 = lVar13;
  plVar10 = (longlong *)FUN_140ce32d2(uVar24,param_3,&local_110);
  if ((plVar10 == (longlong *)0x0) || ((*(uint *)(plVar10 + 1) >> 0x1e & 1) != 0)) {
    *param_2 = (code *)0x0;
    param_2[1] = (code *)0x0;
    goto LAB_14096e3e1;
  }
  if ((char)plVar10[8] == '\x01') {
    local_120 = (code *)plVar10[7];
  }
  else {
    (**(code **)(*plVar10 + 0x2e8))(plVar10,&local_120);
  }
  if (local_120 != (code *)0x0) {
    local_98 = (undefined ***)0x0;
    local_88 = &PTR_LAB_14b432bd0;
    local_80 = &local_120;
    local_a8 = FUN_143e53de0;
    FUN_140671824(param_1,&local_a8,1);
    if (local_a8 != (code *)0x0) {
      pppuVar14 = local_98;
      if (local_98 == (undefined ***)0x0) {
        pppuVar14 = &local_88;
      }
      (*(code *)(*pppuVar14)[2])();
    }
  }
  if (((*param_1 == 0) || (param_1[1] == 0)) || (param_1[2] == 0)) {
    *param_2 = (code *)0x0;
    param_2[1] = (code *)0x0;
    goto LAB_14096e3e1;
  }
  iVar9 = *(int *)((longlong)param_1 + 0xb4);
  *(int *)((longlong)param_1 + 0xb4) = iVar9 + 1;
  uVar11 = (ulonglong)(int)param_1[0x15];
  if ((longlong)uVar11 < 1) {
    *(int *)((longlong)param_1 + 0xb4) = iVar9;
  }
  else {
    plVar15 = param_1 + 0x14;
    bVar23 = false;
    do {
      lVar13 = uVar11 * 0x10 + -8;
      uVar20 = uVar11;
      while (((*(int *)(*plVar15 + lVar13) != 0 &&
              (plVar5 = *(longlong **)(*plVar15 + -8 + lVar13), plVar5 != (longlong *)0x0)) &&
             (cVar8 = (**(code **)(*plVar5 + 0x60))(plVar5,plVar10,&local_110), cVar8 != '\0'))) {
        lVar13 = lVar13 + -0x10;
        bVar6 = uVar20 < 2;
        uVar20 = uVar20 - 1;
        if (bVar6) {
          iVar9 = *(int *)((longlong)param_1 + 0xb4) + -1;
          *(int *)((longlong)param_1 + 0xb4) = iVar9;
          if (bVar23) goto LAB_14096e922;
          goto LAB_14096e2c3;
        }
      }
      uVar11 = uVar20 - 1;
      bVar23 = true;
    } while (1 < uVar20);
    iVar9 = *(int *)((longlong)param_1 + 0xb4) + -1;
    *(int *)((longlong)param_1 + 0xb4) = iVar9;
LAB_14096e922:
    if (iVar9 < 1) {
      iVar9 = (int)param_1[0x15];
      iVar16 = iVar9;
      if (0 < iVar9) {
        iVar17 = 0;
        do {
          if (((*(int *)(*plVar15 + 8 + (longlong)iVar17 * 0x10) == 0) ||
              (plVar5 = *(longlong **)(*plVar15 + (longlong)iVar17 * 0x10),
              plVar5 == (longlong *)0x0)) ||
             (cVar8 = (**(code **)(*plVar5 + 0x28))(), cVar8 != '\0')) {
            FUN_14005b288(plVar15,iVar17);
            FUN_14005b248(plVar15);
          }
          else {
            iVar17 = iVar17 + 1;
          }
          iVar16 = (int)param_1[0x15];
        } while (iVar17 < iVar16);
      }
      iVar17 = 2;
      if (2 < iVar16 * 2) {
        iVar17 = iVar16 * 2;
      }
      *(int *)(param_1 + 0x16) = iVar17;
      if ((iVar17 < iVar9) && (*(int *)((longlong)param_1 + 0xac) != iVar16)) {
        FUN_14045812c(plVar15);
      }
    }
  }
LAB_14096e2c3:
  (**(code **)(*plVar10 + 0x2e0))(plVar10,&local_120,&local_110);
  ppcVar22 = param_2;
  if ((local_120 != (code *)0x0) &&
     ((**(code **)(*(longlong *)local_120 + 0x30))(local_120,&local_110), local_120 != (code *)0x0))
  {
    iVar9 = (**(code **)(*(longlong *)local_120 + 0x48))();
    pcVar21 = pcStack_118;
    pcVar3 = local_120;
    if (pcStack_118 != (code *)0x0) {
      LOCK();
      *(int *)(pcStack_118 + 8) = *(int *)(pcStack_118 + 8) + 1;
      UNLOCK();
      LOCK();
      *(int *)(pcStack_118 + 8) = *(int *)(pcStack_118 + 8) + 1;
      UNLOCK();
    }
    iVar16 = *(int *)((longlong)param_1 + 0xcc);
    *(int *)((longlong)param_1 + 0xcc) = iVar16 + 1;
    puVar12 = (undefined1 *)(longlong)(int)param_1[0x18];
    if ((longlong)puVar12 < 1) {
      *(int *)((longlong)param_1 + 0xcc) = iVar16;
    }
    else {
      plVar10 = param_1 + 0x17;
      local_134 = 0;
      local_140 = plVar10;
      do {
        lVar13 = (longlong)puVar12 * 0x10 + -8;
        local_130 = puVar12;
        while ((*(int *)(*local_140 + lVar13) != 0 &&
               (plVar10 = *(longlong **)(*local_140 + -8 + lVar13), plVar10 != (longlong *)0x0))) {
          local_a8 = pcVar3;
          pcStack_a0 = pcVar21;
          if (pcVar21 != (code *)0x0) {
            LOCK();
            *(int *)(pcVar21 + 8) = *(int *)(pcVar21 + 8) + 1;
            UNLOCK();
          }
          cVar8 = (**(code **)(*plVar10 + 0x60))(plVar10,&local_a8);
          if (cVar8 == '\0') break;
          puVar12 = local_130 + -1;
          lVar13 = lVar13 + -0x10;
          bVar23 = local_130 < (undefined1 *)0x2;
          local_130 = puVar12;
          if (bVar23) {
            iVar16 = *(int *)((longlong)param_1 + 0xcc);
            *(int *)((longlong)param_1 + 0xcc) = iVar16 + -1;
            if ((local_134 & 1) != 0) goto LAB_14096e7a1;
            goto LAB_14096e34a;
          }
        }
        puVar12 = local_130 + -1;
        plVar10 = (longlong *)CONCAT71((int7)((ulonglong)plVar10 >> 8),1);
        local_134 = (uint)plVar10;
      } while (&DAT_00000001 < local_130);
      iVar16 = *(int *)((longlong)param_1 + 0xcc);
      *(int *)((longlong)param_1 + 0xcc) = iVar16 + -1;
LAB_14096e7a1:
      if (iVar16 < 2) {
        iVar16 = (int)param_1[0x18];
        iVar17 = iVar16;
        if (0 < iVar16) {
          iVar19 = 0;
          do {
            if (((*(int *)(*local_140 + 8 + (longlong)iVar19 * 0x10) == 0) ||
                (plVar10 = *(longlong **)(*local_140 + (longlong)iVar19 * 0x10),
                plVar10 == (longlong *)0x0)) ||
               (cVar8 = (**(code **)(*plVar10 + 0x28))(), cVar8 != '\0')) {
              FUN_14005b288(local_140,iVar19);
              FUN_14005b248(local_140);
            }
            else {
              iVar19 = iVar19 + 1;
            }
            iVar17 = (int)param_1[0x18];
          } while (iVar19 < iVar17);
        }
        iVar19 = 2;
        if (2 < iVar17 * 2) {
          iVar19 = iVar17 * 2;
        }
        *(int *)(param_1 + 0x19) = iVar19;
        if ((iVar19 < iVar16) && (*(int *)((longlong)param_1 + 0xc4) != iVar17)) {
          FUN_14045812c(local_140);
        }
      }
    }
LAB_14096e34a:
    plVar10 = local_128;
    if (pcVar21 != (code *)0x0) {
      LOCK();
      pcVar3 = pcVar21 + 8;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      UNLOCK();
      if (*(int *)pcVar3 == 0) {
        (*(code *)**(undefined8 **)pcVar21)(pcVar21);
        LOCK();
        pcVar3 = pcVar21 + 0xc;
        *(int *)pcVar3 = *(int *)pcVar3 + -1;
        UNLOCK();
        if (*(int *)pcVar3 == 0) {
          (**(code **)(*(longlong *)pcVar21 + 0x10))(pcVar21);
        }
      }
      LOCK();
      pcVar3 = pcVar21 + 8;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      UNLOCK();
      if (*(int *)pcVar3 == 0) {
        (*(code *)**(undefined8 **)pcVar21)(pcVar21);
        LOCK();
        pcVar3 = pcVar21 + 0xc;
        *(int *)pcVar3 = *(int *)pcVar3 + -1;
        UNLOCK();
        if (*(int *)pcVar3 == 0) {
          (**(code **)(*(longlong *)pcVar21 + 0x10))(pcVar21);
        }
      }
    }
    if (iVar9 == 1) {
      iVar9 = (int)param_1[0xb];
      *(uint *)(param_1 + 0xb) = iVar9 + 1U;
      if (*(uint *)((longlong)param_1 + 0x5c) < iVar9 + 1U) {
        FUN_1418b24f8(param_1 + 10,iVar9);
      }
      lVar13 = param_1[10];
      *(code **)(lVar13 + (longlong)iVar9 * 0x10) = local_120;
      *(code **)(lVar13 + 8 + (longlong)iVar9 * 0x10) = pcStack_118;
      if (pcStack_118 != (code *)0x0) {
        LOCK();
        *(int *)(pcStack_118 + 8) = *(int *)(pcStack_118 + 8) + 1;
        UNLOCK();
      }
      bVar23 = true;
      if ((*param_1 != 0) && (param_1[1] != 0)) {
        bVar23 = param_1[2] == 0;
      }
      lVar13 = *(longlong *)local_120;
    }
    else {
      if (((*param_1 != 0) && (param_1[1] != 0)) && (param_1[2] != 0)) {
        iVar9 = (int)param_1[9];
        *(uint *)(param_1 + 9) = iVar9 + 1U;
        if (*(uint *)((longlong)param_1 + 0x4c) < iVar9 + 1U) {
          FUN_1418b24f8(plVar10,iVar9);
        }
        lVar13 = *plVar10;
        *(code **)(lVar13 + (longlong)iVar9 * 0x10) = local_120;
        *(code **)(lVar13 + 8 + (longlong)iVar9 * 0x10) = pcStack_118;
        if (pcStack_118 != (code *)0x0) {
          LOCK();
          *(int *)(pcStack_118 + 8) = *(int *)(pcStack_118 + 8) + 1;
          UNLOCK();
        }
        lVar13 = *(longlong *)(local_120 + 0xa8);
        if ((lVar13 != 0) && ((*(uint *)(lVar13 + 8) & 0x10) == 0)) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar13);
          }
          iVar9 = (int)param_1[4];
          *(uint *)(param_1 + 4) = iVar9 + 1U;
          if (*(uint *)((longlong)param_1 + 0x24) < iVar9 + 1U) {
            FUN_1418b2606(param_1 + 3,iVar9);
          }
          *(longlong *)(param_1[3] + (longlong)iVar9 * 8) = lVar13;
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar13);
          }
        }
        lVar13 = FUN_1447210f0(*param_1);
        uVar24 = DAT_14cb8d3d8;
        if (lVar13 != 0) {
          if (DAT_14c9a7d10 == (undefined8 *)0x0) {
            DAT_14c9a7d10 = (undefined8 *)FUN_14001cc68(0x20,0x10);
            *DAT_14c9a7d10 = 0;
            DAT_14c9a7d10[1] = 0;
            DAT_14c9a7d10[2] = 0;
            DAT_14c9a7d10[3] = 0;
          }
          FUN_14005915a(DAT_14c9a7d10,&local_a8,uVar24,lVar13);
          pcVar21 = pcStack_a0;
          pcVar3 = local_a8;
          if ((local_a8 == (code *)0x0) || (pcStack_a0 == (code *)0x0)) {
            pcVar21 = (code *)0x0;
          }
          else {
            LOCK();
            *(int *)(pcStack_a0 + 8) = *(int *)(pcStack_a0 + 8) + 1;
            UNLOCK();
            LOCK();
            *(int *)(pcStack_a0 + 0xc) = *(int *)(pcStack_a0 + 0xc) + 1;
            UNLOCK();
            LOCK();
            pcVar18 = pcStack_a0 + 8;
            *(int *)pcVar18 = *(int *)pcVar18 + -1;
            UNLOCK();
            if (*(int *)pcVar18 == 0) {
              (*(code *)**(undefined8 **)pcStack_a0)(pcStack_a0);
              LOCK();
              pcVar18 = pcVar21 + 0xc;
              *(int *)pcVar18 = *(int *)pcVar18 + -1;
              UNLOCK();
              if (*(int *)pcVar18 == 0) {
                (**(code **)(*(longlong *)pcVar21 + 0x10))(pcVar21);
              }
            }
          }
          pcVar18 = pcStack_a0;
          if (pcStack_a0 != (code *)0x0) {
            LOCK();
            pcVar2 = pcStack_a0 + 8;
            *(int *)pcVar2 = *(int *)pcVar2 + -1;
            UNLOCK();
            if (*(int *)pcVar2 == 0) {
              (*(code *)**(undefined8 **)pcStack_a0)(pcStack_a0);
              LOCK();
              pcVar2 = pcVar18 + 0xc;
              *(int *)pcVar2 = *(int *)pcVar2 + -1;
              UNLOCK();
              if (*(int *)pcVar2 == 0) {
                (**(code **)(*(longlong *)pcVar18 + 0x10))(pcVar18);
              }
            }
          }
          if (pcVar21 != (code *)0x0) {
            iVar9 = *(int *)(pcVar21 + 8);
            do {
              pcVar18 = (code *)0x0;
              if (iVar9 == 0) break;
              LOCK();
              iVar16 = *(int *)(pcVar21 + 8);
              bVar23 = iVar9 == iVar16;
              if (bVar23) {
                *(int *)(pcVar21 + 8) = iVar9 + 1;
                iVar16 = iVar9;
              }
              iVar9 = iVar16;
              UNLOCK();
              pcVar18 = pcVar21;
            } while (!bVar23);
            LOCK();
            pcVar2 = pcVar21 + 0xc;
            *(int *)pcVar2 = *(int *)pcVar2 + -1;
            UNLOCK();
            if (*(int *)pcVar2 == 0) {
              (**(code **)(*(longlong *)pcVar21 + 0x10))(pcVar21);
            }
            if (pcVar18 != (code *)0x0) {
              if (pcVar3 != (code *)0x0) {
                local_a8._0_4_ = 0;
                pcStack_a0 = (code *)0x0;
                if (param_1[1] == 0) {
                  iVar9 = 0;
                  uVar4 = (uint)local_a8;
                }
                else {
                  uVar4 = *(uint *)(param_1[1] + 0xc);
                  local_a8 = (code *)(ulonglong)uVar4;
                  if ((int)uVar4 < DAT_14c9647dc) {
                    lVar13 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8);
                  }
                  else {
                    lVar13 = 0;
                  }
                  iVar9 = *(int *)(lVar13 + 0x10);
                  if (*(int *)(lVar13 + 0x10) == 0) {
                    LOCK();
                    iVar9 = DAT_14c964868 + 1;
                    UNLOCK();
                    iVar16 = DAT_14c964868 + 1;
                    bVar23 = DAT_14c964868 < 1000;
                    DAT_14c964868 = iVar9;
                    if (bVar23) {
                      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                    L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                    ,iVar16);
                    }
                    LOCK();
                    iVar9 = *(int *)(lVar13 + 0x10);
                    bVar23 = iVar9 == 0;
                    if (bVar23) {
                      *(int *)(lVar13 + 0x10) = iVar16;
                      iVar9 = 0;
                    }
                    UNLOCK();
                    uVar4 = (uint)local_a8;
                    if (bVar23) {
                      iVar9 = iVar16;
                    }
                  }
                }
                local_a8._0_4_ = uVar4;
                local_a8 = (code *)CONCAT44(iVar9,(uint)local_a8);
                pcStack_a0 = (code *)0x0;
                if (param_1[1] != 0) {
                  pcStack_a0 = (code *)param_1[2];
                }
                FUN_144a8a564(pcVar3 + 0x30);
              }
              LOCK();
              pcVar3 = pcVar18 + 8;
              *(int *)pcVar3 = *(int *)pcVar3 + -1;
              UNLOCK();
              if (*(int *)pcVar3 == 0) {
                (*(code *)**(undefined8 **)pcVar18)(pcVar18);
                LOCK();
                pcVar3 = pcVar18 + 0xc;
                *(int *)pcVar3 = *(int *)pcVar3 + -1;
                UNLOCK();
                if (*(int *)pcVar3 == 0) {
                  (**(code **)(*(longlong *)pcVar18 + 0x10))(pcVar18);
                }
              }
            }
          }
        }
        *param_2 = local_120;
        param_2[1] = pcStack_118;
        ppcVar22 = &local_120;
        goto LAB_14096e694;
      }
      lVar13 = *(longlong *)local_120;
      bVar23 = true;
    }
    (**(code **)(lVar13 + 0x58))(local_120,bVar23);
  }
LAB_14096e694:
  *ppcVar22 = (code *)0x0;
  ppcVar22[1] = (code *)0x0;
  if (pcStack_118 != (code *)0x0) {
    LOCK();
    pcVar3 = pcStack_118 + 8;
    *(int *)pcVar3 = *(int *)pcVar3 + -1;
    UNLOCK();
    if (*(int *)pcVar3 == 0) {
      (*(code *)**(undefined8 **)pcStack_118)(pcStack_118);
      LOCK();
      pcVar3 = pcStack_118 + 0xc;
      *(int *)pcVar3 = *(int *)pcVar3 + -1;
      UNLOCK();
      if (*(int *)pcVar3 == 0) {
        (**(code **)(*(longlong *)pcStack_118 + 0x10))(pcStack_118);
      }
    }
  }
LAB_14096e3e1:
  local_b8 = 0;
  if (local_c0 != 0) {
    FUN_1400020a8();
  }
  FUN_140333f4e(&local_100);
  if ((local_60 ^ (ulonglong)auStack_168) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096ead0 FUN_14096ead0 body=2708 status=ok
// SIG undefined FUN_14096ead0(void)

longlong FUN_14096ead0(longlong *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4,
                      char param_5,char *param_6)

{
  ulonglong *puVar1;
  code *pcVar2;
  byte bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  char *pcVar15;
  longlong lVar16;
  char *pcVar17;
  undefined7 uVar19;
  code **ppcVar18;
  longlong lVar20;
  char *pcVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined4 local_170;
  undefined4 local_168;
  undefined8 local_160;
  wchar_t *local_158;
  undefined1 *local_150;
  undefined1 *local_148;
  code **local_140;
  code *local_138;
  code *local_130;
  byte local_11a;
  byte local_119;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  longlong local_108;
  ulonglong local_100;
  longlong local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  longlong local_d8;
  longlong *local_d0;
  code *local_c8 [2];
  longlong *local_b8;
  undefined4 local_a0 [2];
  int local_98;
  undefined4 uStack_94;
  ushort local_80;
  byte local_78;
  int local_70;
  undefined4 uStack_6c;
  ushort local_58;
  byte local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  local_f0 = param_4;
  lVar5 = (**(code **)(*param_1 + 0x10))(param_1,param_3);
  if (lVar5 != 0) {
    lVar20 = *(longlong *)(lVar5 + 0x28);
    if (*(longlong *)(lVar5 + 0x28) == 0) {
      lVar20 = lVar5;
    }
    local_e8 = 0;
    local_d0 = param_1;
    if ((longlong)*(int *)(lVar5 + 0x30) != 0) {
      lVar5 = lVar20 + (longlong)*(int *)(lVar5 + 0x30) * 0x28;
      uVar14 = param_2 >> 0x20;
      lVar16 = 0;
LAB_14096eb5a:
      lVar6 = FUN_14096f566(lVar20);
      if (((lVar6 != 0) && (lVar6 = FUN_14096f566(lVar20), lVar6 != 0)) &&
         (*(int *)(lVar6 + 0x48) != *(int *)(lVar6 + 0x74))) {
        uVar12 = (uint)(param_2 >> 0x10);
        uVar10 = (uint)param_2 & 0xffff;
        lVar13 = lVar6 + 0x78;
        if (*(longlong *)(lVar6 + 0x80) != 0) {
          lVar13 = *(longlong *)(lVar6 + 0x80);
        }
        ppcVar18 = (code **)(ulonglong)
                            (*(int *)(lVar6 + 0x88) - 1U &
                            ((uint)param_2 << 0x10 | uVar10) + (int)uVar14 +
                            (uVar12 << 0x13 | uVar12 & 0xffff) + (uVar10 >> 4));
        iVar11 = *(int *)(lVar13 + (longlong)ppcVar18 * 4);
        if (iVar11 != -1) {
          do {
            puVar1 = (ulonglong *)(*(longlong *)(lVar6 + 0x40) + (longlong)iVar11 * 0x28);
            if (*puVar1 == param_2) {
              if ((puVar1 != (ulonglong *)0x0) && (puVar1 != (ulonglong *)&DAT_fffffffffffffff8)) {
                *param_6 = (char)puVar1[1];
                local_100 = uVar14;
                local_f8 = lVar5;
                if ((longlong)(int)puVar1[3] != 0) {
                  pcVar21 = (char *)puVar1[2];
                  pcVar15 = pcVar21 + (longlong)(int)puVar1[3] * 0x58;
                  local_e0 = 0;
                  local_10c = 0;
                  lVar5 = 0;
                  goto LAB_14096ec5b;
                }
              }
              break;
            }
            iVar11 = (int)puVar1[4];
          } while (iVar11 != -1);
        }
      }
      goto LAB_14096eec1;
    }
  }
LAB_14096ef38:
  lVar16 = 0;
LAB_14096ef3a:
  if ((local_48 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar16;
LAB_14096ec5b:
  do {
    cVar4 = *pcVar21;
    uVar19 = (undefined7)((ulonglong)ppcVar18 >> 8);
    if (cVar4 == '\0') {
      lVar6 = *(longlong *)(pcVar21 + 0x20);
joined_r0x00014096f0fb:
      if (lVar6 == 0) {
        uVar12 = *(uint *)(pcVar21 + 0x40);
        ppcVar18 = (code **)CONCAT71(uVar19,1);
        uVar8 = 0;
        goto LAB_14096ed3d;
      }
      local_c8[0] = (code *)((ulonglong)local_c8[0] & 0xffffffffffffff00);
      local_a0[0] = 0;
      ppcVar18 = local_c8;
      FUN_1456bb102(ppcVar18,local_f0);
      FUN_140168de2(pcVar21,&local_98);
      if (local_78 == 1) {
        bVar22 = local_98 != 0;
        bVar3 = 1;
      }
      else {
        ppcVar18 = (code **)CONCAT71((int7)((ulonglong)ppcVar18 >> 8),1);
        FUN_1400b56fe(&local_70,&local_98);
        bVar22 = local_50 != 0;
        bVar23 = local_70 != 0;
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
        if (pcVar2 != (code *)0x0) {
          piVar9 = &local_70;
          if (0x18 < local_58) {
            piVar9 = (int *)CONCAT44(uStack_6c,local_70);
          }
          (*pcVar2)(piVar9);
        }
        if (0x18 < local_58) {
          FUN_1400020a8(CONCAT44(uStack_6c,local_70));
        }
        bVar22 = bVar22 && bVar23;
        bVar3 = local_78;
      }
      pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
      if (pcVar2 != (code *)0x0) {
        if (local_80 < 0x19) {
          piVar9 = &local_98;
        }
        else {
          piVar9 = (int *)CONCAT44(uStack_94,local_98);
        }
        (*pcVar2)(piVar9);
      }
      if (0x18 < local_80) {
        FUN_1400020a8(CONCAT44(uStack_94,local_98));
      }
      plVar7 = (longlong *)local_a0;
      FUN_1448173f8();
      if (((char)local_c8[0] == '\x03') && (plVar7 = local_b8, local_b8 != (longlong *)0x0)) {
        LOCK();
        piVar9 = (int *)((longlong)local_b8 + 0xc);
        *piVar9 = *piVar9 + -1;
        UNLOCK();
        if (*piVar9 == 0) {
          (**(code **)(*local_b8 + 0x10))();
        }
      }
      if (bVar22) {
        cVar4 = *pcVar21;
        uVar8 = CONCAT71((int7)((ulonglong)plVar7 >> 8),1);
        ppcVar18 = (code **)0x0;
        goto LAB_14096ef9a;
      }
    }
    else {
      if ((cVar4 == '\x01') || (cVar4 == '\x02')) {
        lVar6 = *(longlong *)(pcVar21 + 8);
        goto joined_r0x00014096f0fb;
      }
      uVar8 = 0;
      ppcVar18 = (code **)CONCAT71(uVar19,1);
LAB_14096ef9a:
      uVar12 = *(uint *)(pcVar21 + 0x40);
      local_110 = (uint)uVar8;
      local_118 = (uint)ppcVar18;
      local_114 = uVar12;
      if (cVar4 == '\0') {
        lVar6 = *(longlong *)(pcVar21 + 0x20);
      }
      else {
        if ((cVar4 != '\x01') && (cVar4 != '\x02')) goto LAB_14096ed3d;
        lVar6 = *(longlong *)(pcVar21 + 8);
      }
      if (lVar6 == 0) {
        uVar8 = uVar8 & 0xffffffff;
        ppcVar18 = (code **)((ulonglong)ppcVar18 & 0xffffffff);
      }
      else {
        local_c8[0] = (code *)((ulonglong)local_c8[0] & 0xffffffffffffff00);
        local_a0[0] = 0;
        FUN_1456bb102(local_c8,local_f0);
        FUN_140168de2(pcVar21,&local_98,local_c8);
        if (local_78 == 1) {
          bVar22 = local_98 != 0;
          uVar12 = 1;
        }
        else {
          piVar9 = &local_70;
          local_108 = lVar16;
          FUN_1400b56fe(piVar9,&local_98,1);
          bVar22 = local_50 != 0;
          pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
          bVar3 = local_70 != 0;
          if (pcVar2 != (code *)0x0) {
            if (0x18 < local_58) {
              piVar9 = (int *)CONCAT44(uStack_6c,local_70);
            }
            local_11a = local_70 != 0;
            (*pcVar2)(piVar9);
            bVar3 = local_11a;
          }
          if (0x18 < local_58) {
            FUN_1400020a8(CONCAT44(uStack_6c,local_70));
          }
          bVar22 = (bool)(bVar22 & bVar3);
          uVar12 = (uint)local_78;
          lVar16 = local_108;
        }
        pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar12 * 0x120));
        if (pcVar2 != (code *)0x0) {
          piVar9 = &local_98;
          if (0x18 < local_80) {
            piVar9 = (int *)CONCAT44(uStack_94,local_98);
          }
          (*pcVar2)(piVar9);
        }
        if (0x18 < local_80) {
          FUN_1400020a8(CONCAT44(uStack_94,local_98));
        }
        FUN_1448173f8(local_a0);
        if (((char)local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
          LOCK();
          piVar9 = (int *)((longlong)local_b8 + 0xc);
          *piVar9 = *piVar9 + -1;
          UNLOCK();
          if (*piVar9 == 0) {
            (**(code **)(*local_b8 + 0x10))();
          }
        }
        uVar8 = (ulonglong)local_110;
        ppcVar18 = (code **)(ulonglong)local_118;
        uVar12 = local_114;
        if (bVar22 == false) goto LAB_14096ed22;
      }
LAB_14096ed3d:
      lVar6 = *(longlong *)(pcVar21 + 0x38);
      if (lVar6 == 0) {
        if ((longlong)*(int *)(pcVar21 + 0x50) != 0) {
          pcVar17 = *(char **)(pcVar21 + 0x48);
          local_d8 = (longlong)*(int *)(pcVar21 + 0x50) << 6;
          lVar6 = 0;
          local_110 = (uint)uVar8;
          local_118 = (uint)ppcVar18;
          local_114 = uVar12;
          local_108 = lVar16;
          do {
            cVar4 = *pcVar17;
            if (cVar4 == '\0') {
              if (*(longlong *)(pcVar17 + 0x20) == 0) goto LAB_14096f1e6;
LAB_14096ed80:
              local_c8[0] = (code *)((ulonglong)local_c8[0] & 0xffffffffffffff00);
              local_a0[0] = 0;
              FUN_1456bb102(local_c8,local_f0);
              FUN_140168de2(pcVar17,&local_98,local_c8);
              if (local_78 == 1) {
                local_11a = local_98 != 0;
                bVar3 = 1;
              }
              else {
                FUN_1400b56fe(&local_70,&local_98,1);
                bVar22 = local_50 != 0;
                pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_50 * 0x120));
                bVar3 = local_70 != 0;
                if (pcVar2 != (code *)0x0) {
                  piVar9 = &local_70;
                  if (0x18 < local_58) {
                    piVar9 = (int *)CONCAT44(uStack_6c,local_70);
                  }
                  local_119 = local_70 != 0;
                  (*pcVar2)(piVar9);
                  bVar3 = local_119;
                }
                local_11a = bVar22;
                if (0x18 < local_58) {
                  local_119 = bVar3;
                  FUN_1400020a8(CONCAT44(uStack_6c,local_70));
                  bVar3 = local_119;
                }
                local_11a = local_11a & bVar3;
                bVar3 = local_78;
              }
              pcVar2 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)bVar3 * 0x120));
              if (pcVar2 != (code *)0x0) {
                if (local_80 < 0x19) {
                  piVar9 = &local_98;
                }
                else {
                  piVar9 = (int *)CONCAT44(uStack_94,local_98);
                }
                (*pcVar2)(piVar9);
              }
              if (0x18 < local_80) {
                FUN_1400020a8(CONCAT44(uStack_94,local_98));
              }
              FUN_1448173f8(local_a0);
              if (((char)local_c8[0] == '\x03') && (local_b8 != (longlong *)0x0)) {
                LOCK();
                piVar9 = (int *)((longlong)local_b8 + 0xc);
                *piVar9 = *piVar9 + -1;
                UNLOCK();
                if (*piVar9 == 0) {
                  (**(code **)(*local_b8 + 0x10))();
                }
              }
              uVar8 = (ulonglong)local_110;
              ppcVar18 = (code **)(ulonglong)local_118;
              uVar12 = local_114;
              if (local_11a != 0) {
                lVar6 = *(longlong *)(pcVar17 + 0x38);
                break;
              }
            }
            else {
              if (((cVar4 == '\x01') || (cVar4 == '\x02')) && (*(longlong *)(pcVar17 + 8) != 0))
              goto LAB_14096ed80;
LAB_14096f1e6:
              lVar6 = *(longlong *)(pcVar17 + 0x38);
            }
            pcVar17 = pcVar17 + 0x40;
            local_d8 = local_d8 + -0x40;
          } while (local_d8 != 0);
          lVar16 = local_108;
          if (lVar6 != 0) goto LAB_14096ed4a;
        }
      }
      else {
LAB_14096ed4a:
        local_e0 = uVar8 & 0xffffffff;
        lVar5 = lVar6;
        local_10c = uVar12;
        if ((char)ppcVar18 == '\0') goto LAB_14096ee9b;
      }
    }
LAB_14096ed22:
    lVar6 = lVar5;
    pcVar21 = pcVar21 + 0x58;
    lVar5 = lVar6;
  } while (pcVar21 != pcVar15);
  uVar8 = local_e0 & 0xffffffff;
  uVar14 = local_100;
  lVar5 = local_f8;
  if (lVar6 != 0) {
LAB_14096ee9b:
    uVar14 = local_100;
    lVar5 = local_f8;
    if ((lVar16 == 0) || (((int)local_e8 < (int)local_10c & (byte)uVar8) == 1)) {
      local_e8 = (ulonglong)local_10c;
      lVar16 = lVar6;
    }
  }
LAB_14096eec1:
  lVar20 = lVar20 + 0x28;
  if (lVar20 == lVar5) goto code_r0x00014096eece;
  goto LAB_14096eb5a;
code_r0x00014096eece:
  if (lVar16 != 0) {
    if (((param_5 == '\0') || (*param_6 != '\x01')) ||
       (lVar5 = (**(code **)(*local_d0 + 8))(), lVar5 == 0)) goto LAB_14096ef3a;
    if (DAT_14cac9ca8 == 0) {
      local_c8[0] = FUN_141030f22;
      local_130 = FUN_14081d0ea;
      local_138 = FUN_14081d0ea;
      local_140 = local_c8;
      local_148 = &LAB_1478c0a72;
      local_150 = &LAB_1417b2375;
      local_158 = L"Engine";
      local_160 = 0x1000000000;
      local_168 = 0x10000004;
      local_170 = 8;
      local_178 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if (((*(int *)(*(longlong *)(lVar5 + 0x10) + 0x38) < *(int *)(DAT_14cac9ca8 + 0x38)) ||
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
          (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) != DAT_14cac9ca8 + 0x30)) ||
       (cVar4 = FUN_14096f7c8(lVar5,0x3f800000), cVar4 != '\0')) goto LAB_14096ef3a;
  }
  goto LAB_14096ef38;
}



// FUNCTION 14096f566 FUN_14096f566 body=380 status=ok
// SIG undefined FUN_14096f566(void)

longlong FUN_14096f566(uint *param_1)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  uint uVar7;
  bool bVar8;
  
  if (((((param_1[1] == 0) || (uVar3 = *param_1, (int)uVar3 < 0)) || (DAT_14c9647dc <= (int)uVar3))
      || ((plVar6 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
          plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != param_1[1])))) ||
     (((*(uint *)(plVar6 + 1) & 0x10200000) != 0 || (lVar5 = *plVar6, lVar5 == 0)))) {
    if (*(longlong *)(param_1 + 2) == 0) {
      return 0;
    }
    lVar5 = FUN_140007850();
    cVar2 = (*(code *)PTR_FUN_14c758760)();
    if ((lVar5 == 0) || (cVar2 == '\0')) {
      if (lVar5 == 0) {
        param_1[0] = 0;
        param_1[1] = 0;
        return 0;
      }
      uVar3 = *(uint *)(lVar5 + 0xc);
      *param_1 = uVar3;
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      uVar3 = *(uint *)(lVar4 + 0x10);
      if (*(uint *)(lVar4 + 0x10) == 0) {
        LOCK();
        iVar1 = DAT_14c964868 + 1;
        UNLOCK();
        uVar7 = DAT_14c964868 + 1;
        bVar8 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar1;
        if (bVar8) {
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        uVar7);
        }
        LOCK();
        uVar3 = *(uint *)(lVar4 + 0x10);
        bVar8 = uVar3 == 0;
        if (bVar8) {
          *(uint *)(lVar4 + 0x10) = uVar7;
          uVar3 = 0;
        }
        UNLOCK();
        if (bVar8) {
          uVar3 = uVar7;
        }
      }
      param_1[1] = uVar3;
    }
    else {
      uVar3 = *(uint *)(lVar5 + 0xc);
      if ((int)uVar3 < DAT_14c9647dc) {
        lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
      }
      else {
        lVar4 = 0;
      }
      if ((*(uint *)(lVar4 + 8) & 0x8400000) == 0) {
        FUN_14485c47a(param_1,lVar5);
      }
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1e & 1) != 0) {
      return 0;
    }
  }
  lVar4 = FUN_14096f6e2();
  if ((*(int *)(lVar4 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
     (*(longlong *)
       (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) + (longlong)*(int *)(lVar4 + 0x38) * 8) ==
      lVar4 + 0x30)) {
    return lVar5;
  }
  return 0;
}



// FUNCTION 14096f6e2 FUN_14096f6e2 body=228 status=ok
// SIG undefined FUN_14096f6e2(void)

longlong FUN_14096f6e2(void)

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
  if (DAT_14cb55500 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_140e9e4fe;
    local_38 = &LAB_14862457b;
    local_40 = FUN_1464b24e6;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x90;
    FUN_14081cfa3(L"/Script/GbxGame",L"BodyActionAnimData",&DAT_14cb55500,&DAT_14862457a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb55500;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096f7c8 FUN_14096f7c8 body=683 status=ok
// SIG undefined FUN_14096f7c8(void)

bool FUN_14096f7c8(longlong param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  code *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if ((((*(uint *)(param_1 + 8) & 0x10) == 0) && (lVar5 = *(longlong *)(param_1 + 0x20), lVar5 != 0)
      ) && (-1 < (short)*(undefined4 *)(lVar5 + 8))) {
    uVar1 = *(uint *)(lVar5 + 0xc);
    if ((int)uVar1 < DAT_14c9647dc) {
      lVar5 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    }
    else {
      lVar5 = 0;
    }
    if ((*(uint *)(lVar5 + 8) >> 0x1c & 1) == 0) {
      if (DAT_14cae8b20 == 0) {
        local_50 = &local_38;
        local_38 = (code *)&LAB_14355090c;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_147b8e16d;
        local_60 = (code *)&LAB_140810a38;
        local_68 = L"Engine";
        local_70 = 0x800000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x3f0;
        FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
      }
      lVar5 = DAT_14cae8b20;
      if (DAT_14c951858 == 0) {
        local_50 = &local_38;
        local_38 = FUN_1449e2820;
        local_40 = FUN_14081d0ea;
        local_48 = FUN_14081d0ea;
        local_58 = &LAB_1468c5283;
        local_60 = FUN_142809da0;
        local_68 = L"Engine";
        local_70 = 0x400000000;
        local_78 = 0x10000000;
        local_80 = 8;
        local_88 = 0x50;
        FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
      }
      lVar4 = *(longlong *)(param_1 + 0x20);
      if (lVar4 != 0) {
        iVar2 = *(int *)(lVar5 + 0x38);
        do {
          if ((*(int *)(*(longlong *)(lVar4 + 0x10) + 0x38) < iVar2) ||
             (lVar6 = lVar4,
             *(longlong *)(*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)iVar2 * 8)
             != lVar5 + 0x30)) {
            lVar6 = 0;
          }
        } while ((lVar6 == 0) && (lVar4 = *(longlong *)(lVar4 + 0x20), lVar4 != 0));
        if ((lVar6 != 0) && (lVar5 = *(longlong *)(lVar6 + 0xc0), lVar5 != 0)) {
          fVar7 = *(float *)(lVar5 + 0x6f4) + 0.0001;
          if (param_2 <= fVar7) {
            param_2 = fVar7;
          }
          if (*(int *)(param_1 + 0x1ac) < 1) {
LAB_14096f8cd:
            fVar7 = *(float *)(param_1 + 0x1a8);
          }
          else {
            lVar4 = FUN_1447210f0(param_1);
            if (lVar4 == 0) goto LAB_14096f8cd;
            fVar7 = (float)*(double *)(lVar4 + 0x6d0);
          }
          bVar3 = *(double *)(lVar5 + 0x6d0) - (double)fVar7 <= (double)param_2;
          goto LAB_14096f8f3;
        }
      }
    }
  }
  bVar3 = false;
LAB_14096f8f3:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14096fa74 FUN_14096fa74 body=910 status=ok
// SIG undefined FUN_14096fa74(void)

void FUN_14096fa74(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStack_1f8 [32];
  undefined1 local_1d8;
  float local_1c8;
  float local_1c4;
  LARGE_INTEGER local_1c0;
  undefined1 local_1b8 [288];
  undefined1 *local_98;
  ulonglong local_90;
  undefined1 local_88;
  undefined8 local_80;
  longlong *plStack_78;
  longlong local_70;
  ulonglong uStack_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if (*(longlong *)(param_1 + 0x20) == 0) goto LAB_14096fd34;
  if (0 < *(int *)(param_1 + 0x260)) {
    local_1c0.s.LowPart._0_1_ = DAT_14c96b238;
    local_98 = (undefined1 *)0x0;
    local_90 = 0x400000000;
    local_88 = 0;
    local_80 = 0;
    plStack_78 = (longlong *)0x0;
    local_70 = 0;
    uStack_68 = 0;
    local_1d8 = DAT_14c96b238;
    FUN_1404dd558(param_1 + 600,&local_1c0,1,0);
    lVar7 = (longlong)(int)local_90;
    if (lVar7 < 1) {
      FUN_141720966(param_1);
    }
    else {
      puVar6 = local_98;
      if (local_98 == (undefined1 *)0x0) {
        puVar6 = local_1b8;
      }
      fVar9 = *(float *)(puVar6 + lVar7 * 0x48 + -0x40);
      fVar8 = fVar9 * 0.0;
      fVar12 = *(float *)(puVar6 + lVar7 * 0x48 + -0x3c) + fVar8;
      fVar11 = *(float *)(puVar6 + lVar7 * 0x48 + -0x48) * fVar9 + fVar12;
      fVar13 = fVar8 + fVar12;
      fVar14 = fVar8 + fVar11;
      fVar15 = fVar11;
      if (fVar13 <= fVar11) {
        fVar15 = fVar13;
      }
      if (fVar14 <= fVar15) {
        fVar15 = fVar14;
      }
      fVar10 = fVar12;
      if (fVar15 <= fVar12) {
        fVar10 = fVar15;
      }
      if ((fVar10 == *(float *)(param_1 + 0x278)) &&
         (!NAN(fVar10) && !NAN(*(float *)(param_1 + 0x278)))) {
        fVar15 = *(float *)(puVar6 + lVar7 * 0x48 + -0x38) + fVar8;
        fVar8 = fVar8 + fVar15;
        fVar16 = fVar9 * *(float *)(puVar6 + lVar7 * 0x48 + -0x44) + fVar15;
        fVar10 = fVar9 * *(float *)(puVar6 + lVar7 * 0x48 + -0x44) + fVar8;
        fVar9 = fVar8;
        if (fVar16 <= fVar8) {
          fVar9 = fVar16;
        }
        if (fVar10 <= fVar9) {
          fVar9 = fVar10;
        }
        fVar17 = fVar15;
        if (fVar9 <= fVar15) {
          fVar17 = fVar9;
        }
        if ((fVar17 == *(float *)(param_1 + 0x27c)) &&
           (!NAN(fVar17) && !NAN(*(float *)(param_1 + 0x27c)))) {
          if (fVar11 <= fVar13) {
            fVar11 = fVar13;
          }
          if (fVar11 <= fVar14) {
            fVar11 = fVar14;
          }
          if (fVar12 <= fVar11) {
            fVar12 = fVar11;
          }
          if ((fVar12 == *(float *)(param_1 + 0x280)) &&
             (!NAN(fVar12) && !NAN(*(float *)(param_1 + 0x280)))) {
            if (fVar8 <= fVar16) {
              fVar8 = fVar16;
            }
            if (fVar8 <= fVar10) {
              fVar8 = fVar10;
            }
            if (fVar15 <= fVar8) {
              fVar15 = fVar8;
            }
            if ((fVar15 == *(float *)(param_1 + 0x284)) &&
               (!NAN(fVar15) && !NAN(*(float *)(param_1 + 0x284)))) goto LAB_14096fc32;
          }
        }
      }
      FUN_1407c57ac(param_1,&local_1c0);
    }
LAB_14096fc32:
    FUN_1447fa2ac(local_70,uStack_68 & 0xffffffff);
    if (local_70 != 0) {
      FUN_1400020a8();
    }
    plVar5 = plStack_78;
    if (plStack_78 != (longlong *)0x0) {
      LOCK();
      plVar1 = plStack_78 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plStack_78)(plStack_78);
        LOCK();
        piVar2 = (int *)((longlong)plVar5 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    puVar6 = local_1b8;
    if (local_98 != (undefined1 *)0x0) {
      puVar6 = local_98;
    }
    FUN_1447157bd(puVar6,local_90 & 0xffffffff);
    if (local_98 != (undefined1 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((*(int *)(param_1 + 0x17c) < *(int *)(param_1 + 0x150)) ||
     (*(char *)(param_1 + 0x49) == '\x01')) {
    FUN_14096fe04(param_1);
  }
  fVar9 = DAT_14c98e6b0 * DAT_14c98e6b0;
  FUN_14007d9be(param_1,&local_1c0,10);
  uVar4 = local_1c0.s.HighPart;
  uVar3 = local_1c0.s.LowPart;
  FUN_1400bbf02(param_1,&local_1c8,10);
  if (fVar9 < ((float)uVar4 - local_1c4) * ((float)uVar4 - local_1c4) +
              ((float)uVar3 - local_1c8) * ((float)uVar3 - local_1c8)) {
    QueryPerformanceCounter(&local_1c0);
    *(double *)(param_1 + 0x30) =
         (double)CONCAT44(local_1c0.s.HighPart,local_1c0.s.LowPart) * DAT_14c83f420 + 16777216.0;
  }
LAB_14096fd34:
  if ((local_60 ^ (ulonglong)auStack_1f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14096fe04 FUN_14096fe04 body=4747 status=ok
// SIG undefined FUN_14096fe04(void)

void FUN_14096fe04(longlong param_1)

{
  int *piVar1;
  longlong *plVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  longlong *plVar7;
  byte bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  char cVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong **pplVar15;
  longlong **pplVar16;
  uint uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  ulonglong uVar21;
  undefined1 auStack_4d8 [32];
  undefined ***local_4b8;
  undefined4 local_4b0;
  ulonglong local_4a8;
  longlong *local_4a0;
  longlong *local_498;
  longlong *local_490;
  undefined1 local_488 [8];
  longlong *local_480;
  longlong **local_478;
  longlong *plStack_470;
  undefined **local_460;
  undefined2 local_458;
  undefined1 local_456;
  undefined4 local_454;
  undefined4 local_450;
  undefined8 local_448;
  longlong local_440;
  undefined8 local_430;
  longlong *local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  longlong *local_410;
  undefined8 local_408;
  undefined4 local_400;
  undefined2 local_3fc;
  undefined7 local_3f8;
  undefined4 uStack_3f1;
  byte local_3e8 [8];
  longlong *local_3e0;
  longlong *plStack_3d8;
  undefined8 local_3d0;
  longlong *plStack_3c8;
  longlong local_3c0;
  longlong *plStack_3b8;
  undefined4 local_3b0;
  byte local_3a8;
  undefined7 uStack_3a7;
  longlong *local_3a0;
  longlong *local_398;
  undefined8 local_390;
  longlong *local_388;
  longlong local_380;
  longlong *local_378;
  undefined4 local_370;
  longlong *local_368;
  longlong *local_360 [28];
  longlong **local_280;
  int local_278;
  undefined1 local_270;
  undefined8 local_268;
  longlong *local_260;
  longlong local_258;
  undefined4 local_250;
  float local_248;
  float local_244;
  longlong *local_240;
  longlong *local_238;
  undefined8 local_230;
  longlong *local_228;
  longlong local_220;
  longlong *local_218;
  undefined4 local_210;
  longlong *local_208;
  longlong *local_200 [28];
  longlong **local_120;
  ulonglong local_118;
  undefined1 local_110;
  undefined8 local_108;
  longlong *plStack_100;
  longlong local_f8;
  ulonglong uStack_f0;
  longlong local_e8;
  undefined8 uStack_e0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined8 local_bc;
  undefined4 local_b4;
  longlong local_a8;
  undefined4 local_a0;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_4d8;
  *(undefined1 *)(param_1 + 0x49) = 0;
  if ((*(char *)(param_1 + 0x48) != '\x01') || (*(longlong *)(param_1 + 0x20) == 0))
  goto LAB_14096fe8f;
  if ((DAT_14c86a9f8 == '\x01') &&
     (iVar4 = *(int *)(*(longlong *)
                        ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60),
     iVar4 != 2)) {
    if (iVar4 != 1) goto LAB_14096fe8f;
    DVar13 = FUN_140ad26c0();
    DVar14 = GetCurrentThreadId();
    if (DVar13 != DVar14) goto LAB_14096fe8f;
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14c8442bc) && (FUN_144b3d300(&DAT_14c8442bc), DAT_14c8442bc == -1)) {
    if (DAT_14c846b14 == '\0') {
      FUN_140033559(".\\Runtime/Core/Private/Misc/CommandLine.cpp",0x32,
                    L"Attempting to get the command line but it hasn\'t been initialized yet.");
    }
    DAT_14c8442b8 = FUN_14054d46e(&DAT_14c846b20,L"nullrhi");
    _Init_thread_footer(&DAT_14c8442bc);
  }
  plVar7 = DAT_14c98e618;
  bVar8 = DAT_14c8442b8;
  if (DAT_14c872bf0 == '\x01') {
    if (DAT_14c872bf1 != '\x01') goto LAB_14096fe8f;
    bVar8 = DAT_14c8442b8 & 1;
  }
  if (bVar8 != 0) goto LAB_14096fe8f;
  local_3e8[0] = 0;
  local_3e0 = (longlong *)0x0;
  plStack_3d8 = (longlong *)0x0;
  local_3d0 = 0;
  plStack_3c8 = (longlong *)0x0;
  local_3c0 = 0;
  plStack_3b8 = (longlong *)0x0;
  local_3b0 = 1;
  plVar6 = *(longlong **)(param_1 + 0x1e8);
  if (plVar6 == (longlong *)0x0) {
LAB_14097007e:
    lVar20 = DAT_14c968088[1];
    plVar6 = (longlong *)DAT_14c968088[2];
    local_4a0 = plVar7;
    if (plVar6 == (longlong *)0x0) {
      lVar18 = *(longlong *)(param_1 + 0x20);
    }
    else {
      LOCK();
      *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
      UNLOCK();
      lVar18 = *(longlong *)(param_1 + 0x20);
      LOCK();
      plVar7 = plVar6 + 1;
      *(int *)plVar7 = (int)*plVar7 + -1;
      UNLOCK();
      if ((int)*plVar7 == 0) {
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
    FUN_14007d9be(param_1,&local_248,10);
    fVar11 = local_244;
    fVar9 = local_248;
    uVar21 = (ulonglong)(uint)local_248;
    uVar19 = (ulonglong)(uint)local_244;
    FUN_1400bbf02(param_1,&local_248,10);
    fVar10 = local_248;
    local_c8 = 0;
    local_c0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_bc = 0xffffffff00000080;
    local_b4 = 0;
    local_a8 = 0;
    local_a0 = 0;
    local_4a8 = uVar21;
    if (lVar20 == lVar18) {
      (**(code **)(*DAT_14c968088 + 0x58))(DAT_14c968088,&local_248);
      local_428 = local_4a0 + 0x2a;
    }
    else {
      local_248 = (float)((uint)local_248 & 0xffff0000);
      local_428 = &local_e8;
    }
    plVar7 = local_4a0;
    local_454 = (*(code *)**(undefined8 **)local_4a0[0xe4])();
    local_458 = local_248._0_2_;
    local_456 = 0;
    local_448 = 0;
    local_460 = &PTR_FUN_149eda650;
    lVar20 = (uVar19 << 0x20) + local_4a8;
    local_430 = CONCAT44(fVar11 - local_244,fVar9 - fVar10);
    local_420 = 0;
    uStack_418 = 0;
    local_410 = (longlong *)0x0;
    local_408 = 10;
    local_400 = 0x3f800000;
    local_3fc = 0;
    local_3f8 = 0;
    uStack_3f1 = 0;
    local_248 = (float)CONCAT31(local_248._1_3_,DAT_14c96b238);
    local_120 = (longlong **)0x0;
    local_118 = 0x400000000;
    local_110 = 0;
    local_108 = 0;
    plStack_100 = (longlong *)0x0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_450 = local_454;
    local_440 = lVar20;
    cVar12 = FUN_1408025c4(param_1,10);
    if (cVar12 == '\0') {
      uVar5 = *(undefined4 *)(param_1 + 0x18);
      FUN_1401b43e8(plVar7,&local_478);
      local_4b8 = (undefined ***)((ulonglong)local_4b8 & 0xffffffffffffff00);
      local_4b0 = uVar5;
      (**(code **)(*plVar7 + 0x108))(plVar7,&local_3a8,lVar20,&local_478);
      local_248 = (float)CONCAT31(local_248._1_3_,local_3a8);
      FUN_1400e223c(&local_240,&local_3a0);
      plVar6 = plStack_100;
      plVar7 = local_260;
      local_110 = local_270;
      local_108 = local_268;
      local_268 = 0;
      if (local_260 != plStack_100) {
        local_260 = (longlong *)0x0;
        plStack_100 = plVar7;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
      }
      FUN_1400e21ec(&local_f8,&local_258);
      FUN_1447fa2ac(local_258,local_250);
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_260;
      if (local_260 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_260 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      pplVar16 = &local_3a0;
      if (local_280 != (longlong **)0x0) {
        pplVar16 = local_280;
      }
      FUN_1447157bd(pplVar16,local_278);
      if (local_280 != (longlong **)0x0) {
        FUN_1400020a8();
      }
      FUN_1401b439d(local_478,(ulonglong)plStack_470 & 0xffffffff);
      local_280 = local_478;
    }
    else {
      local_4b8 = &local_460;
      FUN_1403d06e2(param_1,&local_3a8,10,0);
      if (0 < local_278) {
        pplVar16 = local_280 + 7;
        if (local_280 == (longlong **)0x0) {
          pplVar16 = &local_368;
        }
        pplVar16 = (longlong **)*pplVar16;
        pplVar15 = local_360;
        if (local_280 != (longlong **)0x0) {
          pplVar15 = local_280 + 8;
        }
        plVar6 = *pplVar15;
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar6 + 1) = (int)plVar6[1] + 1;
          UNLOCK();
        }
        if ((longlong)(int)plVar7[0x3d] < 1) {
          local_478 = (longlong **)0x0;
          plStack_470 = (longlong *)0x0;
LAB_140970350:
          local_248 = (float)CONCAT31(local_248._1_3_,local_3a8);
          FUN_1401bb734(&local_240,&local_3a0);
          plVar7 = plStack_100;
          local_110 = local_270;
          if (local_260 != (longlong *)0x0) {
            LOCK();
            *(int *)(local_260 + 1) = (int)local_260[1] + 1;
            UNLOCK();
          }
          local_108 = local_268;
          plStack_100 = local_260;
          if (plVar7 != (longlong *)0x0) {
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
          FUN_1401bb840(&local_f8,&local_258);
        }
        else {
          lVar20 = (longlong)(int)plVar7[0x3d] * 0x10;
          local_478 = *(longlong ***)(plVar7[0x3c] + -0x10 + lVar20);
          plStack_470 = *(longlong **)(plVar7[0x3c] + -8 + lVar20);
          if (plStack_470 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_470 + 1) = (int)plStack_470[1] + 1;
            UNLOCK();
          }
          if (((local_478 == (longlong **)0x0) || (local_478 == pplVar16)) ||
             (cVar12 = FUN_146981260(pplVar16,&local_478), cVar12 != '\0')) goto LAB_140970350;
        }
        plVar7 = plStack_470;
        if (plStack_470 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_470 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_470)(plStack_470);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        if (plVar6 != (longlong *)0x0) {
          LOCK();
          plVar7 = plVar6 + 1;
          *(int *)plVar7 = (int)*plVar7 + -1;
          UNLOCK();
          if ((int)*plVar7 == 0) {
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
      }
      FUN_1447fa2ac(local_258,local_250);
      if (local_258 != 0) {
        FUN_1400020a8();
      }
      plVar7 = local_260;
      if (local_260 != (longlong *)0x0) {
        LOCK();
        plVar6 = local_260 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
          (**(code **)*local_260)(local_260);
          LOCK();
          piVar1 = (int *)((longlong)plVar7 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
          }
        }
      }
      pplVar16 = local_280;
      if (local_280 == (longlong **)0x0) {
        pplVar16 = &local_3a0;
      }
      FUN_1447157bd(pplVar16,local_278);
    }
    if (local_280 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_3d8;
    if ((int)(uint)local_118 < 1) {
      local_3e8[0] = 1;
      local_3e0 = (longlong *)0x0;
      plVar6 = plStack_3c8;
      if (plStack_3d8 != (longlong *)0x0) {
        plStack_3d8 = (longlong *)0x0;
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
          plVar6 = plStack_3c8;
          if (*piVar1 == 0) {
            (**(code **)(*plVar7 + 0x10))(plVar7);
            plVar6 = plStack_3c8;
          }
        }
      }
joined_r0x000140970b0d:
      local_3d0 = 0;
      plStack_3c8 = plVar6;
      if (plVar6 != (longlong *)0x0) {
        local_3d0 = 0;
        plStack_3c8 = (longlong *)0x0;
        LOCK();
        plVar7 = plVar6 + 1;
        *(int *)plVar7 = (int)*plVar7 + -1;
        UNLOCK();
        if ((int)*plVar7 == 0) {
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
      plVar7 = plStack_3b8;
      local_3c0 = 0;
      if (plStack_3b8 != (longlong *)0x0) {
        plStack_3b8 = (longlong *)0x0;
        LOCK();
        plVar6 = plVar7 + 1;
        *(int *)plVar6 = (int)*plVar6 + -1;
        UNLOCK();
        if ((int)*plVar6 == 0) {
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
      local_3b0 = 1;
    }
    else {
      uVar17 = (uint)local_118;
      do {
        if ((int)uVar17 < 1) break;
        uVar3 = uVar17 - 1;
        pplVar16 = local_120;
        if (local_120 == (longlong **)0x0) {
          pplVar16 = &local_240;
        }
        local_4a8 = (ulonglong)uVar3 * 9;
        plVar7 = (pplVar16 + (ulonglong)uVar3 * 9)[7];
        (**(code **)(*plVar7 + 0x90))(plVar7,&local_3a8,pplVar16 + (ulonglong)uVar3 * 9,&local_460);
        plVar7 = local_398;
        plVar6 = plStack_3d8;
        local_3e8[0] = local_3a8;
        local_3e0 = local_3a0;
        local_3a0 = (longlong *)0x0;
        if (local_398 != plStack_3d8) {
          local_398 = (longlong *)0x0;
          plStack_3d8 = plVar7;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
        plVar7 = local_388;
        plVar6 = plStack_3c8;
        local_3d0 = local_390;
        local_390 = 0;
        if (local_388 != plStack_3c8) {
          local_388 = (longlong *)0x0;
          plStack_3c8 = plVar7;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
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
        }
        plVar7 = local_378;
        plVar6 = plStack_3b8;
        local_3c0 = local_380;
        local_380 = 0;
        if (local_378 == plStack_3b8) {
LAB_1409706f6:
          plVar7 = local_378;
          local_3b0 = local_370;
          if (local_378 != (longlong *)0x0) {
            LOCK();
            plVar6 = local_378 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*local_378)(local_378);
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
        else {
          local_378 = (longlong *)0x0;
          plStack_3b8 = plVar7;
          if (plVar6 != (longlong *)0x0) {
            LOCK();
            plVar7 = plVar6 + 1;
            *(int *)plVar7 = (int)*plVar7 + -1;
            UNLOCK();
            if ((int)*plVar7 == 0) {
              (**(code **)*plVar6)(plVar6);
              LOCK();
              piVar1 = (int *)((longlong)plVar6 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar6 + 0x10))(plVar6);
              }
            }
            goto LAB_1409706f6;
          }
          local_3b0 = local_370;
          plStack_3b8 = plVar7;
        }
        plVar7 = local_388;
        if (local_388 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_388 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_388)(local_388);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        plVar7 = local_398;
        if (local_398 != (longlong *)0x0) {
          LOCK();
          plVar6 = local_398 + 1;
          *(int *)plVar6 = (int)*plVar6 + -1;
          UNLOCK();
          if ((int)*plVar6 == 0) {
            (**(code **)*local_398)(local_398);
            LOCK();
            piVar1 = (int *)((longlong)plVar7 + 0xc);
            *piVar1 = *piVar1 + -1;
            UNLOCK();
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
            }
          }
        }
        plVar7 = plStack_3b8;
        lVar20 = local_3c0;
        bVar8 = local_3e8[0];
        if (local_3e8[0] == 1) {
          if (plStack_3b8 != (longlong *)0x0) {
            LOCK();
            *(int *)(plStack_3b8 + 1) = (int)plStack_3b8[1] + 1;
            UNLOCK();
            LOCK();
            plVar6 = plStack_3b8 + 1;
            *(int *)plVar6 = (int)*plVar6 + -1;
            UNLOCK();
            if ((int)*plVar6 == 0) {
              (**(code **)*plStack_3b8)(plStack_3b8);
              LOCK();
              piVar1 = (int *)((longlong)plVar7 + 0xc);
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (*piVar1 == 0) {
                (**(code **)(*plVar7 + 0x10))(plVar7);
              }
            }
          }
          if (lVar20 != 0) break;
          lVar20 = local_4a8 * 8 + 0x38;
          do {
            pplVar16 = local_120;
            if (local_120 == (longlong **)0x0) {
              pplVar16 = &local_240;
            }
            (**(code **)(**(longlong **)((longlong)pplVar16 + lVar20) + 0x98))
                      (*(longlong **)((longlong)pplVar16 + lVar20),&local_3a8,local_3e8);
            if (CONCAT71(uStack_3a7,local_3a8) != 0) {
              local_480 = local_3a0;
              if (local_3a0 != (longlong *)0x0) {
                LOCK();
                *(int *)(local_3a0 + 1) = (int)local_3a0[1] + 1;
                UNLOCK();
              }
              pplVar16 = local_120 + 7;
              if (local_120 == (longlong **)0x0) {
                pplVar16 = &local_208;
              }
              local_498 = *pplVar16;
              pplVar16 = local_120 + 8;
              if (local_120 == (longlong **)0x0) {
                pplVar16 = local_200;
              }
              plVar7 = *pplVar16;
              if (plVar7 == (longlong *)0x0) {
                local_490 = (longlong *)0x0;
                FUN_1469b83ee(local_3e8,&local_498,local_488);
              }
              else {
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)(plVar7 + 1) = (int)plVar7[1] + 1;
                UNLOCK();
                local_490 = plVar7;
                FUN_1469b83ee(local_3e8,&local_498,local_488);
                LOCK();
                plVar6 = plVar7 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
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
              plVar7 = local_3a0;
              if ((CONCAT71(uStack_3a7,local_3a8) != 0) && (local_3a0 != (longlong *)0x0)) {
                LOCK();
                plVar6 = local_3a0 + 1;
                *(int *)plVar6 = (int)*plVar6 + -1;
                UNLOCK();
                if ((int)*plVar6 == 0) {
                  (**(code **)*local_3a0)(local_3a0);
                  LOCK();
                  piVar1 = (int *)((longlong)plVar7 + 0xc);
                  *piVar1 = *piVar1 + -1;
                  UNLOCK();
                  if (*piVar1 == 0) {
                    (**(code **)(*plVar7 + 0x10))(plVar7);
                  }
                }
              }
              uVar3 = uVar17 - 1;
              goto LAB_1409707d2;
            }
            uVar17 = uVar17 - 1;
            lVar20 = lVar20 + -0x48;
          } while (0 < (int)uVar17);
          uVar3 = 0xffffffff;
        }
LAB_1409707d2:
        uVar17 = uVar3;
      } while (bVar8 == 0);
      plVar7 = plStack_3d8;
      if ((local_3e8[0] == 0) && (0 < (int)(uint)local_118)) {
        local_3e8[0] = 1;
        local_3e0 = (longlong *)0x0;
        plVar6 = plStack_3c8;
        if (plStack_3d8 != (longlong *)0x0) {
          plStack_3d8 = (longlong *)0x0;
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
            plVar6 = plStack_3c8;
            if (*piVar1 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              plVar6 = plStack_3c8;
            }
          }
        }
        goto joined_r0x000140970b0d;
      }
    }
    FUN_1447fa2ac(local_f8,uStack_f0 & 0xffffffff);
    if (local_f8 != 0) {
      FUN_1400020a8();
    }
    plVar7 = plStack_100;
    if (plStack_100 != (longlong *)0x0) {
      LOCK();
      plVar6 = plStack_100 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*plStack_100)(plStack_100);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    pplVar16 = local_120;
    if (local_120 == (longlong **)0x0) {
      pplVar16 = &local_240;
    }
    FUN_1447157bd(pplVar16,local_118 & 0xffffffff);
    if (local_120 != (longlong **)0x0) {
      FUN_1400020a8();
    }
    plVar7 = local_410;
    local_460 = &PTR_FUN_149eda650;
    if (local_410 != (longlong *)0x0) {
      LOCK();
      plVar6 = local_410 + 1;
      *(int *)plVar6 = (int)*plVar6 + -1;
      UNLOCK();
      if ((int)*plVar6 == 0) {
        (**(code **)*local_410)(local_410);
        LOCK();
        piVar1 = (int *)((longlong)plVar7 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar7 + 0x10))(plVar7);
        }
      }
    }
    local_a0 = 0;
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    FUN_1405535a6(&local_e8);
  }
  else {
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_248);
    plVar6 = local_238;
    plVar2 = plStack_3d8;
    local_3e8[0] = local_248._0_1_;
    local_3e0 = local_240;
    local_240 = (longlong *)0x0;
    if (local_238 != plStack_3d8) {
      local_238 = (longlong *)0x0;
      plStack_3d8 = plVar6;
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
    }
    plVar6 = local_228;
    plVar2 = plStack_3c8;
    local_3d0 = local_230;
    local_230 = 0;
    if (local_228 != plStack_3c8) {
      local_228 = (longlong *)0x0;
      plStack_3c8 = plVar6;
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
    }
    plVar6 = local_218;
    plVar2 = plStack_3b8;
    local_3c0 = local_220;
    local_220 = 0;
    if (local_218 == plStack_3b8) {
LAB_140970037:
      plVar6 = local_218;
      local_3b0 = local_210;
      if (local_218 != (longlong *)0x0) {
        LOCK();
        plVar2 = local_218 + 1;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)*plVar2 == 0) {
          (**(code **)*local_218)(local_218);
          LOCK();
          piVar1 = (int *)((longlong)plVar6 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*plVar6 + 0x10))(plVar6);
          }
        }
      }
    }
    else {
      local_218 = (longlong *)0x0;
      plStack_3b8 = plVar6;
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
        goto LAB_140970037;
      }
      local_3b0 = local_210;
      plStack_3b8 = plVar6;
    }
    plVar6 = local_228;
    if (local_228 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_228 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_228)(local_228);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    plVar6 = local_238;
    if (local_238 != (longlong *)0x0) {
      LOCK();
      plVar2 = local_238 + 1;
      *(int *)plVar2 = (int)*plVar2 + -1;
      UNLOCK();
      if ((int)*plVar2 == 0) {
        (**(code **)*local_238)(local_238);
        LOCK();
        piVar1 = (int *)((longlong)plVar6 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar6 + 0x10))(plVar6);
        }
      }
    }
    if ((local_3e8[0] & 1) == 0) goto LAB_14097007e;
  }
  FUN_1428f6564(param_1,local_3e8);
  plVar7 = plStack_3b8;
  if (plStack_3b8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_3b8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_3b8)(plStack_3b8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = plStack_3c8;
  if (plStack_3c8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_3c8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_3c8)(plStack_3c8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
  plVar7 = plStack_3d8;
  if (plStack_3d8 != (longlong *)0x0) {
    LOCK();
    plVar6 = plStack_3d8 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
      (**(code **)*plStack_3d8)(plStack_3d8);
      LOCK();
      piVar1 = (int *)((longlong)plVar7 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar7 + 0x10))(plVar7);
      }
    }
  }
LAB_14096fe8f:
  if ((local_90 ^ (ulonglong)auStack_4d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140971090 FUN_140971090 body=176 status=ok
// SIG undefined FUN_140971090(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140971090(longlong *param_1)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_14c950e78);
  uVar2 = param_1[1];
  uVar5 = *param_1 + 0x9ae16a3b2f90404f;
  uVar5 = ((uVar5 << 0x27 | uVar5 >> 0x19) + uVar2) * -0x651e95c4d06fbf91;
  uVar2 = (*param_1 + (uVar2 << 0x1b | uVar2 >> 0x25) * -0x651e95c4d06fbf91 + 0x9ae16a3b2f90404f ^
          uVar5) * -0x651e95c4d06fbf91;
  lVar3 = (uVar2 >> 0x2f ^ uVar5 ^ uVar2) * -0x651e95c4d06fbf91;
  iVar1 = FUN_140971140(&DAT_14c950e28,((uint)((ulonglong)lVar3 >> 0x2f) ^ (uint)lVar3) * 0x2f90406f
                        ,param_1);
  if ((iVar1 == -1) || (lVar3 = (longlong)iVar1 * 0x20 + _DAT_14c950e28, lVar3 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar3 + 0x10);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_14c950e78);
  return uVar4;
}



// FUNCTION 140971140 FUN_140971140 body=112 status=ok
// SIG undefined FUN_140971140(void)

int FUN_140971140(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1 * 0x20;
        if ((((*(int *)(lVar2 + lVar4) == *param_3) && (*(int *)(lVar2 + 4 + lVar4) == param_3[1]))
            && (*(int *)(lVar2 + 8 + lVar4) == param_3[2])) &&
           (*(int *)(lVar2 + 0xc + lVar4) == param_3[3])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar4 + lVar2 + 0x18);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1409711be FUN_1409711be body=40 status=ok
// SIG undefined FUN_1409711be(void)

undefined8 FUN_1409711be(undefined8 param_1,int param_2)

{
  FUN_1409711e6();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409711e6 FUN_1409711e6 body=69 status=ok
// SIG undefined FUN_1409711e6(void)

void FUN_1409711e6(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b677870;
  *(undefined4 *)(param_1 + 0x17) = 0;
  if (param_1[0x16] != 0) {
    FUN_1400020a8();
  }
  FUN_140971268(param_1 + 0xe);
  FUN_14097122c(param_1);
  return;
}



// FUNCTION 14097122c FUN_14097122c body=59 status=ok
// SIG undefined FUN_14097122c(void)

void FUN_14097122c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b679620;
  if (param_1[9] != 0) {
    FUN_1400020a8();
  }
  if (param_1[4] == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140971268 FUN_140971268 body=55 status=ok
// SIG undefined FUN_140971268(void)

void FUN_140971268(longlong *param_1)

{
  FUN_1409712a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409712a0 FUN_1409712a0 body=123 status=ok
// SIG undefined FUN_1409712a0(void)

void FUN_1409712a0(longlong param_1,int param_2)

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



// FUNCTION 14097131c FUN_14097131c body=306 status=ok
// SIG undefined FUN_14097131c(void)

undefined8 FUN_14097131c(longlong param_1,undefined8 param_2,undefined4 param_3)

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
    if (iVar1 == 2) goto LAB_140971448;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140971448;
    }
    FUN_140192332(param_1 + 0x18,&local_48,0);
  }
  else {
LAB_140971448:
    local_48 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_1409713f0;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5 + (longlong)*(int *)(param_1 + 0x28),param_2,param_3);
      uVar6 = 1;
      goto LAB_1409713f0;
    }
  }
  uVar6 = 0;
LAB_1409713f0:
  if ((local_48 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_48);
  }
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140971450 FUN_140971450 body=337 status=ok
// SIG undefined FUN_140971450(void)

void FUN_140971450(longlong param_1,undefined8 param_2,float param_3)

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
  uVar5 = FUN_1409715bc();
  cVar4 = FUN_14011bf50(uVar5);
  if (cVar4 != '\0') {
    FUN_1403adc5e(&local_50,uVar5);
    pfVar3 = *(float **)(CONCAT71(uStack_4f,local_50) + 0xa0);
    AcquireSRWLockExclusive((PSRWLOCK)(pfVar3 + 0x32));
    pfVar3[0x30] = (float)((int)pfVar3[0x30] + 1);
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
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_40 ^ (ulonglong)auStack_78);
  }
  if ((local_40 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409715bc FUN_1409715bc body=370 status=ok
// SIG undefined FUN_1409715bc(void)

longlong FUN_1409715bc(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
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
  if (*(int *)(param_1 + 0xdc) == 0) {
LAB_140971624:
    lVar2 = FUN_14011be0c(param_1 + 0x30);
  }
  else {
    uVar1 = *(uint *)(param_1 + 0xd8);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_140971624;
    plVar3 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if ((plVar3 == (longlong *)0x0) ||
       ((((int)plVar3[2] != *(int *)(param_1 + 0xdc) || ((*(uint *)(plVar3 + 1) & 0x10200000) != 0))
        || (plVar3 = (longlong *)*plVar3, plVar3 == (longlong *)0x0)))) goto LAB_140971624;
    lVar2 = (**(code **)(*plVar3 + 0x5d8))(plVar3);
  }
  if (lVar2 != 0) {
    if (DAT_14cbadd90 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1459f2e4c;
      local_38 = &LAB_148c39de3;
      local_40 = &LAB_1457a9eb2;
      local_48 = &DAT_149e063b2;
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x3de0;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerController",&DAT_14cbadd90,FUN_1465e9ab8);
    }
    if ((*(int *)(DAT_14cbadd90 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbadd90 + 0x38) * 8) == DAT_14cbadd90 + 0x30)) goto LAB_14097165c;
  }
  lVar2 = 0;
LAB_14097165c:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140971736 FUN_140971736 body=57 status=ok
// SIG undefined FUN_140971736(void)

void FUN_140971736(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb23590 == 0) {
    uVar1 = FUN_1409fde75();
    DAT_14cb23590 = FUN_140002ddd(FUN_14643e1ad,uVar1,L"GpsTest_NavReachable");
  }
  return;
}



// FUNCTION 14097177e FUN_14097177e body=45 status=ok
// SIG undefined FUN_14097177e(void)

undefined8 FUN_14097177e(undefined8 param_1,int param_2)

{
  FUN_1409717ac();
  if (param_2 != 0) {
    thunk_FUN_1400020a8(param_1,0xa0);
  }
  return param_1;
}



// FUNCTION 1409717ac FUN_1409717ac body=368 status=ok
// SIG undefined FUN_1409717ac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409717ac(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  *param_1 = &PTR_FUN_14b074610;
  FUN_140971947(param_1[0x12],*(undefined4 *)(param_1 + 0x13));
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  param_1[0xe] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0x11) = 0;
  if (*(int *)((longlong)param_1 + 0x8c) != 0) {
    FUN_140115c12(param_1 + 0x10,0);
  }
  param_1[0xf] = 0;
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  param_1[10] = &DAT_14a171d50;
  *(undefined4 *)(param_1 + 0xd) = 0;
  if (*(int *)((longlong)param_1 + 0x6c) != 0) {
    FUN_140115c12(param_1 + 0xc,0);
  }
  param_1[0xb] = 0;
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_14097191c(param_1[3],*(undefined4 *)(param_1 + 4));
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
                    /* WARNING: Could not recover jumptable at 0x0001409718dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&DAT_14c9a0eb0);
    return;
  }
  return;
}



// FUNCTION 14097191c FUN_14097191c body=43 status=ok
// SIG undefined FUN_14097191c(void)

void FUN_14097191c(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14864d7de(param_1);
    param_1 = param_1 + 0xb0;
  }
  return;
}



// FUNCTION 140971947 FUN_140971947 body=77 status=ok
// SIG undefined FUN_140971947(void)

void FUN_140971947(longlong param_1,int param_2)

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



// FUNCTION 140971994 FUN_140971994 body=9 status=ok
// SIG undefined FUN_140971994(void)

void FUN_140971994(longlong param_1)

{
  FUN_14097199e(param_1 + 0x10);
  return;
}



// FUNCTION 14097199e FUN_14097199e body=145 status=ok
// SIG undefined FUN_14097199e(void)

void FUN_14097199e(undefined8 *param_1)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b094d50;
  if (param_1[7] != 0) {
    FUN_14078b1f4(param_1);
  }
  if (param_1[10] != 0) {
    FUN_140113f3a();
    param_1[10] = 0;
  }
  *param_1 = &PTR_FUN_14a18e3f0;
  plVar3 = (longlong *)param_1[8];
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
  plVar3 = (longlong *)param_1[2];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x000140971a2b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x10))();
      return;
    }
  }
  return;
}



// FUNCTION 140971a38 FUN_140971a38 body=127 status=ok
// SIG undefined FUN_140971a38(void)

void FUN_140971a38(longlong *param_1)

{
  FUN_140971ab7(param_1[8],(int)param_1[9]);
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  FUN_140971ab7(param_1[6],(int)param_1[7]);
  if (param_1[6] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(param_1[3],(int)param_1[4]);
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e21(*param_1,(int)param_1[1]);
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140971ab7 FUN_140971ab7 body=51 status=ok
// SIG undefined FUN_140971ab7(void)

void FUN_140971ab7(longlong param_1,int param_2)

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



// FUNCTION 140971af8 FUN_140971af8 body=132 status=ok
// SIG undefined FUN_140971af8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140971af8(undefined8 *param_1,int param_2)

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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140971b82 FUN_140971b82 body=57 status=ok
// SIG undefined FUN_140971b82(void)

void FUN_140971b82(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb5a408 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb5a408 = FUN_140002ddd(FUN_1464c9278,uVar1,L"GbxBodyNodeState_BoneMod");
  }
  return;
}



// FUNCTION 140971bbc FUN_140971bbc body=1994 status=ok
// SIG undefined FUN_140971bbc(void)

void FUN_140971bbc(longlong *param_1,char param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  int iVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong *plVar13;
  uint uVar14;
  longlong *plVar15;
  uint uVar16;
  ulonglong uVar17;
  longlong *plVar18;
  undefined1 auStack_108 [47];
  char local_d9;
  undefined8 *local_d8;
  longlong *local_d0;
  ulonglong local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  uint local_b0;
  int local_ac;
  longlong *local_a8;
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  longlong *local_78;
  undefined8 local_70;
  uint local_68;
  undefined4 local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if (param_1[0xcb] == 0) {
    if ((DAT_14c950c29 & param_1[0xcc] != 0) == 0) {
      if (param_1[0xcc] == 0) {
        FUN_1403c61a8(param_1[0x104],(int)param_1[0x105]);
        *(undefined4 *)(param_1 + 0x105) = 0;
        if (*(int *)((longlong)param_1 + 0x82c) != 0) {
          FUN_1417c1b1a(param_1 + 0x104);
        }
        lVar7 = (**(code **)(*param_1 + 0xa90))(param_1);
        if (lVar7 != 0) {
          uVar14 = *(uint *)(lVar7 + 8);
          iVar6 = (int)param_1[0x105];
          *(uint *)(param_1 + 0x105) = iVar6 + uVar14;
          if ((uint)(*(int *)((longlong)param_1 + 0x82c) - iVar6) < uVar14) {
            FUN_140972530(param_1 + 0x104,iVar6);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_60 ^ (ulonglong)auStack_108);
      }
      goto LAB_140971c0b;
    }
  }
  else if (DAT_14c950c29 != 1) goto LAB_140971c0b;
  FUN_1456cec3c();
LAB_140971c0b:
  lVar7 = (**(code **)(*param_1 + 0xa90))(param_1);
  if (lVar7 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = *(uint *)(lVar7 + 8);
  }
  plVar11 = param_1 + 0x106;
  local_d9 = param_2;
  if (uVar14 != *(uint *)(param_1 + 0x107)) {
    iVar6 = *(int *)((longlong)param_1 + 0x83c);
    FUN_1403c6071(param_1[0x106]);
    *(undefined4 *)(param_1 + 0x107) = 0;
    if ((iVar6 < 0) && (*(int *)((longlong)param_1 + 0x83c) != 0)) {
      FUN_147a154d2(plVar11);
    }
    lVar7 = (**(code **)(*param_1 + 0xa90))(param_1);
    if (lVar7 == 0) {
      iVar6 = (int)param_1[0x107];
      uVar16 = 0;
    }
    else {
      uVar16 = *(uint *)(lVar7 + 8);
      iVar6 = (int)param_1[0x107];
      *(uint *)(param_1 + 0x107) = iVar6 + uVar16;
      if ((uint)(*(int *)((longlong)param_1 + 0x83c) - iVar6) < uVar16) {
        FUN_140972420(plVar11,iVar6);
      }
    }
    FUN_1409723ad((longlong)iVar6 * 0x50 + *plVar11,uVar16);
  }
  plVar1 = param_1 + 0x104;
  uVar16 = *(uint *)(param_1 + 0x105);
  if (uVar14 != uVar16) {
    if ((int)uVar16 < (int)uVar14) {
      *(uint *)(param_1 + 0x105) = uVar14;
      if (*(int *)((longlong)param_1 + 0x82c) - uVar16 < uVar14 - uVar16) {
        FUN_140972530(plVar1,uVar16);
      }
      FUN_1409723e5((longlong)(int)uVar16 * 0x58 + *plVar1,uVar14 - uVar16);
    }
    else {
      if ((int)uVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(uVar14);
      }
      if ((int)uVar14 < (int)uVar16) {
        FUN_147a15502(plVar1,uVar14,uVar16 - uVar14);
        FUN_147a1555c(plVar1);
      }
    }
  }
  if (0 < (int)uVar14) {
    uVar17 = 0;
    do {
      lVar9 = *plVar11;
      lVar7 = lVar9 + uVar17 * 0x50;
      plVar15 = (longlong *)(lVar7 + 0x10);
      plVar18 = (longlong *)(uVar17 * 0x58 + *plVar1);
      local_80 = (uint *)0x100000000;
      local_70._0_4_ = 0xffffffff;
      local_70._4_4_ = 0;
      local_68 = 0;
      local_78 = plVar15;
      if (*(int *)(lVar7 + 0x28) != 0) {
        local_c0 = plVar11;
        FUN_1449c0562(&local_80);
        plVar11 = local_c0;
      }
      local_a0 = local_80;
      plVar13 = (longlong *)(lVar9 + uVar17 * 0x50);
      local_90._0_4_ = (uint)local_70;
      local_90._4_4_ = local_70._4_4_;
      local_88 = local_68;
      local_84 = local_64;
      local_98 = local_78;
      uVar16 = *(uint *)(plVar13 + 5);
      local_80 = (uint *)CONCAT44(1 << ((byte)uVar16 & 0x1f),(int)uVar16 >> 5);
      iVar6 = -1 << ((byte)uVar16 & 0x1f);
      local_a8 = plVar13;
      local_68 = uVar16 & 0xffffffe0;
      local_70._0_4_ = iVar6;
      local_70._4_4_ = uVar16;
      local_78 = plVar15;
      if (*(uint *)(plVar13 + 5) != uVar16) {
        FUN_1449c0562(&local_80);
        plVar15 = local_78;
        uVar16 = local_70._4_4_;
      }
      while (((uVar4 = local_70._4_4_, plVar3 = local_78, local_90._4_4_ != local_70._4_4_ ||
              (local_98 != local_78)) || (local_a8 != plVar13))) {
        lVar7 = *local_a8;
        lVar9 = (longlong)(int)local_90._4_4_ * 0x20;
        local_b0 = *(uint *)(lVar7 + lVar9);
        puVar8 = *(undefined8 **)(lVar7 + 8 + lVar9);
        local_c0 = plVar11;
        local_b8 = puVar8;
        local_78 = plVar15;
        local_70._4_4_ = uVar16;
        if ((int)plVar18[1] != *(int *)((longlong)plVar18 + 0x34)) {
          plVar11 = plVar18 + 7;
          if ((longlong *)plVar18[8] != (longlong *)0x0) {
            plVar11 = (longlong *)plVar18[8];
          }
          iVar6 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar18[9] - 1U & local_b0) * 4);
          if (iVar6 != -1) {
            do {
              local_d8 = (undefined8 *)(*plVar18 + (longlong)iVar6 * 0x30);
              if (*(uint *)(*plVar18 + (longlong)iVar6 * 0x30) == local_b0) {
                puVar2 = local_d8;
                if (local_d8 != (undefined8 *)0x0) goto LAB_1409720a7;
                break;
              }
              iVar6 = *(int *)(local_d8 + 5);
            } while (iVar6 != -1);
          }
        }
        local_d0 = (longlong *)(lVar7 + lVar9);
        local_80 = &local_b0;
        FUN_147a15602(plVar18,&local_ac);
        puVar8 = *(undefined8 **)((longlong)local_d0 + 8);
        puVar2 = (undefined8 *)((longlong)local_ac * 0x30 + *plVar18);
LAB_1409720a7:
        local_d8 = puVar2 + 1;
        *local_d8 = *puVar8;
        local_d0 = puVar2 + 2;
        if (local_d9 == '\0') {
          FUN_144aa29e6(local_d0,*(undefined4 *)(local_b8 + 0x10),1);
        }
        else {
          iVar6 = *(int *)((longlong)puVar2 + 0x1c);
          local_c8 = 0;
          *(undefined4 *)(puVar2 + 3) = 0;
          if (iVar6 < 0) {
            FUN_14482f6fa(local_d0,0);
            local_c8 = (ulonglong)*(uint *)(local_d8 + 2);
            iVar6 = *(int *)((longlong)local_d8 + 0x14);
          }
          uVar16 = *(uint *)(local_b8 + 0x10);
          *(uint *)(local_d8 + 2) = uVar16 + (int)local_c8;
          local_d8 = (undefined8 *)(longlong)(int)uVar16;
          if ((uint)(iVar6 - (int)local_c8) < uVar16) {
            FUN_14475e4ac(local_d0);
          }
          memset((void *)((longlong)(int)local_c8 * 4 + *local_d0),0,(longlong)local_d8 << 2);
        }
        local_90._0_4_ = (uint)local_90 & ~local_a0._4_4_;
        FUN_1449c0562(&local_a0);
        plVar11 = local_c0;
        plVar15 = local_78;
        uVar16 = local_70._4_4_;
        local_70._4_4_ = uVar4;
        local_78 = plVar3;
      }
      iVar6 = 0;
      *(undefined4 *)(plVar18 + 10) = 0;
      plVar15 = plVar18 + 2;
      local_80 = (uint *)0x100000000;
      local_70 = 0xffffffff;
      local_68 = 0;
      local_78 = plVar15;
      if ((int)plVar18[5] != 0) {
        FUN_1449c0562(&local_80);
        iVar6 = (int)plVar18[5];
      }
      local_90 = local_70;
      uVar5 = local_90;
      local_88 = local_68;
      local_84 = local_64;
      local_a0 = local_80;
      local_98 = local_78;
      local_90._4_4_ = (uint)((ulonglong)local_70 >> 0x20);
      iVar10 = local_90._4_4_;
      local_a8 = plVar18;
      if ((local_90._4_4_ != iVar6) || (local_90 = uVar5, local_78 != plVar15)) {
        do {
          local_90 = uVar5;
          lVar7 = *local_a8;
          lVar12 = (longlong)iVar10 * 0x30;
          *(undefined4 *)(lVar7 + 0x20 + lVar12) = 0;
          lVar9 = (longlong)*(int *)(lVar7 + 0x18 + lVar12);
          if (lVar9 < 1) {
            iVar10 = 0;
          }
          else {
            lVar7 = lVar7 + lVar12;
            iVar10 = 0;
            lVar12 = 0;
            do {
              if (*(float *)(lVar7 + 0x24) <=
                  ABS(*(float *)(*(longlong *)(lVar7 + 0x10) + lVar12 * 4))) {
                iVar10 = iVar10 + 1;
                *(int *)(lVar7 + 0x20) = iVar10;
              }
              lVar12 = lVar12 + 1;
            } while (lVar9 != lVar12);
          }
          *(int *)(plVar18 + 10) = (int)plVar18[10] + iVar10;
          local_90 = CONCAT44(local_90._4_4_,(uint)local_90 & ~local_a0._4_4_);
          FUN_1449c0562(&local_a0);
          iVar10 = local_90._4_4_;
          uVar5 = local_90;
        } while (((local_90._4_4_ != iVar6) || (local_98 != plVar15)) || (local_a8 != plVar18));
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 != uVar14);
  }
  if ((local_60 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409723ad FUN_1409723ad body=56 status=ok
// SIG undefined FUN_1409723ad(void)

void FUN_1409723ad(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x48);
    do {
      *(undefined8 *)(puVar1 + -10) = 0;
      puVar1[-8] = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -0x10) = 0;
      *(undefined8 *)(puVar1 + -7) = 0xffffffff00000080;
      puVar1[-5] = 0;
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x14;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 1409723e5 FUN_1409723e5 body=59 status=ok
// SIG undefined FUN_1409723e5(void)

void FUN_1409723e5(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0x50);
    do {
      *(undefined8 *)(puVar1 + -0xc) = 0;
      puVar1[-10] = 0;
      *(undefined8 *)(puVar1 + -0x14) = 0;
      *(undefined8 *)(puVar1 + -0x12) = 0;
      *(undefined8 *)(puVar1 + -9) = 0xffffffff00000080;
      puVar1[-7] = 0;
      *(undefined8 *)(puVar1 + -4) = 0;
      puVar1[-2] = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 0x16;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 140972420 FUN_140972420 body=272 status=ok
// SIG undefined FUN_140972420(void)

void FUN_140972420(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar3;
  
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
    uVar4 = lVar3 * 0x50;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          uVar5 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar5 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar5 & (uVar4 + uVar5) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x50)) {
      uVar5 = uVar4 / 0x50 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x50,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140972530 FUN_140972530 body=366 status=ok
// SIG undefined FUN_140972530(void)

void FUN_140972530(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x58;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1409725b5;
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
LAB_1409725b5:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x58)) {
    uVar7 = uVar5 / 0x58 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x58,8);
  return;
}



// FUNCTION 14097269e FUN_14097269e body=267 status=ok
// SIG undefined FUN_14097269e(void)

undefined8 FUN_14097269e(longlong param_1,undefined8 param_2)

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
    if (iVar1 == 2) goto LAB_1409727a3;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_1409727a3;
    }
    FUN_1400841de(param_1 + 0x18,&local_30);
  }
  else {
LAB_1409727a3:
    local_30 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140972759;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))(*plVar5,param_2);
      uVar6 = 1;
      goto LAB_140972759;
    }
  }
  uVar6 = 0;
LAB_140972759:
  if (local_30 != 0) {
    FUN_140113f3a(local_30);
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409727ba FUN_1409727ba body=1571 status=ok
// SIG undefined FUN_1409727ba(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1409727ba(longlong param_1,longlong param_2)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *_Src;
  longlong *plVar10;
  undefined8 *puVar11;
  int iVar12;
  longlong lVar13;
  undefined8 *puVar14;
  bool bVar15;
  undefined1 auStack_108 [44];
  int local_dc;
  longlong local_d8;
  longlong local_d0;
  longlong local_c8;
  undefined1 local_c0 [8];
  undefined8 *local_b8;
  longlong local_b0;
  longlong *local_a8;
  undefined8 *local_a0;
  longlong local_98;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_108;
  lVar3 = *(longlong *)(param_1 + 0x48);
  local_d8 = param_2;
  local_88 = (undefined8 *)FUN_1405f939e();
  FUN_14021d432(local_c0,&DAT_14cb71320);
  LOCK();
  *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + 1;
  UNLOCK();
  LOCK();
  *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + 1;
  UNLOCK();
  local_c8 = local_b0;
  local_d0 = local_98;
  puVar11 = local_b8;
joined_r0x000140972840:
  do {
    if (puVar11 == local_a0) {
      LOCK();
      *(int *)(local_d0 + 8) = *(int *)(local_d0 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_c8 + 8) = *(int *)(local_c8 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_98 + 8) = *(int *)(local_98 + 8) + -1;
      UNLOCK();
      LOCK();
      *(int *)(local_b0 + 8) = *(int *)(local_b0 + 8) + -1;
      UNLOCK();
      if ((local_60 ^ (ulonglong)auStack_108) == DAT_14c707940) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0();
    }
    plVar4 = (longlong *)puVar11[2];
    if ((*(char *)(lVar3 + 0x1cc) != '\x01') ||
       (iVar1 = *(int *)(lVar3 + 0x1c8), lVar8 = (**(code **)(*plVar4 + 0x5e8))(plVar4),
       (iVar1 == 0) != (lVar8 != 0))) {
      if (*(char *)(lVar3 + 0x1d4) == '\x01') {
        iVar1 = *(int *)(lVar3 + 0x1d0);
        pcVar5 = *(code **)(*plVar4 + 0x5e8);
        if (pcVar5 == FUN_140972dde) {
          lVar8 = plVar4[0x76];
          if (lVar8 != 0) goto LAB_140972cb3;
          pcVar5 = *(code **)(*plVar4 + 0x5f8);
          if (pcVar5 == FUN_144784df4) {
            if (*(code **)(plVar4[0x784] + 0x18) == (code *)&LAB_144904684) {
              if (((((*(int *)((longlong)plVar4 + 0x75b4) != 0) &&
                    (uVar2 = *(uint *)(plVar4 + 0xeb6), -1 < (int)uVar2)) &&
                   ((int)uVar2 < DAT_14c9647dc)) &&
                  ((plVar10 = (longlong *)
                              ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                   plVar10 != (longlong *)0x0 &&
                   ((int)plVar10[2] == *(int *)((longlong)plVar4 + 0x75b4))))) &&
                 ((*(uint *)(plVar10 + 1) & 0x10200000) == 0)) {
                if ((*(uint *)(plVar10 + 1) & 0x10200000) == 0) {
                  lVar8 = *plVar10;
                }
                else {
                  lVar8 = 0;
                }
                lVar8 = lVar8 + 0x110;
                goto LAB_140972c99;
              }
            }
            else {
              lVar8 = (**(code **)(plVar4[0x784] + 0x18))(plVar4 + 0x784);
LAB_140972c99:
              if (lVar8 != 0) {
                lVar8 = *(longlong *)(lVar8 + 0x20);
                goto LAB_140972ca2;
              }
            }
          }
          else {
            lVar8 = (*pcVar5)(plVar4);
LAB_140972ca2:
            if (lVar8 != 0) {
              lVar8 = *(longlong *)(lVar8 + 0x3b0);
              goto LAB_140972cae;
            }
          }
        }
        else {
          lVar8 = (*pcVar5)(plVar4);
LAB_140972cae:
          if (lVar8 != 0) {
LAB_140972cb3:
            if ((iVar1 == 0) == ((*(byte *)(lVar8 + 0x39a) & 8) == 0)) goto LAB_140972906;
            goto LAB_14097288a;
          }
        }
        if (iVar1 != 0) goto LAB_140972906;
      }
LAB_14097288a:
      if (((((*(char *)(lVar3 + 0x1dc) != '\x01') ||
            (iVar1 = *(int *)(lVar3 + 0x1d8),
            cVar6 = (**(code **)(plVar4[0x214] + 0x40))(plVar4 + 0x214), (iVar1 == 0) != (bool)cVar6
            )) && ((lVar8 = (**(code **)(plVar4[0x10c] + 0x10))(plVar4 + 0x10c),
                   *(char *)(lVar3 + 0x1dd) != '\x01' || (*(char *)(lVar8 + 0x40) == '\0')))) &&
          (((*(char *)(lVar3 + 0x1de) != '\x01' || (*(char *)(lVar8 + 0x18) == '\0')) &&
           ((*(char *)(lVar3 + 0x1df) != '\x01' ||
            ((*(char *)(lVar8 + 0x80) == '\0' && (*(char *)(lVar8 + 0x18) == '\0')))))))) &&
         (cVar6 = FUN_14020a27c(param_1,lVar3,plVar4), cVar6 != '\0')) {
        if (*(char *)(lVar3 + 0x228) == '\x01') {
          lVar8 = (**(code **)(plVar4[0x216] + 0x28))(plVar4 + 0x216);
          if (*(int *)(lVar3 + 0x200) != 0) {
            local_88 = (undefined8 *)(lVar3 + 0x1e0);
            local_80 = 0;
            local_78 = 0;
            cVar6 = FUN_14008db60(&local_88,lVar8 + 0x78);
            if (cVar6 != '\0') goto LAB_1409729bd;
          }
        }
        else {
LAB_1409729bd:
          iVar1 = *(int *)(local_d8 + 0x388);
          *(uint *)(local_d8 + 0x388) = iVar1 + 1U;
          if (*(uint *)(local_d8 + 0x38c) < iVar1 + 1U) {
            FUN_14052e0a0(local_d8,iVar1);
          }
          lVar8 = *(longlong *)(local_d8 + 0x380);
          if (*(longlong *)(local_d8 + 0x380) == 0) {
            lVar8 = local_d8;
          }
          local_70 = 8;
          if (plVar4 == (longlong *)0x0) {
            local_88._0_4_ = 0;
            iVar7 = 0;
            uVar2 = (uint)local_88;
          }
          else {
            uVar2 = *(uint *)((longlong)plVar4 + 0xc);
            local_88 = (undefined8 *)(ulonglong)uVar2;
            if ((int)uVar2 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar7 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar15 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar15) {
                local_dc = iVar12;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
                iVar12 = local_dc;
              }
              LOCK();
              iVar7 = *(int *)(lVar13 + 0x10);
              bVar15 = iVar7 == 0;
              if (bVar15) {
                *(int *)(lVar13 + 0x10) = iVar12;
                iVar7 = 0;
              }
              UNLOCK();
              uVar2 = (uint)local_88;
              if (bVar15) {
                iVar7 = iVar12;
              }
            }
          }
          local_88._0_4_ = uVar2;
          puVar14 = (undefined8 *)(lVar8 + (longlong)iVar1 * 0x38);
          local_88 = (undefined8 *)CONCAT44(iVar7,(uint)local_88);
          local_68 = 7;
          *(ushort *)(puVar14 + 3) = local_70;
          puVar9 = puVar14;
          _Src = &local_88;
          if (0x18 < local_70) {
            puVar9 = (undefined8 *)FUN_14001cc68(local_70,0);
            *puVar14 = puVar9;
            _Src = local_88;
          }
          if (DAT_14c9a8d90 == (code *)0x0) {
            memcpy(puVar9,_Src,(longlong)DAT_14c9a8cf0);
          }
          else {
            (*DAT_14c9a8d90)();
          }
          *(byte *)(puVar14 + 4) = local_68;
          puVar14[5] = 0;
          puVar14[6] = 0;
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar5 != (code *)0x0) {
            puVar9 = &local_88;
            if (0x18 < local_70) {
              puVar9 = local_88;
            }
            (*pcVar5)(puVar9);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(local_88);
          }
        }
      }
    }
LAB_140972906:
    for (puVar9 = (undefined8 *)*puVar11; puVar9 != (undefined8 *)0x0;
        puVar9 = (undefined8 *)*puVar9) {
      lVar8 = puVar9[2];
      if ((lVar8 != 0) && ((*(uint *)(lVar8 + 8) & 0x40018000) == 0)) {
        uVar2 = *(uint *)(lVar8 + 0xc);
        if ((int)uVar2 < DAT_14c9647dc) {
          lVar8 = *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8);
          if ((*(uint *)(lVar8 + 8 + (ulonglong)(uVar2 & 0xffff) * 0x18) >> 0x15 & 1) == 0) {
            lVar8 = lVar8 + (ulonglong)(uVar2 & 0xffff) * 0x18;
LAB_14097295b:
            if ((*(uint *)(lVar8 + 8) >> 0x1c & 1) == 0) goto LAB_140972971;
          }
        }
        else if ((_DAT_00000008 >> 0x15 & 1) == 0) {
          lVar8 = 0;
          goto LAB_14097295b;
        }
      }
    }
    puVar11 = (undefined8 *)0x0;
  } while( true );
  while( true ) {
    puVar9 = (undefined8 *)FUN_144b39bc4(*puVar9);
    puVar11 = (undefined8 *)0x0;
    if (puVar9 == (undefined8 *)0x0) break;
LAB_140972971:
    lVar8 = FUN_1447210f0(puVar9[2]);
    puVar11 = puVar9;
    if (lVar8 == *local_a8) break;
  }
  goto joined_r0x000140972840;
}



// FUNCTION 140972dde FUN_140972dde body=210 status=ok
// SIG undefined FUN_140972dde(void)

longlong FUN_140972dde(longlong *param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (param_1[0x76] != 0) {
    return param_1[0x76];
  }
  if (*(code **)(*param_1 + 0x5f8) == FUN_144784df4) {
    if (*(code **)(param_1[0x784] + 0x18) == (code *)&LAB_144904684) {
      if (*(int *)((longlong)param_1 + 0x75b4) == 0) {
        return 0;
      }
      uVar1 = *(uint *)(param_1 + 0xeb6);
      if ((int)uVar1 < 0) {
        return 0;
      }
      if (DAT_14c9647dc <= (int)uVar1) {
        return 0;
      }
      plVar2 = (longlong *)
               ((ulonglong)((uVar1 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
      if (plVar2 == (longlong *)0x0) {
        return 0;
      }
      if ((int)plVar2[2] != *(int *)((longlong)param_1 + 0x75b4)) {
        return 0;
      }
      if ((*(uint *)(plVar2 + 1) & 0x10200000) != 0) {
        return 0;
      }
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      lVar3 = lVar3 + 0x110;
    }
    else {
      lVar3 = (**(code **)(param_1[0x784] + 0x18))(param_1 + 0x784);
    }
    if (lVar3 == 0) {
      return 0;
    }
    lVar3 = *(longlong *)(lVar3 + 0x20);
  }
  else {
    lVar3 = (**(code **)(*param_1 + 0x5f8))();
  }
  if (lVar3 == 0) {
    return 0;
  }
  return *(longlong *)(lVar3 + 0x3b0);
}



// FUNCTION 140972ebe FUN_140972ebe body=73 status=ok
// SIG undefined FUN_140972ebe(void)

undefined8 * FUN_140972ebe(undefined8 *param_1,int param_2)

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



// FUNCTION 140972f16 FUN_140972f16 body=87 status=ok
// SIG undefined FUN_140972f16(void)

undefined8 * FUN_140972f16(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  
  *param_1 = &PTR_FUN_14b4a94f0;
  plVar3 = (longlong *)param_1[10];
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



// FUNCTION 140972f6e FUN_140972f6e body=5551 status=ok
// SIG undefined FUN_140972f6e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_140972f6e(longlong param_1,double *param_2,double *param_3,undefined4 param_4)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  longlong lVar11;
  undefined8 *puVar12;
  longlong lVar13;
  double *pdVar14;
  longlong *plVar15;
  longlong *plVar16;
  undefined8 *puVar17;
  double *pdVar18;
  ulonglong uVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar29;
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  double dVar30;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  double dVar33;
  double dVar34;
  double dVar36;
  undefined1 auVar35 [16];
  double dVar37;
  double dVar38;
  double dVar39;
  undefined1 auVar40 [16];
  double dVar42;
  double dVar43;
  undefined1 auVar41 [16];
  double dVar44;
  double dVar46;
  undefined1 auVar45 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  double dVar53;
  double dVar55;
  undefined1 auVar54 [16];
  double dVar56;
  undefined1 auVar57 [16];
  double dVar58;
  double dVar59;
  undefined1 auStack_478 [32];
  undefined4 local_458;
  undefined4 local_44c;
  undefined1 local_448 [16];
  double local_438;
  double dStack_430;
  double local_428;
  double dStack_420;
  double local_418;
  double dStack_410;
  double local_408;
  double dStack_400;
  double local_3f8;
  double dStack_3f0;
  double local_3e8;
  double dStack_3e0;
  double local_3d8;
  undefined1 local_3c8 [16];
  undefined1 local_3b8 [16];
  double local_3a8;
  double dStack_3a0;
  undefined1 local_398 [16];
  double local_388;
  double dStack_380;
  double local_378;
  double dStack_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined8 local_348 [4];
  double local_328;
  double dStack_320;
  double local_318;
  double local_2e8 [4];
  double local_2c8;
  double dStack_2c0;
  double local_2b8;
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  undefined8 uStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  undefined8 uStack_230;
  double local_228;
  double dStack_220;
  double local_218;
  undefined8 uStack_210;
  double local_208;
  double dStack_200;
  undefined1 local_1f8 [16];
  double local_1e8;
  double dStack_1e0;
  double local_1d8;
  undefined8 uStack_1d0;
  double local_1c8;
  double dStack_1c0;
  double local_1b8;
  undefined8 uStack_1b0;
  double local_1a8;
  double dStack_1a0;
  double local_198;
  undefined8 uStack_190;
  double local_188;
  double dStack_180;
  double local_178;
  undefined8 uStack_170;
  double local_168 [2];
  undefined1 local_158 [16];
  double local_148;
  double dStack_140;
  double local_138;
  undefined8 uStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 uStack_110;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_478;
  if ((((*(char *)(param_1 + 0x1060) == '\0') ||
       (plVar16 = *(longlong **)(param_1 + 0x1f0), plVar16 == (longlong *)0x0)) ||
      (lVar13 = plVar16[0x85], lVar13 == 0)) || (lVar1 = plVar16[0x39], lVar1 == 0)) {
    FUN_14097451e(param_1,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_e0 ^ (ulonglong)auStack_478);
  }
  local_44c = param_4;
  if ((*(int *)(param_1 + 0x1010) == 0) || (*(longlong **)(param_1 + 0x1008) == (longlong *)0x0)) {
LAB_1409730e1:
    pdVar14 = local_2e8;
    for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
      *pdVar14 = *param_3;
      param_3 = param_3 + 1;
      pdVar14 = pdVar14 + 1;
    }
  }
  else {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x30))();
    if (cVar7 == '\0') goto LAB_1409730e1;
    if (*(int *)(param_1 + 0x1010) == 0) {
      plVar15 = (longlong *)0x0;
    }
    else {
      plVar15 = *(longlong **)(param_1 + 0x1008);
    }
    local_458 = local_44c;
    (**(code **)(*plVar15 + 0x58))(plVar15,local_2e8,param_3,param_1);
  }
  puVar12 = &DAT_14c846480;
  if (plVar16[0x39] != 0) {
    puVar12 = (undefined8 *)(plVar16[0x39] + 0x240);
  }
  puVar17 = local_348;
  for (lVar11 = 0xc; lVar11 != 0; lVar11 = lVar11 + -1) {
    *puVar17 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar17 = puVar17 + 1;
  }
  auVar31 = *(undefined1 (*) [16])(lVar13 + 0x280);
  dVar56 = *(double *)(lVar13 + 0x290);
  dVar42 = (double)plVar16[0xa0];
  dVar49 = (double)plVar16[0xa1];
  dVar37 = (double)plVar16[0xa2];
  uVar8 = (**(code **)(*plVar16 + 2000))(plVar16,local_168);
  auVar21._8_8_ = 0;
  auVar21._0_8_ = dVar56;
  local_378 = 0.0;
  dStack_370 = 0.0;
  local_388 = 0.0;
  dStack_380 = 0.0;
  auVar47 = *(undefined1 (*) [16])(lVar1 + 0x280);
  dVar38 = auVar47._0_8_;
  dVar43 = auVar47._8_8_;
  auVar22 = *(undefined1 (*) [16])(lVar1 + 0x290);
  local_358 = auVar22._0_8_;
  dStack_350 = auVar22._8_8_;
  auVar47 = minpd(auVar31,auVar47);
  auVar21 = minpd(auVar21,auVar22);
  auVar22._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
  auVar22._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
  iVar9 = movmskpd(uVar8,auVar22);
  auVar47._8_8_ = -(ulonglong)(auVar21._8_8_ < 0.0);
  auVar47._0_8_ = -(ulonglong)(auVar21._0_8_ < 0.0);
  uVar10 = movmskpd((int)plVar16,auVar47);
  local_448._8_8_ = auVar31._8_8_;
  uVar6 = local_448._8_8_;
  local_448._0_8_ = auVar31._0_8_;
  uVar5 = local_448._0_8_;
  local_448 = auVar31;
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar52 = *(double *)(lVar1 + 0x240);
    dVar58 = *(double *)(lVar1 + 0x248);
    dVar51 = *(double *)(lVar1 + 600);
    dVar34 = *(double *)(lVar1 + 600);
    dVar30 = *(double *)(lVar1 + 0x240);
    dVar20 = *(double *)(lVar1 + 0x240);
    dVar44 = *(double *)(lVar1 + 0x248);
    dVar46 = *(double *)(lVar1 + 0x248);
    dVar59 = *(double *)(lVar1 + 0x250);
    dVar4 = *(double *)(lVar1 + 600);
    dVar29 = *(double *)(lVar1 + 0x250);
    dVar50 = *(double *)(lVar1 + 0x250);
    local_3a8 = local_168[1] * dVar29 * -1.0 +
                (double)local_158._0_8_ * dVar44 +
                (double)local_158._8_8_ * dVar30 * 1.0 + local_168[0] * dVar51;
    dStack_3a0 = local_168[0] * dVar50 * 1.0 +
                 (double)local_158._8_8_ * dVar46 +
                 (double)local_158._0_8_ * dVar20 * -1.0 + local_168[1] * dVar34;
    dVar42 = dVar42 * dVar38;
    dVar49 = dVar49 * dVar43;
    dVar37 = dVar37 * local_358;
    dVar39 = dStack_350 * 0.0;
    dVar33 = dVar49 * dVar52 - dVar42 * dVar58;
    dVar36 = dVar37 * dVar58 - dVar49 * dVar59;
    dVar53 = dVar42 * dVar59 - dVar37 * dVar52;
    dVar55 = dVar39 * dVar4 - dVar39 * dVar4;
    dVar36 = dVar36 + dVar36;
    dVar53 = dVar53 + dVar53;
    dVar33 = dVar33 + dVar33;
    dVar55 = dVar55 + dVar55;
    local_388 = (dVar33 * dVar58 - dVar59 * dVar53) + dVar51 * dVar36 + dVar42 +
                *(double *)(lVar1 + 0x260);
    dStack_380 = (dVar36 * dVar59 - dVar33 * dVar52) + dVar34 * dVar53 + dVar49 +
                 *(double *)(lVar1 + 0x268);
    local_378 = (dVar53 * dVar52 - dVar58 * dVar36) + dVar51 * dVar33 + dVar37 +
                *(double *)(lVar1 + 0x270);
    dStack_370 = (dVar55 * dVar4 - dVar55 * dVar4) + dVar34 * dVar55 + dVar39 +
                 *(double *)(lVar1 + 0x278);
    local_398._8_8_ =
         (double)local_158._0_8_ * dVar50 * -1.0 +
         ((dVar20 * local_168[0] * -1.0 + (double)local_158._8_8_ * dVar34) - local_168[1] * dVar46)
    ;
    local_398._0_8_ =
         (double)local_158._8_8_ * dVar29 * 1.0 +
         ((dVar30 * local_168[1] * 1.0 + (double)local_158._0_8_ * dVar51) - local_168[0] * dVar44);
  }
  else {
    dVar44 = *(double *)(lVar1 + 0x240);
    dVar46 = *(double *)(lVar1 + 0x248);
    dVar51 = *(double *)(lVar1 + 0x250);
    dVar30 = dVar44 + dVar44;
    dVar20 = dVar46 + dVar46;
    dVar29 = dVar51 + dVar51;
    dVar52 = dVar44 * dVar30;
    dVar59 = dVar46 * dVar20;
    local_418 = 1.0 - (dVar51 * dVar29 + dVar59);
    dStack_410 = 1.0 - (dVar51 * dVar29 + dVar52);
    dVar58 = *(double *)(lVar1 + 0x240) * dVar29;
    dVar51 = *(double *)(lVar1 + 600);
    dVar34 = *(double *)(lVar1 + 600);
    dVar50 = dVar29 * dVar51;
    dVar39 = dVar30 * dVar34;
    dVar51 = dVar20 * dVar51;
    local_428 = (1.0 - (dVar52 + dVar59)) * local_358;
    dStack_420 = (0.0 - (dVar52 + dVar59)) * dStack_350;
    local_438 = (dVar51 + dVar58) * local_358;
    dStack_430 = (dVar30 * dVar34 + *(double *)(lVar1 + 0x240) * dVar30) * dStack_350;
    local_1c8 = (dVar20 * dVar44 - dVar50) * dVar43;
    dStack_1a0 = (dVar29 * dVar46 - dVar39) * local_358;
    dVar34 = (double)local_448._0_8_ * dVar38;
    dVar30 = (double)local_448._8_8_ * dVar43;
    local_1e8 = local_418 * dVar38;
    dStack_1c0 = dStack_410 * dVar43;
    dStack_1e0 = (dVar20 * dVar44 + dVar50) * dVar38;
    local_1b8 = (dVar29 * dVar46 + dVar39) * dVar43;
    local_1d8 = (dVar58 - dVar51) * dVar38;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = *(double *)(lVar1 + 0x260);
    dStack_180 = *(double *)(lVar1 + 0x268);
    local_178 = *(double *)(lVar1 + 0x270);
    uStack_170 = 0x3ff0000000000000;
    dVar51 = local_168[1] + local_168[1];
    dVar44 = (double)local_158._0_8_ + (double)local_158._0_8_;
    dVar20 = local_168[0] * (local_168[0] + local_168[0]);
    local_218 = (1.0 - (dVar20 + local_168[1] * dVar51)) * dVar56;
    dVar46 = (local_168[0] + local_168[0]) * (double)local_158._8_8_;
    local_228 = (dVar51 * (double)local_158._8_8_ + local_168[0] * dVar44) * dVar56;
    local_248 = (dVar51 * local_168[0] - dVar44 * (double)local_158._8_8_) * (double)local_448._8_8_
    ;
    dStack_220 = (dVar44 * local_168[1] - dVar46) * dVar56;
    local_268 = (1.0 - ((double)local_158._0_8_ * dVar44 + local_168[1] * dVar51)) *
                (double)local_448._0_8_;
    dStack_240 = (1.0 - ((double)local_158._0_8_ * dVar44 + dVar20)) * (double)local_448._8_8_;
    dStack_260 = (dVar51 * local_168[0] + dVar44 * (double)local_158._8_8_) *
                 (double)local_448._0_8_;
    local_238 = (dVar44 * local_168[1] + dVar46) * (double)local_448._8_8_;
    local_258 = (local_168[0] * dVar44 - dVar51 * (double)local_158._8_8_) * (double)local_448._0_8_
    ;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_1f8._8_4_ = 0;
    local_1f8._0_8_ = dVar37;
    local_1f8._12_4_ = 0x3ff00000;
    local_208 = dVar42;
    dStack_200 = dVar49;
    local_1a8 = local_438;
    local_198 = local_428;
    FUN_1447fea8d(local_168);
    FUN_144a1c686(local_168,0x3e45798ee0000000);
    auVar31 = _DAT_149934d80;
    auVar24._8_8_ = -(ulonglong)(0.0 <= dVar30);
    auVar24._0_8_ = -(ulonglong)(0.0 <= dVar34);
    auVar47 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar24);
    uVar19 = -(ulonglong)(0.0 <= dVar56 * local_358);
    dVar37 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar42 = auVar47._0_8_;
    local_168[1] = local_168[1] * dVar42;
    local_168[0] = local_168[0] * dVar42;
    local_158._0_8_ = (double)local_158._0_8_ * dVar42;
    dVar42 = auVar47._8_8_;
    local_138 = local_138 * dVar42;
    dStack_140 = dStack_140 * dVar42;
    local_148 = dVar42 * local_148;
    local_118 = local_118 * dVar37;
    dStack_120 = dStack_120 * dVar37;
    local_128 = dVar37 * local_128;
    FUN_14481fd10(&local_408,local_168);
    dVar37 = local_3f8 * local_3f8 + local_408 * local_408;
    dVar42 = dStack_3f0 * dStack_3f0 + dStack_400 * dStack_400;
    auVar41._0_8_ = dVar37 + dVar42;
    auVar41._8_8_ = dVar37 + dVar42;
    auVar25._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_);
    auVar25._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_);
    auVar47 = sqrtpd(auVar41,auVar41);
    auVar31 = divpd(auVar31,auVar47);
    auVar45._0_8_ = auVar31._0_8_ * local_3f8;
    auVar45._8_8_ = auVar31._8_8_ * dStack_3f0;
    local_3a8 = (double)((ulonglong)(local_408 * auVar31._0_8_) &
                        -(ulonglong)(9.99999993922529e-09 <= auVar41._0_8_));
    dStack_3a0 = (double)((ulonglong)(dStack_400 * auVar31._8_8_) &
                         -(ulonglong)(9.99999993922529e-09 <= auVar41._8_8_));
    local_398 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar45,auVar25);
    local_388 = local_108;
    dStack_380 = dStack_100;
    local_378 = local_f8;
    dStack_370 = 0.0;
  }
  dStack_350 = dStack_350 * 0.0;
  local_358 = dVar56 * local_358;
  local_368._8_4_ = SUB84((double)uVar6 * dVar43,0);
  local_368._0_8_ = (double)uVar5 * dVar38;
  local_368._12_4_ = (int)((ulonglong)((double)uVar6 * dVar43) >> 0x20);
  puVar12 = local_348;
  uVar8 = FUN_1449437a2(puVar12,&local_408,&local_3a8);
  dVar56 = dStack_350;
  dVar51 = local_358;
  auVar47 = _DAT_149934d80;
  dVar37 = local_368._0_8_;
  dVar42 = local_368._8_8_;
  auVar31._8_8_ = dStack_350;
  auVar31._0_8_ = local_358;
  dVar38 = local_2a8._0_8_;
  dVar49 = local_2a8._8_8_;
  dVar43 = local_298._0_8_;
  auVar22 = minpd(local_2a8,local_368);
  auVar31 = minpd(local_298,auVar31);
  auVar23._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar23._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  iVar9 = movmskpd(uVar8,auVar23);
  auVar32._8_8_ = -(ulonglong)(auVar31._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar31._0_8_ < 0.0);
  uVar10 = movmskpd((int)puVar12,auVar32);
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar44 = local_2e8[1] * (double)local_398._0_8_ * -1.0 +
             local_2e8[2] * dStack_3a0 +
             local_2e8[3] * local_3a8 * 1.0 + local_2e8[0] * (double)local_398._8_8_;
    dVar46 = local_2e8[0] * (double)local_398._0_8_ * 1.0 +
             local_2e8[3] * dStack_3a0 +
             local_2e8[2] * local_3a8 * -1.0 + local_2e8[1] * (double)local_398._8_8_;
    auVar57._0_8_ =
         local_2e8[3] * (double)local_398._0_8_ * 1.0 +
         ((local_3a8 * local_2e8[1] * 1.0 + local_2e8[2] * (double)local_398._8_8_) -
         local_2e8[0] * dStack_3a0);
    auVar57._8_8_ =
         local_2e8[2] * (double)local_398._0_8_ * -1.0 +
         ((local_3a8 * local_2e8[0] * -1.0 + local_2e8[3] * (double)local_398._8_8_) -
         local_2e8[1] * dStack_3a0);
    local_2c8 = local_2c8 * dVar37;
    dStack_2c0 = dStack_2c0 * dVar42;
    local_2b8 = local_2b8 * local_358;
    dVar20 = dStack_2c0 * local_3a8 - dStack_3a0 * local_2c8;
    dVar29 = local_2b8 * dStack_3a0 - (double)local_398._0_8_ * dStack_2c0;
    dVar50 = local_2c8 * (double)local_398._0_8_ - local_3a8 * local_2b8;
    dVar29 = dVar29 + dVar29;
    dVar50 = dVar50 + dVar50;
    dVar20 = dVar20 + dVar20;
    uVar8 = 0;
    dVar34 = (dVar50 * local_3a8 - dStack_3a0 * dVar29) +
             (double)local_398._8_8_ * dVar20 + local_2b8 + local_378;
    dVar30 = (dVar20 * dStack_3a0 - (double)local_398._0_8_ * dVar50) +
             (double)local_398._8_8_ * dVar29 + local_2c8 + local_388;
    dVar20 = (dVar29 * (double)local_398._0_8_ - dVar20 * local_3a8) +
             (double)local_398._8_8_ * dVar50 + dStack_2c0 + dStack_380;
  }
  else {
    dVar30 = dStack_3a0 + dStack_3a0;
    dVar20 = (double)local_398._0_8_ + (double)local_398._0_8_;
    dVar46 = local_3a8 * (local_3a8 + local_3a8);
    local_198 = (1.0 - (dVar46 + dStack_3a0 * dVar30)) * local_358;
    dVar44 = (local_3a8 + local_3a8) * (double)local_398._8_8_;
    local_1a8 = (dVar30 * (double)local_398._8_8_ + local_3a8 * dVar20) * local_358;
    dVar34 = local_358 * dVar43;
    local_1c8 = (dVar30 * local_3a8 - dVar20 * (double)local_398._8_8_) * dVar42;
    dStack_1a0 = (dVar20 * dStack_3a0 - dVar44) * local_358;
    local_1e8 = ((double)DAT_149934d80 - ((double)local_398._0_8_ * dVar20 + dStack_3a0 * dVar30)) *
                dVar37;
    dStack_1c0 = (DAT_149934d80._8_8_ - ((double)local_398._0_8_ * dVar20 + dVar46)) * dVar42;
    dStack_1e0 = (dVar30 * local_3a8 + dVar20 * (double)local_398._8_8_) * dVar37;
    local_1b8 = (dVar20 * dStack_3a0 + dVar44) * dVar42;
    local_1d8 = (local_3a8 * dVar20 - dVar30 * (double)local_398._8_8_) * dVar37;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    local_188 = local_388;
    dStack_180 = dStack_380;
    local_178 = local_378;
    uStack_170 = 0x3ff0000000000000;
    dVar30 = local_2e8[1] + local_2e8[1];
    dVar20 = local_2e8[2] + local_2e8[2];
    dVar46 = local_2e8[0] * (local_2e8[0] + local_2e8[0]);
    local_218 = (1.0 - (dVar46 + local_2e8[1] * dVar30)) * dVar43;
    dVar44 = (local_2e8[0] + local_2e8[0]) * local_2e8[3];
    local_228 = (dVar30 * local_2e8[3] + local_2e8[0] * dVar20) * dVar43;
    local_248 = (dVar30 * local_2e8[0] - dVar20 * local_2e8[3]) * dVar49;
    dStack_220 = (dVar20 * local_2e8[1] - dVar44) * dVar43;
    local_268 = ((double)DAT_149934d80 - (local_2e8[2] * dVar20 + local_2e8[1] * dVar30)) * dVar38;
    dStack_240 = (DAT_149934d80._8_8_ - (local_2e8[2] * dVar20 + dVar46)) * dVar49;
    dStack_260 = (dVar30 * local_2e8[0] + dVar20 * local_2e8[3]) * dVar38;
    local_238 = (dVar20 * local_2e8[1] + dVar44) * dVar49;
    local_258 = (local_2e8[0] * dVar20 - dVar30 * local_2e8[3]) * dVar38;
    uStack_250 = 0;
    uStack_230 = 0;
    uStack_210 = 0;
    local_208 = local_2c8;
    dStack_200 = dStack_2c0;
    local_1f8._8_8_ = 0x3ff0000000000000;
    local_1f8._0_8_ = local_2b8;
    FUN_1447fea8d(local_168);
    FUN_144a1c686(local_168,0x3e45798ee0000000);
    auVar26._8_8_ = -(ulonglong)(0.0 <= dVar42 * dVar49);
    auVar26._0_8_ = -(ulonglong)(0.0 <= dVar37 * dVar38);
    auVar31 = blendvpd(_DAT_149936790,auVar47,auVar26);
    uVar19 = -(ulonglong)(0.0 <= dVar34);
    dVar34 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar30 = auVar31._0_8_;
    local_168[1] = local_168[1] * dVar30;
    local_168[0] = local_168[0] * dVar30;
    local_158._0_8_ = (double)local_158._0_8_ * dVar30;
    dVar30 = auVar31._8_8_;
    local_138 = local_138 * dVar30;
    dStack_140 = dStack_140 * dVar30;
    local_148 = dVar30 * local_148;
    local_118 = local_118 * dVar34;
    dStack_120 = dStack_120 * dVar34;
    local_128 = dVar34 * local_128;
    pdVar14 = &local_288;
    iVar9 = FUN_14481fd10(pdVar14,local_168);
    uVar8 = SUB84(pdVar14,0);
    dVar34 = local_278 * local_278 + local_288 * local_288;
    dVar30 = dStack_270 * dStack_270 + dStack_280 * dStack_280;
    auVar35._0_8_ = dVar34 + dVar30;
    auVar35._8_8_ = dVar34 + dVar30;
    auVar27._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_);
    auVar27._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_);
    auVar31 = sqrtpd(auVar35,auVar35);
    auVar31 = divpd(auVar47,auVar31);
    auVar54._0_8_ = auVar31._0_8_ * local_278;
    auVar54._8_8_ = auVar31._8_8_ * dStack_270;
    dVar44 = (double)((ulonglong)(local_288 * auVar31._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._0_8_));
    dVar46 = (double)((ulonglong)(dStack_280 * auVar31._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar35._8_8_));
    auVar57 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar54,auVar27);
    dVar34 = local_f8;
    dVar30 = local_108;
    dVar20 = dStack_100;
  }
  auVar31 = _DAT_149934d80;
  dVar49 = dVar49 * dVar42;
  dVar38 = dVar38 * dVar37;
  dVar56 = local_298._8_8_ * dVar56;
  dVar43 = dVar43 * dVar51;
  dVar37 = local_3c8._0_8_;
  dVar51 = local_3c8._8_8_;
  dVar42 = local_3b8._0_8_;
  auVar3._8_4_ = SUB84(dVar49,0);
  auVar3._0_8_ = dVar38;
  auVar3._12_4_ = (int)((ulonglong)dVar49 >> 0x20);
  auVar47 = minpd(local_3c8,auVar3);
  auVar2._8_4_ = SUB84(dVar56,0);
  auVar2._0_8_ = dVar43;
  auVar2._12_4_ = (int)((ulonglong)dVar56 >> 0x20);
  auVar22 = minpd(local_3b8,auVar2);
  auVar40._8_8_ = -(ulonglong)(auVar47._8_8_ < 0.0);
  auVar40._0_8_ = -(ulonglong)(auVar47._0_8_ < 0.0);
  iVar9 = movmskpd(iVar9,auVar40);
  auVar48._8_8_ = -(ulonglong)(auVar22._8_8_ < 0.0);
  auVar48._0_8_ = -(ulonglong)(auVar22._0_8_ < 0.0);
  uVar10 = movmskpd(uVar8,auVar48);
  dVar56 = auVar57._0_8_;
  dVar29 = auVar57._8_8_;
  if ((uVar10 & 0x3fffffff) == 0 && iVar9 == 0) {
    dVar38 = dVar38 * local_3e8;
    dVar49 = dVar49 * dStack_3e0;
    dVar43 = dVar43 * local_3d8;
    dVar37 = dVar49 * dVar44 - dVar46 * dVar38;
    dVar42 = dVar43 * dVar46 - dVar56 * dVar49;
    dVar51 = dVar38 * dVar56 - dVar44 * dVar43;
    dVar42 = dVar42 + dVar42;
    dVar51 = dVar51 + dVar51;
    dVar37 = dVar37 + dVar37;
    local_108 = dVar30 + (dVar37 * dVar46 - dVar56 * dVar51) + dVar29 * dVar42 + dVar38;
    dStack_100 = dVar20 + (dVar42 * dVar56 - dVar37 * dVar44) + dVar29 * dVar51 + dVar49;
    local_f8 = dVar34 + (dVar51 * dVar44 - dVar46 * dVar42) + dVar29 * dVar37 + dVar43;
  }
  else {
    dVar50 = dVar46 + dVar46;
    dVar39 = dVar56 + dVar56;
    dVar52 = dVar44 * (dVar44 + dVar44);
    local_1e8 = (1.0 - (dVar56 * dVar39 + dVar46 * dVar50)) * dVar38;
    dStack_1c0 = (1.0 - (dVar56 * dVar39 + dVar52)) * dVar49;
    dVar56 = (dVar44 + dVar44) * dVar29;
    local_1c8 = (dVar50 * dVar44 - dVar39 * dVar29) * dVar49;
    dStack_1a0 = (dVar39 * dVar46 - dVar56) * dVar43;
    local_1a8 = (dVar50 * dVar29 + dVar44 * dVar39) * dVar43;
    dStack_1e0 = (dVar50 * dVar44 + dVar39 * dVar29) * dVar38;
    local_1b8 = (dVar39 * dVar46 + dVar56) * dVar49;
    local_198 = (1.0 - (dVar52 + dVar46 * dVar50)) * dVar43;
    local_1d8 = (dVar44 * dVar39 - dVar50 * dVar29) * dVar38;
    uStack_1d0 = 0;
    uStack_1b0 = 0;
    uStack_190 = 0;
    uStack_170 = 0x3ff0000000000000;
    dVar56 = dStack_400 + dStack_400;
    dVar44 = local_3f8 + local_3f8;
    dVar29 = local_408 * (local_408 + local_408);
    dVar46 = (local_408 + local_408) * dStack_3f0;
    local_248 = (dVar56 * local_408 - dVar44 * dStack_3f0) * dVar51;
    dStack_220 = (dVar44 * dStack_400 - dVar46) * dVar42;
    local_268 = ((double)DAT_149934d80 - (local_3f8 * dVar44 + dStack_400 * dVar56)) * dVar37;
    dStack_240 = (DAT_149934d80._8_8_ - (local_3f8 * dVar44 + dVar29)) * dVar51;
    dStack_260 = (dVar56 * local_408 + dVar44 * dStack_3f0) * dVar37;
    local_238 = (dVar44 * dStack_400 + dVar46) * dVar51;
    local_228 = (dVar56 * dStack_3f0 + local_408 * dVar44) * dVar42;
    local_258 = (local_408 * dVar44 - dVar56 * dStack_3f0) * dVar37;
    uStack_250 = 0;
    uStack_230 = 0;
    local_218 = (1.0 - (dVar29 + dStack_400 * dVar56)) * dVar42;
    uStack_210 = 0;
    local_208 = local_3e8;
    dStack_200 = dStack_3e0;
    local_1f8._8_8_ = 0x3ff0000000000000;
    local_1f8._0_8_ = local_3d8;
    local_188 = dVar30;
    dStack_180 = dVar20;
    local_178 = dVar34;
    FUN_1447fea8d(local_168);
    FUN_144a1c686(local_168,0x3e45798ee0000000);
    auVar28._8_8_ = -(ulonglong)(0.0 <= dVar49 * dVar51);
    auVar28._0_8_ = -(ulonglong)(0.0 <= dVar38 * dVar37);
    auVar31 = blendvpd(_DAT_149936790,auVar31,auVar28);
    uVar19 = -(ulonglong)(0.0 <= dVar43 * dVar42);
    dVar37 = (double)(~uVar19 & 0xbff0000000000000 | uVar19 & 0x3ff0000000000000);
    dVar38 = auVar31._0_8_;
    local_168[1] = local_168[1] * dVar38;
    local_168[0] = local_168[0] * dVar38;
    local_158._0_8_ = (double)local_158._0_8_ * dVar38;
    dVar38 = auVar31._8_8_;
    local_138 = local_138 * dVar38;
    dStack_140 = dStack_140 * dVar38;
    local_148 = dVar38 * local_148;
    local_118 = local_118 * dVar37;
    dStack_120 = dStack_120 * dVar37;
    local_128 = dVar37 * local_128;
    FUN_14481fd10(&local_288,local_168);
  }
  dVar38 = local_2e8[1] * (double)local_398._0_8_ * -1.0 +
           local_2e8[2] * dStack_3a0 +
           local_3a8 * local_2e8[3] * 1.0 + (double)local_398._8_8_ * local_2e8[0];
  dVar43 = local_2e8[0] * (double)local_398._0_8_ * 1.0 +
           local_2e8[3] * dStack_3a0 +
           local_3a8 * local_2e8[2] * -1.0 + (double)local_398._8_8_ * local_2e8[1];
  dVar42 = local_2e8[3] * (double)local_398._0_8_ * 1.0 +
           ((local_3a8 * local_2e8[1] * 1.0 + (double)local_398._8_8_ * local_2e8[2]) -
           dStack_3a0 * local_2e8[0]);
  dVar49 = local_2e8[2] * (double)local_398._0_8_ * -1.0 +
           ((local_3a8 * local_2e8[0] * -1.0 + (double)local_398._8_8_ * local_2e8[3]) -
           dStack_3a0 * local_2e8[1]);
  dVar56 = (double)local_398._0_8_ * -1.0;
  dVar51 = (double)local_398._8_8_ * 1.0;
  dVar37 = dVar56 * dVar42 * -1.0 +
           dVar43 * dStack_3a0 + (dVar51 * dVar49 - dVar38 * local_3a8 * -1.0);
  local_168[0] = (dVar56 * dVar43 + (dVar51 * dVar38 * 1.0 - dVar49 * local_3a8)) -
                 dStack_3a0 * dVar42 * -1.0;
  local_168[1] = (dVar51 * dVar43 + (dVar56 * dVar38 * -1.0 - dVar49 * dStack_3a0)) -
                 local_3a8 * dVar42 * 1.0;
  local_158._8_4_ = SUB84(dVar37,0);
  local_158._0_8_ =
       dVar51 * dVar42 * 1.0 + dVar43 * local_3a8 + (dVar56 * dVar49 - dVar38 * dStack_3a0 * 1.0);
  local_158._12_4_ = (int)((ulonglong)dVar37 >> 0x20);
  local_148 = local_108 - local_328;
  dStack_140 = dStack_100 - dStack_320;
  local_138 = local_f8 - local_318;
  uStack_130 = 0;
  local_128 = 1.0;
  dStack_120 = 1.0;
  local_118 = 1.0;
  uStack_110 = 0;
  if ((*(int *)(param_1 + 0x1020) != 0) && (*(longlong **)(param_1 + 0x1018) != (longlong *)0x0)) {
    cVar7 = (**(code **)(**(longlong **)(param_1 + 0x1018) + 0x30))();
    if (cVar7 != '\0') {
      if (*(int *)(param_1 + 0x1020) == 0) {
        plVar16 = (longlong *)0x0;
      }
      else {
        plVar16 = *(longlong **)(param_1 + 0x1018);
      }
      local_458 = local_44c;
      (**(code **)(*plVar16 + 0x58))(plVar16,param_2,local_168,param_1);
      goto LAB_1409738f6;
    }
  }
  pdVar14 = local_168;
  pdVar18 = param_2;
  for (lVar13 = 0xc; lVar13 != 0; lVar13 = lVar13 + -1) {
    *pdVar18 = *pdVar14;
    pdVar14 = pdVar14 + 1;
    pdVar18 = pdVar18 + 1;
  }
LAB_1409738f6:
  if ((local_e0 ^ (ulonglong)auStack_478) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 14097451e FUN_14097451e body=351 status=ok
// SIG undefined FUN_14097451e(void)

undefined8 *
FUN_14097451e(longlong param_1,undefined8 *param_2,undefined8 *param_3,undefined4 param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_138 [32];
  undefined4 local_118;
  undefined8 local_108 [12];
  undefined8 local_a8 [13];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_138;
  if ((*(int *)(param_1 + 0x1010) == 0) || (*(longlong **)(param_1 + 0x1008) == (longlong *)0x0)) {
LAB_14097455d:
    puVar4 = local_a8;
    for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
      *puVar4 = *param_3;
      param_3 = param_3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  else {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1008) + 0x30))();
    if (cVar1 == '\0') goto LAB_14097455d;
    if (*(int *)(param_1 + 0x1010) == 0) {
      plVar3 = (longlong *)0x0;
    }
    else {
      plVar3 = *(longlong **)(param_1 + 0x1008);
    }
    local_118 = param_4;
    (**(code **)(*plVar3 + 0x58))(plVar3,local_a8,param_3,param_1);
  }
  FUN_14097467e(*(undefined8 *)(*(longlong *)(param_1 + 0x1f0) + 0x428),local_108,local_a8);
  if ((*(int *)(param_1 + 0x1020) != 0) && (*(longlong **)(param_1 + 0x1018) != (longlong *)0x0)) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 0x1018) + 0x30))();
    if (cVar1 != '\0') {
      if (*(int *)(param_1 + 0x1020) == 0) {
        plVar3 = (longlong *)0x0;
      }
      else {
        plVar3 = *(longlong **)(param_1 + 0x1018);
      }
      local_118 = param_4;
      (**(code **)(*plVar3 + 0x58))(plVar3,param_2,local_108,param_1);
      goto LAB_1409745ab;
    }
  }
  puVar4 = local_108;
  puVar5 = param_2;
  for (lVar2 = 0xc; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
LAB_1409745ab:
  if ((local_40 ^ (ulonglong)auStack_138) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097467e FUN_14097467e body=4869 status=ok
// SIG undefined FUN_14097467e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double * FUN_14097467e(longlong param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  undefined4 uVar6;
  int iVar7;
  double *pdVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  ulonglong uVar14;
  double dVar15;
  double dVar16;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  double dVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  double dVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  double dVar28;
  double dVar29;
  undefined1 auVar27 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar40;
  double dVar41;
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  double dVar48;
  double dVar49;
  double dVar50;
  double dVar51;
  double dVar52;
  undefined1 auVar53 [16];
  double dVar54;
  double dVar55;
  undefined1 auVar56 [16];
  undefined1 auStack_3a8 [32];
  double *local_388;
  undefined1 local_380;
  double local_370;
  undefined1 local_368 [16];
  double local_358;
  double dStack_350;
  undefined1 local_348 [16];
  double local_338;
  double dStack_330;
  double local_328;
  double dStack_320;
  double local_318;
  double dStack_310;
  double local_308;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined8 local_2d8 [4];
  double local_2b8;
  double dStack_2b0;
  double local_2a8;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  undefined8 uStack_240;
  double local_238;
  double dStack_230;
  double local_228;
  undefined8 uStack_220;
  double local_218;
  double dStack_210;
  double local_208;
  undefined8 uStack_200;
  double local_1f8;
  double dStack_1f0;
  double local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  double local_1c8;
  undefined8 uStack_1c0;
  double local_1b8;
  double dStack_1b0;
  double local_1a8;
  undefined8 uStack_1a0;
  double local_198;
  double dStack_190;
  double local_188;
  undefined8 uStack_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined8 uStack_160;
  double local_158;
  double dStack_150;
  double local_148;
  double dStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_118;
  double local_110;
  double local_108;
  double local_f8;
  double dStack_f0;
  double local_e8;
  ulonglong local_d0;
  
  local_d0 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  if ((*(byte *)(param_1 + 0x1f8) & 1) == 0) {
    auVar17 = *(undefined1 (*) [16])(param_1 + 0x1b0);
    dVar24 = auVar17._0_8_;
    dVar16 = auVar17._8_8_;
    dVar48 = *(double *)(param_1 + 0x1c0);
    pdVar8 = *(double **)(param_1 + 0x230);
    if (pdVar8 == (double *)0x0) {
      pdVar8 = (double *)FUN_14001cc68(0x40,0x10);
      dVar29 = DAT_14c8463d8;
      *pdVar8 = DAT_14c8463d0;
      pdVar8[1] = dVar29;
      dVar29 = DAT_14c8463e8;
      pdVar8[2] = DAT_14c8463e0;
      pdVar8[3] = dVar29;
      dVar29 = DAT_14c846500;
      pdVar8[4] = DAT_14c8464f8;
      pdVar8[5] = dVar29;
      pdVar8[6] = DAT_14c846508;
      *(double **)(param_1 + 0x230) = pdVar8;
    }
    auVar27 = _DAT_1499387d0;
    if ((((pdVar8[4] != dVar24) || (NAN(pdVar8[4]) || NAN(dVar24))) || (pdVar8[5] != dVar16)) ||
       (((NAN(pdVar8[5]) || NAN(dVar16) || (pdVar8[6] != dVar48)) || (NAN(pdVar8[6]) || NAN(dVar48))
        ))) {
      auVar37._8_8_ = 0;
      auVar37._0_8_ = dVar48;
      dVar29 = (double)DAT_1499387d0;
      dVar51 = DAT_1499387d0._8_8_;
      auVar17 = divpd(auVar17,_DAT_1499387d0);
      auVar25 = divpd(auVar37,_DAT_1499387d0);
      auVar17 = roundpd(auVar17,auVar17,3);
      auVar25 = roundpd(auVar25,auVar25,3);
      auVar46._0_8_ = dVar24 - auVar17._0_8_ * dVar29;
      auVar46._8_8_ = dVar16 - auVar17._8_8_ * dVar51;
      auVar38._0_8_ = dVar48 - auVar25._0_8_ * dVar29;
      auVar38._8_8_ = 0.0 - auVar25._8_8_ * dVar51;
      auVar44._0_8_ = auVar46._0_8_ + dVar29;
      auVar44._8_8_ = auVar46._8_8_ + dVar51;
      auVar33._0_8_ = auVar38._0_8_ + dVar29;
      auVar33._8_8_ = auVar38._8_8_ + dVar51;
      auVar17._8_8_ = -(ulonglong)(0.0 <= auVar46._8_8_);
      auVar17._0_8_ = -(ulonglong)(0.0 <= auVar46._0_8_);
      auVar45 = blendvpd(auVar44,auVar46,auVar17);
      auVar25._8_8_ = -(ulonglong)(0.0 <= auVar38._8_8_);
      auVar25._0_8_ = -(ulonglong)(0.0 <= auVar38._0_8_);
      auVar17 = blendvpd(auVar33,auVar38,auVar25);
      auVar39._0_8_ = auVar45._0_8_ + -360.0;
      auVar39._8_8_ = auVar45._8_8_ + -360.0;
      auVar43._0_8_ = auVar17._0_8_ + -360.0;
      auVar43._8_8_ = auVar17._8_8_ + 0.0;
      auVar22._8_8_ = -(ulonglong)(180.0 < auVar45._8_8_);
      auVar22._0_8_ = -(ulonglong)(180.0 < auVar45._0_8_);
      auVar25 = blendvpd(auVar45,auVar39,auVar22);
      auVar45._8_8_ = -(ulonglong)(180.0 < auVar17._8_8_);
      auVar45._0_8_ = -(ulonglong)(180.0 < auVar17._0_8_);
      auVar17 = blendvpd(auVar17,auVar43,auVar45);
      *(undefined1 (*) [16])(pdVar8 + 4) = auVar25;
      dVar48 = auVar17._0_8_;
      pdVar8[6] = dVar48;
      auVar47._8_8_ = 0;
      auVar47._0_8_ = dVar48;
      auVar17 = divpd(auVar25,auVar27);
      auVar27 = divpd(auVar47,auVar27);
      auVar17 = roundpd(auVar17,auVar17,3);
      auVar27 = roundpd(auVar27,auVar27,3);
      dVar54 = (auVar25._0_8_ - auVar17._0_8_ * dVar29) * 0.008726646259971648;
      dVar15 = (auVar25._8_8_ - auVar17._8_8_ * dVar51) * 0.008726646259971648;
      dVar55 = (dVar48 - auVar27._0_8_ * dVar29) * 0.008726646259971648;
      dVar52 = (0.0 - auVar27._8_8_ * dVar51) * 0.008726646259971648;
      dVar48 = sin(dVar54);
      dVar24 = sin(dVar15);
      dVar16 = sin(dVar55);
      sin(dVar52);
      dVar29 = cos(dVar54);
      dVar51 = cos(dVar15);
      dVar54 = cos(dVar55);
      cos(dVar52);
      *pdVar8 = dVar48 * dVar24 * dVar54 - dVar29 * dVar51 * dVar16;
      pdVar8[1] = -(dVar48 * dVar51 * dVar54) - dVar29 * dVar24 * dVar16;
      pdVar8[2] = -(dVar51 * dVar48 * dVar16) + dVar24 * dVar29 * dVar54;
      pdVar8[3] = dVar24 * dVar48 * dVar16 + dVar51 * dVar29 * dVar54;
    }
    local_158 = *pdVar8;
    dStack_150 = pdVar8[1];
    local_148 = pdVar8[2];
    dStack_140 = pdVar8[3];
    local_388 = &local_158;
    local_380 = 0;
    FUN_140092404(param_1,*(undefined8 *)(param_1 + 0x120),*(undefined8 *)(param_1 + 0x128),0);
  }
  lVar10 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + 0x1c8);
  puVar12 = &DAT_14c846480;
  if (lVar10 != 0) {
    puVar12 = (undefined8 *)(lVar10 + 0x240);
  }
  puVar11 = local_2d8;
  puVar13 = puVar11;
  for (lVar10 = 0xc; lVar10 != 0; lVar10 = lVar10 + -1) {
    *puVar13 = *puVar12;
    puVar12 = puVar12 + 1;
    puVar13 = puVar13 + 1;
  }
  uVar6 = FUN_1449437a2(puVar11,&local_338,param_1 + 0x240);
  auVar17 = *(undefined1 (*) [16])(param_1 + 0x280);
  dVar48 = auVar17._0_8_;
  dVar51 = auVar17._8_8_;
  auVar27 = *(undefined1 (*) [16])(param_1 + 0x290);
  dVar24 = auVar27._0_8_;
  auVar25 = *(undefined1 (*) [16])(param_3 + 8);
  dVar16 = auVar25._0_8_;
  dVar54 = auVar25._8_8_;
  auVar22 = *(undefined1 (*) [16])(param_3 + 10);
  dVar29 = auVar22._0_8_;
  auVar17 = minpd(auVar25,auVar17);
  auVar25 = minpd(auVar22,auVar27);
  auVar18._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
  auVar18._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
  iVar7 = movmskpd(uVar6,auVar18);
  auVar26._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar26._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  uVar9 = movmskpd((int)puVar11,auVar26);
  if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
    dVar49 = *param_3;
    dVar50 = param_3[1];
    dVar1 = param_3[2];
    dVar2 = param_3[3];
    dVar3 = *(double *)(param_1 + 0x240);
    dVar4 = *(double *)(param_1 + 0x248);
    dVar5 = *(double *)(param_1 + 0x250);
    dVar15 = *(double *)(param_1 + 600);
    dVar55 = *(double *)(param_1 + 600);
    dVar52 = *(double *)(param_1 + 0x240);
    dVar28 = *(double *)(param_1 + 0x240);
    dVar34 = *(double *)(param_1 + 0x248);
    dVar23 = *(double *)(param_1 + 0x248);
    dVar35 = *(double *)(param_1 + 0x250);
    dVar40 = *(double *)(param_1 + 0x250);
    dVar36 = dVar50 * dVar35 * -1.0 + dVar1 * dVar34 + dVar2 * dVar52 * 1.0 + dVar49 * dVar15;
    dVar41 = dVar49 * dVar40 * 1.0 + dVar2 * dVar23 + dVar1 * dVar28 * -1.0 + dVar50 * dVar55;
    auVar56._0_8_ =
         dVar2 * dVar35 * 1.0 + ((dVar52 * dVar50 * 1.0 + dVar1 * dVar15) - dVar49 * dVar34);
    auVar56._8_8_ =
         dVar1 * dVar40 * -1.0 + ((dVar28 * dVar49 * -1.0 + dVar2 * dVar55) - dVar50 * dVar23);
    dVar52 = param_3[4] * dVar48;
    dVar35 = param_3[5] * dVar51;
    dVar40 = param_3[6] * dVar24;
    dVar28 = dVar35 * dVar3 - dVar4 * dVar52;
    dVar23 = dVar40 * dVar4 - dVar5 * dVar35;
    dVar34 = dVar52 * dVar5 - dVar3 * dVar40;
    dVar23 = dVar23 + dVar23;
    dVar34 = dVar34 + dVar34;
    dVar28 = dVar28 + dVar28;
    dVar52 = (dVar28 * dVar4 - dVar5 * dVar34) + dVar15 * dVar23 + dVar52 +
             *(double *)(param_1 + 0x260);
    dVar55 = (dVar23 * dVar5 - dVar28 * dVar3) + dVar55 * dVar34 + dVar35 +
             *(double *)(param_1 + 0x268);
    dVar15 = (dVar34 * dVar3 - dVar4 * dVar23) + dVar15 * dVar28 + dVar40 +
             *(double *)(param_1 + 0x270);
    auVar53._8_8_ = dVar54 * dVar51;
    auVar53._0_8_ = dVar16 * dVar48;
    auVar27._8_8_ = auVar22._8_8_ * auVar27._8_8_;
    auVar27._0_8_ = dVar29 * dVar24;
    uVar6 = 0;
  }
  else {
    dVar55 = *(double *)(param_1 + 0x240);
    dVar52 = *(double *)(param_1 + 0x248);
    dVar28 = *(double *)(param_1 + 0x250);
    dVar23 = dVar52 + dVar52;
    dVar34 = dVar28 + dVar28;
    dVar49 = dVar55 * (dVar55 + dVar55);
    local_188 = (1.0 - (dVar49 + dVar52 * dVar23)) * dVar24;
    dVar50 = *(double *)(param_1 + 0x240) * dVar34;
    dVar15 = *(double *)(param_1 + 600);
    dVar35 = dVar34 * dVar15;
    dVar40 = (dVar55 + dVar55) * *(double *)(param_1 + 600);
    dVar15 = dVar23 * dVar15;
    local_198 = (dVar15 + dVar50) * dVar24;
    local_348._8_8_ = auVar27._8_8_ * auVar22._8_8_;
    local_348._0_8_ = dVar24 * dVar29;
    local_1d8 = (1.0 - (dVar28 * dVar34 + dVar52 * dVar23)) * dVar48;
    dStack_1b0 = (1.0 - (dVar28 * dVar34 + dVar49)) * dVar51;
    dStack_1d0 = (dVar23 * dVar55 + dVar35) * dVar48;
    local_1a8 = (dVar34 * dVar52 + dVar40) * dVar51;
    local_1b8 = (dVar23 * dVar55 - dVar35) * dVar51;
    dStack_190 = (dVar34 * dVar52 - dVar40) * dVar24;
    local_1c8 = (dVar50 - dVar15) * dVar48;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    local_178 = *(double *)(param_1 + 0x260);
    dStack_170 = *(double *)(param_1 + 0x268);
    local_168 = *(double *)(param_1 + 0x270);
    uStack_160 = 0x3ff0000000000000;
    dVar15 = *param_3;
    dVar55 = param_3[1];
    dVar52 = param_3[2];
    dVar28 = dVar55 + dVar55;
    dVar23 = dVar52 + dVar52;
    dVar40 = dVar15 * (dVar15 + dVar15);
    local_208 = (1.0 - (dVar40 + dVar55 * dVar28)) * dVar29;
    dVar24 = param_3[3];
    dVar34 = dVar23 * dVar24;
    dVar35 = (dVar15 + dVar15) * param_3[3];
    dVar24 = dVar28 * dVar24;
    local_218 = (dVar24 + *param_3 * dVar23) * dVar29;
    local_238 = (dVar28 * dVar15 - dVar34) * dVar54;
    dStack_210 = (dVar23 * dVar55 - dVar35) * dVar29;
    local_358 = dVar48 * dVar16;
    dStack_350 = dVar51 * dVar54;
    local_258 = (1.0 - (dVar52 * dVar23 + dVar55 * dVar28)) * dVar16;
    dStack_230 = (1.0 - (dVar52 * dVar23 + dVar40)) * dVar54;
    dStack_250 = (dVar28 * dVar15 + dVar34) * dVar16;
    local_228 = (dVar23 * dVar55 + dVar35) * dVar54;
    local_248 = (*param_3 * dVar23 - dVar24) * dVar16;
    uStack_240 = 0;
    uStack_220 = 0;
    uStack_200 = 0;
    local_1f8 = param_3[4];
    dStack_1f0 = param_3[5];
    local_1e8 = param_3[6];
    uStack_1e0 = 0x3ff0000000000000;
    FUN_1447fea8d(&local_158);
    auVar27 = local_348;
    auVar17 = _DAT_149934d80;
    dVar48 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
    local_370 = local_128;
    dVar24 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    dVar16 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar14 = -(ulonglong)(0.0 <= dVar48 + -9.99999993922529e-09);
    dVar48 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar48)) & uVar14);
    uVar14 = -(ulonglong)(0.0 <= dVar24 + -9.99999993922529e-09);
    dVar24 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar24)) & uVar14);
    uVar14 = -(ulonglong)(0.0 <= dVar16 + -9.99999993922529e-09);
    dVar16 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar16)) & uVar14);
    local_368._0_8_ = local_138 * dVar24;
    auVar53._8_8_ = dStack_350;
    auVar53._0_8_ = local_358;
    auVar19._8_8_ = -(ulonglong)(0.0 <= dStack_350);
    auVar19._0_8_ = -(ulonglong)(0.0 <= local_358);
    auVar25 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar19);
    uVar14 = -(ulonglong)(0.0 <= local_348._0_8_);
    dVar29 = (double)(~uVar14 & 0xbff0000000000000 | uVar14 & 0x3ff0000000000000);
    dVar51 = auVar25._0_8_;
    local_158 = local_158 * dVar48 * dVar51;
    dStack_150 = dStack_150 * dVar48 * dVar51;
    local_148 = dVar48 * local_148 * dVar51;
    dVar48 = auVar25._8_8_;
    local_128 = dVar24 * local_128 * dVar48;
    local_130 = local_130 * dVar24 * dVar48;
    local_138 = dVar48 * local_138 * dVar24;
    local_108 = dVar16 * local_108 * dVar29;
    local_110 = local_110 * dVar16 * dVar29;
    local_118 = dVar29 * local_118 * dVar16;
    pdVar8 = &local_278;
    iVar7 = FUN_14481fd10(pdVar8,&local_158);
    uVar6 = SUB84(pdVar8,0);
    dVar48 = local_268 * local_268 + local_278 * local_278;
    dVar24 = dStack_260 * dStack_260 + dStack_270 * dStack_270;
    auVar30._0_8_ = dVar48 + dVar24;
    auVar30._8_8_ = dVar48 + dVar24;
    auVar20._8_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_);
    auVar20._0_8_ = -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_);
    auVar25 = sqrtpd(auVar30,auVar30);
    auVar17 = divpd(auVar17,auVar25);
    auVar31._0_8_ = auVar17._0_8_ * local_268;
    auVar31._8_8_ = auVar17._8_8_ * dStack_260;
    dVar36 = (double)((ulonglong)(local_278 * auVar17._0_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._0_8_));
    dVar41 = (double)((ulonglong)(dStack_270 * auVar17._8_8_) &
                     -(ulonglong)(9.99999993922529e-09 <= auVar30._8_8_));
    auVar56 = blendvpd(ZEXT816(0x3ff0000000000000) << 0x40,auVar31,auVar20);
    dVar15 = local_e8;
    dVar52 = local_f8;
    dVar55 = dStack_f0;
  }
  dVar48 = local_2f8._0_8_;
  dVar16 = local_2f8._8_8_;
  dVar24 = local_2e8._0_8_;
  auVar17 = minpd(local_2f8,auVar53);
  auVar25 = minpd(local_2e8,auVar27);
  auVar32._8_8_ = -(ulonglong)(auVar17._8_8_ < 0.0);
  auVar32._0_8_ = -(ulonglong)(auVar17._0_8_ < 0.0);
  iVar7 = movmskpd(iVar7,auVar32);
  auVar42._8_8_ = -(ulonglong)(auVar25._8_8_ < 0.0);
  auVar42._0_8_ = -(ulonglong)(auVar25._0_8_ < 0.0);
  uVar9 = movmskpd(uVar6,auVar42);
  dVar28 = auVar56._0_8_;
  dVar23 = auVar56._8_8_;
  dVar51 = auVar53._0_8_;
  dVar54 = auVar53._8_8_;
  dVar29 = auVar27._0_8_;
  if ((uVar9 & 0x3fffffff) == 0 && iVar7 == 0) {
    dVar51 = dVar51 * local_318;
    dVar54 = dVar54 * dStack_310;
    dVar29 = dVar29 * local_308;
    dVar48 = dVar54 * dVar36 - dVar41 * dVar51;
    dVar24 = dVar29 * dVar41 - dVar28 * dVar54;
    dVar16 = dVar51 * dVar28 - dVar36 * dVar29;
    dVar24 = dVar24 + dVar24;
    dVar16 = dVar16 + dVar16;
    dVar48 = dVar48 + dVar48;
    local_f8 = dVar52 + (dVar48 * dVar41 - dVar28 * dVar16) + dVar23 * dVar24 + dVar51;
    dStack_f0 = dVar55 + (dVar24 * dVar28 - dVar48 * dVar36) + dVar23 * dVar16 + dVar54;
    local_e8 = dVar15 + (dVar16 * dVar36 - dVar41 * dVar24) + dVar23 * dVar48 + dVar29;
  }
  else {
    dVar40 = dVar41 + dVar41;
    dVar35 = dVar28 + dVar28;
    dVar34 = dVar36 * (dVar36 + dVar36);
    local_1d8 = (1.0 - (dVar28 * dVar35 + dVar41 * dVar40)) * dVar51;
    dStack_1b0 = (1.0 - (dVar28 * dVar35 + dVar34)) * dVar54;
    dVar28 = (dVar36 + dVar36) * dVar23;
    local_1b8 = (dVar40 * dVar36 - dVar35 * dVar23) * dVar54;
    dStack_190 = (dVar35 * dVar41 - dVar28) * dVar29;
    local_198 = (dVar40 * dVar23 + dVar36 * dVar35) * dVar29;
    dStack_1d0 = (dVar40 * dVar36 + dVar35 * dVar23) * dVar51;
    local_1a8 = (dVar35 * dVar41 + dVar28) * dVar54;
    local_188 = (1.0 - (dVar34 + dVar41 * dVar40)) * dVar29;
    local_1c8 = (dVar36 * dVar35 - dVar40 * dVar23) * dVar51;
    uStack_1c0 = 0;
    uStack_1a0 = 0;
    uStack_180 = 0;
    uStack_160 = 0x3ff0000000000000;
    dVar29 = dStack_330 + dStack_330;
    dVar28 = local_328 + local_328;
    dVar34 = local_338 * (local_338 + local_338);
    dVar23 = (local_338 + local_338) * dStack_320;
    local_238 = (dVar29 * local_338 - dVar28 * dStack_320) * dVar16;
    dStack_210 = (dVar28 * dStack_330 - dVar23) * dVar24;
    local_258 = (1.0 - (local_328 * dVar28 + dStack_330 * dVar29)) * dVar48;
    dStack_230 = (1.0 - (local_328 * dVar28 + dVar34)) * dVar16;
    dStack_250 = (dVar29 * local_338 + dVar28 * dStack_320) * dVar48;
    local_228 = (dVar28 * dStack_330 + dVar23) * dVar16;
    local_218 = (dVar29 * dStack_320 + local_338 * dVar28) * dVar24;
    local_248 = (local_338 * dVar28 - dVar29 * dStack_320) * dVar48;
    uStack_240 = 0;
    uStack_220 = 0;
    local_208 = (1.0 - (dVar34 + dStack_330 * dVar29)) * dVar24;
    uStack_200 = 0;
    local_1f8 = local_318;
    dStack_1f0 = dStack_310;
    local_1e8 = local_308;
    uStack_1e0 = 0x3ff0000000000000;
    local_348 = auVar27;
    local_178 = dVar52;
    dStack_170 = dVar55;
    local_168 = dVar15;
    FUN_1447fea8d(&local_158);
    local_358 = local_148;
    dVar55 = local_148 * local_148 + local_158 * local_158 + dStack_150 * dStack_150;
    local_370 = local_138;
    local_368 = local_2e8;
    dVar15 = local_128 * local_128 + local_138 * local_138 + local_130 * local_130;
    auVar21._8_8_ = -(ulonglong)(0.0 <= dVar54 * dVar16);
    auVar21._0_8_ = -(ulonglong)(0.0 <= dVar51 * dVar48);
    auVar17 = blendvpd(_DAT_149936790,_DAT_149934d80,auVar21);
    dVar29 = local_108 * local_108 + local_118 * local_118 + local_110 * local_110;
    uVar14 = -(ulonglong)(0.0 <= dVar55 + -9.99999993922529e-09);
    dVar48 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar55)) & uVar14);
    uVar14 = -(ulonglong)(0.0 <= dVar15 + -9.99999993922529e-09);
    dVar16 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar15)) & uVar14);
    uVar14 = -(ulonglong)(0.0 <= dVar29 + -9.99999993922529e-09);
    dVar29 = (double)(~uVar14 & 0x3ff0000000000000 | (ulonglong)(1.0 / SQRT(dVar29)) & uVar14);
    uVar14 = -(ulonglong)(0.0 <= (double)local_348._0_8_ * dVar24);
    dVar51 = (double)(~uVar14 & 0xbff0000000000000 |
                     (ulonglong)((uint)(uVar14 >> 0x20) & 0x3ff00000) << 0x20);
    dVar24 = auVar17._0_8_;
    local_158 = local_158 * dVar48 * dVar24;
    dStack_150 = dStack_150 * dVar48 * dVar24;
    local_148 = dVar48 * local_148 * dVar24;
    dVar48 = auVar17._8_8_;
    local_128 = dVar16 * local_128 * dVar48;
    local_130 = local_130 * dVar16 * dVar48;
    local_138 = dVar48 * local_138 * dVar16;
    local_108 = dVar29 * local_108 * dVar51;
    local_110 = local_110 * dVar29 * dVar51;
    local_118 = dVar51 * local_118 * dVar29;
    FUN_14481fd10(&local_278,&local_158);
  }
  dVar52 = *(double *)(param_1 + 0x240);
  dVar28 = *(double *)(param_1 + 0x248);
  dVar23 = *param_3;
  dVar34 = param_3[1];
  dVar35 = param_3[2];
  dVar40 = param_3[3];
  dVar48 = *(double *)(param_1 + 600);
  dVar24 = *(double *)(param_1 + 600);
  dVar16 = *(double *)(param_1 + 0x248);
  dVar29 = *(double *)(param_1 + 0x248);
  dVar54 = *(double *)(param_1 + 0x240);
  dVar51 = *(double *)(param_1 + 0x240);
  dVar55 = *(double *)(param_1 + 0x250);
  dVar15 = *(double *)(param_1 + 0x250);
  dVar49 = dVar34 * dVar55 * -1.0 + dVar35 * dVar16 + dVar54 * dVar40 * 1.0 + dVar48 * dVar23;
  dVar50 = dVar23 * dVar15 * 1.0 + dVar40 * dVar29 + dVar51 * dVar35 * -1.0 + dVar24 * dVar34;
  dVar48 = dVar40 * dVar55 * 1.0 + ((dVar54 * dVar34 * 1.0 + dVar48 * dVar35) - dVar16 * dVar23);
  dVar24 = dVar35 * dVar15 * -1.0 + ((dVar51 * dVar23 * -1.0 + dVar24 * dVar40) - dVar29 * dVar34);
  dVar16 = *(double *)(param_1 + 0x250) * -1.0;
  dVar29 = *(double *)(param_1 + 600) * 1.0;
  *param_2 = (dVar16 * dVar50 + (dVar29 * dVar49 * 1.0 - dVar24 * dVar52)) - dVar28 * dVar48 * -1.0;
  param_2[1] = (dVar29 * dVar50 + (dVar16 * dVar49 * -1.0 - dVar24 * dVar28)) -
               dVar52 * dVar48 * 1.0;
  param_2[2] = dVar29 * dVar48 * 1.0 + dVar50 * dVar52 + (dVar16 * dVar24 - dVar49 * dVar28 * 1.0);
  param_2[3] = dVar16 * dVar48 * -1.0 + dVar50 * dVar28 + (dVar29 * dVar24 - dVar49 * dVar52 * -1.0)
  ;
  param_2[4] = local_f8 - local_2b8;
  param_2[5] = dStack_f0 - dStack_2b0;
  param_2[6] = local_e8 - local_2a8;
  param_2[7] = 0.0;
  param_2[8] = 1.0;
  param_2[9] = 1.0;
  param_2[10] = 1.0;
  param_2[0xb] = 0.0;
  if ((local_d0 ^ (ulonglong)auStack_3a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140975992 FUN_140975992 body=156 status=ok
// SIG undefined FUN_140975992(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_140975992(undefined8 *param_1,int param_2)

{
  longlong *plVar1;
  
  *param_1 = &PTR_FUN_14b7b8290;
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140975a2e FUN_140975a2e body=48 status=ok
// SIG undefined FUN_140975a2e(void)

void FUN_140975a2e(undefined8 param_1,longlong *param_2)

{
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b978fb8);
  FUN_140975a5e(param_1,param_2);
  return;
}



// FUNCTION 140975a5e FUN_140975a5e body=285 status=ok
// SIG undefined FUN_140975a5e(void)

void FUN_140975a5e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b95d150);
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_14b3e8688);
  FUN_1402d084a(param_1,param_2);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    local_38 = 0xf65e1ed4;
    uStack_34 = 0x59354eca;
    uStack_30 = 0xb9c0d022;
    uStack_2c = 0x7e98beb2;
    iVar2 = FUN_1448a256a(param_1);
    if (iVar2 < 1) {
      plVar3 = (longlong *)FUN_1458ecef4(param_1);
      if (plVar3 != (longlong *)0x0) {
        lVar4 = FUN_14001cc68(0x120,0x10);
        FUN_14126e142(lVar4);
        lVar1 = *(longlong *)(param_1 + 0x2458);
        *(longlong *)(param_1 + 0x2458) = lVar4;
        if (lVar1 != 0) {
          FUN_14129d1b2(lVar1);
          FUN_1400020a8(lVar1);
          lVar4 = *(longlong *)(param_1 + 0x2458);
        }
        if (lVar4 != 0) {
          FUN_145816fcc(lVar4,plVar3 + 0x22);
        }
        FUN_144757f48(plVar3,0x40);
        (**(code **)(*plVar3 + 0x420))(plVar3,0);
      }
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140975b7c FUN_140975b7c body=585 status=ok
// SIG undefined FUN_140975b7c(void)

bool FUN_140975b7c(undefined8 param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  bool bVar14;
  
  if (DAT_14ca80440 == 0) {
    uVar13 = 1;
    uVar4 = 0;
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    puVar9 = &DAT_14ca80428;
    if (DAT_14ca80438 != (uint *)0x0) {
      puVar9 = DAT_14ca80438;
    }
    uVar12 = *puVar9;
    if (uVar12 == 0) {
      iVar6 = DAT_14ca80440 + 0x1e;
      if (-1 < DAT_14ca80440 + -1) {
        iVar6 = DAT_14ca80440 + -1;
      }
      uVar4 = 0;
      uVar13 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar13 = uVar4;
      }
      iVar5 = 0;
      do {
        if (uVar13 == uVar4) {
          return false;
        }
        iVar5 = iVar5 + 0x20;
        uVar12 = puVar9[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar4 = 0;
      iVar5 = 0;
    }
    uVar13 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar13 * 2 + 1;
    lVar3 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
      }
    }
    iVar6 = (iVar5 - ((uint)lVar3 ^ 0x3f)) + 0x3e;
    if (DAT_14ca80440 <= iVar6) {
      iVar6 = DAT_14ca80440;
    }
  }
  if (DAT_14ca80440 <= iVar6) {
    return false;
  }
  uVar12 = 0xffffffff;
  do {
    lVar3 = *(longlong *)(DAT_14ca80418 + 0x10 + (longlong)iVar6 * 0x20);
    uVar2 = FUN_140975dc5(param_1);
    if (*(int *)(lVar3 + 0x38) != *(int *)(lVar3 + 100)) {
      lVar11 = lVar3 + 0x68;
      if (*(longlong *)(lVar3 + 0x70) != 0) {
        lVar11 = *(longlong *)(lVar3 + 0x70);
      }
      iVar6 = *(int *)(lVar11 + (ulonglong)(*(int *)(lVar3 + 0x78) - 1U & uVar2) * 4);
      if (iVar6 != -1) {
        do {
          lVar11 = *(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 0xc0;
          if (*(uint *)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar6 * 0xc0) == uVar2)
          goto LAB_140975ca8;
          iVar6 = *(int *)(lVar11 + 0xb8);
        } while (iVar6 != -1);
      }
    }
    lVar11 = 0;
LAB_140975ca8:
    lVar3 = lVar11 + 8;
    if (lVar11 == 0) {
      lVar3 = 0;
    }
    bVar14 = lVar3 != 0;
    if ((param_2 != (undefined8 *)0x0) && (lVar3 != 0)) {
      *param_2 = *(undefined8 *)(lVar3 + 0x98);
      *(undefined2 *)((longlong)param_2 + 0xc) = *(undefined2 *)(lVar3 + 0xa8);
    }
    uVar12 = uVar12 & ~(uint)uVar13;
    puVar9 = DAT_14ca80438;
    if (DAT_14ca80438 == (uint *)0x0) {
      puVar9 = &DAT_14ca80428;
    }
    iVar6 = (int)uVar4;
    lVar11 = (longlong)iVar6;
    uVar2 = puVar9[lVar11] & uVar12;
    if (uVar2 == 0) {
      iVar7 = DAT_14ca80440 + 0x1e;
      if (-1 < DAT_14ca80440 + -1) {
        iVar7 = DAT_14ca80440 + -1;
      }
      iVar7 = iVar7 >> 5;
      iVar8 = iVar7;
      if (iVar7 < iVar6) {
        iVar8 = iVar6;
      }
      if (iVar7 <= iVar6) {
        return bVar14;
      }
      lVar10 = 0;
      while( true ) {
        iVar5 = iVar5 + 0x20;
        uVar2 = puVar9[lVar11 + lVar10 + 1];
        if (uVar2 != 0) break;
        lVar10 = lVar10 + 1;
        if (iVar8 - lVar11 == lVar10) {
          return bVar14;
        }
      }
      uVar4 = (ulonglong)(iVar6 + (int)lVar10 + 1);
      uVar12 = 0xffffffff;
    }
    uVar13 = (ulonglong)(-uVar2 & uVar2);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar7 = (iVar5 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    iVar6 = DAT_14ca80440;
    if (iVar7 < DAT_14ca80440) {
      iVar6 = iVar7;
    }
    if (lVar3 != 0) {
      return bVar14;
    }
    if (DAT_14ca80440 <= iVar7) {
      return false;
    }
  } while( true );
}



// FUNCTION 140975dc5 FUN_140975dc5 body=1191 status=ok
// SIG undefined FUN_140975dc5(void)

ulonglong FUN_140975dc5(uint *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  
  uVar1 = *param_1;
  uVar3 = (ulonglong)uVar1;
  if (uVar1 == 0) {
    uVar3 = (ulonglong)param_1[1];
  }
  else {
    if (uVar1 == 1) {
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x6c,4,1);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x6d,4,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x73,4,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 6,0x14,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0xb,0x14,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x10,0x14,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x15,0x14,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x1a,0x14,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x6e,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x70,8,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x72,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x1c9,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x1ca,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x1cb,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x51,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x145,1,uVar2);
      lVar4 = 0;
      do {
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x10c,1,uVar2);
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x10d,1,uVar2);
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x10e,1,uVar2);
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x112,1,uVar2);
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x10f,1,uVar2);
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x110,1,uVar2);
        uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + lVar4 + 0x111,1,uVar2);
        lVar4 = lVar4 + 7;
      } while (lVar4 != 0x38);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x162,8,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x5c,0x40,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x74,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x1d1,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x1d2,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x1d3,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x75,1,uVar2);
      if ((longlong)(int)param_1[0x41] != 0) {
        lVar4 = (longlong)(int)param_1[0x41] << 3;
        puVar5 = param_1 + 0x1f;
        do {
          uVar2 = (*(code *)PTR_FUN_14c75b148)(puVar5,8,uVar2);
          puVar5 = puVar5 + 2;
          lVar4 = lVar4 + -8;
        } while (lVar4 != 0);
      }
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x52,4,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x53,4,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x54,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x151,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x153,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x55,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x155,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x156,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x157,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x56,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x159,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x15a,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x15b,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x57,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x15d,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x15e,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x15f,1,uVar2);
      uVar2 = (*(code *)PTR_FUN_14c75b148)(param_1 + 0x58,1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00014097624b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*(code *)PTR_FUN_14c75b148)((longlong)param_1 + 0x161,1,uVar2,PTR_FUN_14c75b148);
      return uVar3;
    }
    if (uVar1 == 2) {
      uVar3 = (ulonglong)((uint)(byte)param_1[0x7c] ^ param_1[0x76] ^ 2);
    }
  }
  return uVar3;
}



// FUNCTION 14097626c FUN_14097626c body=569 status=ok
// SIG undefined FUN_14097626c(void)

void FUN_14097626c(undefined8 param_1,longlong *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined1 *local_88 [2];
  undefined8 local_78;
  undefined **local_68;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_78 = 0;
  local_68 = &PTR_LAB_14b967640;
  local_88[0] = &LAB_144112b38;
  uVar2 = FUN_1409764a6(param_1,param_3,local_88);
  uVar1 = FUN_1406820ce();
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 8))(param_2,uVar1,5,uVar2);
  local_78 = 0;
  local_68 = &PTR_LAB_14b967660;
  local_88[0] = &LAB_144112b90;
  uVar2 = FUN_1409764a6(param_1,param_3,local_88);
  uVar1 = FUN_1406821b4();
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 8))(param_2,uVar1,5,uVar2);
  local_78 = 0;
  local_68 = &PTR_LAB_14b967680;
  local_88[0] = &LAB_144112be8;
  uVar2 = FUN_1409764a6(param_1,param_3,local_88);
  uVar1 = FUN_14068229a();
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 8))(param_2,uVar1,5,uVar2);
  local_78 = 0;
  local_68 = &PTR_LAB_14b9676a0;
  local_88[0] = &LAB_144112c40;
  uVar2 = FUN_1409764a6(param_1,param_3,local_88);
  uVar1 = FUN_140682380();
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 8))(param_2,uVar1,5,uVar2);
  local_78 = 0;
  local_68 = &PTR_LAB_14b9676c0;
  local_88[0] = &LAB_144112c98;
  uVar2 = FUN_1409764a6(param_1,param_3,local_88);
  uVar1 = FUN_1409178de();
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 8))(param_2,uVar1,5,uVar2);
  local_78 = 0;
  local_68 = &PTR_LAB_14b9676e0;
  local_88[0] = &LAB_144112cf0;
  uVar2 = FUN_1409764a6(param_1,param_3,local_88);
  uVar1 = FUN_1409177f8();
  local_90 = 0;
  local_98 = 0;
  (**(code **)(*param_2 + 8))(param_2,uVar1,5,uVar2);
  if ((local_40 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409764a6 FUN_1409764a6 body=300 status=ok
// SIG undefined FUN_1409764a6(void)

float FUN_1409764a6(int *param_1,byte param_2,longlong *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  longlong *plVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_78 [32];
  longlong local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_2 == 0) {
    fVar5 = 1.0;
  }
  else {
    iVar1 = param_1[param_2];
    if (((longlong)iVar1 < 0) || (param_1[8] <= iVar1)) {
      local_58 = 0;
    }
    else {
      local_58 = (longlong)iVar1 * 0x54 + *(longlong *)(param_1 + 6);
    }
    pcVar2 = (code *)*param_3;
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))();
    fVar5 = (float)(*pcVar2)(uVar3,&local_58);
  }
  iVar1 = *param_1;
  if (((longlong)iVar1 < 0) || (param_1[8] <= iVar1)) {
    local_58 = 0;
  }
  else {
    local_58 = (longlong)iVar1 * 0x54 + *(longlong *)(param_1 + 6);
  }
  pcVar2 = (code *)*param_3;
  plVar4 = (longlong *)param_3[2];
  if ((longlong *)param_3[2] == (longlong *)0x0) {
    plVar4 = param_3 + 4;
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  fVar6 = (float)(*pcVar2)(uVar3,&local_58);
  if (*param_3 != 0) {
    plVar4 = param_3 + 4;
    if ((longlong *)param_3[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_3[2];
    }
    (**(code **)(*plVar4 + 0x10))(plVar4);
  }
  if ((local_50 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return fVar5 * fVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409765d4 FUN_1409765d4 body=26 status=ok
// SIG undefined FUN_1409765d4(void)

void FUN_1409765d4(undefined8 param_1)

{
  FUN_14097663c();
  FUN_1409765ee(param_1);
  return;
}



// FUNCTION 1409765ee FUN_1409765ee body=78 status=ok
// SIG undefined FUN_1409765ee(void)

void FUN_1409765ee(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  if (*(char *)(param_1 + 0x41) != '\0') {
    return;
  }
  lVar1 = *(longlong *)(param_1 + 0x20);
  if (lVar1 != 0) {
    lVar2 = FUN_14063d1f6();
    lVar1 = *(longlong *)(lVar1 + 0x10);
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(lVar1 + 0x38)) &&
       (uVar3 = 1,
       *(longlong *)(*(longlong *)(lVar1 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) ==
       lVar2 + 0x30)) goto LAB_14097662f;
  }
  uVar3 = 0;
LAB_14097662f:
  *(undefined1 *)(param_1 + 0x40) = uVar3;
  *(undefined1 *)(param_1 + 0x41) = 1;
  return;
}



// FUNCTION 14097663c FUN_14097663c body=127 status=ok
// SIG undefined FUN_14097663c(void)

void FUN_14097663c(longlong param_1)

{
  char cVar1;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_19;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if ((*(byte *)(*(longlong *)(param_1 + 0x10) + 0xd5) & 4) != 0) {
    local_38 = 0;
    uStack_30 = 0;
    FUN_1400033ba(param_1,0,0,0);
  }
  cVar1 = FUN_1400439fc(param_1,0,&local_19);
  if (cVar1 == '\0') {
    if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_58);
}



// FUNCTION 1409766d0 FUN_1409766d0 body=1760 status=ok
// SIG undefined FUN_1409766d0(void)

void FUN_1409766d0(longlong param_1,longlong *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  longlong lVar8;
  int iVar9;
  longlong *plVar10;
  int iVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  void *pvVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  int iVar19;
  uint uVar20;
  void **unaff_R15;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined1 auStack_198 [40];
  int local_170;
  uint local_16c;
  ulonglong local_168;
  size_t local_160;
  longlong *local_158;
  ulonglong local_150;
  ulonglong local_148;
  undefined4 local_140;
  void *local_138;
  undefined8 uStack_130;
  longlong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 uStack_e0;
  longlong *local_d8;
  undefined8 uStack_d0;
  longlong local_c8;
  undefined8 uStack_c0;
  longlong local_b8;
  undefined8 uStack_b0;
  ulonglong local_a0;
  ulonglong uVar7;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar4 = *(ushort *)(param_2 + 0x1e);
  if ((uVar4 & 1) != 0) {
    local_140 = *(undefined4 *)(param_1 + 0x7a4);
    local_138 = (void *)0x0;
    iVar11 = *(int *)(param_1 + 0x7c0);
    pvVar15 = *(void **)(param_1 + 0x7b8);
    if ((longlong)iVar11 == 0) {
      pvVar15 = (void *)0x0;
      iVar11 = 0;
      uVar24 = 0;
    }
    else {
      unaff_R15 = &local_138;
      uStack_130._0_4_ = iVar11;
      FUN_140976db2(unaff_R15,iVar11,0);
      memcpy(local_138,pvVar15,(longlong)iVar11 << 3);
      pvVar15 = local_138;
      iVar11 = (int)uStack_130;
      uVar24 = uStack_130._4_4_;
    }
    local_138 = (void *)0x0;
    uStack_130 = 0;
    local_128 = *param_2;
    uStack_e0 = param_2[1];
    local_118 = (longlong *)param_2[2];
    uStack_d0 = param_2[3];
    local_c8 = param_2[4];
    uStack_c0 = param_2[5];
    local_b8 = param_2[6];
    uStack_b0 = param_2[7];
    lVar3 = uStack_b0;
    lVar18 = uStack_c0;
    local_d8 = local_118;
    lVar17 = uStack_d0;
    local_e8 = local_128;
    lVar8 = uStack_e0;
    param_2[6] = (longlong)pvVar15;
    *(int *)(param_2 + 7) = iVar11;
    *(undefined4 *)((longlong)param_2 + 0x3c) = uVar24;
    param_2[4] = (longlong)&PTR_FUN_14a9751e0;
    param_2[5] = CONCAT44(uStack_fc,local_140);
    param_2[2] = 0;
    param_2[3] = CONCAT44(uStack_10c,uStack_110);
    *param_2 = (longlong)FUN_143541626;
    param_2[1] = CONCAT44(uStack_11c,uStack_120);
    uStack_e0._4_4_ = (undefined4)((ulonglong)uStack_e0 >> 0x20);
    uStack_d0._4_4_ = (undefined4)((ulonglong)uStack_d0 >> 0x20);
    uStack_c0._4_4_ = (undefined4)((ulonglong)uStack_c0 >> 0x20);
    uStack_b0._4_4_ = (undefined4)((ulonglong)uStack_b0 >> 0x20);
    uStack_120 = (undefined4)uStack_e0;
    uStack_11c = uStack_e0._4_4_;
    local_108 = local_c8;
    uStack_100 = (undefined4)uStack_c0;
    uStack_fc = uStack_c0._4_4_;
    local_f8 = local_b8;
    uStack_f0 = (undefined4)uStack_b0;
    uStack_ec = uStack_b0._4_4_;
    uStack_110 = (undefined4)uStack_d0;
    uStack_10c = uStack_d0._4_4_;
    uStack_e0 = lVar8;
    uStack_d0 = lVar17;
    uStack_c0 = lVar18;
    uStack_b0 = lVar3;
    if (local_128 != 0) {
      plVar10 = local_118;
      if (local_118 == (longlong *)0x0) {
        plVar10 = &local_108;
      }
      (**(code **)(*plVar10 + 0x10))();
      if (local_138 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    uVar4 = *(ushort *)(param_2 + 0x1e);
  }
  if ((uVar4 & 0x10) != 0) {
    if (*(int *)(param_1 + 0x6b0) < 1) {
      lVar8 = 0;
    }
    else {
      lVar8 = FUN_1403fc0e6(param_1,*(undefined8 *)(param_1 + 0x6a8),0);
    }
    if (0 < *(int *)((longlong)param_2 + 0x1b4)) {
      lVar17 = 0xc;
      lVar18 = 0;
      do {
        uVar22 = 0xbf800000;
        uVar23 = 0xbf800000;
        uVar24 = 0xbf800000;
        uVar25 = 0xbf800000;
        if (lVar8 != 0) {
          uVar22 = 0xbf800000;
          uVar23 = 0xbf800000;
          uVar24 = 0xbf800000;
          uVar25 = 0xbf800000;
          if (lVar18 < *(int *)(lVar8 + 0x28)) {
            lVar3 = *(longlong *)(lVar8 + 0x20);
            uVar24 = *(undefined4 *)(lVar3 + -0xc + lVar17);
            uVar25 = *(undefined4 *)(lVar3 + -8 + lVar17);
            uVar23 = *(undefined4 *)(lVar3 + lVar17);
            uVar22 = *(undefined4 *)(lVar3 + -4 + lVar17);
          }
        }
        iVar11 = (int)param_2[0x1d];
        *(uint *)(param_2 + 0x1d) = iVar11 + 1U;
        if (*(uint *)((longlong)param_2 + 0xec) < iVar11 + 1U) {
          FUN_1449e2712(param_2 + 0x1c,iVar11);
        }
        lVar3 = param_2[0x1c];
        unaff_R15 = (void **)((longlong)iVar11 * 0x10);
        *(undefined4 *)(lVar3 + (longlong)unaff_R15) = uVar24;
        *(undefined4 *)(lVar3 + 4 + (longlong)unaff_R15) = uVar25;
        *(undefined4 *)(lVar3 + 8 + (longlong)unaff_R15) = uVar22;
        *(undefined4 *)(lVar3 + 0xc + (longlong)unaff_R15) = uVar23;
        lVar18 = lVar18 + 1;
        lVar17 = lVar17 + 0x10;
      } while (lVar18 < *(int *)((longlong)param_2 + 0x1b4));
    }
  }
  if ((*(byte *)(param_2 + 0x1e) & 2) == 0) goto LAB_140976920;
  pvVar15 = *(void **)(param_1 + 0x7a8);
  iVar11 = *(int *)(param_1 + 0x7b0);
  plVar10 = param_2 + 0x1a;
  if ((int)param_2[0x15] == 0) {
    bVar21 = iVar11 != 0;
    iVar11 = 0;
    if (bVar21) goto LAB_1409769a6;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x7a0);
    iVar19 = (int)param_2[0x36];
    if ((char)param_2[0x12] == '\0') {
      iVar5 = (int)param_2[0x11] + (int)param_2[0x10];
      if (iVar5 == iVar19) {
        bVar21 = true;
      }
      else {
        bVar21 = false;
        iVar19 = iVar5;
      }
    }
    else {
      bVar21 = true;
    }
    if (iVar11 != uVar1 * iVar19) {
      if (iVar19 != 0) {
        if ((uVar1 != 1) || (!bVar21)) {
          FUN_14005ea14(plVar10);
          if (bVar21) {
            uVar12 = 0;
            plVar16 = (longlong *)0x0;
            local_148 = 0;
          }
          else {
            plVar16 = param_2 + 8;
            uVar2 = *(uint *)(param_2 + 9);
            uVar12 = (ulonglong)uVar2;
            iVar11 = (int)param_2[0xf];
            if ((int)param_2[0xe] < (int)param_2[0xf]) {
              iVar11 = (int)param_2[0xe];
            }
            iVar19 = iVar11 + 7;
            if (-1 < iVar11) {
              iVar19 = iVar11;
            }
            uVar6 = iVar19 >> 3;
            uVar7 = (ulonglong)uVar6;
            uVar14 = iVar11 % 8;
            local_148 = (ulonglong)uVar14;
            iVar19 = 0;
            uVar20 = 0;
            if ((-8 < iVar11) && ((int)uVar6 < (int)uVar2)) {
              uVar20 = *(uint *)(*plVar16 + (longlong)(int)uVar6 * 4) & 0x55555555;
            }
            uVar20 = uVar20 >> ((char)uVar14 * '\x04' & 0x1fU);
            unaff_R15 = (void **)(ulonglong)uVar20;
            if ((int)uVar6 < (int)uVar2) {
              if (uVar20 == 0) {
                uVar13 = (longlong)(int)uVar6;
                do {
                  if ((longlong)(int)uVar2 - 1U == uVar13) {
                    unaff_R15 = (void **)0x0;
                    iVar19 = 0;
                    local_148 = 0;
                    goto LAB_140976aa5;
                  }
                  uVar7 = uVar13 + 1;
                  uVar20 = *(uint *)(*plVar16 + 4 + uVar13 * 4) & 0x55555555;
                  uVar13 = uVar7;
                } while (uVar20 == 0);
                uVar14 = 0;
              }
              uVar2 = 0;
              if (uVar20 != 0) {
                for (; (uVar20 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
                }
              }
              unaff_R15 = (void **)(ulonglong)(uVar20 >> ((byte)uVar2 & 0x1c));
              uVar12 = uVar7 & 0xffffffff;
              local_148 = (ulonglong)((uVar2 >> 2) + uVar14);
            }
            else {
              uVar12 = (ulonglong)uVar6;
            }
          }
LAB_140976aa5:
          uVar7 = 0;
          local_160 = (longlong)(int)uVar1 * 4;
          local_158 = plVar16;
LAB_140976ab7:
          do {
            iVar11 = (int)local_148 + (int)uVar12 * 8;
            do {
              do {
                if (bVar21) {
                  iVar5 = (int)uVar7;
                  if (iVar19 <= iVar5) goto LAB_140976920;
                }
                else {
                  iVar9 = *(int *)((longlong)plVar16 + 0x3c) + 1;
                  if ((int)plVar16[6] < iVar9) {
                    iVar9 = (int)plVar16[6];
                  }
                  iVar5 = iVar11;
                  if (iVar9 <= iVar11) goto LAB_140976920;
                }
                local_16c = (uint)unaff_R15;
                iVar9 = (int)param_2[0x1b];
                *(uint *)(param_2 + 0x1b) = iVar9 + uVar1;
                local_150 = uVar12;
                if ((uint)(*(int *)((longlong)param_2 + 0xdc) - iVar9) < uVar1) {
                  local_170 = iVar11;
                  local_168 = uVar7;
                  FUN_14475e4ac(plVar10,iVar9);
                  uVar7 = local_168;
                  iVar11 = local_170;
LAB_140976b16:
                  memcpy((void *)((longlong)iVar9 * 4 + *plVar10),
                         (void *)((longlong)pvVar15 + (longlong)(int)(iVar5 * uVar1) * 4),local_160)
                  ;
                  plVar16 = local_158;
                }
                else if (uVar1 != 0) goto LAB_140976b16;
                uVar7 = (ulonglong)((int)uVar7 + 1);
                unaff_R15 = (void **)(ulonglong)local_16c;
                iVar5 = (int)local_148;
                uVar12 = local_150;
              } while (bVar21);
              uVar2 = *(uint *)(plVar16 + 1);
            } while ((int)uVar2 <= (int)local_150);
            uVar12 = (ulonglong)(int)local_150;
            uVar6 = local_16c & 0xfffffffa;
            if (uVar6 == 0) {
              uVar13 = uVar12;
              do {
                unaff_R15 = (void **)0x0;
                if ((longlong)(int)uVar2 - 1U == uVar13) {
                  uVar12 = (ulonglong)uVar2;
                  local_148 = 0;
                  goto LAB_140976ab7;
                }
                uVar12 = uVar13 + 1;
                iVar5 = 0;
                uVar6 = *(uint *)(*plVar16 + 4 + uVar13 * 4) & 0x55555555;
                uVar13 = uVar12;
              } while (uVar6 == 0);
            }
            uVar2 = 0;
            if (uVar6 != 0) {
              for (; (uVar6 >> uVar2 & 1) == 0; uVar2 = uVar2 + 1) {
              }
            }
            unaff_R15 = (void **)(ulonglong)(uVar6 >> ((byte)uVar2 & 0x1c));
            local_148 = (ulonglong)((uVar2 >> 2) + iVar5);
          } while( true );
        }
        goto LAB_140976920;
      }
LAB_1409769a6:
      *(undefined4 *)(param_2 + 0x1b) = 0;
      if (*(int *)((longlong)param_2 + 0xdc) < 0) {
        FUN_14482f6fa(plVar10,0);
      }
      goto LAB_140976920;
    }
  }
  *(int *)(param_2 + 0x1b) = iVar11;
  if (*(int *)((longlong)param_2 + 0xdc) == 0 && iVar11 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xdc) = 0;
  }
  else {
    FUN_1447c510a(plVar10,iVar11);
    if (iVar11 != 0) {
      memcpy((void *)*plVar10,pvVar15,(longlong)iVar11 << 2);
    }
  }
LAB_140976920:
  if ((local_a0 ^ (ulonglong)auStack_198) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140976db2 FUN_140976db2 body=317 status=ok
// SIG undefined FUN_140976db2(void)

void FUN_140976db2(longlong param_1,int param_2,int param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  byte bVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  
  if (param_2 == 0) {
    iVar7 = 0;
  }
  else {
    uVar5 = (longlong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar1 = uVar5 + 0xf;
        if (uVar5 < 0x7ff1) {
          uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar1 >> 4]];
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
              uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140976e20;
              lVar2 = uVar6 + 1 + uVar8;
              uVar8 = uVar8 - 1;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,4);
      }
    }
LAB_140976e20:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,4);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 140976f04 FUN_140976f04 body=353 status=ok
// SIG undefined FUN_140976f04(void)

void FUN_140976f04(longlong param_1,ulonglong *param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar3 = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uVar1 = *(uint *)((longlong)param_2 + 0x17c);
  if (uVar1 != uVar3) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar3;
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar4 + 2) = uVar2;
  }
  if (*(int *)(param_1 + 0x120) == 5) {
    FUN_14097748e(param_1,param_2);
  }
  else if (param_3 <= *(int *)(param_1 + 0x120)) goto LAB_140976f3d;
  FUN_14097950a(param_1,param_2,param_3);
LAB_140976f3d:
  if ((*(char *)(param_1 + 0x124) == '\0') && (DAT_14cb0d2b0 != 0)) {
    FUN_14575acb2(param_1,param_2);
  }
  if (*(uint *)((longlong)param_2 + 0x17c) != uVar1) {
    *(uint *)((longlong)param_2 + 0x17c) = uVar1;
    puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar4 + 3;
    if ((undefined8 *)param_2[1] < puVar5) {
      FUN_140023dd8(param_2,0x20);
      puVar4 = (undefined8 *)(*param_2 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar4 + 3;
    }
    *param_2 = (ulonglong)puVar5;
    *(int *)(param_2 + 0xc) = (int)param_2[0xc] + 1;
    *(undefined8 **)param_2[6] = puVar4;
    param_2[6] = (ulonglong)(puVar4 + 1);
    uVar2 = *(undefined4 *)((longlong)param_2 + 0x17c);
    puVar4[1] = 0;
    *puVar4 = &PTR_FUN_14a1fb2c0;
    *(undefined4 *)(puVar4 + 2) = uVar2;
  }
  return;
}



// FUNCTION 140977065 FUN_140977065 body=81 status=ok
// SIG undefined FUN_140977065(void)

ulonglong FUN_140977065(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 unaff_RSI;
  ulonglong uVar4;
  
  if ((((param_1 == 0) || (lVar2 = *(longlong *)(param_1 + 0x148), lVar2 == 0)) ||
      (*(char *)(param_1 + 0xfd) != '\x01')) ||
     (((*(byte *)(lVar2 + 0xb) & 0x20) == 0 ||
      (puVar3 = *(undefined8 **)(lVar2 + 0x30), puVar3 == (undefined8 *)0x0)))) {
    uVar4 = 0;
  }
  else {
    LOCK();
    *(int *)(puVar3 + 1) = *(int *)(puVar3 + 1) + 1;
    UNLOCK();
    LOCK();
    piVar1 = (int *)(puVar3 + 1);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    uVar4 = CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (*piVar1 == 0) {
      (**(code **)*puVar3)(puVar3,1);
    }
  }
  return uVar4 & 0xffffffff;
}



// FUNCTION 1409770b6 FUN_1409770b6 body=982 status=ok
// SIG undefined FUN_1409770b6(void)

undefined8
FUN_1409770b6(undefined8 param_1,undefined8 param_2,longlong *param_3,char param_4,
             undefined8 param_5)

{
  uint *puVar1;
  int *piVar2;
  longlong lVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  byte bVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  size_t sVar13;
  longlong *plVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong lVar18;
  bool bVar19;
  undefined1 auStack_118 [32];
  uint local_f8;
  char **local_f0;
  undefined1 local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  longlong *local_c0;
  undefined8 *local_b8;
  uint local_b0;
  undefined4 uStack_ac;
  char *local_a8;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  undefined8 local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  char local_75;
  undefined2 local_74;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((((*(char *)(*param_3 + 0xfd) == '\x01') &&
       (lVar18 = *(longlong *)(*param_3 + 0x148), lVar18 != 0)) &&
      ((*(byte *)(lVar18 + 0xb) & 0x20) != 0)) &&
     (local_b8 = *(undefined8 **)(lVar18 + 0x30), local_b8 != (undefined8 *)0x0)) {
    LOCK();
    *(int *)(local_b8 + 1) = *(int *)(local_b8 + 1) + 1;
    UNLOCK();
  }
  else {
    local_b8 = (undefined8 *)0x0;
  }
  lVar18 = local_b8[4];
  bVar8 = (byte)DAT_14c760da4 & 0x1f;
  uVar6 = *(uint *)(local_b8 + 2);
  uVar7 = *(uint *)((longlong)local_b8 + 0x14);
  uVar9 = local_b8[2];
  local_d0 = param_1;
  local_c8 = param_2;
  local_c0 = param_3;
  if ((longlong)DAT_14ca60870 < 0) {
    local_a8 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      FUN_1446f470e(&local_b0,local_a8,1);
    }
    else {
      if (local_a8 == (char *)0x0) {
        local_a0 = 0;
      }
      else {
        sVar13 = strlen(local_a8);
        local_a0 = (undefined4)sVar13;
      }
      FUN_14001c09c(&local_b0,&local_a8,1);
    }
    DAT_14ca60870 = (ulonglong)local_b0;
    local_58 = CONCAT44(DAT_14ca60878,local_b0);
  }
  else {
    local_58 = DAT_14ca60870 & 0xffffffff | (ulonglong)DAT_14ca60878 << 0x20;
  }
  local_76 = 0;
  local_a8 = (char *)0x200008;
  local_74 = 0xff00;
  local_7c = 0x10001;
  local_78 = 0x101;
  local_a0 = 1;
  local_88 = 0;
  local_9c = 0;
  uStack_94 = 0;
  local_68 = param_5;
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar8);
  local_84 = uVar9;
  local_75 = param_4;
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100);
  uVar9 = local_c8;
  local_d8 = 0;
  local_e8 = 0;
  local_f8 = 1;
  local_e0 = 1;
  local_f0 = &local_a8;
  lVar10 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,local_c8);
  if (0 < (int)uVar7) {
    lVar18 = lVar18 + 6;
    uVar15 = 0;
    do {
      if (0 < (int)uVar6) {
        uVar16 = 0;
        do {
          uVar17 = (ulonglong)(uint)((int)local_a8 * (int)uVar15);
          lVar3 = lVar10 + (ulonglong)(uint)((int)uVar16 << (param_4 != '\x0f') + 1) * 2;
          uVar4 = *(undefined2 *)(lVar18 + -2 + uVar16 * 8);
          uVar5 = *(undefined2 *)(lVar18 + uVar16 * 8);
          *(undefined4 *)(uVar17 + lVar3) = *(undefined4 *)(lVar18 + -6 + uVar16 * 8);
          if (param_4 != '\x0f') {
            *(undefined2 *)(lVar3 + 4 + uVar17) = uVar4;
            *(undefined2 *)(lVar3 + 6 + uVar17) = uVar5;
          }
          uVar16 = uVar16 + 1;
        } while (uVar6 != uVar16);
      }
      uVar15 = uVar15 + 1;
      lVar18 = lVar18 + (ulonglong)uVar6 * 8;
    } while (uVar15 != uVar7);
  }
  local_f0 = (char **)CONCAT71(local_f0._1_7_,1);
  local_f8 = local_f8 & 0xffffff00;
  lVar18 = 0;
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,uVar9,CONCAT44(uStack_ac,local_b0),0);
  plVar14 = local_c0;
  uVar9 = local_d0;
  uVar6 = *(uint *)(*local_c0 + 0xc);
  if ((int)uVar6 < DAT_14c9647dc) {
    lVar18 = (ulonglong)((uVar6 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar6 >> 0x10) * 8);
  }
  FUN_14482b126(lVar18,0x40000000);
  *plVar14 = 0;
  FUN_1447ec05f(uVar9,CONCAT44(uStack_ac,local_b0),param_5);
  lVar18 = CONCAT44(uStack_ac,local_b0);
  if (lVar18 != 0) {
    LOCK();
    puVar1 = (uint *)(lVar18 + 8);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar6 & 0x3fffffff) == 1) {
      puVar1 = (uint *)(lVar18 + 8);
      LOCK();
      uVar6 = *puVar1;
      *puVar1 = *puVar1 | 0x40000000;
      UNLOCK();
      if ((uVar6 >> 0x1e & 1) == 0) {
        bVar8 = *(byte *)(lVar18 + 0xd);
        plVar11 = (longlong *)FUN_14001cc68(0x10,8);
        plVar11[1] = lVar18;
        plVar14 = DAT_14ca843c0;
        plVar12 = DAT_14ca843c8;
        if ((bVar8 & 2) == 0) {
          do {
            *plVar11 = (longlong)plVar14;
            LOCK();
            bVar19 = plVar14 != DAT_14ca843c0;
            plVar12 = plVar11;
            if (bVar19) {
              plVar14 = DAT_14ca843c0;
              plVar12 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar12;
            UNLOCK();
          } while (bVar19);
        }
        else {
          do {
            *plVar11 = (longlong)plVar12;
            LOCK();
            bVar19 = plVar12 != DAT_14ca843c8;
            plVar14 = plVar11;
            if (bVar19) {
              plVar12 = DAT_14ca843c8;
              plVar14 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar14;
            UNLOCK();
          } while (bVar19);
        }
      }
    }
  }
  if (local_b8 != (undefined8 *)0x0) {
    LOCK();
    piVar2 = (int *)(local_b8 + 1);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)*local_b8)(local_b8,1);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 14097748e FUN_14097748e body=8314 status=ok
// SIG undefined FUN_14097748e(void)

void FUN_14097748e(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined4 *puVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong *plVar8;
  size_t sVar9;
  uint uVar10;
  ulonglong uVar11;
  char *pcVar12;
  uint *puVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined1 auStack_118 [32];
  longlong *local_f8;
  longlong *local_f0;
  longlong *local_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  longlong local_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 uStack_94;
  uint local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined4 local_7c;
  undefined2 local_78;
  undefined4 local_76;
  undefined4 local_70;
  wchar_t *local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_c0 = param_2;
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca94e18 + 0x10),L"WhiteDummy");
  plVar5 = (longlong *)(param_1 + 0x10);
  if (plVar5 == &local_a8) {
LAB_140977502:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140977502;
    }
  }
  plVar5 = *(longlong **)(*plVar5 + 8);
  uStack_a0 = 0;
  uStack_9c = 0;
  local_a8 = (longlong *)0x2;
  lVar2 = (**(code **)(*plVar5 + 8))(plVar5);
  if (*(byte *)(lVar2 + 0x32) < 5) {
    local_a8._0_3_ =
         CONCAT12(local_a8._2_1_ & 0x8f |
                  (byte)(0x4030502010 >> ((*(byte *)(lVar2 + 0x32) & 7) << 3)),(undefined2)local_a8)
    ;
  }
  local_a8._0_5_ = CONCAT23(0x100,(undefined3)local_a8);
  local_f8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b0,local_c0,plVar5);
  plVar5 = (longlong *)(param_1 + 0x108);
  if (plVar5 == &local_b0) {
LAB_1409775ff:
    lVar2 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar13 = (uint *)(local_b0 + 8);
      uVar10 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(local_b0 + 8);
        LOCK();
        uVar10 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(local_b0 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar2;
          plVar5 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c0;
              plVar8 = plVar3;
              if (bVar16) {
                plVar5 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar3 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  else {
    lVar2 = *plVar5;
    *plVar5 = local_b0;
    local_b0 = 0;
    if (lVar2 != 0) {
      LOCK();
      puVar13 = (uint *)(lVar2 + 8);
      uVar10 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(lVar2 + 8);
        LOCK();
        uVar10 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(lVar2 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar2;
          plVar5 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c0;
              plVar8 = plVar3;
              if (bVar16) {
                plVar5 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar3 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_1409775ff;
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  local_c8 = param_1;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff000200;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"BlackDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_f0 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0;
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"BlackDummy");
  plVar5 = (longlong *)(local_c8 + 0x18);
  if (plVar5 == &local_a8) {
LAB_1409777b1:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_1409777b1;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar2;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff000201;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"BlackArrayDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_e0 = 0;
  local_f0 = (longlong *)CONCAT44(local_f0._4_4_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
  local_e8 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x440))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffffffffff00);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
  (**(code **)(*DAT_14ca83900 + 0x448))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"BlackArrayDummy");
  plVar5 = (longlong *)(local_c8 + 0x28);
  if (plVar5 == &local_a8) {
LAB_140977964:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140977964;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar2;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff001c00;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"ZeroUIntDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_f0 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0;
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"ZeroUIntDummy");
  plVar5 = (longlong *)(local_c8 + 0xf0);
  if (plVar5 == &local_a8) {
LAB_140977b23:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140977b23;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar2;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff001c01;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"ZeroUIntArrayDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_e0 = 0;
  local_f0 = (longlong *)CONCAT44(local_f0._4_4_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
  local_e8 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x440))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0;
  local_f0 = (longlong *)((ulonglong)local_f0 & 0xffffffffffffff00);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffff00000000);
  (**(code **)(*DAT_14ca83900 + 0x448))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"ZeroUIntArrayDummy");
  plVar5 = (longlong *)(local_c8 + 0xf8);
  if (plVar5 == &local_a8) {
LAB_140977cd8:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140977cd8;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar2;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff000200;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"BlackAlphaOneDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_f0 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0xff000000;
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"BlackAlphaOneDummy");
  plVar5 = (longlong *)(local_c8 + 0x20);
  if (plVar5 == &local_a8) {
LAB_140977e9d:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140977e9d;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar2;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff000201;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"GreenDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_f0 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0xff00ff00;
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"GreenDummy");
  plVar5 = (longlong *)(local_c8 + 0xb0);
  if (plVar5 == &local_a8) {
LAB_140978064:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978064;
    }
  }
  lVar2 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar2;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff000200;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"DefaultNormal8Bit";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_f0 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0xff808080;
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"DefaultNormal8Bit");
  lVar2 = local_c8;
  plVar5 = (longlong *)(local_c8 + 0xb8);
  if (plVar5 == &local_a8) {
LAB_14097822d:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_14097822d;
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar6;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      FUN_1446f470e(&local_a8,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      FUN_14001c09c(&local_b0,&local_a8,1);
      lVar2 = local_c8;
      local_a8._0_4_ = (uint)local_b0;
    }
    uVar11 = (ulonglong)(uint)local_a8;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff000200;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = (undefined1 *)0x8000000080;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"PerlinNoiseGradient";
  iVar14 = 0;
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  local_d8 = 0;
  local_f0 = &local_b8;
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  lVar6 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,local_c0,local_b0,0);
  uVar10 = 0x3039;
  do {
    lVar15 = 0;
    do {
      uVar10 = uVar10 * 0xbb38435 + 0x3619636b;
      *(undefined4 *)((ulonglong)(uint)((int)local_b8 * iVar14) + lVar6 + lVar15 * 4) =
           *(undefined4 *)
            (&DAT_14a313a10 +
            ((longlong)(((float)(uVar10 >> 9 | 0x3f800000) + -1.0) * 12.0) & 0xffffffffU) * 4);
      lVar15 = lVar15 + 1;
    } while (lVar15 != 0x80);
    iVar14 = iVar14 + 1;
  } while (iVar14 != 0x80);
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,local_c0,local_b0,0);
  FUN_1447ec05f(&local_a8,local_b0,L"PerlinNoiseGradient");
  plVar5 = (longlong *)(lVar2 + 0x30);
  if (plVar5 == &local_a8) {
LAB_140978468:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978468;
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar6;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  if ((DAT_14c873618 & 1) != 0) {
    bVar1 = (byte)DAT_14c760da4 & 0x1f;
    if ((longlong)DAT_14ca60870 < 0) {
      pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
      if (DAT_14ca6087c == '\x01') {
        puVar13 = (uint *)&local_a8;
        FUN_1446f470e(puVar13,pcVar12,1);
      }
      else {
        local_a8 = (longlong *)pcVar12;
        if (pcVar12 == (char *)0x0) {
          uStack_a0 = 0;
        }
        else {
          sVar9 = strlen(pcVar12);
          uStack_a0 = (undefined4)sVar9;
        }
        puVar13 = (uint *)&local_b0;
        FUN_14001c09c(puVar13,&local_a8,1);
      }
      uVar11 = (ulonglong)*puVar13;
      local_58 = (ulonglong)DAT_14ca60878 << 0x20;
      DAT_14ca60870 = uVar11;
    }
    else {
      uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
      local_58 = DAT_14ca60870 & 0xffffffff;
    }
    local_58 = local_58 | uVar11;
    local_76 = 0xff000a00;
    local_a8 = (longlong *)&DAT_00000008;
    local_84 = &DAT_100000001;
    local_7c = 0x10001;
    local_78 = 0x101;
    uStack_a0 = 1;
    local_88 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_68 = L"MaxFP16Depth";
    local_60 = 0;
    local_50 = 0;
    local_70 = 0x70;
    local_8c = ~(-1 << bVar1);
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
    lVar2 = local_b0;
    local_d8 = 0;
    local_e0 = 1;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
    local_f0 = &local_a8;
    puVar7 = (undefined8 *)
             (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
    *puVar7 = 0x7bff7bff7bff7bff;
    local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
    local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
    FUN_1447ec05f(&local_a8,local_b0,L"MaxFP16Depth");
    lVar2 = local_c8;
    plVar5 = (longlong *)(local_c8 + 0x90);
    if (plVar5 == &local_a8) {
LAB_140978656:
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x38))();
      }
    }
    else {
      plVar8 = (longlong *)*plVar5;
      *plVar5 = (longlong)local_a8;
      local_a8 = (longlong *)0x0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x38))();
        goto LAB_140978656;
      }
    }
    lVar6 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar13 = (uint *)(local_b0 + 8);
      uVar10 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(local_b0 + 8);
        LOCK();
        uVar10 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(local_b0 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar6;
          plVar5 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c0;
              plVar8 = plVar3;
              if (bVar16) {
                plVar5 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar3 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  plVar5 = *(longlong **)(lVar2 + 0x18);
  plVar8 = *(longlong **)(lVar2 + 0x98);
  if (plVar8 != plVar5) {
    *(longlong **)(lVar2 + 0x98) = plVar5;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x30))();
    }
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
  }
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca8c080 + 0x10),L"BlackDepthCube");
  plVar5 = (longlong *)(lVar2 + 0xa8);
  if (plVar5 == &local_a8) {
LAB_140978741:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978741;
    }
  }
  bVar1 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      puVar13 = (uint *)&local_a8;
      FUN_1446f470e(puVar13,pcVar12,1);
    }
    else {
      local_a8 = (longlong *)pcVar12;
      if (pcVar12 == (char *)0x0) {
        uStack_a0 = 0;
      }
      else {
        sVar9 = strlen(pcVar12);
        uStack_a0 = (undefined4)sVar9;
      }
      puVar13 = (uint *)&local_b0;
      FUN_14001c09c(puVar13,&local_a8,1);
    }
    uVar11 = (ulonglong)*puVar13;
    local_58 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar11;
  }
  else {
    uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
    local_58 = DAT_14ca60870 & 0xffffffff;
  }
  local_58 = local_58 | uVar11;
  local_76 = 0xff003c00;
  local_a8 = (longlong *)&DAT_00000008;
  local_84 = &DAT_100000001;
  local_7c = 0x10001;
  local_78 = 0x101;
  uStack_a0 = 1;
  local_88 = 0;
  uStack_9c = 0;
  uStack_98 = 0;
  uStack_94 = 0;
  local_68 = L"StencilDummy";
  local_60 = 0;
  local_50 = 0;
  local_70 = 0x70;
  local_8c = ~(-1 << bVar1);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
  lVar2 = local_b0;
  local_d8 = 0;
  local_e0 = 1;
  local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
  local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
  local_f0 = &local_a8;
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
  *puVar4 = 0xffffffff;
  local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
  local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
  FUN_1447ec05f(&local_a8,local_b0,L"StencilDummy");
  lVar2 = local_c8;
  plVar5 = (longlong *)(local_c8 + 0xa0);
  if (plVar5 == &local_a8) {
LAB_1409788ac:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_1409788ac;
    }
  }
  plVar5 = *(longlong **)(*plVar5 + 8);
  uStack_a0 = 0;
  uStack_9c = 0;
  local_a8 = (longlong *)0x2;
  lVar6 = (**(code **)(*plVar5 + 8))(plVar5);
  if (*(byte *)(lVar6 + 0x32) < 5) {
    local_a8._0_3_ =
         CONCAT12(local_a8._2_1_ & 0x8f |
                  (byte)(0x4030502010 >> ((*(byte *)(lVar6 + 0x32) & 7) << 3)),(undefined2)local_a8)
    ;
  }
  local_a8._0_5_ = CONCAT23(0x100,(undefined3)local_a8);
  local_f8 = &local_a8;
  (**(code **)(*DAT_14ca83900 + 0x1b8))(DAT_14ca83900,&local_b8,local_c0,plVar5);
  plVar5 = (longlong *)(lVar2 + 0x110);
  if (plVar5 == &local_b8) {
LAB_1409789aa:
    lVar6 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      puVar13 = (uint *)(local_b8 + 8);
      uVar10 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(local_b8 + 8);
        LOCK();
        uVar10 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(local_b8 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar6;
          plVar5 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c0;
              plVar8 = plVar3;
              if (bVar16) {
                plVar5 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar3 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  else {
    lVar6 = *plVar5;
    *plVar5 = local_b8;
    local_b8 = 0;
    if (lVar6 != 0) {
      LOCK();
      puVar13 = (uint *)(lVar6 + 8);
      uVar10 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(lVar6 + 8);
        LOCK();
        uVar10 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(lVar6 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar6;
          plVar5 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c0;
              plVar8 = plVar3;
              if (bVar16) {
                plVar5 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar3 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
      goto LAB_1409789aa;
    }
  }
  lVar6 = local_b0;
  if (local_b0 != 0) {
    LOCK();
    puVar13 = (uint *)(local_b0 + 8);
    uVar10 = *puVar13;
    *puVar13 = *puVar13 - 1;
    UNLOCK();
    if ((uVar10 & 0x3fffffff) == 1) {
      puVar13 = (uint *)(local_b0 + 8);
      LOCK();
      uVar10 = *puVar13;
      *puVar13 = *puVar13 | 0x40000000;
      UNLOCK();
      if ((uVar10 >> 0x1e & 1) == 0) {
        bVar1 = *(byte *)(local_b0 + 0xd);
        plVar3 = (longlong *)FUN_14001cc68(0x10,8);
        plVar3[1] = lVar6;
        plVar5 = DAT_14ca843c0;
        plVar8 = DAT_14ca843c8;
        if ((bVar1 & 2) == 0) {
          do {
            *plVar3 = (longlong)plVar5;
            LOCK();
            bVar16 = plVar5 != DAT_14ca843c0;
            plVar8 = plVar3;
            if (bVar16) {
              plVar5 = DAT_14ca843c0;
              plVar8 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar8;
            UNLOCK();
          } while (bVar16);
        }
        else {
          do {
            *plVar3 = (longlong)plVar8;
            LOCK();
            bVar16 = plVar8 != DAT_14ca843c8;
            plVar5 = plVar3;
            if (bVar16) {
              plVar8 = DAT_14ca843c8;
              plVar5 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar5;
            UNLOCK();
          } while (bVar16);
        }
      }
    }
  }
  if ((DAT_14c873618 & 1) != 0) {
    bVar1 = (byte)DAT_14c760da4 & 0x1f;
    if ((longlong)DAT_14ca60870 < 0) {
      pcVar12 = (char *)(DAT_14ca60870 & 0x7fffffffffffffff);
      if (DAT_14ca6087c == '\x01') {
        puVar13 = (uint *)&local_a8;
        FUN_1446f470e(puVar13,pcVar12,1);
      }
      else {
        local_a8 = (longlong *)pcVar12;
        if (pcVar12 == (char *)0x0) {
          uStack_a0 = 0;
        }
        else {
          sVar9 = strlen(pcVar12);
          uStack_a0 = (undefined4)sVar9;
        }
        puVar13 = (uint *)&local_b0;
        FUN_14001c09c(puVar13,&local_a8,1);
      }
      uVar11 = (ulonglong)*puVar13;
      local_58 = (ulonglong)DAT_14ca60878 << 0x20;
      DAT_14ca60870 = uVar11;
    }
    else {
      uVar11 = (ulonglong)DAT_14ca60878 << 0x20;
      local_58 = DAT_14ca60870 & 0xffffffff;
    }
    local_58 = local_58 | uVar11;
    local_76 = 0xff000a00;
    local_a8 = (longlong *)&DAT_00000008;
    local_84 = &DAT_100000001;
    local_7c = 0x10001;
    local_78 = 0x101;
    uStack_a0 = 1;
    local_88 = 0;
    uStack_9c = 0;
    uStack_98 = 0;
    uStack_94 = 0;
    local_68 = L"MidGreyDummy";
    local_60 = 0;
    local_50 = 0;
    local_70 = 0x70;
    local_8c = ~(-1 << bVar1);
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_b0,&DAT_14ca85100,&local_a8);
    lVar2 = local_b0;
    local_d8 = 0;
    local_e0 = 1;
    local_e8 = (longlong *)((ulonglong)local_e8 & 0xffffffffffffff00);
    local_f8 = (longlong *)CONCAT44(local_f8._4_4_,1);
    local_f0 = &local_a8;
    puVar7 = (undefined8 *)
             (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,&DAT_14ca85100,local_b0,0);
    *puVar7 = 0x3800380038003800;
    local_f0 = (longlong *)CONCAT71(local_f0._1_7_,1);
    local_f8 = (longlong *)((ulonglong)local_f8 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,&DAT_14ca85100,lVar2,0);
    FUN_1447ec05f(&local_a8,local_b0,L"MidGreyDummy");
    lVar2 = local_c8;
    plVar5 = (longlong *)(local_c8 + 0xc0);
    if (plVar5 == &local_a8) {
LAB_140978bde:
      if (local_a8 != (longlong *)0x0) {
        (**(code **)(*local_a8 + 0x38))();
      }
    }
    else {
      plVar8 = (longlong *)*plVar5;
      *plVar5 = (longlong)local_a8;
      local_a8 = (longlong *)0x0;
      if (plVar8 != (longlong *)0x0) {
        (**(code **)(*plVar8 + 0x38))();
        goto LAB_140978bde;
      }
    }
    lVar6 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      puVar13 = (uint *)(local_b0 + 8);
      uVar10 = *puVar13;
      *puVar13 = *puVar13 - 1;
      UNLOCK();
      if ((uVar10 & 0x3fffffff) == 1) {
        puVar13 = (uint *)(local_b0 + 8);
        LOCK();
        uVar10 = *puVar13;
        *puVar13 = *puVar13 | 0x40000000;
        UNLOCK();
        if ((uVar10 >> 0x1e & 1) == 0) {
          bVar1 = *(byte *)(local_b0 + 0xd);
          plVar3 = (longlong *)FUN_14001cc68(0x10,8);
          plVar3[1] = lVar6;
          plVar5 = DAT_14ca843c0;
          plVar8 = DAT_14ca843c8;
          if ((bVar1 & 2) == 0) {
            do {
              *plVar3 = (longlong)plVar5;
              LOCK();
              bVar16 = plVar5 != DAT_14ca843c0;
              plVar8 = plVar3;
              if (bVar16) {
                plVar5 = DAT_14ca843c0;
                plVar8 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar8;
              UNLOCK();
            } while (bVar16);
          }
          else {
            do {
              *plVar3 = (longlong)plVar8;
              LOCK();
              bVar16 = plVar8 != DAT_14ca843c8;
              plVar5 = plVar3;
              if (bVar16) {
                plVar8 = DAT_14ca843c8;
                plVar5 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar5;
              UNLOCK();
            } while (bVar16);
          }
        }
      }
    }
  }
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca94db8 + 0x10),L"VolumetricBlackDummy");
  plVar5 = (longlong *)(lVar2 + 200);
  if (plVar5 == &local_a8) {
LAB_140978c95:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978c95;
    }
  }
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca8c058 + 0x10),L"VolumetricBlackAlphaOneDummy");
  plVar5 = (longlong *)(lVar2 + 0xd0);
  if (plVar5 == &local_a8) {
LAB_140978cea:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978cea;
    }
  }
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca94dc0 + 0x10),L"VolumetricBlackUintDummy");
  plVar5 = (longlong *)(lVar2 + 0xd8);
  if (plVar5 == &local_a8) {
LAB_140978d3f:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978d3f;
    }
  }
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca8c078 + 0x10),L"CubeBlackDummy");
  plVar5 = (longlong *)(lVar2 + 0xe0);
  if (plVar5 == &local_a8) {
LAB_140978d94:
    if (local_a8 != (longlong *)0x0) {
      (**(code **)(*local_a8 + 0x38))();
    }
  }
  else {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))();
      goto LAB_140978d94;
    }
  }
  FUN_1447ec05f(&local_a8,*(undefined8 *)(DAT_14ca8c088 + 0x10),L"CubeArrayBlackDummy");
  plVar5 = (longlong *)(lVar2 + 0xe8);
  if (plVar5 != &local_a8) {
    plVar8 = (longlong *)*plVar5;
    *plVar5 = (longlong)local_a8;
    local_a8 = (longlong *)0x0;
    if (plVar8 == (longlong *)0x0) goto LAB_140978df9;
    (**(code **)(*plVar8 + 0x38))();
  }
  if (local_a8 != (longlong *)0x0) {
    (**(code **)(*local_a8 + 0x38))();
  }
LAB_140978df9:
  if ((local_48 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14097950a FUN_14097950a body=9513 status=ok
// SIG undefined FUN_14097950a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14097950a(longlong param_1,longlong param_2,int param_3)

{
  undefined8 uVar1;
  char cVar2;
  uint uVar10;
  undefined1 auVar11 [16];
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  longlong **pplVar19;
  undefined1 auVar20 [16];
  byte bVar21;
  undefined2 uVar22;
  uint uVar23;
  DWORD DVar24;
  DWORD DVar25;
  longlong lVar26;
  longlong *plVar27;
  longlong lVar28;
  undefined4 *puVar29;
  longlong *plVar30;
  longlong *plVar31;
  size_t sVar32;
  int iVar33;
  longlong ***ppplVar34;
  longlong ***ppplVar35;
  uint uVar36;
  undefined2 *puVar37;
  longlong lVar38;
  byte bVar39;
  longlong lVar40;
  longlong lVar41;
  longlong ***ppplVar42;
  uint uVar43;
  longlong lVar44;
  longlong lVar45;
  ulonglong uVar46;
  int iVar47;
  longlong ****pppplVar48;
  int iVar49;
  bool bVar50;
  ushort uVar51;
  ushort uVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  double dVar61;
  double dVar62;
  undefined1 auVar64 [12];
  ushort uVar71;
  ushort uVar72;
  ushort uVar74;
  ushort uVar76;
  undefined1 extraout_var [12];
  undefined1 extraout_var_00 [12];
  ushort uVar73;
  ushort uVar75;
  ushort uVar77;
  undefined1 auVar67 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar78 [16];
  undefined1 in_XMM4 [16];
  undefined1 auVar79 [16];
  float fVar80;
  float fVar81;
  float fVar82;
  float fVar83;
  float fVar84;
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 unaff_XMM11 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  float fVar89;
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  ushort uVar94;
  undefined1 auVar98 [12];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar105 [16];
  undefined1 auVar107 [16];
  undefined1 auStack_258 [32];
  longlong ***local_238;
  longlong ****local_230;
  longlong ***local_228;
  longlong **local_220;
  undefined8 local_218;
  longlong local_210;
  char local_201;
  longlong local_200;
  int local_1f8;
  int local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  int iStack_1e4;
  int iStack_1e0;
  int iStack_1dc;
  ulonglong local_1d0;
  uint local_1c8;
  float local_1c4;
  longlong local_1c0;
  ulonglong local_1b8;
  longlong ***local_1b0;
  undefined4 local_1a8;
  longlong *local_1a0;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined1 *local_180;
  undefined4 local_178;
  longlong ***local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  uint uStack_13c;
  undefined4 uStack_138;
  undefined1 *local_134;
  undefined2 local_12c;
  undefined2 uStack_12a;
  undefined1 local_128;
  undefined1 uStack_127;
  undefined4 local_126;
  undefined4 local_120;
  wchar_t *local_118;
  undefined8 local_110;
  ulonglong local_108;
  undefined8 local_100;
  ulonglong local_f0;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  undefined4 uVar58;
  undefined6 uVar59;
  undefined8 uVar60;
  undefined1 auVar63 [12];
  undefined1 auVar65 [14];
  undefined1 auVar66 [14];
  undefined1 auVar68 [16];
  undefined4 uVar95;
  undefined6 uVar96;
  undefined8 uVar97;
  undefined1 auVar99 [12];
  undefined1 auVar100 [14];
  undefined1 auVar101 [14];
  undefined1 auVar104 [16];
  undefined1 auVar106 [16];
  
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  iVar49 = 0;
  if (*(int *)(param_1 + 0x120) != 5) {
    iVar49 = *(int *)(param_1 + 0x120);
  }
  local_210 = param_2;
  local_200 = param_1;
  local_1f8 = iVar49;
  local_1f4 = param_3;
  if ((iVar49 < 1) && ((DAT_14c873a38 & 1) != 0)) {
    bVar39 = (byte)DAT_14c760da4 & 0x1f;
    if ((longlong)DAT_14ca60870 < 0) {
      local_158 = (longlong ***)(DAT_14ca60870 & 0x7fffffffffffffff);
      if (DAT_14ca6087c == '\x01') {
        pppplVar48 = &local_158;
        FUN_1446f470e(pppplVar48,local_158,1);
      }
      else {
        if (local_158 == (longlong ***)0x0) {
          uStack_150 = 0;
        }
        else {
          sVar32 = strlen((char *)local_158);
          uStack_150 = (undefined4)sVar32;
        }
        pppplVar48 = (longlong ****)local_198;
        FUN_14001c09c(pppplVar48,&local_158,1);
      }
      DAT_14ca60870 = (ulonglong)*(uint *)pppplVar48;
      local_108 = CONCAT44(DAT_14ca60878,*(uint *)pppplVar48);
    }
    else {
      local_108 = DAT_14ca60870 & 0xffffffff | (ulonglong)DAT_14ca60878 << 0x20;
    }
    param_1 = local_200;
    param_2 = local_210;
    local_126 = 0xff002000;
    local_158 = (longlong ***)&DAT_00000008;
    local_134 = (undefined1 *)0x1000000020;
    local_12c = 1;
    uStack_12a = 1;
    local_128 = 1;
    uStack_127 = 1;
    uStack_150 = 1;
    uStack_138 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    local_118 = L"SobolSampling";
    iVar49 = 0;
    local_110 = 0;
    local_100 = 0;
    local_120 = 0x70;
    uStack_13c = ~(-1 << bVar39);
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_198,&DAT_14ca85100,&local_158);
    local_218 = 0;
    local_230 = &local_1b0;
    local_238 = (longlong ***)CONCAT44(local_238._4_4_,1);
    local_220 = (longlong **)CONCAT71(local_220._1_7_,1);
    local_228 = (longlong ***)((ulonglong)local_228 & 0xffffffffffffff00);
    lVar26 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,param_2,local_198._0_8_,0);
    do {
      puVar37 = (undefined2 *)((ulonglong)(uint)((int)local_1b0 * iVar49) + lVar26);
      iVar47 = 0;
      do {
        uVar22 = FUN_14276e1ca(iVar47,iVar49,0);
        *puVar37 = uVar22;
        puVar37 = puVar37 + 1;
        iVar47 = iVar47 + 1;
      } while (iVar47 != 0x10);
      uVar46 = 0;
      do {
        uVar22 = FUN_14276e1ca(uVar46 & 0xffffffff,iVar49,1);
        puVar37[uVar46] = uVar22;
        uVar46 = uVar46 + 1;
      } while ((int)uVar46 != 0x10);
      iVar49 = iVar49 + 1;
    } while (iVar49 != 0x10);
    local_230 = (longlong ****)CONCAT71(local_230._1_7_,1);
    local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,param_2,local_198._0_8_,0);
    FUN_1447ec05f(&local_158,local_198._0_8_,L"SobolSampling");
    iVar49 = local_1f8;
    pppplVar48 = (longlong ****)(param_1 + 0x40);
    if (pppplVar48 == &local_158) {
LAB_14097979a:
      if (local_158 != (longlong ***)0x0) {
        (*(code *)(*local_158)[7])();
      }
    }
    else {
      ppplVar35 = *pppplVar48;
      *pppplVar48 = local_158;
      local_158 = (longlong ***)0x0;
      if (ppplVar35 != (longlong ***)0x0) {
        (*(code *)(*ppplVar35)[7])();
        goto LAB_14097979a;
      }
    }
    uVar1 = local_198._0_8_;
    if ((longlong ***)local_198._0_8_ != (longlong ***)0x0) {
      LOCK();
      ppplVar35 = (longlong ***)(local_198._0_8_ + 8);
      pplVar19 = *ppplVar35;
      *(uint *)ppplVar35 = *(uint *)ppplVar35 - 1;
      UNLOCK();
      if (((ulonglong)pplVar19 & 0x3fffffff) == 1) {
        ppplVar35 = (longlong ***)(local_198._0_8_ + 8);
        LOCK();
        uVar36 = *(uint *)ppplVar35;
        *(uint *)ppplVar35 = *(uint *)ppplVar35 | 0x40000000;
        UNLOCK();
        if ((uVar36 >> 0x1e & 1) == 0) {
          bVar39 = *(byte *)(local_198._0_8_ + 0xd);
          plVar27 = (longlong *)FUN_14001cc68(0x10,8);
          plVar27[1] = uVar1;
          plVar31 = DAT_14ca843c0;
          plVar30 = DAT_14ca843c8;
          param_2 = local_210;
          if ((bVar39 & 2) == 0) {
            do {
              *plVar27 = (longlong)plVar31;
              LOCK();
              bVar50 = plVar31 != DAT_14ca843c0;
              plVar30 = plVar27;
              if (bVar50) {
                plVar31 = DAT_14ca843c0;
                plVar30 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar30;
              UNLOCK();
            } while (bVar50);
          }
          else {
            do {
              *plVar27 = (longlong)plVar30;
              LOCK();
              bVar50 = plVar30 != DAT_14ca843c8;
              plVar31 = plVar27;
              if (bVar50) {
                plVar30 = DAT_14ca843c8;
                plVar31 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar31;
              UNLOCK();
            } while (bVar50);
          }
        }
      }
    }
  }
  local_201 = 2 < local_1f4 && iVar49 < 3;
  if (2 < local_1f4 && iVar49 < 3) {
    uStack_13c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
    uStack_138 = 0;
    uStack_150 = DAT_14ca83a58;
    uStack_14c = (undefined4)_DAT_14ca83a5c;
    uStack_148 = (undefined4)((ulonglong)_DAT_14ca83a5c >> 0x20);
    uStack_144 = (undefined4)_DAT_14ca83a64;
    uStack_140 = (undefined4)((ulonglong)_DAT_14ca83a64 >> 0x20);
    local_134 = &DAT_100000001;
    local_128 = 1;
    uStack_127 = 1;
    local_12c = 1;
    uStack_12a = 1;
    local_126 = 0xff000202;
    local_158 = (longlong ***)0x4400009;
    local_238 = (longlong ***)0x14a313ba4;
    FUN_14490a8c0(&DAT_14ca9a3e8,param_2,&local_158,(undefined8 *)(param_1 + 0x60));
    local_1a0 = (longlong *)((ulonglong)local_1a0 & 0xffffffff00000000);
    local_198 = ZEXT816(0);
    local_188 = 0;
    local_180 = &DAT_100000001;
    local_178 = 1;
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
    if (*(char *)(param_2 + 0x69) == '\0') {
      FUN_14002049c(param_2,1);
      local_220 = &local_1a0;
      local_228 = (longlong ***)CONCAT44(local_228._4_4_,4);
      local_230 = (longlong ****)CONCAT44(local_230._4_4_,4);
      local_238 = (longlong ***)local_198;
      (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,param_2,uVar1,0);
      FUN_14002049c(param_2,0);
    }
    else {
      local_220 = &local_1a0;
      local_228 = (longlong ***)CONCAT44(local_228._4_4_,4);
      local_230 = (longlong ****)CONCAT44(local_230._4_4_,4);
      local_238 = (longlong ***)local_198;
      (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,param_2,uVar1,0);
    }
    uVar1 = *(undefined8 *)(*(longlong *)(param_1 + 0x60) + 8);
    local_158 = (longlong ***)0xffffffffffffffff;
    uStack_150 = 0xffffffff;
    uStack_148 = (undefined4)uVar1;
    uStack_144 = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_140 = CONCAT31(uStack_140._1_3_,1);
    uStack_13c = 0;
    uStack_138 = 0x70;
    local_134 = (undefined1 *)((ulonglong)local_134 & 0xffffffff00000000);
    local_128 = 0;
    local_1a8 = 1;
    local_1b0 = (longlong ***)&local_158;
    FUN_144760590(param_2,&local_1b0,0);
    plVar31 = *(longlong **)(param_1 + 0x60);
    plVar30 = *(longlong **)(param_1 + 0x68);
    if (plVar30 != plVar31) {
      *(longlong **)(param_1 + 0x68) = plVar31;
      if (plVar31 != (longlong *)0x0) {
        (**(code **)(*plVar31 + 0x30))();
      }
      if (plVar30 != (longlong *)0x0) {
        (**(code **)(*plVar30 + 0x38))(plVar30);
      }
      plVar31 = *(longlong **)(param_1 + 0x60);
    }
    plVar30 = *(longlong **)(param_1 + 0x70);
    if (plVar30 != plVar31) {
      *(longlong **)(param_1 + 0x70) = plVar31;
      if (plVar31 != (longlong *)0x0) {
        (**(code **)(*plVar31 + 0x30))();
      }
      if (plVar30 != (longlong *)0x0) {
        (**(code **)(*plVar30 + 0x38))(plVar30);
      }
    }
  }
  uStack_13c = ~(-1 << ((byte)DAT_14c760da4 & 0x1f));
  uStack_138 = 0;
  local_12c = 1;
  lVar38 = 0;
  uStack_150 = DAT_14ca85088;
  uStack_14c = (undefined4)_DAT_14ca8508c;
  uStack_148 = (undefined4)((ulonglong)_DAT_14ca8508c >> 0x20);
  uStack_144 = (undefined4)_DAT_14ca85094;
  uStack_140 = (undefined4)((ulonglong)_DAT_14ca85094 >> 0x20);
  local_134 = (undefined1 *)0x800000300;
  uStack_12a = 1;
  local_128 = 1;
  uStack_127 = 1;
  local_158 = (longlong ***)0x8;
  local_126 = 0xff004700;
  local_238 = (longlong ***)0x14a313ec0;
  FUN_14490a8c0(&DAT_14ca9a3e8,param_2,&local_158);
  local_228 = (longlong ***)((ulonglong)local_228 & 0xffffffffffffff00);
  local_218 = 0;
  local_220 = (longlong **)CONCAT71(local_220._1_7_,1);
  local_238 = (longlong ***)CONCAT44(local_238._4_4_,1);
  local_230 = &local_158;
  lVar28 = (**(code **)(*DAT_14ca83900 + 0x430))
                     (DAT_14ca83900,param_2,*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 8));
  lVar26 = local_210;
  do {
    uVar36 = (&DAT_14a313bc0)[lVar38 * 2];
    uVar23 = (&DAT_14a313bc4)[lVar38 * 2];
    uVar43 = 0;
    do {
      uVar10 = uVar23;
      if (uVar43 < 4) {
        uVar10 = uVar36;
      }
      lVar40 = 0;
      do {
        *(char *)(lVar40 + (ulonglong)((uint)local_158 * uVar43) + lVar28) =
             -((uVar10 >> ((uVar43 & 3) * 8 + (int)lVar40 & 0x1f) & 1) != 0);
        lVar40 = lVar40 + 1;
      } while (lVar40 != 8);
      uVar43 = uVar43 + 1;
    } while (uVar43 != 8);
    lVar38 = lVar38 + 1;
    lVar28 = lVar28 + 8;
  } while (lVar38 != 0x60);
  local_230 = (longlong ****)CONCAT71(local_230._1_7_,1);
  local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))
            (DAT_14ca83900,local_210,*(undefined8 *)(*(longlong *)(param_1 + 0x118) + 8),0);
  bVar21 = (byte)(DAT_14c8736d0 >> 0x17) & 1 & DAT_14c8736d8;
  local_1c8 = (uint)bVar21;
  bVar39 = 0x28;
  if (bVar21 != 0) {
    bVar39 = 0xe;
  }
  bVar21 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    ppplVar35 = (longlong ***)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      FUN_1446f470e(&local_158,ppplVar35,1);
    }
    else {
      local_158 = ppplVar35;
      if (ppplVar35 == (longlong ***)0x0) {
        uStack_150 = 0;
      }
      else {
        sVar32 = strlen((char *)ppplVar35);
        uStack_150 = (undefined4)sVar32;
      }
      FUN_14001c09c(local_198,&local_158,1);
      lVar26 = local_210;
      local_158._0_4_ = local_198._0_4_;
    }
    uVar46 = (ulonglong)(uint)local_158;
    local_108 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar46;
  }
  else {
    uVar46 = (ulonglong)DAT_14ca60878 << 0x20;
    local_108 = DAT_14ca60870 & 0xffffffff;
  }
  local_108 = local_108 | uVar46;
  local_158 = (longlong ***)&DAT_00000008;
  local_126 = CONCAT22(0xff00,(ushort)bVar39 << 8);
  local_134 = (undefined1 *)0x2000000080;
  local_12c = 1;
  uStack_12a = 1;
  local_128 = 1;
  uStack_127 = 1;
  uStack_150 = 1;
  uStack_138 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  uVar46 = 0;
  local_118 = L"PreintegratedGF";
  local_110 = 0;
  local_100 = 0;
  local_120 = 0x70;
  uStack_13c = ~(-1 << bVar21);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_198,&DAT_14ca85100);
  local_218 = 0;
  local_228 = (longlong ***)((ulonglong)local_228 & 0xffffffffffffff00);
  local_230 = &local_1b0;
  local_238 = (longlong ***)CONCAT44(local_238._4_4_,1);
  local_220 = (longlong **)CONCAT71(local_220._1_7_,1);
  local_1c0 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,lVar26,local_198._0_8_,0);
  auVar87._0_12_ = ZEXT812(0x3f800000);
  auVar87._12_4_ = 0;
  do {
    local_1ec = ((float)(int)uVar46 + 0.5) * 0.03125;
    local_1ec = local_1ec * local_1ec;
    local_1d0 = CONCAT44(local_1d0._4_4_,local_1ec * local_1ec + -1.0);
    local_1f0 = auVar87._0_4_ - local_1ec;
    lVar26 = 0;
    local_1b8 = uVar46;
    do {
      fVar89 = ((float)(int)lVar26 + 0.5) * 0.0078125;
      fVar80 = auVar87._0_4_;
      fVar53 = fVar80 - fVar89 * fVar89;
      fVar82 = 0.0;
      if (fVar53 < 0.0) {
        local_1e8 = sqrtf(fVar53);
      }
      else {
        local_1e8 = SQRT(fVar53);
      }
      local_1c4 = fVar89 * local_1f0 + local_1ec;
      uVar36 = 0;
      fVar81 = 0.0;
      fVar53 = 0.0;
      do {
        uVar23 = uVar36 >> 0x18 | (uVar36 & 0xff0000) >> 8 | (uVar36 & 0xff00) << 8 | uVar36 << 0x18
        ;
        uVar23 = (uVar23 & 0xf0f0f0f) << 4 | uVar23 >> 4 & 0xf0f0f0f;
        uVar23 = (uVar23 >> 2 & 0x33333333) + (uVar23 & 0x33333333) * 4;
        fVar84 = (float)((double)((uVar23 >> 1 & 0x55555555) + (uVar23 & 0x55555555) * 2) *
                        2.3283064365386963e-10);
        fVar83 = (float)(int)uVar36 * 0.0078125 * 6.2831855;
        cosf(fVar83);
        sinf(fVar83);
        fVar55 = auVar87._0_4_;
        fVar54 = (fVar55 - fVar84) / ((float)local_1d0 * fVar84 + fVar55);
        if (fVar54 < 0.0) {
          fVar54 = sqrtf(fVar54);
          unaff_XMM11._4_4_ = extraout_var._0_4_;
          unaff_XMM11._0_4_ = fVar54;
          unaff_XMM11._8_4_ = extraout_var._4_4_;
          unaff_XMM11._12_4_ = extraout_var._8_4_;
        }
        else {
          unaff_XMM11._0_4_ = SQRT(fVar54);
        }
        fVar54 = unaff_XMM11._0_4_;
        fVar55 = fVar55 - fVar54 * fVar54;
        if (fVar55 < 0.0) {
          fVar55 = sqrtf(fVar55);
        }
        else {
          fVar55 = SQRT(fVar55);
        }
        fVar56 = sinf(fVar83);
        fVar57 = cosf(fVar83);
        fVar55 = fVar89 * fVar54 + fVar56 * fVar55 * 0.0 + fVar57 * fVar55 * local_1e8;
        fVar56 = (fVar55 + fVar55) * fVar54 - fVar89;
        if (0.0 < fVar56) {
          if (fVar55 <= 0.0) {
            fVar55 = fVar82;
          }
          if (fVar54 <= 0.0) {
            auVar11._12_4_ = 0;
            auVar11._0_12_ = unaff_XMM11._4_12_;
            unaff_XMM11 = auVar11 << 0x20;
          }
          fVar57 = 1.0 - fVar55;
          fVar54 = ((fVar55 * 4.0) / unaff_XMM11._0_4_) *
                   (0.5 / ((fVar56 * local_1f0 + local_1ec) * fVar89 + local_1c4 * fVar56)) * fVar56
          ;
          fVar57 = fVar57 * fVar57 * fVar57 * fVar57 * fVar57;
          fVar81 = fVar81 + (1.0 - fVar57) * fVar54;
          fVar53 = fVar53 + fVar57 * fVar54;
        }
        auVar87._0_12_ = ZEXT812(0x3f800000);
        auVar87._12_4_ = 0;
        cosf(fVar83);
        sinf(fVar83);
        if (fVar84 < 0.0) {
          fVar54 = sqrtf(fVar84);
          auVar85._4_4_ = extraout_var_00._0_4_;
          auVar85._0_4_ = fVar54;
          auVar85._8_4_ = extraout_var_00._4_4_;
          auVar85._12_4_ = extraout_var_00._8_4_;
        }
        else {
          auVar85 = ZEXT416((uint)SQRT(fVar84));
        }
        fVar55 = auVar85._0_4_;
        fVar84 = auVar87._0_4_;
        fVar54 = 1.0 - fVar55 * fVar55;
        if (fVar54 < 0.0) {
          sqrtf(fVar54);
        }
        sinf(fVar83);
        cosf(fVar83);
        if (fVar55 <= 0.0) {
          auVar79._12_4_ = 0;
          auVar79._0_12_ = auVar85._4_12_;
          auVar85 = auVar79 << 0x20;
        }
        pow((double)(fVar80 - fVar89),5.0);
        pow((double)(1.0 - auVar85._0_4_),5.0);
        lVar28 = local_210;
        uVar36 = uVar36 + 1;
      } while (uVar36 != 0x80);
      uVar46 = (ulonglong)(uint)((int)local_1b0 * (int)local_1b8);
      fVar80 = fVar81 * 0.0078125;
      if (fVar84 <= fVar81 * 0.0078125) {
        fVar80 = fVar84;
      }
      if (fVar80 <= 0.0) {
        fVar80 = fVar82;
      }
      fVar89 = fVar53 * 0.0078125;
      if (fVar84 <= fVar53 * 0.0078125) {
        fVar89 = fVar84;
      }
      if (fVar89 <= 0.0) {
        fVar89 = fVar82;
      }
      if ((char)local_1c8 == '\0') {
        lVar38 = local_1c0 + lVar26 * 2;
        *(char *)(uVar46 + lVar38) = (char)(int)(fVar80 * 255.0 + 0.5);
        *(char *)(uVar46 + 1 + lVar38) = (char)(int)(fVar89 * 255.0 + 0.5);
      }
      else {
        lVar38 = local_1c0 + lVar26 * 4;
        *(short *)(uVar46 + lVar38) = (short)(int)(fVar80 * 65535.0 + 0.5);
        *(short *)(uVar46 + 2 + lVar38) = (short)(int)(fVar89 * 65535.0 + 0.5);
      }
      lVar26 = lVar26 + 1;
    } while (lVar26 != 0x80);
    uVar36 = (int)local_1b8 + 1;
    uVar46 = (ulonglong)uVar36;
  } while (uVar36 != 0x20);
  local_230 = (longlong ****)CONCAT71(local_230._1_7_,1);
  local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffffffffff00);
  (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,local_210,local_198._0_8_,0);
  FUN_1447ec05f(&local_158,local_198._0_8_,L"PreintegratedGF");
  lVar26 = local_200;
  pppplVar48 = (longlong ****)(local_200 + 0x58);
  if (pppplVar48 == &local_158) {
LAB_14097a177:
    if (local_158 != (longlong ***)0x0) {
      (*(code *)(*local_158)[7])();
    }
  }
  else {
    ppplVar35 = *pppplVar48;
    *pppplVar48 = local_158;
    local_158 = (longlong ***)0x0;
    if (ppplVar35 != (longlong ***)0x0) {
      (*(code *)(*ppplVar35)[7])();
      goto LAB_14097a177;
    }
  }
  uVar1 = local_198._0_8_;
  if ((longlong ***)local_198._0_8_ != (longlong ***)0x0) {
    LOCK();
    ppplVar35 = (longlong ***)(local_198._0_8_ + 8);
    pplVar19 = *ppplVar35;
    *(uint *)ppplVar35 = *(uint *)ppplVar35 - 1;
    UNLOCK();
    if (((ulonglong)pplVar19 & 0x3fffffff) == 1) {
      ppplVar35 = (longlong ***)(local_198._0_8_ + 8);
      LOCK();
      uVar36 = *(uint *)ppplVar35;
      *(uint *)ppplVar35 = *(uint *)ppplVar35 | 0x40000000;
      UNLOCK();
      if ((uVar36 >> 0x1e & 1) == 0) {
        bVar39 = *(byte *)(local_198._0_8_ + 0xd);
        plVar27 = (longlong *)FUN_14001cc68(0x10,8);
        plVar27[1] = uVar1;
        plVar31 = DAT_14ca843c0;
        plVar30 = DAT_14ca843c8;
        lVar28 = local_210;
        if ((bVar39 & 2) == 0) {
          do {
            *plVar27 = (longlong)plVar31;
            LOCK();
            bVar50 = plVar31 != DAT_14ca843c0;
            plVar30 = plVar27;
            if (bVar50) {
              plVar31 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar30;
            UNLOCK();
          } while (bVar50);
        }
        else {
          do {
            *plVar27 = (longlong)plVar30;
            LOCK();
            bVar50 = plVar30 != DAT_14ca843c8;
            plVar31 = plVar27;
            if (bVar50) {
              plVar30 = DAT_14ca843c8;
              plVar31 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar31;
            UNLOCK();
          } while (bVar50);
        }
      }
    }
  }
  bVar39 = (byte)DAT_14c760da4 & 0x1f;
  if ((longlong)DAT_14ca60870 < 0) {
    ppplVar35 = (longlong ***)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      FUN_1446f470e(&local_158,ppplVar35,1);
    }
    else {
      local_158 = ppplVar35;
      if (ppplVar35 == (longlong ***)0x0) {
        uStack_150 = 0;
      }
      else {
        sVar32 = strlen((char *)ppplVar35);
        uStack_150 = (undefined4)sVar32;
      }
      FUN_14001c09c(local_198,&local_158,1);
      lVar28 = local_210;
      lVar26 = local_200;
      local_158._0_4_ = local_198._0_4_;
    }
    uVar46 = (ulonglong)(uint)local_158;
    local_108 = (ulonglong)DAT_14ca60878 << 0x20;
    DAT_14ca60870 = uVar46;
  }
  else {
    uVar46 = (ulonglong)DAT_14ca60878 << 0x20;
    local_108 = DAT_14ca60870 & 0xffffffff;
  }
  local_108 = local_108 | uVar46;
  local_126 = 0xff000202;
  local_158 = (longlong ***)0x48;
  local_134 = (undefined1 *)0x1000000010;
  local_12c = 0x10;
  uStack_12a = 1;
  local_128 = 1;
  uStack_127 = 1;
  uStack_150 = 1;
  uStack_138 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_118 = L"PerlinNoise3D";
  lVar40 = 0;
  local_110 = 0;
  local_100 = 0;
  local_120 = 0x70;
  uStack_13c = ~(-1 << bVar39);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_1b0,&DAT_14ca85100);
  local_198._0_12_ = ZEXT412(0x1000) << 0x40;
  local_198._12_4_ = 0;
  FUN_1447808da(local_198);
  memset((void *)local_198._0_8_,0,0x4000);
  ppplVar35 = local_1b0;
  uVar36 = 0x1234;
  lVar38 = 0;
  do {
    lVar44 = 0;
    lVar41 = lVar40;
    do {
      lVar45 = 0;
      do {
        uVar1 = local_198._0_8_;
        uVar36 = uVar36 * 0xbb38435 + 0x3619636b;
        *(undefined4 *)(local_198._0_8_ + lVar45 * 4 + lVar41) =
             *(undefined4 *)
              (&DAT_14a313f20 +
              ((longlong)(((float)(uVar36 >> 9 | 0x3f800000) + -1.0) * 12.0) & 0xffffffffU) * 4);
        lVar45 = lVar45 + 1;
      } while (lVar45 != 0xf);
      lVar44 = lVar44 + 1;
      lVar41 = lVar41 + 0x40;
    } while (lVar44 != 0xf);
    lVar38 = lVar38 + 1;
    lVar40 = lVar40 + 0x400;
  } while (lVar38 != 0xf);
  lVar38 = 0;
  lVar40 = 0;
  do {
    lVar41 = 0;
    do {
      *(undefined4 *)(local_198._0_8_ + lVar41 + 0x3c + lVar38) =
           *(undefined4 *)(local_198._0_8_ + lVar41 + lVar38);
      lVar41 = lVar41 + 0x40;
    } while (lVar41 != 0x400);
    lVar40 = lVar40 + 1;
    lVar38 = lVar38 + 0x400;
  } while (lVar40 != 0x10);
  lVar38 = 0x3c0;
  lVar40 = 0;
  do {
    lVar41 = 0;
    do {
      *(undefined4 *)(local_198._0_8_ + lVar41 * 4 + lVar38) =
           *(undefined4 *)(local_198._0_8_ + lVar41 * 4 + lVar38 + -0x3c0);
      lVar41 = lVar41 + 1;
    } while (lVar41 != 0x10);
    lVar40 = lVar40 + 1;
    lVar38 = lVar38 + 0x400;
  } while (lVar40 != 0x10);
  lVar38 = 0x3c00;
  lVar40 = 0;
  do {
    lVar41 = 0;
    do {
      *(undefined4 *)(local_198._0_8_ + lVar41 * 4 + lVar38) =
           *(undefined4 *)(local_198._0_8_ + lVar41 * 4 + lVar38 + -0x3c00);
      auVar85 = _DAT_149d50560;
      auVar11 = _DAT_1499827e0;
      lVar41 = lVar41 + 1;
    } while (lVar41 != 0x10);
    lVar40 = lVar40 + 1;
    lVar38 = lVar38 + 0x40;
  } while (lVar40 != 0x10);
  iVar49 = 0;
  auVar79 = pmovsxbd(in_XMM4,0x4040404);
  ppplVar34 = (longlong ***)local_198._0_8_;
  do {
    auVar86._4_4_ = iVar49;
    auVar86._0_4_ = iVar49;
    auVar86._8_4_ = iVar49;
    auVar86._12_4_ = iVar49;
    ppplVar42 = ppplVar34;
    iVar47 = 0;
    do {
      local_1e8 = (float)iVar47;
      auVar20 = _DAT_149967440;
      ppplVar34 = ppplVar42 + 8;
      lVar38 = 0;
      auVar88 = pmovsxbd(auVar87,0x3020100);
      do {
        auVar87 = *(undefined1 (*) [16])((longlong)ppplVar42 + lVar38 * 4);
        auVar102._0_8_ = (ulonglong)auVar87._6_2_ * 0x2040811;
        auVar102._8_8_ = (auVar87._8_8_ >> 0x30) * 0x2040811;
        auVar90._4_4_ = auVar87._0_4_ / 0x7f0000;
        auVar90._12_4_ = auVar87._8_4_ / 0x7f0000;
        auVar90._0_4_ = auVar90._4_4_;
        auVar90._8_4_ = auVar90._12_4_;
        auVar91 = pblendw(auVar90,auVar102,0xcc);
        auVar103 = pshufb(auVar87,ZEXT416(0xd090501));
        auVar78 = pmovzxbw(auVar11,auVar103);
        uVar15 = auVar78._0_2_ * 3;
        uVar17 = auVar78._2_2_ * 3;
        uVar18 = auVar78._4_2_ * 3;
        uVar16 = auVar78._6_2_ * 3;
        uVar14 = auVar78._8_2_ * 3;
        uVar12 = auVar78._10_2_ * 3;
        uVar13 = auVar78._12_2_ * 3;
        uVar52 = auVar78._14_2_ * 3;
        uVar51 = uVar15 >> 8;
        uVar71 = uVar17 >> 8;
        uVar72 = uVar18 >> 8;
        uVar73 = uVar16 >> 8;
        uVar74 = uVar14 >> 8;
        uVar75 = uVar12 >> 8;
        uVar76 = uVar13 >> 8;
        uVar77 = uVar52 >> 8;
        cVar2 = (uVar51 != 0) * (uVar51 < 0x100) * (char)(uVar15 >> 8) - (0xff < uVar51);
        cVar3 = (uVar71 != 0) * (uVar71 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar71);
        cVar4 = (uVar72 != 0) * (uVar72 < 0x100) * (char)(uVar18 >> 8) - (0xff < uVar72);
        cVar5 = (uVar73 != 0) * (uVar73 < 0x100) * (char)(uVar16 >> 8) - (0xff < uVar73);
        cVar6 = (uVar74 != 0) * (uVar74 < 0x100) * (char)(uVar14 >> 8) - (0xff < uVar74);
        cVar7 = (uVar75 != 0) * (uVar75 < 0x100) * (char)(uVar12 >> 8) - (0xff < uVar75);
        cVar8 = (uVar76 != 0) * (uVar76 < 0x100) * (char)(uVar13 >> 8) - (0xff < uVar76);
        cVar9 = (uVar77 != 0) * (uVar77 < 0x100) * (char)(uVar52 >> 8) - (0xff < uVar77);
        uVar52 = CONCAT11(auVar103[1] - cVar3,auVar103[0] - cVar2);
        uVar58 = CONCAT13(auVar103[3] - cVar5,CONCAT12(auVar103[2] - cVar4,uVar52));
        uVar59 = CONCAT15(auVar103[5] - cVar7,CONCAT14(auVar103[4] - cVar6,uVar58));
        uVar60 = CONCAT17(auVar103[7] - cVar9,CONCAT16(auVar103[6] - cVar8,uVar59));
        auVar98._0_10_ = CONCAT19(auVar103[9],CONCAT18(auVar103[8],uVar60));
        auVar98[10] = auVar103[10];
        auVar98[0xb] = auVar103[0xb];
        auVar100[0xc] = auVar103[0xc];
        auVar100._0_12_ = auVar98;
        auVar100[0xd] = auVar103[0xd];
        auVar104[0xe] = auVar103[0xe];
        auVar104[0xf] = auVar103[0xf];
        auVar104._0_14_ = auVar100;
        auVar105._0_2_ = uVar52 >> 1;
        auVar105._2_2_ = (ushort)((uint)uVar58 >> 0x11);
        auVar105._4_2_ = (ushort)((uint6)uVar59 >> 0x21);
        auVar105._6_2_ = (ushort)((ulonglong)uVar60 >> 0x31);
        auVar105._8_2_ = (ushort)((unkuint10)auVar98._0_10_ >> 0x41);
        auVar105._10_2_ = auVar98._10_2_ >> 1;
        auVar105._12_2_ = auVar100._12_2_ >> 1;
        auVar105._14_2_ = auVar104._14_2_ >> 1;
        auVar105 = auVar105 & auVar20;
        uVar94 = CONCAT11(auVar105[1] + cVar3,auVar105[0] + cVar2);
        uVar95 = CONCAT13(auVar105[3] + cVar5,CONCAT12(auVar105[2] + cVar4,uVar94));
        uVar96 = CONCAT15(auVar105[5] + cVar7,CONCAT14(auVar105[4] + cVar6,uVar95));
        uVar97 = CONCAT17(auVar105[7] + cVar9,CONCAT16(auVar105[6] + cVar8,uVar96));
        auVar99._0_10_ = CONCAT19(auVar105[9],CONCAT18(auVar105[8],uVar97));
        auVar99[10] = auVar105[10];
        auVar99[0xb] = auVar105[0xb];
        auVar101[0xc] = auVar105[0xc];
        auVar101._0_12_ = auVar99;
        auVar101[0xd] = auVar105[0xd];
        auVar106[0xe] = auVar105[0xe];
        auVar106[0xf] = auVar105[0xf];
        auVar106._0_14_ = auVar101;
        auVar78 = pshufb(auVar87,ZEXT416(0xc080400));
        auVar103 = pmovzxbw(ZEXT416(0xc080400),auVar78);
        uVar15 = auVar103._0_2_ * 3;
        uVar17 = auVar103._2_2_ * 3;
        uVar18 = auVar103._4_2_ * 3;
        uVar16 = auVar103._6_2_ * 3;
        uVar14 = auVar103._8_2_ * 3;
        uVar12 = auVar103._10_2_ * 3;
        uVar13 = auVar103._12_2_ * 3;
        uVar52 = auVar103._14_2_ * 3;
        uVar51 = uVar15 >> 8;
        uVar71 = uVar17 >> 8;
        uVar72 = uVar18 >> 8;
        uVar73 = uVar16 >> 8;
        uVar74 = uVar14 >> 8;
        uVar75 = uVar12 >> 8;
        uVar76 = uVar13 >> 8;
        uVar77 = uVar52 >> 8;
        cVar3 = (uVar51 != 0) * (uVar51 < 0x100) * (char)(uVar15 >> 8) - (0xff < uVar51);
        cVar9 = (uVar71 != 0) * (uVar71 < 0x100) * (char)(uVar17 >> 8) - (0xff < uVar71);
        cVar8 = (uVar72 != 0) * (uVar72 < 0x100) * (char)(uVar18 >> 8) - (0xff < uVar72);
        cVar7 = (uVar73 != 0) * (uVar73 < 0x100) * (char)(uVar16 >> 8) - (0xff < uVar73);
        cVar6 = (uVar74 != 0) * (uVar74 < 0x100) * (char)(uVar14 >> 8) - (0xff < uVar74);
        cVar5 = (uVar75 != 0) * (uVar75 < 0x100) * (char)(uVar12 >> 8) - (0xff < uVar75);
        cVar4 = (uVar76 != 0) * (uVar76 < 0x100) * (char)(uVar13 >> 8) - (0xff < uVar76);
        cVar2 = (uVar77 != 0) * (uVar77 < 0x100) * (char)(uVar52 >> 8) - (0xff < uVar77);
        uVar52 = CONCAT11(auVar78[1] - cVar9,auVar78[0] - cVar3);
        uVar58 = CONCAT13(auVar78[3] - cVar7,CONCAT12(auVar78[2] - cVar8,uVar52));
        uVar59 = CONCAT15(auVar78[5] - cVar5,CONCAT14(auVar78[4] - cVar6,uVar58));
        uVar60 = CONCAT17(auVar78[7] - cVar2,CONCAT16(auVar78[6] - cVar4,uVar59));
        auVar63._0_10_ = CONCAT19(auVar78[9],CONCAT18(auVar78[8],uVar60));
        auVar63[10] = auVar78[10];
        auVar63[0xb] = auVar78[0xb];
        auVar65[0xc] = auVar78[0xc];
        auVar65._0_12_ = auVar63;
        auVar65[0xd] = auVar78[0xd];
        auVar103[0xe] = auVar78[0xe];
        auVar103[0xf] = auVar78[0xf];
        auVar103._0_14_ = auVar65;
        auVar67._0_2_ = uVar52 >> 1;
        auVar67._2_2_ = (ushort)((uint)uVar58 >> 0x11);
        auVar67._4_2_ = (ushort)((uint6)uVar59 >> 0x21);
        auVar67._6_2_ = (ushort)((ulonglong)uVar60 >> 0x31);
        auVar67._8_2_ = (ushort)((unkuint10)auVar63._0_10_ >> 0x41);
        auVar67._10_2_ = auVar63._10_2_ >> 1;
        auVar67._12_2_ = auVar65._12_2_ >> 1;
        auVar67._14_2_ = auVar103._14_2_ >> 1;
        auVar67 = auVar67 & auVar20;
        uVar52 = CONCAT11(auVar67[1] + cVar9,auVar67[0] + cVar3);
        uVar58 = CONCAT13(auVar67[3] + cVar7,CONCAT12(auVar67[2] + cVar8,uVar52));
        uVar59 = CONCAT15(auVar67[5] + cVar5,CONCAT14(auVar67[4] + cVar6,uVar58));
        uVar60 = CONCAT17(auVar67[7] + cVar2,CONCAT16(auVar67[6] + cVar4,uVar59));
        auVar64._0_10_ = CONCAT19(auVar67[9],CONCAT18(auVar67[8],uVar60));
        auVar64[10] = auVar67[10];
        auVar64[0xb] = auVar67[0xb];
        auVar66[0xc] = auVar67[0xc];
        auVar66._0_12_ = auVar64;
        auVar66[0xd] = auVar67[0xd];
        auVar68[0xe] = auVar67[0xe];
        auVar68[0xf] = auVar67[0xf];
        auVar68._0_14_ = auVar66;
        auVar92._0_4_ = auVar91._0_4_ + -1;
        auVar92._4_4_ = auVar91._4_4_ + -1;
        auVar92._8_4_ = auVar91._8_4_ + -1;
        auVar92._12_4_ = auVar91._12_4_ + -1;
        auVar91._0_2_ = uVar52 >> 6;
        auVar91._2_2_ = (ushort)((uint)uVar58 >> 0x16);
        auVar91._4_2_ = (ushort)((uint6)uVar59 >> 0x26);
        auVar91._6_2_ = (ushort)((ulonglong)uVar60 >> 0x36);
        auVar91._8_2_ = (ushort)((unkuint10)auVar64._0_10_ >> 0x46);
        auVar91._10_2_ = auVar64._10_2_ >> 6;
        auVar91._12_2_ = auVar66._12_2_ >> 6;
        auVar91._14_2_ = auVar68._14_2_ >> 6;
        auVar91 = auVar91 & auVar85;
        auVar78 = pmovzxbd(auVar91,auVar91);
        auVar69._0_4_ = auVar78._0_4_ + -1;
        auVar69._4_4_ = auVar78._4_4_ + -1;
        auVar69._8_4_ = auVar78._8_4_ + -1;
        auVar69._12_4_ = auVar78._12_4_ + -1;
        auVar103 = pmulld(auVar69,auVar86);
        auVar67 = pmulld(auVar92,auVar88);
        auVar107._0_2_ = uVar94 >> 6;
        auVar107._2_2_ = (ushort)((uint)uVar95 >> 0x16);
        auVar107._4_2_ = (ushort)((uint6)uVar96 >> 0x26);
        auVar107._6_2_ = (ushort)((ulonglong)uVar97 >> 0x36);
        auVar107._8_2_ = (ushort)((unkuint10)auVar99._0_10_ >> 0x46);
        auVar107._10_2_ = auVar99._10_2_ >> 6;
        auVar107._12_2_ = auVar101._12_2_ >> 6;
        auVar107._14_2_ = auVar106._14_2_ >> 6;
        auVar78 = pmovzxbd(auVar103,auVar107 & auVar85);
        auVar70._0_4_ = auVar78._0_4_ + -1;
        auVar70._4_4_ = auVar78._4_4_ + -1;
        auVar70._8_4_ = auVar78._8_4_ + -1;
        auVar70._12_4_ = auVar78._12_4_ + -1;
        auVar78._4_4_ = local_1e8;
        auVar78._0_4_ = local_1e8;
        auVar78._8_4_ = local_1e8;
        auVar78._12_4_ = local_1e8;
        auVar78 = pmulld(auVar70,auVar78);
        auVar93._0_4_ = (auVar67._0_4_ + auVar103._0_4_ + auVar78._0_4_) * 0x1000000 + auVar11._0_4_
        ;
        auVar93._4_4_ = (auVar67._4_4_ + auVar103._4_4_ + auVar78._4_4_) * 0x1000000 + auVar11._4_4_
        ;
        auVar93._8_4_ = (auVar67._8_4_ + auVar103._8_4_ + auVar78._8_4_) * 0x1000000 + auVar11._8_4_
        ;
        auVar93._12_4_ =
             (auVar67._12_4_ + auVar103._12_4_ + auVar78._12_4_) * 0x1000000 + auVar11._12_4_;
        *(undefined1 (*) [16])((longlong)ppplVar42 + lVar38 * 4) = auVar93 | auVar87;
        lVar38 = lVar38 + 4;
        auVar87._0_4_ = auVar88._0_4_ + auVar79._0_4_;
        auVar87._4_4_ = auVar88._4_4_ + auVar79._4_4_;
        auVar87._8_4_ = auVar88._8_4_ + auVar79._8_4_;
        auVar87._12_4_ = auVar88._12_4_ + auVar79._12_4_;
        auVar88 = auVar87;
      } while (lVar38 != 0x10);
      ppplVar42 = ppplVar34;
      iVar47 = (int)local_1e8 + 1;
    } while ((int)local_1e8 + 1 != 0x10);
    iVar49 = iVar49 + 1;
  } while (iVar49 != 0x10);
  local_158 = (longlong ***)0x0;
  uStack_150 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0x10;
  uStack_13c = 0x10;
  uStack_138 = 0x10;
  iStack_1e4 = (int)local_1e8;
  iStack_1e0 = (int)local_1e8;
  iStack_1dc = (int)local_1e8;
  if (*(char *)(lVar28 + 0x69) == '\0') {
    FUN_14002049c(lVar28,1);
    local_220 = (longlong **)uVar1;
    local_228 = (longlong ***)CONCAT44(local_228._4_4_,0x400);
    local_230 = (longlong ****)CONCAT44(local_230._4_4_,0x40);
    local_238 = (longlong ***)&local_158;
    (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,lVar28,ppplVar35,0);
    FUN_14002049c(lVar28,0);
  }
  else {
    local_220 = (longlong **)local_198._0_8_;
    local_228 = (longlong ***)CONCAT44(local_228._4_4_,0x400);
    local_230 = (longlong ****)CONCAT44(local_230._4_4_,0x40);
    local_238 = (longlong ***)&local_158;
    (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,lVar28,local_1b0,0);
  }
  FUN_1447ec05f(&local_1a0,local_1b0,L"PerlinNoise3D");
  pplVar19 = (longlong **)(lVar26 + 0x38);
  if (pplVar19 == &local_1a0) {
LAB_14097a713:
    if (local_1a0 != (longlong *)0x0) {
      (**(code **)(*local_1a0 + 0x38))();
    }
  }
  else {
    plVar31 = *pplVar19;
    *pplVar19 = local_1a0;
    local_1a0 = (longlong *)0x0;
    if (plVar31 != (longlong *)0x0) {
      (**(code **)(*plVar31 + 0x38))();
      goto LAB_14097a713;
    }
  }
  if ((longlong ***)local_198._0_8_ != (longlong ***)0x0) {
    FUN_1400020a8();
  }
  ppplVar35 = local_1b0;
  if ((longlong ****)local_1b0 != (longlong ****)0x0) {
    LOCK();
    pppplVar48 = (longlong ****)(local_1b0 + 1);
    ppplVar34 = *pppplVar48;
    *(uint *)pppplVar48 = *(uint *)pppplVar48 - 1;
    UNLOCK();
    if (((ulonglong)ppplVar34 & 0x3fffffff) == 1) {
      pppplVar48 = (longlong ****)(local_1b0 + 1);
      LOCK();
      uVar36 = *(uint *)pppplVar48;
      *(uint *)pppplVar48 = *(uint *)pppplVar48 | 0x40000000;
      UNLOCK();
      if ((uVar36 >> 0x1e & 1) == 0) {
        bVar39 = *(byte *)((longlong)local_1b0 + 0xd);
        plVar27 = (longlong *)FUN_14001cc68(0x10,8);
        plVar27[1] = (longlong)ppplVar35;
        plVar31 = DAT_14ca843c0;
        plVar30 = DAT_14ca843c8;
        lVar28 = local_210;
        if ((bVar39 & 2) == 0) {
          do {
            *plVar27 = (longlong)plVar31;
            LOCK();
            bVar50 = plVar31 != DAT_14ca843c0;
            plVar30 = plVar27;
            if (bVar50) {
              plVar31 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar30;
            UNLOCK();
          } while (bVar50);
        }
        else {
          do {
            *plVar27 = (longlong)plVar30;
            LOCK();
            bVar50 = plVar30 != DAT_14ca843c8;
            plVar31 = plVar27;
            if (bVar50) {
              plVar30 = DAT_14ca843c8;
              plVar31 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar31;
            UNLOCK();
          } while (bVar50);
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca60888) && (FUN_144b3d300(&DAT_14ca60888), DAT_14ca60888 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar31 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Mobile.AmbientOcclusion",1);
    if (plVar31 == (longlong *)0x0) {
      DAT_14ca60880 = 0;
    }
    else {
      DAT_14ca60880 = (**(code **)(*plVar31 + 0x68))(plVar31);
    }
    _Init_thread_footer(&DAT_14ca60888);
    lVar28 = local_210;
    lVar26 = local_200;
  }
  lVar38 = DAT_14ca60880;
  if (local_201 == '\0') {
    if (DAT_14ca60880 != 0 && local_1f8 < 1) {
      iVar49 = *(int *)(*(longlong *)
                         ((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) + 0xc60);
      if (iVar49 == 0x40000002) {
        uVar46 = 0;
      }
      else {
        bVar50 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar49 != 2)) {
          if (iVar49 == 1) {
            DVar24 = FUN_140ad26c0();
            DVar25 = GetCurrentThreadId();
            bVar50 = DVar24 == DVar25;
          }
          else {
            bVar50 = false;
          }
        }
        uVar46 = (ulonglong)(bVar50 ^ 1);
      }
      if (0 < *(int *)(lVar38 + uVar46 * 4)) goto LAB_14097a83b;
    }
  }
  else {
LAB_14097a83b:
    lVar38 = 0;
    do {
      fVar80 = (float)*(int *)((longlong)&DAT_14a313f50 + lVar38) * 0.0625 * 3.1415927;
      fVar53 = sinf((float)*(int *)((longlong)&DAT_14a313f50 + lVar38) * 198.0 * 0.01);
      fVar89 = (fVar53 * 0.5 + 0.5) * -23.0 * 0.01 + 1.0;
      fVar53 = sinf(fVar80);
      fVar80 = cosf(fVar80);
      *(uint *)(local_198 + lVar38) =
           ((int)((fVar53 * fVar89 * 0.5 + 0.5) * 255.0 + 0.5) & 0xffU) << 8 |
           ((int)((fVar80 * fVar89 * 0.5 + 0.5) * 255.0 + 0.5) & 0xffU) << 0x10;
      lVar38 = lVar38 + 4;
    } while (lVar38 != 0x40);
    bVar39 = (byte)DAT_14c760da4 & 0x1f;
    if ((longlong)DAT_14ca60870 < 0) {
      ppplVar35 = (longlong ***)(DAT_14ca60870 & 0x7fffffffffffffff);
      if (DAT_14ca6087c == '\x01') {
        pppplVar48 = &local_158;
        FUN_1446f470e(pppplVar48,ppplVar35,1);
      }
      else {
        local_158 = ppplVar35;
        if (ppplVar35 == (longlong ***)0x0) {
          uStack_150 = 0;
        }
        else {
          sVar32 = strlen((char *)ppplVar35);
          uStack_150 = (undefined4)sVar32;
        }
        pppplVar48 = &local_1b0;
        FUN_14001c09c(pppplVar48,&local_158,1);
      }
      DAT_14ca60870 = (ulonglong)*(uint *)pppplVar48;
      local_108 = CONCAT44(DAT_14ca60878,*(uint *)pppplVar48);
      lVar28 = local_210;
      lVar26 = local_200;
    }
    else {
      local_108 = DAT_14ca60870 & 0xffffffff | (ulonglong)DAT_14ca60878 << 0x20;
    }
    local_126 = 0xff002800;
    local_158 = (longlong ***)&DAT_00000008;
    local_134 = (undefined1 *)0x4000000040;
    local_12c = 1;
    uStack_12a = 1;
    local_128 = 1;
    uStack_127 = 1;
    uStack_150 = 1;
    uStack_138 = 0;
    uStack_14c = 0;
    uStack_148 = 0;
    uStack_144 = 0;
    uStack_140 = 0;
    local_118 = L"SSAORandomization";
    iVar49 = 0;
    local_110 = 0;
    local_100 = 0;
    local_120 = 0x70;
    uStack_13c = ~(-1 << bVar39);
    (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_1b0,&DAT_14ca85100,&local_158);
    local_218 = 0;
    local_238 = (longlong ***)CONCAT44(local_238._4_4_,1);
    local_220 = (longlong **)CONCAT71(local_220._1_7_,1);
    local_228 = (longlong ***)((ulonglong)local_228 & 0xffffffffffffff00);
    local_230 = (longlong ****)&local_1a0;
    lVar38 = (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,lVar28,local_1b0,0);
    do {
      lVar40 = 0;
      do {
        lVar41 = (ulonglong)(uint)((int)local_1a0 * iVar49) + lVar38;
        uVar46 = (ulonglong)((uint)lVar40 & 3 | iVar49 * 4 & 0xcU);
        *(undefined1 *)(lVar41 + lVar40 * 2) = local_198[uVar46 * 4 + 2];
        *(undefined1 *)(lVar41 + 1 + lVar40 * 2) = local_198[uVar46 * 4 + 1];
        lVar40 = lVar40 + 1;
      } while (lVar40 != 0x40);
      iVar49 = iVar49 + 1;
    } while (iVar49 != 0x40);
    local_230 = (longlong ****)CONCAT71(local_230._1_7_,1);
    local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffffffffff00);
    (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,lVar28,local_1b0,0);
    FUN_1447ec05f(&local_158,local_1b0,L"SSAORandomization");
    pppplVar48 = (longlong ****)(lVar26 + 0x48);
    if (pppplVar48 == &local_158) {
LAB_14097aaec:
      if (local_158 != (longlong ***)0x0) {
        (*(code *)(*local_158)[7])();
      }
    }
    else {
      ppplVar35 = *pppplVar48;
      *pppplVar48 = local_158;
      local_158 = (longlong ***)0x0;
      if (ppplVar35 != (longlong ***)0x0) {
        (*(code *)(*ppplVar35)[7])();
        goto LAB_14097aaec;
      }
    }
    ppplVar35 = local_1b0;
    if ((longlong ****)local_1b0 != (longlong ****)0x0) {
      LOCK();
      pppplVar48 = (longlong ****)(local_1b0 + 1);
      ppplVar34 = *pppplVar48;
      *(uint *)pppplVar48 = *(uint *)pppplVar48 - 1;
      UNLOCK();
      if (((ulonglong)ppplVar34 & 0x3fffffff) == 1) {
        pppplVar48 = (longlong ****)(local_1b0 + 1);
        LOCK();
        uVar36 = *(uint *)pppplVar48;
        *(uint *)pppplVar48 = *(uint *)pppplVar48 | 0x40000000;
        UNLOCK();
        if ((uVar36 >> 0x1e & 1) == 0) {
          bVar39 = *(byte *)((longlong)local_1b0 + 0xd);
          plVar27 = (longlong *)FUN_14001cc68(0x10,8);
          plVar27[1] = (longlong)ppplVar35;
          plVar31 = DAT_14ca843c0;
          plVar30 = DAT_14ca843c8;
          if ((bVar39 & 2) == 0) {
            do {
              *plVar27 = (longlong)plVar31;
              LOCK();
              bVar50 = plVar31 != DAT_14ca843c0;
              plVar30 = plVar27;
              if (bVar50) {
                plVar31 = DAT_14ca843c0;
                plVar30 = DAT_14ca843c0;
              }
              DAT_14ca843c0 = plVar30;
              UNLOCK();
            } while (bVar50);
          }
          else {
            do {
              *plVar27 = (longlong)plVar30;
              LOCK();
              bVar50 = plVar30 != DAT_14ca843c8;
              plVar31 = plVar27;
              if (bVar50) {
                plVar30 = DAT_14ca843c8;
                plVar31 = DAT_14ca843c8;
              }
              DAT_14ca843c8 = plVar31;
              UNLOCK();
            } while (bVar50);
          }
        }
      }
    }
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca60898) && (FUN_144b3d300(&DAT_14ca60898), DAT_14ca60898 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar31 = (longlong *)
              (**(code **)(*DAT_14c8407a8 + 200))
                        (DAT_14c8407a8,L"r.Mobile.GTAOPreIntegratedTextureType",1);
    if (plVar31 == (longlong *)0x0) {
      DAT_14ca60890 = 0;
    }
    else {
      DAT_14ca60890 = (**(code **)(*plVar31 + 0x68))(plVar31);
    }
    _Init_thread_footer(&DAT_14ca60898);
  }
  lVar26 = DAT_14ca60890;
  if (DAT_14ca60890 != 0 && local_1f8 < 1) {
    lVar28 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    iVar49 = *(int *)(lVar28 + 0xc60);
    if (iVar49 == 0x40000002) {
      uVar46 = 0;
    }
    else {
      bVar50 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar49 != 2)) {
        if (iVar49 == 1) {
          DVar24 = FUN_140ad26c0();
          DVar25 = GetCurrentThreadId();
          bVar50 = DVar24 == DVar25;
        }
        else {
          bVar50 = false;
        }
      }
      uVar46 = (ulonglong)(bVar50 ^ 1);
    }
    lVar38 = DAT_14ca60890;
    if (0 < *(int *)(lVar26 + uVar46 * 4)) {
      iVar49 = *(int *)(lVar28 + 0xc60);
      if (iVar49 == 0x40000002) {
        uVar46 = 0;
      }
      else {
        bVar50 = true;
        if ((DAT_14c86a9f8 == '\x01') && (iVar49 != 2)) {
          if (iVar49 == 1) {
            DVar24 = FUN_140ad26c0();
            DVar25 = GetCurrentThreadId();
            bVar50 = DVar24 == DVar25;
          }
          else {
            bVar50 = false;
          }
        }
        uVar46 = (ulonglong)(bVar50 ^ 1);
      }
      local_1e8 = *(float *)(lVar38 + uVar46 * 4);
      bVar50 = local_1e8 == 2.8026e-45;
      uVar22 = 1;
      if (bVar50) {
        uVar22 = 0x10;
      }
      bVar39 = (byte)DAT_14c760da4 & 0x1f;
      if ((longlong)DAT_14ca60870 < 0) {
        ppplVar35 = (longlong ***)(DAT_14ca60870 & 0x7fffffffffffffff);
        if (DAT_14ca6087c == '\x01') {
          pppplVar48 = &local_158;
          FUN_1446f470e(pppplVar48,ppplVar35,1);
        }
        else {
          local_158 = ppplVar35;
          if (ppplVar35 == (longlong ***)0x0) {
            uStack_150 = 0;
          }
          else {
            sVar32 = strlen((char *)ppplVar35);
            uStack_150 = (undefined4)sVar32;
          }
          pppplVar48 = (longlong ****)local_198;
          FUN_14001c09c(pppplVar48,&local_158,1);
        }
        DAT_14ca60870 = (ulonglong)*(uint *)pppplVar48;
        local_108 = CONCAT44(DAT_14ca60878,*(uint *)pppplVar48);
      }
      else {
        local_108 = DAT_14ca60870 & 0xffffffff | (ulonglong)DAT_14ca60878 << 0x20;
      }
      local_158 = (longlong ***)&DAT_00000008;
      local_134 = (undefined1 *)0x1000000010;
      uStack_12a = 1;
      local_128 = 1;
      uStack_127 = 1;
      uStack_150 = 1;
      uStack_138 = 0;
      uStack_14c = 0;
      uStack_148 = 0;
      uStack_144 = 0;
      uStack_140 = 0;
      local_126 = CONCAT13(0xff,CONCAT21(0x15,bVar50 * '\x02'));
      local_118 = L"GTAOPreIntegrated";
      uVar46 = 0;
      local_110 = 0;
      local_100 = 0;
      local_120 = 0x70;
      uStack_13c = ~(-1 << bVar39);
      local_12c = uVar22;
      (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,&local_1b0,&DAT_14ca85100,&local_158);
      local_198._0_12_ = ZEXT412(0x1000) << 0x40;
      local_198._12_4_ = 0;
      FUN_146310414(local_198);
      ppplVar35 = (longlong ***)local_198._0_8_;
      memset((void *)local_198._0_8_,0,0x2000);
      if (local_1e8 != 2.8026e-45) {
        local_218 = 0;
        local_220 = (longlong **)CONCAT71(local_220._1_7_,1);
        local_228 = (longlong ***)((ulonglong)local_228 & 0xffffffffffffff00);
        local_238 = (longlong ***)CONCAT44(local_238._4_4_,1);
        local_230 = &local_158;
        ppplVar35 = (longlong ***)
                    (**(code **)(*DAT_14ca83900 + 0x430))(DAT_14ca83900,local_210,local_1b0,0);
      }
      do {
        iVar49 = (int)uVar46;
        fVar80 = ((float)iVar49 + 0.5) * 0.0625 + -0.5;
        fVar80 = fVar80 + fVar80;
        fVar53 = fVar80;
        if (1.0 <= fVar80) {
          fVar53 = 1.0;
        }
        iVar47 = 0;
        local_1d0 = uVar46;
        do {
          fVar82 = ((float)iVar47 + 0.5) * 0.0625 + -0.5;
          fVar82 = fVar82 + fVar82;
          fVar89 = fVar82;
          if (1.0 <= fVar82) {
            fVar89 = 1.0;
          }
          uVar36 = iVar47 * 0x10 + iVar49 * 0x100;
          if (local_1e8 != 2.8026e-45) {
            uVar36 = iVar47 * 0x100 + iVar49 * 0x10;
          }
          lVar26 = 0;
          do {
            fVar83 = ((float)(int)lVar26 + 0.5) * 0.0625 + -0.5;
            fVar83 = fVar83 + fVar83;
            fVar54 = acosf((float)(~-(uint)(fVar80 < -1.0) & (uint)fVar53 |
                                  -(uint)(fVar80 < -1.0) & 0xbf800000));
            fVar54 = fVar54 + -1.5707964;
            fVar55 = cosf(fVar54);
            fVar81 = fVar83;
            if (1.0 <= fVar83) {
              fVar81 = 1.0;
            }
            fVar83 = acosf((float)(~-(uint)(fVar83 < -1.0) & (uint)fVar81 |
                                  -(uint)(fVar83 < -1.0) & 0xbf800000));
            fVar84 = acosf((float)(~-(uint)(fVar82 < -1.0) & (uint)fVar89 |
                                  -(uint)(fVar82 < -1.0) & 0xbf800000));
            fVar81 = -fVar83 - fVar54;
            if (-fVar83 - fVar54 <= -1.5707964) {
              fVar81 = -1.5707964;
            }
            fVar84 = fVar84 - fVar54;
            if (1.5707964 <= fVar84) {
              fVar84 = 1.5707964;
            }
            dVar61 = (double)(fVar81 + fVar54);
            dVar61 = cos((dVar61 + dVar61) - (double)fVar54);
            dVar62 = (double)(fVar84 + fVar54);
            dVar62 = cos((dVar62 + dVar62) - (double)fVar54);
            ppplVar34 = local_1b0;
            lVar38 = local_200;
            lVar28 = local_210;
            fVar54 = (float)((((double)((fVar84 + fVar54) * fVar80 * -2.0 + fVar55) - dVar62) +
                             ((double)((fVar81 + fVar54) * fVar80 * -2.0 + fVar55) - dVar61)) * 0.25
                            );
            fVar81 = ABS(fVar54);
            if ((uint)fVar81 < 0x47800000) {
              if (0x387fffff < (uint)fVar81) {
                fVar81 = (float)((int)fVar81 + 0x8000fff + (uint)(((uint)fVar81 >> 0xd & 1) != 0) >>
                                0xd);
                fVar55 = fVar81;
                goto LAB_14097b253;
              }
              uVar52 = SUB42(fVar81 + 0.5,0);
            }
            else {
              fVar55 = (float)((0x7f800000 < (uint)fVar81 | 0x3e) << 9);
LAB_14097b253:
              uVar52 = SUB42(fVar55,0);
            }
            iVar33 = movmskps(fVar81,ZEXT416((uint)fVar54));
            *(ushort *)((longlong)ppplVar35 + lVar26 * 2 + (ulonglong)uVar36 * 2) =
                 (ushort)(iVar33 << 0xf) | uVar52;
            lVar26 = lVar26 + 1;
          } while (lVar26 != 0x10);
          iVar47 = iVar47 + 1;
        } while (iVar47 != 0x10);
        uVar36 = (int)local_1d0 + 1;
        uVar46 = (ulonglong)uVar36;
      } while (uVar36 != 0x10);
      if (local_1e8 == 2.8026e-45) {
        local_158 = (longlong ***)0x0;
        uStack_150 = 0;
        uStack_14c = 0;
        uStack_148 = 0;
        uStack_144 = 0;
        uStack_140 = 0x10;
        uStack_13c = 0x10;
        uStack_138 = 0x10;
        if (*(char *)(local_210 + 0x69) == '\0') {
          FUN_14002049c(local_210,1);
          local_228 = (longlong ***)CONCAT44(local_228._4_4_,0x200);
          local_230 = (longlong ****)CONCAT44(local_230._4_4_,0x20);
          local_238 = (longlong ***)&local_158;
          local_220 = (longlong **)ppplVar35;
          (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,lVar28,ppplVar34,0);
          FUN_14002049c(lVar28,0);
        }
        else {
          local_228 = (longlong ***)CONCAT44(local_228._4_4_,0x200);
          local_230 = (longlong ****)CONCAT44(local_230._4_4_,0x20);
          local_238 = (longlong ***)&local_158;
          local_220 = (longlong **)ppplVar35;
          (**(code **)(*DAT_14ca83900 + 0x220))(DAT_14ca83900,local_210,local_1b0,0);
        }
      }
      else {
        local_230 = (longlong ****)CONCAT71(local_230._1_7_,1);
        local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffffffffff00);
        (**(code **)(*DAT_14ca83900 + 0x438))(DAT_14ca83900,local_210,local_1b0,0);
        lVar38 = local_200;
      }
      FUN_1447ec05f(&local_158,local_1b0,L"GTAOPreIntegrated");
      pppplVar48 = (longlong ****)(lVar38 + 0x50);
      if (pppplVar48 == &local_158) {
LAB_14097b3f1:
        if (local_158 != (longlong ***)0x0) {
          (*(code *)(*local_158)[7])();
        }
      }
      else {
        ppplVar35 = *pppplVar48;
        *pppplVar48 = local_158;
        local_158 = (longlong ***)0x0;
        if (ppplVar35 != (longlong ***)0x0) {
          (*(code *)(*ppplVar35)[7])();
          goto LAB_14097b3f1;
        }
      }
      if ((longlong ***)local_198._0_8_ != (longlong ***)0x0) {
        FUN_1400020a8();
      }
      ppplVar35 = local_1b0;
      if ((longlong ****)local_1b0 != (longlong ****)0x0) {
        LOCK();
        pppplVar48 = (longlong ****)(local_1b0 + 1);
        ppplVar34 = *pppplVar48;
        *(uint *)pppplVar48 = *(uint *)pppplVar48 - 1;
        UNLOCK();
        if (((ulonglong)ppplVar34 & 0x3fffffff) == 1) {
          pppplVar48 = (longlong ****)(local_1b0 + 1);
          LOCK();
          uVar36 = *(uint *)pppplVar48;
          *(uint *)pppplVar48 = *(uint *)pppplVar48 | 0x40000000;
          UNLOCK();
          if ((uVar36 >> 0x1e & 1) == 0) {
            bVar39 = *(byte *)((longlong)local_1b0 + 0xd);
            plVar27 = (longlong *)FUN_14001cc68(0x10,8);
            plVar27[1] = (longlong)ppplVar35;
            plVar31 = DAT_14ca843c0;
            plVar30 = DAT_14ca843c8;
            if ((bVar39 & 2) == 0) {
              do {
                *plVar27 = (longlong)plVar31;
                LOCK();
                bVar50 = plVar31 != DAT_14ca843c0;
                plVar30 = plVar27;
                if (bVar50) {
                  plVar31 = DAT_14ca843c0;
                  plVar30 = DAT_14ca843c0;
                }
                DAT_14ca843c0 = plVar30;
                UNLOCK();
              } while (bVar50);
            }
            else {
              do {
                *plVar27 = (longlong)plVar30;
                LOCK();
                bVar50 = plVar30 != DAT_14ca843c8;
                plVar31 = plVar27;
                if (bVar50) {
                  plVar30 = DAT_14ca843c8;
                  plVar31 = DAT_14ca843c8;
                }
                DAT_14ca843c8 = plVar31;
                UNLOCK();
              } while (bVar50);
            }
          }
        }
      }
    }
  }
  bVar39 = (byte)DAT_14c760da4 & 0x1f;
  ppplVar35 = (longlong ***)((ulonglong)(3 < local_1f4) << 0x21 | 8);
  if ((longlong)DAT_14ca60870 < 0) {
    ppplVar34 = (longlong ***)(DAT_14ca60870 & 0x7fffffffffffffff);
    if (DAT_14ca6087c == '\x01') {
      FUN_1446f470e(local_198,ppplVar34,1);
    }
    else {
      local_158 = ppplVar34;
      if (ppplVar34 == (longlong ***)0x0) {
        uStack_150 = 0;
      }
      else {
        sVar32 = strlen((char *)ppplVar34);
        uStack_150 = (undefined4)sVar32;
      }
      FUN_14001c09c(local_198,&local_158,1);
    }
    DAT_14ca60870 = (ulonglong)(uint)local_198._0_4_;
    local_108 = CONCAT44(DAT_14ca60878,local_198._0_4_);
  }
  else {
    local_108 = DAT_14ca60870 & 0xffffffff | (ulonglong)DAT_14ca60878 << 0x20;
  }
  local_134 = &DAT_100000001;
  local_12c = 1;
  uStack_12a = 1;
  local_128 = 1;
  uStack_127 = 1;
  uStack_150 = 1;
  uStack_138 = 0;
  uStack_14c = 0;
  uStack_148 = 0;
  uStack_144 = 0;
  uStack_140 = 0;
  local_126 = 0xff001c01;
  local_118 = L"ZeroUIntArrayAtomicCompatDummy";
  local_110 = 0;
  local_100 = 0;
  local_158 = ppplVar35;
  uStack_13c = ~(-1 << bVar39);
  local_120 = FUN_1431edf91(ppplVar35,0);
  (**(code **)(*DAT_14ca83900 + 0x1a0))(DAT_14ca83900,local_198,&DAT_14ca85100,&local_158);
  uVar1 = local_198._0_8_;
  local_220 = (longlong **)((ulonglong)local_220 & 0xffffffffffffff00);
  local_230 = (longlong ****)CONCAT44(local_230._4_4_,1);
  local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffff00000000);
  local_228 = (longlong ***)&local_158;
  puVar29 = (undefined4 *)
            (**(code **)(*DAT_14ca83900 + 0x440))(DAT_14ca83900,&DAT_14ca85100,local_198._0_8_,0);
  *puVar29 = 0;
  local_230 = (longlong ****)((ulonglong)local_230 & 0xffffffffffffff00);
  local_238 = (longlong ***)((ulonglong)local_238 & 0xffffffff00000000);
  (**(code **)(*DAT_14ca83900 + 0x448))(DAT_14ca83900,&DAT_14ca85100,uVar1,0);
  FUN_1447ec05f(&local_158,local_198._0_8_,L"ZeroUIntArrayAtomicCompatDummy");
  lVar26 = local_200;
  pppplVar48 = (longlong ****)(local_200 + 0x100);
  if (pppplVar48 != &local_158) {
    ppplVar35 = *pppplVar48;
    *pppplVar48 = local_158;
    local_158 = (longlong ***)0x0;
    if (ppplVar35 == (longlong ***)0x0) goto LAB_14097ad80;
    (*(code *)(*ppplVar35)[7])();
  }
  if (local_158 != (longlong ***)0x0) {
    (*(code *)(*local_158)[7])();
  }
LAB_14097ad80:
  uVar1 = local_198._0_8_;
  if ((longlong ***)local_198._0_8_ != (longlong ***)0x0) {
    LOCK();
    ppplVar35 = (longlong ***)(local_198._0_8_ + 8);
    pplVar19 = *ppplVar35;
    *(uint *)ppplVar35 = *(uint *)ppplVar35 - 1;
    UNLOCK();
    if (((ulonglong)pplVar19 & 0x3fffffff) == 1) {
      ppplVar35 = (longlong ***)(local_198._0_8_ + 8);
      LOCK();
      uVar36 = *(uint *)ppplVar35;
      *(uint *)ppplVar35 = *(uint *)ppplVar35 | 0x40000000;
      UNLOCK();
      if ((uVar36 >> 0x1e & 1) == 0) {
        bVar39 = *(byte *)(local_198._0_8_ + 0xd);
        plVar27 = (longlong *)FUN_14001cc68(0x10,8);
        plVar27[1] = uVar1;
        plVar31 = DAT_14ca843c0;
        plVar30 = DAT_14ca843c8;
        if ((bVar39 & 2) == 0) {
          do {
            *plVar27 = (longlong)plVar31;
            LOCK();
            bVar50 = plVar31 != DAT_14ca843c0;
            plVar30 = plVar27;
            if (bVar50) {
              plVar31 = DAT_14ca843c0;
              plVar30 = DAT_14ca843c0;
            }
            DAT_14ca843c0 = plVar30;
            UNLOCK();
          } while (bVar50);
        }
        else {
          do {
            *plVar27 = (longlong)plVar30;
            LOCK();
            bVar50 = plVar30 != DAT_14ca843c8;
            plVar31 = plVar27;
            if (bVar50) {
              plVar30 = DAT_14ca843c8;
              plVar31 = DAT_14ca843c8;
            }
            DAT_14ca843c8 = plVar31;
            UNLOCK();
          } while (bVar50);
        }
      }
    }
  }
  *(int *)(lVar26 + 0x120) = local_1f4;
  if ((local_f0 ^ (ulonglong)auStack_258) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14097ba34 FUN_14097ba34 body=413 status=ok
// SIG undefined FUN_14097ba34(void)

void FUN_14097ba34(longlong param_1,undefined8 *param_2,undefined4 param_3)

{
  short *psVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  undefined1 auStack_148 [40];
  undefined1 *local_120;
  code *local_118;
  undefined1 **local_110;
  undefined1 local_108 [192];
  undefined1 *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_148;
  local_48 = (undefined1 *)0x0;
  local_40 = 0x1000000000;
  local_110 = &local_120;
  local_118 = FUN_1427b879c;
  psVar1 = (short *)*param_2;
  local_120 = local_108;
  if (DAT_14c947fe0 == 0) {
    lVar5 = FUN_14001cc68(0x140,0x10);
    FUN_1456b2032(lVar5);
    DAT_14c947fe0 = lVar5;
  }
  if ((psVar1 == (short *)0x0) || (*psVar1 == 0)) {
    FUN_1427b879c(&local_120,&DAT_14c948618);
  }
  else {
    FUN_1446df218(DAT_14c947fe0,psVar1,param_3,&local_118);
  }
  FUN_1447a993c(param_1,local_40 & 0xffffffff);
  if (0 < (int)local_40) {
    lVar5 = 0;
    uVar3 = 0;
    do {
      puVar4 = local_48;
      if (local_48 == (undefined1 *)0x0) {
        puVar4 = local_108;
      }
      uVar3 = uVar3 + 1;
      FUN_1447a993c(param_1,uVar3 & 0xffffffff);
      if ((0 < *(int *)(param_1 + 0x24)) || (lVar2 = param_1 + 8, 1 < *(int *)(param_1 + 4))) {
        lVar2 = *(longlong *)(param_1 + 0x18);
      }
      *(undefined4 *)(lVar2 + 8 + lVar5) = *(undefined4 *)((longlong)(puVar4 + lVar5) + 8);
      *(undefined8 *)(lVar2 + lVar5) = *(undefined8 *)(puVar4 + lVar5);
      lVar5 = lVar5 + 0xc;
    } while ((longlong)uVar3 < (longlong)(int)local_40);
  }
  FUN_14009404e(param_1);
  if (local_48 != (undefined1 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_38 ^ (ulonglong)auStack_148) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097bbd2 FUN_14097bbd2 body=394 status=ok
// SIG undefined FUN_14097bbd2(void)

void FUN_14097bbd2(longlong param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
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
  uVar10 = (ulonglong)param_3;
  uVar5 = lVar4 * uVar10;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      if ((param_4 < 0x11) && (uVar5 < 0x7ff1)) {
        uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar5 + 0xf >> 4]]
        ;
      }
      else {
        uVar7 = 0x10;
        if (0x10 < param_4) {
          uVar7 = (ulonglong)param_4;
        }
        uVar6 = -uVar7 & (uVar5 + uVar7) - 1;
        if ((param_4 < 0x81) && (uVar6 < 0x7ff1)) {
          bVar1 = (&DAT_14c841e00)[uVar6 + 0xf >> 4];
          uVar8 = 0x32;
          if (0x32 < bVar1) {
            uVar8 = (ulonglong)bVar1;
          }
          uVar9 = 0x32 - (ulonglong)bVar1;
          do {
            uVar5 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff];
            if (((uint)uVar7 + 0xffff & (uint)(ushort)(&DAT_14c841d90)[uVar9 & 0xffffffff]) == 0)
            goto LAB_14097bc5e;
            lVar4 = uVar8 + 1 + uVar9;
            uVar9 = uVar9 - 1;
          } while (lVar4 != 0x33);
        }
        if ((uint)uVar7 < DAT_14c841df8) {
          uVar7 = (ulonglong)DAT_14c841df8;
        }
        uVar5 = -uVar7 & (uVar6 + uVar7) - 1;
      }
    }
    else {
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,param_4);
    }
  }
LAB_14097bc5e:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / uVar10)) {
    uVar7 = uVar5 / uVar10 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,uVar10,param_4);
  return;
}



// FUNCTION 14097bd5c FUN_14097bd5c body=236 status=ok
// SIG undefined FUN_14097bd5c(void)

void FUN_14097bd5c(longlong param_1)

{
  char cVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  char *pcVar6;
  
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) == '\x01')) goto LAB_14097be16;
  lVar4 = *(longlong *)(param_1 + 0x48);
  if (*(char *)(lVar4 + 0xa8) == '\0') {
    pcVar6 = (char *)(lVar4 + 0xb8);
    if (0x18 < *(ushort *)(lVar4 + 0xd0)) {
      pcVar6 = *(char **)pcVar6;
    }
    uVar3 = (ulonglong)((uint)*(byte *)(lVar4 + 0xd8) * 0x120);
    if (*(code **)(&DAT_14c9a8620 + uVar3) == (code *)0x0) {
      pcVar5 = pcVar6 + *(int *)((longlong)&DAT_14c9a8510 + uVar3);
      do {
        if (pcVar5 <= pcVar6) goto LAB_14097bddd;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 == '\0');
      goto LAB_14097bd8c;
    }
    cVar1 = (**(code **)(&DAT_14c9a8620 + uVar3))();
    if (cVar1 == '\0') goto LAB_14097bd8c;
  }
  else {
LAB_14097bd8c:
    if (*(int *)(param_1 + 0x70) < 0) {
      FUN_14097be48(param_1);
      return;
    }
  }
LAB_14097bddd:
  lVar4 = FUN_1405f939e(param_1);
  if (((lVar4 != 0) && (lVar4 = FUN_140115352(lVar4), lVar4 != 0)) &&
     (bVar2 = FUN_1406ee510(*(undefined8 *)(lVar4 + 0x48),*(undefined4 *)(param_1 + 0x70)),
     (bVar2 & 0xfd) == 1)) {
    return;
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
LAB_14097be16:
  FUN_14097c15a(param_1);
  return;
}



// FUNCTION 14097be48 FUN_14097be48 body=763 status=ok
// SIG undefined FUN_14097be48(void)

void FUN_14097be48(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined4 *puVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 uVar12;
  undefined4 extraout_XMM0_Da_01;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined8 uStack_7c;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined4 local_40;
  undefined2 local_3c;
  byte local_3a;
  undefined4 local_39;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((*(char *)(param_1 + 0x68) != '\0') ||
     (*(char *)(*(longlong *)(param_1 + 0x40) + 0x180) != '\0')) goto LAB_14097be7e;
  lVar2 = *(longlong *)(param_1 + 0x48);
  lVar7 = FUN_1405f939e(param_1);
  if (lVar7 == 0) goto LAB_14097c0f7;
  lVar7 = FUN_140115352();
  if (lVar7 == 0) goto LAB_14097c0f7;
  lVar8 = *(longlong *)(lVar2 + 0x88);
  uVar12 = extraout_XMM0_Da;
  if (lVar8 == 0) {
    FUN_14012344a();
    lVar8 = FUN_14477b664();
    *(longlong *)(lVar2 + 0x88) = lVar8;
    uVar12 = extraout_XMM0_Da_00;
  }
  plVar1 = (longlong *)(lVar2 + 0x80);
  lVar10 = *(longlong *)(lVar2 + 0x90);
  if (lVar10 == 0) {
    if ((lVar8 == 0) || (*plVar1 == 0)) goto LAB_14097c0f7;
    plVar3 = *(longlong **)(lVar8 + 0xb8);
    if (plVar3 != (longlong *)0x0) {
      cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      if (cVar4 != '\0') {
        uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
        lVar10 = FUN_144aff482(uVar9,plVar1);
        *(longlong *)(lVar2 + 0x90) = lVar10;
        uVar12 = extraout_XMM0_Da_01;
        if (lVar10 == 0) goto LAB_14097c0f7;
        goto LAB_14097bf07;
      }
    }
    *(undefined8 *)(lVar2 + 0x90) = 0;
LAB_14097c0f7:
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_e8);
  }
LAB_14097bf07:
  bVar5 = *(byte *)(lVar2 + 0xa8);
  if (bVar5 == 1) {
    if (*(longlong *)(lVar2 + 0x88) == 0) {
      uVar9 = FUN_14012344a(uVar12,lVar10);
      lVar8 = FUN_14477b664(uVar9);
      *(longlong *)(lVar2 + 0x88) = lVar8;
      if (((*(longlong *)(lVar2 + 0x90) == 0) && (lVar8 != 0)) && (*plVar1 != 0)) {
        plVar3 = *(longlong **)(lVar8 + 0xb8);
        if (plVar3 == (longlong *)0x0) {
LAB_14097c153:
          uVar9 = 0;
        }
        else {
          cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
          if (cVar4 == '\0') goto LAB_14097c153;
          uVar9 = (**(code **)(*plVar3 + 0x110))(plVar3);
          uVar9 = FUN_144aff482(uVar9,plVar1);
        }
        *(undefined8 *)(lVar2 + 0x90) = uVar9;
      }
    }
    cVar4 = FUN_14043d437();
    if (cVar4 == '\0') goto LAB_14097be7e;
    bVar5 = *(byte *)(lVar2 + 0xa8);
  }
  local_b8[0] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uStack_58 = 0;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0xffffffff;
  local_3c = 0;
  local_3a = bVar5 ^ 1;
  local_39 = 0;
  cVar4 = FUN_143d765b4(param_1,&uStack_a8,lVar2 + 0xb0);
  if (cVar4 != '\0') {
    local_c0 = *(undefined4 *)(*(longlong *)(param_1 + 0x40) + 0x1a0);
    local_c8 = *(undefined8 *)(*(longlong *)(param_1 + 0x40) + 0x198);
    if (*(longlong *)(lVar2 + 0xa0) != 0) {
      FUN_145772396(lVar7,&local_c8,lVar2 + 0xa0);
    }
    if (*(char *)(lVar2 + 0x98) == '\x01') {
      puVar11 = (undefined4 *)(lVar2 + 0x9c);
    }
    else {
      lVar8 = FUN_145d4f736();
      puVar11 = (undefined4 *)(lVar8 + 0x98);
    }
    local_b8[0] = *puVar11;
    uStack_58 = *(undefined8 *)(lVar2 + 0xe8);
    uVar9 = FUN_14477b664(*(undefined8 *)(lVar2 + 0xf0));
    local_50 = FUN_14477b664(uVar9);
    uStack_48 = *(undefined8 *)(lVar2 + 0xf8);
    iVar6 = FUN_141001a8e(lVar7,plVar1,&local_c8,local_b8);
    *(int *)(param_1 + 0x70) = iVar6;
    if (0 < iVar6) goto LAB_14097be7e;
  }
  FUN_14097c15a(param_1);
LAB_14097be7e:
  if ((local_30 ^ (ulonglong)auStack_e8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097c15a FUN_14097c15a body=197 status=ok
// SIG undefined FUN_14097c15a(void)

void FUN_14097c15a(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = 0;
  uStack_30 = 0;
  (**(code **)(*(longlong *)param_1[9] + 0xd0))((longlong *)param_1[9],&local_38);
  lVar1 = local_38;
  lVar4 = (longlong)(int)uStack_30;
  if (lVar4 != 0) {
    lVar5 = 0;
    do {
      uVar3 = FUN_14122bd5e(param_1[9],*(undefined8 *)(lVar1 + lVar5));
      FUN_14122bd00(param_1,uVar3);
      lVar5 = lVar5 + 8;
    } while (lVar4 * 8 != lVar5);
  }
  cVar2 = (char)param_1[10];
  if (cVar2 == '\x02') {
    (**(code **)(*param_1 + 0x98))(param_1);
    cVar2 = (char)param_1[10];
  }
  if (cVar2 != '\x03') {
    *(undefined1 *)(param_1 + 10) = 3;
    uVar3 = FUN_141236616(param_1);
    *(undefined4 *)((longlong)param_1 + 0x54) = uVar3;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097c226 FUN_14097c226 body=57 status=ok
// SIG undefined FUN_14097c226(void)

void FUN_14097c226(void)

{
  undefined8 uVar1;
  
  if (DAT_14cbbfe08 == 0) {
    uVar1 = FUN_14064613c();
    DAT_14cbbfe08 = FUN_140002ddd(FUN_146614ff2,uVar1,L"ResurrectTravelStationObjectBodySettings");
  }
  return;
}



// FUNCTION 14097c25f FUN_14097c25f body=54 status=ok
// SIG undefined FUN_14097c25f(void)

void FUN_14097c25f(longlong *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14097c295(*param_1,(int)param_1[1]);
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 14097c295 FUN_14097c295 body=56 status=ok
// SIG undefined FUN_14097c295(void)

void FUN_14097c295(longlong param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_1409f518e(param_1);
      FUN_1409f518e(param_1 + -0x18);
      param_1 = param_1 + 0x38;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14097c2cd FUN_14097c2cd body=57 status=ok
// SIG undefined FUN_14097c2cd(void)

void FUN_14097c2cd(longlong *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  FUN_14097c306(puVar1);
  *puVar1 = &PTR_FUN_14b2faac0;
  puVar1[0xad] = &PTR_FUN_14b2fae68;
  puVar1[0xc6] = 0;
  return;
}



// FUNCTION 14097c306 FUN_14097c306 body=151 status=ok
// SIG undefined FUN_14097c306(void)

undefined8 * FUN_14097c306(undefined8 *param_1)

{
  FUN_140993da0();
  param_1[0xab] = 0;
  *(undefined1 *)(param_1 + 0xac) = 0;
  *param_1 = &PTR_FUN_14b149c90;
  param_1[0xad] = &PTR_FUN_14b14a030;
  param_1[0xae] = 0;
  param_1[0xbf] = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  param_1[0xb8] = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 0;
  param_1[0xbb] = 0;
  param_1[0xbc] = 0;
  *(undefined8 *)((longlong)param_1 + 0x604) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x60c) = 0;
  param_1[0xc3] = 0;
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined2 *)(param_1 + 0xc5) = 0;
  return param_1;
}



// FUNCTION 14097c39e FUN_14097c39e body=36 status=ok
// SIG undefined FUN_14097c39e(void)

void FUN_14097c39e(longlong param_1,undefined8 param_2,longlong param_3)

{
  char cVar1;
  
  cVar1 = FUN_14097c3c2();
  if (cVar1 != '\0') {
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + param_3;
  }
  return;
}



// FUNCTION 14097c3c2 FUN_14097c3c2 body=2094 status=ok
// SIG undefined FUN_14097c3c2(void)

undefined8 FUN_14097c3c2(longlong param_1,void *param_2,size_t param_3,longlong param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  bool bVar7;
  DWORD DVar8;
  char cVar9;
  DWORD dwTlsIndex;
  DWORD DVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  LPVOID lpTlsValue;
  longlong *plVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  longlong lVar17;
  longlong lVar18;
  size_t sVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  undefined1 auStack_1a8 [32];
  undefined1 local_188;
  undefined8 local_180;
  undefined8 local_178;
  longlong local_170;
  ulonglong local_168;
  longlong local_160;
  void *local_158;
  size_t local_150;
  ulonglong local_148;
  longlong local_140;
  longlong *local_138;
  undefined8 local_130;
  longlong local_128;
  ulonglong local_120;
  longlong *local_118;
  undefined **local_110;
  undefined8 *local_108;
  ulonglong uStack_100;
  undefined1 local_f8 [16];
  int local_e8;
  longlong local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  longlong *local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  void *pvStack_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  longlong *local_78;
  longlong local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  local_170 = param_1;
  if (*(char *)(param_1 + 0x61) == '\0') {
    local_e0 = 0;
    uStack_d8 = 0;
    local_110 = (undefined **)0xffffffffffffffff;
    local_108 = (undefined8 *)0x0;
    uStack_100 = 0;
    local_f8 = ZEXT816(0);
    local_e8 = 0;
    local_d0 = 0;
    auVar6._14_2_ = 0;
    auVar6._0_14_ = local_c8._2_14_;
    local_c8 = auVar6 << 0x10;
    pcVar2 = *(code **)(param_1 + 0x70);
    plVar13 = (longlong *)(param_1 + 0x90);
    if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
      plVar13 = *(longlong **)(param_1 + 0x80);
    }
    uVar12 = (**(code **)(*plVar13 + 8))();
    (*pcVar2)(&local_78,uVar12);
    (**(code **)(*local_78 + 0x1a0))(local_78,*(undefined8 *)(local_170 + 0x18));
    FUN_14707c7bc(&local_110,local_78,*(undefined4 *)(*(longlong *)(local_170 + 0x10) + 0x7c));
    param_1 = local_170;
    bVar21 = *(undefined8 **)(local_170 + 0x20) == local_108;
    bVar22 = *(ulonglong *)(local_170 + 0x28) == uStack_100;
    bVar3 = local_e8 == *(int *)(local_170 + 0x40);
    bVar7 = local_f8 == *(undefined1 (*) [16])(local_170 + 0x30);
    bVar23 = local_d0._4_4_ == *(int *)(local_170 + 0x5c);
    if ((bVar22 && bVar21) && ((bVar3 && bVar7) && bVar23)) {
      *(undefined1 *)(local_170 + 0x61) = 1;
    }
    if (local_78 != (longlong *)0x0) {
      FUN_140aa547e(local_70);
    }
    if (local_e0 != 0) {
      FUN_1400020a8();
    }
    if ((bVar22 && bVar21) && ((bVar3 && bVar7) && bVar23)) goto LAB_14097c40a;
  }
  else {
LAB_14097c40a:
    if ((longlong)(param_4 + param_3) <= *(longlong *)(param_1 + 0x28)) {
      local_148 = (ulonglong)*(uint *)(param_1 + 0x58);
      lVar17 = (longlong)(int)*(uint *)(param_1 + 0x58);
      uVar11 = param_4 / lVar17;
      param_4 = param_4 % (longlong)local_148;
      local_108 = (undefined8 *)0x0;
      uStack_100 = uStack_100 & 0xffffffff00000000;
      local_f8 = (undefined1  [16])0x0;
      local_e8 = CONCAT22(local_e8._2_2_,3);
      local_e0 = -1;
      uStack_d8 = 0;
      local_110 = &PTR_FUN_14a162410;
      local_c8 = (undefined1  [16])0x0;
      local_b8 = (longlong *)0x0;
      uStack_b0 = 0;
      uStack_ac = 0;
      uStack_a8 = 0;
      uStack_a4 = 0;
      pvStack_a0 = (void *)0x0;
      local_98 = (undefined1  [16])0x0;
      local_88 = (undefined1  [16])0x0;
      FUN_142b11f58(&local_118);
      uVar15 = *(ulonglong *)
                (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0xb8) +
                (longlong)*(int *)(param_1 + 0x5c) * 8);
      local_160 = lVar17;
      local_120 = uVar15;
      cVar9 = FUN_142773128(uVar15,&local_128,lVar17,0);
      if (cVar9 == '\0') {
        FUN_1400021e4(&local_120,&local_78);
        plVar13 = local_78;
        if ((int)local_70 == 0) {
          plVar13 = (longlong *)&DAT_149dfb77a;
        }
        FUN_140033559(".\\Runtime/PakFile/Private/IPlatformFilePak.cpp",0x1064,
                      L"Failed to get compressed size for compression method: %s. Check plugin is loaded."
                      ,plVar13);
        param_1 = local_170;
        if (local_78 != (longlong *)0x0) {
          FUN_1400020a8();
        }
      }
      if (DAT_14c87ead8 == '\0') {
        FUN_140024d3a(&DAT_14c87eb00);
        DAT_14c87ead8 = '\x01';
      }
      if (uVar15 != DAT_14c892f54) {
        local_128 = (longlong)((double)local_128 * 1.100000023841858);
      }
      local_140 = *local_118;
      FUN_141737692(local_118,local_160,local_128 * 2);
      local_78 = (longlong *)local_118[3];
      local_70 = (longlong)local_78 + local_128;
      pcVar2 = *(code **)(param_1 + 0x70);
      plVar13 = (longlong *)(param_1 + 0x90);
      if (*(longlong **)(param_1 + 0x80) != (longlong *)0x0) {
        plVar13 = *(longlong **)(param_1 + 0x80);
      }
      uVar12 = (**(code **)(*plVar13 + 8))();
      (*pcVar2)(&local_138,uVar12);
      if (0 < (longlong)param_3) {
        uVar16 = (int)local_148 * (int)uVar11;
        bVar23 = false;
        do {
          lVar18 = (longlong)(int)uVar11 * 0x10;
          uVar15 = *(longlong *)(param_1 + 0x28) - (ulonglong)uVar16;
          lVar17 = *(longlong *)(*(longlong *)(param_1 + 0x48) + lVar18);
          if ((longlong)(ulonglong)*(uint *)(param_1 + 0x58) <= (longlong)uVar15) {
            uVar15 = (ulonglong)*(uint *)(param_1 + 0x58);
          }
          sVar19 = uVar15 - param_4;
          local_150 = param_3;
          if ((longlong)sVar19 < (longlong)param_3) {
            local_150 = sVar19;
          }
          local_168 = uVar11;
          local_158 = param_2;
          if (((((local_140 < local_160) || (bVar23)) ||
               (local_118[4] != *(longlong *)(param_1 + 0x18))) ||
              ((*(int *)(*(longlong *)(param_1 + 0x10) + 0xa0) != (int)local_118[7] ||
                *(undefined1 (*) [16])(*(longlong *)(param_1 + 0x10) + 0x90) !=
                *(undefined1 (*) [16])(local_118 + 5) ||
               ((int)uVar11 != *(int *)((longlong)local_118 + 0x3c))))) ||
             ((local_160 <= (longlong)param_3 && (param_4 == 0)))) {
            if (*(int *)(*(longlong *)(param_1 + 0x10) + 0x7c) < 5) {
              lVar14 = 0;
            }
            else {
              lVar14 = *(longlong *)(param_1 + 0x18);
            }
            lVar18 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 8 + lVar18) - lVar17;
            (**(code **)(*local_138 + 0x1a0))(local_138,lVar14 + lVar17);
            plVar13 = (&local_78)[(uint)local_168 & 1];
            (**(code **)(*local_138 + 0x170))(local_138,plVar13,lVar18);
            if (bVar23) {
              FUN_140187fa0(&local_110,1,0);
            }
            param_2 = local_158;
            param_1 = local_170;
            local_88 = *(undefined1 (*) [16])(*(longlong *)(local_170 + 0x10) + 0xa8);
            uStack_ac = (undefined4)local_120;
            uStack_a8 = (undefined4)(local_120 >> 0x20);
            uStack_b0 = (undefined4)lVar18;
            iVar20 = (int)local_168;
            if (((longlong)param_3 < local_160) || (param_4 != 0)) {
              local_c8._0_8_ = local_118[1];
              pvStack_a0 = local_158;
              local_98._8_8_ = local_150;
              local_98._0_8_ = param_4;
              *(int *)((longlong)local_118 + 0x3c) = iVar20;
              lVar17 = *(longlong *)(local_170 + 0x10);
              *(undefined4 *)(local_118 + 7) = *(undefined4 *)(lVar17 + 0xa0);
              lVar18 = *(longlong *)(lVar17 + 0x98);
              local_118[5] = *(longlong *)(lVar17 + 0x90);
              local_118[6] = lVar18;
              lVar17 = *(longlong *)(local_170 + 0x18);
            }
            else {
              pvStack_a0 = (void *)0x0;
              local_118[5] = 0;
              local_118[6] = 0;
              local_118[7] = -0x100000000;
              lVar17 = -1;
              local_c8._0_8_ = local_158;
            }
            local_c8._8_4_ = (int)uVar15;
            local_118[4] = lVar17;
            local_b8 = plVar13;
            if ((longlong)sVar19 < (longlong)param_3) {
              local_178 = 0;
              local_180 = 0xffffffffffffffff;
              local_188 = 0;
              FUN_1402a8900(&local_110,0,DAT_14c8442c0,3);
            }
            else {
              local_e0 = -1;
              uStack_d8 = 0;
              LOCK();
              UNLOCK();
              local_e8 = CONCAT22(local_e8._2_2_,3);
              local_f8._8_8_ = 0;
              uStack_100._0_4_ = (int)uStack_100 + 1;
              FUN_14018802a(local_f8._0_8_);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = local_f8._8_8_;
              local_f8 = auVar4 << 0x40;
              (*(code *)local_110[6])(&local_110);
              LOCK();
              uStack_100 = CONCAT44(uStack_100._4_4_,(int)uStack_100 + -1);
              UNLOCK();
            }
            bVar23 = true;
          }
          else {
            memcpy(param_2,(void *)(param_4 + local_118[1]),local_150);
            iVar20 = (int)local_168;
          }
          param_2 = (void *)((longlong)param_2 + local_150);
          uVar11 = (ulonglong)(iVar20 + 1);
          uVar16 = uVar16 + (int)local_148;
          param_4 = 0;
          sVar19 = param_3 - local_150;
          bVar3 = (longlong)local_150 <= (longlong)param_3;
          param_3 = sVar19;
        } while (sVar19 != 0 && bVar3);
        if (bVar23) {
          FUN_140187fa0(&local_110,1,0);
        }
      }
      if (local_138 != (longlong *)0x0) {
        FUN_140aa547e(local_130);
      }
      dwTlsIndex = DAT_14c75f614;
      if (DAT_14c75f614 == 0xffffffff) {
        dwTlsIndex = TlsAlloc();
        DVar10 = 0xffffffff;
        LOCK();
        bVar23 = DAT_14c75f614 != 0xffffffff;
        DVar8 = dwTlsIndex;
        if (bVar23) {
          DVar10 = DAT_14c75f614;
          DVar8 = DAT_14c75f614;
        }
        DAT_14c75f614 = DVar8;
        UNLOCK();
        if (bVar23) {
          TlsFree(dwTlsIndex);
          dwTlsIndex = DVar10;
        }
      }
      lpTlsValue = TlsGetValue(dwTlsIndex);
      if (lpTlsValue == (LPVOID)0x0) {
        lpTlsValue = (LPVOID)FUN_141737740();
        FUN_140fddf04(lpTlsValue);
        TlsSetValue(dwTlsIndex,lpTlsValue);
      }
      FUN_142b120c0(lpTlsValue,local_118);
      local_110 = &PTR_FUN_149e06640;
      FUN_14018802a(local_f8._0_8_);
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_f8._8_8_;
      local_f8 = auVar5 << 0x40;
      local_110 = IQueuedWork::vftable;
      if (local_108 != (undefined8 *)0x0) {
        LOCK();
        piVar1 = (int *)(local_108 + 1);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)*local_108)(local_108,1);
        }
      }
      uVar12 = 1;
      goto LAB_14097ca14;
    }
  }
  uVar12 = 0;
LAB_14097ca14:
  if ((local_60 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar12;
}



// FUNCTION 14097cbf8 FUN_14097cbf8 body=176 status=ok
// SIG undefined FUN_14097cbf8(void)

void FUN_14097cbf8(longlong *param_1,longlong param_2,undefined4 param_3,longlong param_4,
                  undefined8 param_5,longlong param_6)

{
  char cVar1;
  
  param_1[2] = param_2;
  param_1[3] = param_6;
  if (((param_2 != 0) && (param_6 != 0)) && (*(char *)((longlong)param_1 + 0x196) == '\0')) {
    cVar1 = (**(code **)(*param_1 + 0x40))(param_1);
    if (cVar1 != '\0') {
      (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4,param_6);
      (**(code **)(*param_1 + 0x48))(param_1,param_4 + 0x40,param_3);
      (**(code **)(*param_1 + 0x30))(param_1,param_3,param_4,param_6);
                    /* WARNING: Could not recover jumptable at 0x00014097cc96. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x38))(param_1,param_5);
      return;
    }
  }
  return;
}



// FUNCTION 14097cca8 FUN_14097cca8 body=708 status=ok
// SIG undefined FUN_14097cca8(void)

void FUN_14097cca8(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_d8 [32];
  undefined4 local_b8;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  code **local_80;
  code *local_78;
  code *local_70;
  code *local_68;
  longlong lStack_60;
  uint local_58;
  undefined8 local_54;
  undefined4 local_4c;
  undefined1 local_48;
  undefined1 local_47;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x40) + 0x4c);
  if (((((iVar1 != 0) && (uVar8 = *(uint *)(*(longlong *)(param_1 + 0x40) + 0x48), -1 < (int)uVar8))
       && ((int)uVar8 < DAT_14c9647dc)) &&
      ((plVar7 = (longlong *)
                 ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8)),
       plVar7 != (longlong *)0x0 && ((int)plVar7[2] == iVar1)))) &&
     ((lVar2 = *(longlong *)(param_1 + 0x48), (*(uint *)(plVar7 + 1) & 0x10200000) == 0 &&
      (lVar10 = *plVar7, lVar10 != 0)))) {
    if (DAT_14cac9ca8 == 0) {
      local_80 = &local_68;
      local_68 = FUN_141030f22;
      local_70 = FUN_14081d0ea;
      local_78 = FUN_14081d0ea;
      local_88 = &LAB_1478c0a72;
      local_90 = &LAB_1417b2375;
      local_98 = L"Engine";
      local_a0 = 0x1000000000;
      local_a8 = 0x10000004;
      local_b0 = 8;
      local_b8 = 0x390;
      FUN_14081cfa3(L"/Script/Engine",L"Actor",&DAT_14cac9ca8,FUN_14639e32c);
    }
    if ((*(int *)(DAT_14cac9ca8 + 0x38) <= *(int *)(*(longlong *)(lVar10 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar10 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cac9ca8 + 0x38) * 8) == DAT_14cac9ca8 + 0x30)) {
      uVar4 = FUN_14097cfe8();
      local_47 = *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x78);
      local_4c = *(undefined4 *)(param_1 + 0x58);
      local_68 = (code *)*param_2;
      lStack_60 = param_2[1];
      local_54 = 0x3f80000000000000;
      local_48 = 0;
      uVar8 = 0;
      if ((uint)lStack_60 == 0) {
LAB_14097cdfd:
        local_58 = uVar8;
        if (uVar8 < (uint)lStack_60) {
          uVar8 = (uint)lStack_60;
          do {
            uVar9 = local_58;
            lVar5 = FUN_14030a32e(local_68 + (longlong)(int)local_58 * 0x38);
            if (lVar5 == 0) {
              uVar3 = 0;
            }
            else {
              lVar6 = lVar5;
              if (*(char *)(lVar2 + 0x80) != '\0') {
                lVar6 = lVar10;
                lVar10 = lVar5;
              }
              uVar3 = FUN_14097cf6e(uVar4,lVar10,lVar6);
              uVar8 = (uint)lStack_60;
              uVar9 = local_58;
            }
            FUN_1402d7d58(&local_68,uVar3);
            local_58 = uVar9 + 1;
            if ((local_58 < uVar8) &&
               (((byte)local_68[(longlong)(int)local_58 * 0x38 + 0x34] & 1) != 0)) {
              uVar9 = uVar9 + 2;
              do {
                local_58 = uVar8;
                if (uVar8 == uVar9) break;
                lVar5 = (longlong)(int)uVar9;
                local_58 = uVar9;
                uVar9 = uVar9 + 1;
              } while (((byte)local_68[lVar5 * 0x38 + 0x34] & 1) != 0);
            }
          } while (local_58 < uVar8);
        }
      }
      else {
        do {
          if (((byte)local_68[(longlong)(int)uVar8 * 0x38 + 0x34] & 1) == 0) goto LAB_14097cdfd;
          uVar8 = uVar8 + 1;
        } while ((uint)lStack_60 != uVar8);
      }
    }
  }
  if ((local_40 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097cf6e FUN_14097cf6e body=122 status=ok
// SIG undefined FUN_14097cf6e(void)

undefined8 FUN_14097cf6e(longlong *param_1,longlong param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  
  FUN_14097d052();
  if ((param_2 != 0) && (0 < (int)param_1[1])) {
    lVar2 = 8;
    lVar3 = 0;
    do {
      cVar1 = FUN_14069eaf4(*param_1 + lVar2 + -8,param_2);
      if (cVar1 != '\0') {
        cVar1 = FUN_14069eaf4(lVar2 + *param_1,param_3);
        if (cVar1 == '\0') {
          return 0;
        }
        return 1;
      }
      lVar3 = lVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (lVar3 < (int)param_1[1]);
  }
  return 0;
}



// FUNCTION 14097cfe8 FUN_14097cfe8 body=106 status=ok
// SIG undefined FUN_14097cfe8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14097cfe8(void)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x110) < DAT_14cbc2fc0) {
    FUN_144b3d300(&DAT_14cbc2fc0);
    if (DAT_14cbc2fc0 == -1) {
      DAT_14cbc2fb0 = 0;
      _DAT_14cbc2fb8 = 0;
      atexit(FUN_1440c89c1);
      _Init_thread_footer(&DAT_14cbc2fc0);
    }
  }
  return &DAT_14cbc2fb0;
}



// FUNCTION 14097d052 FUN_14097d052 body=584 status=ok
// SIG undefined FUN_14097d052(void)

void FUN_14097d052(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
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
  uVar7 = (ulonglong)(int)param_1[1];
  if (0 < (longlong)uVar7) {
    lVar6 = uVar7 * 0x30 + -0x24;
    do {
      lVar3 = *param_1;
      iVar1 = *(int *)(lVar3 + -8 + lVar6);
      if (((((iVar1 == 0) || (uVar2 = *(uint *)(lVar3 + -0xc + lVar6), (int)uVar2 < 0)) ||
           (DAT_14c9647dc <= (int)uVar2)) ||
          ((lVar8 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar8 == 0 ||
           (*(int *)(lVar8 + 0x10) != iVar1)))) ||
         (((*(uint *)(lVar8 + 8) & 0x10200000) != 0 || ((*(uint *)(lVar8 + 8) & 0x10200000) != 0))))
      {
        FUN_14575aef0(param_1,(int)uVar7 + -1);
      }
      else if ((((*(int *)(lVar3 + lVar6) == 0) ||
                (uVar2 = *(uint *)(lVar3 + -4 + lVar6), (int)uVar2 < 0)) ||
               ((DAT_14c9647dc <= (int)uVar2 ||
                (((plVar5 = (longlong *)
                            ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8)),
                  plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(lVar3 + lVar6))) ||
                 ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)))))) ||
              ((*(uint *)(plVar5 + 1) & 0x10200000) != 0)) {
LAB_14097d1f2:
        *(undefined8 *)(lVar3 + -4 + lVar6) = 0;
      }
      else if ((((*(uint *)(plVar5 + 1) & 0x10200000) == 0) &&
               ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)) && (lVar8 = *plVar5, lVar8 != 0)) {
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
        if (((*(int *)(DAT_14cba8288 + 0x38) <= *(int *)(*(longlong *)(lVar8 + 0x10) + 0x38)) &&
            (*(longlong *)
              (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
              (longlong)*(int *)(DAT_14cba8288 + 0x38) * 8) == DAT_14cba8288 + 0x30)) &&
           (*(char *)(lVar8 + 0x5d30) == '\x02')) goto LAB_14097d1f2;
      }
      lVar6 = lVar6 + -0x30;
      bVar4 = 1 < uVar7;
      uVar7 = uVar7 - 1;
    } while (bVar4);
  }
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14097d2aa FUN_14097d2aa body=101 status=ok
// SIG undefined FUN_14097d2aa(void)

undefined8 * FUN_14097d2aa(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a42e020;
  FUN_1448d844e(param_1[10],*(undefined4 *)(param_1 + 0xb));
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
  FUN_140280a77(param_1[8],*(undefined4 *)(param_1 + 9));
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14097d310 FUN_14097d310 body=44 status=ok
// SIG undefined FUN_14097d310(void)

undefined8 FUN_14097d310(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_14097d42c(param_1,param_3);
  FUN_14097d33c(param_1,param_2,uVar1);
  return param_2;
}



// FUNCTION 14097d33c FUN_14097d33c body=239 status=ok
// SIG undefined FUN_14097d33c(void)

longlong * FUN_14097d33c(longlong param_1,longlong *param_2,byte param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  if (param_3 < 6) {
    param_1 = param_1 + (ulonglong)param_3 * 0x18;
    plVar6 = (longlong *)(param_1 + 0x4f0);
    lVar5 = *(longlong *)(param_1 + 0x4f8);
    if (lVar5 == 0) {
      uVar4 = FUN_1405b1a32();
      lVar5 = FUN_14477b664(uVar4);
      *(longlong *)(param_1 + 0x4f8) = lVar5;
    }
    lVar3 = *plVar6;
    if (*(longlong *)(param_1 + 0x500) != 0) {
LAB_14097d37a:
      param_2[1] = 0;
      param_2[2] = 0;
      *param_2 = lVar3;
      uVar4 = FUN_14477b664(lVar5);
      lVar5 = FUN_14477b664(uVar4);
      param_2[1] = lVar5;
      param_2[2] = *(longlong *)(param_1 + 0x500);
      return param_2;
    }
    if ((lVar5 != 0) && (lVar3 != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar2 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar2 == '\0')) {
        *(undefined8 *)(param_1 + 0x500) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,plVar6);
        *(longlong *)(param_1 + 0x500) = lVar5;
        if (lVar5 != 0) {
          lVar3 = *plVar6;
          lVar5 = *(longlong *)(param_1 + 0x4f8);
          goto LAB_14097d37a;
        }
      }
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  return param_2;
}



// FUNCTION 14097d42c FUN_14097d42c body=233 status=ok
// SIG undefined FUN_14097d42c(void)

undefined1 FUN_14097d42c(undefined8 param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  longlong local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_2[2] == 0x3002) {
    local_48 = param_2[1];
    FUN_1446dcdd4(local_40);
    plVar3 = (longlong *)FUN_14058374a(local_40);
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    if (plVar3 != (longlong *)0x0) {
LAB_14097d4b5:
      uVar1 = *(undefined1 *)((longlong)plVar3 + 0x121);
      goto LAB_14097d4bb;
    }
  }
  else {
    lVar4 = *param_2;
    if (lVar4 != 0) {
      uVar2 = FUN_1406d192e();
      plVar3 = (longlong *)FUN_144718840(lVar4,uVar2);
      if (plVar3 != (longlong *)0x0) {
        plVar3 = (longlong *)(**(code **)(*plVar3 + 0x18))(plVar3);
        if (plVar3 != (longlong *)0x0) {
          lVar4 = (**(code **)(*plVar3 + 8))(plVar3);
          lVar5 = FUN_14018fb44();
          if (((lVar5 != 0) && (*(int *)(lVar5 + 0x38) <= *(int *)(lVar4 + 0x38))) &&
             (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)*(int *)(lVar5 + 0x38) * 8) ==
              lVar5 + 0x30)) goto LAB_14097d4b5;
        }
      }
    }
  }
  uVar1 = 0;
LAB_14097d4bb:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097d516 FUN_14097d516 body=16 status=ok
// SIG undefined FUN_14097d516(void)

byte FUN_14097d516(void)

{
  byte bVar1;
  
  bVar1 = FUN_14097d526();
  return bVar1 ^ 1;
}



// FUNCTION 14097d526 FUN_14097d526 body=155 status=ok
// SIG undefined FUN_14097d526(void)

ulonglong FUN_14097d526(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  ulonglong uVar4;
  bool bVar5;
  
  bVar1 = *param_1;
  if (bVar1 != *param_2) {
    return 0;
  }
  uVar2 = bVar1 - 1;
  if (9 < uVar2) {
    return 0;
  }
  switch((uint)bVar1) {
  default:
    uVar4 = (ulonglong)*(uint *)(param_1 + 8);
    bVar5 = *(uint *)(param_1 + 8) == *(uint *)(param_2 + 8);
    break;
  case 3:
  case 4:
    uVar4 = *(ulonglong *)(param_1 + 8);
    bVar5 = uVar4 == *(ulonglong *)(param_2 + 8);
    break;
  case 5:
    bVar5 = *(double *)(param_2 + 8) == *(double *)(param_1 + 8);
    goto LAB_14097d586;
  case 6:
  case 10:
    iVar3 = wcscmp(*(wchar_t **)(param_1 + 8),*(wchar_t **)(param_2 + 8));
    uVar4 = CONCAT44(extraout_var,iVar3);
    goto LAB_14097d568;
  case 7:
    bVar5 = *(float *)(param_2 + 8) == *(float *)(param_1 + 8);
LAB_14097d586:
    return (ulonglong)(-(uint)bVar5 & 1);
  case 8:
    if (*(uint *)(param_1 + 0x10) != *(uint *)(param_2 + 0x10)) {
      return 0;
    }
    iVar3 = memcmp(*(void **)(param_1 + 8),*(void **)(param_2 + 8),
                   (ulonglong)*(uint *)(param_1 + 0x10));
    uVar4 = CONCAT44(extraout_var_00,iVar3);
LAB_14097d568:
    bVar5 = (int)uVar4 == 0;
    break;
  case 9:
    uVar4 = CONCAT71((int7)((ulonglong)
                            ((longlong)&switchD_14097d54a::switchdataD_14b4390f4 +
                            (longlong)(int)(&switchD_14097d54a::switchdataD_14b4390f4)[uVar2]) >> 8)
                     ,param_1[8]);
    bVar5 = param_1[8] == param_2[8];
  }
  return CONCAT71((int7)(uVar4 >> 8),bVar5);
}



// FUNCTION 14097d5c2 FUN_14097d5c2 body=270 status=ok
// SIG undefined FUN_14097d5c2(void)

undefined8 FUN_14097d5c2(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_14097d6ca;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_14097d6ca;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_14097d6ca:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_14097d678;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_14097d678;
    }
  }
  uVar6 = 0;
LAB_14097d678:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097d6da FUN_14097d6da body=104 status=ok
// SIG undefined FUN_14097d6da(void)

void FUN_14097d6da(longlong param_1,byte param_2)

{
  longlong lVar1;
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  *(byte *)(param_1 + 0xd1) = *(byte *)(param_1 + 0xd1) | param_2;
  lVar1 = *(longlong *)(param_1 + 0x28);
  local_18 = param_1;
  if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c();
  }
  FUN_1405f6d44(lVar1 + 0x16c8,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097d744 FUN_14097d744 body=198 status=ok
// SIG undefined FUN_14097d744(void)

void FUN_14097d744(longlong *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined1 auStack_188 [40];
  undefined1 local_160 [8];
  undefined1 local_158 [312];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_188;
  lVar1 = param_1[0xf];
  if (((lVar1 != 0) && ((*(uint *)(lVar1 + 8) >> 0x1e & 1) == 0)) &&
     ((longlong)*(int *)(lVar1 + 200) != 0)) {
    plVar2 = *(longlong **)(lVar1 + 0xc0);
    lVar1 = (longlong)*(int *)(lVar1 + 200) << 4;
    do {
      if (*(int *)(*plVar2 + 0x34) != -1) {
        FUN_1412f0a92(param_1,plVar2);
      }
      plVar2 = plVar2 + 2;
      lVar1 = lVar1 + -0x10;
    } while (lVar1 != 0);
  }
  *(byte *)(param_1 + 0x1a) = *(byte *)(param_1 + 0x1a) | 2;
  FUN_141239620(param_1,local_158,1,1);
  (**(code **)(*param_1 + 0x308))(param_1,local_160,local_158,0);
  FUN_1449daebe(local_158);
  if ((local_20 ^ (ulonglong)auStack_188) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097d838 FUN_14097d838 body=223 status=ok
// SIG undefined FUN_14097d838(void)

undefined8 * FUN_14097d838(undefined8 *param_1)

{
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3b9cbb9e;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 1;
  *param_1 = &PTR_FUN_14b635820;
  *(undefined1 *)(param_1 + 0xe) = 0;
  local_48 = DAT_14cbcc620;
  local_40 = 0x275c8fdc;
  local_38 = 0;
  FUN_14097d918(param_1 + 8,&DAT_14cb82348,&local_48,1);
  local_48 = DAT_14cbcc628;
  local_40 = 0x275c8fdc;
  local_38 = 0;
  FUN_14097d918(param_1 + 8,&DAT_14cb82358,&local_48,1);
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097d918 FUN_14097d918 body=188 status=ok
// SIG undefined FUN_14097d918(void)

void FUN_14097d918(longlong *param_1,longlong *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((*param_1 != 0) && ((int)param_1[1] - 1U < 0xfffffffe)) {
    return;
  }
  puVar2 = (undefined8 *)FUN_14097d9d4(param_1);
  if ((longlong)*(int *)(puVar2 + 1) != 0) {
    plVar3 = (longlong *)*puVar2;
    lVar4 = (longlong)*(int *)(puVar2 + 1) * 0xe8;
    do {
      if (*plVar3 == *param_2) {
        if (plVar3 != (longlong *)0x0) {
          return;
        }
        break;
      }
      plVar3 = plVar3 + 0x1d;
      lVar4 = lVar4 + -0xe8;
    } while (lVar4 != 0);
  }
  iVar1 = (int)param_1[4];
  *(uint *)(param_1 + 4) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0x24) < iVar1 + 1U) {
    FUN_14097dc0c(param_1 + 3,iVar1);
  }
  FUN_14097da94((longlong)iVar1 * 0xe8 + param_1[3],param_2,param_3,param_4);
  return;
}



// FUNCTION 14097d9d4 FUN_14097d9d4 body=54 status=ok
// SIG undefined FUN_14097d9d4(void)

longlong FUN_14097d9d4(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14097da0a();
  param_1 = param_1 + 0x18;
  if (lVar1 != 0) {
    param_1 = FUN_14097d9d4(lVar1 + 0x18);
  }
  return param_1;
}



// FUNCTION 14097da0a FUN_14097da0a body=136 status=ok
// SIG undefined FUN_14097da0a(void)

longlong FUN_14097da0a(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_48 = *param_1;
    FUN_1446dcdd4(local_40);
    if (DAT_14cb84900 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb84900,local_40);
    }
    if (local_28 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14097da94 FUN_14097da94 body=226 status=ok
// SIG undefined FUN_14097da94(void)

undefined8 *
FUN_14097da94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

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
  *(undefined1 *)((longlong)param_1 + 0xe1) = param_4;
  *param_1 = *param_2;
  FUN_14097db76(param_1,param_3);
  return param_1;
}



// FUNCTION 14097db76 FUN_14097db76 body=149 status=ok
// SIG undefined FUN_14097db76(void)

void FUN_14097db76(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  
  lVar1 = *(longlong *)(param_1 + 8);
  if (lVar1 == 0) {
    lVar2 = *param_2;
  }
  else {
    lVar2 = *param_2;
    if ((*(int *)(param_1 + 0x10) - 1U < 0xfffffffe) &&
       ((lVar2 == 0 || (0xfffffffd < (int)param_2[1] - 1U)))) {
      FUN_1488ccc0a(param_1);
      return;
    }
  }
  if ((lVar1 != lVar2) || (iVar3 = *(int *)(param_1 + 0x10), iVar3 != (int)param_2[1])) {
    *(longlong *)(param_1 + 8) = lVar2;
    iVar3 = (int)param_2[1];
    *(int *)(param_1 + 0x10) = iVar3;
    *(undefined8 *)(param_1 + 0x18) = 0;
    lVar1 = lVar2;
  }
  if ((lVar1 != 0) && (iVar3 - 1U < 0xfffffffe)) {
    (**(code **)(*(longlong *)(param_1 + 0x20) + 0x20))
              (param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0xe0) = 0;
  }
  return;
}



// FUNCTION 14097dc0c FUN_14097dc0c body=369 status=ok
// SIG undefined FUN_14097dc0c(void)

void FUN_14097dc0c(longlong param_1,int param_2)

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
  uVar7 = lVar6 * 0xe8;
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
            if (((&DAT_14c841d90)[uVar11 & 0xffffffff] & 0xf) == 0) goto LAB_14097dc94;
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
LAB_14097dc94:
  auVar4._8_8_ = 0;
  auVar4._0_8_ = uVar7 >> 3;
  iVar8 = SUB164(auVar4 * ZEXT816(0x8d3dcb08d3dcb09),8);
  iVar10 = 0x7fffffff;
  if ((int)uVar3 <= iVar8) {
    iVar10 = iVar8;
  }
  *(int *)(param_1 + 0xc) = iVar10;
  FUN_1446f8d3c(param_1,param_2,iVar10,0xe8,8);
  return;
}



// FUNCTION 14097dd7e FUN_14097dd7e body=38 status=ok
// SIG undefined FUN_14097dd7e(void)

undefined8 FUN_14097dd7e(undefined8 param_1,int param_2)

{
  FUN_14097dda4();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14097dda4 FUN_14097dda4 body=763 status=ok
// SIG undefined FUN_14097dda4(void)

void FUN_14097dda4(undefined8 *param_1)

{
  uint *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  int iVar10;
  longlong lVar11;
  
  *param_1 = &PTR_FUN_14a3d09c0;
  param_1[0x53] = &PTR_FUN_14a3d0c00;
  FUN_144725486(param_1 + 0xbb);
  uVar8 = (ulonglong)*(uint *)(param_1 + 0xc1);
  if (0 < (int)*(uint *)(param_1 + 0xc1)) {
    lVar9 = 0;
    lVar11 = 0;
    do {
      (**(code **)(*(longlong *)(param_1[0xc0] + lVar9) + 0x20))(param_1[0xc0] + lVar9);
      lVar11 = lVar11 + 1;
      uVar8 = (ulonglong)*(int *)(param_1 + 0xc1);
      lVar9 = lVar9 + 0x28;
    } while (lVar11 < (longlong)uVar8);
  }
  puVar7 = (undefined8 *)param_1[0xab];
  if (puVar7 != (undefined8 *)0x0) {
    piVar2 = (int *)(puVar7 + 1);
    *piVar2 = *piVar2 + -1;
    if ((*piVar2 == 0) && ((**(code **)*puVar7)(puVar7,1), DAT_14caa7148 != DAT_14caa7174)) {
      puVar5 = &DAT_14caa7178;
      if (DAT_14caa7180 != (undefined *)0x0) {
        puVar5 = DAT_14caa7180;
      }
      iVar4 = *(int *)(puVar5 + ((longlong)DAT_14caa7188 - 1U & (longlong)*(int *)(param_1 + 0xaa))
                                * 4);
      if (iVar4 != -1) {
LAB_14097dff1:
        piVar2 = (int *)(DAT_14caa7140 + (longlong)iVar4 * 0x18);
        if (*piVar2 != *(int *)(param_1 + 0xaa)) goto LAB_14097e02c;
        iVar10 = *(int *)(puVar5 + (longlong)piVar2[5] * 4);
        if (iVar10 == iVar4) {
          piVar6 = (int *)(puVar5 + (longlong)piVar2[5] * 4);
        }
        else {
          do {
            piVar6 = (int *)(DAT_14caa7140 + (longlong)iVar10 * 0x18 + 0x10);
            iVar10 = *piVar6;
          } while (iVar10 != iVar4);
        }
        *piVar6 = piVar2[4];
        FUN_14097e262();
      }
    }
LAB_14097de1f:
    param_1[0xab] = 0;
    uVar8 = (ulonglong)*(uint *)(param_1 + 0xc1);
  }
  FUN_14097e09f(param_1[0xc0],uVar8);
  if (param_1[0xc0] != 0) {
    FUN_1400020a8();
  }
  FUN_14097e1e0(param_1 + 0xbb);
  if (param_1[0xb8] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xb1] != 0) {
    FUN_1400020a8();
  }
  puVar7 = (undefined8 *)param_1[0xb0];
  if (puVar7 != (undefined8 *)0x0) {
    if (puVar7[6] != 0) {
      FUN_1400020a8();
    }
    *puVar7 = &PTR_LAB_14a3d46d0;
    if (puVar7[5] != 0) {
      LOCK();
      puVar1 = (uint *)(puVar7[5] + 8);
      uVar3 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar3 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    FUN_1400020a8(puVar7);
  }
  if (param_1[0xae] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xa0] != 0) {
    FUN_1400020a8();
  }
  FUN_14097e147(param_1[0x9b],*(undefined4 *)(param_1 + 0x9c));
  if (param_1[0x9b] != 0) {
    FUN_1400020a8();
  }
  puVar7 = param_1 + 0x7d;
  if ((undefined8 *)param_1[0x92] != (undefined8 *)0x0) {
    puVar7 = (undefined8 *)param_1[0x92];
  }
  FUN_1446fc26f(puVar7,*(undefined4 *)(param_1 + 0x93));
  if (param_1[0x92] != 0) {
    FUN_1400020a8();
  }
  FUN_14097e147(param_1[0x7a],*(undefined4 *)(param_1 + 0x7b));
  if (param_1[0x7a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x5d] != 0) {
    FUN_1400020a8();
  }
  lVar9 = param_1[0x5b];
  if (lVar9 != 0) {
    (**(code **)(lVar9 + -0x10))(lVar9 + -0x10);
  }
  FUN_140064e2c(param_1);
  return;
LAB_14097e02c:
  iVar4 = piVar2[4];
  if (iVar4 == -1) goto LAB_14097de1f;
  goto LAB_14097dff1;
}



// FUNCTION 14097e09f FUN_14097e09f body=38 status=ok
// SIG undefined FUN_14097e09f(void)

void FUN_14097e09f(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_14097e0c6(param_1);
    param_1 = param_1 + 0x28;
  }
  return;
}



// FUNCTION 14097e0c6 FUN_14097e0c6 body=129 status=ok
// SIG undefined FUN_14097e0c6(void)

void FUN_14097e0c6(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3d42f0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14097e147 FUN_14097e147 body=152 status=ok
// SIG undefined FUN_14097e147(void)

void FUN_14097e147(longlong param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  byte bVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong *plVar7;
  bool bVar8;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    lVar4 = *(longlong *)(param_1 + 0x18);
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
    }
    param_1 = param_1 + 0x30;
  }
  return;
}



// FUNCTION 14097e1e0 FUN_14097e1e0 body=129 status=ok
// SIG undefined FUN_14097e1e0(void)

void FUN_14097e1e0(undefined8 *param_1)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3d42c0;
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  *param_1 = &PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if ((*(int *)(param_1 + 1) != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 14097e262 FUN_14097e262 body=128 status=ok
// SIG undefined FUN_14097e262(void)

void FUN_14097e262(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14caa7140;
  if (DAT_14caa7174 != 0) {
    *(int *)(DAT_14caa7140 + (longlong)DAT_14caa7170 * 0x18) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x18) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14caa7174) {
    iVar4 = DAT_14caa7170;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x18) = iVar4;
  DAT_14caa7174 = DAT_14caa7174 + 1;
  puVar3 = &DAT_14caa7150;
  if (DAT_14caa7160 != (undefined *)0x0) {
    puVar3 = DAT_14caa7160;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14caa7170 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 14097e2e2 FUN_14097e2e2 body=871 status=ok
// SIG undefined FUN_14097e2e2(void)

undefined8 * FUN_14097e2e2(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  longlong lVar8;
  bool bVar9;
  
  *param_1 = &PTR_FUN_14a3d0ca8;
  puVar2 = (undefined8 *)param_1[7];
  if (puVar2 != (undefined8 *)0x0) {
    FUN_144725486(puVar2);
    *puVar2 = &PTR_FUN_14a38cff0;
    if (puVar2[2] != 0) {
      LOCK();
      puVar1 = (uint *)(puVar2[2] + 8);
      uVar5 = *puVar1;
      *puVar1 = *puVar1 - 1;
      UNLOCK();
      if ((uVar5 & 0x3fffffff) == 1) {
        FUN_144a54812();
      }
    }
    *puVar2 = &PTR_FUN_14a38cd70;
    *(undefined1 *)((longlong)puVar2 + 0xe) = 2;
    if ((*(int *)(puVar2 + 1) != -1) && (DAT_14c868880 == '\0')) {
      FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                    L"A FRenderResource was deleted without being released first!");
    }
    FUN_1400020a8(puVar2);
  }
  if (0 < *(int *)(param_1 + 3)) {
    lVar8 = 0;
    do {
      (**(code **)(**(longlong **)(param_1[0xb] + lVar8 * 8) + 0x20))();
      puVar2 = *(undefined8 **)(param_1[0xb] + lVar8 * 8);
      if (puVar2 != (undefined8 *)0x0) {
        (**(code **)*puVar2)(puVar2,1);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(param_1 + 3));
  }
  if (param_1[0xb] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14ca97070) && (FUN_144b3d300(&DAT_14ca97070), DAT_14ca97070 == -1)) {
    if (DAT_14c8407a8 == (longlong *)0x0) {
      FUN_1414b00ea();
    }
    plVar6 = (longlong *)(**(code **)(*DAT_14c8407a8 + 200))(DAT_14c8407a8,L"r.Raytracing.Enable",1)
    ;
    if (plVar6 == (longlong *)0x0) {
      DAT_14ca97068 = 0;
    }
    else {
      DAT_14ca97068 = (**(code **)(*plVar6 + 0x68))(plVar6);
    }
    _Init_thread_footer(&DAT_14ca97070);
  }
  lVar8 = DAT_14ca97068;
  bVar9 = true;
  cVar3 = DAT_14ca96da8;
  if (DAT_14ca97068 != 0 && DAT_14ca96da8 == '\x02') {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0xc60) == 0x40000002) {
      uVar7 = 0;
      cVar3 = '\x02';
    }
    else {
      bVar4 = FUN_144a61b4f();
      uVar7 = (ulonglong)(bVar4 ^ 1);
      cVar3 = DAT_14ca96da8;
    }
    bVar9 = *(int *)(lVar8 + uVar7 * 4) != 0;
  }
  if (((bVar9) && (cVar3 != '\0')) && (uVar5 = *(uint *)(param_1 + 0x16), 0 < (int)uVar5)) {
    do {
      plVar6 = *(longlong **)(param_1[0x15] + -8 + (ulonglong)uVar5 * 8);
      *(uint *)(param_1 + 0x16) = uVar5 - 1;
      FUN_147472c68(param_1 + 0x15);
      (**(code **)(*plVar6 + 0x20))(plVar6);
      if (plVar6 != (longlong *)0x0) {
        (**(code **)*plVar6)(plVar6,1);
      }
      uVar5 = *(uint *)(param_1 + 0x16);
    } while (0 < (int)uVar5);
  }
  if ((longlong *)param_1[0xe] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0xe] + 0x20))();
    puVar2 = (undefined8 *)param_1[0xe];
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  puVar2 = (undefined8 *)param_1[5];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[8];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[10];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  puVar2 = (undefined8 *)param_1[9];
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  if (param_1[0x15] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_FUN_149e38530;
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14097e64a FUN_14097e64a body=120 status=ok
// SIG undefined FUN_14097e64a(void)

undefined8 * FUN_14097e64a(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3d4440;
  if (param_1[5] != 0 && (param_1[5] & 1) == 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a3d44e0;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14097e6c2 FUN_14097e6c2 body=120 status=ok
// SIG undefined FUN_14097e6c2(void)

undefined8 * FUN_14097e6c2(undefined8 *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  *param_1 = &PTR_FUN_14a3d4570;
  if (param_1[5] != 0 && (param_1[5] & 1) == 0) {
    FUN_1400020a8();
  }
  *param_1 = &PTR_LAB_14a3d44e0;
  if (param_1[3] != 0) {
    LOCK();
    puVar1 = (uint *)(param_1[3] + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  FUN_14003f39a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14097e73a FUN_14097e73a body=61 status=ok
// SIG undefined FUN_14097e73a(void)

bool FUN_14097e73a(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_14097e824();
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    cVar1 = (**(code **)(*param_1 + 0x170))(param_1,param_2,0);
    *(char *)((longlong)param_1 + 0xb5) = cVar1;
    bVar2 = cVar1 == '\0';
  }
  return bVar2;
}



// FUNCTION 14097e778 FUN_14097e778 body=172 status=ok
// SIG undefined FUN_14097e778(void)

undefined8 FUN_14097e778(longlong param_1,longlong *param_2,char param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  if (*(char *)(*param_2 + 0x460) != '\0') {
    return 0;
  }
  if (2 < (byte)(param_3 - 1U)) goto LAB_14097e7da;
  lVar3 = (longlong)*(int *)(param_1 + 0x1c0);
  if (((lVar3 < 0) || (*(int *)(*(longlong *)(param_1 + 0x48) + 0xe0) <= *(int *)(param_1 + 0x1c0)))
     || (lVar2 = *(longlong *)(*(longlong *)(param_1 + 0x48) + 0xd8),
        *(char *)(lVar2 + lVar3 * 4) != '\0')) goto LAB_14097e7da;
  if (param_3 == '\x02') {
    param_3 = '\x02';
    cVar1 = *(char *)(lVar2 + 2 + lVar3 * 4);
joined_r0x00014097e820:
    if (cVar1 != '\0') goto LAB_14097e7da;
  }
  else if (param_3 == '\x01') {
    param_3 = '\x01';
    cVar1 = *(char *)(lVar2 + 1 + lVar3 * 4);
    goto joined_r0x00014097e820;
  }
  param_3 = '\0';
LAB_14097e7da:
  uVar4 = FUN_14097ebac(param_1,param_2,param_3);
  if ((char)uVar4 == '\0') {
    return 0;
  }
  if (0 < *(int *)(param_1 + 0x1e0)) {
    lVar3 = 0;
    do {
      *(undefined4 *)(*(longlong *)(param_1 + 0x1d8) + lVar3 * 4) = 0x7f7fffff;
      lVar3 = lVar3 + 1;
    } while (lVar3 < *(int *)(param_1 + 0x1e0));
    return uVar4;
  }
  return uVar4;
}



// FUNCTION 14097e824 FUN_14097e824 body=287 status=ok
// SIG undefined FUN_14097e824(void)

undefined8 FUN_14097e824(longlong param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  char extraout_AL;
  char cVar4;
  byte extraout_AL_00;
  byte bVar5;
  undefined1 uVar6;
  undefined7 uVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  longlong lVar9;
  byte bVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  
  lVar11 = *(longlong *)(param_1 + 0x118);
  lVar13 = param_1 + 0xd8;
  if (lVar11 != 0) {
    lVar13 = lVar11;
  }
  lVar9 = *(longlong *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x120);
  uVar8 = (undefined7)((ulonglong)lVar11 >> 8);
  if ((longlong)iVar2 == 0) {
    bVar10 = 0;
    bVar12 = 1;
  }
  else {
    cVar1 = *(char *)(lVar9 + 0x72);
    bVar12 = 1;
    lVar11 = 0;
    bVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar13 + lVar11);
      (**(code **)(*plVar3 + 0x28))(plVar3);
      uVar8 = extraout_var;
      if (extraout_AL != '\0') {
        cVar4 = (**(code **)(*plVar3 + 0x80))(plVar3,param_2,param_1,0xffffffff);
        if (cVar4 == '\x02') {
          FUN_14097ea48(plVar3,param_2,param_1,0xffffffff);
          bVar5 = extraout_AL_00;
          uVar8 = extraout_var_00;
        }
        else {
          bVar5 = 0;
          uVar8 = 0;
        }
        lVar9 = plVar3[9];
        if (*(char *)(lVar9 + 0x78) == '\x01') {
          if ((*(char *)((longlong)plVar3 + 0xb5) == '\x01') ||
             ((*(char *)((longlong)plVar3 + 0xb5) == '\x02' && (*(char *)(lVar9 + 0x73) == '\x01')))
             ) {
            bVar10 = bVar10 | *(byte *)(lVar9 + 0x79);
          }
          else {
            if ((bVar5 | cVar1 != '\0') != 1) {
              uVar6 = 2;
              goto LAB_14097e929;
            }
            bVar12 = 0;
          }
        }
      }
      lVar11 = lVar11 + 8;
    } while ((longlong)iVar2 * 8 != lVar11);
    lVar9 = *(longlong *)(param_1 + 0x48);
  }
  uVar7 = CONCAT71(uVar8,1);
  if (*(char *)(lVar9 + 0x78) != '\0') {
    bVar10 = bVar12 & bVar10;
  }
  if ((bVar10 & 1) != 0) {
    uVar6 = 1;
LAB_14097e929:
    *(undefined1 *)(param_1 + 0xb5) = uVar6;
    uVar7 = 0;
  }
  return uVar7;
}



// FUNCTION 14097e944 FUN_14097e944 body=259 status=ok
// SIG undefined FUN_14097e944(void)

undefined8 FUN_14097e944(longlong *param_1,undefined8 *param_2,longlong param_3,undefined4 param_4)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  lVar2 = param_1[0x15];
  lVar4 = param_1[0x16];
  param_1[0x15] = param_3;
  *(undefined4 *)(param_1 + 0x16) = param_4;
  puVar3 = (uint *)*param_2;
  if ((((*(longlong **)(puVar3 + 2) != (longlong *)0x0) && (puVar3[1] != 0)) &&
      (uVar1 = *puVar3, -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    lVar7 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar7 != 0) && (*(uint *)(lVar7 + 0x10) == puVar3[1])) &&
       ((*(uint *)(lVar7 + 8) & 0x10200000) == 0)) {
      lVar7 = (**(code **)(**(longlong **)(puVar3 + 2) + 0x10))();
      if (lVar7 != 0) {
        cVar5 = (**(code **)(*param_1 + 0x28))(param_1);
        if (cVar5 != '\0') {
          if ((*(char *)(param_2 + 2) != '\0') ||
             (*(float *)(param_1 + 0x18) + *(float *)(param_1[9] + 0x74) < *(float *)(param_2 + 1)))
          {
            *(float *)(param_1 + 0x18) = *(float *)(param_2 + 1);
            uVar6 = (**(code **)(*param_1 + 0x88))(param_1,param_2);
            *(char *)((longlong)param_1 + 0xcc) = (char)uVar6;
          }
          else {
            uVar6 = CONCAT71((int7)((ulonglong)param_1[9] >> 8),
                             *(undefined1 *)((longlong)param_1 + 0xcc));
          }
          goto LAB_14097e9d1;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 1);
  *(undefined1 *)((longlong)param_1 + 0xcc) = 0;
  uVar6 = 0;
LAB_14097e9d1:
  param_1[0x15] = lVar2;
  *(int *)(param_1 + 0x16) = (int)lVar4;
  return uVar6;
}



// FUNCTION 14097ea48 FUN_14097ea48 body=355 status=ok
// SIG undefined FUN_14097ea48(void)

undefined8 FUN_14097ea48(longlong *param_1,longlong param_2,longlong param_3,undefined4 param_4)

{
  longlong *plVar1;
  char cVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  
  param_1[0x15] = param_3;
  *(undefined4 *)(param_1 + 0x16) = param_4;
  cVar2 = (**(code **)(*param_1 + 0x28))();
  if ((cVar2 == '\0') || ((byte)(*(char *)((longlong)param_1 + 0xb4) - 1U) < 2)) {
    param_1[0x15] = 0;
    *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
LAB_14097ea8e:
    uVar4 = 0;
  }
  else {
    (**(code **)(*param_1 + 0xd0))(param_1);
    *(int *)(param_1 + 0x17) = (int)param_1[0x17] + 1;
    *(undefined4 *)((longlong)param_1 + 0xc4) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(param_1 + 0x19) = 0;
    *(undefined1 *)((longlong)param_1 + 0xb4) = 1;
    if (((int)param_1[0x11] != 0) && (plVar1 = (longlong *)param_1[0x10], plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,1);
    }
    cVar2 = (**(code **)(*param_1 + 0x90))(param_1,param_2);
    if ((cVar2 == '\0') && (*(char *)((longlong)param_1 + 0xb5) == '\0')) {
      *(undefined1 *)((longlong)param_1 + 0xb5) = 2;
    }
    (**(code **)(*param_1 + 0x98))(param_1,param_2);
    *(undefined1 *)((longlong)param_1 + 0xb4) = 2;
    if (((int)param_1[0x11] != 0) && (plVar1 = (longlong *)param_1[0x10], plVar1 != (longlong *)0x0)
       ) {
      (**(code **)(*plVar1 + 0x60))(plVar1,param_1,param_2,2);
    }
    cVar2 = (**(code **)(*param_1 + 0xc0))(param_1,param_2);
    if (cVar2 == '\0') {
      cVar2 = *(char *)((longlong)param_1 + 0xb5);
      if (cVar2 != '\x04') {
        cVar3 = (**(code **)(*param_1 + 0x28))(param_1);
        if (cVar3 != '\0') {
          cVar2 = (**(code **)(*param_1 + 0xa8))
                            (param_1,param_2,
                             CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar2) & 0xffffffff);
          if (cVar2 == '\0') goto LAB_14097eba1;
        }
      }
      cVar2 = FUN_14065d9ca(param_1,param_2,*(undefined1 *)((longlong)param_1 + 0xb5));
      if (cVar2 != '\0') goto LAB_14097ea8e;
    }
LAB_14097eba1:
    uVar4 = 1;
  }
  return uVar4;
}



// FUNCTION 14097ebac FUN_14097ebac body=314 status=ok
// SIG undefined FUN_14097ebac(void)

char FUN_14097ebac(longlong *param_1,undefined8 param_2,char param_3)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  longlong *plVar4;
  undefined1 *puVar5;
  ulonglong uVar6;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (param_3 == '\0') {
    lVar2 = param_1[0x37];
    if (0 < (longlong)(int)lVar2) {
      lVar7 = 0;
      uVar6 = 0;
      puVar5 = (undefined1 *)0x0;
      do {
        plVar4 = (longlong *)param_1[0x36];
        if ((longlong *)param_1[0x36] == (longlong *)0x0) {
          plVar4 = param_1 + 0x26;
        }
        lVar1 = *(longlong *)((longlong)plVar4 + lVar7);
        if ((lVar1 != 0) &&
           ((puVar5 == (undefined1 *)0x0 ||
            (cVar3 = (**(code **)(*param_1 + 0x168))(param_1,uVar6 & 0xffffffff), cVar3 != '\0'))))
        {
          cVar3 = FUN_14097f910(lVar1,param_2,param_1,uVar6 & 0xffffffff);
          if (cVar3 == '\x01') {
            cVar3 = (**(code **)(*param_1 + 0x178))(param_1,uVar6 & 0xffffffff,param_2);
            if ((cVar3 == '\0') &&
               ((**(code **)(*param_1 + 0x180))(param_1,uVar6 & 0xffffffff,param_2),
               puVar5 == (undefined1 *)0x0)) {
              puVar5 = &DAT_00000001;
            }
          }
          else if (cVar3 == '\x02') {
            if (puVar5 != (undefined1 *)0x0) {
              return '\0';
            }
            *(int *)(param_1 + 0x38) = (int)uVar6;
            cVar3 = FUN_14097ea48(lVar1,param_2,param_1,uVar6 & 0xffffffff);
            if (cVar3 != '\0') {
              return '\0';
            }
            *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
          }
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x10;
      } while ((longlong)(int)lVar2 != uVar6);
      if (puVar5 != (undefined1 *)0x0) {
        return '\0';
      }
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    param_3 = '\x02';
  }
  return param_3;
}



// FUNCTION 14097ece6 FUN_14097ece6 body=1760 status=ok
// SIG undefined FUN_14097ece6(void)

ulonglong FUN_14097ece6(longlong param_1,longlong param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  float fVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  longlong lVar11;
  float *pfVar12;
  undefined7 uVar14;
  ulonglong uVar13;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  ulonglong uVar22;
  bool bVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_1a8 [36];
  uint local_184;
  longlong local_180;
  int local_174;
  longlong local_170;
  ulonglong local_168;
  undefined1 local_160 [64];
  undefined1 *local_120;
  undefined8 local_118;
  char local_110 [8];
  longlong local_108;
  longlong *local_100;
  undefined8 local_f8;
  undefined1 local_f0;
  int local_e8 [2];
  float local_e0;
  undefined4 uStack_dc;
  ushort local_c8;
  byte local_c0;
  float local_b8;
  undefined4 uStack_b4;
  ushort local_a0;
  byte local_98;
  ulonglong local_90;
  
  uVar13 = param_3 & 0xffffffff;
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_1a8;
  *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  if ((char)param_3 == '\0') {
    uVar8 = *(uint *)(param_1 + 0x1b8);
    uVar14 = (undefined7)(uVar13 >> 8);
    if ((int)uVar8 < 1) {
      uVar13 = CONCAT71(uVar14,2);
    }
    else {
      local_120 = (undefined1 *)0x0;
      local_118 = 0x1000000000;
      FUN_14097f3c8(local_160,(ulonglong)uVar8,1);
      uVar13 = CONCAT71(uVar14,2);
      if (0 < *(int *)(param_1 + 0x1b8)) {
        local_170 = param_1 + 0x130;
        lVar11 = *(longlong *)(param_1 + 0x48);
        lVar21 = 0;
        uVar20 = 0;
        fVar25 = 0.0;
        uVar13 = 0;
        local_180 = param_2;
        local_168 = (ulonglong)uVar8;
        do {
          cVar7 = FUN_14097f44a(param_1,lVar11,uVar20 & 0xffffffff);
          if (cVar7 == '\x02') {
            if ((param_2 == 0) || (*(char *)(lVar11 + 0xd0) == '\0')) {
              lVar4 = *(longlong *)(lVar11 + 0xd8);
              lVar16 = *(longlong *)(param_1 + 0x40);
              local_184 = (uint)uVar13;
              if (lVar16 == 0) {
                lVar15 = 0;
                lVar16 = 0;
LAB_14097f230:
                local_100 = (longlong *)0x0;
                bVar6 = true;
                local_108 = lVar16;
              }
              else {
                if ((*(int *)(lVar16 + 0x4c) == 0) ||
                   (uVar8 = *(uint *)(lVar16 + 0x48), (int)uVar8 < 0)) {
LAB_14097f1f9:
                  lVar15 = 0;
                }
                else {
                  lVar15 = 0;
                  if ((int)uVar8 < DAT_14c9647dc) {
                    plVar17 = (longlong *)
                              ((ulonglong)((uVar8 & 0xffff) * 0x18) +
                              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8));
                    if (((plVar17 == (longlong *)0x0) ||
                        ((int)plVar17[2] != *(int *)(lVar16 + 0x4c))) ||
                       ((*(uint *)(plVar17 + 1) & 0x10200000) != 0)) goto LAB_14097f1f9;
                    lVar15 = *plVar17;
                  }
                }
                plVar17 = *(longlong **)(lVar16 + 0x118);
                lVar16 = param_1;
                if (plVar17 == (longlong *)0x0) goto LAB_14097f230;
                LOCK();
                *(int *)(plVar17 + 1) = (int)plVar17[1] + 1;
                UNLOCK();
                LOCK();
                *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
                UNLOCK();
                LOCK();
                plVar1 = plVar17 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plVar17)(plVar17);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar17 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar17 + 0x10))(plVar17);
                  }
                }
                LOCK();
                *(int *)((longlong)plVar17 + 0xc) = *(int *)((longlong)plVar17 + 0xc) + 1;
                UNLOCK();
                bVar6 = false;
                local_108 = param_1;
                local_100 = plVar17;
              }
              plVar17 = local_100;
              local_e8[0] = 0;
              local_110[0] = '\x03';
              local_f8._0_4_ = 0;
              if (lVar15 == 0) {
                iVar18 = 0;
                uVar8 = (uint)local_f8;
              }
              else {
                uVar8 = *(uint *)(lVar15 + 0xc);
                local_f8 = (ulonglong)uVar8;
                if ((int)uVar8 < DAT_14c9647dc) {
                  lVar16 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
                }
                else {
                  lVar16 = 0;
                }
                iVar18 = *(int *)(lVar16 + 0x10);
                if (*(int *)(lVar16 + 0x10) == 0) {
                  LOCK();
                  iVar18 = DAT_14c964868 + 1;
                  UNLOCK();
                  iVar19 = DAT_14c964868 + 1;
                  bVar23 = DAT_14c964868 < 1000;
                  DAT_14c964868 = iVar18;
                  if (bVar23) {
                    local_174 = iVar19;
                    FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                  L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                  ,iVar19);
                    iVar19 = local_174;
                  }
                  LOCK();
                  iVar18 = *(int *)(lVar16 + 0x10);
                  bVar23 = iVar18 == 0;
                  if (bVar23) {
                    *(int *)(lVar16 + 0x10) = iVar19;
                    iVar18 = 0;
                  }
                  UNLOCK();
                  uVar8 = (uint)local_f8;
                  if (bVar23) {
                    iVar18 = iVar19;
                  }
                }
              }
              local_f8._0_4_ = uVar8;
              local_f8 = CONCAT44(iVar18,(uint)local_f8);
              local_f0 = 2;
              if (local_e8[0] != 0) {
                FUN_1417398fc(&DAT_14c9a3da0,local_e8[0] + -1,1);
                local_e8[0] = 0;
              }
              if (!bVar6) {
                LOCK();
                piVar2 = (int *)((longlong)plVar17 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*plVar17 + 0x10))(plVar17);
                }
              }
              FUN_1447c3578(lVar4 + lVar21,&local_e0,local_110);
              uVar13 = (ulonglong)local_184;
              if (local_c0 == 3) {
                uVar8 = 3;
                param_2 = local_180;
                fVar24 = local_e0;
              }
              else {
                FUN_1400b56fe(&local_b8,&local_e0,3);
                fVar24 = 0.0;
                if (local_98 != 0) {
                  fVar24 = local_b8;
                }
                pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_98 * 0x120));
                if (pcVar5 != (code *)0x0) {
                  pfVar12 = &local_b8;
                  if (0x18 < local_a0) {
                    pfVar12 = (float *)CONCAT44(uStack_b4,local_b8);
                  }
                  (*pcVar5)(pfVar12);
                  uVar13 = (ulonglong)local_184;
                }
                param_2 = local_180;
                if (0x18 < local_a0) {
                  FUN_1400020a8(CONCAT44(uStack_b4,local_b8));
                }
                uVar8 = (uint)local_c0;
              }
              pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar8 * 0x120));
              if (pcVar5 != (code *)0x0) {
                pfVar12 = &local_e0;
                if (0x18 < local_c8) {
                  pfVar12 = (float *)CONCAT44(uStack_dc,local_e0);
                }
                (*pcVar5)(pfVar12);
                uVar13 = (ulonglong)local_184;
                param_2 = local_180;
              }
              if (0x18 < local_c8) {
                FUN_1400020a8(CONCAT44(uStack_dc,local_e0));
              }
              FUN_1448173f8(local_e8);
              if ((local_110[0] == '\x03') && (local_100 != (longlong *)0x0)) {
                LOCK();
                piVar2 = (int *)((longlong)local_100 + 0xc);
                *piVar2 = *piVar2 + -1;
                UNLOCK();
                if (*piVar2 == 0) {
                  (**(code **)(*local_100 + 0x10))();
                }
              }
            }
            else {
              uVar10 = *(int *)(param_1 + 0xb8) + 1;
              uVar8 = *(int *)(*(longlong *)(param_1 + 0x1c8) + uVar20 * 4) + 1;
              if (uVar10 < uVar8) {
                uVar8 = uVar10;
              }
              fVar24 = 1.0 / ((float)uVar8 / (float)uVar10);
            }
            if (0.0 < fVar24) {
              uVar13 = (ulonglong)((int)uVar13 + 1);
              fVar25 = fVar25 + fVar24;
              puVar9 = local_120;
              if (local_120 == (undefined1 *)0x0) {
                puVar9 = local_160;
              }
              *(float *)(puVar9 + uVar20 * 4) = fVar24;
            }
          }
          uVar20 = uVar20 + 1;
          lVar21 = lVar21 + 0x40;
        } while ((longlong)uVar20 < (longlong)*(int *)(param_1 + 0x1b8));
        if (0 < (int)uVar13) {
          uVar22 = local_168 << 2;
          uVar20 = uVar13;
          do {
            uVar8 = rand();
            fVar24 = ((float)(uVar8 & 0x7fff) / 32767.0) * fVar25 + 0.0;
            puVar9 = local_120;
            if (local_120 == (undefined1 *)0x0) {
              puVar9 = local_160;
            }
            iVar18 = 0;
            uVar13 = 0;
            do {
              fVar3 = *(float *)(puVar9 + uVar13);
              if ((0.0 < fVar3) && (fVar24 = fVar24 - fVar3, fVar24 <= 0.0)) {
                *(int *)(param_1 + 0x1c0) = iVar18;
                lVar11 = *(longlong *)(param_1 + 0x1b0);
                if (*(longlong *)(param_1 + 0x1b0) == 0) {
                  lVar11 = local_170;
                }
                lVar11 = *(longlong *)(lVar11 + uVar13 * 4);
                if ((lVar11 != 0) && (cVar7 = FUN_14097ea48(lVar11,param_2,param_1), cVar7 != '\0'))
                {
                  uVar13 = 0;
                  goto LAB_14097f0f8;
                }
                puVar9 = local_120;
                if (local_120 == (undefined1 *)0x0) {
                  puVar9 = local_160;
                }
                *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
                *(undefined4 *)(puVar9 + uVar13) = 0;
                fVar25 = fVar25 - fVar3;
                uVar20 = (ulonglong)((int)uVar20 - 1);
                break;
              }
              uVar13 = uVar13 + 4;
              iVar18 = iVar18 + 1;
            } while (uVar22 != uVar13);
            param_2 = local_180;
          } while (0 < (int)uVar20);
        }
        uVar13 = CONCAT71((int7)(uVar13 >> 8),2);
      }
LAB_14097f0f8:
      if (local_120 != (undefined1 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  if ((local_90 ^ (ulonglong)auStack_1a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar13 & 0xffffffff;
}



// FUNCTION 14097f3c8 FUN_14097f3c8 body=129 status=ok
// SIG undefined FUN_14097f3c8(void)

void FUN_14097f3c8(longlong param_1,int param_2,char param_3)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < param_2) {
    *(int *)(param_1 + 0x48) = param_2;
    if ((uint)(*(int *)(param_1 + 0x4c) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_1478ddd44(param_1);
    }
    lVar2 = *(longlong *)(param_1 + 0x40);
    if (*(longlong *)(param_1 + 0x40) == 0) {
      lVar2 = param_1;
    }
    memset((void *)(lVar2 + (longlong)iVar1 * 4),0,(longlong)(param_2 - iVar1) << 2);
    return;
  }
  if (-1 < param_2) {
    if ((param_2 < iVar1) && (*(int *)(param_1 + 0x48) = param_2, param_3 == '\x01')) {
      FUN_147e27d5a(param_1);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 14097f44a FUN_14097f44a body=1220 status=ok
// SIG undefined FUN_14097f44a(void)

undefined8 FUN_14097f44a(longlong param_1,longlong param_2,int param_3,longlong param_4)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  float *pfVar9;
  longlong lVar10;
  float *pfVar11;
  int iVar12;
  longlong *plVar13;
  longlong lVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  float fVar18;
  undefined1 auStack_128 [32];
  int local_108;
  int local_104;
  longlong local_100;
  longlong local_f8;
  longlong local_f0;
  longlong local_e8;
  char local_e0 [8];
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  int local_b8 [2];
  float local_b0;
  undefined4 uStack_ac;
  ushort local_98;
  byte local_90;
  float local_88;
  undefined4 uStack_84;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  local_f8 = param_1 + 0x130;
  lVar15 = *(longlong *)(param_1 + 0x1b0);
  if (*(longlong *)(param_1 + 0x1b0) == 0) {
    lVar15 = local_f8;
  }
  lVar10 = (longlong)param_3;
  lVar15 = *(longlong *)(lVar15 + lVar10 * 0x10);
  if (lVar15 != 0) {
    lVar14 = lVar10 * 0x40 + *(longlong *)(param_2 + 0xd8);
    lVar3 = *(longlong *)(param_1 + 0x40);
    local_104 = param_3;
    local_100 = lVar15;
    local_f0 = param_2;
    local_e8 = param_4;
    if (lVar3 == 0) {
      lVar15 = 0;
      local_d8 = 0;
LAB_14097f7f0:
      local_d0 = (longlong *)0x0;
      bVar5 = true;
    }
    else {
      if (*(int *)(lVar3 + 0x4c) == 0) {
LAB_14097f768:
        lVar15 = 0;
      }
      else {
        uVar7 = *(uint *)(lVar3 + 0x48);
        lVar15 = 0;
        if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
          plVar13 = (longlong *)
                    ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
          if ((plVar13 == (longlong *)0x0) ||
             (((int)plVar13[2] != *(int *)(lVar3 + 0x4c) ||
              ((*(uint *)(plVar13 + 1) & 0x10200000) != 0)))) goto LAB_14097f768;
          lVar15 = *plVar13;
        }
      }
      plVar13 = *(longlong **)(lVar3 + 0x118);
      local_d8 = param_1;
      if (plVar13 == (longlong *)0x0) goto LAB_14097f7f0;
      LOCK();
      *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
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
      LOCK();
      *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
      UNLOCK();
      bVar5 = false;
      local_d0 = plVar13;
    }
    plVar13 = local_d0;
    local_b8[0] = 0;
    local_e0[0] = '\x03';
    local_c8._0_4_ = 0;
    if (lVar15 == 0) {
      iVar6 = 0;
      uVar7 = (uint)local_c8;
    }
    else {
      uVar7 = *(uint *)(lVar15 + 0xc);
      local_c8 = (ulonglong)uVar7;
      if ((int)uVar7 < DAT_14c9647dc) {
        lVar15 = (ulonglong)((uVar7 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8);
      }
      else {
        lVar15 = 0;
      }
      iVar6 = *(int *)(lVar15 + 0x10);
      if (*(int *)(lVar15 + 0x10) == 0) {
        LOCK();
        iVar6 = DAT_14c964868 + 1;
        UNLOCK();
        iVar12 = DAT_14c964868 + 1;
        bVar16 = DAT_14c964868 < 1000;
        DAT_14c964868 = iVar6;
        if (bVar16) {
          local_108 = iVar12;
          FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                        L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                        iVar12);
          iVar12 = local_108;
        }
        LOCK();
        iVar6 = *(int *)(lVar15 + 0x10);
        bVar16 = iVar6 == 0;
        if (bVar16) {
          *(int *)(lVar15 + 0x10) = iVar12;
          iVar6 = 0;
        }
        UNLOCK();
        uVar7 = (uint)local_c8;
        if (bVar16) {
          iVar6 = iVar12;
        }
      }
    }
    local_c8._0_4_ = uVar7;
    local_c8 = CONCAT44(iVar6,(uint)local_c8);
    local_c0 = 2;
    if (local_b8[0] != 0) {
      FUN_1417398fc(&DAT_14c9a3da0,local_b8[0] + -1,1);
      local_b8[0] = 0;
    }
    if (!bVar5) {
      LOCK();
      piVar2 = (int *)((longlong)plVar13 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
      }
    }
    pfVar9 = &local_b0;
    FUN_1447c3578(lVar14,pfVar9,local_e0);
    if (local_90 == 3) {
      uVar7 = 3;
      fVar18 = local_b0;
    }
    else {
      pfVar11 = &local_88;
      FUN_1400b56fe(pfVar11,&local_b0,3);
      fVar18 = 0.0;
      if (local_68 != 0) {
        fVar18 = local_88;
      }
      pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
      if (pcVar4 != (code *)0x0) {
        if (0x18 < local_70) {
          pfVar11 = (float *)CONCAT44(uStack_84,local_88);
        }
        (*pcVar4)(pfVar11);
      }
      if (0x18 < local_70) {
        FUN_1400020a8(CONCAT44(uStack_84,local_88));
      }
      uVar7 = (uint)local_90;
    }
    pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
    if (pcVar4 != (code *)0x0) {
      if (0x18 < local_98) {
        pfVar9 = (float *)CONCAT44(uStack_ac,local_b0);
      }
      (*pcVar4)(pfVar9);
    }
    if (0x18 < local_98) {
      FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
    }
    FUN_1448173f8(local_b8);
    if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
      LOCK();
      piVar2 = (int *)((longlong)local_d0 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_d0 + 0x10))();
      }
    }
    fVar17 = 0.0;
    if (0.0 < fVar18) {
      if (*(char *)(lVar14 + 0x3c) == '\x01') {
        uVar7 = *(uint *)(*(longlong *)(param_1 + 0x1c8) + lVar10 * 4);
        if (uVar7 == 0) {
LAB_14097f6bf:
          uVar7 = 0;
        }
        else {
          if ((-1 < local_104) && (local_104 < *(int *)(param_1 + 0x1b8))) {
            lVar15 = local_f8;
            if (*(longlong *)(param_1 + 0x1b0) != 0) {
              lVar15 = *(longlong *)(param_1 + 0x1b0);
            }
            fVar17 = *(float *)(lVar15 + 8 + lVar10 * 0x10);
          }
          if (*(float *)(local_f0 + 0xd4) <= *(float *)(local_e8 + 8) - fVar17) {
            *(undefined4 *)(*(longlong *)(param_1 + 0x1c8) + lVar10 * 4) = 0;
            goto LAB_14097f6bf;
          }
        }
        if (*(uint *)(lVar14 + 0x38) <= uVar7) {
          if (*(char *)(local_e8 + 0x11) == '\x01') {
            FUN_14097f910(local_100,local_e8,param_1);
          }
          goto LAB_14097f6d2;
        }
      }
      uVar8 = FUN_14097f910(local_100,local_e8,param_1);
      goto LAB_14097f677;
    }
  }
LAB_14097f6d2:
  uVar8 = 0;
LAB_14097f677:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14097f910 FUN_14097f910 body=98 status=ok
// SIG undefined FUN_14097f910(void)

undefined8 FUN_14097f910(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  float fVar2;
  
  uVar1 = FUN_14097e944();
  if ((*(char *)(param_1 + 0xb4) != '\x02') && (0.0 < *(float *)(param_1 + 0x128))) {
    if (((char)uVar1 == '\0') || (fVar2 = *(float *)(param_1 + 300), fVar2 < 0.0)) {
      fVar2 = *(float *)(param_2 + 8);
      *(float *)(param_1 + 300) = fVar2;
    }
    if (((char)uVar1 == '\x02') &&
       (fVar2 = *(float *)(param_1 + 0x128) + fVar2,
       *(float *)(param_2 + 8) <= fVar2 && fVar2 != *(float *)(param_2 + 8))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}



// FUNCTION 14097f972 FUN_14097f972 body=34 status=ok
// SIG undefined FUN_14097f972(void)

undefined8 FUN_14097f972(longlong param_1)

{
  char cVar1;
  
  if ((*(char *)(*(longlong *)(param_1 + 0x48) + 0x7b) == '\x01') &&
     (cVar1 = FUN_14097f994(), cVar1 != '\0')) {
    return 2;
  }
  return 0;
}



// FUNCTION 14097f994 FUN_14097f994 body=1868 status=ok
// SIG undefined FUN_14097f994(void)

undefined8 FUN_14097f994(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong *plVar11;
  int iVar12;
  longlong lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_128 [44];
  int local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  char local_e0 [8];
  longlong local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  undefined1 local_c0;
  int local_b8 [2];
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined8 local_a0;
  ushort local_98;
  byte local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  ushort local_70;
  byte local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_128;
  if ((*(longlong **)(param_1 + 0xe0) == (longlong *)0x0) || (*(int *)(param_1 + 0xdc) == 0))
  goto LAB_14097fa1c;
  uVar3 = *(uint *)(param_1 + 0xd8);
  uVar9 = 0;
  if (((int)uVar3 < 0) || (DAT_14c9647dc <= (int)uVar3)) goto LAB_14097fa1e;
  lVar8 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
  if (((lVar8 != 0) && (*(int *)(lVar8 + 0x10) == *(int *)(param_1 + 0xdc))) &&
     ((*(uint *)(lVar8 + 8) & 0x10200000) == 0)) {
    lVar8 = (**(code **)(**(longlong **)(param_1 + 0xe0) + 0x10))();
    plVar11 = *(longlong **)(lVar8 + 0x80);
    if (plVar11 != (longlong *)0x0) {
      iVar7 = (int)plVar11[1];
      do {
        if (iVar7 == 0) goto LAB_14097fa1c;
        LOCK();
        iVar12 = (int)plVar11[1];
        bVar16 = iVar7 == iVar12;
        if (bVar16) {
          *(int *)(plVar11 + 1) = iVar7 + 1;
          iVar12 = iVar7;
        }
        iVar7 = iVar12;
        UNLOCK();
      } while (!bVar16);
      lVar8 = *(longlong *)(lVar8 + 0x78);
      LOCK();
      plVar1 = plVar11 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar11)(plVar11);
        LOCK();
        piVar2 = (int *)((longlong)plVar11 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar11 + 0x10))(plVar11);
        }
      }
      if (lVar8 != 0) {
        lVar4 = *(longlong *)(param_1 + 0x48);
        lVar13 = *(longlong *)(param_1 + 0x40);
        if (lVar13 == 0) {
          lVar10 = 0;
          local_d8 = 0;
LAB_14097ff6d:
          local_d0 = (longlong *)0x0;
          bVar16 = true;
        }
        else {
          if (*(int *)(lVar13 + 0x4c) == 0) {
LAB_14097ff02:
            lVar10 = 0;
          }
          else {
            uVar3 = *(uint *)(lVar13 + 0x48);
            lVar10 = 0;
            if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
              plVar11 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if ((plVar11 == (longlong *)0x0) ||
                 (((int)plVar11[2] != *(int *)(lVar13 + 0x4c) ||
                  ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_14097ff02;
              lVar10 = *plVar11;
            }
          }
          plVar11 = *(longlong **)(lVar13 + 0x118);
          local_d8 = param_1;
          if (plVar11 == (longlong *)0x0) goto LAB_14097ff6d;
          LOCK();
          *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          LOCK();
          plVar1 = plVar11 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*plVar11)(plVar11);
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          LOCK();
          *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
          UNLOCK();
          bVar16 = false;
          local_d0 = plVar11;
        }
        plVar11 = local_d0;
        local_b8[0] = 0;
        local_e0[0] = '\x03';
        local_c8._0_4_ = 0;
        if (lVar10 == 0) {
          iVar7 = 0;
          uVar3 = (uint)local_c8;
        }
        else {
          uVar3 = *(uint *)(lVar10 + 0xc);
          local_c8 = (ulonglong)uVar3;
          if ((int)uVar3 < DAT_14c9647dc) {
            lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
          }
          else {
            lVar13 = 0;
          }
          iVar7 = *(int *)(lVar13 + 0x10);
          if (*(int *)(lVar13 + 0x10) == 0) {
            LOCK();
            iVar7 = DAT_14c964868 + 1;
            UNLOCK();
            iVar12 = DAT_14c964868 + 1;
            bVar17 = DAT_14c964868 < 1000;
            DAT_14c964868 = iVar7;
            if (bVar17) {
              FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                            L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                            ,iVar12);
            }
            LOCK();
            iVar7 = *(int *)(lVar13 + 0x10);
            bVar17 = iVar7 == 0;
            if (bVar17) {
              *(int *)(lVar13 + 0x10) = iVar12;
              iVar7 = 0;
            }
            UNLOCK();
            uVar3 = (uint)local_c8;
            if (bVar17) {
              iVar7 = iVar12;
            }
          }
        }
        local_c8._0_4_ = uVar3;
        local_c8 = CONCAT44(iVar7,(uint)local_c8);
        local_c0 = 2;
        if (local_b8[0] != 0) {
          FUN_1417398fc(&DAT_14c9a3da0,local_b8[0] + -1,1);
          local_b8[0] = 0;
        }
        if (!bVar16) {
          LOCK();
          piVar2 = (int *)((longlong)plVar11 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar11 + 0x10))(plVar11);
          }
        }
        puVar15 = &local_b0;
        FUN_1447c3578(lVar4 + 0xb8,puVar15,local_e0);
        if (local_90 == 4) {
          local_e8 = local_a0;
          local_f8 = local_b0;
          uStack_f4 = uStack_ac;
          uStack_f0 = uStack_a8;
          uStack_ec = uStack_a4;
          bVar16 = true;
          local_90 = 4;
        }
        else {
          puVar14 = &local_88;
          FUN_1400b56fe(puVar14,&local_b0,4);
          bVar16 = local_68 != 0;
          if (bVar16) {
            local_e8 = local_78;
            local_f8 = local_88;
            uStack_f4 = uStack_84;
            uStack_f0 = uStack_80;
            uStack_ec = uStack_7c;
          }
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_70) {
              puVar14 = (undefined4 *)CONCAT44(uStack_84,local_88);
            }
            (*pcVar5)(puVar14);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT44(uStack_84,local_88));
          }
        }
        pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_90 * 0x120));
        if (pcVar5 != (code *)0x0) {
          if (0x18 < local_98) {
            puVar15 = (undefined4 *)CONCAT44(uStack_ac,local_b0);
          }
          (*pcVar5)(puVar15);
        }
        if (0x18 < local_98) {
          FUN_1400020a8(CONCAT44(uStack_ac,local_b0));
        }
        FUN_1448173f8(local_b8);
        if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
          LOCK();
          piVar2 = (int *)((longlong)local_d0 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*local_d0 + 0x10))();
          }
        }
        if (bVar16) {
          lVar13 = *(longlong *)(param_1 + 0x40);
          if (lVar13 == 0) {
            lVar10 = 0;
            lVar13 = 0;
LAB_14097ff98:
            local_d0 = (longlong *)0x0;
            bVar16 = true;
            local_d8 = lVar13;
          }
          else {
            if (*(int *)(lVar13 + 0x4c) == 0) {
LAB_14097ff0a:
              lVar10 = 0;
            }
            else {
              uVar3 = *(uint *)(lVar13 + 0x48);
              lVar10 = 0;
              if ((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) {
                plVar11 = (longlong *)
                          ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
                if ((plVar11 == (longlong *)0x0) ||
                   (((int)plVar11[2] != *(int *)(lVar13 + 0x4c) ||
                    ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)))) goto LAB_14097ff0a;
                lVar10 = *plVar11;
              }
            }
            plVar11 = *(longlong **)(lVar13 + 0x118);
            lVar13 = param_1;
            if (plVar11 == (longlong *)0x0) goto LAB_14097ff98;
            LOCK();
            *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
            UNLOCK();
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            LOCK();
            plVar1 = plVar11 + 1;
            *(int *)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
              (**(code **)*plVar11)(plVar11);
              LOCK();
              piVar2 = (int *)((longlong)plVar11 + 0xc);
              *piVar2 = *piVar2 + -1;
              UNLOCK();
              if (*piVar2 == 0) {
                (**(code **)(*plVar11 + 0x10))(plVar11);
              }
            }
            LOCK();
            *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
            UNLOCK();
            bVar16 = false;
            local_d8 = param_1;
            local_d0 = plVar11;
          }
          plVar11 = local_d0;
          local_b8[0] = 0;
          local_e0[0] = '\x03';
          local_c8._0_4_ = 0;
          if (lVar10 == 0) {
            iVar7 = 0;
            uVar3 = (uint)local_c8;
          }
          else {
            uVar3 = *(uint *)(lVar10 + 0xc);
            local_c8 = (ulonglong)uVar3;
            if ((int)uVar3 < DAT_14c9647dc) {
              lVar13 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
            }
            else {
              lVar13 = 0;
            }
            iVar7 = *(int *)(lVar13 + 0x10);
            if (*(int *)(lVar13 + 0x10) == 0) {
              LOCK();
              iVar7 = DAT_14c964868 + 1;
              UNLOCK();
              iVar12 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar7;
              if (bVar17) {
                local_fc = iVar12;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,iVar12);
                iVar12 = local_fc;
              }
              LOCK();
              iVar7 = *(int *)(lVar13 + 0x10);
              bVar17 = iVar7 == 0;
              if (bVar17) {
                *(int *)(lVar13 + 0x10) = iVar12;
                iVar7 = 0;
              }
              UNLOCK();
              uVar3 = (uint)local_c8;
              if (bVar17) {
                iVar7 = iVar12;
              }
            }
          }
          local_c8._0_4_ = uVar3;
          local_c8 = CONCAT44(iVar7,(uint)local_c8);
          local_c0 = 2;
          if (local_b8[0] != 0) {
            FUN_1417398fc(&DAT_14c9a3da0,local_b8[0] + -1,1);
            local_b8[0] = 0;
          }
          if (!bVar16) {
            LOCK();
            piVar2 = (int *)((longlong)plVar11 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar11 + 0x10))(plVar11);
            }
          }
          puVar15 = &local_88;
          FUN_1447c3578(lVar4 + 0xf0,puVar15,local_e0);
          cVar6 = FUN_140a1daa8(puVar15,&local_b0);
          pcVar5 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_68 * 0x120));
          if (pcVar5 != (code *)0x0) {
            if (0x18 < local_70) {
              puVar15 = (undefined4 *)CONCAT44(uStack_84,local_88);
            }
            (*pcVar5)(puVar15);
          }
          if (0x18 < local_70) {
            FUN_1400020a8(CONCAT44(uStack_84,local_88));
          }
          FUN_1448173f8(local_b8);
          if ((local_e0[0] == '\x03') && (local_d0 != (longlong *)0x0)) {
            LOCK();
            piVar2 = (int *)((longlong)local_d0 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*local_d0 + 0x10))();
            }
          }
          if (cVar6 != '\0') {
            uVar9 = FUN_140343d7a(param_1);
            uVar9 = FUN_1402b58ea(lVar8,uVar9,&local_f8,local_b0);
            goto LAB_14097fa1e;
          }
        }
      }
    }
  }
LAB_14097fa1c:
  uVar9 = 0;
LAB_14097fa1e:
  if ((local_60 ^ (ulonglong)auStack_128) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar9;
}



// FUNCTION 1409800e2 FUN_1409800e2 body=144 status=ok
// SIG undefined FUN_1409800e2(void)

void FUN_1409800e2(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined ***pppuVar2;
  undefined1 auStack_88 [32];
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_88;
  puVar1 = (undefined8 *)FUN_1409801a0();
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14b9c0090;
  local_68[0] = FUN_140c83ef0;
  local_40 = param_1;
  local_38 = param_2;
  FUN_140980216(*puVar1,local_68);
  if (local_68[0] != (code *)0x0) {
    pppuVar2 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar2 = &local_48;
    }
    (*(code *)(*pppuVar2)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140980174 FUN_140980174 body=12 status=ok
// SIG undefined FUN_140980174(void)

void FUN_140980174(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00014098017d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 140980180 FUN_140980180 body=31 status=ok
// SIG undefined FUN_140980180(void)

undefined8 FUN_140980180(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1409801a0 FUN_1409801a0 body=116 status=ok
// SIG undefined FUN_1409801a0(void)

longlong FUN_1409801a0(undefined8 param_1)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1402815f4(param_1,&local_28);
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
    return local_28 + 0x630;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140980216 FUN_140980216 body=106 status=ok
// SIG undefined FUN_140980216(void)

undefined4 FUN_140980216(longlong param_1,longlong *param_2)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  if (*param_2 == 0) {
    uVar2 = 0;
  }
  else {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
    pcVar1 = (code *)*param_2;
    plVar4 = param_2 + 4;
    if ((longlong *)param_2[2] != (longlong *)0x0) {
      plVar4 = (longlong *)param_2[2];
    }
    uVar3 = (**(code **)(*plVar4 + 8))(plVar4);
    uVar2 = (*pcVar1)(uVar3,param_1);
    if ((char)uVar2 != '\0') {
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x28));
  }
  return uVar2;
}



// FUNCTION 140980280 FUN_140980280 body=270 status=ok
// SIG undefined FUN_140980280(void)

undefined8 FUN_140980280(longlong param_1)

{
  int iVar1;
  uint uVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (DAT_14c86a9f8 == '\x01') {
    iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                    + 0xc60);
    if (iVar1 == 2) goto LAB_140980388;
    if (iVar1 == 1) {
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 == DVar4) goto LAB_140980388;
    }
    FUN_140192332(param_1 + 0x18,&local_28,0);
  }
  else {
LAB_140980388:
    local_28 = 0;
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar2 = *(uint *)(param_1 + 0x18);
    uVar6 = 0;
    if (((int)uVar2 < 0) || (DAT_14c9647dc <= (int)uVar2)) goto LAB_140980336;
    plVar5 = (longlong *)
             ((ulonglong)((uVar2 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
    if ((plVar5 != (longlong *)0x0) &&
       ((((int)plVar5[2] == *(int *)(param_1 + 0x1c) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0))
        && (*plVar5 != 0)))) {
      (**(code **)(param_1 + 0x20))();
      uVar6 = 1;
      goto LAB_140980336;
    }
  }
  uVar6 = 0;
LAB_140980336:
  if ((local_28 != 0) && (DAT_14c872a72 == '\0')) {
    FUN_140113f48(local_28);
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140980390 FUN_140980390 body=117 status=ok
// SIG undefined FUN_140980390(void)

void FUN_140980390(longlong param_1)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (((((*(byte *)(param_1 + 0xc4) & 0x40) == 0) &&
       (lVar2 = *(longlong *)(param_1 + 0x80), (*(byte *)(lVar2 + 0x1c8) & 1) != 0)) &&
      (*(longlong *)(lVar2 + 0x1cc) != 0)) &&
     (*(float *)(lVar2 + 0x1d4) <= *(float *)(param_1 + 0xa0))) {
    *(byte *)(param_1 + 0xc4) = *(byte *)(param_1 + 0xc4) | 0x40;
    uVar1 = *(undefined1 *)(*(longlong *)(param_1 + 0x30) + 0xbd8);
    *(undefined1 *)(param_1 + 0xb5) = uVar1;
    FUN_140980406(*(longlong *)(param_1 + 0x30),*(undefined8 *)(lVar2 + 0x1cc),uVar1,0,0);
  }
  return;
}



// FUNCTION 140980406 FUN_140980406 body=228 status=ok
// SIG undefined FUN_140980406(void)

void FUN_140980406(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  undefined1 param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0xd10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xd08);
    lVar4 = 0;
    do {
      FUN_1409804ea(*(undefined8 *)(lVar2 + lVar4),param_2,param_4,param_3,
                    *(undefined1 *)(param_1 + 0xbd9),param_5);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  if ((((0 < *(int *)(param_1 + 0xd20)) && (*(longlong **)(param_1 + 0x1b0) != (longlong *)0x0)) &&
      (cVar3 = (**(code **)(**(longlong **)(param_1 + 0x1b0) + 0x700))(), cVar3 != '\0')) &&
     (iVar1 = *(int *)(param_1 + 0xd20), (longlong)iVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xd18);
    lVar4 = 0;
    do {
      FUN_1409804ea(*(undefined8 *)(lVar2 + lVar4),param_2,param_4,param_3,
                    *(undefined1 *)(param_1 + 0xbd9),param_5);
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  return;
}



// FUNCTION 1409804ea FUN_1409804ea body=619 status=ok
// SIG undefined FUN_1409804ea(void)

void FUN_1409804ea(longlong param_1,longlong param_2,int param_3,byte param_4,byte param_5,
                  undefined1 param_6)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  byte bVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_98 [32];
  undefined1 local_78;
  undefined4 local_70;
  longlong local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = param_2;
  if (((*(byte *)(param_1 + 0x78) & 2) != 0) && (*(char *)(param_1 + 9) == '\0')) {
    lVar5 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x40));
    lVar7 = *(longlong *)(param_1 + 0x48);
    if (lVar7 == 0) {
      bVar3 = true;
    }
    else {
      dVar1 = *(double *)(lVar5 + 0x6d0);
      if ((*(int *)(lVar7 + 0x3d4) < 0) &&
         ((lVar5 = *(longlong *)(lVar7 + 0xb0), lVar5 != 0 ||
          (lVar5 = FUN_1448abda6(lVar7), lVar5 != 0)))) {
        fVar8 = (float)*(double *)(lVar5 + 0x6d0);
      }
      else {
        fVar8 = *(float *)(lVar7 + 0x3c4);
      }
      bVar3 = (float)(dVar1 + -1.0) < fVar8;
    }
    if ((longlong)*(int *)(param_1 + 0x98) != 0) {
      plVar6 = *(longlong **)(param_1 + 0x90);
      lVar7 = (longlong)*(int *)(param_1 + 0x98) * 0xf0;
      do {
        if ((((((*(byte *)((longlong)plVar6 + 0x15) & 1) == 0) && (*plVar6 == param_2)) &&
             ((*(uint *)((longlong)plVar6 + 0xc) & 1 << (param_4 & 0x1f)) != 0)) &&
            (((1 << (param_5 & 0x1f) & (uint)*(byte *)((longlong)plVar6 + 0x14)) != 0 &&
             ((int)plVar6[3] == 0 || (int)plVar6[3] == param_3)))) &&
           ((bVar4 = *(byte *)((longlong)plVar6 + 0x15) & 2, bVar4 != 0 ||
            ((*(char *)(param_1 + 8) != '\0' ||
             ((bool)((*(byte *)(plVar6 + 2) & 0x10) == 0 | bVar3))))))) {
          lVar5 = plVar6[0x1d];
          if (lVar5 == 0) {
            if (((((int)plVar6[0x1a] != 0) &&
                 (uVar2 = *(uint *)((longlong)plVar6 + 0xcc), -1 < (int)uVar2)) &&
                ((int)uVar2 < DAT_14c9647dc)) &&
               (((lVar5 = (ulonglong)((uVar2 & 0xffff) * 0x18) +
                          *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8), lVar5 != 0
                 && (*(int *)(lVar5 + 0x10) == (int)plVar6[0x1a])) &&
                ((*(uint *)(lVar5 + 8) & 0x10200000) == 0)))) {
              FUN_140980b4a(param_1,plVar6);
              lVar5 = plVar6[0x1d];
              if (lVar5 != 0) {
                bVar4 = *(byte *)((longlong)plVar6 + 0x15) & 2;
                goto LAB_14098061f;
              }
            }
          }
          else {
LAB_14098061f:
            if ((bVar4 == 0) || ((*(byte *)(lVar5 + 0x9e) & 0x10) == 0)) {
              FUN_140980756(param_1,plVar6,param_6);
            }
          }
        }
        plVar6 = plVar6 + 0x1e;
        lVar7 = lVar7 + -0xf0;
      } while (lVar7 != 0);
    }
    local_70 = 0x3f800000;
    local_78 = 10;
    FUN_1409808da(param_1,&local_68,param_3,0);
  }
  if ((local_60 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140980756 FUN_140980756 body=367 status=ok
// SIG undefined FUN_140980756(void)

void FUN_140980756(longlong param_1,longlong param_2,char param_3)

{
  longlong lVar1;
  float fVar2;
  double dVar3;
  undefined1 auStack_78 [32];
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = *(longlong *)(param_2 + 0xe8);
  if (lVar1 != 0) {
    if ((*(byte *)(param_2 + 0x15) & 4) != 0) {
      if (((9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x68))) ||
          (9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x70)))) ||
         (9.999999747378752e-05 < ABS(*(double *)(param_2 + 0x78)))) {
        dVar3 = (double)*(float *)(param_1 + 0x7c);
        local_30 = *(double *)(param_2 + 0x78) * dVar3 + *(double *)(param_2 + 0x40);
        local_38 = *(double *)(param_2 + 0x70) * dVar3 + *(double *)(param_2 + 0x38);
        local_40 = *(double *)(param_2 + 0x68) * dVar3 + *(double *)(param_2 + 0x30);
        FUN_144a48320(lVar1);
        lVar1 = *(longlong *)(param_2 + 0xe8);
      }
      fVar2 = *(float *)(param_2 + 0x80) + -1.0;
      if (1e-08 < ABS(fVar2)) {
        local_58 = (double)((fVar2 * *(float *)(param_1 + 0x7c) + 1.0) * *(float *)(param_2 + 0x48))
        ;
        local_50 = local_58;
        local_48 = local_58;
        FUN_14084f00a(lVar1);
      }
    }
    *(byte *)(param_2 + 0x15) = *(byte *)(param_2 + 0x15) & 0xf7 | param_3 << 3;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_78);
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409808da FUN_1409808da body=622 status=ok
// SIG undefined FUN_1409808da(void)

void FUN_1409808da(longlong param_1,longlong *param_2,int param_3,longlong param_4,char param_5,
                  float param_6)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  code *pcVar4;
  undefined8 ****ppppuVar5;
  longlong lVar6;
  float fVar7;
  undefined1 auStack_f8 [40];
  longlong local_d0;
  undefined1 local_c8 [40];
  undefined4 local_a0;
  undefined8 ***local_98 [3];
  ushort local_80;
  byte local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  iVar1 = *(int *)(param_1 + 0xa8);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa0);
    lVar6 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar6);
      if ((*(longlong *)(lVar3 + 8) != *param_2) ||
         (((param_4 != 0 && (*(longlong *)(lVar3 + 0x14) != param_4)) ||
          (*(int *)(lVar3 + 0x10) != 0 && *(int *)(lVar3 + 0x10) != param_3)))) goto LAB_140980953;
      if (*param_2 == 0 && param_5 == '\n') {
        if (*(char *)(lVar3 + 0x22) == '\0') goto switchD_1409809e8_caseD_a;
        goto LAB_140980953;
      }
      switch(param_5) {
      case '\0':
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 1;
        break;
      case '\x01':
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) & 0xfe;
        break;
      case '\x02':
        goto switchD_1409809e8_caseD_2;
      case '\x03':
        *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar3 + 0x28);
        break;
      case '\x04':
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 2;
        fVar7 = *(float *)(lVar3 + 0x2c);
        goto LAB_140980b14;
      case '\x05':
        *(undefined4 *)(lVar3 + 0x2c) = *(undefined4 *)(lVar3 + 0x28);
switchD_1409809e8_caseD_2:
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 2;
      case '\a':
switchD_1409809e8_caseD_7:
        *(float *)(lVar3 + 0x28) = param_6;
        break;
      case '\x06':
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 3;
        goto switchD_1409809e8_caseD_7;
      case '\b':
        fVar7 = *(float *)(lVar3 + 0x28) + param_6;
LAB_140980b14:
        *(float *)(lVar3 + 0x28) = fVar7;
        break;
      case '\t':
        *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 4;
        goto switchD_1409809e8_caseD_7;
      case '\n':
switchD_1409809e8_caseD_a:
        if (((*(byte *)(lVar3 + 0x21) & 1) != 0) &&
           ((*(uint *)(lVar3 + 0x24) >> (*(byte *)(param_1 + 0x7a) & 0x1f) & 1) != 0)) {
          local_d0 = *(longlong *)(lVar3 + 0x38) + 0x20;
          local_c8[0] = 0;
          local_a0 = 0;
          FUN_1456bb102(local_c8,*(undefined8 *)(param_1 + 0x40));
          FUN_1448729ea(local_d0,local_98,local_c8);
          fVar7 = (float)FUN_144a7b41a(local_98,0);
          pcVar4 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_78 * 0x120));
          if (pcVar4 != (code *)0x0) {
            ppppuVar5 = local_98;
            if (0x18 < local_80) {
              ppppuVar5 = (undefined8 ****)local_98[0];
            }
            (*pcVar4)(ppppuVar5);
          }
          if (0x18 < local_80) {
            FUN_1400020a8(local_98[0]);
          }
          FUN_144a5ac3a(local_c8);
          *(float *)(lVar3 + 0x28) = fVar7 + *(float *)(lVar3 + 0x28);
        }
      }
      *(byte *)(lVar3 + 0x20) = *(byte *)(lVar3 + 0x20) | 8;
      *(byte *)(param_1 + 0x79) = *(byte *)(param_1 + 0x79) | 2;
LAB_140980953:
      lVar6 = lVar6 + 8;
    } while ((longlong)iVar1 * 8 != lVar6);
  }
  if ((local_70 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140980b4a FUN_140980b4a body=1886 status=ok
// SIG undefined FUN_140980b4a(void)

void FUN_140980b4a(longlong param_1,longlong param_2)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  longlong lVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  uint *puVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  code **ppcVar15;
  uint uVar16;
  longlong lVar17;
  undefined1 auStack_1b8 [32];
  undefined4 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined8 local_180;
  wchar_t *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  code **local_160;
  undefined1 *local_158;
  code *local_150;
  undefined8 local_140;
  undefined4 local_138;
  double local_130;
  double local_128;
  double local_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined8 local_108;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  code *local_d8;
  undefined8 local_d0;
  longlong *local_c8;
  undefined8 uStack_c0;
  undefined2 local_b8;
  ulonglong local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  longlong lStack_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  if (((((*(longlong *)(param_2 + 0xe8) != 0) || (*(int *)(param_2 + 0xd0) == 0)) ||
       (uVar16 = *(uint *)(param_2 + 0xcc), (int)uVar16 < 0)) ||
      ((DAT_14c9647dc <= (int)uVar16 ||
       (plVar12 = (longlong *)
                  ((ulonglong)((uVar16 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar16 >> 0x10) * 8)),
       plVar12 == (longlong *)0x0)))) ||
     (((int)plVar12[2] != *(int *)(param_2 + 0xd0) ||
      (((*(uint *)(plVar12 + 1) & 0x10200000) != 0 ||
       (plVar12 = (longlong *)*plVar12, plVar12 == (longlong *)0x0)))))) goto LAB_140980f55;
  pcVar5 = (code *)FUN_14058439c();
  uVar7 = *(undefined8 *)(param_1 + 0x40);
  FUN_14058b40c(uVar7,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  ppcVar15 = &local_d8;
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_c8 = (longlong *)0x0;
  uStack_c0 = 0;
  local_b8 = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lStack_98 = 0;
  local_d8 = pcVar5;
  local_d0 = uVar7;
  lVar6 = FUN_1402710dd(ppcVar15);
  if (lStack_98 != 0) {
    plVar11 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar11 = local_78;
    }
    (**(code **)(*plVar11 + 0x10))();
  }
  if ((lVar6 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(lVar6);
  }
  *(longlong *)(param_2 + 0xe8) = lVar6;
  cVar4 = (**(code **)(*plVar12 + 0x2a0))(plVar12);
  *(byte *)(param_2 + 0x15) = *(byte *)(param_2 + 0x15) & 0xfd | cVar4 * '\x02';
  (**(code **)(**(longlong **)(param_2 + 0xe8) + 0xaa8))(*(longlong **)(param_2 + 0xe8),0);
  pbVar2 = (byte *)(*(longlong *)(param_2 + 0xe8) + 0x9e);
  *pbVar2 = *pbVar2 | 4;
  pbVar2 = (byte *)(*(longlong *)(param_2 + 0xe8) + 0x9e);
  *pbVar2 = *pbVar2 & 0xf7;
  *(uint *)(*(longlong *)(param_2 + 0xe8) + 0x2e4) =
       *(uint *)(*(longlong *)(param_2 + 0xe8) + 0x2e4) & 0xfffffffb | *(uint *)(param_2 + 0x10) & 4
  ;
  *(uint *)(*(longlong *)(param_2 + 0xe8) + 0x2e4) =
       *(uint *)(*(longlong *)(param_2 + 0xe8) + 0x2e4) & 0xfffffffe | (uint)*(byte *)(param_1 + 8);
  (**(code **)(**(longlong **)(param_2 + 0xe8) + 0xa78))(*(longlong **)(param_2 + 0xe8),plVar12);
  lVar6 = *(longlong *)(param_2 + 0xe8);
  local_e8 = *(undefined8 *)(param_2 + 0x40);
  local_f8 = *(undefined4 *)(param_2 + 0x30);
  uStack_f4 = *(undefined4 *)(param_2 + 0x34);
  uStack_f0 = *(undefined4 *)(param_2 + 0x38);
  uStack_ec = *(undefined4 *)(param_2 + 0x3c);
  uVar13 = *(ulonglong *)(lVar6 + 0x38);
  if (uVar13 < 0xffffffff00000000) {
    plVar12 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar12 = (longlong *)0x0;
    }
    (**(code **)(*plVar12 + 0x58))(local_f8,lVar6,uVar13,5);
  }
  else {
    uVar16 = (uint)uVar13;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar13 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar17 + 8);
        }
        *puVar10 = *puVar10 | 0x20;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  *(undefined8 *)(lVar6 + 0x1a8) = local_e8;
  *(ulonglong *)(lVar6 + 0x198) = CONCAT44(uStack_f4,local_f8);
  *(ulonglong *)(lVar6 + 0x1a0) = CONCAT44(uStack_ec,uStack_f0);
  lVar6 = *(longlong *)(param_2 + 0xe8);
  local_108 = *(undefined8 *)(param_2 + 0x60);
  local_118 = *(undefined4 *)(param_2 + 0x50);
  uStack_114 = *(undefined4 *)(param_2 + 0x54);
  uStack_110 = *(undefined4 *)(param_2 + 0x58);
  uStack_10c = *(undefined4 *)(param_2 + 0x5c);
  uVar13 = *(ulonglong *)(lVar6 + 0x38);
  if (uVar13 < 0xffffffff00000000) {
    plVar12 = DAT_14c9980d0;
    if (DAT_14c9980d8 == 0) {
      plVar12 = (longlong *)0x0;
    }
    (**(code **)(*plVar12 + 0x58))(local_118,lVar6,uVar13,6);
  }
  else {
    uVar16 = (uint)uVar13;
    if ((-1 < (int)uVar16) && ((int)uVar16 < DAT_14c998088)) {
      puVar9 = &DAT_14c998070;
      if (DAT_14c998080 != (undefined *)0x0) {
        puVar9 = DAT_14c998080;
      }
      if ((*(uint *)(puVar9 + ((uint)(uVar13 >> 3) & 0xffffffc)) >> (uVar16 & 0x1f) & 1) != 0) {
        lVar17 = DAT_14c998060 + (ulonglong)(uVar16 & 0x7fffffff) * 0x68;
        puVar10 = *(uint **)(lVar17 + 0x18);
        if (*(uint **)(lVar17 + 0x18) == (uint *)0x0) {
          puVar10 = (uint *)(lVar17 + 8);
        }
        *puVar10 = *puVar10 | 0x40;
        *(byte *)(lVar17 + 0x60) = *(byte *)(lVar17 + 0x60) | 1;
      }
    }
  }
  *(undefined8 *)(lVar6 + 0x1c0) = local_108;
  *(ulonglong *)(lVar6 + 0x1b0) = CONCAT44(uStack_114,local_118);
  *(ulonglong *)(lVar6 + 0x1b8) = CONCAT44(uStack_10c,uStack_110);
  local_130 = (double)*(float *)(param_2 + 0x48);
  local_128 = local_130;
  local_120 = local_130;
  FUN_14084f00a(*(undefined8 *)(param_2 + 0xe8));
  lVar6 = *(longlong *)(param_2 + 0xe8);
  if ((lVar6 != 0 & *(byte *)(param_1 + 8)) == 1) {
    if (DAT_14cb39ca0 == 0) {
      local_d8 = FUN_144a7958c;
      local_150 = FUN_14081d0ea;
      local_158 = &LAB_14638c6c0;
      local_168 = &LAB_14811044c;
      local_170 = &LAB_1407f5cf8;
      local_178 = L"Engine";
      local_180 = 0;
      local_188 = 0x10000004;
      local_190 = 0x10;
      local_198 = 0x8e0;
      local_160 = ppcVar15;
      FUN_14081cfa3(L"/Script/Niagara",L"NiagaraComponent",&DAT_14cb39ca0,FUN_14646d392);
      lVar6 = *(longlong *)(param_2 + 0xe8);
      if (lVar6 == 0) {
        lVar6 = 0;
        goto LAB_140980e00;
      }
    }
    if ((((DAT_14cb39ca0 != 0) && (lVar17 = *(longlong *)(lVar6 + 0x10), lVar17 != 0)) &&
        (*(int *)(DAT_14cb39ca0 + 0x38) <= *(int *)(lVar17 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar17 + 0x30) + (longlong)*(int *)(DAT_14cb39ca0 + 0x38) * 8)
        == DAT_14cb39ca0 + 0x30)) {
      *(byte *)(lVar6 + 0x7cc) = *(byte *)(lVar6 + 0x7cc) & 0xef;
      FUN_140388f74(lVar6);
      lVar6 = *(longlong *)(param_2 + 0xe8);
    }
  }
LAB_140980e00:
  uVar7 = FUN_1447210f0(*(undefined8 *)(param_1 + 0x40));
  FUN_140b506dc(lVar6,uVar7,0);
  if (0 < *(int *)(param_2 + 0xe0)) {
    local_d8 = (code *)((ulonglong)local_d8 & 0xffffffffffffff00);
    local_b0 = local_b0 & 0xffffffff00000000;
    FUN_1456bb102(&local_d8,*(undefined8 *)(param_1 + 0x40));
    local_140 = *(undefined8 *)(param_2 + 0xd8);
    local_138 = *(undefined4 *)(param_2 + 0xe0);
    FUN_140e99737(*(undefined8 *)(param_2 + 0xe8),&local_140,&local_d8);
    lVar6 = DAT_14c9a3da0;
    ppcVar15 = (code **)(longlong)(int)local_b0;
    if (ppcVar15 != (code **)0x0) {
      ppcVar15 = (code **)((longlong)ppcVar15 + -1);
      lVar17 = (longlong)ppcVar15 * 0x10;
      FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar17),
                    *(undefined4 *)(DAT_14c9a3da0 + 8 + lVar17));
      if (*(longlong *)(lVar6 + lVar17) != 0) {
        FUN_1400020a8();
      }
      lVar6 = DAT_14c9a3da0;
      iVar14 = (int)ppcVar15;
      if (DAT_14c9a3dd4 != 0) {
        *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar14;
      }
      *(undefined4 *)(lVar6 + lVar17) = 0xffffffff;
      iVar8 = -1;
      if (0 < DAT_14c9a3dd4) {
        iVar8 = DAT_14c9a3dd0;
      }
      *(int *)(lVar6 + 4 + lVar17) = iVar8;
      DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
      puVar9 = &DAT_14c9a3db0;
      if (DAT_14c9a3dc0 != (undefined *)0x0) {
        puVar9 = DAT_14c9a3dc0;
      }
      iVar8 = iVar14 + 0x1f;
      if (-1 < iVar14) {
        iVar8 = iVar14;
      }
      bVar3 = (byte)ppcVar15 & 0x1f;
      DAT_14c9a3dd0 = iVar14;
      *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) =
           *(uint *)(puVar9 + (longlong)(iVar8 >> 5) * 4) &
           (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
      local_b0 = local_b0 & 0xffffffff00000000;
    }
    if (((char)local_d8 == '\x03') && (local_c8 != (longlong *)0x0)) {
      LOCK();
      piVar1 = (int *)((longlong)local_c8 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_c8 + 0x10))();
      }
    }
  }
  if ((((*(byte *)(param_1 + 0x78) & 2) != 0) &&
      (plVar12 = *(longlong **)(param_2 + 0xe8), plVar12 != (longlong *)0x0)) &&
     (lVar6 = *(longlong *)(param_1 + 0x48), lVar6 != 0)) {
    lVar17 = *(longlong *)(param_2 + 0x24);
    if (*(longlong *)(param_2 + 0x24) == 0) {
      lVar17 = *(longlong *)(param_2 + 0x1c);
    }
    if ((*(byte *)(param_1 + 0x78) & 0x20) == 0) {
      lVar17 = *(longlong *)(param_2 + 0x1c);
    }
    (**(code **)(*plVar12 + 0x490))(plVar12,lVar6,&DAT_14cadad98,lVar17);
    uVar13 = CONCAT71((int7)((ulonglong)lVar6 >> 8),
                      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x2d5)) & 0xffffffffffffff02;
    uVar7 = CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 1);
    FUN_140c0563c(*(undefined8 *)(param_2 + 0xe8),uVar7);
    uVar13 = CONCAT71((int7)((ulonglong)uVar7 >> 8),
                      *(undefined1 *)(*(longlong *)(param_1 + 0x48) + 0x2d5)) & 0xffffffffffffff04;
    FUN_140c056bc(*(undefined8 *)(param_2 + 0xe8),CONCAT71((int7)(uVar13 >> 8),(byte)uVar13 >> 2));
    FUN_140357fa8(*(undefined8 *)(param_2 + 0xe8),
                  *(undefined4 *)(*(longlong *)(param_1 + 0x48) + 0x5c8),0);
    uVar13 = CONCAT71((int7)((ulonglong)ppcVar15 >> 8),1);
    if ((((~*(byte *)(param_1 + 0x78) & 0x48) == 0) &&
        (cVar4 = (**(code **)(**(longlong **)(param_1 + 0x38) + 0x10))(), cVar4 == '\0')) &&
       (((*(byte *)(param_2 + 0x10) & 8) == 0 || ((*(byte *)(param_1 + 0x78) & 0x20) == 0)))) {
      uVar13 = 0;
    }
    FUN_1449e3cec(*(undefined8 *)(param_2 + 0xe8),uVar13 & 0xffffffff,1);
  }
LAB_140980f55:
  if ((local_40 ^ (ulonglong)auStack_1b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140981308 FUN_140981308 body=3725 status=ok
// SIG undefined FUN_140981308(void)

void FUN_140981308(undefined8 param_1,char *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  ushort uVar11;
  ushort *puVar12;
  longlong lVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auStack_1c8 [40];
  float *local_1a0;
  uint local_198;
  float local_194;
  float *local_190;
  uint local_188;
  float local_184;
  float *local_180;
  uint local_178;
  float local_174;
  float *local_170;
  uint local_168;
  float local_164;
  float *local_160;
  uint local_158;
  float local_154;
  float *local_150;
  uint local_148;
  float local_144;
  float *local_140;
  uint local_138;
  float local_134;
  float *local_130;
  uint local_128;
  float local_124;
  float *local_120;
  uint local_118;
  float local_114;
  float *local_110;
  uint local_108;
  float local_104;
  float *local_100;
  uint local_f8;
  float local_f4;
  float *local_f0;
  uint local_e8;
  float local_e4;
  float *local_e0;
  uint local_d8;
  float local_d4;
  float *local_d0;
  uint local_c8;
  float local_c4;
  float *local_c0;
  uint local_b8;
  float local_b4;
  undefined1 local_b0 [8];
  longlong local_a8;
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_1c8;
  FUN_140982196(local_b0);
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_d8 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_e0 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_e0 = &local_d4;
      local_d8 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_d8 = 1;
      local_e0 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                           *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_c8 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_d0 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_d0 = &local_c4;
      local_c8 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_c8 = 1;
      local_d0 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                           *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_b8 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_c0 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_c0 = &local_b4;
      local_b8 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_b8 = 1;
      local_c0 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                           *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_108 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_110 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_110 = &local_104;
      local_108 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_108 = 1;
      local_110 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_f8 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_100 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_100 = &local_f4;
      local_f8 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_f8 = 1;
      local_100 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_e8 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_f0 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                        *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_f0 = &local_e4;
      local_e8 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_e8 = 1;
      local_f0 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                           *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_138 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_140 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_140 = &local_134;
      local_138 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_138 = 1;
      local_140 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_128 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_130 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_130 = &local_124;
      local_128 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_128 = 1;
      local_130 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_118 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_120 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_120 = &local_114;
      local_118 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_118 = 1;
      local_120 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_168 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_170 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_170 = &local_164;
      local_168 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_168 = 1;
      local_170 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_158 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_160 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_160 = &local_154;
      local_158 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_158 = 1;
      local_160 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_148 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_150 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_150 = &local_144;
      local_148 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_148 = 1;
      local_150 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_198 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_1a0 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_1a0 = &local_194;
      local_198 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_198 = 1;
      local_1a0 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_188 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_190 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_190 = &local_184;
      local_188 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_188 = 1;
      local_190 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  if (*param_2 == '\x01') {
    iVar15 = *(int *)(param_2 + 0x30);
    bVar10 = *(byte *)(*(longlong *)(param_2 + 0x28) + (longlong)iVar15);
    local_178 = (uint)bVar10;
    *(int *)(param_2 + 0x30) = iVar15 + 1;
    local_180 = (float *)((longlong)*(int *)(param_2 + 0x44) * (ulonglong)bVar10 * 4 +
                         *(longlong *)(*(longlong *)(param_2 + 0x20) + (longlong)iVar15 * 8));
  }
  else {
    puVar12 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar11 = *puVar12;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar12 + 1;
    uVar14 = uVar11 & 0x7fff;
    if (uVar14 == 0x7fff) {
      local_180 = &local_174;
      local_178 = 0;
    }
    else {
      lVar13 = *(longlong *)(param_2 + 0x80);
      local_178 = 1;
      local_180 = (float *)((ulonglong)(uVar14 * *(int *)(lVar13 + 0x80)) +
                            *(longlong *)(lVar13 + 0x70) + (longlong)*(int *)(lVar13 + 0x4c) * 4);
    }
  }
  piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
  if (*param_2 != '\0') {
    piVar16 = (int *)(param_2 + 0x3c);
  }
  if (0 < *piVar16) {
    fVar4 = *(float *)(local_a8 + 0x274);
    fVar5 = *(float *)(local_a8 + 0x278);
    fVar6 = *(float *)(local_a8 + 0x27c);
    fVar7 = *(float *)(local_a8 + 0x280);
    fVar8 = *(float *)(local_a8 + 0x284);
    fVar9 = *(float *)(local_a8 + 0x288);
    fVar18 = fVar9 * 0.5;
    fVar19 = fVar8 * 0.5;
    fVar17 = fVar7 * 0.5;
    iVar15 = 0;
    do {
      *local_e0 = fVar4;
      *local_d0 = fVar5;
      *local_c0 = fVar6;
      local_e0 = local_e0 + (int)local_d8;
      local_d0 = local_d0 + (int)local_c8;
      local_c0 = local_c0 + (int)local_b8;
      *local_110 = fVar4 - fVar17;
      *local_100 = fVar5 - fVar19;
      *local_f0 = fVar6 - fVar18;
      local_110 = local_110 + (int)local_108;
      local_100 = local_100 + (int)local_f8;
      local_f0 = local_f0 + (int)local_e8;
      *local_140 = fVar4 + fVar17;
      *local_130 = fVar5 + fVar19;
      *local_120 = fVar6 + fVar18;
      local_140 = local_140 + (int)local_138;
      local_130 = local_130 + (int)local_128;
      local_120 = local_120 + (int)local_118;
      *local_170 = fVar7;
      *local_160 = fVar8;
      *local_150 = fVar9;
      pfVar1 = local_1a0 + (int)local_198;
      local_170 = local_170 + (int)local_168;
      local_160 = local_160 + (int)local_158;
      local_150 = local_150 + (int)local_148;
      *local_1a0 = fVar17;
      pfVar2 = local_190 + (int)local_188;
      *local_190 = fVar19;
      pfVar3 = local_180 + (int)local_178;
      *local_180 = fVar18;
      iVar15 = iVar15 + 1;
      piVar16 = (int *)(*(longlong *)(param_2 + 0x80) + 0x40);
      if (*param_2 != '\0') {
        piVar16 = (int *)(param_2 + 0x3c);
      }
      local_1a0 = pfVar1;
      local_190 = pfVar2;
      local_180 = pfVar3;
    } while (iVar15 < *piVar16);
  }
  if ((local_a0 ^ (ulonglong)auStack_1c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140982196 FUN_140982196 body=148 status=ok
// SIG undefined FUN_140982196(void)

void FUN_140982196(int *param_1,char *param_2)

{
  ushort uVar1;
  ushort *puVar2;
  int *piVar3;
  uint uVar4;
  longlong *plVar5;
  longlong lVar6;
  int iVar7;
  
  if (*param_2 == '\x01') {
    iVar7 = *(int *)(param_2 + 0x30);
    *(int *)(param_2 + 0x30) = iVar7 + 1;
    iVar7 = **(int **)(*(longlong *)(param_2 + 0x20) + (longlong)iVar7 * 8);
    *param_1 = iVar7;
    plVar5 = (longlong *)(param_2 + 0x48);
  }
  else {
    puVar2 = *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10);
    uVar1 = *puVar2;
    *(ushort **)(*(longlong *)(param_2 + 0x80) + 0x10) = puVar2 + 1;
    uVar4 = uVar1 & 0x7fff;
    piVar3 = *(int **)(*(longlong *)(param_2 + 0x80) + 0x20);
    iVar7 = *piVar3;
    lVar6 = 0;
    if (iVar7 <= (int)uVar4) {
      do {
        uVar4 = uVar4 - iVar7;
        iVar7 = piVar3[lVar6 + 1];
        lVar6 = lVar6 + 1;
      } while (iVar7 <= (int)uVar4);
    }
    iVar7 = *(int *)(*(longlong *)(*(longlong *)(*(longlong *)(param_2 + 0x80) + 0x18) + lVar6 * 8)
                    + (longlong)(int)uVar4);
    *param_1 = iVar7;
    plVar5 = (longlong *)(*(longlong *)(param_2 + 0x80) + 0x38);
  }
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(*plVar5 + (longlong)iVar7 * 8);
  return;
}



// FUNCTION 14098222a FUN_14098222a body=236 status=ok
// SIG undefined FUN_14098222a(void)

void FUN_14098222a(longlong param_1,longlong param_2)

{
  uint uVar1;
  undefined1 auStack_58 [32];
  undefined1 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140982318();
  uVar1 = *(uint *)(param_2 + 0x40);
  if ((int)uVar1 < 0x154) {
    *(undefined4 *)(param_1 + 0x40c) = *(undefined4 *)(param_1 + 0x408);
    uVar1 = *(uint *)(param_2 + 0x40);
    if ((int)uVar1 < 0x154) {
      *(uint *)(param_1 + 0x428) =
           *(uint *)(param_1 + 0x428) & 0xfffffffe | *(uint *)(param_1 + 0x334) & 1;
      goto LAB_14098225b;
    }
  }
  if (((uVar1 < 0x203) && (0.0001 < *(float *)(param_1 + 0x438))) &&
     (*(longlong *)(param_1 + 0x360) == 0)) {
    local_30 = 0xc056800000000000;
    local_28 = 0;
    uStack_20 = 0;
    local_38 = 0;
    FUN_147a036b8(param_1,&local_30,0,0);
  }
LAB_14098225b:
  if (((*(byte *)(param_2 + 0x28) & 1) != 0) && ((*(byte *)(param_1 + 0x428) & 1) == 0)) {
    *(undefined1 *)(param_1 + 0x400) = 0;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140982318 FUN_140982318 body=275 status=ok
// SIG undefined FUN_140982318(void)

void FUN_140982318(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_14098242c();
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cb60);
  if ((0x179 < (int)param_2[8]) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cb60);
    if (iVar1 < 9) {
      local_38 = (undefined4 *)FUN_14001cc68(0xb0,0x10);
      *local_38 = 0xffffffff;
      puVar3 = &DAT_14c846400;
      puVar4 = (undefined8 *)(local_38 + 4);
      for (lVar2 = 0x10; lVar2 != 0; lVar2 = lVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar4 = puVar4 + 1;
      }
      *(undefined8 *)(local_38 + 0x24) = 0;
      *(undefined8 *)(local_38 + 0x26) = 0;
      *(undefined8 *)(local_38 + 0x28) = 0;
      FUN_147ba53a7(param_2);
      *local_38 = *(undefined4 *)(param_1 + 0x300);
      local_48 = *(undefined4 *)(param_1 + 0x2a8);
      uStack_44 = *(undefined4 *)(param_1 + 0x2ac);
      uStack_40 = *(undefined4 *)(param_1 + 0x2b0);
      uStack_3c = *(undefined4 *)(param_1 + 0x2b4);
      FUN_1479f785c(param_1);
    }
  }
  if ((*(float *)(param_1 + 0x308) == 1.0) && (!NAN(*(float *)(param_1 + 0x308)))) {
    *(undefined8 *)(param_1 + 0x308) = 0;
  }
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098242c FUN_14098242c body=186 status=ok
// SIG undefined FUN_14098242c(void)

void FUN_14098242c(longlong param_1,longlong *param_2)

{
  int iVar1;
  
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cbb8);
  FUN_14010df0a(param_1,param_2);
  iVar1 = FUN_1448332aa(param_2,&DAT_149e3cbb8);
  if (iVar1 < 0x96) {
    *(undefined8 *)(param_1 + 0x2a8) = *(undefined8 *)(param_1 + 0x2b8);
    *(undefined8 *)(param_1 + 0x2b0) = *(undefined8 *)(param_1 + 0x2c0);
    *(undefined8 *)(param_1 + 0x2b8) = 0;
    *(undefined8 *)(param_1 + 0x2c0) = 0;
  }
  if ((int)param_2[8] < 0x154) {
    *(undefined4 *)(param_1 + 0x2cc) = *(undefined4 *)(param_1 + 0x2c8);
  }
  (**(code **)(*param_2 + 0x218))(param_2,&DAT_149e3cc78);
  if ((*(byte *)(param_2 + 5) & 1) != 0) {
    iVar1 = FUN_1448332aa(param_2,&DAT_149e3cc78);
    if (iVar1 < 0x35) {
      *(byte *)(param_1 + 0x2d8) = *(byte *)(param_1 + 0x2d5) & 1;
    }
  }
  return;
}



// FUNCTION 1409824e6 FUN_1409824e6 body=500 status=ok
// SIG undefined FUN_1409824e6(void)

void FUN_1409824e6(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 *local_58;
  undefined2 *local_50;
  int local_48;
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = *(longlong **)(*param_2 + 8);
  if ((*(longlong *)(param_1 + 0x78) != 0) &&
     (cVar3 = (**(code **)(*plVar1 + 0x78))(plVar1), cVar3 != '\0')) {
    uVar5 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x220))
                      (*(longlong **)(param_1 + 0x70),param_3);
    (**(code **)(**(longlong **)(param_1 + 0x78) + 0x2c0))
              (*(longlong **)(param_1 + 0x78),plVar1,uVar5);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  if ((*(byte *)(plVar1 + 5) & 1) != 0) {
    local_50 = (undefined2 *)0x0;
    local_58 = &local_38;
    local_38 = 0;
    FUN_1404da962(param_2,plVar1,*(undefined8 *)(param_1 + 0x78));
    (**(code **)(**(longlong **)(param_1 + 0x70) + 0x1f8))
              (*(longlong **)(param_1 + 0x70),param_3,local_38);
    goto LAB_14098256c;
  }
  if ((*(byte *)(plVar1 + 5) & 4) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_78);
  }
  local_38 = 0;
  if (*(longlong *)(param_1 + 0x78) != 0) {
    lVar4 = (**(code **)(**(longlong **)(param_1 + 0x70) + 0x220))
                      (*(longlong **)(param_1 + 0x70),param_3);
    lVar6 = *(longlong *)(param_1 + 0x78);
    if ((*(byte *)(lVar6 + 0x51) & 1) == 0) {
      if (0 < (longlong)*(int *)(lVar6 + 0x48)) {
        lVar2 = *(longlong *)(lVar6 + 0x40);
        lVar6 = (longlong)*(int *)(lVar6 + 0x48) * 0x10;
        lVar8 = 0;
        do {
          if (*(longlong *)(lVar2 + 8 + lVar8) == lVar4) {
            local_38 = 0;
            lVar8 = 0;
            goto LAB_140982625;
          }
          lVar8 = lVar8 + 0x10;
        } while (lVar6 != lVar8);
      }
    }
    else if (lVar4 != 0) {
      FUN_140c12002(lVar6,&local_50,lVar4);
      puVar7 = local_50;
      if (local_48 == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      FUN_1446f470e(&local_40,puVar7,1);
      local_38 = local_40;
      if (local_50 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  goto LAB_140982640;
  while (lVar8 = lVar8 + 0x10, lVar6 != lVar8) {
LAB_140982625:
    if (*(longlong *)(lVar2 + 8 + lVar8) == lVar4) {
      local_38 = *(undefined8 *)(lVar2 + lVar8);
      break;
    }
  }
LAB_140982640:
  (**(code **)(**(longlong **)(*param_2 + 8) + 0x160))(*(longlong **)(*param_2 + 8),&local_38);
LAB_14098256c:
  if ((local_30 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140982716 FUN_140982716 body=2237 status=ok
// SIG undefined FUN_140982716(void)

void FUN_140982716(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  longlong lVar14;
  longlong *plVar15;
  uint *puVar16;
  byte bVar17;
  uint uVar18;
  uint *puVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  int iVar22;
  int iVar23;
  uint uVar24;
  ulonglong uVar25;
  int iVar26;
  longlong lVar27;
  uint uVar28;
  ulonglong uVar29;
  undefined8 *puVar30;
  ulonglong uVar31;
  uint local_84;
  
  iVar4 = *(int *)(param_1 + 0x48);
  if (iVar4 == 0) {
    uVar25 = 1;
    uVar29 = 0;
    iVar9 = 0;
    iVar22 = 0;
  }
  else {
    puVar13 = *(uint **)(param_1 + 0x40);
    if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
      puVar13 = (uint *)(param_1 + 0x30);
    }
    uVar18 = *puVar13;
    if (uVar18 == 0) {
      iVar9 = iVar4 + 0x1e;
      if (-1 < iVar4 + -1) {
        iVar9 = iVar4 + -1;
      }
      uVar29 = 0;
      uVar25 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar25 = uVar29;
      }
      iVar22 = 0;
      do {
        if (uVar25 == uVar29) {
          return;
        }
        iVar22 = iVar22 + 0x20;
        uVar18 = puVar13[uVar29 + 1];
        uVar29 = uVar29 + 1;
      } while (uVar18 == 0);
    }
    else {
      uVar29 = 0;
      iVar22 = 0;
    }
    uVar25 = (ulonglong)(-uVar18 & uVar18);
    uVar20 = uVar25 * 2 + 1;
    lVar14 = 0x3f;
    if (uVar20 != 0) {
      for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    iVar9 = (iVar22 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
    if (iVar4 <= iVar9) {
      iVar9 = iVar4;
    }
  }
  if (iVar9 != iVar4) {
    puVar13 = (uint *)(param_2 + 2);
    plVar1 = param_2 + 7;
    plVar2 = param_2 + 8;
    local_84 = 0xffffffff;
    do {
      puVar30 = (undefined8 *)((longlong)iVar9 * 0x28 + *(longlong *)(param_1 + 0x20));
      if (*(int *)((longlong)param_2 + 0x34) == 0) {
        iVar9 = (int)param_2[1];
        *(int *)(param_2 + 1) = iVar9 + 1;
        if (*(int *)((longlong)param_2 + 0xc) == iVar9) {
          FUN_140549c28(param_2,iVar9);
        }
        iVar11 = (int)param_2[5];
        if (iVar11 == 0) {
          iVar10 = -1;
        }
        else {
          iVar10 = iVar11 + 0x1e;
          if (-1 < iVar11 + -1) {
            iVar10 = iVar11 + -1;
          }
          iVar10 = iVar10 >> 5;
        }
        iVar26 = iVar11 + 1;
        iVar23 = iVar11 + 0x1f;
        if (-1 < iVar11) {
          iVar23 = iVar11;
        }
        if (iVar23 >> 5 == iVar10) {
          *(int *)(param_2 + 5) = iVar26;
        }
        else {
          if (*(int *)((longlong)param_2 + 0x2c) <= iVar11) {
            if (iVar11 + 0x20U < 0xa0) {
              iVar26 = 0x80;
              iVar10 = iVar11;
            }
            else {
              uVar18 = iVar11 + 0x20U >> 5;
              if (*(int *)((longlong)param_2 + 0x2c) + 0x1fU < 0xa0) {
                uVar24 = 4;
                if (4 < uVar18) {
                  uVar24 = uVar18;
                }
              }
              else {
                uVar24 = (uVar18 * 3 >> 3) + uVar18 + 0x10;
              }
              uVar20 = FUN_144a3809e(uVar24 << 2,0);
              iVar10 = (int)(uVar20 >> 2);
              iVar26 = iVar10 << 5;
              if (iVar10 < (int)uVar18) {
                iVar26 = -0x20;
              }
              iVar10 = (int)param_2[5];
            }
            *(int *)((longlong)param_2 + 0x2c) = iVar26;
            FUN_1446efbd8(puVar13,iVar10);
            iVar26 = (int)param_2[5] + 1;
          }
          iVar10 = iVar26 + 0x1f;
          if (-1 < iVar26) {
            iVar10 = iVar26;
          }
          *(int *)(param_2 + 5) = iVar26;
          if (iVar26 % 0x20 != 0) {
            puVar19 = (uint *)param_2[4];
            if ((uint *)param_2[4] == (uint *)0x0) {
              puVar19 = puVar13;
            }
            bVar17 = -(char)(iVar26 % 0x20);
            puVar19[iVar10 >> 5] = (puVar19[iVar10 >> 5] << (bVar17 & 0x1f)) >> (bVar17 & 0x1f);
          }
        }
        lVar14 = (longlong)iVar9;
        puVar19 = (uint *)param_2[4];
        if ((uint *)param_2[4] == (uint *)0x0) {
          puVar19 = puVar13;
        }
        bVar17 = (byte)iVar11 & 0x1f;
        puVar19[iVar23 >> 5] = puVar19[iVar23 >> 5] & (-2 << bVar17 | 0xfffffffeU >> 0x20 - bVar17);
      }
      else {
        iVar9 = (int)param_2[6];
        lVar14 = (longlong)iVar9;
        iVar11 = *(int *)(*param_2 + 4 + lVar14 * 0x28);
        *(int *)(param_2 + 6) = iVar11;
        iVar10 = *(int *)((longlong)param_2 + 0x34) + -1;
        *(int *)((longlong)param_2 + 0x34) = iVar10;
        if (iVar10 != 0) {
          *(undefined4 *)(*param_2 + (longlong)iVar11 * 0x28) = 0xffffffff;
        }
      }
      puVar19 = (uint *)param_2[4];
      if ((uint *)param_2[4] == (uint *)0x0) {
        puVar19 = puVar13;
      }
      iVar11 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar11 = iVar9;
      }
      puVar19[iVar11 >> 5] = puVar19[iVar11 >> 5] | 1 << ((byte)iVar9 & 0x1f);
      lVar27 = *param_2;
      *(undefined4 *)(lVar27 + 8 + lVar14 * 0x28) = *(undefined4 *)(puVar30 + 1);
      *(undefined8 *)(lVar27 + lVar14 * 0x28) = *puVar30;
      *(undefined8 *)(lVar27 + 0x10 + lVar14 * 0x28) = puVar30[2];
      lVar5 = puVar30[3];
      *(longlong *)(lVar27 + 0x18 + lVar14 * 0x28) = lVar5;
      if (lVar5 != 0) {
        LOCK();
        *(int *)(lVar5 + 0xc) = *(int *)(lVar5 + 0xc) + 1;
        UNLOCK();
      }
      puVar19 = (uint *)(lVar27 + lVar14 * 0x28);
      puVar19[8] = 0xffffffff;
      uVar18 = *puVar19;
      uVar24 = puVar19[2];
      if (uVar24 != 0) {
        uVar18 = uVar24 >> 0xd ^ uVar18 - uVar24;
        uVar12 = uVar18 << 8 ^ (-0x61c88647 - uVar24) - uVar18;
        uVar28 = uVar12 >> 0xd ^ (uVar24 - uVar18) - uVar12;
        uVar18 = uVar28 >> 0xc ^ (uVar18 - uVar12) - uVar28;
        uVar24 = uVar18 << 0x10 ^ (uVar12 - uVar28) - uVar18;
        uVar12 = uVar24 >> 5 ^ (uVar28 - uVar18) - uVar24;
        uVar18 = uVar12 >> 3 ^ (uVar18 - uVar24) - uVar12;
        uVar24 = uVar18 << 10 ^ (uVar24 - uVar12) - uVar18;
        uVar18 = uVar24 >> 0xf ^ uVar12 - (uVar18 + uVar24);
      }
      uVar24 = 1;
      if ((int)param_2[1] - *(int *)((longlong)param_2 + 0x34) == 1) {
        uVar12 = 1;
LAB_140982939:
        if (((int)uVar12 < 1) || ((int)uVar24 <= (int)param_2[9])) {
          uVar18 = (int)param_2[9] - 1U & uVar18;
          puVar19[9] = uVar18;
          plVar15 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          puVar19[8] = *(uint *)((longlong)plVar15 +
                                ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar18) * 4);
          plVar15 = (longlong *)param_2[8];
          if ((longlong *)param_2[8] == (longlong *)0x0) {
            plVar15 = plVar1;
          }
          *(int *)((longlong)plVar15 + ((longlong)(int)param_2[9] - 1U & (longlong)(int)uVar18) * 4)
               = iVar9;
        }
        else {
          *(uint *)(param_2 + 9) = uVar24;
          if (param_2[8] != 0) {
            FUN_1446efa72(plVar2,0,0);
            uVar24 = *(uint *)(param_2 + 9);
          }
          if (uVar24 == 1) {
            if (*plVar2 != 0) {
              FUN_1446efa72(plVar2,0,0);
            }
LAB_140982b91:
            uVar18 = 0;
            do {
              plVar15 = (longlong *)param_2[8];
              if ((longlong *)param_2[8] == (longlong *)0x0) {
                plVar15 = plVar1;
              }
              *(undefined4 *)
               ((longlong)plVar15 + (ulonglong)((int)param_2[9] + 0x7fffffffU & uVar18) * 4) =
                   0xffffffff;
              uVar18 = uVar18 + 1;
            } while (uVar24 != uVar18);
          }
          else {
            if (uVar24 == 0) goto LAB_14098298e;
            FUN_1446efa72(plVar2,0,uVar24);
            if (0 < (int)uVar24) goto LAB_140982b91;
          }
          iVar9 = (int)param_2[5];
          if (iVar9 == 0) {
            uVar20 = 0;
            uVar21 = 1;
            iVar11 = 0;
            iVar10 = 0;
          }
          else {
            puVar19 = (uint *)param_2[4];
            if ((uint *)param_2[4] == (uint *)0x0) {
              puVar19 = puVar13;
            }
            uVar18 = *puVar19;
            if (uVar18 == 0) {
              iVar11 = iVar9 + 0x1e;
              if (-1 < iVar9 + -1) {
                iVar11 = iVar9 + -1;
              }
              uVar20 = 0;
              uVar21 = (ulonglong)(uint)(iVar11 >> 5);
              if (iVar11 >> 5 < 1) {
                uVar21 = uVar20;
              }
              iVar10 = 0;
              do {
                if (uVar21 == uVar20) goto LAB_14098298e;
                iVar10 = iVar10 + 0x20;
                uVar18 = puVar19[uVar20 + 1];
                uVar20 = uVar20 + 1;
              } while (uVar18 == 0);
            }
            else {
              uVar20 = 0;
              iVar10 = 0;
            }
            uVar21 = (ulonglong)(-uVar18 & uVar18);
            uVar31 = uVar21 * 2 + 1;
            lVar14 = 0x3f;
            if (uVar31 != 0) {
              for (; uVar31 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            iVar11 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            if (iVar9 <= iVar11) {
              iVar11 = iVar9;
            }
          }
          if (iVar11 < iVar9) {
            uVar18 = 0xffffffff;
            do {
              lVar14 = *param_2;
              lVar27 = (longlong)iVar11;
              uVar24 = *(uint *)(lVar14 + lVar27 * 0x28);
              uVar12 = *(uint *)(lVar14 + 8 + lVar27 * 0x28);
              if (uVar12 != 0) {
                uVar28 = uVar12 >> 0xd ^ uVar24 - uVar12;
                uVar24 = uVar28 << 8 ^ (-0x61c88647 - uVar12) - uVar28;
                uVar12 = uVar24 >> 0xd ^ (uVar12 - uVar28) - uVar24;
                uVar28 = uVar12 >> 0xc ^ (uVar28 - uVar24) - uVar12;
                uVar24 = uVar28 << 0x10 ^ (uVar24 - uVar12) - uVar28;
                uVar12 = uVar24 >> 5 ^ (uVar12 - uVar28) - uVar24;
                uVar28 = uVar12 >> 3 ^ (uVar28 - uVar24) - uVar12;
                uVar24 = uVar28 << 10 ^ (uVar24 - uVar12) - uVar28;
                uVar24 = uVar24 >> 0xf ^ uVar12 - (uVar28 + uVar24);
              }
              lVar14 = lVar14 + lVar27 * 0x28;
              uVar31 = (longlong)(int)uVar24 & (longlong)(int)param_2[9] - 1U;
              iVar9 = (int)uVar31;
              *(int *)(lVar14 + 0x24) = iVar9;
              plVar15 = (longlong *)param_2[8];
              if ((longlong *)param_2[8] == (longlong *)0x0) {
                plVar15 = plVar1;
              }
              *(undefined4 *)(lVar14 + 0x20) =
                   *(undefined4 *)
                    ((longlong)plVar15 + ((longlong)(int)param_2[9] - 1U & uVar31) * 4);
              plVar15 = (longlong *)param_2[8];
              if ((longlong *)param_2[8] == (longlong *)0x0) {
                plVar15 = plVar1;
              }
              *(int *)((longlong)plVar15 + ((longlong)iVar9 & (longlong)(int)param_2[9] - 1U) * 4) =
                   iVar11;
              uVar18 = uVar18 & ~(uint)uVar21;
              puVar19 = (uint *)param_2[4];
              if ((uint *)param_2[4] == (uint *)0x0) {
                puVar19 = puVar13;
              }
              iVar9 = (int)param_2[5];
              iVar11 = (int)uVar20;
              lVar14 = (longlong)iVar11;
              uVar24 = puVar19[lVar14] & uVar18;
              if (uVar24 == 0) {
                iVar26 = iVar9 + 0x1e;
                if (-1 < iVar9 + -1) {
                  iVar26 = iVar9 + -1;
                }
                iVar26 = iVar26 >> 5;
                iVar23 = iVar26;
                if (iVar26 < iVar11) {
                  iVar23 = iVar11;
                }
                if (iVar26 <= iVar11) break;
                lVar27 = 0;
                while( true ) {
                  iVar10 = iVar10 + 0x20;
                  uVar24 = puVar19[lVar14 + lVar27 + 1];
                  if (uVar24 != 0) break;
                  lVar27 = lVar27 + 1;
                  if (iVar23 - lVar14 == lVar27) goto LAB_14098298e;
                }
                uVar20 = (ulonglong)(iVar11 + (int)lVar27 + 1);
                uVar18 = 0xffffffff;
              }
              uVar21 = (ulonglong)(-uVar24 & uVar24);
              uVar31 = uVar21 * 2 + 1;
              lVar14 = 0x3f;
              if (uVar31 != 0) {
                for (; uVar31 >> lVar14 == 0; lVar14 = lVar14 + -1) {
                }
              }
              iVar11 = (iVar10 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
            } while (iVar11 < iVar9);
          }
        }
      }
      else {
        iVar11 = FUN_140982fd4(param_2,uVar18,puVar19);
        if (iVar11 == -1) {
          uVar12 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
          if (3 < uVar12) {
            uVar20 = (ulonglong)(uVar12 & 0xfffffffe) + 0xf;
            lVar14 = 0x3f;
            if (uVar20 != 0) {
              for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
              }
            }
            uVar24 = 1 << ((byte)lVar14 & 0x1f);
          }
          goto LAB_140982939;
        }
        lVar14 = *param_2;
        plVar15 = *(longlong **)(lVar14 + 0x18 + (longlong)iVar11 * 0x28);
        if (plVar15 != (longlong *)0x0) {
          LOCK();
          piVar3 = (int *)((longlong)plVar15 + 0xc);
          *piVar3 = *piVar3 + -1;
          UNLOCK();
          if (*piVar3 == 0) {
            (**(code **)(*plVar15 + 0x10))();
          }
        }
        puVar16 = (uint *)((longlong)iVar11 * 0x28 + lVar14);
        uVar18 = *puVar19;
        uVar24 = puVar19[1];
        uVar12 = puVar19[2];
        uVar28 = puVar19[3];
        uVar6 = puVar19[5];
        uVar7 = puVar19[6];
        uVar8 = puVar19[7];
        puVar16[4] = puVar19[4];
        puVar16[5] = uVar6;
        puVar16[6] = uVar7;
        puVar16[7] = uVar8;
        *puVar16 = uVar18;
        puVar16[1] = uVar24;
        puVar16[2] = uVar12;
        puVar16[3] = uVar28;
        FUN_148857066(param_2,iVar9);
      }
LAB_14098298e:
      local_84 = local_84 & ~(uint)uVar25;
      puVar19 = *(uint **)(param_1 + 0x40);
      if (*(uint **)(param_1 + 0x40) == (uint *)0x0) {
        puVar19 = (uint *)(param_1 + 0x30);
      }
      iVar11 = *(int *)(param_1 + 0x48);
      iVar9 = (int)uVar29;
      lVar14 = (longlong)iVar9;
      uVar18 = puVar19[lVar14] & local_84;
      if (uVar18 == 0) {
        iVar10 = iVar11 + 0x1e;
        if (-1 < iVar11 + -1) {
          iVar10 = iVar11 + -1;
        }
        iVar10 = iVar10 >> 5;
        iVar22 = iVar22 + 0x20;
        iVar26 = iVar10;
        if (iVar10 < iVar9) {
          iVar26 = iVar9;
        }
        if (iVar9 < iVar10) {
          lVar27 = 0;
          do {
            uVar18 = puVar19[lVar14 + lVar27 + 1];
            if (uVar18 != 0) {
              uVar29 = (ulonglong)(iVar9 + (int)lVar27 + 1);
              local_84 = 0xffffffff;
              goto LAB_140982a18;
            }
            iVar22 = iVar22 + 0x20;
            lVar27 = lVar27 + 1;
          } while (iVar26 - lVar14 != lVar27);
          local_84 = 0xffffffff;
          iVar9 = iVar26;
        }
        uVar29 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar11;
      }
      else {
LAB_140982a18:
        uVar25 = (ulonglong)(-uVar18 & uVar18);
        uVar20 = uVar25 * 2 + 1;
        lVar14 = 0x3f;
        if (uVar20 != 0) {
          for (; uVar20 >> lVar14 == 0; lVar14 = lVar14 + -1) {
          }
        }
        iVar9 = (iVar22 - ((uint)lVar14 ^ 0x3f)) + 0x3e;
        if (iVar11 <= iVar9) {
          iVar9 = iVar11;
        }
      }
    } while (iVar9 != iVar4);
  }
  return;
}



// FUNCTION 140982fd4 FUN_140982fd4 body=95 status=ok
// SIG undefined FUN_140982fd4(void)

int FUN_140982fd4(longlong *param_1,uint param_2,int *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar2 = *param_1;
      do {
        lVar4 = (longlong)iVar1;
        if ((*(int *)(lVar2 + lVar4 * 0x28) == *param_3) &&
           (*(int *)(lVar2 + lVar4 * 0x28 + 8) == param_3[2])) {
          return iVar1;
        }
        iVar1 = *(int *)(lVar2 + 0x20 + lVar4 * 0x28);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 140983034 FUN_140983034 body=93 status=ok
// SIG undefined FUN_140983034(void)

void FUN_140983034(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    iVar5 = (int)plVar3[1];
    while (iVar5 != 0) {
      LOCK();
      iVar4 = (int)plVar3[1];
      bVar6 = iVar5 == iVar4;
      if (bVar6) {
        *(int *)(plVar3 + 1) = iVar5 + 1;
        iVar4 = iVar5;
      }
      iVar5 = iVar4;
      UNLOCK();
      if (bVar6) {
        (**(code **)(param_1 + 0x28))(*(undefined8 *)(param_1 + 0x18));
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
                    /* WARNING: Could not recover jumptable at 0x00014098308d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140983070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 140983092 FUN_140983092 body=2084 status=ok
// SIG undefined FUN_140983092(void)

void FUN_140983092(undefined8 *param_1)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong *plVar11;
  undefined8 *puVar12;
  longlong *plVar13;
  longlong lVar14;
  bool bVar15;
  bool bVar16;
  undefined1 auStack_148 [32];
  undefined2 *local_128;
  longlong *local_120;
  longlong local_118;
  undefined8 *local_110;
  int local_108;
  undefined2 local_100 [2];
  undefined4 local_fc;
  uint local_f8 [5];
  undefined8 uStack_e4;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int iStack_d0;
  undefined4 local_c8;
  undefined8 local_c0;
  ulonglong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  uint local_64;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_148;
  FUN_140983a12();
  if (0 < (longlong)*(int *)(param_1 + 0x3b)) {
    plVar11 = param_1 + 10;
    if (((((*(int *)(param_1 + 5) == 0) ||
          (uVar3 = *(uint *)((longlong)param_1 + 0x24), (int)uVar3 < 0)) ||
         (DAT_14c9647dc <= (int)uVar3)) ||
        ((plVar13 = (longlong *)
                    ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
         plVar13 == (longlong *)0x0 || ((int)plVar13[2] != *(int *)(param_1 + 5))))) ||
       (((*(uint *)(plVar13 + 1) & 0x10200000) != 0 || ((longlong *)*plVar13 == (longlong *)0x0))))
    {
      if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[0x3a];
      }
      local_120 = plVar11 + (longlong)*(int *)(param_1 + 0x3b) * 0xc;
      lVar9 = 0;
    }
    else {
      lVar9 = (**(code **)(*(longlong *)*plVar13 + 0x2b0))();
      if ((longlong *)param_1[0x3a] != (longlong *)0x0) {
        plVar11 = (longlong *)param_1[0x3a];
      }
      if ((longlong)*(int *)(param_1 + 0x3b) == 0) goto LAB_14098373c;
      local_120 = plVar11 + (longlong)*(int *)(param_1 + 0x3b) * 0xc;
    }
    local_118 = lVar9;
    do {
      cVar7 = FUN_140114204(plVar11 + 2);
      if ((cVar7 != '\0') && (plVar11[0xb] == 0)) {
        local_f8[0] = local_f8[0] & 0xffffff00;
        local_f8[1] = 0;
        local_f8[2] = 0;
        local_f8[3] = 0;
        local_f8[4] = local_f8[4] & 0xffffff00;
        uStack_d4 = 0;
        iStack_d0 = 0;
        uStack_e4 = 0;
        uStack_dc = 0;
        uStack_d8 = 0;
        local_c8 = 0xc69c4000;
        local_78 = 0;
        local_70 = 0;
        local_68 = 0;
        local_80 = 0;
        local_90 = 0;
        uStack_88 = 0;
        local_a0 = 0;
        uStack_98 = 0;
        local_b0 = 0;
        uStack_a8 = 0;
        local_c0 = 0;
        uStack_b8 = 0;
        local_67 = 1;
        local_65 = 0;
        local_64 = 0;
        local_110 = (undefined8 *)0x0;
        local_108 = 0;
        FUN_1446efa72(&local_110,0,3,0x10);
        local_108 = 3;
        plVar13 = (longlong *)param_1[1];
        bVar16 = true;
        if (plVar13 == (longlong *)0x0) {
LAB_140983483:
          uVar10 = 0;
          plVar13 = (longlong *)0x0;
        }
        else {
          iVar8 = (int)plVar13[1];
          do {
            if (iVar8 == 0) goto LAB_140983483;
            LOCK();
            iVar6 = (int)plVar13[1];
            bVar15 = iVar8 == iVar6;
            if (bVar15) {
              *(int *)(plVar13 + 1) = iVar8 + 1;
              iVar6 = iVar8;
            }
            iVar8 = iVar6;
            UNLOCK();
          } while (!bVar15);
          uVar10 = *param_1;
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          LOCK();
          *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
          UNLOCK();
          bVar16 = false;
        }
        *local_110 = &PTR_LAB_14b3e6380;
        *(int *)(local_110 + 1) = (int)plVar11[1];
        LOCK();
        UNLOCK();
        lVar14 = DAT_14c758608 + 1;
        lVar9 = DAT_14c758608 + 1;
        if (lVar14 == 0) {
          LOCK();
          UNLOCK();
          lVar14 = DAT_14c758608 + 2;
          lVar9 = DAT_14c758608 + 2;
        }
        DAT_14c758608 = lVar9;
        local_110[2] = lVar14;
        *local_110 = &PTR_FUN_14b400680;
        local_110[3] = uVar10;
        local_110[4] = plVar13;
        if (bVar16) {
          local_110[5] = &LAB_140eb4818;
        }
        else {
          LOCK();
          *(int *)((longlong)plVar13 + 0xc) = *(int *)((longlong)plVar13 + 0xc) + 1;
          UNLOCK();
          local_110[5] = &LAB_140eb4818;
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
        }
        iVar8 = local_108;
        puVar12 = local_110;
        local_110 = (undefined8 *)0x0;
        local_108 = 0;
        if (iStack_d0 == 0) {
LAB_140983324:
          if (CONCAT44(uStack_d4,uStack_d8) != 0) {
            FUN_1400020a8();
          }
        }
        else {
          puVar5 = (undefined8 *)CONCAT44(uStack_d4,uStack_d8);
          if (puVar5 != (undefined8 *)0x0) {
            (**(code **)*puVar5)(puVar5,0);
            FUN_1446efa72(&uStack_d8,0,0,0x10);
            iStack_d0 = 0;
            goto LAB_140983324;
          }
        }
        lVar9 = local_118;
        uStack_d8 = SUB84(puVar12,0);
        uStack_d4 = (undefined4)((ulonglong)puVar12 >> 0x20);
        iStack_d0 = iVar8;
        if (local_108 == 0) {
LAB_140983353:
          if (local_110 != (undefined8 *)0x0) {
            FUN_1400020a8();
          }
        }
        else if (local_110 != (undefined8 *)0x0) {
          (**(code **)*local_110)(local_110,0);
          FUN_1446efa72(&local_110,0,0,0x10);
          local_108 = 0;
          goto LAB_140983353;
        }
        if (lVar9 == 0) {
          local_64 = 2;
        }
        else {
          FUN_140983ba6(plVar11 + 2,lVar9,local_f8);
          if ((6 < local_64) || ((0x4cU >> (local_64 & 0x1f) & 1) == 0)) {
            if (iStack_d0 == 0) {
              puVar12 = (undefined8 *)0x0;
            }
            else {
              puVar12 = (undefined8 *)0x0;
              if ((longlong *)CONCAT44(uStack_d4,uStack_d8) != (longlong *)0x0) {
                (**(code **)(*(longlong *)CONCAT44(uStack_d4,uStack_d8) + 0x38))();
                puVar12 = local_110;
              }
            }
            plVar11[0xb] = (longlong)puVar12;
            *(uint *)(plVar11 + 9) = local_f8[4];
            *(undefined4 *)((longlong)plVar11 + 0x4c) = (undefined4)uStack_e4;
            *(undefined4 *)(plVar11 + 10) = uStack_e4._4_4_;
            *(undefined4 *)((longlong)plVar11 + 0x54) = uStack_dc;
            *(byte *)(*plVar11 + 0x10) = *(byte *)(*plVar11 + 0x10) | 2;
            FUN_1409838b8(local_f8);
            goto LAB_1409833d6;
          }
        }
        FUN_1409838b8(local_f8);
        if ((((*(int *)(param_1 + 5) != 0) &&
             (uVar3 = *(uint *)((longlong)param_1 + 0x24), -1 < (int)uVar3)) &&
            ((int)uVar3 < DAT_14c9647dc)) &&
           (((puVar12 = (undefined8 *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
             puVar12 != (undefined8 *)0x0 && (*(int *)(puVar12 + 2) == *(int *)(param_1 + 5))) &&
            ((*(uint *)(puVar12 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(puVar12 + 1) & 0x10200000) == 0) {
            plVar11 = (longlong *)*puVar12;
          }
          else {
            plVar11 = (longlong *)0x0;
          }
          goto LAB_1409835ae;
        }
        break;
      }
LAB_1409833d6:
      plVar11 = plVar11 + 0xc;
    } while (plVar11 != local_120);
  }
  goto LAB_14098373c;
  while (plVar11 = (longlong *)(**(code **)(*plVar11 + 0x2f0))(plVar11), plVar11 != (longlong *)0x0)
  {
LAB_1409835ae:
    if (plVar11[5] != 0) {
      lVar9 = *(longlong *)(plVar11[5] + 0x30);
      if ((lVar9 != 0) && (lVar9 = *(longlong *)(lVar9 + 0x360), lVar9 != 0)) {
        if (*(longlong *)(lVar9 + 0x1f0) == 0) {
          puVar12 = (undefined8 *)(lVar9 + 0x458);
        }
        else {
          puVar12 = (undefined8 *)(*(longlong *)(lVar9 + 0x1f0) + 0xf0);
        }
        uVar10 = *puVar12;
        local_110 = (undefined8 *)0x0;
        local_108 = 0;
        FUN_1446efa72(&local_110,0,3,0x10);
        local_108 = 3;
        plVar11 = (longlong *)param_1[1];
        if (plVar11 == (longlong *)0x0) goto LAB_1409837c0;
        iVar8 = (int)plVar11[1];
        goto LAB_140983635;
      }
      break;
    }
  }
  goto LAB_14098373c;
LAB_1409837c0:
  *local_110 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_110[2] = lVar14;
  *local_110 = &PTR_FUN_14b4006f0;
  local_110[3] = 0;
  local_110[4] = 0;
  local_110[5] = FUN_140983092;
  goto LAB_1409836bc;
  while( true ) {
    LOCK();
    iVar6 = (int)plVar11[1];
    bVar16 = iVar8 == iVar6;
    if (bVar16) {
      *(int *)(plVar11 + 1) = iVar8 + 1;
      iVar6 = iVar8;
    }
    iVar8 = iVar6;
    UNLOCK();
    if (bVar16) break;
LAB_140983635:
    if (iVar8 == 0) goto LAB_1409837c0;
  }
  uVar4 = *param_1;
  LOCK();
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  UNLOCK();
  LOCK();
  *(int *)(plVar11 + 1) = (int)plVar11[1] + 1;
  UNLOCK();
  *local_110 = &PTR_LAB_14a1c8830;
  LOCK();
  UNLOCK();
  lVar14 = DAT_14c758608 + 1;
  lVar9 = DAT_14c758608 + 1;
  if (lVar14 == 0) {
    LOCK();
    UNLOCK();
    lVar14 = DAT_14c758608 + 2;
    lVar9 = DAT_14c758608 + 2;
  }
  DAT_14c758608 = lVar9;
  local_110[2] = lVar14;
  *local_110 = &PTR_FUN_14b4006f0;
  local_110[3] = uVar4;
  local_110[4] = plVar11;
  LOCK();
  *(int *)((longlong)plVar11 + 0xc) = *(int *)((longlong)plVar11 + 0xc) + 1;
  UNLOCK();
  local_110[5] = FUN_140983092;
  LOCK();
  plVar13 = plVar11 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  LOCK();
  plVar13 = plVar11 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
  LOCK();
  plVar13 = plVar11 + 1;
  *(int *)plVar13 = (int)*plVar13 + -1;
  UNLOCK();
  if ((int)*plVar13 == 0) {
    (**(code **)*plVar11)(plVar11);
    LOCK();
    piVar2 = (int *)((longlong)plVar11 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar11 + 0x10))(plVar11);
    }
  }
LAB_1409836bc:
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[2] = 0;
  FUN_14487d8d8(local_f8,&local_110);
  uStack_b8 = CONCAT71(uStack_b8._1_7_,1);
  local_128 = local_100;
  local_100[0] = 0;
  local_fc = 0xbf800000;
  FUN_1406f4044(uVar10,param_1 + 0x3c,local_f8,0x3f000000);
  (*(code *)(&PTR_LAB_14a1c87a0)[uStack_b8 & 0xff])(local_f8);
  if (local_108 != 0) {
    if (local_110 == (undefined8 *)0x0) goto LAB_14098373c;
    (**(code **)*local_110)(local_110,0);
    FUN_1446efa72(&local_110,0,0,0x10);
    local_108 = 0;
  }
  if (local_110 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_14098373c:
  if ((local_60 ^ (ulonglong)auStack_148) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409838b8 FUN_1409838b8 body=295 status=ok
// SIG undefined FUN_1409838b8(void)

void FUN_1409838b8(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  
  plVar1 = (longlong *)(param_1 + 0x80);
  if (*(int *)(param_1 + 0x88) == 0) {
LAB_1409838d1:
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 != (undefined8 *)0x0) {
      (**(code **)*puVar2)(puVar2,0);
      FUN_1446efa72(plVar1,0,0,0x10);
      *(undefined4 *)(param_1 + 0x88) = 0;
      goto LAB_1409838d1;
    }
  }
  plVar1 = (longlong *)(param_1 + 0x70);
  if (*(int *)(param_1 + 0x78) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) goto LAB_1409838f3;
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
LAB_1409838f3:
  FUN_1409839df(*(undefined8 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x68));
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  if (*(int *)(param_1 + 0x28) != 0) {
    puVar2 = (undefined8 *)*plVar1;
    if (puVar2 == (undefined8 *)0x0) {
      return;
    }
    (**(code **)*puVar2)(puVar2,0);
    FUN_1446efa72(plVar1,0,0,0x10);
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*plVar1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1409839df FUN_1409839df body=51 status=ok
// SIG undefined FUN_1409839df(void)

void FUN_1409839df(longlong param_1,int param_2)

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



// FUNCTION 140983a12 FUN_140983a12 body=300 status=ok
// SIG undefined FUN_140983a12(void)

void FUN_140983a12(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  
  if (*(longlong *)(param_1 + 0x1e0) != 0) {
    if (((*(int *)(param_1 + 0x28) != 0) && (uVar3 = *(uint *)(param_1 + 0x24), -1 < (int)uVar3)) &&
       ((int)uVar3 < DAT_14c9647dc)) {
      plVar4 = (longlong *)
               ((ulonglong)((uVar3 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
      if (((plVar4 != (longlong *)0x0) && ((int)plVar4[2] == *(int *)(param_1 + 0x28))) &&
         (((*(uint *)(plVar4 + 1) & 0x10200000) == 0 && ((longlong *)*plVar4 != (longlong *)0x0))))
      {
        lVar2 = (**(code **)(*(longlong *)*plVar4 + 0x2b0))();
        if (lVar2 != 0) {
          lVar2 = FUN_140983b3e(lVar2);
          if (lVar2 != 0) {
            if (*(longlong *)(lVar2 + 0x1f0) == 0) {
              plVar4 = (longlong *)(lVar2 + 0x458);
            }
            else {
              plVar4 = (longlong *)(*(longlong *)(lVar2 + 0x1f0) + 0xf0);
            }
            lVar2 = *(longlong *)(param_1 + 0x1e0);
            if (lVar2 != 0) {
              lVar1 = *plVar4;
              uVar3 = (uint)lVar2;
              if ((int)(uVar3 & 0xffffff) < *(int *)(lVar1 + 0x10)) {
                lVar5 = lVar1 + 0x18;
                if (*(longlong *)(lVar1 + 0x28) != 0) {
                  lVar5 = *(longlong *)(lVar1 + 0x28);
                }
                if ((*(uint *)(lVar5 + (ulonglong)((uVar3 & 0xffffff) >> 5) * 4) >> (uVar3 & 0x1f) &
                    1) != 0) {
                  lVar1 = *(longlong *)(lVar1 + 8);
                  lVar5 = (ulonglong)(uVar3 & 0xffffff) * 0x70;
                  if (((lVar1 + lVar5 != 0) && (*(longlong *)(lVar1 + 0x60 + lVar5) == lVar2)) &&
                     (*(char *)(lVar1 + 1 + lVar5) != '\x04')) {
                    FUN_1405a424c();
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  return;
}



// FUNCTION 140983b3e FUN_140983b3e body=104 status=ok
// SIG undefined FUN_140983b3e(void)

undefined8 FUN_140983b3e(longlong param_1)

{
  uint uVar1;
  longlong *plVar2;
  longlong lVar3;
  
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar1 = *(uint *)(param_1 + 0x50);
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) {
      return 0;
    }
    plVar2 = (longlong *)
             ((ulonglong)((uVar1 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((plVar2 != (longlong *)0x0) && ((int)plVar2[2] == *(int *)(param_1 + 0x54))) &&
       ((*(uint *)(plVar2 + 1) & 0x10200000) == 0)) {
      if ((*(uint *)(plVar2 + 1) & 0x10200000) == 0) {
        lVar3 = *plVar2;
      }
      else {
        lVar3 = 0;
      }
      if (*(longlong *)(lVar3 + 0x30) != 0) {
        return *(undefined8 *)(*(longlong *)(lVar3 + 0x30) + 0x360);
      }
    }
  }
  return 0;
}



// FUNCTION 140983ba6 FUN_140983ba6 body=957 status=ok
// SIG undefined FUN_140983ba6(void)

void FUN_140983ba6(char *param_1,longlong param_2,undefined1 *param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  longlong *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  longlong lVar8;
  undefined1 auStack_98 [32];
  undefined1 *local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_60 [12];
  int local_54;
  undefined1 local_50 [24];
  longlong local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  *(undefined4 *)(param_3 + 0x94) = 0;
  if (param_2 == 0) {
    *(undefined4 *)(param_3 + 0x94) = 2;
    goto switchD_140983c67_caseD_a;
  }
  cVar3 = FUN_140114204();
  if (cVar3 == '\0') {
    *(undefined4 *)(param_3 + 0x94) = 4;
    goto switchD_140983c67_caseD_a;
  }
  local_54 = -1;
  if (*(longlong *)(param_3 + 0x40) != 0) {
    local_54 = FUN_140985360(param_2);
  }
  if (*param_1 == '\n') {
    plVar4 = (longlong *)FUN_14039ffc6(param_2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x18))(plVar4,local_50,param_1,param_3);
      goto switchD_140983c67_caseD_a;
    }
    goto LAB_140983f26;
  }
  puVar7 = param_3;
  switch(*param_1) {
  case '\x01':
    plVar4 = (longlong *)FUN_1401499e8(param_2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x38))(plVar4,local_50,param_1,param_3);
      goto switchD_140983c67_caseD_a;
    }
    break;
  case '\x02':
  case '\x03':
  case '\x04':
  case '\x05':
    plVar4 = (longlong *)FUN_1403a0020(param_2);
    if (plVar4 == (longlong *)0x0) break;
    if ((((*(int *)(param_1 + 0x10) == 0) || (iVar1 = *(int *)(param_1 + 0x14), iVar1 == 0)) ||
        (*(int *)(param_1 + 0x10) == DAT_14c948000)) || ((iVar1 == 1 || (iVar1 < 2)))) {
      local_68 = DAT_14c948620;
      local_70 = DAT_14c948618;
    }
    else {
      local_68 = *(undefined4 *)(*(longlong *)(param_1 + 0x28) + 0x14);
      local_70 = *(undefined8 *)(*(longlong *)(param_1 + 0x28) + 0xc);
    }
    lVar8 = *plVar4;
    param_1 = (char *)&local_70;
    goto LAB_140983cd2;
  case '\x06':
    if (local_54 < 0) {
      if (*(char *)(param_2 + 0x68) == '\x01') {
        local_54 = 0;
      }
      else {
        if (*(int *)(param_2 + 0x54) == 0) {
LAB_140983dea:
          uVar5 = 0;
        }
        else {
          uVar2 = *(uint *)(param_2 + 0x50);
          uVar5 = 0;
          if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
            puVar6 = (undefined8 *)
                     ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
            if ((puVar6 == (undefined8 *)0x0) ||
               ((*(int *)(puVar6 + 2) != *(int *)(param_2 + 0x54) ||
                ((*(uint *)(puVar6 + 1) & 0x10200000) != 0)))) goto LAB_140983dea;
            uVar5 = *puVar6;
          }
        }
        local_54 = FUN_1409844f4(uVar5);
        if (local_54 < 0) {
LAB_140983e5c:
          *(undefined4 *)(param_3 + 0x94) = 6;
          goto switchD_140983c67_caseD_a;
        }
      }
    }
    plVar4 = (longlong *)FUN_140d17acc(param_2,&local_54);
    if (plVar4 != (longlong *)0x0) {
      lVar8 = *plVar4;
      puVar7 = local_60;
      local_78 = param_3;
      goto LAB_140983cd2;
    }
    break;
  case '\a':
    if (local_54 < 0) {
      plVar4 = *(longlong **)(param_2 + 0x160);
    }
    else {
      plVar4 = (longlong *)FUN_143d2992a(param_2,&local_54);
    }
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x28))(plVar4,local_50,param_1,param_3);
      goto switchD_140983c67_caseD_a;
    }
    break;
  case '\b':
    if (local_54 < 0) {
      if (*(char *)(param_2 + 0x68) == '\x01') {
        local_54 = 0;
      }
      else {
        uVar5 = FUN_14479d2ce(param_2 + 0x50);
        local_54 = FUN_1409844f4(uVar5);
        if (local_54 < 0) goto LAB_140983e5c;
      }
    }
    plVar4 = (longlong *)FUN_141068ae8(param_2,&local_54);
    goto LAB_140983dce;
  case '\t':
    plVar4 = (longlong *)FUN_145781ab4(param_2);
    if (plVar4 != (longlong *)0x0) {
      FUN_140bc5fbc(param_1,local_50);
      (**(code **)(*plVar4 + 0x10))(plVar4,local_60,local_50,param_3);
      if (local_38 != 0) {
        FUN_1400020a8();
      }
      goto switchD_140983c67_caseD_a;
    }
    break;
  default:
    goto switchD_140983c67_caseD_a;
  case '\r':
    plVar4 = (longlong *)FUN_14883d45c(param_2);
    goto LAB_140983dce;
  case '\x0e':
    plVar4 = (longlong *)FUN_145b08bca(param_2);
LAB_140983dce:
    if (plVar4 != (longlong *)0x0) {
      lVar8 = *plVar4;
LAB_140983cd2:
      (**(code **)(lVar8 + 0x10))(plVar4,local_50,param_1,puVar7);
      goto switchD_140983c67_caseD_a;
    }
    break;
  case '\x0f':
    if (*(longlong *)(param_1 + 4) == 0) goto switchD_140983c67_caseD_a;
    plVar4 = (longlong *)FUN_14883d3b2(param_2);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x58))(plVar4,local_50,param_1,param_3);
      goto switchD_140983c67_caseD_a;
    }
  }
LAB_140983f26:
  *(undefined4 *)(param_3 + 0x94) = 3;
switchD_140983c67_caseD_a:
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140983f64 FUN_140983f64 body=506 status=ok
// SIG undefined FUN_140983f64(void)

undefined8 FUN_140983f64(longlong *param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined8 *local_78;
  undefined8 *local_70;
  undefined1 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_68 = *(undefined1 *)(param_3 + 1);
  if (((*(int *)(param_3 + 0x10) == 0) || (iVar1 = *(int *)(param_3 + 0x14), iVar1 == 0)) ||
     (*(int *)(param_3 + 0x10) == DAT_14c948000)) {
    local_20 = DAT_14c948620;
    local_28 = DAT_14c948618;
    local_30 = DAT_14c948620;
    local_38 = DAT_14c948618;
    local_40 = DAT_14c948620;
    local_48 = DAT_14c948618;
  }
  else {
    lVar2 = param_3 + 0x18;
    lVar3 = lVar2;
    if (0 < *(int *)(param_3 + 0x34)) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 5)) {
      local_20 = DAT_14c948620;
      local_28 = DAT_14c948618;
    }
    else {
      local_20 = *(undefined4 *)(lVar3 + 0x38);
      local_28 = *(undefined8 *)(lVar3 + 0x30);
    }
    lVar3 = lVar2;
    if (0 < *(int *)(param_3 + 0x34)) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if (1 < iVar1) {
      lVar3 = *(longlong *)(param_3 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 4)) {
      local_30 = DAT_14c948620;
      local_38 = DAT_14c948618;
    }
    else {
      local_30 = *(undefined4 *)(lVar3 + 0x2c);
      local_38 = *(undefined8 *)(lVar3 + 0x24);
    }
    if (0 < *(int *)(param_3 + 0x34)) {
      lVar2 = *(longlong *)(param_3 + 0x28);
    }
    if (1 < iVar1) {
      lVar2 = *(longlong *)(param_3 + 0x28);
    }
    if ((iVar1 == 1) || (iVar1 < 3)) {
      local_40 = DAT_14c948620;
      local_48 = DAT_14c948618;
    }
    else {
      local_40 = *(undefined4 *)(lVar2 + 0x20);
      local_48 = *(undefined8 *)(lVar2 + 0x18);
    }
    if ((iVar1 != 1) && (1 < iVar1)) {
      local_50 = *(undefined4 *)(*(longlong *)(param_3 + 0x28) + 0x14);
      local_58 = *(undefined8 *)(*(longlong *)(param_3 + 0x28) + 0xc);
      goto LAB_14098407c;
    }
  }
  local_50 = DAT_14c948620;
  local_58 = DAT_14c948618;
LAB_14098407c:
  local_70 = &local_28;
  local_78 = &local_38;
  local_60 = param_4;
  (**(code **)(*param_1 + 0x20))(param_1,param_2,&local_58,&local_48);
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140984160 FUN_140984160 body=386 status=ok
// SIG undefined FUN_140984160(void)

undefined8 *
FUN_140984160(longlong param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,longlong param_8)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  longlong lVar6;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined1 local_50;
  undefined1 local_48;
  undefined4 local_40;
  undefined8 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  *(undefined4 *)(param_8 + 0x94) = 7;
  local_48 = *(char *)(param_1 + 0x150) != '\x03';
  local_50 = param_7;
  local_58 = param_6;
  local_40 = 0;
  lVar6 = FUN_1403a0554(param_1,param_3,param_4,param_5);
  if (((lVar6 != 0) && (*(undefined4 *)(param_8 + 0x94) = 1, *(int *)(param_8 + 0x28) != 0)) &&
     (*(longlong **)(param_8 + 0x20) != (longlong *)0x0)) {
    cVar5 = (**(code **)(**(longlong **)(param_8 + 0x20) + 0x30))();
    if (cVar5 != '\0') {
      uVar2 = *(undefined4 *)(lVar6 + 0x3c);
      uVar3 = *(undefined4 *)(lVar6 + 0x40);
      uVar4 = *(undefined4 *)(lVar6 + 0x44);
      *(undefined4 *)(param_8 + 0x10) = *(undefined4 *)(lVar6 + 0x38);
      *(undefined4 *)(param_8 + 0x14) = uVar2;
      *(undefined4 *)(param_8 + 0x18) = uVar3;
      *(undefined4 *)(param_8 + 0x1c) = uVar4;
      local_38 = (undefined8 *)0x0;
      local_30 = 0;
      FUN_1401aa3da(&local_38,param_8 + 0x20);
      FUN_1409842e3(lVar6 + 0x48,&local_38);
      if ((*(int *)(param_8 + 0x28) == 0) ||
         (plVar1 = *(longlong **)(param_8 + 0x20), plVar1 == (longlong *)0x0)) {
        *param_2 = 0;
      }
      else {
        (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
      }
      if (local_30 != 0) {
        if (local_38 == (undefined8 *)0x0) goto LAB_140984274;
        (**(code **)*local_38)(local_38,0);
        FUN_1446efa72(&local_38,0,0,0x10);
        local_30 = 0;
      }
      if (local_38 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      goto LAB_140984274;
    }
  }
  *param_2 = 0;
LAB_140984274:
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409842e3 FUN_1409842e3 body=459 status=ok
// SIG undefined FUN_1409842e3(void)

void FUN_1409842e3(longlong *param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  bool bVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_78 [32];
  longlong local_58;
  longlong local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((((int)param_2[1] != 0) && ((longlong *)*param_2 != (longlong *)0x0)) &&
     (cVar4 = (**(code **)(*(longlong *)*param_2 + 0x30))(), cVar4 != '\0')) {
    uVar8 = (ulonglong)(int)param_1[1];
    if (0 < (longlong)uVar8) {
      lVar11 = uVar8 * 0x10 + -8;
      do {
        if (((*(int *)(*param_1 + lVar11) == 0) ||
            (plVar1 = *(longlong **)(*param_1 + -8 + lVar11), plVar1 == (longlong *)0x0)) ||
           (cVar4 = (**(code **)(*plVar1 + 0x30))(), cVar4 == '\0')) {
          FUN_1408262a8(param_1,(int)uVar8 + -1);
          FUN_14082621e(param_1);
        }
        lVar11 = lVar11 + -0x10;
        bVar3 = 1 < uVar8;
        uVar8 = uVar8 - 1;
      } while (bVar3);
    }
    if (((int)param_2[1] == 0) || (plVar1 = (longlong *)*param_2, plVar1 == (longlong *)0x0)) {
      local_58 = 0;
    }
    else {
      (**(code **)(*plVar1 + 0x38))(plVar1,&local_58);
    }
    lVar6 = local_58;
    lVar11 = param_1[1];
    if ((longlong)(int)lVar11 == 0) {
      iVar7 = 0;
    }
    else {
      lVar2 = *param_1;
      lVar10 = 0;
      iVar9 = 0;
      do {
        if (*(int *)(lVar2 + 8 + lVar10) == 0) {
          lVar5 = 0;
        }
        else {
          plVar1 = *(longlong **)(lVar2 + lVar10);
          lVar5 = 0;
          if (plVar1 != (longlong *)0x0) {
            (**(code **)(*plVar1 + 0x38))(plVar1,&local_50);
            lVar5 = local_50;
          }
        }
        if (lVar5 == lVar6) {
          iVar7 = (int)param_1[1];
          if (-1 < iVar9 && iVar9 < iVar7) goto LAB_140984430;
          goto LAB_1409843ff;
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 0x10;
      } while ((longlong)(int)lVar11 * 0x10 != lVar10);
      iVar7 = (int)param_1[1];
    }
LAB_1409843ff:
    *(uint *)(param_1 + 1) = iVar7 + 1U;
    if (*(uint *)((longlong)param_1 + 0xc) < iVar7 + 1U) {
      FUN_140984672(param_1,iVar7);
    }
    lVar11 = *param_1;
    lVar6 = (longlong)iVar7 * 0x10;
    *(undefined8 *)(lVar11 + lVar6) = 0;
    *(undefined4 *)(lVar11 + 8 + lVar6) = 0;
    FUN_1401aa3da(lVar11 + lVar6,param_2);
  }
LAB_140984430:
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1409844f4 FUN_1409844f4 body=171 status=ok
// SIG undefined FUN_1409844f4(void)

undefined4 FUN_1409844f4(longlong param_1)

{
  longlong lVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined1 auStack_48 [36];
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  uVar2 = 0xffffffff;
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x40) < 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = **(longlong **)(param_1 + 0x38);
      if ((lVar3 != 0 & DAT_14c950c29) == 1) {
        FUN_1456cec3c(lVar3);
      }
    }
    if (((*(longlong *)(param_1 + 0x1e0) != 0) && (lVar3 != 0)) &&
       (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x1e0) + 0x68), lVar1 != 0)) {
      FUN_1409845a0(lVar1,local_24,lVar3);
      uVar2 = FUN_140b9fef0(lVar1,local_24,0);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1409845a0 FUN_1409845a0 body=209 status=ok
// SIG undefined FUN_1409845a0(void)

void FUN_1409845a0(longlong param_1,undefined2 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  uint *puVar3;
  undefined2 uVar4;
  longlong lVar5;
  undefined2 uVar6;
  longlong lVar7;
  longlong *plVar8;
  
  uVar4 = 0xffff;
  if ((param_3 == 0) || ((longlong)*(int *)(param_1 + 0x10) == 0)) {
    uVar6 = 0;
  }
  else {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if (((lVar2 != 0) && (*(short *)(lVar2 + 4) < 0)) &&
         (puVar3 = *(uint **)(lVar2 + 0x10), puVar3 != (uint *)0x0)) {
        if ((puVar3[1] == 0) || (uVar1 = *puVar3, (int)uVar1 < 0)) {
LAB_14098465b:
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != puVar3[1])) ||
               ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_14098465b;
            lVar7 = *plVar8;
          }
        }
        if (lVar7 == param_3) {
          uVar4 = *(undefined2 *)(lVar2 + 2);
          uVar6 = *(undefined2 *)(lVar2 + 8);
          break;
        }
      }
      lVar5 = lVar5 + 8;
      uVar6 = 0;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar5);
  }
  *param_2 = uVar4;
  param_2[1] = uVar6;
  return;
}



// FUNCTION 140984672 FUN_140984672 body=269 status=ok
// SIG undefined FUN_140984672(void)

void FUN_140984672(longlong param_1,int param_2)

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



// FUNCTION 140984780 FUN_140984780 body=167 status=ok
// SIG undefined FUN_140984780(void)

undefined8 *
FUN_140984780(longlong *param_1,undefined8 *param_2,undefined8 param_3,undefined4 *param_4,
             longlong param_5)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  (**(code **)(*param_1 + 0x18))
            (param_1,param_3,0,*(undefined1 *)(param_1[0x1e] + 0x18),param_4,param_5);
  uVar2 = (**(code **)(*param_1 + 0x38))(param_1,*param_4);
  uVar3 = 0x7fffffff;
  if (uVar2 < 0x7fffffff) {
    uVar3 = uVar2;
  }
  *(undefined1 *)(param_5 + 0x10) = 2;
  *(undefined8 *)(param_5 + 0x14) = 0;
  *(int *)(param_5 + 0x1c) = (int)uVar3;
  FUN_14098486a(param_1[0x1e],*param_4,param_5 + 0x20);
  if ((*(int *)(param_5 + 0x28) == 0) ||
     (plVar1 = *(longlong **)(param_5 + 0x20), plVar1 == (longlong *)0x0)) {
    *param_2 = 0;
  }
  else {
    (**(code **)(*plVar1 + 0x38))(plVar1,param_2);
  }
  return param_2;
}



// FUNCTION 14098486a FUN_14098486a body=238 status=ok
// SIG undefined FUN_14098486a(void)

void FUN_14098486a(longlong param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_58 [40];
  undefined8 *local_30;
  int local_28;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_1c = param_2;
  plVar3 = (longlong *)FUN_140984fe2(param_1 + 0x20);
  local_30 = (undefined8 *)0x0;
  local_28 = 0;
  FUN_1401aa3da(&local_30,param_3);
  iVar1 = (int)plVar3[1];
  *(uint *)(plVar3 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)plVar3 + 0xc) < iVar1 + 1U) {
    FUN_140984a58(plVar3,iVar1);
  }
  lVar2 = *plVar3;
  lVar4 = (longlong)iVar1 * 0x10;
  *(undefined8 *)(lVar2 + lVar4) = 0;
  *(undefined4 *)(lVar2 + 8 + lVar4) = 0;
  FUN_1401aa3da(lVar2 + lVar4,&local_30);
  if (local_28 != 0) {
    if (local_30 == (undefined8 *)0x0) goto LAB_140984902;
    (**(code **)*local_30)(local_30,0);
    FUN_1446efa72(&local_30,0,0,0x10);
    local_28 = 0;
  }
  if (local_30 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
LAB_140984902:
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14098495a FUN_14098495a body=252 status=ok
// SIG undefined FUN_14098495a(void)

void FUN_14098495a(longlong param_1,char *param_2,byte param_3,byte param_4,undefined4 *param_5,
                  longlong param_6)

{
  char cVar1;
  ulonglong *puVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  undefined1 auStack_68 [38];
  undefined1 local_42 [2];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  *(undefined4 *)(param_6 + 0x94) = 0;
  *param_5 = 0xffffffff;
  uVar4 = 4;
  if (*param_2 == '\x06') {
    cVar1 = FUN_140114204(param_2);
    if (cVar1 != '\0') {
      puVar2 = (ulonglong *)FUN_1408264ac(param_2,param_1 + 0x28,param_5,local_42);
      if (puVar2 == (ulonglong *)0x0) {
        uVar4 = 7;
      }
      else {
        *(byte *)((longlong)puVar2 + 0xe) =
             (param_3 & 2) >> 1 | param_3 * '\x02' & 3 | *(byte *)((longlong)puVar2 + 0xe) & 0xfd;
        *(byte *)((longlong)puVar2 + 0xf) = *(byte *)((longlong)puVar2 + 0xf) | param_4;
        uVar3 = 0x7fffffff;
        if (*puVar2 < 0x7fffffff) {
          uVar3 = *puVar2;
        }
        *(undefined1 *)(param_6 + 0x10) = 2;
        *(undefined8 *)(param_6 + 0x14) = 0;
        *(int *)(param_6 + 0x1c) = (int)uVar3;
        uVar4 = 1;
      }
    }
  }
  *(undefined4 *)(param_6 + 0x94) = uVar4;
  if ((local_40 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140984a58 FUN_140984a58 body=269 status=ok
// SIG undefined FUN_140984a58(void)

void FUN_140984a58(longlong param_1,int param_2)

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


