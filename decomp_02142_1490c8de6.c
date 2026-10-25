// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1490c8de6 FUN_1490c8de6 body=91 status=ok
// SIG undefined FUN_1490c8de6(void)

longlong FUN_1490c8de6(longlong param_1,longlong param_2)

{
  if (param_1 != param_2) {
    FUN_1402d46d0(param_1);
    if (*(longlong *)(param_2 + 0x40) == 0) {
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
    }
    if (*(longlong *)(param_1 + 0x40) != 0) {
      FUN_1400020a8();
    }
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    *(undefined4 *)(param_2 + 0x48) = 0;
  }
  return param_1;
}



// FUNCTION 1490c8e41 FUN_1490c8e41 body=277 status=ok
// SIG undefined FUN_1490c8e41(void)

undefined8 FUN_1490c8e41(longlong *param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_118 [32];
  undefined1 local_f8;
  undefined8 local_f0;
  longlong local_e8 [2];
  longlong local_d8;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  undefined8 local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if (*param_1 == 0) {
    uVar1 = 0;
  }
  else {
    FUN_1446f470e(&local_f0,L"AssetRegistry",1);
    uVar1 = FUN_144a52528();
    plVar2 = (longlong *)FUN_1401e3324(uVar1,local_f0);
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x40))(plVar2);
    local_f8 = 1;
    uVar1 = 0;
    (**(code **)(*plVar2 + 0x98))(plVar2,local_e8,param_1,0);
    if ((local_e8[0] != 0) && (local_d8 != 0)) {
      local_58 = 0;
      local_50 = 0;
      local_78 = 0;
      uStack_70 = 0;
      local_4c = 0xffffffff00000080;
      local_44 = 0;
      local_38 = 0;
      local_30 = 0;
      FUN_147019d90(local_e8,0);
      uVar1 = FUN_140081d40(param_1,0);
    }
    FUN_14128b0c2(local_e8);
  }
  if ((local_20 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c8f58 FUN_1490c8f58 body=528 status=ok
// SIG undefined FUN_1490c8f58(void)

undefined8 * FUN_1490c8f58(longlong *param_1,undefined8 *param_2,longlong *param_3)

{
  ulonglong uVar1;
  int iVar2;
  longlong *plVar3;
  uint uVar4;
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
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar4 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (uVar4 != 0) {
    if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar4);
    }
    FUN_146880458(param_2,uVar4);
    iVar2 = 1;
    if (3 < uVar4) {
      uVar4 = (uVar4 | 1) + 0xe;
      iVar2 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar2 == 0; iVar2 = iVar2 + -1) {
        }
      }
      iVar2 = 1 << ((byte)iVar2 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar2)) {
      *(int *)(param_2 + 9) = iVar2;
      FUN_1457b1594(param_2);
    }
  }
  local_50 = param_1 + 2;
  local_58 = 0x100000000;
  local_48 = 0xffffffff;
  iStack_44 = 0;
  local_40 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_58);
  }
  local_68 = local_48;
  iStack_64 = iStack_44;
  local_60 = local_40;
  local_5c = local_3c;
  local_78 = local_58;
  local_70 = local_50;
  local_80 = param_1;
  if (iStack_44 < (int)local_50[3]) {
    do {
      if ((int)param_3[1] != *(int *)((longlong)param_3 + 0x34)) {
        uVar1 = *(ulonglong *)(*local_80 + (longlong)iStack_64 * 0x10);
        uVar4 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar3 = (longlong *)param_3[8];
        if ((longlong *)param_3[8] == (longlong *)0x0) {
          plVar3 = param_3 + 7;
        }
        iVar2 = *(int *)((longlong)plVar3 +
                        (ulonglong)((int)param_3[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar2 != -1) {
          do {
            if (*(ulonglong *)(*param_3 + (longlong)iVar2 * 0x10) == uVar1) goto LAB_1490c90d6;
            iVar2 = *(int *)((longlong)iVar2 * 0x10 + *param_3 + 8);
          } while (iVar2 != -1);
        }
      }
      FUN_1457b12ce(param_2,&local_58,*local_80 + (longlong)iStack_64 * 0x10,0);
LAB_1490c90d6:
      local_68 = local_68 & ~local_78._4_4_;
      FUN_1449c0562(&local_78);
    } while (iStack_64 < (int)local_70[3]);
  }
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c916a FUN_1490c916a body=107 status=ok
// SIG undefined FUN_1490c916a(void)

void FUN_1490c916a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_68 [32];
  undefined4 local_48;
  code **local_40;
  undefined4 local_38;
  undefined4 uStack_30;
  undefined8 local_20;
  code *local_18;
  undefined8 *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_10 = &local_20;
  local_40 = &local_18;
  local_18 = FUN_14446483a;
  local_38 = param_6;
  uStack_30 = param_7;
  local_48 = param_5;
  local_20 = param_3;
  FUN_14445b320();
  if ((local_8 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c91d6 FUN_1490c91d6 body=374 status=ok
// SIG undefined FUN_1490c91d6(void)

void FUN_1490c91d6(longlong param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar7 = 0;
  FUN_1449774fc(param_1 + 0x240,local_44,param_2,0);
  if ((param_3 != 0) || (param_3 = *(longlong *)(param_1 + 0x228), param_3 != 0)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar12 = (uint)uVar2 & 0xffff;
    uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar11 = (uint)uVar1 & 0xffff;
    uVar4 = ((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
    uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                            ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar12 >> 4) + uVar4 * 0x40 +
                            0x9e3779b9 ^ uVar4);
    if (*(int *)(param_2 + 3) == 0) {
      puVar8 = &DAT_149dfb77a;
    }
    else {
      puVar8 = (undefined2 *)param_2[2];
      iVar7 = *(int *)(param_2 + 3) + -1;
    }
    uVar6 = FUN_144a49b4a(iVar7,puVar8);
    uVar5 = FUN_144a78877(uVar5,uVar6);
    iVar7 = FUN_1490d2208((longlong *)(param_1 + 0x98),uVar5,param_2);
    if ((iVar7 != -1) &&
       (lVar9 = (longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 0x98), lVar10 = lVar9 + 0x20,
       lVar10 != 0 && lVar9 != 0)) {
      FUN_1490ca8f6(param_1,lVar10,param_3);
    }
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490c934d FUN_1490c934d body=1334 status=ok
// SIG undefined FUN_1490c934d(void)

void ** FUN_1490c934d(void **param_1,undefined8 *param_2,longlong param_3)

{
  void *pvVar1;
  char cVar2;
  longlong lVar3;
  wchar_t *pwVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined1 auStack_68 [32];
  void *local_48;
  int local_40;
  undefined4 local_3c;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  *param_1 = (void *)0x0;
  iVar6 = *(int *)(param_2 + 1);
  pvVar1 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar6;
  if ((longlong)iVar6 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar6,0);
    memcpy(*param_1,pvVar1,(longlong)iVar6 * 2);
  }
  lVar3 = FUN_1406d0862();
  if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
     (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
      lVar3 + 0x30)) {
    lVar3 = FUN_141167aa0();
    if (((((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) &&
        (((lVar3 = FUN_1458e7584(), lVar3 == 0 ||
          (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)))) &&
       (((lVar3 = FUN_141225dee(), lVar3 == 0 || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))
         ) || (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
               != lVar3 + 0x30)))) {
      lVar3 = FUN_144a85a6c();
      if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
         (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
          lVar3 + 0x30)) {
        lVar3 = FUN_140f5e1c2();
        if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
           (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
            lVar3 + 0x30)) {
          lVar3 = FUN_140654dc2();
          if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(param_3 + 0x38))) &&
             (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
              lVar3 + 0x30)) {
            local_48 = (void *)0x0;
            local_40 = *(int *)(param_1 + 1);
            lVar3 = (longlong)local_40;
            pvVar1 = *param_1;
            if (lVar3 == 0) {
              local_3c = 0;
            }
            else {
              FUN_1446dd670(&local_48,local_40,0);
              memcpy(local_48,pvVar1,lVar3 * 2);
            }
            FUN_140c540b4(&local_48,L"PHYS_",5,0);
            FUN_140c540b4(&local_48,&DAT_14bac1108,3,0);
            if (1 < local_40) {
              FUN_1402980a2(param_1,local_48,local_40 + -1);
            }
            pwVar4 = L"PHYS_";
LAB_1490c96fd:
            FUN_14020fad6(&local_38,pwVar4);
            if (local_48 != (void *)0x0) {
              FUN_1400020a8();
            }
            goto LAB_1490c940e;
          }
          lVar3 = FUN_1402576f0();
          if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
             (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
              lVar3 + 0x30)) {
            lVar3 = FUN_1402d2740();
            if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
               (*(longlong *)(*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
                != lVar3 + 0x30)) {
              lVar3 = FUN_144a7937e();
              if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
                 (*(longlong *)
                   (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                  lVar3 + 0x30)) {
                lVar3 = FUN_140298400();
                if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
                   (*(longlong *)
                     (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                    lVar3 + 0x30)) {
                  lVar3 = FUN_1459e950e();
                  if (((lVar3 != 0) && (*(int *)(lVar3 + 0x38) <= *(int *)(param_3 + 0x38))) &&
                     (*(longlong *)
                       (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) ==
                      lVar3 + 0x30)) {
                    local_48 = (void *)0x0;
                    local_40 = *(int *)(param_1 + 1);
                    lVar3 = (longlong)local_40;
                    pvVar1 = *param_1;
                    if (lVar3 == 0) {
                      local_3c = 0;
                    }
                    else {
                      FUN_1446dd670(&local_48,local_40,0);
                      memcpy(local_48,pvVar1,lVar3 * 2);
                    }
                    FUN_140c540b4(&local_48,L"ABP_",4,0);
                    FUN_140c540b4(&local_48,&DAT_14bac1108,3,0);
                    if (1 < local_40) {
                      FUN_1402980a2(param_1,local_48,local_40 + -1);
                    }
                    pwVar4 = L"ABP_";
                    goto LAB_1490c96fd;
                  }
                  lVar3 = FUN_1411c531a();
                  if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
                     (*(longlong *)
                       (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                      lVar3 + 0x30)) goto LAB_1490c940e;
                  pwVar4 = L"SVT_";
                }
                else {
                  pwVar4 = L"LS_";
                }
              }
              else {
                pwVar4 = L"T_";
              }
            }
            else {
              lVar3 = FUN_1411eefea();
              if (((lVar3 == 0) || (*(int *)(param_3 + 0x38) < *(int *)(lVar3 + 0x38))) ||
                 (*(longlong *)
                   (*(longlong *)(param_3 + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8) !=
                  lVar3 + 0x30)) {
                pwVar4 = L"M_";
              }
              else {
                pwVar4 = L"MI_";
              }
            }
          }
          else {
            pwVar4 = L"AS_";
          }
        }
        else {
          pwVar4 = L"SKEL_";
        }
      }
      else {
        pwVar4 = L"SK_";
      }
    }
    else {
      pwVar4 = L"GR_";
    }
  }
  else {
    pwVar4 = L"SM_";
  }
  FUN_14020fad6(&local_38,pwVar4);
LAB_1490c940e:
  iVar6 = (int)uStack_30 + -1;
  puVar5 = local_38;
  if ((int)uStack_30 == 0) {
    puVar5 = &DAT_149dfb77a;
    iVar6 = 0;
  }
  cVar2 = FUN_144a791f8(param_1,puVar5,iVar6,1);
  if (cVar2 == '\0') {
    FUN_140474144(&local_48,&local_38,param_1);
    if (&local_48 == param_1) {
      if (local_48 != (void *)0x0) {
        FUN_1400020a8();
      }
    }
    else {
      if (*param_1 != (void *)0x0) {
        FUN_1400020a8();
      }
      *param_1 = local_48;
      local_48 = (void *)0x0;
      *(int *)(param_1 + 1) = local_40;
      *(undefined4 *)((longlong)param_1 + 0xc) = local_3c;
    }
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



// FUNCTION 1490c9884 FUN_1490c9884 body=118 status=ok
// SIG undefined FUN_1490c9884(void)

undefined8 * FUN_1490c9884(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  wchar_t wVar2;
  wchar_t *pwVar3;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  wVar2 = L'\"';
  pwVar3 = L"\' ,/.:|&!~\n\r\t@#(){}[]=;^%$`";
  do {
    FUN_144afd20c(param_1,wVar2,0x5f);
    wVar2 = *pwVar3;
    pwVar3 = pwVar3 + 1;
  } while (wVar2 != L'\0');
  return param_1;
}



// FUNCTION 1490c98fa FUN_1490c98fa body=339 status=ok
// SIG undefined FUN_1490c98fa(void)

longlong * FUN_1490c98fa(longlong *param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  if (param_2 != 0) {
    lVar2 = FUN_1402d2740();
    if (((lVar2 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
       (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
        lVar2 + 0x30)) {
      lVar2 = FUN_1406d0862();
      if ((((lVar2 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
          (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)) &&
         (((lVar2 = FUN_144a85a6c(), lVar2 == 0 ||
           (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
          (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
           lVar2 + 0x30)))) {
        lVar2 = FUN_14110cae2();
        if (((lVar2 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
           (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
            lVar2 + 0x30)) {
          lVar2 = FUN_1402576f0();
          if (((lVar2 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
             (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8) !=
              lVar2 + 0x30)) {
            lVar2 = FUN_1411c531a();
            if (((lVar2 == 0) || (*(int *)(param_2 + 0x38) < *(int *)(lVar2 + 0x38))) ||
               (*(longlong *)(*(longlong *)(param_2 + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
                != lVar2 + 0x30)) {
              uVar3 = FUN_1411bc9a6();
              cVar1 = FUN_144a7ff9e(param_2,uVar3);
              if (cVar1 == '\0') goto LAB_1490c99f9;
              lVar2 = FUN_14595e57c();
            }
            else {
              lVar2 = FUN_145b9e65e();
            }
          }
          else {
            lVar2 = FUN_145b9e2b6();
          }
        }
        else {
          lVar2 = FUN_145b9e48a();
        }
      }
      else {
        lVar2 = FUN_145a92154();
      }
    }
    else {
      lVar2 = FUN_145b9e3a0();
    }
    *param_1 = lVar2;
    if ((lVar2 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(lVar2);
    }
    return param_1;
  }
LAB_1490c99f9:
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1490c9a4e FUN_1490c9a4e body=386 status=ok
// SIG undefined FUN_1490c9a4e(void)

bool FUN_1490c9a4e(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined2 *puVar9;
  int *piVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_78 [40];
  undefined8 *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_78;
  plVar1 = (longlong *)(param_1 + 0x138);
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)*param_2;
  }
  iVar6 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar6 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar6,puVar9);
  iVar4 = FUN_1490d2f00(plVar1,uVar3,param_2);
  if (iVar4 != -1) {
    lVar8 = *plVar1;
    lVar7 = (longlong)iVar4;
    piVar2 = *(int **)(lVar8 + 0x10 + lVar7 * 0x28);
    *(undefined8 *)(lVar8 + 0x10 + lVar7 * 0x28) = 0;
    lVar12 = (longlong)*(int *)(lVar8 + 0x18 + lVar7 * 0x28);
    *(undefined4 *)(lVar8 + 0x18 + lVar7 * 0x28) = 0;
    *(undefined4 *)(lVar8 + 0x1c + lVar7 * 0x28) = 0;
    FUN_1490d5da4(plVar1,iVar4);
    if (lVar12 != 0) {
      piVar10 = piVar2;
      do {
        uVar5 = FUN_144a78877(*piVar10,piVar10[1]);
        if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
          lVar8 = *(longlong *)(param_1 + 0x1c8);
          if (*(longlong *)(param_1 + 0x1c8) == 0) {
            lVar8 = param_1 + 0x1c0;
          }
          iVar6 = *(int *)(lVar8 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & uVar5) * 4);
          if (iVar6 != -1) {
            lVar8 = *(longlong *)(param_1 + 0x188);
            do {
              lVar11 = (longlong)iVar6 * 0x20;
              lVar7 = lVar8 + lVar11;
              if ((*(int *)(lVar8 + lVar11) == *piVar10) &&
                 (*(int *)(lVar8 + 4 + lVar11) == piVar10[1])) {
                if (lVar7 + 8 != 0 && lVar7 != 0) {
                  local_50 = param_2;
                  FUN_140c8411c(lVar7 + 8,&local_50);
                }
                break;
              }
              iVar6 = *(int *)(lVar7 + 0x18);
            } while (iVar6 != -1);
          }
        }
        piVar10 = piVar10 + 2;
      } while (piVar10 != piVar2 + lVar12 * 2);
    }
    if (piVar2 != (int *)0x0) {
      FUN_1400020a8(piVar2);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4 != -1;
}



// FUNCTION 1490c9bd2 FUN_1490c9bd2 body=806 status=ok
// SIG undefined FUN_1490c9bd2(void)

void FUN_1490c9bd2(longlong param_1,undefined2 **param_2,undefined2 **param_3,undefined8 param_4)

{
  longlong *plVar1;
  int iVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined2 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined2 **ppuVar11;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 local_a0;
  undefined8 local_90;
  undefined2 *local_88;
  undefined8 uStack_80;
  undefined2 **local_70;
  undefined2 **local_68;
  undefined2 **ppuStack_60;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if ((*param_3 == (undefined2 *)0x0) || (*(int *)(param_2 + 1) < 2)) goto LAB_1490c9c06;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  plVar1 = (longlong *)(param_1 + 0x40);
  iVar6 = *(int *)(param_2 + 1);
  if (iVar6 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *param_2;
  }
  iVar2 = iVar6 + -1;
  if (iVar6 == 0) {
    iVar2 = 0;
  }
  uVar5 = FUN_144a49b4a(iVar2,puVar8);
  iVar6 = FUN_1490d10fe(plVar1,uVar5,param_2);
  if (((iVar6 != -1) &&
      (lVar9 = (longlong)iVar6 * 0x38 + *plVar1, lVar10 = lVar9 + 0x10, lVar10 != 0 && lVar9 != 0))
     && (cVar4 = FUN_144a7afa6(lVar10,param_3), cVar4 == '\0')) {
    FUN_1490c9a4e(param_1,param_2);
  }
  lVar9 = FUN_140081d40(param_3,0);
  if (((lVar9 != 0) &&
      (FUN_1490c98fa(&local_68,*(undefined8 *)(lVar9 + 0x10)), local_68 != (undefined2 **)0x0)) &&
     ((lVar10 = FUN_14595e57c(), lVar10 != 0 &&
      ((*(int *)(lVar10 + 0x38) <= *(int *)(local_68 + 7) &&
       (*(longlong *)(local_68[6] + (longlong)*(int *)(lVar10 + 0x38) * 4) == lVar10 + 0x30)))))) {
    local_70 = local_68;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(local_68);
    }
    lVar9 = FUN_14445c8cc(lVar9,&local_70);
    if (lVar9 != 0) {
      FUN_144a787a6(lVar9 + 0x88,param_2);
    }
  }
  local_68 = param_2;
  ppuStack_60 = param_3;
  FUN_1490d1b86(plVar1,&local_88,&local_68);
  local_68 = param_3;
  ppuStack_60 = param_2;
  FUN_1490d292a(param_1 + 0x98,&local_88,&local_68);
  FUN_1490c91d6(param_1,param_3,param_4);
  FUN_14475cc44(param_3,&local_68);
  local_88 = (undefined2 *)0x0;
  uStack_80 = 0;
  FUN_1401031ac(DAT_14c951640,0,&local_88);
  iVar6 = (int)uStack_80 + -1;
  puVar8 = local_88;
  if ((int)uStack_80 == 0) {
    puVar8 = &DAT_149dfb77a;
    iVar6 = 0;
  }
  cVar4 = FUN_144a791f8(&local_68,puVar8,iVar6,1);
  if (local_88 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_68 != (undefined2 **)0x0) {
    FUN_1400020a8();
  }
  if (cVar4 == '\0') {
    FUN_1490ceb36(param_1 + 0xe8,param_2);
  }
  else {
    local_88 = param_3[1];
    if (local_88 == (undefined2 *)0x0) {
      local_68 = (undefined2 **)0x0;
      ppuStack_60 = (undefined2 **)0x0;
LAB_1490c9e44:
      ppuVar11 = (undefined2 **)&DAT_149dfb77a;
    }
    else {
      FUN_1400021e4(&local_88,&local_68);
      ppuVar11 = local_68;
      if ((int)ppuStack_60 == 0) goto LAB_1490c9e44;
    }
    FUN_1446f470e(&local_90,ppuVar11,1);
    uVar3 = DAT_14c951640;
    uVar7 = FUN_1446f8646();
    local_a0 = 0;
    local_a8 = 0;
    puVar8 = (undefined2 *)FUN_140be85e0(uVar7,uVar3,local_90,0);
    if (local_68 != (undefined2 **)0x0) {
      FUN_1400020a8();
    }
    if (puVar8 != (undefined2 *)0x0) {
      local_88 = puVar8;
      if (DAT_14c950c29 == '\x01') {
        FUN_1456cec3c(puVar8);
      }
      local_68 = param_2;
      ppuStack_60 = &local_88;
      FUN_1490cdfc2(param_1 + 0xe8,local_4c);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
LAB_1490c9c06:
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490c9efa FUN_1490c9efa body=70 status=ok
// SIG undefined FUN_1490c9efa(void)

undefined8 FUN_1490c9efa(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  FUN_14445bf32(param_1,param_2,param_3);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  return param_2;
}



// FUNCTION 1490c9f40 FUN_1490c9f40 body=328 status=ok
// SIG undefined FUN_1490c9f40(void)

undefined8 FUN_1490c9f40(longlong param_1,undefined8 *param_2)

{
  uint uVar1;
  void *_Src;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined2 *puVar7;
  undefined1 auStack_88 [44];
  undefined1 local_5c [4];
  longlong local_58;
  undefined8 uStack_50;
  void *local_48;
  ulonglong uStack_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  iVar4 = *(int *)(param_2 + 1);
  if (iVar4 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_2;
  }
  iVar2 = iVar4 + -1;
  if (iVar4 == 0) {
    iVar2 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar2,puVar7);
  iVar4 = FUN_1490d10fe((longlong *)(param_1 + 0x40),uVar3,param_2);
  if ((iVar4 == -1) || (lVar5 = (longlong)iVar4 * 0x38 + *(longlong *)(param_1 + 0x40), lVar5 == 0))
  {
    local_48 = (void *)0x0;
    uStack_40 = 0;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    local_58 = *(longlong *)(lVar5 + 0x10);
    uStack_50 = *(undefined8 *)(lVar5 + 0x18);
    local_48 = (void *)0x0;
    uVar1 = *(uint *)(lVar5 + 0x28);
    _Src = *(void **)(lVar5 + 0x20);
    uStack_40 = CONCAT44(uStack_40._4_4_,uVar1);
    if ((longlong)(int)uVar1 == 0) {
      uStack_40 = (ulonglong)uVar1;
    }
    else {
      FUN_1446dd670(&local_48,uVar1,0);
      memcpy(local_48,_Src,(longlong)(int)uVar1 * 2);
    }
    if (local_58 != 0) {
      FUN_1449774fc(param_1 + 0x240,local_5c,&local_58,0);
    }
  }
  uVar6 = FUN_1490c8e41(&local_58);
  if (local_48 != (void *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ca08a FUN_1490ca08a body=372 status=ok
// SIG undefined FUN_1490ca08a(void)

longlong * FUN_1490ca08a(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  void *_Src;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  longlong lVar6;
  undefined2 *puVar7;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_98;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  iVar5 = *(int *)(param_3 + 1);
  if (iVar5 == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)*param_3;
  }
  iVar1 = iVar5 + -1;
  if (iVar5 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar7);
  iVar5 = FUN_1490d10fe((longlong *)(param_1 + 0x40),uVar4,param_3);
  if ((iVar5 == -1) || (lVar6 = (longlong)iVar5 * 0x38 + *(longlong *)(param_1 + 0x40), lVar6 == 0))
  {
    param_2[2] = 0;
    param_2[3] = 0;
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    uVar4 = *(undefined4 *)(lVar6 + 0x14);
    uVar2 = *(undefined4 *)(lVar6 + 0x18);
    uVar3 = *(undefined4 *)(lVar6 + 0x1c);
    *(undefined4 *)param_2 = *(undefined4 *)(lVar6 + 0x10);
    *(undefined4 *)((longlong)param_2 + 4) = uVar4;
    *(undefined4 *)(param_2 + 1) = uVar2;
    *(undefined4 *)((longlong)param_2 + 0xc) = uVar3;
    param_2[2] = 0;
    iVar5 = *(int *)(lVar6 + 0x28);
    _Src = *(void **)(lVar6 + 0x20);
    *(int *)(param_2 + 3) = iVar5;
    if ((longlong)iVar5 == 0) {
      *(undefined4 *)((longlong)param_2 + 0x1c) = 0;
    }
    else {
      FUN_1446dd670(param_2 + 2,iVar5,0);
      memcpy((void *)param_2[2],_Src,(longlong)iVar5 * 2);
    }
    if (*param_2 != 0) {
      local_78 = 0;
      uStack_70 = 0;
      local_68 = 0;
      uStack_60 = 0;
      local_50 = *param_3;
      local_48 = *(int *)(param_3 + 1) + -1;
      if (*(int *)(param_3 + 1) == 0) {
        local_48 = 0;
      }
      FUN_14475bf92(&local_78);
      FUN_14700811a(param_1 + 0x240,&local_50,&local_78,0);
      if (local_68 != 0) {
        FUN_1400020a8();
      }
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((local_40 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ca200 FUN_1490ca200 body=430 status=ok
// SIG undefined FUN_1490ca200(void)

undefined8 * FUN_1490ca200(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  longlong lVar1;
  void *_Src;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  undefined2 *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  iVar6 = 0;
  if (*param_3 == 0) {
    lVar7 = 0;
  }
  else {
    FUN_1449774fc(param_1 + 0x240,local_44,param_3,0);
    lVar7 = *param_3;
  }
  lVar1 = param_3[1];
  uVar2 = (uint)((ulonglong)lVar1 >> 0x10);
  uVar10 = (uint)lVar1 & 0xffff;
  uVar3 = (uint)((ulonglong)lVar7 >> 0x10);
  uVar9 = (uint)lVar7 & 0xffff;
  uVar3 = ((uint)lVar7 << 0x10 | uVar9) + (int)((ulonglong)lVar7 >> 0x20) +
          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4);
  uVar4 = FUN_144a78877(0,(uVar3 >> 2) +
                          ((uint)lVar1 << 0x10 | uVar10) + (int)((ulonglong)lVar1 >> 0x20) +
                          (uVar2 << 0x13 | uVar2 & 0xffff) + uVar3 * 0x40 + (uVar10 >> 4) +
                          0x9e3779b9 ^ uVar3);
  if ((int)param_3[3] == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)param_3[2];
    iVar6 = (int)param_3[3] + -1;
  }
  uVar5 = FUN_144a49b4a(iVar6,puVar8);
  uVar4 = FUN_144a78877(uVar4,uVar5);
  iVar6 = FUN_1490d2208((longlong *)(param_1 + 0x98),uVar4,param_3);
  if ((iVar6 == -1) || (lVar7 = (longlong)iVar6 * 0x38 + *(longlong *)(param_1 + 0x98), lVar7 == 0))
  {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    *param_2 = 0;
    iVar6 = *(int *)(lVar7 + 0x28);
    _Src = *(void **)(lVar7 + 0x20);
    *(int *)(param_2 + 1) = iVar6;
    if ((longlong)iVar6 == 0) {
      *(undefined4 *)((longlong)param_2 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(param_2,iVar6,0);
      memcpy((void *)*param_2,_Src,(longlong)iVar6 * 2);
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490ca3b0 FUN_1490ca3b0 body=267 status=ok
// SIG undefined FUN_1490ca3b0(void)

ulonglong FUN_1490ca3b0(longlong param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar9 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar8 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar8) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar8 >> 4);
  iVar10 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar9) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(param_2 + 3) == 0) {
    puVar7 = &DAT_149dfb77a;
  }
  else {
    puVar7 = (undefined2 *)param_2[2];
    iVar10 = *(int *)(param_2 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar10,puVar7);
  uVar5 = FUN_144a78877(uVar5,uVar6);
  iVar10 = FUN_1490d2208(param_1 + 0x98,uVar5,param_2);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  return CONCAT71((int7)((ulonglong)(param_1 + 0x98) >> 8),iVar10 != -1) & 0xffffffff;
}



// FUNCTION 1490ca4bc FUN_1490ca4bc body=51 status=ok
// SIG undefined FUN_1490ca4bc(void)

int FUN_1490ca4bc(longlong param_1)

{
  int iVar1;
  int iVar2;
  
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  iVar1 = *(int *)(param_1 + 0x48);
  iVar2 = *(int *)(param_1 + 0x74);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  return iVar1 - iVar2;
}



// FUNCTION 1490ca4f0 FUN_1490ca4f0 body=103 status=ok
// SIG undefined FUN_1490ca4f0(void)

undefined8 * FUN_1490ca4f0(longlong param_1,undefined8 *param_2)

{
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  param_2[4] = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  FUN_1490cd0b6(param_2,param_1 + 0x40);
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  return param_2;
}



// FUNCTION 1490ca558 FUN_1490ca558 body=492 status=ok
// SIG undefined FUN_1490ca558(void)

undefined8 * FUN_1490ca558(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_c8 [40];
  undefined8 local_a0;
  longlong *local_98;
  undefined8 local_90;
  undefined8 *local_88;
  uint local_80;
  int iStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  longlong local_70;
  undefined8 *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  param_2[4] = 0;
  iVar7 = 0;
  *(undefined4 *)(param_2 + 5) = 0;
  *param_2 = 0;
  param_2[1] = 0;
  *(undefined8 *)((longlong)param_2 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_2 + 0x34) = 0;
  param_2[8] = 0;
  *(undefined4 *)(param_2 + 9) = 0;
  uVar6 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74);
  if (uVar6 != 0) {
    if ((int)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar6);
    }
    FUN_1490d2bb2(param_2,uVar6);
    iVar4 = 1;
    if (3 < uVar6) {
      uVar6 = (uVar6 | 1) + 0xe;
      iVar4 = 0x1f;
      if (uVar6 != 0) {
        for (; uVar6 >> iVar4 == 0; iVar4 = iVar4 + -1) {
        }
      }
      iVar4 = 1 << ((byte)iVar4 & 0x1f);
    }
    if ((*(int *)(param_2 + 9) == 0) || (*(int *)(param_2 + 9) < iVar4)) {
      *(int *)(param_2 + 9) = iVar4;
      FUN_14802505c(param_2);
    }
  }
  plVar1 = (longlong *)(param_1 + 0x40);
  puVar2 = (undefined8 *)(param_1 + 0x50);
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  iStack_5c = 0;
  local_58 = 0;
  local_68 = puVar2;
  if (*(int *)(param_1 + 0x68) != 0) {
    FUN_1449c0562(&local_70);
    iVar7 = *(int *)(param_1 + 0x68);
  }
  local_80 = local_60;
  iStack_7c = iStack_5c;
  local_78 = local_58;
  local_74 = local_54;
  local_90 = local_70;
  local_88 = local_68;
  local_98 = plVar1;
  if ((iStack_5c != iVar7) || (local_68 != puVar2)) {
    do {
      lVar3 = *local_98;
      lVar5 = (longlong)iStack_7c;
      local_a0 = FUN_140081d40(lVar3 + lVar5 * 0x38 + 0x10,0);
      local_68 = &local_a0;
      local_70 = lVar3 + lVar5 * 0x38;
      FUN_1490d2d50(param_2,local_4c);
      local_80 = local_80 & ~local_90._4_4_;
      FUN_1449c0562(&local_90);
    } while (local_98 != plVar1 || (local_88 != puVar2 || iStack_7c != iVar7));
  }
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ca746 FUN_1490ca746 body=430 status=ok
// SIG undefined FUN_1490ca746(void)

ulonglong FUN_1490ca746(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  undefined1 auStack_88 [32];
  undefined1 local_68 [16];
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar8 = 0;
  if (param_3 != 0 && param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
    FUN_1400bbfc4(local_68,param_2);
    uVar7 = (uint)local_68._8_8_ & 0xffff;
    uVar6 = (uint)local_68._0_8_ & 0xffff;
    uVar6 = ((uint)local_68._0_8_ << 0x10 | uVar6) + SUB84(local_68._0_8_,4) +
            (SUB84(local_68._0_8_,2) << 0x13 | SUB84(local_68._0_8_,2) & 0xffff) + (uVar6 >> 4);
    uVar1 = FUN_144a78877(0,(uVar6 >> 2) +
                            ((uint)local_68._8_8_ << 0x10 | uVar7) + SUB84(local_68._8_8_,4) +
                            (SUB84(local_68._8_8_,2) << 0x13 | SUB84(local_68._8_8_,2) & 0xffff) +
                            (uVar7 >> 4) + uVar6 * 0x40 + 0x9e3779b9 ^ uVar6);
    puVar5 = local_58;
    if (local_50 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    uVar4 = (ulonglong)(local_50 - 1);
    if (local_50 == 0) {
      uVar4 = uVar8;
    }
    uVar2 = FUN_144a49b4a(uVar4,puVar5);
    uVar1 = FUN_144a78877(uVar1,uVar2);
    iVar3 = FUN_1490d2208((longlong *)(param_1 + 0x98),uVar1,local_68);
    if (iVar3 != -1) {
      uVar8 = (longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x98);
    }
    lVar9 = uVar8 + 0x20;
    if (uVar8 == 0) {
      lVar9 = 0;
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar9 == 0) || (*(int *)(lVar9 + 8) < 2)) {
      uVar8 = 0;
    }
    else {
      FUN_1490ca8f6(param_1,lVar9,param_3);
      uVar8 = CONCAT71((int7)(uVar8 >> 8),1);
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8 & 0xffffffff;
}



// FUNCTION 1490ca8f6 FUN_1490ca8f6 body=339 status=ok
// SIG undefined FUN_1490ca8f6(void)

void FUN_1490ca8f6(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  void *_Src;
  int iVar4;
  undefined4 uVar5;
  longlong *plVar6;
  undefined2 *puVar7;
  longlong lVar8;
  undefined1 auStack_58 [32];
  ulonglong local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  if (1 < *(int *)(param_2 + 1)) {
    local_30 = 0;
    FUN_14485c47a(&local_30,param_3);
    local_38 = local_30;
    iVar2 = *(int *)(param_2 + 1);
    if (iVar2 == 0) {
      puVar7 = &DAT_149dfb77a;
    }
    else {
      puVar7 = (undefined2 *)*param_2;
    }
    iVar4 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar4 = 0;
    }
    uVar5 = FUN_144a49b4a(iVar4,puVar7);
    plVar6 = (longlong *)FUN_1490d560e(param_1 + 0x138,uVar5,param_2);
    iVar2 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
      FUN_1490d48d6(plVar6,iVar2);
    }
    *(ulonglong *)(*plVar6 + (longlong)iVar2 * 8) = local_38;
    uVar5 = FUN_144a78877(local_38,local_38 >> 0x20);
    plVar6 = (longlong *)FUN_1490d58f6(param_1 + 0x188,uVar5,&local_38);
    iVar2 = (int)plVar6[1];
    *(uint *)(plVar6 + 1) = iVar2 + 1U;
    if (*(uint *)((longlong)plVar6 + 0xc) < iVar2 + 1U) {
      FUN_1447a1bd6(plVar6,iVar2);
    }
    lVar3 = *plVar6;
    lVar8 = (longlong)iVar2 * 0x10;
    puVar1 = (undefined8 *)(lVar3 + lVar8);
    *(undefined8 *)(lVar3 + lVar8) = 0;
    iVar2 = *(int *)(param_2 + 1);
    _Src = (void *)*param_2;
    *(int *)(lVar3 + 8 + lVar8) = iVar2;
    if ((longlong)iVar2 == 0) {
      *(undefined4 *)((longlong)puVar1 + 0xc) = 0;
    }
    else {
      FUN_1446dd670(puVar1,iVar2,0);
      memcpy((void *)*puVar1,_Src,(longlong)iVar2 * 2);
    }
  }
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490caa4a FUN_1490caa4a body=715 status=ok
// SIG undefined FUN_1490caa4a(void)

ulonglong FUN_1490caa4a(longlong param_1,longlong param_2,longlong param_3)

{
  uint3 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined2 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  uint uVar16;
  uint uVar17;
  int *piVar18;
  undefined1 auStack_98 [40];
  int local_70;
  int local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  uVar15 = 0;
  if (param_3 != 0 && param_2 != 0) {
    AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
    FUN_1400bbfc4(&local_68,param_2);
    uVar8 = (uint)((ulonglong)local_60 >> 0x10);
    uVar17 = (uint)local_60 & 0xffff;
    uVar4 = (uint)((ulonglong)local_68 >> 0x10);
    uVar16 = (uint)local_68 & 0xffff;
    uVar4 = ((uint)local_68 << 0x10 | uVar16) + (int)((ulonglong)local_68 >> 0x20) +
            (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar16 >> 4);
    uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                            ((uint)local_60 << 0x10 | uVar17) + (int)((ulonglong)local_60 >> 0x20) +
                            (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar17 >> 4) + uVar4 * 0x40 +
                            0x9e3779b9 ^ uVar4);
    puVar13 = local_58;
    if (local_50 == 0) {
      puVar13 = &DAT_149dfb77a;
    }
    uVar11 = (ulonglong)(local_50 - 1);
    if (local_50 == 0) {
      uVar11 = uVar15;
    }
    uVar6 = FUN_144a49b4a(uVar11,puVar13);
    uVar5 = FUN_144a78877(uVar5,uVar6);
    iVar7 = FUN_1490d2208((longlong *)(param_1 + 0x98),uVar5,&local_68);
    if (iVar7 != -1) {
      uVar15 = (longlong)iVar7 * 0x38 + *(longlong *)(param_1 + 0x98);
    }
    piVar18 = (int *)(uVar15 + 0x20);
    if (uVar15 == 0) {
      piVar18 = (int *)0x0;
    }
    if (local_58 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((piVar18 == (int *)0x0) || (piVar18[2] < 2)) {
      uVar15 = 0;
    }
    else {
      local_68 = (int *)0x0;
      FUN_14485c47a(&local_68,param_3);
      piVar3 = local_68;
      iVar7 = (int)local_68;
      iVar2 = local_68._4_4_;
      local_70 = (int)local_68;
      local_6c = local_68._4_4_;
      uVar8 = FUN_144a78877((ulonglong)local_68 & 0xffffffff,local_68._4_4_);
      if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
        lVar12 = param_1 + 0x1c0;
        if (*(longlong *)(param_1 + 0x1c8) != 0) {
          lVar12 = *(longlong *)(param_1 + 0x1c8);
        }
        iVar9 = *(int *)(lVar12 + (ulonglong)(*(int *)(param_1 + 0x1d0) - 1U & uVar8) * 4);
        if (iVar9 != -1) {
          lVar12 = *(longlong *)(param_1 + 0x188);
          do {
            lVar14 = (longlong)iVar9 * 0x20;
            lVar10 = lVar12 + lVar14;
            if ((*(int *)(lVar12 + lVar14) == iVar7) && (*(int *)(lVar12 + 4 + lVar14) == iVar2))
            goto LAB_1490cac4f;
            iVar9 = *(int *)(lVar10 + 0x18);
          } while (iVar9 != -1);
        }
      }
      lVar10 = 0;
LAB_1490cac4f:
      lVar12 = lVar10 + 8;
      if (lVar10 == 0) {
        lVar12 = 0;
      }
      uVar1 = (uint3)((ulonglong)piVar3 >> 8);
      uVar15 = (ulonglong)CONCAT31(uVar1,lVar12 != 0);
      if (lVar12 != 0) {
        local_68 = piVar18;
        FUN_140c8411c();
      }
      iVar7 = piVar18[2];
      if (iVar7 == 0) {
        puVar13 = &DAT_149dfb77a;
      }
      else {
        puVar13 = *(undefined2 **)piVar18;
      }
      iVar2 = iVar7 + -1;
      if (iVar7 == 0) {
        iVar2 = 0;
      }
      uVar5 = FUN_144a49b4a(iVar2,puVar13);
      iVar7 = FUN_1490d2f00((longlong *)(param_1 + 0x138),uVar5,piVar18);
      if ((iVar7 != -1) &&
         (lVar12 = *(longlong *)(param_1 + 0x138) + (longlong)iVar7 * 0x28,
         lVar12 != -0x10 && lVar12 != 0)) {
        local_68 = &local_70;
        FUN_1490d2fcc();
        uVar15 = CONCAT71((uint7)uVar1,1);
      }
    }
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15;
}



// FUNCTION 1490cad16 FUN_1490cad16 body=404 status=ok
// SIG undefined FUN_1490cad16(void)

ulonglong FUN_1490cad16(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  ulonglong uVar4;
  undefined2 *puVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  undefined2 *local_50;
  int local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  uVar6 = 0;
  if (param_2 != 0) {
    FUN_1400bbfc4(local_60,param_2);
    uVar8 = (uint)local_60._8_8_ & 0xffff;
    uVar7 = (uint)local_60._0_8_ & 0xffff;
    uVar7 = ((uint)local_60._0_8_ << 0x10 | uVar7) + SUB84(local_60._0_8_,4) +
            (SUB84(local_60._0_8_,2) << 0x13 | SUB84(local_60._0_8_,2) & 0xffff) + (uVar7 >> 4);
    uVar1 = FUN_144a78877(0,(uVar7 >> 2) +
                            ((uint)local_60._8_8_ << 0x10 | uVar8) + SUB84(local_60._8_8_,4) +
                            (SUB84(local_60._8_8_,2) << 0x13 | SUB84(local_60._8_8_,2) & 0xffff) +
                            (uVar8 >> 4) + uVar7 * 0x40 + 0x9e3779b9 ^ uVar7);
    puVar5 = local_50;
    if (local_48 == 0) {
      puVar5 = &DAT_149dfb77a;
    }
    uVar4 = (ulonglong)(local_48 - 1);
    if (local_48 == 0) {
      uVar4 = uVar6;
    }
    uVar2 = FUN_144a49b4a(uVar4,puVar5);
    uVar1 = FUN_144a78877(uVar1,uVar2);
    iVar3 = FUN_1490d2208((longlong *)(param_1 + 0x98),uVar1,local_60);
    if (iVar3 != -1) {
      uVar6 = (longlong)iVar3 * 0x38 + *(longlong *)(param_1 + 0x98);
    }
    lVar9 = uVar6 + 0x20;
    if (uVar6 == 0) {
      lVar9 = 0;
    }
    if (local_50 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
    if ((lVar9 == 0) || (*(int *)(lVar9 + 8) < 2)) {
      uVar6 = 0;
    }
    else {
      uVar7 = FUN_1490c9a4e(param_1,lVar9);
      uVar6 = (ulonglong)uVar7;
    }
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar6;
}



// FUNCTION 1490caeac FUN_1490caeac body=416 status=ok
// SIG undefined FUN_1490caeac(void)

ulonglong FUN_1490caeac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  ulonglong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_88 [32];
  undefined8 *local_68;
  ulonglong uStack_60;
  undefined8 *local_58;
  undefined8 **local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 == 0) {
    uVar9 = 0;
    goto LAB_1490caed2;
  }
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  local_68 = (undefined8 *)0x0;
  FUN_14485c47a(&local_68,param_2);
  local_58 = local_68;
  plVar1 = (longlong *)(param_1 + 0x188);
  local_68 = (undefined8 *)0x0;
  uStack_60 = 0;
  FUN_1490d3122(plVar1,&local_50,&local_58);
  lVar5 = (longlong)(int)local_50;
  uVar9 = CONCAT71((int7)((ulonglong)&local_50 >> 8),lVar5 != -1);
  if (lVar5 != -1) {
    FUN_1410e5bda(&local_68,*plVar1 + lVar5 * 0x20 + 8);
    FUN_1490d31a2(plVar1,(ulonglong)local_50 & 0xffffffff);
    puVar10 = local_68;
    if ((longlong)(int)uStack_60 == 0) goto LAB_1490caf68;
    lVar5 = (longlong)(int)uStack_60 << 4;
    do {
      puVar8 = &DAT_149dfb77a;
      iVar4 = 0;
      if (*(int *)(puVar10 + 1) != 0) {
        puVar8 = (undefined2 *)*puVar10;
        iVar4 = *(int *)(puVar10 + 1) + -1;
      }
      uVar3 = FUN_144a49b4a(iVar4,puVar8);
      iVar4 = FUN_1490d2f00((longlong *)(param_1 + 0x138),uVar3,puVar10);
      if ((iVar4 != -1) &&
         (lVar2 = *(longlong *)(param_1 + 0x138) + (longlong)iVar4 * 0x28, lVar6 = lVar2 + 0x10,
         lVar6 != 0 && lVar2 != 0)) {
        local_50 = &local_58;
        FUN_1490d2fcc(lVar6,&local_50);
      }
      puVar10 = puVar10 + 2;
      lVar5 = lVar5 + -0x10;
    } while (lVar5 != 0);
    uVar7 = uStack_60 & 0xffffffff;
    puVar10 = local_68;
  }
  else {
    puVar10 = (undefined8 *)0x0;
LAB_1490caf68:
    uVar7 = 0;
  }
  FUN_1447a1747(puVar10,uVar7);
  if (local_68 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
LAB_1490caed2:
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cb04e FUN_1490cb04e body=152 status=ok
// SIG undefined FUN_1490cb04e(void)

ulonglong FUN_1490cb04e(longlong param_1)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if (*(int *)(param_1 + 0x1bc) < *(int *)(param_1 + 400)) {
    uVar1 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),
                     *(int *)(param_1 + 0x16c) < *(int *)(param_1 + 0x140));
  }
  else {
    uVar1 = 0;
  }
  if (*(int *)(param_1 + 400) != *(int *)(param_1 + 0x1bc)) {
    FUN_1490d32b8(param_1 + 0x188);
    FUN_1490d33fc(param_1 + 0x188);
  }
  if (*(int *)(param_1 + 0x140) != *(int *)(param_1 + 0x16c)) {
    FUN_1490d3530(param_1 + 0x138);
    FUN_1490d3674(param_1 + 0x138);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  return uVar1 & 0xffffffff;
}



// FUNCTION 1490cb0e6 FUN_1490cb0e6 body=186 status=ok
// SIG undefined FUN_1490cb0e6(void)

void FUN_1490cb0e6(longlong param_1,longlong param_2,char param_3)

{
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  local_40 = 0;
  if (param_2 != 0) {
    local_38 = 0;
    FUN_14485c47a(&local_38,param_2);
    local_40 = local_38;
  }
  if (param_3 == '\0') {
    FUN_147db66f0(param_1 + 0x1d8,&local_40);
  }
  else {
    FUN_1490d37aa(param_1 + 0x1d8,&local_38,&local_40,0);
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cb1a2 FUN_1490cb1a2 body=262 status=ok
// SIG undefined FUN_1490cb1a2(void)

ulonglong FUN_1490cb1a2(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  ulonglong unaff_RBP;
  int iVar6;
  bool bVar7;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  AcquireSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  if (param_2 == 0) {
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    local_40 = 0;
    FUN_14485c47a(&local_40,param_2);
    iVar5 = (int)local_40;
    iVar6 = local_40._4_4_;
  }
  uVar1 = FUN_144a78877(iVar5,iVar6);
  if (*(int *)(param_1 + 0x1e0) != *(int *)(param_1 + 0x20c)) {
    lVar3 = param_1 + 0x210;
    if (*(longlong *)(param_1 + 0x218) != 0) {
      lVar3 = *(longlong *)(param_1 + 0x218);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)(*(int *)(param_1 + 0x220) - 1U & uVar1) * 4);
    if (iVar2 != -1) {
      lVar3 = *(longlong *)(param_1 + 0x1d8);
      do {
        lVar4 = (longlong)iVar2 * 0x10;
        bVar7 = *(int *)(lVar3 + 4 + lVar4) == iVar6 && *(int *)(lVar3 + lVar4) == iVar5;
        unaff_RBP = CONCAT71((int7)(unaff_RBP >> 8),bVar7);
        if (bVar7) break;
        iVar2 = *(int *)(lVar4 + lVar3 + 8);
      } while (iVar2 != -1);
      goto LAB_1490cb215;
    }
  }
  unaff_RBP = 0;
LAB_1490cb215:
  ReleaseSRWLockShared((PSRWLOCK)(param_1 + 0x238));
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBP & 0xffffffff;
}



// FUNCTION 1490cb2b2 FUN_1490cb2b2 body=591 status=ok
// SIG undefined FUN_1490cb2b2(void)

void FUN_1490cb2b2(longlong param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined1 local_88 [16];
  undefined2 *local_78;
  int local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *local_58;
  ulonglong uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  local_58 = (undefined8 *)0x0;
  uStack_50 = 0;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  FUN_14445c41a(param_1);
  FUN_1446f470e(&local_60,L"AssetRegistry",1);
  uVar5 = FUN_144a52528();
  plVar6 = (longlong *)FUN_1401e3324(uVar5,local_60);
  plVar6 = (longlong *)(**(code **)(*plVar6 + 0x40))(plVar6);
  if (*(int *)(param_1 + 0x30) == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = *(undefined2 **)(param_1 + 0x28);
  }
  FUN_1446f470e(&local_68,puVar8,1);
  local_98 = 0;
  cVar1 = (**(code **)(*plVar6 + 0x20))(plVar6,local_68,&local_58,1);
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  uVar7 = uStack_50 & 0xffffffff;
  if (cVar1 != '\0') {
    if ((int)uStack_50 == 0) {
      uVar7 = 0;
    }
    else {
      lVar12 = (longlong)(int)uStack_50 * 0x70;
      puVar10 = local_58;
      do {
        FUN_1468fc08c(local_88,*puVar10,puVar10[2]);
        uVar11 = (uint)local_88._8_8_ & 0xffff;
        uVar9 = (uint)local_88._0_8_ & 0xffff;
        uVar9 = ((uint)local_88._0_8_ << 0x10 | uVar9) + SUB84(local_88._0_8_,4) +
                (SUB84(local_88._0_8_,2) << 0x13 | SUB84(local_88._0_8_,2) & 0xffff) + (uVar9 >> 4);
        uVar2 = FUN_144a78877(0,(uVar9 >> 2) +
                                ((uint)local_88._8_8_ << 0x10 | uVar11) + SUB84(local_88._8_8_,4) +
                                (SUB84(local_88._8_8_,2) << 0x13 | SUB84(local_88._8_8_,2) & 0xffff)
                                + (uVar11 >> 4) + uVar9 * 0x40 + 0x9e3779b9 ^ uVar9);
        puVar8 = &DAT_149dfb77a;
        if (local_70 != 0) {
          puVar8 = local_78;
        }
        iVar4 = local_70 + -1;
        if (local_70 == 0) {
          iVar4 = 0;
        }
        uVar3 = FUN_144a49b4a(iVar4,puVar8);
        uVar2 = FUN_144a78877(uVar2,uVar3);
        iVar4 = FUN_1490d2208(param_1 + 0x98,uVar2,local_88);
        if (local_78 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        if (iVar4 == -1) {
          FUN_14445f450(param_1,puVar10);
        }
        puVar10 = puVar10 + 0xe;
        lVar12 = lVar12 + -0x70;
      } while (lVar12 != 0);
      uVar7 = uStack_50 & 0xffffffff;
    }
  }
  FUN_140195631(local_58,uVar7);
  if (local_58 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cb502 FUN_1490cb502 body=579 status=ok
// SIG undefined FUN_1490cb502(void)

void FUN_1490cb502(longlong param_1,undefined8 *param_2,longlong *param_3)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined1 auStack_98 [32];
  longlong local_78 [3];
  int local_60;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (1 < (int)param_3[1]) {
    local_48 = 0;
    uStack_40 = 0;
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    local_78[2] = *param_3;
    local_60 = (int)param_3[1] + -1;
    FUN_14475bf92(&local_48);
    FUN_1468fc08c(local_78 + 2,*param_2,param_2[2]);
    cVar2 = FUN_1490ca3b0(param_1,&local_48);
    if (cVar2 == '\0') {
      if (local_78[2] == 0) {
        local_78[0] = 0;
        local_78[1] = 0;
      }
      else {
        FUN_140ba791a(local_78 + 2,local_78);
      }
      iVar6 = 0;
      if (*(int *)(param_1 + 0x30) == 0) {
        puVar7 = &DAT_149dfb77a;
      }
      else {
        puVar7 = *(undefined2 **)(param_1 + 0x28);
        iVar6 = *(int *)(param_1 + 0x30) + -1;
      }
      cVar2 = FUN_144a791f8(local_78,puVar7,iVar6,1);
      if (cVar2 != '\0') {
        FUN_14445f450(param_1,param_2);
      }
      if (local_78[0] != 0) {
        FUN_1400020a8();
      }
    }
    else {
      AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
      lVar8 = param_1 + 0x240;
      uVar1 = (uint)((ulonglong)uStack_40 >> 0x10);
      uVar10 = (uint)uStack_40 & 0xffff;
      uVar3 = (uint)((ulonglong)local_48 >> 0x10);
      uVar9 = (uint)local_48 & 0xffff;
      uVar3 = ((uint)local_48 << 0x10 | uVar9) + (int)((ulonglong)local_48 >> 0x20) +
              (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar9 >> 4);
      uVar4 = FUN_144a78877(0,(uVar3 >> 2) +
                              ((uint)uStack_40 << 0x10 | uVar10) +
                              (int)((ulonglong)uStack_40 >> 0x20) + (uVar1 << 0x13 | uVar1 & 0xffff)
                              + (uVar10 >> 4) + uVar3 * 0x40 + 0x9e3779b9 ^ uVar3);
      iVar6 = (int)uStack_30 + -1;
      puVar7 = local_38;
      if ((int)uStack_30 == 0) {
        iVar6 = 0;
        puVar7 = &DAT_149dfb77a;
      }
      uVar5 = FUN_144a49b4a(iVar6,puVar7);
      uVar4 = FUN_144a78877(uVar4,uVar5);
      iVar6 = FUN_1403af82c(lVar8,uVar4,&local_48);
      FUN_147008394(lVar8,&local_48);
      if (iVar6 != -1) {
        FUN_1449774fc(lVar8,local_78,local_78 + 2,0);
      }
      ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
    }
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    if (local_38 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490cb746 FUN_1490cb746 body=225 status=ok
// SIG undefined FUN_1490cb746(void)

void FUN_1490cb746(undefined8 param_1)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined ***pppuVar4;
  undefined1 auStack_a8 [32];
  code **local_88;
  undefined8 local_80;
  undefined1 local_78 [8];
  longlong *local_70;
  code *local_68 [2];
  undefined ***local_58;
  undefined **local_48;
  undefined8 local_40;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  FUN_1446e0b6e();
  FUN_14445c41a(param_1);
  local_80 = 0;
  FUN_14485c47a(&local_80,param_1);
  uVar2 = local_80;
  uVar3 = FUN_1401cb356();
  local_88 = local_68;
  local_58 = (undefined ***)0x0;
  local_48 = &PTR_LAB_14bac2bc0;
  local_40 = uVar2;
  local_68[0] = FUN_1444648ee;
  FUN_1401cbba4(uVar3,local_78,
                L".\\../Plugins/Runtime/USDCore/Source/USDClasses/Private/USDAssetCache3.cpp(1150)",
                0);
  if (local_70 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_70 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_70 + 0x10))();
    }
  }
  if (local_68[0] != (code *)0x0) {
    pppuVar4 = local_58;
    if (local_58 == (undefined ***)0x0) {
      pppuVar4 = &local_48;
    }
    (*(code *)(*pppuVar4)[2])();
  }
  if ((local_20 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cb828 FUN_1490cb828 body=207 status=ok
// SIG undefined FUN_1490cb828(void)

void FUN_1490cb828(longlong param_1,longlong param_2)

{
  undefined1 auStack_1d8 [40];
  undefined **local_1b0;
  longlong local_1a8;
  undefined ***local_1a0;
  undefined8 **local_198;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1d8;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  local_198 = &local_1a0;
  local_1b0 = &PTR_FUN_149e37810;
  local_1a0 = &local_1b0;
  local_1a8 = param_2;
  switchD_143c3d4dc::caseD_20(param_1);
  if ((*(byte *)(param_2 + 0x29) & 1) == 0) {
    FUN_1490d4182(param_2,param_1 + 0x138);
    FUN_1490d4b3a(param_2,param_1 + 0x188);
    FUN_1490d520e(param_2,param_1 + 0x1d8);
    FUN_1490cff4a(param_2,param_1 + 0x240);
  }
  if ((local_20 ^ (ulonglong)auStack_1d8) == DAT_14c707940) {
                    /* WARNING: Could not recover jumptable at 0x0001490cb8aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cb8f8 FUN_1490cb8f8 body=274 status=ok
// SIG undefined FUN_1490cb8f8(void)

void FUN_1490cb8f8(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined8 *local_58;
  undefined4 local_50;
  undefined1 local_48 [8];
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_88;
  AcquireSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((*(char *)(param_1 + 0x90) == '\x01') && (*(char *)(param_1 + 0x230) == '\0')) {
    uVar3 = FUN_1401cb356();
    local_58 = (undefined8 *)0x0;
    local_50 = 0;
    FUN_1446efa72(&local_58,0,2,0x10);
    puVar2 = local_58;
    local_50 = 2;
    *local_58 = &PTR_LAB_149e02020;
    uVar4 = FUN_144a3f946();
    puVar2[2] = uVar4;
    *puVar2 = &PTR_FUN_14bac2be0;
    puVar2[3] = param_1;
    local_68 = 0;
    FUN_1405f67fc(uVar3,local_48,&local_58,L"UUsdAssetCache3_RequestDelayedAssetAutoCleanup_Lambda")
    ;
    if (local_40 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)local_40 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_40 + 0x10))();
      }
    }
    FUN_1449db362(&local_58);
    *(undefined1 *)(param_1 + 0x230) = 1;
  }
  ReleaseSRWLockExclusive((PSRWLOCK)(param_1 + 0x238));
  if ((local_38 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cba0c FUN_1490cba0c body=325 status=ok
// SIG undefined FUN_1490cba0c(void)

longlong FUN_1490cba0c(void)

{
  longlong lVar1;
  undefined8 uVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_b8 [32];
  undefined1 local_98;
  undefined8 local_90;
  longlong local_88 [2];
  longlong local_78;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar1 = FUN_145b9e748();
  lVar4 = *(longlong *)(lVar1 + 0x110);
  if (lVar4 == 0) {
    FUN_140aa6c08(lVar1);
    lVar4 = *(longlong *)(lVar1 + 0x110);
    if (lVar4 != 0) goto LAB_1490cba53;
  }
  else {
LAB_1490cba53:
    FUN_1446f470e(&local_90,L"AssetRegistry",1);
    uVar2 = FUN_144a52528();
    plVar3 = (longlong *)FUN_1401e3324(uVar2,local_90);
    plVar3 = (longlong *)(**(code **)(*plVar3 + 0x40))(plVar3);
    local_98 = 1;
    (**(code **)(*plVar3 + 0x98))(plVar3,local_88,lVar4 + 0x70,0);
    if ((local_88[0] != 0) && (local_78 != 0)) {
      lVar4 = FUN_140081d40(lVar4 + 0x70,0);
      if (lVar4 != 0) {
        lVar1 = FUN_14590a468();
        if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
           (*(longlong *)
             (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) +
             (longlong)*(int *)(lVar1 + 0x38) * 8) == lVar1 + 0x30)) {
          FUN_14128b0c2(local_88);
          goto LAB_1490cbaf7;
        }
      }
    }
    FUN_14128b0c2(local_88);
  }
  uVar2 = DAT_14c868730;
  DAT_14c868730 = 0;
  lVar4 = FUN_1490cbb52(DAT_14c951640);
  DAT_14c868730 = uVar2;
LAB_1490cbaf7:
  if ((local_18 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cbb52 FUN_1490cbb52 body=175 status=ok
// SIG undefined FUN_1490cbb52(void)

undefined8 FUN_1490cbb52(undefined8 param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  FUN_14058b40c(param_1,
                L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
               );
  local_b8 = FUN_14590a468();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_b0 = param_1;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_20 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cbc02 FUN_1490cbc02 body=106 status=ok
// SIG undefined FUN_1490cbc02(void)

longlong FUN_1490cbc02(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = FUN_145b9e748();
  lVar2 = *(longlong *)(lVar1 + 0x110);
  if (lVar2 == 0) {
    FUN_140aa6c08(lVar1);
    lVar2 = *(longlong *)(lVar1 + 0x110);
    if (lVar2 == 0) {
      return 0;
    }
  }
  if (*param_1 == '\x01') {
    if (param_1[1] == '\0') {
      lVar2 = lVar2 + 0x220;
    }
    else {
      lVar2 = lVar2 + 0x260;
    }
  }
  else if (param_1[1] == '\0') {
    lVar2 = lVar2 + 0x200;
  }
  else {
    lVar2 = lVar2 + 0x240;
  }
  return lVar2;
}



// FUNCTION 1490cbc6c FUN_1490cbc6c body=290 status=ok
// SIG undefined FUN_1490cbc6c(void)

undefined8 FUN_1490cbc6c(char *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined2 *puVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined2 *local_40;
  int local_38;
  undefined8 local_30;
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar1 = FUN_1490cbc02();
  if (lVar1 != 0) {
    uVar3 = 0;
    lVar1 = FUN_140081d40(lVar1,0);
    if (lVar1 == 0) goto LAB_1490cbcc5;
    lVar2 = FUN_1402d2740();
    if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8)
        == lVar2 + 0x30)) {
      pwVar6 = L"_TwoSided";
      if (param_1[1] == '\0') {
        pwVar6 = L"";
      }
      pwVar5 = L"_Translucent";
      if (*param_1 == '\0') {
        pwVar5 = L"";
      }
      FUN_140002266(&local_40,L"DisplayColor%s%s",pwVar5,pwVar6);
      puVar4 = &DAT_149dfb77a;
      if (local_38 != 0) {
        puVar4 = local_40;
      }
      FUN_1446f470e(&local_30,puVar4,1);
      uVar3 = FUN_14129edf0();
      local_48 = 0;
      FUN_140af9fb2(&local_28,DAT_14c951640,uVar3,local_30);
      if (local_40 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      uVar3 = FUN_14090ceee(lVar1,DAT_14c951640,local_28);
      goto LAB_1490cbcc5;
    }
  }
  uVar3 = 0;
LAB_1490cbcc5:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cbd8f FUN_1490cbd8f body=150 status=ok
// SIG undefined FUN_1490cbd8f(void)

void FUN_1490cbd8f(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined1 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_28 = 0;
  local_20 = 2;
  local_1c = 0xffffffff;
  FUN_1446f470e(&local_28,L"Texture",1);
  if (param_1 != 0) {
    lVar1 = FUN_144a772c4();
    if ((*(int *)(lVar1 + 0x38) <= *(int *)(*(longlong *)(param_1 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8
         ) == lVar1 + 0x30)) {
      FUN_1409d961e(param_1,&local_28,param_2);
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cbe26 FUN_1490cbe26 body=26 status=ok
// SIG undefined FUN_1490cbe26(void)

void FUN_1490cbe26(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x630) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x620) = *param_2;
  *(undefined4 *)(param_1 + 0x624) = uVar1;
  *(undefined4 *)(param_1 + 0x628) = uVar2;
  *(undefined4 *)(param_1 + 0x62c) = uVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1490cbe40 FUN_1490cbe40 body=26 status=ok
// SIG undefined FUN_1490cbe40(void)

void FUN_1490cbe40(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined8 *)(param_1 + 0x648) = *(undefined8 *)(param_2 + 4);
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x638) = *param_2;
  *(undefined4 *)(param_1 + 0x63c) = uVar1;
  *(undefined4 *)(param_1 + 0x640) = uVar2;
  *(undefined4 *)(param_1 + 0x644) = uVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1490cbe5a FUN_1490cbe5a body=11 status=ok
// SIG undefined FUN_1490cbe5a(void)

void FUN_1490cbe5a(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x650) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1490cbe66 FUN_1490cbe66 body=15 status=ok
// SIG undefined FUN_1490cbe66(void)

void FUN_1490cbe66(longlong param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_1 + 0x654) = *param_2;
  *(undefined4 *)(param_1 + 0x658) = uVar1;
  *(undefined4 *)(param_1 + 0x65c) = uVar2;
  *(undefined4 *)(param_1 + 0x660) = uVar3;
  FUN_1448215fa();
  return;
}



// FUNCTION 1490cbe76 FUN_1490cbe76 body=11 status=ok
// SIG undefined FUN_1490cbe76(void)

void FUN_1490cbe76(longlong param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x664) = param_2;
  FUN_1448215fa();
  return;
}



// FUNCTION 1490cbe82 FUN_1490cbe82 body=81 status=ok
// SIG undefined FUN_1490cbe82(void)

void FUN_1490cbe82(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) & 0xfffffffe;
  }
  else {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 1;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x668) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1490cbed4 FUN_1490cbed4 body=81 status=ok
// SIG undefined FUN_1490cbed4(void)

void FUN_1490cbed4(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) & 0xfffffffd;
  }
  else {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 2;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x670) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1490cbf26 FUN_1490cbf26 body=81 status=ok
// SIG undefined FUN_1490cbf26(void)

void FUN_1490cbf26(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) & 0xfffffffb;
  }
  else {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 4;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x678) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1490cbf78 FUN_1490cbf78 body=81 status=ok
// SIG undefined FUN_1490cbf78(void)

void FUN_1490cbf78(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) & 0xfffffff7;
  }
  else {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 8;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x680) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1490cbfca FUN_1490cbfca body=81 status=ok
// SIG undefined FUN_1490cbfca(void)

void FUN_1490cbfca(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) & 0xffffffef;
  }
  else {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 0x10;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x688) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1490cc01c FUN_1490cc01c body=81 status=ok
// SIG undefined FUN_1490cc01c(void)

void FUN_1490cc01c(longlong param_1,longlong param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) & 0xffffffdf;
  }
  else {
    *(uint *)(param_1 + 0x6a8) = *(uint *)(param_1 + 0x6a8) | 0x20;
    if (DAT_14c950c29 == '\x01') {
      FUN_1456cec3c(param_2);
    }
  }
  *(longlong *)(param_1 + 0x690) = param_2;
  FUN_1448215fa(param_1);
  return;
}



// FUNCTION 1490cc06e FUN_1490cc06e body=84 status=ok
// SIG undefined FUN_1490cc06e(void)

undefined8 FUN_1490cc06e(longlong param_1,int param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  uVar1 = 0;
  switch(param_2) {
  case 1:
    lVar2 = 0x668;
    break;
  case 2:
    lVar2 = 0x670;
    break;
  case 3:
  case 5:
  case 6:
  case 7:
    goto switchD_1490cc088_caseD_3;
  case 4:
    lVar2 = 0x678;
    break;
  case 8:
    lVar2 = 0x680;
    break;
  default:
    if (param_2 == 0x10) {
      lVar2 = 0x688;
    }
    else {
      if (param_2 != 0x20) {
        return 0;
      }
      lVar2 = 0x690;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + lVar2);
switchD_1490cc088_caseD_3:
  return uVar1;
}



// FUNCTION 1490cc0c2 FUN_1490cc0c2 body=83 status=ok
// SIG undefined FUN_1490cc0c2(void)

void FUN_1490cc0c2(undefined8 param_1,int param_2,undefined8 param_3)

{
  switch(param_2) {
  case 1:
    FUN_1490cbe82(param_1,param_3);
    return;
  case 2:
    FUN_1490cbed4(param_1,param_3);
    return;
  case 3:
  case 5:
  case 6:
  case 7:
    goto switchD_1490cc0d8_caseD_3;
  case 4:
    FUN_1490cbf26(param_1,param_3);
    return;
  case 8:
    FUN_1490cbf78(param_1,param_3);
    return;
  default:
    if (param_2 == 0x10) {
      FUN_1490cbfca(param_1,param_3);
      return;
    }
    if (param_2 == 0x20) {
      FUN_1490cc01c(param_1,param_3);
      return;
    }
switchD_1490cc0d8_caseD_3:
    return;
  }
}



// FUNCTION 1490cc116 FUN_1490cc116 body=163 status=ok
// SIG undefined FUN_1490cc116(void)

undefined8 * FUN_1490cc116(longlong param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined **ppuVar3;
  
  FUN_14611441c();
  iVar1 = *(int *)(param_1 + 0x650);
  if (iVar1 == 2) {
    puVar2 = (undefined8 *)FUN_14001cc68(0x2320,0x10);
    FUN_14445f88e(puVar2,param_1,param_1 + 0x698);
  }
  else {
    if (iVar1 == 1) {
      puVar2 = (undefined8 *)FUN_14001cc68(0x8b0,0x10);
      FUN_144461158(puVar2,param_1);
      ppuVar3 = &PTR_FUN_14bac25d0;
    }
    else {
      if (iVar1 != 0) {
        return (undefined8 *)0x0;
      }
      puVar2 = (undefined8 *)FUN_14001cc68(0x8b0,0x10);
      FUN_144461158(puVar2,param_1);
      ppuVar3 = &PTR_FUN_14bac20c0;
    }
    *puVar2 = ppuVar3;
  }
  return puVar2;
}



// FUNCTION 1490cc1ba FUN_1490cc1ba body=315 status=ok
// SIG undefined FUN_1490cc1ba(void)

double * FUN_1490cc1ba(longlong param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  double dVar3;
  undefined1 auStack_c8 [40];
  double local_a0;
  double dStack_98;
  double local_90;
  double dStack_88;
  double local_80;
  double dStack_78;
  undefined8 local_70;
  double local_68;
  double dStack_60;
  double local_58;
  double dStack_50;
  double dStack_48;
  double local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_58 = *(double *)(param_1 + 0x630);
  local_68 = *(double *)(param_1 + 0x620);
  dStack_60 = *(double *)(param_1 + 0x628);
  dStack_50 = *(double *)(param_1 + 0x638);
  dStack_48 = *(double *)(param_1 + 0x640);
  local_40 = *(double *)(param_1 + 0x648);
  local_38 = CONCAT71(local_38._1_7_,1);
  FUN_144a1c3a2(&local_68,&local_a0);
  local_38 = local_70;
  dStack_48 = local_80;
  local_40 = dStack_78;
  local_58 = local_90;
  dStack_50 = dStack_88;
  local_68 = local_a0;
  dStack_60 = dStack_98;
  dVar1 = (dStack_78 - local_90) * 0.5;
  dVar3 = (local_80 - dStack_98) * 0.5;
  dVar2 = (dStack_88 - local_a0) * 0.5;
  *param_2 = local_a0 + dVar2;
  param_2[1] = dStack_98 + dVar3;
  param_2[2] = local_90 + dVar1;
  param_2[3] = dVar2;
  param_2[4] = dVar3;
  param_2[5] = dVar1;
  param_2[6] = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar3 * dVar3);
  if ((local_30 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cc2f6 FUN_1490cc2f6 body=123 status=ok
// SIG undefined FUN_1490cc2f6(void)

void FUN_1490cc2f6(longlong param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  FUN_1485718c2(param_2,*(undefined4 *)(param_1 + 0x6a0));
  iVar1 = *(int *)(param_1 + 0x6a0);
  if ((longlong)iVar1 != 0) {
    lVar3 = *(longlong *)(param_1 + 0x698);
    lVar5 = 0;
    do {
      lVar4 = *(longlong *)(lVar3 + lVar5);
      if (lVar4 != 0) {
        iVar2 = (int)param_2[1];
        *(uint *)(param_2 + 1) = iVar2 + 1U;
        if (*(uint *)((longlong)param_2 + 0xc) < iVar2 + 1U) {
          FUN_144769b64(param_2,iVar2);
        }
        *(longlong *)(*param_2 + (longlong)iVar2 * 8) = lVar4;
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)iVar1 * 8 != lVar5);
  }
  return;
}



// FUNCTION 1490cc372 FUN_1490cc372 body=331 status=ok
// SIG undefined FUN_1490cc372(void)

undefined8 FUN_1490cc372(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined1 auStack_88 [40];
  undefined1 local_60 [16];
  longlong local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (param_2 != 0) {
    uVar1 = 0;
    if (param_2 != 0) {
      for (; (param_2 >> uVar1 & 1) == 0; uVar1 = uVar1 + 1) {
      }
    }
    if ((int)uVar1 < *(int *)(param_1 + 0x6a0)) {
      lVar4 = FUN_145b9e748();
      lVar5 = *(longlong *)(lVar4 + 0x110);
      if (lVar5 == 0) {
        FUN_140aa6c08(lVar4);
        lVar5 = *(longlong *)(lVar4 + 0x110);
        if (lVar5 == 0) goto LAB_1490cc3a1;
      }
      lVar4 = *(longlong *)(param_1 + 0x698);
      uVar7 = (ulonglong)uVar1;
      lVar6 = *(longlong *)(lVar4 + uVar7 * 8);
      if (lVar6 == 0) {
LAB_1490cc3f1:
        lVar5 = FUN_140081d40(lVar5 + 0xe0,0);
        if (lVar5 != 0) {
          lVar6 = FUN_1402d2740();
          if (((*(int *)(lVar6 + 0x38) <= *(int *)(*(longlong *)(lVar5 + 0x10) + 0x38)) &&
              (*(longlong *)
                (*(longlong *)(*(longlong *)(lVar5 + 0x10) + 0x30) +
                (longlong)*(int *)(lVar6 + 0x38) * 8) == lVar6 + 0x30)) &&
             (lVar5 = FUN_14090ceee(lVar5,param_1,0), lVar5 != 0)) {
            if (DAT_14c950c29 == '\x01') {
              FUN_1456cec3c(lVar5);
            }
            *(longlong *)(lVar4 + uVar7 * 8) = lVar5;
          }
        }
      }
      else {
        FUN_1490cc4be(local_60,lVar6 + 0x110);
        cVar2 = FUN_144a7afa6(local_60,lVar5 + 0xe0);
        if (local_50 != 0) {
          FUN_1400020a8();
        }
        if (cVar2 == '\0') goto LAB_1490cc3f1;
      }
      uVar3 = *(undefined8 *)(lVar4 + uVar7 * 8);
      goto LAB_1490cc3a3;
    }
  }
LAB_1490cc3a1:
  uVar3 = 0;
LAB_1490cc3a3:
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 1490cc4be FUN_1490cc4be body=155 status=ok
// SIG undefined FUN_1490cc4be(void)

undefined8 * FUN_1490cc4be(undefined8 *param_1,longlong *param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  int local_28;
  longlong local_20;
  int local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_58;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if (*param_2 == 0) {
    FUN_140056680(&local_30,&DAT_149e01fe8);
  }
  else {
    FUN_1468bee18(&local_30,*param_2,0);
  }
  local_20 = local_30;
  local_18 = local_28 + -1;
  if (local_28 == 0) {
    local_18 = 0;
  }
  FUN_14475bf92(param_1);
  if (local_30 != 0) {
    FUN_1400020a8();
  }
  if ((local_10 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cc55a FUN_1490cc55a body=199 status=ok
// SIG undefined FUN_1490cc55a(void)

undefined8 FUN_1490cc55a(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  longlong lStack_78;
  longlong *local_68;
  longlong local_58 [4];
  undefined8 local_38;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (param_2 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_b8 = FUN_14595e57c();
  local_68 = (longlong *)0x0;
  local_38 = 0;
  uStack_a0 = 0;
  local_80 = 0;
  lStack_78 = 0;
  local_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_b0 = param_1;
  local_a8 = param_2;
  uVar1 = FUN_1402710dd(&local_b8);
  if (lStack_78 != 0) {
    plVar2 = local_68;
    if (local_68 == (longlong *)0x0) {
      plVar2 = local_58;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_28 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cc622 FUN_1490cc622 body=266 status=ok
// SIG undefined FUN_1490cc622(void)

undefined8
FUN_1490cc622(undefined8 param_1,undefined8 param_2,longlong param_3,uint param_4,undefined8 param_5
             ,byte param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined1 auStack_f8 [32];
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  ulonglong uStack_c0;
  ushort local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_98;
  longlong *local_88;
  longlong local_78 [4];
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  if (param_3 == 0) {
    FUN_14058b40c(param_1,
                  L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                 );
  }
  local_88 = (longlong *)0x0;
  local_58 = 0;
  local_98 = 0;
  uStack_c0 = (ulonglong)param_4;
  local_b0 = param_5;
  local_b8 = (ushort)param_6;
  local_a8 = param_7;
  local_a0 = param_8;
  local_d8 = param_2;
  local_d0 = param_1;
  local_c8 = param_3;
  uVar1 = FUN_1402710dd(&local_d8);
  if (local_98 != 0) {
    plVar2 = local_88;
    if (local_88 == (longlong *)0x0) {
      plVar2 = local_78;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((local_48 ^ (ulonglong)auStack_f8) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cc75c FUN_1490cc75c body=46 status=ok
// SIG undefined FUN_1490cc75c(void)

void FUN_1490cc75c(undefined8 param_1,longlong param_2)

{
  FUN_1447a1747(*(undefined8 *)(param_2 + 8),*(undefined4 *)(param_2 + 0x10));
  if (*(longlong *)(param_2 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490cc7a0 FUN_1490cc7a0 body=104 status=ok
// SIG undefined FUN_1490cc7a0(void)

undefined8 FUN_1490cc7a0(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined2 *puVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      puVar1 = (undefined2 *)(param_3 + lVar3);
      lVar2 = param_2 + 8 + lVar3;
      *(undefined1 *)(lVar2 + -6) = *(undefined1 *)(puVar1 + 1);
      *(undefined2 *)(lVar2 + -8) = *puVar1;
      FUN_140bee9ec(lVar2,puVar1 + 4);
      *(undefined1 *)(lVar2 + 0x10) = *(undefined1 *)(puVar1 + 0xc);
      lVar3 = lVar3 + 0x20;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 1490cc830 FUN_1490cc830 body=59 status=ok
// SIG undefined FUN_1490cc830(void)

undefined8 FUN_1490cc830(longlong *param_1)

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



// FUNCTION 1490cc8ce FUN_1490cc8ce body=50 status=ok
// SIG undefined FUN_1490cc8ce(void)

void FUN_1490cc8ce(longlong param_1)

{
  if (*(char *)(param_1 + 0x20) == '\x01') {
    FUN_1447a1747(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
    if (*(longlong *)(param_1 + 8) != 0) {
      FUN_1400020a8();
    }
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}



// FUNCTION 1490cc97c FUN_1490cc97c body=59 status=ok
// SIG undefined FUN_1490cc97c(void)

undefined8 FUN_1490cc97c(longlong *param_1)

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



// FUNCTION 1490cca7c FUN_1490cca7c body=54 status=ok
// SIG undefined FUN_1490cca7c(void)

undefined1 FUN_1490cca7c(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1490ccc06(param_2,param_3);
    param_3 = param_3 + 0x70;
    param_2 = param_2 + 0x70;
  }
  return 1;
}



// FUNCTION 1490ccada FUN_1490ccada body=59 status=ok
// SIG undefined FUN_1490ccada(void)

undefined8 FUN_1490ccada(longlong *param_1)

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



// FUNCTION 1490ccb20 FUN_1490ccb20 body=34 status=ok
// SIG undefined FUN_1490ccb20(void)

void FUN_1490ccb20(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x70) == '\x01') {
    FUN_1490ccb90(param_2);
    *(undefined1 *)(param_2 + 0x70) = 0;
  }
  return;
}



// FUNCTION 1490ccb90 FUN_1490ccb90 body=117 status=ok
// SIG undefined FUN_1490ccb90(void)

void FUN_1490ccb90(longlong *param_1)

{
  if (param_1[0xc] != 0) {
    FUN_1400020a8();
  }
  if (param_1[10] != 0) {
    FUN_1400020a8();
  }
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



// FUNCTION 1490ccc06 FUN_1490ccc06 body=108 status=ok
// SIG undefined FUN_1490ccc06(void)

longlong FUN_1490ccc06(longlong param_1,longlong param_2)

{
  FUN_144a787a6();
  FUN_144a787a6(param_1 + 0x10,param_2 + 0x10);
  FUN_144a787a6(param_1 + 0x20,param_2 + 0x20);
  FUN_144a787a6(param_1 + 0x30,param_2 + 0x30);
  FUN_144a787a6(param_1 + 0x40,param_2 + 0x40);
  FUN_144a787a6(param_1 + 0x50,param_2 + 0x50);
  FUN_144a787a6(param_1 + 0x60,param_2 + 0x60);
  return param_1;
}



// FUNCTION 1490ccc74 FUN_1490ccc74 body=38 status=ok
// SIG undefined FUN_1490ccc74(void)

undefined8 FUN_1490ccc74(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490ccc9a FUN_1490ccc9a body=38 status=ok
// SIG undefined FUN_1490ccc9a(void)

undefined8 FUN_1490ccc9a(undefined8 param_1,int param_2)

{
  FUN_14041e0ea();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cccc0 FUN_1490cccc0 body=53 status=ok
// SIG undefined FUN_1490cccc0(void)

longlong FUN_1490cccc0(longlong param_1,undefined8 *param_2)

{
  if ((*(byte *)(param_1 + 0x28) & 1) != 0) {
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
  }
  FUN_1402ac1b3(*(undefined8 *)(param_1 + 0x90),param_2 + 1);
  return param_1;
}



// FUNCTION 1490cccf6 FUN_1490cccf6 body=518 status=ok
// SIG undefined FUN_1490cccf6(void)

longlong FUN_1490cccf6(longlong param_1,longlong *param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined2 *local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
    local_38 = (undefined2 *)0x0;
    uStack_30 = 0;
    FUN_1401031ac(*param_2,0,&local_38);
    FUN_14021219d(*(undefined8 *)(param_1 + 0x90),&local_38);
    goto LAB_1490cce48;
  }
  local_38 = (undefined2 *)0x0;
  uStack_30 = 0;
  FUN_14021219d(*(undefined8 *)(param_1 + 0x90));
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x110) < DAT_14cbfe808) && (FUN_144b3d300(&DAT_14cbfe808), DAT_14cbfe808 == -1)) {
    FUN_140056680(&DAT_14cbfe7f8,&DAT_149e01fe8);
    atexit((_func_5014 *)&LAB_144460e0e);
    _Init_thread_footer(&DAT_14cbfe808);
  }
  puVar6 = local_38;
  if ((int)uStack_30 == DAT_14cbfe800) {
    if (1 < (int)uStack_30) {
      lVar7 = 0;
      while( true ) {
        uVar1 = *(ushort *)((longlong)local_38 + lVar7);
        uVar4 = (uint)uVar1;
        uVar2 = *(ushort *)(DAT_14cbfe7f8 + lVar7);
        uVar8 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar4 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar8 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_1490ccdc8;
          }
          iVar5 = uVar4 - uVar8;
          goto LAB_1490cce76;
        }
        if (uVar1 == 0) break;
LAB_1490ccdc8:
        lVar7 = lVar7 + 2;
      }
      iVar5 = 0;
LAB_1490cce76:
      bVar9 = iVar5 == 0;
      goto LAB_1490ccdf7;
    }
    lVar7 = 0;
  }
  else {
    bVar9 = DAT_14cbfe800 + (int)uStack_30 == 1;
LAB_1490ccdf7:
    lVar7 = 0;
    if ((1 < (int)uStack_30) && (!bVar9)) {
      uVar3 = FUN_1446f8646();
      lVar7 = FUN_140277b32(uVar3,0,puVar6,0);
      *param_2 = lVar7;
      if ((lVar7 != 0) || (*(char *)(param_1 + 0x98) != '\x01')) goto LAB_1490cce48;
      puVar6 = local_38;
      if ((int)uStack_30 == 0) {
        puVar6 = &DAT_149dfb77a;
      }
      uVar3 = FUN_1446f8646();
      local_40 = 0;
      local_50 = 0;
      local_48 = 1;
      local_58 = 0;
      lVar7 = FUN_1412ecd05(uVar3,0,puVar6,0);
    }
  }
  *param_2 = lVar7;
LAB_1490cce48:
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490ccefe FUN_1490ccefe body=52 status=ok
// SIG undefined FUN_1490ccefe(void)

void FUN_1490ccefe(longlong *param_1)

{
  FUN_1490ccf32();
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490ccf32 FUN_1490ccf32 body=349 status=ok
// SIG undefined FUN_1490ccf32(void)

void FUN_1490ccf32(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  uint local_60;
  int iStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  longlong *local_48;
  uint local_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_98;
  plVar1 = param_1 + 2;
  local_50 = 0x100000000;
  local_40 = 0xffffffff;
  iStack_3c = 0;
  local_38 = 0;
  local_48 = plVar1;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_50);
  }
  local_70 = local_50;
  local_68 = local_48;
  local_60 = local_40;
  iStack_5c = iStack_3c;
  local_58 = local_38;
  local_54 = local_34;
  local_78 = param_1;
  if (iStack_3c < (int)local_48[3]) {
    do {
      lVar2 = *local_78;
      lVar3 = (longlong)iStack_5c * 0x60;
      *(undefined4 *)(lVar2 + 0x50 + lVar3) = 0;
      if (*(longlong *)(lVar2 + 0x48 + lVar3) != 0) {
        FUN_1400020a8();
      }
      FUN_140603fbe(lVar2 + lVar3 + 8);
      local_60 = local_60 & ~local_70._4_4_;
      FUN_1449c0562(&local_70);
    } while (iStack_5c < (int)local_68[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1448fc38a(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(plVar1,0);
  }
  if ((local_30 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cd090 FUN_1490cd090 body=38 status=ok
// SIG undefined FUN_1490cd090(void)

undefined8 FUN_1490cd090(undefined8 param_1,int param_2)

{
  FUN_144a7fc42();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cd0b6 FUN_1490cd0b6 body=122 status=ok
// SIG undefined FUN_1490cd0b6(void)

longlong FUN_1490cd0b6(longlong param_1,longlong param_2)

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
    FUN_1490cd130(param_1,param_2);
  }
  return param_1;
}



// FUNCTION 1490cd130 FUN_1490cd130 body=211 status=ok
// SIG undefined FUN_1490cd130(void)

undefined8 * FUN_1490cd130(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140ba05ee(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_1447030e2(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    FUN_144a69486(param_1 + 2,param_2 + 2);
    if (0 < (int)uVar1) {
      puVar6 = (undefined4 *)*param_1;
      puVar4 = (undefined4 *)*param_2;
      uVar5 = 0;
      do {
        puVar3 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar3 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar3 + (uVar5 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar5 & 0x1f) & 1)
            == 0) {
          *puVar6 = *puVar4;
          puVar6[1] = puVar4[1];
        }
        else {
          FUN_1490cd204(puVar6,puVar4);
          *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(puVar4 + 0xc);
        }
        uVar5 = uVar5 + 1;
        puVar4 = puVar4 + 0xe;
        puVar6 = puVar6 + 0xe;
      } while (uVar1 != uVar5);
    }
  }
  return param_1;
}



// FUNCTION 1490cd204 FUN_1490cd204 body=164 status=ok
// SIG undefined FUN_1490cd204(void)

undefined8 * FUN_1490cd204(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x14);
  uVar4 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x1c);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = 0;
  iVar1 = *(int *)(param_2 + 5);
  pvVar2 = (void *)param_2[4];
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490cd2a8 FUN_1490cd2a8 body=63 status=ok
// SIG undefined FUN_1490cd2a8(void)

undefined8 * FUN_1490cd2a8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bac2310;
  FUN_1484b9202(param_1 + 0x6c);
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cd2f0 FUN_1490cd2f0 body=62 status=ok
// SIG undefined FUN_1490cd2f0(void)

undefined8 * FUN_1490cd2f0(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  byte bVar1;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar1 = FUN_14480c900(0,param_3);
  *(uint *)(param_2 + 2) = (uint)bVar1 * 4 + 0x82;
  *(undefined1 *)((longlong)param_2 + 5) = 2;
  return param_2;
}



// FUNCTION 1490cd33c FUN_1490cd33c body=1220 status=ok
// SIG undefined FUN_1490cd33c(void)

void FUN_1490cd33c(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auStack_1b8 [32];
  undefined1 local_198;
  undefined4 local_190;
  undefined4 local_188;
  undefined1 local_180;
  double local_178;
  double dStack_170;
  double local_168;
  undefined1 local_160 [16];
  double local_150;
  double local_148;
  double dStack_140;
  double local_138;
  double dStack_130;
  double local_128;
  double dStack_120;
  double local_118;
  double local_108;
  double dStack_100;
  double local_f8;
  ulonglong local_e0;
  
  local_e0 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  FUN_1448ac920(&local_148,param_3);
  dVar3 = *(double *)(param_1 + 0x2b8);
  dVar1 = *(double *)(param_1 + 0x2c0);
  dVar2 = *(double *)(param_1 + 0x2b0) * local_108;
  dVar4 = dStack_100 * 0.0;
  dVar6 = local_f8 * 0.0;
  dVar5 = dVar4 * local_148 - dVar2 * dStack_140;
  dVar7 = dVar6 * dStack_140 - dVar4 * local_138;
  dVar8 = dVar2 * local_138 - local_148 * dVar6;
  dVar7 = dVar7 + dVar7;
  dVar8 = dVar8 + dVar8;
  dVar5 = dVar5 + dVar5;
  local_150 = dVar5 * dStack_130 + dVar6 + (dVar8 * local_148 - dVar7 * dStack_140) + local_118;
  dVar4 = (local_138 * dVar7 - local_148 * dVar5) + dStack_130 * dVar8 + dVar4 + dStack_120;
  local_160._8_4_ = SUB84(dVar4,0);
  local_160._0_8_ =
       (dVar5 * dStack_140 - dVar8 * local_138) + dStack_130 * dVar7 + dVar2 + local_128;
  local_160._12_4_ = (int)((ulonglong)dVar4 >> 0x20);
  local_178 = local_128;
  dStack_170 = dStack_120;
  local_168 = local_118;
  local_180 = 0;
  local_188 = 0;
  local_190 = param_6;
  local_198 = param_5;
  (**(code **)(*param_2 + 0x30))(param_2,&local_178,local_160,&DAT_149e1dd34);
  dVar5 = local_108 * 0.0;
  dVar3 = dVar3 * dStack_100;
  dVar4 = local_f8 * 0.0;
  dVar7 = dVar3 * local_148 - dVar5 * dStack_140;
  dVar2 = dVar4 * dStack_140 - dVar3 * local_138;
  dVar8 = dVar5 * local_138 - local_148 * dVar4;
  dVar2 = dVar2 + dVar2;
  dVar8 = dVar8 + dVar8;
  dVar7 = dVar7 + dVar7;
  local_150 = dVar7 * dStack_130 + dVar4 + (dVar8 * local_148 - dVar2 * dStack_140) + local_118;
  dVar3 = (local_138 * dVar2 - local_148 * dVar7) + dStack_130 * dVar8 + dVar3 + dStack_120;
  local_160._8_4_ = SUB84(dVar3,0);
  local_160._0_8_ =
       (dVar7 * dStack_140 - dVar8 * local_138) + dStack_130 * dVar2 + dVar5 + local_128;
  local_160._12_4_ = (int)((ulonglong)dVar3 >> 0x20);
  local_178 = local_128;
  dStack_170 = dStack_120;
  local_168 = local_118;
  local_180 = 0;
  local_188 = 0;
  local_190 = param_6;
  local_198 = param_5;
  (**(code **)(*param_2 + 0x30))(param_2,&local_178,local_160,&DAT_149e1dd14);
  local_108 = local_108 * 0.0;
  dStack_100 = dStack_100 * 0.0;
  dVar1 = dVar1 * local_f8;
  dVar3 = dStack_100 * local_148 - local_108 * dStack_140;
  dVar7 = dVar1 * dStack_140 - dStack_100 * local_138;
  dVar5 = local_108 * local_138 - local_148 * dVar1;
  dVar7 = dVar7 + dVar7;
  dVar5 = dVar5 + dVar5;
  dVar3 = dVar3 + dVar3;
  local_150 = dVar3 * dStack_130 + dVar1 + (dVar5 * local_148 - dVar7 * dStack_140) + local_118;
  dVar1 = (local_138 * dVar7 - local_148 * dVar3) + dStack_130 * dVar5 + dStack_100 + dStack_120;
  local_160._8_4_ = SUB84(dVar1,0);
  local_160._0_8_ =
       (dVar3 * dStack_140 - dVar5 * local_138) + dStack_130 * dVar7 + local_108 + local_128;
  local_160._12_4_ = (int)((ulonglong)dVar1 >> 0x20);
  local_178 = local_128;
  dStack_170 = dStack_120;
  local_168 = local_118;
  local_180 = 0;
  local_188 = 0;
  local_190 = param_6;
  local_198 = param_5;
  (**(code **)(*param_2 + 0x30))(param_2,&local_178,local_160,&DAT_149e1dd04);
  if ((local_e0 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cd81e FUN_1490cd81e body=12 status=ok
// SIG undefined FUN_1490cd81e(void)

void FUN_1490cd81e(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001490cd827. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1490cd82a FUN_1490cd82a body=29 status=ok
// SIG undefined FUN_1490cd82a(void)

undefined8 FUN_1490cd82a(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cd848 FUN_1490cd848 body=104 status=ok
// SIG undefined FUN_1490cd848(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490cd848(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484b585e(_DAT_000000a8 + 0x360);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484b585e(param_1[0x15] + 0x360);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490cd889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1490cd8b0 FUN_1490cd8b0 body=63 status=ok
// SIG undefined FUN_1490cd8b0(void)

undefined8 * FUN_1490cd8b0(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_LAB_14bac2310;
  FUN_1484b9202(param_1 + 0x6c);
  FUN_140064e2c(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cd8f0 FUN_1490cd8f0 body=66 status=ok
// SIG undefined FUN_1490cd8f0(void)

void FUN_1490cd8f0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6)

{
  FUN_147cb76de(param_2,param_3,param_1 + 0x298,param_4,param_5,param_6,0,0);
  return;
}



// FUNCTION 1490cd932 FUN_1490cd932 body=104 status=ok
// SIG undefined FUN_1490cd932(void)

void * FUN_1490cd932(void *param_1,undefined8 *param_2)

{
  void *_Src;
  void *_Dst;
  int iVar1;
  ulonglong uVar2;
  
  *(undefined8 *)((longlong)param_1 + 0x10) = 0;
  _Src = (void *)*param_2;
  uVar2 = param_2[1] - (longlong)_Src;
  iVar1 = (int)(uVar2 >> 4);
  *(int *)((longlong)param_1 + 0x18) = iVar1;
  if (iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 1;
  }
  else {
    FUN_1490cdc6e(param_1);
    _Dst = *(void **)((longlong)param_1 + 0x10);
    if (*(void **)((longlong)param_1 + 0x10) == (void *)0x0) {
      _Dst = param_1;
    }
    memcpy(_Dst,_Src,(longlong)(uVar2 * 0x10000000) >> 0x1c & 0xfffffffffffffff0);
  }
  return param_1;
}



// FUNCTION 1490cd99a FUN_1490cd99a body=109 status=ok
// SIG undefined FUN_1490cd99a(void)

undefined8 * FUN_1490cd99a(undefined8 *param_1,undefined8 *param_2)

{
  void *_Src;
  ulonglong uVar1;
  int iVar2;
  ulonglong uVar3;
  
  _Src = (void *)*param_2;
  uVar1 = param_2[1] - (longlong)_Src;
  uVar3 = uVar1 >> 2;
  iVar2 = (int)uVar3;
  *(int *)(param_1 + 1) = iVar2;
  if (*(int *)((longlong)param_1 + 0xc) == 0 && iVar2 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1447bda9e(param_1,uVar3 & 0xffffffff);
    if (iVar2 != 0) {
      memcpy((void *)*param_1,_Src,(longlong)(uVar1 * 0x40000000) >> 0x1e & 0xfffffffffffffffc);
    }
  }
  return param_1;
}



// FUNCTION 1490cda08 FUN_1490cda08 body=38 status=ok
// SIG undefined FUN_1490cda08(void)

undefined8 FUN_1490cda08(undefined8 param_1,int param_2)

{
  FUN_1490cde5c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cda36 FUN_1490cda36 body=227 status=ok
// SIG undefined FUN_1490cda36(void)

undefined8 * FUN_1490cda36(longlong param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  *(undefined1 *)((longlong)param_2 + 4) = 2;
  bVar3 = FUN_14480c900(0,param_3);
  bVar4 = FUN_144914152(param_1,param_3);
  cVar1 = *(char *)(param_1 + 0x82);
  uVar7 = *(byte *)(param_1 + 0x6e) & 8;
  bVar2 = *(byte *)(param_1 + 0x72);
  bVar5 = FUN_144b26b6a(param_1);
  if ((((byte)(*(char *)(param_1 + 0x68) - 1U) < 2) || ((*(byte *)(param_1 + 0x78) & 0x10) != 0)) ||
     ((*(byte *)(param_1 + 0x75) & 200) != 0)) {
    uVar6 = uVar7 << 1;
  }
  else {
    uVar6 = 0;
  }
  *(uint *)(param_2 + 2) =
       ((uint)bVar5 << 5 | (uint)(cVar1 != '\x01') << 0xd | (uint)bVar3 * 4 + (uint)bVar4 * 8) +
       (bVar2 & 1) * 0x4000 + 2 | uVar6 | uVar7 << 4;
  if (0 < *(int *)(param_1 + 0x2318)) {
    lVar8 = param_1 + 0x22b0;
    if (*(longlong *)(param_1 + 0x2310) != 0) {
      lVar8 = *(longlong *)(param_1 + 0x2310);
    }
    FUN_144b252aa(lVar8,param_2);
  }
  return param_2;
}



// FUNCTION 1490cdb52 FUN_1490cdb52 body=135 status=ok
// SIG undefined FUN_1490cdb52(void)

void FUN_1490cdb52(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0x1f88);
  if (param_2 <= (int)uVar1) {
    iVar6 = 6;
    if (6 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x1f8c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0x540,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 6;
      iVar5 = SUB164(auVar2 * ZEXT816(0xc30c30c30c30c31),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0x1f8c) = iVar6;
    FUN_1490cdbda(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1490cdbda FUN_1490cdbda body=147 status=ok
// SIG undefined FUN_1490cdbda(void)

void FUN_1490cdbda(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x1f80);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 * 0x540);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x1f80,0,param_3,0x540);
    memmove(*(void **)((longlong)param_1 + 0x1f80),param_1,(longlong)param_2 * 0x540);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x1f80,param_2,param_3,0x540);
  return;
}



// FUNCTION 1490cdc6e FUN_1490cdc6e body=96 status=ok
// SIG undefined FUN_1490cdc6e(void)

void FUN_1490cdc6e(longlong param_1,int param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 1) {
    iVar3 = 1;
  }
  else {
    iVar2 = 0;
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,0);
    iVar3 = (int)(uVar1 >> 4);
    if (iVar3 < param_2) {
      iVar3 = 0x7fffffff;
    }
    else if (iVar3 < 1) goto LAB_1490cdc9f;
  }
  iVar2 = iVar3;
  FUN_147cbe3f4(param_1,0,iVar2,0x10);
LAB_1490cdc9f:
  *(int *)(param_1 + 0x1c) = iVar2;
  return;
}



// FUNCTION 1490cdcce FUN_1490cdcce body=110 status=ok
// SIG undefined FUN_1490cdcce(void)

void FUN_1490cdcce(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x68);
  if (param_2 <= (int)uVar1) {
    iVar5 = 6;
    if (6 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (6 < *(uint *)(param_1 + 0x6c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      iVar2 = (int)(uVar3 >> 4);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x6c) = iVar5;
    FUN_1490cdd3e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1490cdd3e FUN_1490cdd3e body=132 status=ok
// SIG undefined FUN_1490cdd3e(void)

void FUN_1490cdd3e(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x60);
  if ((uint)param_3 < 7) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x60,0,param_3,0x10);
    memmove(*(void **)((longlong)param_1 + 0x60),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x60,param_2,param_3,0x10);
  return;
}



// FUNCTION 1490cddd4 FUN_1490cddd4 body=12 status=ok
// SIG undefined FUN_1490cddd4(void)

void FUN_1490cddd4(longlong *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001490cdddd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,0);
  return;
}



// FUNCTION 1490cdde0 FUN_1490cdde0 body=29 status=ok
// SIG undefined FUN_1490cdde0(void)

undefined8 FUN_1490cdde0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490cddfe FUN_1490cddfe body=94 status=ok
// SIG undefined FUN_1490cddfe(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1490cddfe(undefined8 *param_1)

{
  int *piVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    FUN_1484b585e(_DAT_000000a8);
    return;
  }
  LOCK();
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  UNLOCK();
  FUN_1484b585e(param_1[0x15]);
  LOCK();
  piVar1 = (int *)(param_1 + 1);
  *piVar1 = *piVar1 + -1;
  UNLOCK();
  if (*piVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001490cde3a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)(param_1,1);
    return;
  }
  return;
}



// FUNCTION 1490cde5c FUN_1490cde5c body=50 status=ok
// SIG undefined FUN_1490cde5c(void)

void FUN_1490cde5c(longlong param_1)

{
  if (*(longlong *)(param_1 + 0x2310) != 0) {
    FUN_1400020a8();
  }
  FUN_1490cde8e(param_1 + 800);
  FUN_140064e2c(param_1);
  return;
}



// FUNCTION 1490cde8e FUN_1490cde8e body=62 status=ok
// SIG undefined FUN_1490cde8e(void)

void FUN_1490cde8e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x1f80);
  if (*(longlong *)(param_1 + 0x1f80) == 0) {
    lVar1 = param_1;
  }
  FUN_1490cdecc(lVar1,*(undefined4 *)(param_1 + 0x1f88));
  if (*(longlong *)(param_1 + 0x1f80) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1490cdecc FUN_1490cdecc body=41 status=ok
// SIG undefined FUN_1490cdecc(void)

void FUN_1490cdecc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1484b9202(param_1);
    param_1 = param_1 + 0x540;
  }
  return;
}



// FUNCTION 1490cdef6 FUN_1490cdef6 body=203 status=ok
// SIG undefined FUN_1490cdef6(void)

int FUN_1490cdef6(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1490cdf40:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1490cdfb6;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1490cdfb6;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1490cdfa7;
    }
  }
  return -1;
LAB_1490cdfb6:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1490cdfa7:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1490cdf40;
}



// FUNCTION 1490cdfc2 FUN_1490cdfc2 body=319 status=ok
// SIG undefined FUN_1490cdfc2(void)

undefined4 * FUN_1490cdfc2(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490ce102(param_1,local_48);
  FUN_1490ce25a(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1490ce1e8(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1490ce344(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ce102 FUN_1490ce102 body=229 status=ok
// SIG undefined FUN_1490ce102(void)

int * FUN_1490ce102(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490ce1e8 FUN_1490ce1e8 body=114 status=ok
// SIG undefined FUN_1490ce1e8(void)

undefined8 FUN_1490ce1e8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1490cdef6(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1490ce2d2(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1490ce25a FUN_1490ce25a body=119 status=ok
// SIG undefined FUN_1490ce25a(void)

undefined8 * FUN_1490ce25a(undefined8 *param_1,undefined8 *param_2,longlong *param_3)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  _Src = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  lVar2 = *param_3;
  param_1[2] = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  return param_1;
}



// FUNCTION 1490ce2d2 FUN_1490ce2d2 body=114 status=ok
// SIG undefined FUN_1490ce2d2(void)

void FUN_1490ce2d2(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490ce344 FUN_1490ce344 body=476 status=ok
// SIG undefined FUN_1490ce344(void)

void FUN_1490ce344(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ce522 FUN_1490ce522 body=315 status=ok
// SIG undefined FUN_1490ce522(void)

undefined4 * FUN_1490ce522(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490ce65e(param_1,local_48);
  FUN_1490ce7b6(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1490ce744(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1490ce958(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ce65e FUN_1490ce65e body=229 status=ok
// SIG undefined FUN_1490ce65e(void)

int * FUN_1490ce65e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490ce744 FUN_1490ce744 body=114 status=ok
// SIG undefined FUN_1490ce744(void)

undefined8 FUN_1490ce744(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1490ce81a(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1490ce8e6(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1490ce7b6 FUN_1490ce7b6 body=100 status=ok
// SIG undefined FUN_1490ce7b6(void)

undefined8 * FUN_1490ce7b6(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1490ce81a FUN_1490ce81a body=203 status=ok
// SIG undefined FUN_1490ce81a(void)

int FUN_1490ce81a(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1490ce864:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1490ce8da;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1490ce8da;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1490ce8cb;
    }
  }
  return -1;
LAB_1490ce8da:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1490ce8cb:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1490ce864;
}



// FUNCTION 1490ce8e6 FUN_1490ce8e6 body=114 status=ok
// SIG undefined FUN_1490ce8e6(void)

void FUN_1490ce8e6(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490ce958 FUN_1490ce958 body=476 status=ok
// SIG undefined FUN_1490ce958(void)

void FUN_1490ce958(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490ceb36 FUN_1490ceb36 body=253 status=ok
// SIG undefined FUN_1490ceb36(void)

void FUN_1490ceb36(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1490cebac:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x20);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x20);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1490cec1b;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1490cec1b;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1490cec21;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1490cec21;
      goto LAB_1490cec0d;
    }
  }
  return;
LAB_1490cec1b:
  if (uVar7 == uVar6) {
LAB_1490cec21:
    FUN_1490cec34(param_1);
    return;
  }
LAB_1490cec0d:
  iVar2 = (int)plVar3[3];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1490cebac;
}



// FUNCTION 1490cec34 FUN_1490cec34 body=90 status=ok
// SIG undefined FUN_1490cec34(void)

void FUN_1490cec34(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1490cec8e();
  return;
}



// FUNCTION 1490cec8e FUN_1490cec8e body=51 status=ok
// SIG undefined FUN_1490cec8e(void)

void FUN_1490cec8e(longlong *param_1,int param_2)

{
  if (*(longlong *)(*param_1 + (longlong)param_2 * 0x20) != 0) {
    FUN_1400020a8();
  }
  FUN_1490ce2d2(param_1,param_2);
  return;
}



// FUNCTION 1490cecc2 FUN_1490cecc2 body=322 status=ok
// SIG undefined FUN_1490cecc2(void)

void FUN_1490cecc2(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1490cee06 FUN_1490cee06 body=284 status=ok
// SIG undefined FUN_1490cee06(void)

void FUN_1490cee06(longlong *param_1)

{
  undefined1 auStack_88 [40];
  longlong *local_60;
  undefined8 local_58;
  longlong *local_50;
  uint local_48;
  int iStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined8 local_38;
  longlong *local_30;
  uint local_28;
  int iStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_30 = param_1 + 2;
  local_38 = 0x100000000;
  local_28 = 0xffffffff;
  iStack_24 = 0;
  local_20 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_38);
  }
  local_58 = local_38;
  local_50 = local_30;
  local_48 = local_28;
  iStack_44 = iStack_24;
  local_40 = local_20;
  local_3c = local_1c;
  local_60 = param_1;
  if (iStack_24 < (int)local_30[3]) {
    do {
      if (*(longlong *)(*local_60 + (longlong)iStack_44 * 0x20) != 0) {
        FUN_1400020a8();
      }
      local_48 = local_48 & ~local_58._4_4_;
      FUN_1449c0562(&local_58);
    } while (iStack_44 < (int)local_50[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cef24 FUN_1490cef24 body=131 status=ok
// SIG undefined FUN_1490cef24(void)

longlong FUN_1490cef24(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490cefa7();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1490ce344(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490cefa7 FUN_1490cefa7 body=652 status=ok
// SIG undefined FUN_1490cefa7(void)

longlong * FUN_1490cefa7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x20);
        (**(code **)(*param_1 + 0x138))(param_1,lVar5 + (longlong)iVar8 * 0x20 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_145c6be4c(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1490ce102(param_2,&local_90);
        puVar3 = local_88 + 2;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        FUN_14021219d(param_1);
        (**(code **)(*param_1 + 0x138))(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490cf234 FUN_1490cf234 body=131 status=ok
// SIG undefined FUN_1490cf234(void)

longlong FUN_1490cf234(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490cf2b7();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1457b1594(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490cf2b7 FUN_1490cf2b7 body=577 status=ok
// SIG undefined FUN_1490cf2b7(void)

longlong * FUN_1490cf2b7(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined8 local_70;
  longlong *local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 local_54;
  int local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_48._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_4c = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_4c,4);
      }
      else {
        FUN_14572512c(param_1,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_40 = param_2 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_70 = local_48;
    local_68 = local_40;
    local_60 = local_38;
    uVar5 = local_60;
    local_58 = local_30;
    local_54 = local_2c;
    local_60._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_78 = param_2;
    if (local_60._4_4_ < (int)local_40[3]) {
      iVar6 = local_60._4_4_;
      local_60 = uVar5;
      do {
        (**(code **)(*param_1 + 0x150))(param_1,(longlong)iVar6 * 0x10 + *local_78);
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~local_70._4_4_);
        FUN_1449c0562(&local_70);
        iVar6 = local_60._4_4_;
        uVar5 = local_60;
      } while (local_60._4_4_ < (int)local_68[3]);
    }
  }
  else {
    local_48 = (ulonglong)local_48._4_4_ << 0x20;
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_48,4);
      }
      else {
        FUN_14572512c(param_1,&local_48);
      }
    }
    else {
      local_48 = CONCAT44(uVar4,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_140603ff6(param_2,local_48 & 0xffffffff);
    uVar5 = local_60;
    if (0 < (int)local_48) {
      iVar6 = 0;
      do {
        FUN_1457b14ae(param_2,&local_78);
        *(undefined4 *)(local_70 + 8) = 0xffffffff;
        (**(code **)(*param_1 + 0x150))(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = local_60;
      } while (iVar6 < (int)local_48);
    }
  }
  local_60 = uVar5;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490cf4fa FUN_1490cf4fa body=410 status=ok
// SIG undefined FUN_1490cf4fa(void)

void FUN_1490cf4fa(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  ulonglong uVar6;
  longlong *plVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar8 = param_2 - iVar1;
  if (uVar8 != 0 && iVar1 <= (int)param_2) {
    uVar6 = (ulonglong)param_2;
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1448fc38a(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar8;
    if ((uint)(iVar10 - iVar11) < uVar8) {
      FUN_14488f93c(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar6 * 0x60 + lVar2 + -0x5c);
      do {
        iVar9 = (int)uVar6;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = iVar9 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar6 = uVar6 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar9 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0x18;
      } while ((longlong)iVar11 < (longlong)uVar6);
    }
    if (iVar1 == 0) {
      plVar7 = param_1 + 2;
      *(uint *)(param_1 + 5) = uVar8;
      uVar12 = uVar8 + 0x1f >> 5;
      if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
        FUN_14499171c(plVar7,0,uVar12,4);
        *(uint *)((longlong)param_1 + 0x2c) = uVar8 + 0x1f & 0xffffffe0;
      }
      _Dst = (longlong *)param_1[4];
      if ((longlong *)param_1[4] == (longlong *)0x0) {
        _Dst = plVar7;
      }
      if (uVar8 < 0x101) {
        uVar12 = uVar12 + (uVar12 == 0);
      }
      memset(_Dst,0,(ulonglong)(uVar12 << 2));
      iVar1 = (int)param_1[5];
      iVar10 = iVar1 + 0x1f;
      if (-1 < iVar1) {
        iVar10 = iVar1;
      }
      if (iVar1 % 0x20 != 0) {
        if ((longlong *)param_1[4] != (longlong *)0x0) {
          plVar7 = (longlong *)param_1[4];
        }
        bVar4 = -(char)(iVar1 % 0x20);
        *(uint *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar7 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    else if (-1 < (int)uVar8) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar8);
      FUN_1447c6044(param_1 + 2,uVar3,uVar8,0);
      return;
    }
  }
  return;
}



// FUNCTION 1490cf694 FUN_1490cf694 body=478 status=ok
// SIG undefined FUN_1490cf694(void)

void FUN_1490cf694(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong *local_70;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong *local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar8 = *(uint *)(param_1 + 9);
  uVar3 = local_58;
  if (uVar8 != 0) {
    plVar1 = param_1 + 7;
    uVar7 = 0;
    FUN_144a1cbf0(plVar1,0,uVar8,4);
    if (0 < (int)uVar8) {
      do {
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)((longlong)plVar5 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar7) * 4) =
             0xffffffff;
        uVar7 = uVar7 + 1;
      } while (uVar8 != uVar7);
    }
    local_40 = param_1 + 2;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar3 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar4 = local_58._4_4_;
      local_58 = uVar3;
      do {
        lVar2 = *local_70;
        lVar6 = (longlong)iVar4 * 0x60;
        uVar8 = ((uint)(*(ulonglong *)(lVar2 + lVar6) >> 0x14) & 0xffff ^
                (uint)(*(ulonglong *)(lVar2 + lVar6) >> 4)) * -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar8 >> 0x10 ^ uVar8) & (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar2 + 0x5c + lVar6) = iVar9;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(undefined4 *)(lVar2 + 0x58 + lVar6) =
             *(undefined4 *)((longlong)plVar5 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = plVar1;
        }
        *(int *)((longlong)plVar5 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar4;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar4 = local_58._4_4_;
        uVar3 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar3;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490cf874 FUN_1490cf874 body=188 status=ok
// SIG undefined FUN_1490cf874(void)

longlong FUN_1490cf874(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_48 [32];
  longlong *local_28;
  int local_1c;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      do {
        lVar3 = *param_1 + (longlong)iVar1 * 0x60;
        if (*(longlong *)(*param_1 + (longlong)iVar1 * 0x60) == *param_3) {
          if (lVar3 != 0) goto LAB_1490cf913;
          break;
        }
        iVar1 = *(int *)(lVar3 + 0x58);
      } while (iVar1 != -1);
    }
  }
  local_28 = param_3;
  FUN_1490cf932(param_1,&local_1c,param_2);
  lVar3 = (longlong)local_1c * 0x60 + *param_1;
LAB_1490cf913:
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar3 + 8;
}



// FUNCTION 1490cf932 FUN_1490cf932 body=272 status=ok
// SIG undefined FUN_1490cf932(void)

undefined4 * FUN_1490cf932(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1490cfa44(param_1,local_48);
  FUN_1490cfbea(param_4,local_40);
  *(undefined4 *)(local_40 + 0x58) = 0xffffffff;
  cVar1 = FUN_1490cfb32(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x5c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x58) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1490cf694(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cfa44 FUN_1490cfa44 body=238 status=ok
// SIG undefined FUN_1490cfa44(void)

int * FUN_1490cfa44(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_14488f93c(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x60);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x60) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x60 + *param_1;
  return param_2;
}



// FUNCTION 1490cfb32 FUN_1490cfb32 body=184 status=ok
// SIG undefined FUN_1490cfb32(void)

undefined8 FUN_1490cfb32(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  void *_Dst;
  longlong *plVar1;
  int iVar2;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar1 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar1 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar1 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      do {
        _Dst = (void *)(*param_1 + (longlong)iVar2 * 0x60);
        if (*(longlong *)(*param_1 + (longlong)iVar2 * 0x60) == *param_3) {
          *(undefined4 *)((longlong)_Dst + 0x50) = 0;
          if (*(longlong *)((longlong)_Dst + 0x48) != 0) {
            FUN_1400020a8();
          }
          FUN_140603fbe((longlong)_Dst + 8);
          memmove(_Dst,param_3,0x58);
          FUN_1490cfd96(param_1,*param_4);
          *param_4 = iVar2;
          return 1;
        }
        iVar2 = *(int *)((longlong)_Dst + 0x58);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1490cfbea FUN_1490cfbea body=156 status=ok
// SIG undefined FUN_1490cfbea(void)

undefined8 * FUN_1490cfbea(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_58;
  undefined4 local_50;
  undefined8 local_4c;
  undefined4 local_44;
  longlong local_38;
  undefined4 local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_58 = 0;
  local_50 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_4c = 0xffffffff00000080;
  local_44 = 0;
  local_38 = 0;
  local_30 = 0;
  *param_2 = *(undefined8 *)*param_1;
  FUN_1490cfc88(param_2 + 1,&local_78);
  local_30 = 0;
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(&local_78);
  if ((local_20 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490cfc88 FUN_1490cfc88 body=123 status=ok
// SIG undefined FUN_1490cfc88(void)

undefined8 * FUN_1490cfc88(undefined8 *param_1,longlong param_2)

{
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 5) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined8 *)((longlong)param_1 + 0x2c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  FUN_1490cfd04();
  if (*(longlong *)(param_2 + 0x40) == 0) {
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x38);
  }
  if (param_1[8] != 0) {
    FUN_1400020a8();
  }
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_2 + 0x40) = 0;
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 0;
  return param_1;
}



// FUNCTION 1490cfd04 FUN_1490cfd04 body=146 status=ok
// SIG undefined FUN_1490cfd04(void)

longlong * FUN_1490cfd04(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  
  if (param_1 != param_2) {
    if (*param_1 != 0) {
      FUN_1400020a8();
    }
    *param_1 = *param_2;
    *param_2 = 0;
    *(int *)(param_1 + 1) = (int)param_2[1];
    *(undefined4 *)((longlong)param_1 + 0xc) = *(undefined4 *)((longlong)param_2 + 0xc);
    param_2[1] = 0;
    if (param_2[4] == 0) {
      uVar1 = *(undefined4 *)((longlong)param_2 + 0x14);
      lVar3 = param_2[3];
      uVar2 = *(undefined4 *)((longlong)param_2 + 0x1c);
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
      *(int *)(param_1 + 3) = (int)lVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar2;
    }
    if (param_1[4] != 0) {
      FUN_1400020a8();
    }
    param_1[4] = param_2[4];
    param_2[4] = 0;
    *(int *)(param_1 + 5) = (int)param_2[5];
    *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_2 + 0x2c);
    param_2[5] = 0;
    *(int *)(param_1 + 6) = (int)param_2[6];
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    param_2[6] = 0xffffffff;
  }
  return param_1;
}



// FUNCTION 1490cfd96 FUN_1490cfd96 body=122 status=ok
// SIG undefined FUN_1490cfd96(void)

void FUN_1490cfd96(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x60) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x60 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490cfe10 FUN_1490cfe10 body=136 status=ok
// SIG undefined FUN_1490cfe10(void)

void FUN_1490cfe10(longlong *param_1,ulonglong param_2)

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
        if (*(ulonglong *)(*param_1 + (longlong)iVar2 * 0x60) == param_2) {
          FUN_1490cfe98(param_1,iVar2);
          return;
        }
        iVar2 = *(int *)((longlong)iVar2 * 0x60 + *param_1 + 0x58);
      } while (iVar2 != -1);
    }
  }
  return;
}



// FUNCTION 1490cfe98 FUN_1490cfe98 body=95 status=ok
// SIG undefined FUN_1490cfe98(void)

void FUN_1490cfe98(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x5c + (longlong)param_2 * 0x60);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x58 + lVar5 * 0x60);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x60 + 0x58);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x60 + 0x58);
  FUN_1490cfef8();
  return;
}



// FUNCTION 1490cfef8 FUN_1490cfef8 body=82 status=ok
// SIG undefined FUN_1490cfef8(void)

void FUN_1490cfef8(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x60;
  *(undefined4 *)(lVar1 + 0x50 + lVar2) = 0;
  if (*(longlong *)(lVar1 + 0x48 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_140603fbe(lVar1 + lVar2 + 8);
  FUN_1490cfd96(param_1,param_2);
  return;
}



// FUNCTION 1490cff4a FUN_1490cff4a body=129 status=ok
// SIG undefined FUN_1490cff4a(void)

longlong FUN_1490cff4a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490cffcb();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1403afb7e(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490cffcb FUN_1490cffcb body=620 status=ok
// SIG undefined FUN_1490cffcb(void)

longlong * FUN_1490cffcb(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  ulonglong *puVar3;
  uint uVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar4 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar3 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar5 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar6 = local_78._4_4_;
      local_78 = uVar5;
      do {
        (**(code **)(*param_1 + 0x128))(param_1,(longlong)iVar6 * 0x28 + *local_90);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar3 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar3 + 1;
    if ((undefined4 *)puVar3[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar4,*(undefined4 *)*puVar3);
      *puVar3 = (ulonglong)puVar2;
    }
    FUN_140177e76(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar5 = local_78;
    if (0 < (int)local_60) {
      iVar6 = 0;
      do {
        FUN_1403af904(param_2,&local_90);
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 4) = 0xffffffff;
        (**(code **)(*param_1 + 0x128))(param_1);
        iVar6 = iVar6 + 1;
        uVar5 = local_78;
      } while (iVar6 < (int)local_60);
    }
  }
  local_78 = uVar5;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490d0238 FUN_1490d0238 body=646 status=ok
// SIG undefined FUN_1490d0238(void)

int FUN_1490d0238(longlong *param_1,uint param_2,undefined4 *param_3)

{
  void *pvVar1;
  undefined4 *puVar2;
  char cVar3;
  longlong *plVar4;
  int iVar5;
  longlong lVar6;
  undefined1 auStack_e8 [32];
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  void *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_e8;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar5 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar5 != -1) {
      do {
        local_a8 = *param_3;
        uStack_a4 = param_3[1];
        uStack_a0 = param_3[2];
        uStack_9c = param_3[3];
        local_98 = (void *)0x0;
        local_90 = param_3[6];
        lVar6 = (longlong)local_90;
        pvVar1 = *(void **)(param_3 + 4);
        if (lVar6 == 0) {
          local_8c = 0;
        }
        else {
          FUN_1446dd670(&local_98,local_90,0);
          memcpy(local_98,pvVar1,lVar6 * 2);
        }
        puVar2 = *(undefined4 **)(*param_1 + (longlong)iVar5 * 0x10);
        local_c8 = *puVar2;
        uStack_c4 = puVar2[1];
        uStack_c0 = puVar2[2];
        uStack_bc = puVar2[3];
        local_b8 = (void *)0x0;
        local_b0 = puVar2[6];
        lVar6 = (longlong)local_b0;
        pvVar1 = *(void **)(puVar2 + 4);
        if (lVar6 == 0) {
          local_ac = 0;
        }
        else {
          FUN_1446dd670(&local_b8,local_b0,0);
          memcpy(local_b8,pvVar1,lVar6 * 2);
        }
        pvVar1 = local_98;
        local_68 = local_a8;
        uStack_64 = uStack_a4;
        uStack_60 = uStack_a0;
        uStack_5c = uStack_9c;
        local_58 = (void *)0x0;
        lVar6 = (longlong)local_90;
        local_50 = local_90;
        if (lVar6 == 0) {
          local_4c = 0;
        }
        else {
          FUN_1446dd670(&local_58,local_90,0);
          memcpy(local_58,pvVar1,lVar6 * 2);
        }
        pvVar1 = local_b8;
        local_88 = local_c8;
        uStack_84 = uStack_c4;
        uStack_80 = uStack_c0;
        uStack_7c = uStack_bc;
        local_78 = (void *)0x0;
        lVar6 = (longlong)local_b0;
        local_70 = local_b0;
        if (lVar6 == 0) {
          local_6c = 0;
        }
        else {
          FUN_1446dd670(&local_78,local_b0,0);
          memcpy(local_78,pvVar1,lVar6 * 2);
        }
        cVar3 = FUN_144a7afa6(&local_88,&local_68);
        if (local_78 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_58 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_b8 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (local_98 != (void *)0x0) {
          FUN_1400020a8();
        }
        if (cVar3 != '\0') goto LAB_1490d026a;
        iVar5 = *(int *)(*param_1 + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_1490d026a:
  if ((local_48 ^ (ulonglong)auStack_e8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar5;
}



// FUNCTION 1490d04c0 FUN_1490d04c0 body=156 status=ok
// SIG undefined FUN_1490d04c0(void)

longlong FUN_1490d04c0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_144a787a6();
  FUN_1404d7984(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x3c);
  uVar2 = *(undefined4 *)(param_2 + 0x40);
  uVar3 = *(undefined4 *)(param_2 + 0x44);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 0x3c) = uVar1;
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar3;
  FUN_144a787a6(param_1 + 0x48,param_2 + 0x48);
  FUN_144a787a6(param_1 + 0x58,param_2 + 0x58);
  uVar1 = *(undefined4 *)(param_2 + 0x6c);
  uVar2 = *(undefined4 *)(param_2 + 0x70);
  uVar3 = *(undefined4 *)(param_2 + 0x74);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  FUN_140177c44(param_1 + 0x80,param_2 + 0x80);
  FUN_140177c44(param_1 + 0xd0,param_2 + 0xd0);
  *(undefined1 *)(param_1 + 0x120) = *(undefined1 *)(param_2 + 0x120);
  FUN_147865b92(param_1 + 0x128,param_2 + 0x128);
  return param_1;
}



// FUNCTION 1490d055c FUN_1490d055c body=124 status=ok
// SIG undefined FUN_1490d055c(void)

undefined4 * FUN_1490d055c(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  _Src = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),_Src,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 10) = 0;
  FUN_1490d0b00(param_1 + 0xc,param_3);
  return param_1;
}



// FUNCTION 1490d05d8 FUN_1490d05d8 body=1115 status=ok
// SIG undefined FUN_1490d05d8(void)

void FUN_1490d05d8(longlong *param_1,undefined8 *param_2)

{
  void *pvVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  longlong *plVar15;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  void *local_d8;
  int local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  void *local_b8;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  void *local_78;
  int local_70;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) goto LAB_1490d0605;
  local_e8 = *(undefined4 *)param_2;
  uStack_e4 = *(undefined4 *)((longlong)param_2 + 4);
  uStack_e0 = *(undefined4 *)(param_2 + 1);
  uStack_dc = *(undefined4 *)((longlong)param_2 + 0xc);
  local_d8 = (void *)0x0;
  local_d0 = *(int *)(param_2 + 3);
  lVar12 = (longlong)local_d0;
  pvVar1 = (void *)param_2[2];
  if (lVar12 == 0) {
    local_cc = 0;
    local_68 = *param_2;
    uStack_60 = param_2[1];
    local_50 = 0;
LAB_1490d06fa:
    local_58 = (undefined2 *)0x0;
    local_4c = 0;
  }
  else {
    FUN_1446dd670(&local_d8,local_d0,0);
    memcpy(local_d8,pvVar1,lVar12 * 2);
    pvVar1 = local_d8;
    lVar12 = (longlong)local_d0;
    local_68 = CONCAT44(uStack_e4,local_e8);
    uStack_60 = CONCAT44(uStack_dc,uStack_e0);
    local_58 = (undefined2 *)0x0;
    local_50 = local_d0;
    if (lVar12 == 0) goto LAB_1490d06fa;
    FUN_1446dd670(&local_58,local_d0,0);
    memcpy(local_58,pvVar1,lVar12 * 2);
  }
  uVar3 = (uint)((ulonglong)uStack_60 >> 0x10);
  uVar14 = (uint)uStack_60 & 0xffff;
  uVar6 = (uint)((ulonglong)local_68 >> 0x10);
  uVar13 = (uint)local_68 & 0xffff;
  uVar6 = ((uint)local_68 << 0x10 | uVar13) + (int)((ulonglong)local_68 >> 0x20) +
          (uVar6 << 0x13 | uVar6 & 0xffff) + (uVar13 >> 4);
  uVar7 = FUN_144a78877(0,(uVar6 >> 2) +
                          ((uint)uStack_60 << 0x10 | uVar14) + (int)((ulonglong)uStack_60 >> 0x20) +
                          (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar14 >> 4) + uVar6 * 0x40 +
                          0x9e3779b9 ^ uVar6);
  iVar9 = local_50 + -1;
  puVar4 = local_58;
  if (local_50 == 0) {
    iVar9 = 0;
    puVar4 = &DAT_149dfb77a;
  }
  uVar8 = FUN_144a49b4a(iVar9,puVar4);
  iVar9 = FUN_144a78877(uVar7,uVar8);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_d8 != (void *)0x0) {
    FUN_1400020a8();
  }
  plVar10 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar10 = (longlong *)param_1[8];
  }
  uVar11 = (longlong)iVar9 & (longlong)(int)param_1[9] - 1U;
  iVar9 = *(int *)((longlong)plVar10 + uVar11 * 4);
  if (iVar9 != -1) {
    plVar10 = (longlong *)((longlong)plVar10 + uVar11 * 4);
    do {
      plVar15 = (longlong *)((longlong)iVar9 * 0x10 + *param_1);
      local_a8 = *(undefined4 *)param_2;
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_a0 = *(undefined4 *)(param_2 + 1);
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_98 = (void *)0x0;
      local_90 = *(int *)(param_2 + 3);
      lVar12 = (longlong)local_90;
      pvVar1 = (void *)param_2[2];
      if (lVar12 == 0) {
        local_8c = 0;
      }
      else {
        FUN_1446dd670(&local_98,local_90,0);
        memcpy(local_98,pvVar1,lVar12 * 2);
      }
      puVar2 = (undefined4 *)*plVar15;
      local_c8 = *puVar2;
      uStack_c4 = puVar2[1];
      uStack_c0 = puVar2[2];
      uStack_bc = puVar2[3];
      local_b8 = (void *)0x0;
      local_b0 = puVar2[6];
      lVar12 = (longlong)local_b0;
      pvVar1 = *(void **)(puVar2 + 4);
      if (lVar12 == 0) {
        local_ac = 0;
      }
      else {
        FUN_1446dd670(&local_b8,local_b0,0);
        memcpy(local_b8,pvVar1,lVar12 * 2);
      }
      pvVar1 = local_98;
      local_68 = CONCAT44(uStack_a4,local_a8);
      uStack_60 = CONCAT44(uStack_9c,uStack_a0);
      local_58 = (undefined2 *)0x0;
      lVar12 = (longlong)local_90;
      local_50 = local_90;
      if (lVar12 == 0) {
        local_4c = 0;
      }
      else {
        FUN_1446dd670(&local_58,local_90,0);
        memcpy(local_58,pvVar1,lVar12 * 2);
      }
      pvVar1 = local_b8;
      local_88 = local_c8;
      uStack_84 = uStack_c4;
      uStack_80 = uStack_c0;
      uStack_7c = uStack_bc;
      local_78 = (void *)0x0;
      lVar12 = (longlong)local_b0;
      local_70 = local_b0;
      if (lVar12 == 0) {
        local_6c = 0;
      }
      else {
        FUN_1446dd670(&local_78,local_b0,0);
        memcpy(local_78,pvVar1,lVar12 * 2);
      }
      cVar5 = FUN_144a7afa6(&local_88,&local_68);
      if (local_78 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_58 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_b8 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (local_98 != (void *)0x0) {
        FUN_1400020a8();
      }
      if (cVar5 != '\0') {
        FUN_1490d0a34(param_1,(int)*plVar10);
        break;
      }
      iVar9 = (int)plVar15[1];
      plVar10 = plVar15 + 1;
    } while (iVar9 != -1);
  }
LAB_1490d0605:
  if ((local_48 ^ (ulonglong)auStack_108) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d0a34 FUN_1490d0a34 body=90 status=ok
// SIG undefined FUN_1490d0a34(void)

void FUN_1490d0a34(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0xc + (longlong)param_2 * 0x10);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 8 + lVar5 * 0x10);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x10 + 8);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x10 + 8);
  FUN_1490d0a8e();
  return;
}



// FUNCTION 1490d0a8e FUN_1490d0a8e body=114 status=ok
// SIG undefined FUN_1490d0a8e(void)

void FUN_1490d0a8e(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x10) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x10 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490d0b00 FUN_1490d0b00 body=493 status=ok
// SIG undefined FUN_1490d0b00(void)

undefined8 * FUN_1490d0b00(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  FUN_1427d8874(param_1 + 2,param_2 + 2);
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x3c);
  uVar4 = *(undefined4 *)(param_2 + 8);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x44);
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 7);
  *(undefined4 *)((longlong)param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 8) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x44) = uVar5;
  param_1[9] = 0;
  iVar1 = *(int *)(param_2 + 10);
  pvVar2 = (void *)param_2[9];
  *(int *)(param_1 + 10) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 9,iVar1,0);
    memcpy((void *)param_1[9],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xb] = 0;
  iVar1 = *(int *)(param_2 + 0xc);
  pvVar2 = (void *)param_2[0xb];
  *(int *)(param_1 + 0xc) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 100) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 0xb,iVar1,0);
    memcpy((void *)param_1[0xb],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[0xf] = param_2[0xf];
  uVar3 = *(undefined4 *)((longlong)param_2 + 0x6c);
  uVar4 = *(undefined4 *)(param_2 + 0xe);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x74);
  *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
  *(undefined4 *)((longlong)param_1 + 0x6c) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x74) = uVar5;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined8 *)((longlong)param_1 + 0xac) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0xb4) = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0;
  FUN_140177c44(param_1 + 0x10,param_2 + 0x10);
  param_1[0x1e] = 0;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  *(undefined8 *)((longlong)param_1 + 0xfc) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  FUN_140177c44(param_1 + 0x1a,param_2 + 0x1a);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  param_1[0x29] = 0;
  *(undefined4 *)(param_1 + 0x2a) = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined8 *)((longlong)param_1 + 0x154) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x15c) = 0;
  param_1[0x2d] = 0;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  FUN_147865b92(param_1 + 0x25,param_2 + 0x25);
  return param_1;
}



// FUNCTION 1490d0cee FUN_1490d0cee body=721 status=ok
// SIG undefined FUN_1490d0cee(void)

undefined4 * FUN_1490d0cee(longlong param_1,undefined4 *param_2,longlong *param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined2 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  undefined1 auStack_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  void *local_98;
  int local_90;
  undefined4 local_8c;
  undefined4 local_7c;
  undefined4 local_78 [2];
  longlong *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 *local_58;
  int local_50;
  undefined4 local_4c;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  FUN_1490d0fc0(param_1,local_78);
  puVar1 = (undefined8 *)*param_3;
  *local_70 = (longlong)puVar1;
  *(undefined4 *)(local_70 + 1) = 0xffffffff;
  local_7c = local_78[0];
  local_a8 = *(undefined4 *)puVar1;
  uStack_a4 = *(undefined4 *)((longlong)puVar1 + 4);
  local_68 = *puVar1;
  uStack_a0 = *(undefined4 *)(puVar1 + 1);
  uStack_9c = *(undefined4 *)((longlong)puVar1 + 0xc);
  uStack_60 = puVar1[1];
  local_98 = (void *)0x0;
  local_90 = *(int *)(puVar1 + 3);
  lVar13 = (longlong)local_90;
  pvVar2 = (void *)puVar1[2];
  if (lVar13 == 0) {
    local_8c = 0;
    local_50 = 0;
  }
  else {
    FUN_1446dd670(&local_98,local_90,0);
    memcpy(local_98,pvVar2,lVar13 * 2);
    pvVar2 = local_98;
    local_50 = local_90;
    lVar13 = (longlong)local_90;
    local_68 = CONCAT44(uStack_a4,local_a8);
    uStack_60 = CONCAT44(uStack_9c,uStack_a0);
    local_58 = (undefined2 *)0x0;
    if (lVar13 != 0) {
      FUN_1446dd670(&local_58,local_90,0);
      memcpy(local_58,pvVar2,lVar13 * 2);
      goto LAB_1490d0d8b;
    }
  }
  local_58 = (undefined2 *)0x0;
  local_4c = 0;
LAB_1490d0d8b:
  uVar8 = (uint)((ulonglong)uStack_60 >> 0x10);
  uVar12 = (uint)uStack_60 & 0xffff;
  uVar5 = (uint)((ulonglong)local_68 >> 0x10);
  uVar11 = (uint)local_68 & 0xffff;
  uVar5 = ((uint)local_68 << 0x10 | uVar11) + (int)((ulonglong)local_68 >> 0x20) +
          (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar11 >> 4);
  uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                          ((uint)uStack_60 << 0x10 | uVar12) + (int)((ulonglong)uStack_60 >> 0x20) +
                          (uVar8 << 0x13 | uVar8 & 0xffff) + (uVar12 >> 4) + uVar5 * 0x40 +
                          0x9e3779b9 ^ uVar5);
  iVar10 = local_50 + -1;
  puVar3 = local_58;
  if (local_50 == 0) {
    iVar10 = 0;
    puVar3 = &DAT_149dfb77a;
  }
  uVar7 = FUN_144a49b4a(iVar10,puVar3);
  uVar8 = FUN_144a78877(uVar6,uVar7);
  if (local_58 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != (void *)0x0) {
    FUN_1400020a8();
  }
  cVar4 = FUN_1490d10a6(param_1,uVar8,local_70,&local_7c);
  uVar6 = local_7c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar10 = 1;
    if (3 < uVar5) {
      uVar9 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar13 = 0x3f;
      if (uVar9 != 0) {
        for (; uVar9 >> lVar13 == 0; lVar13 = lVar13 + -1) {
        }
      }
      iVar10 = 1 << ((byte)lVar13 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar10 <= *(int *)(param_1 + 0x48))) {
      uVar8 = *(int *)(param_1 + 0x48) - 1U & uVar8;
      *(uint *)((longlong)local_70 + 0xc) = uVar8;
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(local_70 + 1) =
           *(undefined4 *)
            (lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4);
      lVar13 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar13 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar13 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar8) * 4)
           = local_7c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar10;
      FUN_1490c468e(param_1);
    }
  }
  *param_2 = uVar6;
  if ((local_40 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d0fc0 FUN_1490d0fc0 body=229 status=ok
// SIG undefined FUN_1490d0fc0(void)

int * FUN_1490d0fc0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1446efaca(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x10);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x10) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 1490d10a6 FUN_1490d10a6 body=87 status=ok
// SIG undefined FUN_1490d10a6(void)

undefined8 FUN_1490d10a6(longlong *param_1,undefined8 param_2,undefined8 *param_3,int *param_4)

{
  int iVar1;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar1 = FUN_1490d0238(param_1,param_2,*param_3), iVar1 != -1)) {
    *(undefined8 *)(*param_1 + (longlong)iVar1 * 0x10) = *param_3;
    FUN_1490d0a8e(param_1,*param_4);
    *param_4 = iVar1;
    return 1;
  }
  return 0;
}



// FUNCTION 1490d10fe FUN_1490d10fe body=203 status=ok
// SIG undefined FUN_1490d10fe(void)

int FUN_1490d10fe(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1490d1148:
      lVar10 = (longlong)iVar1 * 0x38;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1490d11be;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1490d11be;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1490d11af;
    }
  }
  return -1;
LAB_1490d11be:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1490d11af:
  iVar1 = *(int *)(lVar4 + 0x30 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1490d1148;
}



// FUNCTION 1490d11ca FUN_1490d11ca body=87 status=ok
// SIG undefined FUN_1490d11ca(void)

void FUN_1490d11ca(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1490d1222();
  return;
}



// FUNCTION 1490d1222 FUN_1490d1222 body=77 status=ok
// SIG undefined FUN_1490d1222(void)

void FUN_1490d1222(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  FUN_1490d1270(param_1,param_2,1);
  return;
}



// FUNCTION 1490d1270 FUN_1490d1270 body=138 status=ok
// SIG undefined FUN_1490d1270(void)

void FUN_1490d1270(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x38 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
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
      puVar7 = puVar7 + 0xe;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1490d12fa FUN_1490d12fa body=253 status=ok
// SIG undefined FUN_1490d12fa(void)

void FUN_1490d12fa(longlong *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong *plVar3;
  undefined2 *puVar4;
  longlong lVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    iVar2 = (int)param_2[1];
    if (iVar2 == 0) {
      puVar4 = &DAT_149dfb77a;
    }
    else {
      puVar4 = (undefined2 *)*param_2;
    }
    iVar1 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    iVar2 = FUN_144a49b4a(iVar1,puVar4);
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + ((longlong)iVar2 & (longlong)(int)param_1[9] - 1U) * 4);
    if (iVar2 != -1) {
      iVar1 = (int)param_2[1];
LAB_1490d1370:
      plVar3 = (longlong *)(*param_1 + (longlong)iVar2 * 0x38);
      iVar2 = *(int *)(*param_1 + 8 + (longlong)iVar2 * 0x38);
      if (iVar2 == iVar1) {
        if (1 < iVar1) {
          lVar5 = 0;
          do {
            uVar7 = *(ushort *)(*plVar3 + lVar5);
            uVar8 = (ulonglong)uVar7;
            uVar6 = *(ushort *)(*param_2 + lVar5);
            if (uVar7 == uVar6) {
              if (uVar7 == 0) break;
            }
            else {
              if (0x7f < (uVar6 | uVar7)) goto LAB_1490d13df;
              uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
              uVar9 = (ulonglong)uVar6;
              uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
              if ((&DAT_149e05da0)[uVar8] != (&DAT_149e05da0)[uVar9]) goto LAB_1490d13df;
            }
            lVar5 = lVar5 + 2;
          } while( true );
        }
        goto LAB_1490d13e5;
      }
      if (iVar2 + iVar1 == 1) goto LAB_1490d13e5;
      goto LAB_1490d13d1;
    }
  }
  return;
LAB_1490d13df:
  if (uVar7 == uVar6) {
LAB_1490d13e5:
    FUN_1490d11ca(param_1);
    return;
  }
LAB_1490d13d1:
  iVar2 = (int)plVar3[6];
  if (iVar2 == -1) {
    return;
  }
  goto LAB_1490d1370;
}



// FUNCTION 1490d13f8 FUN_1490d13f8 body=322 status=ok
// SIG undefined FUN_1490d13f8(void)

void FUN_1490d13f8(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x34 + (longlong)iVar4 * 0x38) * 4) =
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



// FUNCTION 1490d153c FUN_1490d153c body=307 status=ok
// SIG undefined FUN_1490d153c(void)

void FUN_1490d153c(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x20 + lVar2 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x38) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_144748838(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d1670 FUN_1490d1670 body=413 status=ok
// SIG undefined FUN_1490d1670(void)

void FUN_1490d1670(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1490d180e FUN_1490d180e body=410 status=ok
// SIG undefined FUN_1490d180e(void)

void FUN_1490d180e(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_144748838(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447030e2(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x38 + lVar2 + -0x34);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -0xe;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1490d19a8 FUN_1490d19a8 body=476 status=ok
// SIG undefined FUN_1490d19a8(void)

void FUN_1490d19a8(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x38;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x34 + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d1b86 FUN_1490d1b86 body=334 status=ok
// SIG undefined FUN_1490d1b86(void)

undefined4 * FUN_1490d1b86(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490d1cd6(param_1,local_48);
  FUN_1490d1e60(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_1490d1db8(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x34) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1490d19a8(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d1cd6 FUN_1490d1cd6 body=226 status=ok
// SIG undefined FUN_1490d1cd6(void)

int * FUN_1490d1cd6(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1490d1db8 FUN_1490d1db8 body=167 status=ok
// SIG undefined FUN_1490d1db8(void)

void FUN_1490d1db8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4,
                  undefined1 *param_5)

{
  longlong *plVar1;
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
  undefined1 uVar13;
  int iVar14;
  
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    iVar14 = FUN_1490d10fe();
    if (iVar14 != -1) {
      plVar1 = (longlong *)(*param_1 + (longlong)iVar14 * 0x38);
      if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar14 * 0x38) != 0) {
        FUN_1400020a8();
      }
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
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
      *(undefined4 *)(plVar1 + 4) = param_3[8];
      *(undefined4 *)((longlong)plVar1 + 0x24) = uVar10;
      *(undefined4 *)(plVar1 + 5) = uVar11;
      *(undefined4 *)((longlong)plVar1 + 0x2c) = uVar12;
      *(undefined4 *)(plVar1 + 2) = uVar6;
      *(undefined4 *)((longlong)plVar1 + 0x14) = uVar7;
      *(undefined4 *)(plVar1 + 3) = uVar8;
      *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar9;
      *(undefined4 *)plVar1 = uVar2;
      *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
      *(undefined4 *)(plVar1 + 1) = uVar4;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
      FUN_1490d1270(param_1,*param_4,1);
      *param_4 = iVar14;
      uVar13 = 1;
      goto LAB_1490d1dd9;
    }
  }
  uVar13 = 0;
LAB_1490d1dd9:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar13;
  }
  return;
}



// FUNCTION 1490d1e60 FUN_1490d1e60 body=163 status=ok
// SIG undefined FUN_1490d1e60(void)

undefined8 * FUN_1490d1e60(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 2);
  }
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
  *(undefined4 *)(param_1 + 3) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
  param_1[4] = 0;
  iVar1 = param_3[6];
  pvVar2 = *(void **)(param_3 + 4);
  *(int *)(param_1 + 5) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy((void *)param_1[4],pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490d1f04 FUN_1490d1f04 body=341 status=ok
// SIG undefined FUN_1490d1f04(void)

undefined4 *
FUN_1490d1f04(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  undefined8 *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_1490d1cd6(param_1,local_50);
  iVar6 = 0;
  FUN_1490d205a(local_48,0,*param_3,param_3[1]);
  *(undefined4 *)(local_48 + 6) = 0xffffffff;
  local_54 = local_50[0];
  if (*(int *)(local_48 + 1) == 0) {
    puVar5 = &DAT_149dfb77a;
  }
  else {
    puVar5 = (undefined2 *)*local_48;
    iVar6 = *(int *)(local_48 + 1) + -1;
  }
  uVar2 = FUN_144a49b4a(iVar6,puVar5);
  local_68 = param_4;
  cVar1 = FUN_1490d1db8(param_1,uVar2,local_48,&local_54);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar6 = 1;
    if (3 < uVar4) {
      uVar3 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar7 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar7 == 0; lVar7 = lVar7 + -1) {
        }
      }
      iVar6 = 1 << ((byte)lVar7 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar6 <= *(int *)(param_1 + 0x48))) {
      uVar2 = *(int *)(param_1 + 0x48) - 1U & uVar2;
      *(uint *)((longlong)local_48 + 0x34) = uVar2;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 6) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar2) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_1490d19a8(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490d205a FUN_1490d205a body=130 status=ok
// SIG undefined FUN_1490d205a(void)

undefined8 *
FUN_1490d205a(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  void *_Src;
  undefined8 uVar2;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_1,iVar1,0);
    memcpy((void *)*param_1,_Src,(longlong)iVar1 * 2);
  }
  uVar2 = param_4[1];
  param_1[2] = *param_4;
  param_1[3] = uVar2;
  param_1[4] = 0;
  param_1[4] = param_4[2];
  param_4[2] = 0;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_4 + 3);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)((longlong)param_4 + 0x1c);
  param_4[3] = 0;
  return param_1;
}



// FUNCTION 1490d20dc FUN_1490d20dc body=41 status=ok
// SIG undefined FUN_1490d20dc(void)

void FUN_1490d20dc(longlong param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    FUN_1490c45c6(param_1);
    param_1 = param_1 + 0x178;
  }
  return;
}



// FUNCTION 1490d2106 FUN_1490d2106 body=106 status=ok
// SIG undefined FUN_1490d2106(void)

undefined8 FUN_1490d2106(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x178,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2 >> 3;
  uVar3 = SUB168(auVar1 * ZEXT816(0x2b9310572620ae4d),0);
  uVar2 = (uVar2 >> 3) / 0x2f;
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)uVar2) {
    uVar4 = uVar2 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x178,8);
  }
  return uVar3;
}



// FUNCTION 1490d2170 FUN_1490d2170 body=150 status=ok
// SIG undefined FUN_1490d2170(void)

void FUN_1490d2170(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x178,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x178)) {
      uVar5 = uVar4 / 0x178 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x178,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490d2208 FUN_1490d2208 body=110 status=ok
// SIG undefined FUN_1490d2208(void)

int FUN_1490d2208(longlong *param_1,uint param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      do {
        cVar2 = FUN_144a7afa6(lVar4 + (longlong)iVar1 * 0x38,param_3);
        if (cVar2 != '\0') {
          return iVar1;
        }
        lVar4 = *param_1;
        iVar1 = *(int *)(lVar4 + 0x30 + (longlong)iVar1 * 0x38);
      } while (iVar1 != -1);
    }
  }
  return -1;
}



// FUNCTION 1490d2276 FUN_1490d2276 body=474 status=ok
// SIG undefined FUN_1490d2276(void)

undefined4 * FUN_1490d2276(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490d2452(param_1,local_48);
  FUN_1490d25c0(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar11 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
  iVar13 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(local_40 + 3) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)local_40[2];
    iVar13 = *(int *)(local_40 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar13,puVar9);
  uVar7 = FUN_144a78877(uVar5,uVar6);
  cVar3 = FUN_1490d2534(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar4) {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1490d26b4(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490d2452 FUN_1490d2452 body=226 status=ok
// SIG undefined FUN_1490d2452(void)

int * FUN_1490d2452(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447030e2(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x38);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x38) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x38 + *param_1;
  return param_2;
}



// FUNCTION 1490d2534 FUN_1490d2534 body=139 status=ok
// SIG undefined FUN_1490d2534(void)

undefined8 FUN_1490d2534(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
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
  int iVar13;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar13 = FUN_1490d2208(), iVar13 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar13 * 0x38);
    if (*(longlong *)(*param_1 + 0x20 + (longlong)iVar13 * 0x38) != 0) {
      FUN_1400020a8();
    }
    if (*(longlong *)(puVar1 + 4) != 0) {
      FUN_1400020a8();
    }
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
    puVar1[8] = param_3[8];
    puVar1[9] = uVar10;
    puVar1[10] = uVar11;
    puVar1[0xb] = uVar12;
    puVar1[4] = uVar6;
    puVar1[5] = uVar7;
    puVar1[6] = uVar8;
    puVar1[7] = uVar9;
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1490d2640(param_1,*param_4);
    *param_4 = iVar13;
    return 1;
  }
  return 0;
}



// FUNCTION 1490d25c0 FUN_1490d25c0 body=127 status=ok
// SIG undefined FUN_1490d25c0(void)

undefined4 * FUN_1490d25c0(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *_Src;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_2 + 4) = 0;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(param_2 + 6) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_3 + 1);
  _Src = (void *)*param_3;
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),_Src,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490d2640 FUN_1490d2640 body=116 status=ok
// SIG undefined FUN_1490d2640(void)

void FUN_1490d2640(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong *plVar4;
  undefined4 uVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x38) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar5 = 0xffffffff;
  }
  else {
    uVar5 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x38 + 4) = uVar5;
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



// FUNCTION 1490d26b4 FUN_1490d26b4 body=629 status=ok
// SIG undefined FUN_1490d26b4(void)

void FUN_1490d26b4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined2 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  longlong lVar18;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar14 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)((longlong)plVar12 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4)
             = 0xffffffff;
        uVar14 = uVar14 + 1;
      } while (uVar2 != uVar14);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar4 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    bVar6 = local_78._4_4_ < (int)local_60[3];
    iVar17 = local_78._4_4_;
    local_90 = param_1;
    local_78 = uVar4;
    if (bVar6) {
      do {
        lVar3 = *local_90;
        lVar18 = (longlong)iVar17 * 0x38;
        uVar4 = *(undefined8 *)(lVar3 + lVar18);
        uVar5 = *(undefined8 *)(lVar3 + 8 + lVar18);
        uVar2 = (uint)((ulonglong)uVar5 >> 0x10);
        uVar16 = (uint)uVar5 & 0xffff;
        uVar14 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar15 = (uint)uVar4 & 0xffff;
        uVar14 = ((uint)uVar4 << 0x10 | uVar15) + (int)((ulonglong)uVar4 >> 0x20) +
                 (uVar14 << 0x13 | uVar14 & 0xffff) + (uVar15 >> 4);
        uVar8 = FUN_144a78877(0,(uVar14 >> 2) +
                                ((uint)uVar5 << 0x10 | uVar16) + (int)((ulonglong)uVar5 >> 0x20) +
                                (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar16 >> 4) + uVar14 * 0x40 +
                                0x9e3779b9 ^ uVar14);
        iVar10 = *(int *)(lVar3 + 0x18 + lVar18);
        puVar13 = &DAT_149dfb77a;
        if (iVar10 != 0) {
          puVar13 = *(undefined2 **)(lVar3 + 0x10 + lVar18);
        }
        iVar7 = iVar10 + -1;
        if (iVar10 == 0) {
          iVar7 = 0;
        }
        uVar9 = FUN_144a49b4a(iVar7,puVar13);
        iVar10 = FUN_144a78877(uVar8,uVar9);
        uVar11 = (longlong)iVar10 & (longlong)(int)param_1[9] - 1U;
        iVar10 = (int)uVar11;
        *(int *)(lVar3 + 0x34 + lVar18) = iVar10;
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x30 + lVar18) =
             *(undefined4 *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & uVar11) * 4);
        plVar12 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar12 = plVar1;
        }
        *(int *)((longlong)plVar12 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar17;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        bVar6 = local_78._4_4_ < (int)local_80[3];
        iVar17 = local_78._4_4_;
      } while (bVar6);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1490d292a FUN_1490d292a body=474 status=ok
// SIG undefined FUN_1490d292a(void)

undefined4 * FUN_1490d292a(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  ulonglong uVar8;
  undefined2 *puVar9;
  longlong lVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490d2452(param_1,local_48);
  FUN_1490d2b06(local_40,*param_3,param_3[1]);
  *(undefined4 *)(local_40 + 6) = 0xffffffff;
  local_4c = local_48[0];
  uVar1 = *local_40;
  uVar2 = local_40[1];
  uVar7 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar12 = (uint)uVar2 & 0xffff;
  uVar4 = (uint)((ulonglong)uVar1 >> 0x10);
  uVar11 = (uint)uVar1 & 0xffff;
  uVar4 = ((uint)uVar1 << 0x10 | uVar11) + (int)((ulonglong)uVar1 >> 0x20) +
          (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar11 >> 4);
  iVar13 = 0;
  uVar5 = FUN_144a78877(0,(uVar4 >> 2) +
                          ((uint)uVar2 << 0x10 | uVar12) + (int)((ulonglong)uVar2 >> 0x20) +
                          (uVar7 << 0x13 | uVar7 & 0xffff) + (uVar12 >> 4) + uVar4 * 0x40 +
                          0x9e3779b9 ^ uVar4);
  if (*(int *)(local_40 + 3) == 0) {
    puVar9 = &DAT_149dfb77a;
  }
  else {
    puVar9 = (undefined2 *)local_40[2];
    iVar13 = *(int *)(local_40 + 3) + -1;
  }
  uVar6 = FUN_144a49b4a(iVar13,puVar9);
  uVar7 = FUN_144a78877(uVar5,uVar6);
  cVar3 = FUN_1490d2534(param_1,uVar7,local_40,&local_4c);
  uVar5 = local_4c;
  if (cVar3 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar13 = 1;
    if (3 < uVar4) {
      uVar8 = (ulonglong)(uVar4 & 0xfffffffe) + 0xf;
      lVar10 = 0x3f;
      if (uVar8 != 0) {
        for (; uVar8 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar13 = 1 << ((byte)lVar10 & 0x1f);
    }
    if (((int)uVar4 < 1) || (iVar13 <= *(int *)(param_1 + 0x48))) {
      uVar7 = *(int *)(param_1 + 0x48) - 1U & uVar7;
      *(uint *)((longlong)local_40 + 0x34) = uVar7;
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 6) =
           *(undefined4 *)
            (lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4);
      lVar10 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar10 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar10 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar7) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar13;
      FUN_1490d26b4(param_1);
    }
  }
  *param_2 = uVar5;
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1490d2b06 FUN_1490d2b06 body=171 status=ok
// SIG undefined FUN_1490d2b06(void)

undefined4 * FUN_1490d2b06(undefined4 *param_1,undefined4 *param_2,undefined8 *param_3)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  param_1[3] = uVar5;
  *(undefined8 *)(param_1 + 4) = 0;
  iVar1 = param_2[6];
  pvVar2 = *(void **)(param_2 + 4);
  param_1[6] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[7] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 4,iVar1,0);
    memcpy(*(void **)(param_1 + 4),pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined8 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(param_3 + 1);
  pvVar2 = (void *)*param_3;
  param_1[10] = iVar1;
  if ((longlong)iVar1 == 0) {
    param_1[0xb] = 0;
  }
  else {
    FUN_1446dd670(param_1 + 8,iVar1,0);
    memcpy(*(void **)(param_1 + 8),pvVar2,(longlong)iVar1 * 2);
  }
  return param_1;
}



// FUNCTION 1490d2bb2 FUN_1490d2bb2 body=413 status=ok
// SIG undefined FUN_1490d2bb2(void)

void FUN_1490d2bb2(longlong *param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  undefined4 uVar3;
  byte bVar4;
  longlong *_Dst;
  undefined4 *puVar5;
  longlong *plVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  iVar1 = (int)param_1[1];
  uVar7 = param_2 - iVar1;
  if (uVar7 != 0 && iVar1 <= (int)param_2) {
    iVar10 = *(int *)((longlong)param_1 + 0xc);
    iVar11 = iVar1;
    if (iVar10 < (int)param_2) {
      FUN_1446f4a44(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_1447711aa(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(uVar9 * 0x20 + lVar2 + -0x1c);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = iVar8 + -1;
        }
        puVar5[-1] = 0xffffffff;
        if (*(int *)((longlong)param_1 + 0x34) < 1) {
          uVar3 = 0xffffffff;
        }
        else {
          uVar3 = (undefined4)param_1[6];
        }
        uVar9 = uVar9 - 1;
        *puVar5 = uVar3;
        *(int *)(param_1 + 6) = iVar8 + -1;
        iVar10 = *(int *)((longlong)param_1 + 0x34) + 1;
        *(int *)((longlong)param_1 + 0x34) = iVar10;
        puVar5 = puVar5 + -8;
      } while ((longlong)iVar11 < (longlong)uVar9);
    }
    if (iVar1 == 0) {
      *(uint *)(param_1 + 5) = uVar7;
      if (param_2 != 0) {
        plVar6 = param_1 + 2;
        uVar12 = uVar7 + 0x1f >> 5;
        if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU >> 5 < uVar12) {
          FUN_14499171c(plVar6,0,uVar12,4);
          *(uint *)((longlong)param_1 + 0x2c) = uVar7 + 0x1f & 0xffffffe0;
        }
        _Dst = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          _Dst = plVar6;
        }
        if (uVar7 < 0x101) {
          uVar12 = uVar12 + (uVar12 == 0);
        }
        memset(_Dst,0,(ulonglong)(uVar12 << 2));
        iVar1 = (int)param_1[5];
        iVar10 = iVar1 + 0x1f;
        if (-1 < iVar1) {
          iVar10 = iVar1;
        }
        if (iVar1 % 0x20 != 0) {
          if ((longlong *)param_1[4] != (longlong *)0x0) {
            plVar6 = (longlong *)param_1[4];
          }
          bVar4 = -(char)(iVar1 % 0x20);
          *(uint *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) =
               (uint)(*(int *)((longlong)plVar6 + (longlong)(iVar10 >> 5) * 4) << (bVar4 & 0x1f)) >>
               (bVar4 & 0x1f);
        }
      }
    }
    else if (-1 < (int)uVar7) {
      uVar3 = FUN_144a54ea4(param_1 + 2,uVar7);
      FUN_1447c6044(param_1 + 2,uVar3,uVar7,0);
      return;
    }
  }
  return;
}



// FUNCTION 1490d2d50 FUN_1490d2d50 body=330 status=ok
// SIG undefined FUN_1490d2d50(void)

undefined4 * FUN_1490d2d50(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_148024d70(param_1,local_48);
  FUN_1490d2e9c(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar6 = &DAT_149dfb77a;
  }
  else {
    puVar6 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar3 = FUN_144a49b4a(iVar1,puVar6);
  local_58 = 0;
  cVar2 = FUN_148024e56(param_1,uVar3,local_40,&local_4c);
  if (cVar2 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar4 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar4 != 0) {
        for (; uVar4 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_40 + 0x1c) = uVar3;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_14802505c(param_1);
    }
  }
  *param_2 = local_4c;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d2e9c FUN_1490d2e9c body=100 status=ok
// SIG undefined FUN_1490d2e9c(void)

undefined8 * FUN_1490d2e9c(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1490d2f00 FUN_1490d2f00 body=203 status=ok
// SIG undefined FUN_1490d2f00(void)

int FUN_1490d2f00(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1490d2f4a:
      lVar10 = (longlong)iVar1;
      iVar3 = *(int *)(lVar4 + 8 + lVar10 * 0x28);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10 * 0x28) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1490d2fc0;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1490d2fc0;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1490d2fb1;
    }
  }
  return -1;
LAB_1490d2fc0:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1490d2fb1:
  iVar1 = *(int *)(lVar4 + 0x20 + lVar10 * 0x28);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1490d2f4a;
}



// FUNCTION 1490d2fcc FUN_1490d2fcc body=341 status=ok
// SIG undefined FUN_1490d2fcc(void)

int FUN_1490d2fcc(undefined8 *param_1,undefined8 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar4 = *(int *)(param_1 + 1);
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    piVar1 = (int *)*param_1;
    iVar3 = 0;
    bVar11 = false;
    if (*piVar1 == *(int *)*param_2) {
      bVar11 = piVar1[1] == ((int *)*param_2)[1];
    }
    iVar10 = 0;
    do {
      if (iVar10 + 1 < iVar4) {
        do {
          lVar9 = (longlong)iVar10 + 2;
          bVar13 = true;
          lVar7 = -1;
          do {
            if (piVar1[lVar9 * 2 + -2] == *(int *)*param_2) {
              if ((piVar1[lVar9 * 2 + -1] == ((int *)*param_2)[1]) != bVar11) {
                iVar8 = iVar10 - (int)lVar7;
                break;
              }
            }
            else if (bVar11 != false) {
              if (bVar13 == false) goto LAB_1490d3105;
              iVar8 = iVar10 - (int)lVar7;
              goto LAB_1490d308b;
            }
            bVar13 = lVar9 < lVar5;
            lVar7 = lVar7 + -1;
            lVar9 = lVar9 + 1;
            iVar8 = iVar4;
          } while (iVar10 - lVar5 != lVar7);
          bVar12 = bVar11 == false;
          bVar11 = bVar13;
          iVar2 = iVar8;
          iVar6 = iVar10;
          if (bVar12) break;
          if (bVar13 == false) goto LAB_1490d3105;
LAB_1490d308b:
          bVar11 = false;
          iVar2 = iVar8 + 1;
          iVar6 = iVar8;
          iVar10 = iVar8;
        } while (iVar8 + 1 < iVar4);
      }
      else {
        if (bVar11 != false) break;
        bVar11 = false;
        iVar2 = iVar10 + 1;
        iVar6 = iVar10;
      }
      iVar10 = iVar2;
      if (iVar3 != iVar6) {
        memmove(piVar1 + (longlong)iVar3 * 2,piVar1 + (longlong)iVar6 * 2,
                (longlong)(iVar10 - iVar6) << 3);
      }
      iVar3 = iVar3 + (iVar10 - iVar6);
      bVar13 = bVar11 != false;
      bVar11 = true;
    } while (bVar13);
LAB_1490d3105:
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1490d3122 FUN_1490d3122 body=127 status=ok
// SIG undefined FUN_1490d3122(void)

int * FUN_1490d3122(longlong *param_1,int *param_2,int *param_3)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  uVar2 = FUN_144a78877(*param_3,param_3[1]);
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar4 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar4 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar4 + (ulonglong)((int)param_1[9] - 1U & uVar2) * 4);
    if (iVar3 != -1) {
      lVar1 = *param_1;
      do {
        lVar5 = (longlong)iVar3 * 0x20;
        if ((*(int *)(lVar1 + lVar5) == *param_3) && (*(int *)(lVar1 + 4 + lVar5) == param_3[1]))
        goto LAB_1490d314b;
        iVar3 = *(int *)(lVar5 + lVar1 + 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_1490d314b:
  *param_2 = iVar3;
  return param_2;
}



// FUNCTION 1490d31a2 FUN_1490d31a2 body=90 status=ok
// SIG undefined FUN_1490d31a2(void)

void FUN_1490d31a2(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x1c + (longlong)param_2 * 0x20);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x18 + lVar5 * 0x20);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x20 + 0x18);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x20 + 0x18);
  FUN_1490d31fc();
  return;
}



// FUNCTION 1490d31fc FUN_1490d31fc body=73 status=ok
// SIG undefined FUN_1490d31fc(void)

void FUN_1490d31fc(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  lVar2 = (longlong)param_2 * 0x20;
  FUN_1447a1747(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
  if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
    FUN_1400020a8();
  }
  FUN_1490d3246(param_1,param_2);
  return;
}



// FUNCTION 1490d3246 FUN_1490d3246 body=114 status=ok
// SIG undefined FUN_1490d3246(void)

void FUN_1490d3246(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490d32b8 FUN_1490d32b8 body=322 status=ok
// SIG undefined FUN_1490d32b8(void)

void FUN_1490d32b8(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
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



// FUNCTION 1490d33fc FUN_1490d33fc body=307 status=ok
// SIG undefined FUN_1490d33fc(void)

void FUN_1490d33fc(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54 * 0x20;
      FUN_1447a1747(*(undefined8 *)(lVar1 + 8 + lVar2),*(undefined4 *)(lVar1 + 0x10 + lVar2));
      if (*(longlong *)(lVar1 + 8 + lVar2) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_1446f4a44(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d3530 FUN_1490d3530 body=322 status=ok
// SIG undefined FUN_1490d3530(void)

void FUN_1490d3530(longlong *param_1)

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
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar2 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar4 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar2, uStack_48 != plVar1)) {
      do {
        local_60 = uVar2;
        *(undefined4 *)
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x24 + (longlong)iVar4 * 0x28) * 4) =
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



// FUNCTION 1490d3674 FUN_1490d3674 body=308 status=ok
// SIG undefined FUN_1490d3674(void)

void FUN_1490d3674(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
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
  local_40 = param_1 + 2;
  local_48 = 0x100000000;
  local_38 = 0xffffffff;
  iStack_34 = 0;
  local_30 = 0;
  if ((int)param_1[5] != 0) {
    FUN_1449c0562(&local_48);
  }
  local_68 = local_48;
  local_60 = local_40;
  local_58 = local_38;
  iStack_54 = iStack_34;
  local_50 = local_30;
  local_4c = local_2c;
  local_70 = param_1;
  if (iStack_34 < (int)local_40[3]) {
    do {
      lVar1 = *local_70;
      lVar2 = (longlong)iStack_54;
      if (*(longlong *)(lVar1 + 0x10 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      if (*(longlong *)(lVar1 + lVar2 * 0x28) != 0) {
        FUN_1400020a8();
      }
      local_58 = local_58 & ~local_68._4_4_;
      FUN_1449c0562(&local_68);
    } while (iStack_54 < (int)local_60[3]);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) < 0) {
    FUN_140549ad6(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((local_28 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d37aa FUN_1490d37aa body=312 status=ok
// SIG undefined FUN_1490d37aa(void)

undefined4 *
FUN_1490d37aa(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_1461491fc(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = FUN_144a78877(uVar3,uVar3 >> 0x20);
  local_68 = param_4;
  cVar1 = FUN_146149158(param_1,uVar2,local_48,&local_54);
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
      FUN_1461492e2(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d38e4 FUN_1490d38e4 body=315 status=ok
// SIG undefined FUN_1490d38e4(void)

undefined4 * FUN_1490d38e4(longlong param_1,undefined4 *param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  undefined2 *puVar8;
  longlong lVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1490d3a20(param_1,local_48);
  FUN_1490d3b78(param_3,local_40);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  local_4c = local_48[0];
  iVar7 = *(int *)(local_40 + 1);
  if (iVar7 == 0) {
    puVar8 = &DAT_149dfb77a;
  }
  else {
    puVar8 = (undefined2 *)*local_40;
  }
  iVar1 = iVar7 + -1;
  if (iVar7 == 0) {
    iVar1 = 0;
  }
  uVar4 = FUN_144a49b4a(iVar1,puVar8);
  cVar3 = FUN_1490d3b06(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar9 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar9 == 0; lVar9 = lVar9 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar9 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar4 = *(int *)(param_1 + 0x48) - 1U & uVar4;
      *(uint *)((longlong)local_40 + 0x1c) = uVar4;
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4);
      lVar9 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar9 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar9 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar4) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1490d3d1a(param_1);
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d3a20 FUN_1490d3a20 body=229 status=ok
// SIG undefined FUN_1490d3a20(void)

int * FUN_1490d3a20(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490d3b06 FUN_1490d3b06 body=114 status=ok
// SIG undefined FUN_1490d3b06(void)

undefined8 FUN_1490d3b06(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar6 = FUN_1490d3bdc(), iVar6 != -1)) {
    puVar1 = (undefined4 *)(*param_1 + (longlong)iVar6 * 0x20);
    if (*(longlong *)(*param_1 + (longlong)iVar6 * 0x20) != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    *(undefined8 *)(puVar1 + 4) = *(undefined8 *)(param_3 + 4);
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = uVar4;
    puVar1[3] = uVar5;
    FUN_1490d3ca8(param_1,*param_4);
    *param_4 = iVar6;
    return 1;
  }
  return 0;
}



// FUNCTION 1490d3b78 FUN_1490d3b78 body=100 status=ok
// SIG undefined FUN_1490d3b78(void)

undefined8 * FUN_1490d3b78(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  puVar3 = (undefined8 *)param_1[1];
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = *puVar3;
  return param_2;
}



// FUNCTION 1490d3bdc FUN_1490d3bdc body=203 status=ok
// SIG undefined FUN_1490d3bdc(void)

int FUN_1490d3bdc(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  ushort uVar7;
  ushort uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar1 != -1) {
      lVar4 = *param_1;
      iVar2 = (int)param_3[1];
LAB_1490d3c26:
      lVar10 = (longlong)iVar1 * 0x20;
      iVar3 = *(int *)(lVar4 + 8 + lVar10);
      if (iVar3 == iVar2) {
        if (iVar2 < 2) {
          return iVar1;
        }
        lVar6 = 0;
        do {
          uVar8 = *(ushort *)(*(longlong *)(lVar4 + lVar10) + lVar6);
          uVar9 = (ulonglong)uVar8;
          uVar7 = *(ushort *)(*param_3 + lVar6);
          if (uVar8 == uVar7) {
            if (uVar8 == 0) {
              return iVar1;
            }
          }
          else {
            if (0x7f < (uVar7 | uVar8)) goto LAB_1490d3c9c;
            uVar8 = (ushort)(byte)(&DAT_149e05da0)[uVar9];
            uVar11 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar11];
            if ((&DAT_149e05da0)[uVar9] != (&DAT_149e05da0)[uVar11]) goto LAB_1490d3c9c;
          }
          lVar6 = lVar6 + 2;
        } while( true );
      }
      if (iVar3 + iVar2 == 1) {
        return iVar1;
      }
      goto LAB_1490d3c8d;
    }
  }
  return -1;
LAB_1490d3c9c:
  if (uVar8 == uVar7) {
    return iVar1;
  }
LAB_1490d3c8d:
  iVar1 = *(int *)(lVar4 + 0x18 + lVar10);
  if (iVar1 == -1) {
    return -1;
  }
  goto LAB_1490d3c26;
}



// FUNCTION 1490d3ca8 FUN_1490d3ca8 body=114 status=ok
// SIG undefined FUN_1490d3ca8(void)

void FUN_1490d3ca8(longlong *param_1,int param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  undefined4 uVar4;
  longlong *plVar5;
  int iVar6;
  
  lVar2 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x20) = param_2;
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20) = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar4 = 0xffffffff;
  }
  else {
    uVar4 = (undefined4)param_1[6];
  }
  *(undefined4 *)(lVar2 + (longlong)param_2 * 0x20 + 4) = uVar4;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar6 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar6 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1490d3d1a FUN_1490d3d1a body=476 status=ok
// SIG undefined FUN_1490d3d1a(void)

void FUN_1490d3d1a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined2 *puVar9;
  uint uVar10;
  longlong lVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar10 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)((longlong)plVar8 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar10) * 4)
             = 0xffffffff;
        uVar10 = uVar10 + 1;
      } while (uVar2 != uVar10);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar11 = (longlong)iVar12 * 0x20;
        iVar6 = *(int *)(lVar3 + 8 + lVar11);
        puVar9 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar9 = *(undefined2 **)(lVar3 + lVar11);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar9);
        uVar7 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar7;
        *(int *)(lVar3 + 0x1c + lVar11) = iVar6;
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x18 + lVar11) =
             *(undefined4 *)((longlong)plVar8 + ((longlong)(int)param_1[9] - 1U & uVar7) * 4);
        plVar8 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar8 = plVar1;
        }
        *(int *)((longlong)plVar8 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d3ef8 FUN_1490d3ef8 body=29 status=ok
// SIG undefined FUN_1490d3ef8(void)

undefined8 FUN_1490d3ef8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d3f30 FUN_1490d3f30 body=29 status=ok
// SIG undefined FUN_1490d3f30(void)

bool FUN_1490d3f30(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 == param_2;
}



// FUNCTION 1490d3f4e FUN_1490d3f4e body=26 status=ok
// SIG undefined FUN_1490d3f4e(void)

bool FUN_1490d3f4e(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_144a34e94(param_1 + 0x18,1);
  return lVar1 == 0;
}



// FUNCTION 1490d3f68 FUN_1490d3f68 body=24 status=ok
// SIG undefined FUN_1490d3f68(void)

bool FUN_1490d3f68(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = FUN_14479d2ce(param_1 + 0x18);
  return lVar1 != 0;
}



// FUNCTION 1490d3f80 FUN_1490d3f80 body=93 status=ok
// SIG undefined FUN_1490d3f80(void)

void FUN_1490d3f80(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490d3fde FUN_1490d3fde body=93 status=ok
// SIG undefined FUN_1490d3fde(void)

void FUN_1490d3fde(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a975710;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2b50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490d403c FUN_1490d403c body=126 status=ok
// SIG undefined FUN_1490d403c(void)

void FUN_1490d403c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a975710;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bac2b50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490d40ab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490d40ba FUN_1490d40ba body=48 status=ok
// SIG undefined FUN_1490d40ba(void)

void FUN_1490d40ba(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_14479d2ce(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001490d40e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x20))(uVar1,param_2,param_3,*(code **)(param_1 + 0x20));
  return;
}



// FUNCTION 1490d40ea FUN_1490d40ea body=151 status=ok
// SIG undefined FUN_1490d40ea(void)

bool FUN_1490d40ea(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [32];
  longlong local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_58;
  cVar1 = FUN_144a61b4f();
  if (cVar1 == '\0') {
    FUN_1400841de(param_1 + 0x18,&local_38);
    lVar3 = local_38;
  }
  else {
    lVar3 = 0;
  }
  lVar2 = FUN_14479d2ce(param_1 + 0x18);
  if (lVar2 != 0) {
    (**(code **)(param_1 + 0x20))(lVar2,param_2,param_3);
  }
  if (lVar3 != 0) {
    FUN_140113f3a(lVar3);
  }
  if ((local_30 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar2 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d4182 FUN_1490d4182 body=131 status=ok
// SIG undefined FUN_1490d4182(void)

longlong FUN_1490d4182(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490d4205();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1490d495c(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490d4205 FUN_1490d4205 body=647 status=ok
// SIG undefined FUN_1490d4205(void)

longlong * FUN_1490d4205(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined8 *puVar3;
  ulonglong *puVar4;
  longlong lVar5;
  uint uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] * 0x28,
             (longlong)*(int *)((longlong)param_2 + 0xc) * 0x28);
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar6 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar4 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar4 + 1;
    if ((int *)puVar4[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar4;
      *puVar4 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar7 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar7;
      do {
        lVar5 = *local_90;
        FUN_14021219d(param_1,lVar5 + (longlong)iVar8 * 0x28);
        FUN_1490d4574(param_1,lVar5 + (longlong)iVar8 * 0x28 + 0x10);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar7 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar4 = (ulonglong *)param_1[1];
    puVar2 = (undefined4 *)*puVar4 + 1;
    if ((undefined4 *)puVar4[1] < puVar2) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar6,*(undefined4 *)*puVar4);
      *puVar4 = (ulonglong)puVar2;
    }
    FUN_1460130b0(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar7 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1490d448e(param_2,&local_90);
        puVar3 = local_88 + 2;
        local_88[2] = 0;
        local_88[3] = 0;
        *local_88 = 0;
        local_88[1] = 0;
        *(undefined4 *)(local_88 + 4) = 0xffffffff;
        FUN_14021219d(param_1);
        FUN_1490d4574(param_1,puVar3);
        iVar8 = iVar8 + 1;
        uVar7 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar7;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490d448e FUN_1490d448e body=230 status=ok
// SIG undefined FUN_1490d448e(void)

int * FUN_1490d448e(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_140549c28(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_144a54ea4(param_1 + 2,1);
    plVar5 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar5 = param_1 + 2;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x28);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x28) = 0xffffffff;
    }
  }
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x28 + *param_1;
  return param_2;
}



// FUNCTION 1490d4574 FUN_1490d4574 body=702 status=ok
// SIG undefined FUN_1490d4574(void)

longlong * FUN_1490d4574(longlong *param_1,longlong *param_2)

{
  uint *puVar1;
  ulonglong *puVar2;
  longlong lVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [44];
  uint local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 3,(longlong)*(int *)((longlong)param_2 + 0xc) << 3
            );
  local_3c = 0;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_3c = *(uint *)(param_2 + 1);
  }
  puVar2 = (ulonglong *)param_1[1];
  puVar1 = (uint *)*puVar2 + 1;
  if ((uint *)puVar2[1] < puVar1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,&local_3c,4);
    }
    else {
      FUN_14572512c(param_1,&local_3c);
    }
  }
  else {
    local_3c = *(uint *)*puVar2;
    *puVar2 = (ulonglong)puVar1;
  }
  if (local_3c == 0) {
    if (((*(byte *)(param_1 + 5) & 1) != 0) &&
       (*(undefined4 *)(param_2 + 1) = 0, *(int *)((longlong)param_2 + 0xc) != 0)) {
      FUN_1490d4876(param_2,0);
    }
  }
  else if ((((int)local_3c < 0) || ((*(byte *)((longlong)param_1 + 0x29) & 2) != 0)) ||
          ((0x200000 < local_3c && (*(char *)((longlong)param_1 + 0x2b) < '\0')))) {
    FUN_14572541c(param_1);
  }
  else if ((*(byte *)(param_1 + 5) & 1) == 0) {
    *(uint *)(param_2 + 1) = local_3c;
    lVar7 = 4;
    lVar8 = 0;
    do {
      lVar3 = *param_2;
      puVar5 = (undefined4 *)(lVar3 + lVar7 + -4);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
        }
        else {
          FUN_14572512c(param_1);
        }
      }
      else {
        *puVar5 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      puVar5 = (undefined4 *)(lVar3 + lVar7);
      puVar4 = *(undefined4 **)param_1[1];
      if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
        if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
          (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
        }
        else {
          FUN_14572512c(param_1,puVar5);
        }
      }
      else {
        *puVar5 = *puVar4;
        *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
      }
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 8;
    } while (lVar8 < (int)param_2[1]);
  }
  else {
    *(undefined4 *)(param_2 + 1) = 0;
    if ((*(uint *)((longlong)param_2 + 0xc) == local_3c) ||
       (FUN_1490d4876(param_2), 0 < (int)local_3c)) {
      iVar6 = 0;
      do {
        puVar5 = (undefined4 *)FUN_1490d4834(param_2);
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
          }
          else {
            FUN_14572512c(param_1,puVar5);
          }
        }
        else {
          *puVar5 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar5 = puVar5 + 1;
        puVar4 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar4 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar5,4);
          }
          else {
            FUN_14572512c(param_1,puVar5);
          }
        }
        else {
          *puVar5 = *puVar4;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < (int)local_3c);
    }
  }
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490d4834 FUN_1490d4834 body=66 status=ok
// SIG undefined FUN_1490d4834(void)

longlong FUN_1490d4834(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1490d48d6(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 8 + *param_1;
  FUN_140180b5b(lVar2,1);
  return lVar2;
}



// FUNCTION 1490d4876 FUN_1490d4876 body=95 status=ok
// SIG undefined FUN_1490d4876(void)

void FUN_1490d4876(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((ulonglong)param_2 << 3,4);
    uVar2 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,4);
  }
  return;
}



// FUNCTION 1490d48d6 FUN_1490d48d6 body=132 status=ok
// SIG undefined FUN_1490d48d6(void)

void FUN_1490d48d6(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar2 = 4;
      if (4 < uVar1) {
        uVar2 = uVar1;
      }
      lVar4 = (longlong)(int)uVar2;
    }
    else {
      lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
    }
    uVar3 = FUN_144a3809e(lVar4 << 3,4);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1490d495c FUN_1490d495c body=476 status=ok
// SIG undefined FUN_1490d495c(void)

void FUN_1490d495c(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined8 local_68;
  longlong *local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar2 = *(uint *)(param_1 + 9);
  uVar5 = local_78;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar11 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar11) * 4)
             = 0xffffffff;
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] != 0) {
      FUN_1449c0562(&local_68);
    }
    local_88 = local_68;
    local_80 = local_60;
    local_78 = local_58;
    uVar5 = local_78;
    local_70 = local_50;
    local_6c = local_4c;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = param_1;
    if (local_78._4_4_ < (int)local_60[3]) {
      iVar12 = local_78._4_4_;
      local_78 = uVar5;
      do {
        lVar3 = *local_90;
        lVar7 = (longlong)iVar12;
        iVar6 = *(int *)(lVar3 + 8 + lVar7 * 0x28);
        puVar10 = &DAT_149dfb77a;
        iVar4 = 0;
        if (iVar6 != 0) {
          puVar10 = *(undefined2 **)(lVar3 + lVar7 * 0x28);
          iVar4 = iVar6 + -1;
        }
        iVar6 = FUN_144a49b4a(iVar4,puVar10);
        uVar8 = (longlong)iVar6 & (longlong)(int)param_1[9] - 1U;
        iVar6 = (int)uVar8;
        *(int *)(lVar3 + 0x24 + lVar7 * 0x28) = iVar6;
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x20 + lVar7 * 0x28) =
             *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar8) * 4);
        plVar9 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar9 = plVar1;
        }
        *(int *)((longlong)plVar9 + ((longlong)iVar6 & (longlong)(int)param_1[9] - 1U) * 4) = iVar12
        ;
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar12 = local_78._4_4_;
        uVar5 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  local_78 = uVar5;
  if ((local_48 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d4b3a FUN_1490d4b3a body=131 status=ok
// SIG undefined FUN_1490d4b3a(void)

longlong FUN_1490d4b3a(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490d4bbd();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1490d504c(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490d4bbd FUN_1490d4bbd body=936 status=ok
// SIG undefined FUN_1490d4bbd(void)

longlong * FUN_1490d4bbd(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_b8 [40];
  longlong *local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  int local_64;
  undefined8 local_60;
  longlong *local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 5,(longlong)*(int *)((longlong)param_2 + 0xc) << 5
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_60._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_64 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_64,4);
      }
      else {
        FUN_14572512c(param_1,&local_64);
      }
    }
    else {
      local_64 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_58 = param_2 + 2;
    local_60 = (undefined8 *)&DAT_100000000;
    local_50 = 0xffffffff;
    local_48 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_60);
    }
    local_88 = local_60;
    local_80 = local_58;
    local_78 = local_50;
    uVar6 = local_78;
    local_70 = local_48;
    local_6c = local_44;
    local_78._4_4_ = (int)((ulonglong)local_50 >> 0x20);
    local_90 = param_2;
    if (local_78._4_4_ < (int)local_58[3]) {
      iVar8 = local_78._4_4_;
      local_78 = uVar6;
      do {
        puVar7 = (undefined4 *)((longlong)iVar8 * 0x20 + *local_90);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7 + 1,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          puVar7[1] = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_1405d0c38(param_1,puVar7 + 2);
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar8 = local_78._4_4_;
        uVar6 = local_78;
      } while (local_78._4_4_ < (int)local_80[3]);
    }
  }
  else {
    local_60 = (undefined8 *)((ulonglong)local_60._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_60,4);
      }
      else {
        FUN_14572512c(param_1,&local_60);
      }
    }
    else {
      local_60 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_146012f16(param_2,(ulonglong)local_60 & 0xffffffff);
    uVar6 = local_78;
    if (0 < (int)local_60) {
      iVar8 = 0;
      do {
        FUN_1490d4f66(param_2,&local_90);
        puVar4 = local_88;
        *local_88 = 0;
        local_88[1] = 0;
        local_88[2] = 0;
        *(undefined4 *)(local_88 + 3) = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_88,4);
          }
          else {
            FUN_14572512c(param_1,local_88);
          }
        }
        else {
          *(undefined4 *)local_88 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar3 = (undefined4 *)((longlong)puVar4 + 4);
        puVar7 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar7 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar3,4);
          }
          else {
            FUN_14572512c(param_1);
          }
        }
        else {
          *puVar3 = *puVar7;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        FUN_1405d0c38(param_1,puVar4 + 1);
        iVar8 = iVar8 + 1;
        uVar6 = local_78;
      } while (iVar8 < (int)local_60);
    }
  }
  local_78 = uVar6;
  if ((local_40 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490d4f66 FUN_1490d4f66 body=229 status=ok
// SIG undefined FUN_1490d4f66(void)

int * FUN_1490d4f66(longlong *param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  longlong *plVar4;
  int iVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar6 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar6 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar6) {
      FUN_1447711aa(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar3 = FUN_144a54ea4(param_1 + 2,1);
    plVar4 = (longlong *)param_1[4];
    if ((longlong *)param_1[4] == (longlong *)0x0) {
      plVar4 = param_1 + 2;
    }
    iVar5 = iVar3 + 0x1f;
    if (-1 < iVar3) {
      iVar5 = iVar3;
    }
    bVar2 = (byte)iVar3 & 0x1f;
    puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar5 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    iVar6 = (int)param_1[6];
    lVar7 = (longlong)iVar6;
    iVar3 = *(int *)(*param_1 + 4 + lVar7 * 0x20);
    *(int *)(param_1 + 6) = iVar3;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar3 * 0x20) = 0xffffffff;
    }
  }
  plVar4 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[4];
  }
  iVar3 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  puVar1 = (uint *)((longlong)plVar4 + (longlong)(iVar3 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  *(longlong *)(param_2 + 2) = lVar7 * 0x20 + *param_1;
  return param_2;
}



// FUNCTION 1490d504c FUN_1490d504c body=449 status=ok
// SIG undefined FUN_1490d504c(void)

void FUN_1490d504c(longlong *param_1)

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
        iVar6 = FUN_144a78877(*(undefined4 *)(lVar3 + lVar10),*(undefined4 *)(lVar3 + 4 + lVar10));
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



// FUNCTION 1490d520e FUN_1490d520e body=131 status=ok
// SIG undefined FUN_1490d520e(void)

longlong FUN_1490d520e(longlong param_1,longlong param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  
  FUN_1490d5291();
  if (((*(byte *)(param_1 + 0x28) & 1) != 0) ||
     (((*(byte *)(param_1 + 0x28) & 4) == 0 && ((*(byte *)(param_1 + 0x2b) & 4) != 0)))) {
    if (*(longlong *)(param_2 + 0x40) != 0) {
      FUN_1446efa72(param_2 + 0x40,0,0,4);
    }
    *(undefined4 *)(param_2 + 0x48) = 0;
    uVar2 = *(int *)(param_2 + 8) - *(int *)(param_2 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar1 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar1 == 0; lVar1 = lVar1 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar1 & 0x1f);
    }
    if ((0 < (int)uVar2) && (0 < iVar4)) {
      *(int *)(param_2 + 0x48) = iVar4;
      FUN_1461492e2(param_2);
    }
  }
  return param_1;
}



// FUNCTION 1490d5291 FUN_1490d5291 body=892 status=ok
// SIG undefined FUN_1490d5291(void)

longlong * FUN_1490d5291(longlong *param_1,longlong *param_2)

{
  int *piVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 auStack_a8 [40];
  longlong *local_80;
  undefined8 local_78;
  longlong *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined4 local_5c;
  int local_54;
  undefined8 local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_34;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  (**(code **)(*param_1 + 0x10))
            (param_1,(longlong)(int)param_2[1] << 4,(longlong)*(int *)((longlong)param_2 + 0xc) << 4
            );
  (**(code **)(*param_1 + 0x10))
            (param_1,(int)param_2[5] + 0x1fU >> 3 & 0xfffffffc,
             *(int *)((longlong)param_2 + 0x2c) + 0x1fU >> 3 & 0xfffffffc);
  uVar5 = local_50._4_4_;
  if ((*(byte *)(param_1 + 5) & 1) == 0) {
    local_54 = (int)param_2[1] - *(int *)((longlong)param_2 + 0x34);
    puVar2 = (ulonglong *)param_1[1];
    piVar1 = (int *)*puVar2 + 1;
    if ((int *)puVar2[1] < piVar1) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_54,4);
      }
      else {
        FUN_14572512c(param_1,&local_54);
      }
    }
    else {
      local_54 = *(int *)*puVar2;
      *puVar2 = (ulonglong)piVar1;
    }
    local_48 = param_2 + 2;
    local_50 = (undefined8 *)&DAT_100000000;
    local_40 = 0xffffffff;
    local_38 = 0;
    if ((int)param_2[5] != 0) {
      FUN_1449c0562(&local_50);
    }
    local_78 = local_50;
    local_70 = local_48;
    local_68 = local_40;
    uVar6 = local_68;
    local_60 = local_38;
    local_5c = local_34;
    local_68._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    local_80 = param_2;
    if (local_68._4_4_ < (int)local_48[3]) {
      iVar8 = local_68._4_4_;
      local_68 = uVar6;
      do {
        puVar7 = (undefined4 *)((longlong)iVar8 * 0x10 + *local_80);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar7 = puVar7 + 1;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        local_68 = CONCAT44(local_68._4_4_,(uint)local_68 & ~local_78._4_4_);
        FUN_1449c0562(&local_78);
        iVar8 = local_68._4_4_;
        uVar6 = local_68;
      } while (local_68._4_4_ < (int)local_70[3]);
    }
  }
  else {
    local_50 = (undefined8 *)((ulonglong)local_50._4_4_ << 0x20);
    puVar2 = (ulonglong *)param_1[1];
    puVar3 = (undefined4 *)*puVar2 + 1;
    if ((undefined4 *)puVar2[1] < puVar3) {
      if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
        (**(code **)(*param_1 + 0x170))(param_1,&local_50,4);
      }
      else {
        FUN_14572512c(param_1,&local_50);
      }
    }
    else {
      local_50 = (undefined8 *)CONCAT44(uVar5,*(undefined4 *)*puVar2);
      *puVar2 = (ulonglong)puVar3;
    }
    FUN_14584f328(param_2,(ulonglong)local_50 & 0xffffffff);
    uVar6 = local_68;
    if (0 < (int)local_50) {
      iVar8 = 0;
      do {
        FUN_1461491fc(param_2,&local_80);
        puVar4 = local_78;
        *local_78 = 0;
        *(undefined4 *)(local_78 + 1) = 0xffffffff;
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,local_78,4);
          }
          else {
            FUN_14572512c(param_1,local_78);
          }
        }
        else {
          *(undefined4 *)local_78 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        puVar7 = (undefined4 *)((longlong)puVar4 + 4);
        puVar3 = *(undefined4 **)param_1[1];
        if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar3 + 1) {
          if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
            (**(code **)(*param_1 + 0x170))(param_1,puVar7,4);
          }
          else {
            FUN_14572512c(param_1,puVar7);
          }
        }
        else {
          *puVar7 = *puVar3;
          *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
        }
        iVar8 = iVar8 + 1;
        uVar6 = local_68;
      } while (iVar8 < (int)local_50);
    }
  }
  local_68 = uVar6;
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1490d560e FUN_1490d560e body=135 status=ok
// SIG undefined FUN_1490d560e(void)

longlong FUN_1490d560e(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  iVar1 = FUN_1490d2f00();
  if (iVar1 != -1) {
    lVar3 = *param_1;
    lVar2 = (longlong)iVar1;
    if (lVar3 + lVar2 * 0x28 != 0) goto LAB_1490d5648;
  }
  local_30 = param_3;
  FUN_1490d5696(param_1,&local_24,param_2);
  lVar2 = (longlong)local_24;
  lVar3 = *param_1;
LAB_1490d5648:
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return lVar3 + lVar2 * 0x28 + 0x10;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d5696 FUN_1490d5696 body=272 status=ok
// SIG undefined FUN_1490d5696(void)

undefined4 * FUN_1490d5696(longlong param_1,undefined4 *param_2,uint param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  longlong local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1490d448e(param_1,local_48);
  FUN_1490d5828(param_4,local_40);
  *(undefined4 *)(local_40 + 0x20) = 0xffffffff;
  cVar1 = FUN_1490d57a8(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)(local_40 + 0x24) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 0x20) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1490d495c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d57a8 FUN_1490d57a8 body=128 status=ok
// SIG undefined FUN_1490d57a8(void)

undefined8 FUN_1490d57a8(longlong *param_1,undefined8 param_2,undefined4 *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     (iVar9 = FUN_1490d2f00(), iVar9 != -1)) {
    plVar1 = (longlong *)(*param_1 + (longlong)iVar9 * 0x28);
    if (plVar1[2] != 0) {
      FUN_1400020a8();
    }
    if (*plVar1 != 0) {
      FUN_1400020a8();
    }
    uVar2 = *param_3;
    uVar3 = param_3[1];
    uVar4 = param_3[2];
    uVar5 = param_3[3];
    uVar6 = param_3[5];
    uVar7 = param_3[6];
    uVar8 = param_3[7];
    *(undefined4 *)(plVar1 + 2) = param_3[4];
    *(undefined4 *)((longlong)plVar1 + 0x14) = uVar6;
    *(undefined4 *)(plVar1 + 3) = uVar7;
    *(undefined4 *)((longlong)plVar1 + 0x1c) = uVar8;
    *(undefined4 *)plVar1 = uVar2;
    *(undefined4 *)((longlong)plVar1 + 4) = uVar3;
    *(undefined4 *)(plVar1 + 1) = uVar4;
    *(undefined4 *)((longlong)plVar1 + 0xc) = uVar5;
    FUN_1490d5884(param_1,*param_4);
    *param_4 = iVar9;
    return 1;
  }
  return 0;
}



// FUNCTION 1490d5828 FUN_1490d5828 body=92 status=ok
// SIG undefined FUN_1490d5828(void)

undefined8 * FUN_1490d5828(longlong *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  void *_Src;
  
  puVar2 = (undefined8 *)*param_1;
  *param_2 = 0;
  iVar1 = *(int *)(puVar2 + 1);
  _Src = (void *)*puVar2;
  *(int *)(param_2 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_2 + 0xc) = 0;
  }
  else {
    FUN_1446dd670(param_2,iVar1,0);
    memcpy((void *)*param_2,_Src,(longlong)iVar1 * 2);
  }
  param_2[2] = 0;
  param_2[3] = 0;
  return param_2;
}



// FUNCTION 1490d5884 FUN_1490d5884 body=114 status=ok
// SIG undefined FUN_1490d5884(void)

void FUN_1490d5884(longlong *param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  undefined4 uVar6;
  int iVar7;
  
  lVar3 = *param_1;
  if (*(int *)((longlong)param_1 + 0x34) != 0) {
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x28) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x28);
  *puVar1 = 0xffffffff;
  if (*(int *)((longlong)param_1 + 0x34) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = (undefined4)param_1[6];
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 6) = param_2;
  *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
  plVar5 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[4];
  }
  iVar7 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar7 = param_2;
  }
  bVar4 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)((longlong)plVar5 + (longlong)(iVar7 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  return;
}



// FUNCTION 1490d58f6 FUN_1490d58f6 body=120 status=ok
// SIG undefined FUN_1490d58f6(void)

longlong FUN_1490d58f6(longlong *param_1,undefined4 param_2,undefined8 param_3)

{
  longlong lVar1;
  undefined1 auStack_58 [40];
  undefined8 local_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1490d5970();
  if (lVar1 == 0) {
    local_30 = param_3;
    FUN_1490d59ca(param_1,&local_24,param_2);
    lVar1 = (longlong)local_24 * 0x20 + *param_1;
  }
  if ((local_20 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar1 + 8;
}



// FUNCTION 1490d5970 FUN_1490d5970 body=90 status=ok
// SIG undefined FUN_1490d5970(void)

longlong FUN_1490d5970(longlong *param_1,uint param_2,int *param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar3 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar3 = (longlong *)param_1[8];
    }
    iVar2 = *(int *)((longlong)plVar3 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar2 != -1) {
      lVar1 = *param_1;
      do {
        lVar4 = (longlong)iVar2 * 0x20;
        if ((*(int *)(lVar1 + lVar4) == *param_3) && (*(int *)(lVar1 + 4 + lVar4) == param_3[1])) {
          return lVar1 + lVar4;
        }
        iVar2 = *(int *)(lVar1 + lVar4 + 0x18);
      } while (iVar2 != -1);
    }
  }
  return 0;
}



// FUNCTION 1490d59ca FUN_1490d59ca body=286 status=ok
// SIG undefined FUN_1490d59ca(void)

undefined4 * FUN_1490d59ca(longlong param_1,undefined4 *param_2,uint param_3,undefined8 *param_4)

{
  char cVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined1 auStack_68 [32];
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1490d4f66(param_1,local_48);
  *local_40 = *(undefined8 *)*param_4;
  local_40[1] = 0;
  local_40[2] = 0;
  FUN_1447a1747(0,0);
  *(undefined4 *)(local_40 + 3) = 0xffffffff;
  cVar1 = FUN_1490d5aea(param_1,param_3,local_40,local_48);
  if (cVar1 == '\0') {
    uVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar4 = 1;
    if (3 < uVar2) {
      uVar3 = (ulonglong)(uVar2 & 0xfffffffe) + 0xf;
      lVar5 = 0x3f;
      if (uVar3 != 0) {
        for (; uVar3 >> lVar5 == 0; lVar5 = lVar5 + -1) {
        }
      }
      iVar4 = 1 << ((byte)lVar5 & 0x1f);
    }
    if (((int)uVar2 < 1) || (iVar4 <= *(int *)(param_1 + 0x48))) {
      param_3 = *(int *)(param_1 + 0x48) - 1U & param_3;
      *(uint *)((longlong)local_40 + 0x1c) = param_3;
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 3) =
           *(undefined4 *)
            (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4);
      lVar5 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar5 = param_1 + 0x38;
      }
      *(undefined4 *)
       (lVar5 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)param_3) * 4) =
           local_48[0];
    }
    else {
      *(int *)(param_1 + 0x48) = iVar4;
      FUN_1490d504c(param_1);
    }
  }
  *param_2 = local_48[0];
  if ((local_38 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d5aea FUN_1490d5aea body=182 status=ok
// SIG undefined FUN_1490d5aea(void)

undefined8 FUN_1490d5aea(longlong *param_1,uint param_2,int *param_3,int *param_4)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  
  if (1 < (uint)((int)param_1[1] - *(int *)((longlong)param_1 + 0x34))) {
    plVar7 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar7 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar7 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar8 != -1) {
      lVar2 = *param_1;
      do {
        lVar9 = (longlong)iVar8 * 0x20;
        piVar1 = (int *)(lVar2 + lVar9);
        if ((*(int *)(lVar2 + lVar9) == *param_3) && (*(int *)(lVar2 + 4 + lVar9) == param_3[1])) {
          FUN_1447a1747(*(undefined8 *)(piVar1 + 2),piVar1[4]);
          if (*(longlong *)(piVar1 + 2) != 0) {
            FUN_1400020a8();
          }
          iVar3 = *param_3;
          iVar4 = param_3[1];
          iVar5 = param_3[2];
          iVar6 = param_3[3];
          *(undefined8 *)(piVar1 + 4) = *(undefined8 *)(param_3 + 4);
          *piVar1 = iVar3;
          piVar1[1] = iVar4;
          piVar1[2] = iVar5;
          piVar1[3] = iVar6;
          FUN_1490d3246(param_1,*param_4);
          *param_4 = iVar8;
          return 1;
        }
        iVar8 = piVar1[6];
      } while (iVar8 != -1);
    }
  }
  return 0;
}



// FUNCTION 1490d5ba0 FUN_1490d5ba0 body=356 status=ok
// SIG undefined FUN_1490d5ba0(void)

void FUN_1490d5ba0(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  longlong lVar8;
  undefined2 *puVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  longlong *plVar14;
  undefined4 *puVar15;
  ulonglong uVar16;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar3 = (uint)((ulonglong)uVar2 >> 0x10);
    uVar13 = (uint)uVar2 & 0xffff;
    uVar5 = (uint)((ulonglong)uVar1 >> 0x10);
    uVar12 = (uint)uVar1 & 0xffff;
    uVar5 = ((uint)uVar1 << 0x10 | uVar12) + (int)((ulonglong)uVar1 >> 0x20) +
            (uVar5 << 0x13 | uVar5 & 0xffff) + (uVar12 >> 4);
    iVar11 = 0;
    uVar6 = FUN_144a78877(0,(uVar5 >> 2) +
                            ((uint)uVar2 << 0x10 | uVar13) + (int)((ulonglong)uVar2 >> 0x20) +
                            (uVar3 << 0x13 | uVar3 & 0xffff) + (uVar13 >> 4) + uVar5 * 0x40 +
                            0x9e3779b9 ^ uVar5);
    if (*(int *)(param_2 + 3) == 0) {
      puVar9 = &DAT_149dfb77a;
    }
    else {
      puVar9 = (undefined2 *)param_2[2];
      iVar11 = *(int *)(param_2 + 3) + -1;
    }
    uVar7 = FUN_144a49b4a(iVar11,puVar9);
    iVar11 = FUN_144a78877(uVar6,uVar7);
    plVar14 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar14 = (longlong *)param_1[8];
    }
    uVar16 = (longlong)iVar11 & (longlong)(int)param_1[9] - 1U;
    lVar8 = (longlong)*(int *)((longlong)plVar14 + uVar16 * 4);
    if (lVar8 != -1) {
      lVar8 = lVar8 * 0x38 + *param_1;
      cVar4 = FUN_144a7afa6(lVar8,param_2);
      if (cVar4 == '\0') {
        do {
          lVar10 = lVar8;
          lVar8 = (longlong)*(int *)(lVar10 + 0x30);
          if (lVar8 == -1) {
            return;
          }
          lVar8 = lVar8 * 0x38 + *param_1;
          cVar4 = FUN_144a7afa6(lVar8,param_2);
        } while (cVar4 == '\0');
        puVar15 = (undefined4 *)(lVar10 + 0x30);
      }
      else {
        puVar15 = (undefined4 *)((longlong)plVar14 + uVar16 * 4);
      }
      FUN_1490d5d04(param_1,*puVar15);
      return;
    }
  }
  return;
}



// FUNCTION 1490d5d04 FUN_1490d5d04 body=87 status=ok
// SIG undefined FUN_1490d5d04(void)

void FUN_1490d5d04(longlong *param_1,int param_2)

{
  longlong lVar1;
  undefined4 *puVar2;
  int iVar3;
  longlong *plVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  plVar4 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar4 = (longlong *)param_1[8];
  }
  lVar5 = (longlong)*(int *)(lVar1 + 0x34 + (longlong)param_2 * 0x38);
  iVar3 = *(int *)((longlong)plVar4 + lVar5 * 4);
  if (iVar3 == param_2) {
    puVar2 = (undefined4 *)((longlong)plVar4 + lVar5 * 4);
  }
  else {
    do {
      lVar5 = (longlong)iVar3;
      iVar3 = *(int *)(lVar1 + 0x30 + lVar5 * 0x38);
    } while (iVar3 != param_2);
    puVar2 = (undefined4 *)(lVar1 + lVar5 * 0x38 + 0x30);
  }
  *puVar2 = *(undefined4 *)(lVar1 + (longlong)param_2 * 0x38 + 0x30);
  FUN_1490d5d5c();
  return;
}



// FUNCTION 1490d5d5c FUN_1490d5d5c body=72 status=ok
// SIG undefined FUN_1490d5d5c(void)

void FUN_1490d5d5c(longlong *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = *param_1;
  if (*(longlong *)(lVar1 + 0x20 + (longlong)param_2 * 0x38) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(lVar1 + (longlong)param_2 * 0x38 + 0x10) != 0) {
    FUN_1400020a8();
  }
  FUN_1490d2640(param_1,param_2);
  return;
}



// FUNCTION 1490d5da4 FUN_1490d5da4 body=87 status=ok
// SIG undefined FUN_1490d5da4(void)

void FUN_1490d5da4(longlong *param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 *puVar3;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  
  lVar2 = *param_1;
  plVar5 = param_1 + 7;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    plVar5 = (longlong *)param_1[8];
  }
  lVar1 = lVar2 + (longlong)param_2 * 0x28;
  lVar6 = (longlong)*(int *)(lVar1 + 0x24);
  iVar4 = *(int *)((longlong)plVar5 + lVar6 * 4);
  if (iVar4 == param_2) {
    puVar3 = (undefined4 *)((longlong)plVar5 + lVar6 * 4);
  }
  else {
    do {
      lVar6 = (longlong)iVar4;
      iVar4 = *(int *)(lVar2 + 0x20 + lVar6 * 0x28);
    } while (iVar4 != param_2);
    puVar3 = (undefined4 *)(lVar2 + lVar6 * 0x28 + 0x20);
  }
  *puVar3 = *(undefined4 *)(lVar1 + 0x20);
  FUN_1490d5dfc();
  return;
}



// FUNCTION 1490d5dfc FUN_1490d5dfc body=70 status=ok
// SIG undefined FUN_1490d5dfc(void)

void FUN_1490d5dfc(longlong *param_1,int param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)(*param_1 + (longlong)param_2 * 0x28);
  if (plVar1[2] != 0) {
    FUN_1400020a8();
  }
  if (*plVar1 != 0) {
    FUN_1400020a8();
  }
  FUN_1490d5884(param_1,param_2);
  return;
}



// FUNCTION 1490d5e42 FUN_1490d5e42 body=31 status=ok
// SIG undefined FUN_1490d5e42(void)

undefined8 FUN_1490d5e42(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d5e7e FUN_1490d5e7e body=93 status=ok
// SIG undefined FUN_1490d5e7e(void)

void FUN_1490d5e7e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
            ::vftable;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2c50;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1490d5edc FUN_1490d5edc body=126 status=ok
// SIG undefined FUN_1490d5edc(void)

void FUN_1490d5edc(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined4 uVar2;
  DWORD DVar3;
  DWORD DVar4;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 =
       TCommonDelegateInstanceState<class_IModuleInterface*___ptr64___cdecl(void),FDefaultDelegateUserPolicy>
       ::vftable;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bac2c50;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490d5f4b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490d5f5a FUN_1490d5f5a body=21 status=ok
// SIG undefined FUN_1490d5f5a(void)

undefined8 FUN_1490d5f5a(longlong param_1)

{
  (**(code **)(param_1 + 0x20))(*(undefined8 *)(param_1 + 0x18));
  return 1;
}



// FUNCTION 1490d5f70 FUN_1490d5f70 body=31 status=ok
// SIG undefined FUN_1490d5f70(void)

undefined8 FUN_1490d5f70(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d5fa0 FUN_1490d5fa0 body=85 status=ok
// SIG undefined FUN_1490d5fa0(void)

void FUN_1490d5fa0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bac2d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2d00;
  return;
}



// FUNCTION 1490d5ff6 FUN_1490d5ff6 body=85 status=ok
// SIG undefined FUN_1490d5ff6(void)

void FUN_1490d5ff6(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bac2d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2d00;
  return;
}



// FUNCTION 1490d604c FUN_1490d604c body=118 status=ok
// SIG undefined FUN_1490d604c(void)

void FUN_1490d604c(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bac2d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bac2d00;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490d60b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490d60ca FUN_1490d60ca body=19 status=ok
// SIG undefined FUN_1490d60ca(void)

undefined1 FUN_1490d60ca(undefined8 param_1,undefined8 param_2)

{
  FUN_1490d60e0(param_2);
  return 1;
}



// FUNCTION 1490d60e0 FUN_1490d60e0 body=146 status=ok
// SIG undefined FUN_1490d60e0(void)

void FUN_1490d60e0(longlong param_1)

{
  undefined2 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_48 [32];
  undefined2 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_28 = (undefined2 *)0x0;
    uStack_20 = 0;
    FUN_1401031ac(0,0,&local_28);
    iVar4 = (int)uStack_20 + -1;
    puVar1 = local_28;
    if ((int)uStack_20 == 0) {
      iVar4 = 0;
      puVar1 = &DAT_149dfb77a;
    }
    uVar2 = FUN_144a49b4a(iVar4,puVar1);
    piVar3 = (int *)FUN_146b84648(&DAT_14cbfe758,uVar2,&local_28);
    *piVar3 = *piVar3 + 1;
    if (local_28 != (undefined2 *)0x0) {
      FUN_1400020a8();
    }
  }
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d6174 FUN_1490d6174 body=31 status=ok
// SIG undefined FUN_1490d6174(void)

undefined8 FUN_1490d6174(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1490d61a4 FUN_1490d61a4 body=85 status=ok
// SIG undefined FUN_1490d61a4(void)

void FUN_1490d61a4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bac2e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2de0;
  return;
}



// FUNCTION 1490d61fa FUN_1490d61fa body=85 status=ok
// SIG undefined FUN_1490d61fa(void)

void FUN_1490d61fa(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14bac2e50;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14bac2de0;
  return;
}



// FUNCTION 1490d6250 FUN_1490d6250 body=118 status=ok
// SIG undefined FUN_1490d6250(void)

void FUN_1490d6250(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14bac2e50;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14bac2de0;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001490d62b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1490d62d8 FUN_1490d62d8 body=28 status=ok
// SIG undefined FUN_1490d62d8(void)

undefined8 FUN_1490d62d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong *param_4)

{
  *(int *)(*param_4 + 0x94) = *(int *)(*param_4 + 0x94) + 1;
  FUN_1490d62f6(param_3);
  return 1;
}



// FUNCTION 1490d62f6 FUN_1490d62f6 body=104 status=ok
// SIG undefined FUN_1490d62f6(void)

void FUN_1490d62f6(longlong param_1)

{
  undefined1 auStack_48 [32];
  longlong local_28 [3];
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    local_28[0] = 0;
    local_28[1] = 0;
    FUN_1401031ac(0,0,local_28);
    FUN_1467d61de(&DAT_14cbfe758,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1490d6360 FUN_1490d6360 body=53 status=ok
// SIG undefined FUN_1490d6360(void)

void FUN_1490d6360(longlong param_1)

{
  FUN_1490d6396();
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x60) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}


