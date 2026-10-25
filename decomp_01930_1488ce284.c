// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 1488ce284 FUN_1488ce284 body=149 status=ok
// SIG undefined FUN_1488ce284(void)

undefined8 FUN_1488ce284(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Instigator attribute aspects ({value}%d{header}):");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",0);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce31a FUN_1488ce31a body=162 status=ok
// SIG undefined FUN_1488ce31a(void)

undefined8 FUN_1488ce31a(undefined8 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Attribute effects from {value}%s{header} ({value}%d{header}):",
                L"Unknown",param_3);
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce3be FUN_1488ce3be body=165 status=ok
// SIG undefined FUN_1488ce3be(void)

undefined8
FUN_1488ce3be(undefined8 param_1,undefined4 param_2,uint param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 auStack_68 [32];
  undefined2 *local_48;
  undefined2 *local_38;
  int local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_140002266(&local_38,param_4,param_5);
  local_48 = &DAT_149dfb77a;
  if (local_30 != 0) {
    local_48 = local_38;
  }
  FUN_140002266(param_1,L"%*s%s",(param_3 & 0xff) * 2);
  if (local_38 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce464 FUN_1488ce464 body=152 status=ok
// SIG undefined FUN_1488ce464(void)

undefined8 FUN_1488ce464(undefined8 param_1,undefined4 param_2)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Inventory Stats ({value}%d{header}):");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",2);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce4fe FUN_1488ce4fe body=161 status=ok
// SIG undefined FUN_1488ce4fe(void)

undefined8 FUN_1488ce4fe(undefined8 param_1,undefined4 param_2,float param_3)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"Rarity Multiplier={value}%g",(double)param_3);
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce5a0 FUN_1488ce5a0 body=161 status=ok
// SIG undefined FUN_1488ce5a0(void)

undefined8 FUN_1488ce5a0(undefined8 param_1,undefined4 param_2,undefined8 param_3,float param_4)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_140002266(&local_30,L"{header}Stat {value}%s{header}: Value={value}%g{header}",param_3,
                (double)param_4);
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",4);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce642 FUN_1488ce642 body=167 status=ok
// SIG undefined FUN_1488ce642(void)

undefined8
FUN_1488ce642(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
             float param_5)

{
  undefined1 auStack_58 [32];
  undefined2 *local_38;
  undefined2 *local_30;
  int local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = (undefined2 *)(double)param_5;
  FUN_140002266(&local_30,L"{value}%s{normal}: %s={value}%g");
  local_38 = &DAT_149dfb77a;
  if (local_28 != 0) {
    local_38 = local_30;
  }
  FUN_140002266(param_1,L"%*s%s",6);
  if (local_30 != (undefined2 *)0x0) {
    FUN_1400020a8();
  }
  FUN_1488ce6ea(param_2,param_1);
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce6ea FUN_1488ce6ea body=137 status=ok
// SIG undefined FUN_1488ce6ea(void)

void FUN_1488ce6ea(uint param_1,undefined8 param_2)

{
  wchar_t *pwVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
  bVar4 = (param_1 >> 0xc & 1) == 0;
  pwVar2 = L"{white}";
  if (bVar4) {
    pwVar2 = L"";
  }
  pwVar1 = L"{green}";
  if (bVar4) {
    pwVar1 = L"";
  }
  pwVar3 = L"{yellow}";
  if (bVar4) {
    pwVar3 = L"";
  }
  FUN_1448097c4(param_2,L"{normal}",pwVar2,1);
  FUN_1448097c4(param_2,L"{header}",pwVar1,1);
  FUN_1448097c4(param_2,L"{value}",pwVar3,1);
  return;
}



// FUNCTION 1488ce774 FUN_1488ce774 body=268 status=ok
// SIG undefined FUN_1488ce774(void)

undefined1 *
FUN_1488ce774(undefined8 param_1,undefined1 *param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong *plVar4;
  undefined1 auStack_58 [40];
  longlong local_30;
  longlong *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar2 = FUN_140fecfdc(param_4);
  if ((lVar2 != 0) && (lVar2 = *(longlong *)(lVar2 + 0x168), lVar2 != 0)) {
    uVar3 = FUN_140840456();
    plVar4 = (longlong *)FUN_144718840(lVar2,uVar3);
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_30);
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0x100000000;
      goto joined_r0x0001488ce818;
    }
  }
  FUN_140232ee4(param_4,&local_30);
  *(undefined8 *)(param_2 + 0x30) = 0;
  *(undefined8 *)(param_2 + 0x38) = 0x100000000;
joined_r0x0001488ce818:
  if (local_30 != 0) {
    *(undefined4 *)(param_2 + 0x38) = 1;
    *param_2 = 0;
    *(undefined4 *)(param_2 + 0x28) = 0;
    FUN_1408403ca(param_2,&local_30);
  }
  if (local_28 != (longlong *)0x0) {
    LOCK();
    plVar4 = local_28 + 1;
    *(int *)plVar4 = (int)*plVar4 + -1;
    UNLOCK();
    if ((int)*plVar4 == 0) {
      (**(code **)*local_28)(local_28);
      LOCK();
      piVar1 = (int *)((longlong)local_28 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*local_28 + 0x10))(local_28);
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce88a FUN_1488ce88a body=155 status=ok
// SIG undefined FUN_1488ce88a(void)

undefined8 FUN_1488ce88a(longlong *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_58 [44];
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(ulonglong *)(param_2 + 0xc);
  if (DAT_14c87ead8 == '\0') {
    FUN_140024d3a(&DAT_14c87eb00);
    DAT_14c87ead8 = '\x01';
  }
  if (uVar1 == DAT_14c892b68) {
    local_2c = *(undefined4 *)(param_2 + 8);
    lVar3 = FUN_1407ed5e8();
    cVar2 = FUN_1468ec2ac(&local_2c,*(undefined8 *)(lVar3 + 0x18));
    if (cVar2 != '\0') {
      uVar4 = (**(code **)(*param_1 + 0x38))(param_1,param_3);
      goto LAB_1488ce905;
    }
  }
  uVar4 = 0;
LAB_1488ce905:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ce926 FUN_1488ce926 body=190 status=ok
// SIG undefined FUN_1488ce926(void)

longlong FUN_1488ce926(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1c);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74))) {
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar3) {
          if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
             (lVar3 = plVar1[1], lVar3 != 0)) {
            return lVar3;
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  lVar3 = FUN_1488d05a0(param_1 + 0x28);
  if ((lVar3 == 0) && (lVar3 = 0, *(char *)(param_1 + 0x24) != '\0')) {
    lVar3 = param_2;
  }
  return lVar3;
}



// FUNCTION 1488ce9e4 FUN_1488ce9e4 body=219 status=ok
// SIG undefined FUN_1488ce9e4(void)

void FUN_1488ce9e4(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar5 = (longlong *)*param_2;
    plVar1 = plVar5 + (int)param_2[1];
    do {
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        lVar3 = *plVar5;
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar6 = (uint)lVar3 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar8 = param_1 + 0x78;
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0x88) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar7 * 0x18);
            if (*plVar2 == lVar3) {
              if ((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) && (plVar2[1] != 0))
              {
                return;
              }
              break;
            }
            iVar7 = (int)plVar2[2];
          } while (iVar7 != -1);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  FUN_1488ce926(param_1,param_3);
  return;
}



// FUNCTION 1488ceac0 FUN_1488ceac0 body=190 status=ok
// SIG undefined FUN_1488ceac0(void)

longlong FUN_1488ceac0(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  int iVar6;
  
  lVar3 = *(longlong *)(param_1 + 0x1c);
  if ((lVar3 != 0) && (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74))) {
    uVar2 = (uint)((ulonglong)lVar3 >> 0x10);
    uVar5 = (uint)lVar3 & 0xffff;
    lVar4 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar4 = *(longlong *)(param_1 + 0x80);
    }
    iVar6 = *(int *)(lVar4 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar5) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar5 >> 4)) * 4);
    if (iVar6 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar6 * 0x18);
        if (*plVar1 == lVar3) {
          if (((plVar1 != (longlong *)0x0) && (plVar1 + 1 != (longlong *)0x0)) &&
             (lVar3 = plVar1[1], lVar3 != 0)) {
            return lVar3;
          }
          break;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  lVar3 = FUN_1488ceeca(param_1 + 0x28);
  if ((lVar3 == 0) && (lVar3 = 0, *(char *)(param_1 + 0x24) != '\0')) {
    lVar3 = param_2;
  }
  return lVar3;
}



// FUNCTION 1488ceb7e FUN_1488ceb7e body=228 status=ok
// SIG undefined FUN_1488ceb7e(void)

void FUN_1488ceb7e(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((param_2 != (longlong *)0x0) && ((longlong)(int)param_2[1] != 0)) {
    plVar5 = (longlong *)*param_2;
    plVar1 = plVar5 + (int)param_2[1];
    do {
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        lVar3 = *plVar5;
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar6 = (uint)lVar3 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar8 = param_1 + 0x78;
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0x88) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar7 * 0x18);
            if (*plVar2 == lVar3) {
              if ((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) && (plVar2[1] != 0))
              {
                return;
              }
              break;
            }
            iVar7 = (int)plVar2[2];
          } while (iVar7 != -1);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  FUN_1488ceac0(param_1,param_3);
  return;
}



// FUNCTION 1488cec62 FUN_1488cec62 body=155 status=ok
// SIG undefined FUN_1488cec62(void)

undefined4 FUN_1488cec62(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [32];
  undefined8 **local_48 [3];
  ushort local_30;
  byte local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448729ea(param_1,local_48,param_2);
  uVar3 = FUN_144a7ecd0(local_48);
  pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_28 * 0x120));
  if (pcVar1 != (code *)0x0) {
    pppuVar2 = local_48;
    if (0x18 < local_30) {
      pppuVar2 = (undefined8 ***)local_48[0];
    }
    (*pcVar1)(pppuVar2);
  }
  if (0x18 < local_30) {
    FUN_1400020a8(local_48[0]);
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cecfe FUN_1488cecfe body=9 status=ok
// SIG undefined FUN_1488cecfe(void)

void FUN_1488cecfe(longlong param_1)

{
  FUN_140cde26e(param_1 + 8);
  return;
}



// FUNCTION 1488ced08 FUN_1488ced08 body=9 status=ok
// SIG undefined FUN_1488ced08(void)

void FUN_1488ced08(longlong param_1)

{
  FUN_14005ef80(param_1 + 8);
  return;
}



// FUNCTION 1488ced12 FUN_1488ced12 body=9 status=ok
// SIG undefined FUN_1488ced12(void)

void FUN_1488ced12(longlong param_1)

{
  FUN_140372754(param_1 + 8);
  return;
}



// FUNCTION 1488ced1c FUN_1488ced1c body=130 status=ok
// SIG undefined FUN_1488ced1c(void)

undefined8 FUN_1488ced1c(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [32];
  longlong local_28 [2];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < *(int *)(param_1 + 0x50)) {
    FUN_140002266(local_28,L"Items: %d");
    FUN_140233b1a(param_2,local_28);
    if (local_28[0] != 0) {
      FUN_1400020a8();
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_48);
  }
  FUN_144a5dc74(param_2);
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488ceda0 FUN_1488ceda0 body=5 status=ok
// SIG undefined FUN_1488ceda0(void)

longlong FUN_1488ceda0(longlong param_1)

{
  return param_1 + 0x48;
}



// FUNCTION 1488ceda6 FUN_1488ceda6 body=290 status=ok
// SIG undefined FUN_1488ceda6(void)

undefined8 FUN_1488ceda6(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined2 *puVar2;
  undefined1 auStack_68 [32];
  longlong local_48;
  int local_40;
  longlong local_38;
  undefined8 uStack_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_38 = 0;
  uStack_30 = 0;
  if (*(int *)(param_1 + 0x60) < 1) {
    uStack_30._0_4_ = 0;
  }
  else {
    FUN_140002266(&local_48,L"Lists: %d");
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
  }
  iVar1 = (int)uStack_30;
  if (0 < *(int *)(param_1 + 0x50)) {
    puVar2 = (undefined2 *)&DAT_149e001d8;
    if ((int)uStack_30 < 2) {
      puVar2 = &DAT_149dfb77a;
    }
    FUN_140002266(&local_48,L"%sItems: %d",puVar2);
    iVar1 = local_40 + -1;
    if (local_40 == 0) {
      iVar1 = 0;
    }
    FUN_1400020e8(&local_38,local_48,iVar1);
    if (local_48 != 0) {
      FUN_1400020a8();
    }
    iVar1 = (int)uStack_30;
  }
  if (iVar1 < 2) {
    FUN_144a5dc74(param_2);
  }
  else {
    FUN_140009b9a(param_2,&local_38);
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488ceeca FUN_1488ceeca body=138 status=ok
// SIG undefined FUN_1488ceeca(void)

longlong FUN_1488ceeca(undefined8 *param_1)

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
    if (DAT_14cb83a30 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb83a30,local_40);
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



// FUNCTION 1488cef56 FUN_1488cef56 body=59 status=ok
// SIG undefined FUN_1488cef56(void)

void FUN_1488cef56(longlong param_1,longlong param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_1 + 0x30);
    *(uint *)(param_1 + 0x30) = iVar1 + 1U;
    if (*(uint *)(param_1 + 0x34) < iVar1 + 1U) {
      FUN_140a96716((longlong *)(param_1 + 0x28),iVar1);
    }
    *(longlong *)(*(longlong *)(param_1 + 0x28) + (longlong)iVar1 * 8) = param_2;
  }
  return;
}



// FUNCTION 1488cef92 FUN_1488cef92 body=29 status=ok
// SIG undefined FUN_1488cef92(void)

bool FUN_1488cef92(longlong *param_1)

{
  bool bVar1;
  
  if ((*param_1 == 0) || (bVar1 = true, 0xfffffffd < (int)param_1[1] - 1U)) {
    bVar1 = param_1[4] != 0;
  }
  return bVar1;
}



// FUNCTION 1488cefb0 FUN_1488cefb0 body=392 status=ok
// SIG undefined FUN_1488cefb0(void)

int * FUN_1488cefb0(int *param_1,longlong param_2,undefined8 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined1 auStack_88 [40];
  int local_60;
  char local_5c;
  int local_58;
  char local_54;
  int local_50;
  char local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  iVar2 = FUN_14005ff6c(param_2,param_3,0);
  if (iVar2 < param_4) {
    iVar2 = param_4;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  if ((longlong)*(int *)(param_2 + 0x50) != 0) {
    lVar5 = (longlong)*(int *)(param_2 + 0x50) * 0xc0;
    lVar6 = *(longlong *)(param_2 + 0x48) + 8;
    do {
      lVar4 = FUN_140372754(lVar6);
      if ((lVar4 == 0) || (*(int *)(lVar4 + 0x50) < 1)) {
        lVar4 = FUN_14005ef80(lVar6);
        if (lVar4 == 0) {
          lVar4 = FUN_140cde26e(lVar6);
          if (lVar4 == 0) {
            local_54 = '\0';
            iVar3 = local_58;
            goto LAB_1488cf097;
          }
          iVar3 = FUN_14005f6be(lVar4,param_3,0);
        }
        else {
          iVar3 = FUN_14005f32a(lVar4,param_3,0);
        }
        if (iVar3 < iVar2) {
          iVar3 = iVar2;
        }
        local_54 = '\x01';
      }
      else {
        FUN_1488cefb0(&local_50,lVar4,param_3,iVar2);
        local_54 = local_4c;
        iVar3 = local_50;
        if (local_4c == '\0') {
          iVar3 = local_58;
        }
      }
LAB_1488cf097:
      local_58 = iVar3;
      local_5c = (char)param_1[1];
      if (local_5c == '\x01') {
        local_60 = *param_1;
        FUN_1457605f6(&local_50,iVar2,&local_60,&local_58);
        if (local_4c == '\0') {
          uVar1 = 0;
        }
        else {
LAB_1488cf0da:
          *param_1 = local_50;
          uVar1 = 1;
        }
        *(undefined1 *)(param_1 + 1) = uVar1;
      }
      else {
        FUN_1457605f6(&local_50,iVar2,&local_60,&local_58);
        if (local_4c == '\x01') goto LAB_1488cf0da;
      }
      lVar6 = lVar6 + 0xc0;
      lVar5 = lVar5 + -0xc0;
    } while (lVar5 != 0);
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 1488cf13a FUN_1488cf13a body=184 status=ok
// SIG undefined FUN_1488cf13a(void)

void FUN_1488cf13a(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4,
                  longlong param_5,undefined1 param_6,undefined1 param_7)

{
  undefined4 uVar1;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar1 = FUN_140cc6258(param_6);
    FUN_14145a380(param_1,param_2,1,param_3,uVar1,0,param_4,param_5 != 0,param_5,0x3f800000,0,0,0,0,
                  param_7);
  }
  return;
}



// FUNCTION 1488cf1f2 FUN_1488cf1f2 body=219 status=ok
// SIG undefined FUN_1488cf1f2(void)

void FUN_1488cf1f2(longlong *param_1,longlong param_2)

{
  longlong lVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar3 = *(longlong *)(param_2 + 8);
  if ((lVar3 != 0) && ((longlong)(int)param_1[1] != 0)) {
    lVar8 = *param_1;
    lVar1 = lVar8 + (longlong)(int)param_1[1] * 0x18;
    do {
      lVar6 = FUN_1488d3c94(lVar8);
      if ((lVar6 != 0) && ((longlong)*(int *)(lVar6 + 0x20) != 0)) {
        lVar9 = *(longlong *)(lVar6 + 0x18);
        lVar6 = (longlong)*(int *)(lVar6 + 0x20) * 0x18;
        do {
          uVar7 = FUN_1488d3d20(lVar9);
          cVar5 = FUN_1488cb6a8(lVar3,uVar7);
          if (cVar5 != '\0') {
            iVar2 = *(int *)(param_2 + 0x20);
            *(uint *)(param_2 + 0x20) = iVar2 + 1U;
            if (*(uint *)(param_2 + 0x24) < iVar2 + 1U) {
              FUN_140feb7c0((longlong *)(param_2 + 0x18),iVar2);
            }
            lVar4 = *(longlong *)(param_2 + 0x18);
            *(undefined8 *)(lVar4 + (longlong)iVar2 * 0x10) = uVar7;
            *(undefined4 *)(lVar4 + 8 + (longlong)iVar2 * 0x10) = 0x3f800000;
          }
          lVar9 = lVar9 + 0x18;
          lVar6 = lVar6 + -0x18;
        } while (lVar6 != 0);
      }
      lVar8 = lVar8 + 0x18;
    } while (lVar8 != lVar1);
  }
  return;
}



// FUNCTION 1488cf2ce FUN_1488cf2ce body=109 status=ok
// SIG undefined FUN_1488cf2ce(void)

void FUN_1488cf2ce(longlong *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1[1];
  if (iVar1 < param_2) {
    *(int *)(param_1 + 1) = param_2;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar1) < (uint)(param_2 - iVar1)) {
      FUN_140feb7c0(param_1,iVar1);
    }
    FUN_1488d3db0((longlong)iVar1 * 0x10 + *param_1,param_2 - iVar1);
    return;
  }
  if (-1 < param_2) {
    if (iVar1 <= param_2) {
      return;
    }
    *(int *)(param_1 + 1) = param_2;
    FUN_1488d1b44(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(param_2);
}



// FUNCTION 1488cf33c FUN_1488cf33c body=138 status=ok
// SIG undefined FUN_1488cf33c(void)

longlong FUN_1488cf33c(undefined8 *param_1)

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
    if (DAT_14cb84940 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb84940,local_40);
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



// FUNCTION 1488cf3c8 FUN_1488cf3c8 body=309 status=ok
// SIG undefined FUN_1488cf3c8(void)

void FUN_1488cf3c8(float *param_1,float param_2,ulonglong *param_3)

{
  float *pfVar1;
  ulonglong uVar2;
  uint uVar3;
  float *pfVar4;
  float fVar5;
  undefined1 auStack_48 [36];
  float local_24;
  ulonglong *local_20;
  float *local_18;
  undefined1 local_c [4];
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_48;
  local_24 = param_2;
  if ((1e-08 < param_2) || (*(char *)(param_1 + 1) == '\x01')) {
    if (param_1[0x34] != param_1[0x3d]) {
      uVar2 = *param_3;
      uVar3 = ((uint)(uVar2 >> 0x14) & 0xffff ^ (uint)(uVar2 >> 4)) * -0x7a143595;
      uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
      pfVar4 = param_1 + 0x3e;
      if (*(float **)(param_1 + 0x42) != (float *)0x0) {
        pfVar4 = *(float **)(param_1 + 0x42);
      }
      fVar5 = pfVar4[(int)param_1[0x44] - 1U & (uVar3 >> 0x10 ^ uVar3)];
      if (fVar5 != -NAN) {
        pfVar4 = *(float **)(param_1 + 0x32);
        if (*(float **)(param_1 + 0x32) == (float *)0x0) {
          pfVar4 = param_1 + 2;
        }
        do {
          pfVar1 = pfVar4 + (longlong)(int)fVar5 * 6;
          if (*(ulonglong *)pfVar1 == uVar2) {
            if (pfVar1 + 2 != (float *)0x0 && pfVar1 != (float *)0x0) {
              fVar5 = *param_1 - pfVar1[2];
              goto LAB_1488cf484;
            }
            break;
          }
          fVar5 = pfVar1[4];
        } while (fVar5 != -NAN);
      }
    }
    fVar5 = *param_1;
LAB_1488cf484:
    *param_1 = fVar5 + param_2;
    local_18 = &local_24;
    local_20 = param_3;
    FUN_1488d41cc(param_1 + 2,local_c,&local_20);
  }
  if ((local_8 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488cf4fe FUN_1488cf4fe body=381 status=ok
// SIG undefined FUN_1488cf4fe(void)

undefined8 FUN_1488cf4fe(float *param_1,undefined8 *param_2)

{
  float *pfVar1;
  float *pfVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined1 auStack_b8 [32];
  float *local_98;
  undefined4 local_90;
  uint uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint local_80;
  float fStack_7c;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  uint local_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar4 = rand();
  fVar8 = ((float)(uVar4 & 0x7fff) / 32767.0) * *param_1;
  pfVar1 = param_1 + 2;
  pfVar2 = param_1 + 0x36;
  local_70 = 0x100000000;
  local_60 = 0xffffffff;
  fStack_5c = 0.0;
  uStack_58 = 0;
  uStack_68 = pfVar2;
  if (param_1[0x3a] == 0.0) {
    fVar7 = 0.0;
  }
  else {
    FUN_144a81a4c(&local_70);
    fVar7 = param_1[0x3a];
  }
  uStack_78 = CONCAT44(uStack_54,uStack_58);
  local_80 = local_60;
  fStack_7c = fStack_5c;
  local_90 = (undefined4)local_70;
  uStack_8c = local_70._4_4_;
  uStack_88 = (undefined4)uStack_68;
  uStack_84 = uStack_68._4_4_;
  local_98 = pfVar1;
  if ((fStack_5c != fVar7) || (uStack_68 != pfVar2)) {
    fVar9 = 0.0;
    do {
      pfVar6 = *(float **)(local_98 + 0x30);
      if (*(float **)(local_98 + 0x30) == (float *)0x0) {
        pfVar6 = local_98;
      }
      bVar3 = fVar9 <= fVar8;
      fVar9 = fVar9 + pfVar6[(longlong)(int)fStack_7c * 6 + 2];
      if ((bVar3) && (fVar8 <= fVar9)) {
        uVar5 = *(undefined8 *)(pfVar6 + (longlong)(int)fStack_7c * 6);
        *param_2 = uVar5;
        uVar5 = CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
        goto LAB_1488cf5c3;
      }
      local_80 = local_80 & ~uStack_8c;
      FUN_144a81a4c(&local_90);
    } while (local_98 != pfVar1 ||
             ((float *)CONCAT44(uStack_84,uStack_88) != pfVar2 || fStack_7c != fVar7));
  }
  uVar5 = 0;
LAB_1488cf5c3:
  if ((local_50 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar5;
}



// FUNCTION 1488cf67c FUN_1488cf67c body=81 status=ok
// SIG undefined FUN_1488cf67c(void)

undefined8 FUN_1488cf67c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = FUN_14018b740();
  plVar2 = (longlong *)FUN_144718840(param_1,uVar1);
  if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488cf6a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*plVar2 + 0x18))(plVar2);
    return uVar1;
  }
  uVar1 = FUN_140cc62c2();
  uVar1 = FUN_1487fe2a8(uVar1,param_1);
  return uVar1;
}



// FUNCTION 1488cf6ce FUN_1488cf6ce body=1854 status=ok
// SIG undefined FUN_1488cf6ce(void)

void FUN_1488cf6ce(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  longlong *param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  double dVar13;
  double *pdVar14;
  uint uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 uVar20;
  undefined1 auStack_488 [32];
  undefined8 local_468;
  undefined1 local_460;
  undefined8 local_458;
  undefined1 local_450;
  undefined4 local_448;
  longlong local_440;
  undefined4 local_438;
  undefined4 uStack_434;
  undefined4 uStack_430;
  undefined4 uStack_42c;
  double local_428;
  undefined4 local_418;
  undefined4 uStack_414;
  longlong local_3f8;
  ulonglong uStack_3f0;
  longlong local_3e0;
  undefined8 local_3d8;
  undefined4 local_3d0;
  undefined4 uStack_3cc;
  undefined4 uStack_3c8;
  undefined4 uStack_3c4;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined8 local_3a8;
  undefined8 local_3a0;
  longlong *local_398;
  double local_390;
  double dStack_388;
  double local_380;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined8 local_368;
  undefined8 uStack_360;
  double local_358;
  double dStack_350;
  undefined1 local_348;
  undefined8 local_340;
  undefined8 uStack_338;
  double local_330;
  undefined1 local_328;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 local_308;
  undefined8 uStack_300;
  double local_2f8;
  undefined8 uStack_2f0;
  double local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  double local_2a8;
  float local_2a0;
  undefined8 local_29c;
  undefined4 local_294;
  double local_290;
  undefined4 local_288;
  undefined8 local_284;
  undefined8 uStack_27c;
  undefined8 local_274;
  undefined8 uStack_26c;
  undefined1 local_264;
  undefined4 local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  longlong lStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  char local_1b8;
  undefined8 uStack_1a8;
  undefined1 uStack_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined8 uStack_197;
  longlong local_188 [2];
  longlong local_178;
  int local_170;
  ulonglong local_b0;
  
  local_b0 = DAT_14c707940 ^ (ulonglong)auStack_488;
  local_398 = (longlong *)0x0;
  local_3a0 = 0;
  cVar7 = FUN_143dada69();
  if (cVar7 != '\0') {
    lVar10 = FUN_140350bfe(param_3);
    if (lVar10 == 0) {
      uVar11 = FUN_140831778();
      lVar10 = FUN_1488c5bea(uVar11);
    }
    local_3b8 = 0;
    uStack_3b0 = 0;
    local_3a8 = 0;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    lVar17 = *(longlong *)(param_1 + 0x1c8);
    if (lVar17 == 0) {
      puVar12 = &DAT_14c8464e0;
      uVar8 = SUB84(DAT_14c8464f0,0);
      uVar20 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
    }
    else {
      uVar8 = (undefined4)*(undefined8 *)(lVar17 + 0x270);
      uVar20 = (undefined4)((ulonglong)*(undefined8 *)(lVar17 + 0x270) >> 0x20);
      puVar12 = (undefined8 *)(lVar17 + 0x260);
    }
    local_3d0 = *(undefined4 *)puVar12;
    uStack_3cc = *(undefined4 *)((longlong)puVar12 + 4);
    uStack_3c8 = *(undefined4 *)(puVar12 + 1);
    uStack_3c4 = *(undefined4 *)((longlong)puVar12 + 0xc);
    local_3c0 = CONCAT44(uVar20,uVar8);
    local_3e0 = param_1;
    local_3d8 = param_4;
    uVar8 = FUN_1488cf67c(param_1);
    local_3f8 = 0;
    uStack_3f0 = 0;
    uVar19 = 0;
    local_318 = local_318 & 0xffffffffffffff00;
    uStack_2f0 = (double)((ulonglong)uStack_2f0._4_4_ << 0x20);
    FUN_1456bb102(&local_318,param_1);
    local_448 = 0;
    local_450 = 0;
    local_458 = 0;
    local_460 = 0;
    local_468 = 0;
    FUN_140cc60a8(&local_3f8,local_3a0,uVar8,&local_318);
    FUN_144a5ac3a(&local_318);
    if ((longlong)(int)uStack_3f0 != 0) {
      lVar18 = (longlong)(int)uStack_3f0 * 0x68 + local_3f8;
      lVar17 = local_3f8;
      local_440 = lVar10;
      do {
        plVar16 = local_188;
        local_318 = local_318 & 0xffffffffffffff00;
        uStack_2f0 = (double)((ulonglong)uStack_2f0 & 0xffffffff00000000);
        FUN_1456bb102(&local_318,param_1);
        FUN_140368c94(lVar17,plVar16,&local_318,0);
        FUN_144a5ac3a(&local_318);
        if (local_188[0] != 0) {
          if ((longlong)local_170 != 0) {
            plVar16 = (longlong *)0x0;
            do {
              if (*(longlong *)(local_178 + (longlong)plVar16) == 0) goto LAB_1488cfbf0;
              plVar16 = plVar16 + 1;
            } while ((longlong *)((longlong)local_170 * 8) != plVar16);
          }
          uVar8 = SUB84(plVar16,0);
          local_318 = 0;
          uStack_310 = 0;
          local_308 = 0;
          uStack_300 = 0x3ff0000000000000;
          local_2e8 = 0.0;
          uStack_2e0 = 0;
          local_2f8 = 0.0;
          uStack_2f0 = 0.0;
          local_2d8 = 0x3ff0000000000000;
          uStack_2d0 = 0x3ff0000000000000;
          local_2c8 = 0x3ff0000000000000;
          uStack_2c0 = 0;
          local_2a8 = DAT_14c8464f0;
          local_2b8 = (undefined4)DAT_14c8464e0;
          uStack_2b4 = DAT_14c8464e0._4_4_;
          uStack_2b0 = (undefined4)DAT_14c8464e8;
          uStack_2ac = DAT_14c8464e8._4_4_;
          local_2a0 = 0.0;
          local_294 = DAT_14cb7bd70;
          local_29c = DAT_14cb7bd68;
          local_288 = DAT_14cb7bd88;
          local_290 = DAT_14cb7bd80;
          local_264 = 0;
          local_274 = 0;
          uStack_26c = 0;
          local_284 = 0;
          uStack_27c = 0;
          local_260 = 0xffffffff;
          local_1b8 = '\0';
          uStack_198 = 0;
          uStack_197 = 0;
          uStack_1a8 = 0;
          uStack_1a0 = 0;
          local_19f = 0;
          local_228 = 0;
          uStack_220 = 0;
          local_238 = 0;
          uStack_230 = 0;
          local_248 = 0;
          lStack_240 = 0;
          local_258 = 0;
          uStack_250 = 0;
          if (lVar10 == 0) {
            lVar10 = *(longlong *)(param_1 + 0x1c8);
            if (lVar10 == 0) {
              local_2f8 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_2f0 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              local_2e8 = DAT_14c8464f0;
              uStack_2e0 = 0;
              local_428 = DAT_14c846508;
              local_438 = (undefined4)DAT_14c8464f8;
              uStack_434 = DAT_14c8464f8._4_4_;
              uStack_430 = (undefined4)DAT_14c846500;
              uStack_42c = DAT_14c846500._4_4_;
            }
            else {
              local_2e8 = *(double *)(lVar10 + 0x270);
              local_2f8 = *(double *)(lVar10 + 0x260);
              uStack_2f0 = *(double *)(lVar10 + 0x268);
              uStack_2e0 = 0;
              dVar3 = *(double *)(lVar10 + 0x240);
              dVar4 = *(double *)(lVar10 + 0x248);
              dVar5 = *(double *)(lVar10 + 0x250);
              dVar6 = *(double *)(lVar10 + 600);
              pdVar14 = *(double **)(lVar10 + 0x228);
              dVar13 = DAT_14cb7bd80;
              local_378 = dVar3;
              uStack_370 = dVar4;
              local_368 = dVar5;
              uStack_360 = dVar6;
              if (pdVar14 == (double *)0x0) {
                uVar8 = 0x10;
                pdVar14 = (double *)FUN_14001cc68(0x40);
                dVar13 = DAT_14c8463d8;
                *pdVar14 = DAT_14c8463d0;
                pdVar14[1] = dVar13;
                dVar13 = DAT_14c8463e8;
                pdVar14[2] = DAT_14c8463e0;
                pdVar14[3] = dVar13;
                dVar13 = (double)CONCAT44(DAT_14c846500._4_4_,(undefined4)DAT_14c846500);
                pdVar14[4] = (double)CONCAT44(DAT_14c8464f8._4_4_,(undefined4)DAT_14c8464f8);
                pdVar14[5] = dVar13;
                dVar13 = DAT_14c846508;
                pdVar14[6] = DAT_14c846508;
                *(double **)(lVar10 + 0x228) = pdVar14;
              }
              auVar1._8_4_ = (int)-(ulonglong)(dVar4 != pdVar14[1]);
              auVar1._0_8_ = -(ulonglong)(dVar3 != *pdVar14);
              auVar1._12_4_ = (int)(-(ulonglong)(dVar4 != pdVar14[1]) >> 0x20);
              iVar9 = movmskpd(SUB84(dVar13,0),auVar1);
              auVar2._8_4_ = (int)-(ulonglong)(dVar6 != pdVar14[3]);
              auVar2._0_8_ = -(ulonglong)(dVar5 != pdVar14[2]);
              auVar2._12_4_ = (int)(-(ulonglong)(dVar6 != pdVar14[3]) >> 0x20);
              uVar15 = movmskpd(uVar8,auVar2);
              if ((uVar15 & 0x3fffffff) != 0 || iVar9 != 0) {
                *(undefined4 *)(pdVar14 + 2) = (undefined4)local_368;
                *(undefined4 *)((longlong)pdVar14 + 0x14) = local_368._4_4_;
                *(undefined4 *)(pdVar14 + 3) = (undefined4)uStack_360;
                *(undefined4 *)((longlong)pdVar14 + 0x1c) = uStack_360._4_4_;
                *(undefined4 *)pdVar14 = (undefined4)local_378;
                *(undefined4 *)((longlong)pdVar14 + 4) = local_378._4_4_;
                *(undefined4 *)(pdVar14 + 1) = (undefined4)uStack_370;
                *(undefined4 *)((longlong)pdVar14 + 0xc) = uStack_370._4_4_;
                FUN_1448052ee(&local_378,&local_390);
                pdVar14[6] = local_380;
                pdVar14[4] = local_390;
                pdVar14[5] = dStack_388;
              }
              local_428 = pdVar14[6];
              local_438 = *(undefined4 *)(pdVar14 + 4);
              uStack_434 = *(undefined4 *)((longlong)pdVar14 + 0x24);
              uStack_430 = *(undefined4 *)(pdVar14 + 5);
              uStack_42c = *(undefined4 *)((longlong)pdVar14 + 0x2c);
            }
            FUN_144a7484c(&local_438,&local_418);
            local_318 = CONCAT44(uStack_414,local_418);
          }
          else {
            local_358 = 0.0;
            dStack_350 = 0.0;
            local_368 = 0.0;
            uStack_360 = 0.0;
            local_378 = 0.0;
            uStack_370 = 0.0;
            local_348 = 1;
            local_340 = 0;
            uStack_338 = 0;
            local_330 = 0.0;
            local_328 = 1;
            FUN_141035d0a(lVar10,&local_3e0,&local_378);
            local_2f8 = local_378;
            uStack_2f0 = uStack_370;
            local_2e8 = local_368;
            uStack_2e0 = 0;
            FUN_144afe7fe(&uStack_360,&local_418);
            local_318 = CONCAT44(uStack_414,local_418);
            local_2a0 = (float)SQRT(dStack_350 * dStack_350 +
                                    uStack_360 * uStack_360 + local_358 * local_358);
            local_2a8 = local_330;
            local_2b8 = (undefined4)local_340;
            uStack_2b4 = local_340._4_4_;
            uStack_2b0 = (undefined4)uStack_338;
            uStack_2ac = uStack_338._4_4_;
          }
          (**(code **)(*local_398 + 0x10))(local_398,&local_378,local_188);
          lVar10 = local_440;
          if (local_378._4_1_ == '\x01') {
            iVar9 = (int)param_5[1];
            *(uint *)(param_5 + 1) = iVar9 + 1U;
            if (*(uint *)((longlong)param_5 + 0xc) < iVar9 + 1U) {
              FUN_14573f2d4(param_5,iVar9);
            }
            *(undefined4 *)(*param_5 + (longlong)iVar9 * 4) = (undefined4)local_378;
          }
          if (local_1b8 == '\x01') {
            local_1b8 = '\0';
          }
          if (lStack_240 != 0) {
            FUN_1400020a8();
          }
        }
LAB_1488cfbf0:
        FUN_140368b56(local_188);
        lVar17 = lVar17 + 0x68;
      } while (lVar17 != lVar18);
      uVar19 = uStack_3f0 & 0xffffffff;
    }
    FUN_14036924e(local_3f8,uVar19);
    if (local_3f8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_b0 ^ (ulonglong)auStack_488) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488cfe0e FUN_1488cfe0e body=1373 status=ok
// SIG undefined FUN_1488cfe0e(void)

void FUN_1488cfe0e(longlong param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,longlong *param_6)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_438 [32];
  undefined8 local_418;
  undefined1 local_410;
  undefined8 local_408;
  undefined1 local_400;
  undefined4 local_3f8;
  longlong local_3f0;
  longlong *local_3e8;
  longlong local_3e0;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  longlong local_3b8;
  ulonglong uStack_3b0;
  longlong local_3a8;
  undefined8 local_3a0;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  undefined8 local_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 local_368;
  longlong *local_360;
  undefined8 local_358;
  ulonglong uStack_350;
  undefined8 local_348;
  double dStack_340;
  double local_338;
  double dStack_330;
  undefined1 local_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined1 local_308;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined8 local_2d8;
  undefined8 uStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  float local_280;
  undefined8 local_27c;
  undefined4 local_274;
  undefined8 local_270;
  undefined4 local_268;
  undefined8 local_264;
  undefined8 uStack_25c;
  undefined8 local_254;
  undefined8 uStack_24c;
  undefined1 local_244;
  undefined4 local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  longlong lStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  char local_198;
  undefined8 uStack_188;
  undefined1 uStack_180;
  undefined7 local_17f;
  undefined1 uStack_178;
  undefined8 uStack_177;
  longlong local_168 [2];
  longlong local_158;
  int local_150;
  ulonglong local_90;
  
  local_90 = DAT_14c707940 ^ (ulonglong)auStack_438;
  local_360 = (longlong *)0x0;
  local_368 = 0;
  cVar2 = FUN_143dada69(param_1,param_3);
  if (cVar2 != '\0') {
    local_3e0 = FUN_140350bfe(param_4);
    if (local_3e0 == 0) {
      uVar4 = FUN_140831778();
      local_3e0 = FUN_1488c5bea(uVar4);
    }
    local_380 = 0;
    uStack_378 = 0;
    local_370 = 0;
    if ((param_1 != 0) && (DAT_14c950c29 != '\0')) {
      FUN_1456cec3c(param_1);
    }
    local_398 = param_2[8];
    uStack_394 = param_2[9];
    uStack_390 = param_2[10];
    uStack_38c = param_2[0xb];
    local_388 = *(undefined8 *)(param_2 + 0xc);
    local_3a0 = param_5;
    local_3a8 = param_1;
    uVar3 = FUN_1488cf67c(param_1);
    local_3b8 = 0;
    uStack_3b0 = 0;
    uVar7 = 0;
    local_2f8 = local_2f8 & 0xffffffffffffff00;
    uStack_2d0 = (ulonglong)uStack_2d0._4_4_ << 0x20;
    FUN_1456bb102(&local_2f8,param_1);
    local_3f8 = 0;
    local_400 = 0;
    local_408 = 0;
    local_410 = 0;
    local_418 = 0;
    FUN_140cc60a8(&local_3b8,local_368,uVar3,&local_2f8);
    FUN_144a5ac3a(&local_2f8);
    if ((longlong)(int)uStack_3b0 != 0) {
      lVar8 = (longlong)(int)uStack_3b0 * 0x68 + local_3b8;
      local_3e8 = local_360;
      lVar6 = local_3b8;
      do {
        local_2f8 = local_2f8 & 0xffffffffffffff00;
        uStack_2d0 = uStack_2d0 & 0xffffffff00000000;
        FUN_1456bb102(&local_2f8,param_1);
        FUN_140368c94(lVar6,local_168,&local_2f8,0);
        FUN_144a5ac3a(&local_2f8);
        if (local_168[0] != 0) {
          if ((longlong)local_150 != 0) {
            lVar5 = 0;
            do {
              if (*(longlong *)(local_158 + lVar5) == 0) goto LAB_1488d02da;
              lVar5 = lVar5 + 8;
            } while ((longlong)local_150 * 8 != lVar5);
          }
          local_2f8 = 0;
          uStack_2f0 = 0;
          local_2e8 = 0;
          uStack_2e4 = 0;
          uStack_2e0 = 0;
          uStack_2dc = 0x3ff00000;
          local_2c8 = 0;
          uStack_2c0 = 0;
          local_2d8 = 0;
          uStack_2d0 = 0;
          local_2b8 = 0x3ff0000000000000;
          uStack_2b0 = 0x3ff0000000000000;
          local_2a8 = 0x3ff0000000000000;
          uStack_2a0 = 0;
          local_288 = DAT_14c8464f0;
          local_298 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          uStack_290 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          local_280 = 0.0;
          local_274 = DAT_14cb7bd70;
          local_27c = DAT_14cb7bd68;
          local_268 = DAT_14cb7bd88;
          local_270 = DAT_14cb7bd80;
          local_244 = 0;
          local_254 = 0;
          uStack_24c = 0;
          local_264 = 0;
          uStack_25c = 0;
          local_240 = 0xffffffff;
          local_198 = '\0';
          uStack_178 = 0;
          uStack_177 = 0;
          uStack_188 = 0;
          uStack_180 = 0;
          local_17f = 0;
          local_208 = 0;
          uStack_200 = 0;
          local_218 = 0;
          uStack_210 = 0;
          local_228 = 0;
          lStack_220 = 0;
          local_238 = 0;
          uStack_230 = 0;
          if (local_3e0 == 0) {
            local_2d8 = *(undefined8 *)(param_2 + 8);
            uStack_2d0 = *(ulonglong *)(param_2 + 10);
            local_2c8 = *(undefined8 *)(param_2 + 0xc);
            uStack_2c0 = 0;
            uVar3 = *param_2;
            uVar9 = param_2[1];
            uVar10 = param_2[2];
            uVar11 = param_2[3];
            local_2e8 = param_2[4];
            uStack_2e4 = param_2[5];
            uStack_2e0 = param_2[6];
            uStack_2dc = param_2[7];
          }
          else {
            local_338 = 0.0;
            dStack_330 = 0.0;
            local_348 = 0;
            dStack_340 = 0.0;
            local_358 = 0;
            uStack_350 = 0;
            local_328 = 1;
            local_320 = 0;
            uStack_318 = 0;
            local_310 = 0;
            local_308 = 1;
            FUN_141035d0a(local_3e0,&local_3a8,&local_358);
            local_2d8 = local_358;
            uStack_2d0 = uStack_350;
            local_2c8 = local_348;
            uStack_2c0 = 0;
            FUN_144afe7fe(&dStack_340,&local_3d8);
            local_280 = (float)SQRT(dStack_330 * dStack_330 +
                                    dStack_340 * dStack_340 + local_338 * local_338);
            local_288 = local_310;
            local_298 = local_320;
            uStack_290 = uStack_318;
            uVar3 = local_3d8;
            uVar9 = uStack_3d4;
            uVar10 = uStack_3d0;
            uVar11 = uStack_3cc;
            local_2e8 = local_3c8;
            uStack_2e4 = uStack_3c4;
            uStack_2e0 = uStack_3c0;
            uStack_2dc = uStack_3bc;
          }
          local_2f8 = CONCAT44(uVar9,uVar3);
          uStack_2f0 = CONCAT44(uVar11,uVar10);
          (**(code **)(*local_3e8 + 0x10))(local_3e8,&local_358,local_168);
          if (local_358._4_1_ == '\x01') {
            iVar1 = (int)param_6[1];
            *(uint *)(param_6 + 1) = iVar1 + 1U;
            local_3f0 = lVar8;
            if (*(uint *)((longlong)param_6 + 0xc) < iVar1 + 1U) {
              FUN_14573f2d4(param_6,iVar1);
            }
            *(undefined4 *)(*param_6 + (longlong)iVar1 * 4) = (undefined4)local_358;
            lVar8 = local_3f0;
          }
          if (local_198 == '\x01') {
            local_198 = '\0';
          }
          if (lStack_220 != 0) {
            FUN_1400020a8();
          }
        }
LAB_1488d02da:
        FUN_140368b56(local_168);
        lVar6 = lVar6 + 0x68;
      } while (lVar6 != lVar8);
      uVar7 = uStack_3b0 & 0xffffffff;
    }
    FUN_14036924e(local_3b8,uVar7);
    if (local_3b8 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_90 ^ (ulonglong)auStack_438) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d036c FUN_1488d036c body=64 status=ok
// SIG undefined FUN_1488d036c(void)

undefined8 * FUN_1488d036c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928(&DAT_14cb83630);
  FUN_1470e6fca(puVar1);
  *puVar1 = &PTR_FUN_14b4122f0;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x1030;
  puVar1[7] = 0;
  return puVar1;
}



// FUNCTION 1488d03ac FUN_1488d03ac body=49 status=ok
// SIG undefined FUN_1488d03ac(void)

undefined8 * FUN_1488d03ac(undefined8 *param_1)

{
  FUN_1470e6fca();
  *param_1 = &PTR_FUN_14b4122f0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1030;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1488d03de FUN_1488d03de body=44 status=ok
// SIG undefined FUN_1488d03de(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d03de(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8363c = _DAT_14cb8363c + -1;
  *param_1 = DAT_14cb83630;
  DAT_14cb83630 = param_1;
  return;
}



// FUNCTION 1488d040a FUN_1488d040a body=58 status=ok
// SIG undefined FUN_1488d040a(void)

void FUN_1488d040a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1470e6fca(param_1);
  *param_1 = &PTR_FUN_14b4122f0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1030;
  param_1[7] = 0;
  return;
}



// FUNCTION 1488d0444 FUN_1488d0444 body=108 status=ok
// SIG undefined FUN_1488d0444(void)

undefined8 * FUN_1488d0444(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_147f5e4ae(&DAT_14cb83720);
  FUN_1470e70b8(puVar1);
  *puVar1 = &PTR_FUN_14b322950;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x1030;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return puVar1;
}



// FUNCTION 1488d04b0 FUN_1488d04b0 body=93 status=ok
// SIG undefined FUN_1488d04b0(void)

undefined8 * FUN_1488d04b0(undefined8 *param_1)

{
  FUN_1470e70b8();
  *param_1 = &PTR_FUN_14b322950;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1030;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1488d050e FUN_1488d050e body=44 status=ok
// SIG undefined FUN_1488d050e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d050e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8372c = _DAT_14cb8372c + -1;
  *param_1 = DAT_14cb83720;
  DAT_14cb83720 = param_1;
  return;
}



// FUNCTION 1488d053a FUN_1488d053a body=102 status=ok
// SIG undefined FUN_1488d053a(void)

void FUN_1488d053a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1470e70b8(param_1);
  *param_1 = &PTR_FUN_14b322950;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1030;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return;
}



// FUNCTION 1488d05a0 FUN_1488d05a0 body=138 status=ok
// SIG undefined FUN_1488d05a0(void)

longlong FUN_1488d05a0(undefined8 *param_1)

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
    if (DAT_14cb83a10 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb83a10,local_40);
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



// FUNCTION 1488d0632 FUN_1488d0632 body=358 status=ok
// SIG undefined FUN_1488d0632(void)

undefined4 FUN_1488d0632(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x40;
  FUN_1488d45c0(lVar1);
  uVar8 = *(uint *)(param_2 + 1);
  if ((uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74)) < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_1488d4748(lVar1,uVar8);
    iVar5 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x88) == 0) || (*(int *)(param_1 + 0x88) < iVar5)) {
      *(int *)(param_1 + 0x88) = iVar5;
      FUN_1488d48e4(lVar1);
    }
  }
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar9);
      if (plVar3 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar7 = FUN_146527bca();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          local_68 = FUN_1488d05a0(plVar3 + 5);
          FUN_1470e7168(plVar3,local_70);
          local_58 = &local_68;
          local_60 = local_70;
          FUN_1488d4abe(lVar1,local_4c,&local_60);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                  *(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74));
}



// FUNCTION 1488d079c FUN_1488d079c body=64 status=ok
// SIG undefined FUN_1488d079c(void)

undefined8 * FUN_1488d079c(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928(&DAT_14cb83810);
  FUN_1470e6fca(puVar1);
  *puVar1 = &PTR_FUN_14b412360;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x1040;
  puVar1[7] = 0;
  return puVar1;
}



// FUNCTION 1488d07dc FUN_1488d07dc body=49 status=ok
// SIG undefined FUN_1488d07dc(void)

undefined8 * FUN_1488d07dc(undefined8 *param_1)

{
  FUN_1470e6fca();
  *param_1 = &PTR_FUN_14b412360;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1040;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1488d080e FUN_1488d080e body=44 status=ok
// SIG undefined FUN_1488d080e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d080e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8381c = _DAT_14cb8381c + -1;
  *param_1 = DAT_14cb83810;
  DAT_14cb83810 = param_1;
  return;
}



// FUNCTION 1488d083a FUN_1488d083a body=58 status=ok
// SIG undefined FUN_1488d083a(void)

void FUN_1488d083a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1470e6fca(param_1);
  *param_1 = &PTR_FUN_14b412360;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1040;
  param_1[7] = 0;
  return;
}



// FUNCTION 1488d0874 FUN_1488d0874 body=108 status=ok
// SIG undefined FUN_1488d0874(void)

undefined8 * FUN_1488d0874(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_147f5e4ae(&DAT_14cb83900);
  FUN_1470e70b8(puVar1);
  *puVar1 = &PTR_FUN_14b322990;
  puVar1[5] = 0;
  *(undefined4 *)(puVar1 + 6) = 0x1040;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return puVar1;
}



// FUNCTION 1488d08e0 FUN_1488d08e0 body=93 status=ok
// SIG undefined FUN_1488d08e0(void)

undefined8 * FUN_1488d08e0(undefined8 *param_1)

{
  FUN_1470e70b8();
  *param_1 = &PTR_FUN_14b322990;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1040;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1488d093e FUN_1488d093e body=44 status=ok
// SIG undefined FUN_1488d093e(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d093e(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8390c = _DAT_14cb8390c + -1;
  *param_1 = DAT_14cb83900;
  DAT_14cb83900 = param_1;
  return;
}



// FUNCTION 1488d096a FUN_1488d096a body=102 status=ok
// SIG undefined FUN_1488d096a(void)

void FUN_1488d096a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1470e70b8(param_1);
  *param_1 = &PTR_FUN_14b322990;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x1040;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return;
}



// FUNCTION 1488d09d6 FUN_1488d09d6 body=358 status=ok
// SIG undefined FUN_1488d09d6(void)

undefined4 FUN_1488d09d6(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  longlong lVar9;
  undefined1 auStack_98 [40];
  undefined1 local_70 [8];
  undefined8 local_68;
  undefined1 *local_60;
  undefined8 *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = param_1 + 0x40;
  FUN_1488d4de6(lVar1);
  uVar8 = *(uint *)(param_2 + 1);
  if ((uint)(*(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x74)) < uVar8) {
    if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1456acd4b((longlong)(int)uVar8);
    }
    FUN_1488d4f6e(lVar1,uVar8);
    iVar5 = 1;
    if (3 < uVar8) {
      uVar8 = (uVar8 | 1) + 0xe;
      iVar5 = 0x1f;
      if (uVar8 != 0) {
        for (; uVar8 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = 1 << ((byte)iVar5 & 0x1f);
    }
    if ((*(int *)(param_1 + 0x88) == 0) || (*(int *)(param_1 + 0x88) < iVar5)) {
      *(int *)(param_1 + 0x88) = iVar5;
      FUN_1488d510a(lVar1);
    }
  }
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar2 = *param_2;
    lVar9 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar9);
      if (plVar3 != (longlong *)0x0) {
        lVar6 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar7 = FUN_146527cf6();
        if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) ==
            lVar7 + 0x30)) {
          local_68 = FUN_1488ceeca(plVar3 + 5);
          FUN_1470e7168(plVar3,local_70);
          local_58 = &local_68;
          local_60 = local_70;
          FUN_1488d52e4(lVar1,local_4c,&local_60);
        }
      }
      lVar9 = lVar9 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                  *(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74));
}



// FUNCTION 1488d0b40 FUN_1488d0b40 body=91 status=ok
// SIG undefined FUN_1488d0b40(void)

undefined8 * FUN_1488d0b40(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = &PTR_FUN_14b023b08;
  param_1[1] = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 1);
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 3);
  FUN_1401f3da4(param_1 + 5,param_2 + 4);
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0x3b9cbb9e;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  return param_1;
}



// FUNCTION 1488d0c13 FUN_1488d0c13 body=233 status=ok
// SIG undefined FUN_1488d0c13(void)

void FUN_1488d0c13(undefined8 param_1,longlong param_2)

{
  int *piVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  longlong lVar6;
  undefined1 auStack_68 [40];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_2 = param_2 + 8;
  lVar3 = FUN_140cde26e(param_2);
  if (lVar3 == 0) {
    lVar3 = FUN_14005ef80(param_2);
    if (lVar3 == 0) {
      lVar3 = FUN_140372754(param_2);
      if ((lVar3 != 0) && ((longlong)*(int *)(lVar3 + 0x50) != 0)) {
        lVar6 = *(longlong *)(lVar3 + 0x48);
        lVar3 = (longlong)*(int *)(lVar3 + 0x50) * 0xc0;
        do {
          FUN_1488d0c13(param_1,lVar6);
          lVar6 = lVar6 + 0xc0;
          lVar3 = lVar3 + -0xc0;
        } while (lVar3 != 0);
      }
      goto LAB_1488d0c73;
    }
    uVar4 = FUN_14050fd64();
    lVar3 = *(longlong *)(lVar3 + 0x30);
    puVar5 = local_40;
  }
  else {
    uVar4 = FUN_14050fd64();
    puVar5 = local_30;
  }
  FUN_1470e5540(uVar4,puVar5,param_1,lVar3);
  plVar2 = *(longlong **)(puVar5 + 8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
LAB_1488d0c73:
  if ((local_20 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d0cfe FUN_1488d0cfe body=952 status=ok
// SIG undefined FUN_1488d0cfe(void)

void FUN_1488d0cfe(undefined8 param_1,undefined8 *param_2,undefined4 param_3,undefined8 param_4)

{
  int *piVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  int **ppiVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auStack_338 [32];
  undefined8 local_318;
  undefined1 local_310;
  undefined8 local_308;
  undefined1 local_300;
  undefined4 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 uStack_2e4;
  undefined8 local_2e0;
  int *local_2d8;
  ulonglong uStack_2d0;
  undefined1 local_2c8 [8];
  longlong *local_2c0;
  undefined8 local_2b8;
  undefined1 local_2b0 [4];
  char local_2ac;
  int *local_2a8 [5];
  undefined4 local_280;
  undefined4 local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  float local_230;
  undefined8 local_22c;
  undefined4 local_224;
  undefined8 local_220;
  undefined4 local_218;
  undefined8 local_214;
  undefined8 uStack_20c;
  undefined8 local_204;
  undefined8 uStack_1fc;
  undefined1 local_1f4;
  undefined4 local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  longlong lStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  char local_148;
  undefined8 local_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined8 uStack_127;
  undefined1 local_118 [216];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_338;
  local_2b8 = param_4;
  lVar4 = FUN_1402ad3be(DAT_14cb0d2b0,param_1,1);
  if (lVar4 != 0) {
    uVar5 = FUN_144a7b8cc();
    lVar6 = FUN_144a78ede(param_1,uVar5);
    FUN_1446dcdd4(local_2a8,&local_2b8);
    if (DAT_14cb83a10 != 0) {
      lVar7 = FUN_144837462(DAT_14cb83a10,local_2a8);
      if (local_2a8[3] != (int *)0x0) {
        FUN_1400020a8();
      }
      if (lVar7 == 0) goto LAB_1488d0daa;
      if (lVar6 != 0) {
        uVar5 = FUN_14050fd64();
        FUN_1470e5540(uVar5,local_2c8,lVar6,lVar7);
        if (local_2c0 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)local_2c0 + 0xc);
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (*piVar1 == 0) {
            (**(code **)(*local_2c0 + 0x10))();
          }
        }
        if ((longlong)*(int *)(lVar7 + 0x50) != 0) {
          lVar11 = *(longlong *)(lVar7 + 0x48);
          lVar12 = (longlong)*(int *)(lVar7 + 0x50) * 0xc0;
          do {
            FUN_1488d0c13(lVar6,lVar11);
            lVar11 = lVar11 + 0xc0;
            lVar12 = lVar12 + -0xc0;
          } while (lVar12 != 0);
        }
      }
      local_2d8 = (int *)0x0;
      uStack_2d0 = 0;
      local_2a8[0]._0_1_ = 0;
      local_280 = 0;
      FUN_1456bb102(local_2a8,lVar4);
      local_2f8 = 0;
      local_300 = 0;
      local_308 = 0;
      local_310 = 0;
      local_318 = 0;
      bVar2 = FUN_140cc60a8(&local_2d8,lVar7,param_3,local_2a8);
      FUN_144a5ac3a(local_2a8);
      piVar1 = local_2d8;
      uVar9 = uStack_2d0 & 0xffffffff;
      if ((((0 < (int)uStack_2d0 & bVar2) == 1) && (0 < *local_2d8)) &&
         (*(longlong *)(local_2d8 + 2) != 0)) {
        local_2a8[0]._0_1_ = 0;
        local_280 = 0;
        FUN_1456bb102(local_2a8,lVar4);
        FUN_140368c94(piVar1,local_118,local_2a8,0);
        FUN_144a5ac3a(local_2a8);
        uVar3 = rand();
        FUN_143dae3de(&local_2f0,0x42c80000,0x43160000);
        plVar8 = (longlong *)FUN_14007a5e6(lVar4);
        if (plVar8 != (longlong *)0x0) {
          local_224 = DAT_14cb7bd70;
          local_22c = DAT_14cb7bd68;
          local_220 = DAT_14cb7bd80;
          local_218 = DAT_14cb7bd88;
          local_214 = 0;
          uStack_20c = 0;
          local_204 = 0;
          uStack_1fc = 0;
          local_1f4 = 0;
          local_1f0 = 0xffffffff;
          local_148 = '\0';
          local_138 = 0;
          uStack_130 = 0;
          uStack_12f = 0;
          uStack_128 = 0;
          uStack_127 = 0;
          local_1e8 = 0;
          uStack_1e0 = 0;
          local_1d8 = 0;
          lStack_1d0 = 0;
          local_1c8 = 0;
          uStack_1c0 = 0;
          local_1b8 = 0;
          uStack_1b0 = 0;
          ppiVar10 = local_2a8;
          for (lVar4 = 0xc; lVar4 != 0; lVar4 = lVar4 + -1) {
            *ppiVar10 = (int *)*param_2;
            param_2 = param_2 + 1;
            ppiVar10 = ppiVar10 + 1;
          }
          local_238 = local_2e0;
          local_248 = local_2f0;
          uStack_244 = uStack_2ec;
          uStack_240 = uStack_2e8;
          uStack_23c = uStack_2e4;
          local_230 = ((float)(uVar3 & 0x7fff) / 32767.0) * 250.0 + 750.0;
          (**(code **)(*plVar8 + 0x10))(plVar8,local_2b0,local_118);
          if (local_2ac == '\x01') {
            local_2ac = '\0';
          }
          if (local_148 == '\x01') {
            local_148 = '\0';
          }
          if (lStack_1d0 != 0) {
            FUN_1400020a8();
          }
        }
        FUN_140368b56(local_118);
        uVar9 = uStack_2d0 & 0xffffffff;
      }
      FUN_14036924e(local_2d8,uVar9);
      local_2a8[3] = local_2d8;
    }
    if (local_2a8[3] != (int *)0x0) {
      FUN_1400020a8();
    }
  }
LAB_1488d0daa:
  if ((local_40 ^ (ulonglong)auStack_338) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d10b8 FUN_1488d10b8 body=52 status=ok
// SIG undefined FUN_1488d10b8(void)

undefined8 * FUN_1488d10b8(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d10f2 FUN_1488d10f2 body=52 status=ok
// SIG undefined FUN_1488d10f2(void)

undefined8 * FUN_1488d10f2(undefined8 *param_1,int param_2)

{
  *param_1 = &PTR_FUN_14a171dc0;
  FUN_144a49ae8(param_1 + 1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d112c FUN_1488d112c body=136 status=ok
// SIG undefined FUN_1488d112c(void)

void FUN_1488d112c(longlong param_1,int param_2)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x608);
  if (param_2 <= (int)uVar1) {
    iVar5 = 0x40;
    if (0x40 < uVar1) {
      lVar2 = (longlong)(int)uVar1;
      if (0x40 < *(uint *)(param_1 + 0x60c)) {
        lVar2 = lVar2 + ((ulonglong)(lVar2 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar2 * 0x18,0);
      iVar4 = (int)(uVar3 / 0x18);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar4) {
        iVar5 = iVar4;
      }
    }
    *(int *)(param_1 + 0x60c) = iVar5;
    FUN_140996b4c(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d11b6 FUN_1488d11b6 body=31 status=ok
// SIG undefined FUN_1488d11b6(void)

undefined8 FUN_1488d11b6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d11e8 FUN_1488d11e8 body=93 status=ok
// SIG undefined FUN_1488d11e8(void)

void FUN_1488d11e8(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412410;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488d1246 FUN_1488d1246 body=93 status=ok
// SIG undefined FUN_1488d1246(void)

void FUN_1488d1246(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412de0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412410;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488d12a4 FUN_1488d12a4 body=126 status=ok
// SIG undefined FUN_1488d12a4(void)

void FUN_1488d12a4(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b412de0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412410;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d1313. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d132c FUN_1488d132c body=20 status=ok
// SIG undefined FUN_1488d132c(void)

undefined8 FUN_1488d132c(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1488d1342 FUN_1488d1342 body=38 status=ok
// SIG undefined FUN_1488d1342(void)

undefined8 FUN_1488d1342(undefined8 param_1,int param_2)

{
  FUN_142b2c07c();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d1368 FUN_1488d1368 body=203 status=ok
// SIG undefined FUN_1488d1368(void)

void FUN_1488d1368(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  
  FUN_1457d8d86();
  uVar4 = FUN_140f9f418();
  *(undefined8 *)(param_1 + 8) = uVar4;
  lVar5 = FUN_14001cc68(0x90,0x10);
  FUN_1488d1434(lVar5,param_2);
  plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
  plVar6[1] = (longlong)&DAT_100000001;
  *plVar6 = (longlong)&PTR_FUN_14b4124e0;
  plVar6[2] = lVar5;
  *(longlong *)(param_1 + 0x10) = lVar5;
  plVar3 = *(longlong **)(param_1 + 0x18);
  if (plVar6 == plVar3) {
    if (plVar6 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar3 = plVar6 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 != 0) {
      return;
    }
    (**(code **)*plVar6)(plVar6);
    LOCK();
    piVar1 = (int *)((longlong)plVar6 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
    plVar3 = plVar6;
  }
  else {
    *(longlong **)(param_1 + 0x18) = plVar6;
    if (plVar3 == (longlong *)0x0) {
      return;
    }
    LOCK();
    plVar6 = plVar3 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 != 0) {
      return;
    }
    (**(code **)*plVar3)(plVar3);
    LOCK();
    piVar1 = (int *)((longlong)plVar3 + 0xc);
    *piVar1 = *piVar1 + -1;
    iVar2 = *piVar1;
    UNLOCK();
  }
  if (iVar2 != 0) {
    return;
  }
  (**(code **)(*plVar3 + 0x10))(plVar3);
  return;
}



// FUNCTION 1488d1434 FUN_1488d1434 body=241 status=ok
// SIG undefined FUN_1488d1434(void)

undefined8 * FUN_1488d1434(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = 0;
  iVar1 = *(int *)(param_2 + 1);
  pvVar2 = (void *)*param_2;
  *(int *)(param_1 + 1) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0xc) = 0;
  }
  else {
    FUN_148765c78(param_1,iVar1,0);
    memcpy((void *)*param_1,pvVar2,(longlong)iVar1 * 0x28);
  }
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_148765cec(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1 * 0x34);
  }
  param_1[8] = 0;
  *(undefined4 *)(param_1 + 9) = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((longlong)param_1 + 0x4c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x54) = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  FUN_140816cc4(param_1 + 4,param_2 + 4);
  uVar3 = param_2[0xf];
  uVar4 = *(undefined8 *)((longlong)param_2 + 0x7c);
  uVar5 = *(undefined8 *)((longlong)param_2 + 0x84);
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar3;
  *(undefined8 *)((longlong)param_1 + 0x7c) = uVar4;
  *(undefined8 *)((longlong)param_1 + 0x84) = uVar5;
  return param_1;
}



// FUNCTION 1488d1526 FUN_1488d1526 body=41 status=ok
// SIG undefined FUN_1488d1526(void)

void FUN_1488d1526(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if (lVar1 == 0) {
    return;
  }
  FUN_1458c8138(lVar1);
  FUN_1400020a8(lVar1);
  return;
}



// FUNCTION 1488d1550 FUN_1488d1550 body=29 status=ok
// SIG undefined FUN_1488d1550(void)

undefined8 FUN_1488d1550(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d156e FUN_1488d156e body=61 status=ok
// SIG undefined FUN_1488d156e(void)

void FUN_1488d156e(longlong param_1)

{
  FUN_1488d15ac(param_1,0);
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0xc0) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1488d15ac FUN_1488d15ac body=144 status=ok
// SIG undefined FUN_1488d15ac(void)

void FUN_1488d15ac(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xcc) != param_2) {
    FUN_1404ee4d0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0xe8) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  if (*(int *)(param_1 + 0xe4) < (int)uVar2 || 0x20 < *(int *)(param_1 + 0xe4)) {
    uVar1 = 0x20;
    if (0x20 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0xe4) = uVar1;
    FUN_14008f53c(param_1 + 0xd0,0);
    return;
  }
  return;
}



// FUNCTION 1488d163e FUN_1488d163e body=128 status=ok
// SIG undefined FUN_1488d163e(void)

void FUN_1488d163e(int param_1)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  int iVar4;
  
  lVar2 = DAT_14cb82360;
  if (DAT_14cb82394 != 0) {
    *(int *)(DAT_14cb82360 + (longlong)DAT_14cb82390 * 0x20) = param_1;
  }
  *(undefined4 *)(lVar2 + (longlong)param_1 * 0x20) = 0xffffffff;
  iVar4 = -1;
  if (0 < DAT_14cb82394) {
    iVar4 = DAT_14cb82390;
  }
  *(int *)(lVar2 + 4 + (longlong)param_1 * 0x20) = iVar4;
  DAT_14cb82394 = DAT_14cb82394 + 1;
  puVar3 = &DAT_14cb82370;
  if (DAT_14cb82380 != (undefined *)0x0) {
    puVar3 = DAT_14cb82380;
  }
  iVar4 = param_1 + 0x1f;
  if (-1 < param_1) {
    iVar4 = param_1;
  }
  bVar1 = (byte)param_1 & 0x1f;
  DAT_14cb82390 = param_1;
  *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) =
       *(uint *)(puVar3 + (longlong)(iVar4 >> 5) * 4) & (-2 << bVar1 | 0xfffffffeU >> 0x20 - bVar1);
  return;
}



// FUNCTION 1488d16be FUN_1488d16be body=110 status=ok
// SIG undefined FUN_1488d16be(void)

void FUN_1488d16be(longlong param_1,int param_2)

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
    FUN_1488d172e(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d172e FUN_1488d172e body=132 status=ok
// SIG undefined FUN_1488d172e(void)

void FUN_1488d172e(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1488d17b2 FUN_1488d17b2 body=110 status=ok
// SIG undefined FUN_1488d17b2(void)

void FUN_1488d17b2(longlong param_1,int param_2)

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
    FUN_1488d1822(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d1822 FUN_1488d1822 body=132 status=ok
// SIG undefined FUN_1488d1822(void)

void FUN_1488d1822(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1488d18a6 FUN_1488d18a6 body=1 status=ok
// SIG undefined FUN_1488d18a6(void)

void FUN_1488d18a6(void)

{
  return;
}



// FUNCTION 1488d18a8 FUN_1488d18a8 body=29 status=ok
// SIG undefined FUN_1488d18a8(void)

undefined8 FUN_1488d18a8(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d18c6 FUN_1488d18c6 body=138 status=ok
// SIG undefined FUN_1488d18c6(void)

void FUN_1488d18c6(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)((longlong)param_2 * 0x68 + lVar2 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x68) = param_2;
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
      puVar7 = puVar7 + 0x1a;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1488d1950 FUN_1488d1950 body=110 status=ok
// SIG undefined FUN_1488d1950(void)

void FUN_1488d1950(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1488d19c0(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d19c0 FUN_1488d19c0 body=132 status=ok
// SIG undefined FUN_1488d19c0(void)

void FUN_1488d19c0(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1488d1a44 FUN_1488d1a44 body=148 status=ok
// SIG undefined FUN_1488d1a44(void)

void FUN_1488d1a44(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x600);
  if (*(longlong *)(param_1 + 0x600) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x62c) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x628) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x62c) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x628);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x628) = param_2;
  *(int *)(param_1 + 0x62c) = *(int *)(param_1 + 0x62c) + 1;
  lVar5 = param_1 + 0x610;
  if (*(longlong *)(param_1 + 0x618) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x618);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488d1ad8 FUN_1488d1ad8 body=107 status=ok
// SIG undefined FUN_1488d1ad8(void)

void FUN_1488d1ad8(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  uVar1 = DAT_14cb82878;
  if (param_1 <= (int)DAT_14cb82878) {
    iVar2 = 0x40;
    if (0x40 < DAT_14cb82878) {
      lVar5 = (longlong)(int)DAT_14cb82878;
      if (0x40 < DAT_14cb8287c) {
        lVar5 = lVar5 + ((ulonglong)(lVar5 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar5 << 4,0);
      iVar3 = (int)(uVar4 >> 4);
      iVar2 = 0x7fffffff;
      if ((int)uVar1 <= iVar3) {
        iVar2 = iVar3;
      }
    }
    DAT_14cb8287c = iVar2;
    FUN_14619bd56(param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(DAT_14cb82878);
}



// FUNCTION 1488d1b44 FUN_1488d1b44 body=62 status=ok
// SIG undefined FUN_1488d1b44(void)

void FUN_1488d1b44(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488d1b82(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0x10,8);
  }
  return;
}



// FUNCTION 1488d1b82 FUN_1488d1b82 body=93 status=ok
// SIG undefined FUN_1488d1b82(void)

ulonglong FUN_1488d1b82(uint param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = (ulonglong)param_2;
  if (((((longlong)(int)(param_2 - param_1) & 0xffffffffffffc00U) != 0) ||
      ((int)(param_1 * 3) < (int)(param_2 * 2))) &&
     (param_1 == 0 || 0x40 < (int)(param_2 - param_1))) {
    if ((int)param_1 < 1) {
      uVar1 = (ulonglong)param_1;
    }
    else {
      uVar1 = FUN_144a3809e((ulonglong)param_1 << 4,8);
      uVar1 = uVar1 >> 4;
    }
  }
  return uVar1;
}



// FUNCTION 1488d1be0 FUN_1488d1be0 body=152 status=ok
// SIG undefined FUN_1488d1be0(void)

undefined8 * FUN_1488d1be0(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *_Src;
  
  *param_1 = &DAT_14a171d50;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = *(undefined8 *)(param_2 + 8);
  FUN_1406022fe(param_1 + 2,param_2 + 0x10);
  *param_1 = &PTR_FUN_14b1828b0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  _Src = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_14875f284(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],_Src,(longlong)iVar1 << 3);
  }
  return param_1;
}



// FUNCTION 1488d1c78 FUN_1488d1c78 body=132 status=ok
// SIG undefined FUN_1488d1c78(void)

void FUN_1488d1c78(longlong param_1,int param_2)

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



// FUNCTION 1488d1cfe FUN_1488d1cfe body=143 status=ok
// SIG undefined FUN_1488d1cfe(void)

void FUN_1488d1cfe(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(uint *)(param_1 + 8);
  if (param_2 <= (int)uVar1) {
    if (*(int *)(param_1 + 0xc) == 0) {
      uVar3 = 4;
      if (4 < uVar1) {
        uVar3 = uVar1;
      }
      lVar4 = (longlong)(int)uVar3;
    }
    else {
      lVar4 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar5 = FUN_144a3809e(lVar4 * 0x38,8);
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar5 >> 3;
    iVar6 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
    iVar7 = 0x7fffffff;
    if ((int)uVar1 <= iVar6) {
      iVar7 = iVar6;
    }
    *(int *)(param_1 + 0xc) = iVar7;
    FUN_1446f8d3c(param_1,param_2,iVar7,0x38,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488d1d8e FUN_1488d1d8e body=52 status=ok
// SIG undefined FUN_1488d1d8e(void)

void FUN_1488d1d8e(void)

{
  if (1 < DAT_14cb83098) {
    FUN_14616313c();
    DAT_14cb83098 = 1;
    FUN_140bb4242();
    return;
  }
  FUN_1488d1dc2();
  FUN_14616313c();
  return;
}



// FUNCTION 1488d1dc2 FUN_1488d1dc2 body=368 status=ok
// SIG undefined FUN_1488d1dc2(void)

void FUN_1488d1dc2(void)

{
  undefined8 uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined *puVar5;
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
  puVar5 = &DAT_14cb83088;
  if (DAT_14cb83090 != (undefined *)0x0) {
    puVar5 = DAT_14cb83090;
  }
  iVar4 = DAT_14cb83098 + 3;
  if (-1 < DAT_14cb83098) {
    iVar4 = DAT_14cb83098;
  }
  if (DAT_14cb83058 - DAT_14cb83084 < iVar4 >> 2) {
    local_50 = 0x100000000;
    uStack_48 = &DAT_14cb83060;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    if (DAT_14cb83078 == 0) {
      iVar4 = 0;
    }
    else {
      FUN_1449c0562(&local_50);
      iVar4 = DAT_14cb83078;
    }
    local_78 = &DAT_14cb83050;
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    if ((local_60._4_4_ != iVar4) || (uStack_48 != &DAT_14cb83060)) {
      iVar2 = local_60._4_4_;
      local_60 = uVar1;
      do {
        *(undefined4 *)(puVar5 + (longlong)*(int *)(*local_78 + 0x2c + (longlong)iVar2 * 0x30) * 4)
             = 0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_1449c0562(&local_70);
        iVar2 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != &DAT_14cb83050 ||
               ((undefined4 *)CONCAT44(uStack_64,uStack_68) != &DAT_14cb83060 ||
               local_60._4_4_ != iVar4));
    }
  }
  else {
    uVar1 = local_60;
    if (0 < DAT_14cb83098) {
      lVar3 = 0;
      do {
        *(undefined4 *)(puVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < DAT_14cb83098);
    }
  }
  local_60 = uVar1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d1f34 FUN_1488d1f34 body=209 status=ok
// SIG undefined FUN_1488d1f34(void)

int FUN_1488d1f34(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1488d2006 FUN_1488d2006 body=209 status=ok
// SIG undefined FUN_1488d2006(void)

int FUN_1488d2006(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar4 = (int)param_1[1];
  lVar5 = (longlong)iVar4;
  if (lVar5 == 0) {
    iVar4 = 0;
  }
  else {
    plVar1 = (longlong *)*param_1;
    iVar3 = 0;
    bVar10 = *plVar1 == *(longlong *)*param_2;
    iVar7 = 0;
    do {
      iVar2 = iVar7 + 1;
      if (iVar7 + 1 < iVar4) {
        iVar2 = iVar4;
      }
      iVar8 = iVar7;
      lVar6 = (longlong)iVar7;
      do {
        lVar6 = lVar6 + 1;
        iVar9 = iVar2;
        if (lVar5 <= lVar6) break;
        iVar8 = iVar8 + 1;
        iVar9 = iVar8;
      } while (bVar10 == (plVar1[lVar6] == *(longlong *)*param_2));
      if (bVar10 == false) {
        if (iVar3 != iVar7) {
          memmove(plVar1 + iVar3,plVar1 + iVar7,(longlong)(iVar9 - iVar7) << 3);
        }
        iVar3 = iVar3 + (iVar9 - iVar7);
      }
      bVar10 = (bool)(bVar10 ^ 1);
      iVar7 = iVar9;
    } while (lVar6 < lVar5);
    *(int *)(param_1 + 1) = iVar3;
    iVar4 = iVar4 - iVar3;
  }
  return iVar4;
}



// FUNCTION 1488d20d8 FUN_1488d20d8 body=96 status=ok
// SIG undefined FUN_1488d20d8(void)

void FUN_1488d20d8(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 3,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 3)) {
      uVar2 = uVar1 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,8,8);
  }
  return;
}



// FUNCTION 1488d2138 FUN_1488d2138 body=138 status=ok
// SIG undefined FUN_1488d2138(void)

void FUN_1488d2138(longlong *param_1,int param_2,int param_3)

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
    puVar7 = (undefined4 *)(lVar2 + (longlong)param_2 * 0x18 + 4);
    do {
      if (*(int *)((longlong)param_1 + 0x34) != 0) {
        *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = param_2;
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
      puVar7 = puVar7 + 6;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1488d21c2 FUN_1488d21c2 body=127 status=ok
// SIG undefined FUN_1488d21c2(void)

void FUN_1488d21c2(longlong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x2c);
  if (uVar1 < 0x21) {
    uVar1 = 0x20;
  }
  else {
    uVar3 = uVar2 - uVar1;
    if (uVar3 < 0x4000) {
      if (uVar3 < 0x41 || (int)(uVar2 * 2) <= (int)(uVar1 * 3)) {
        return;
      }
    }
    else if ((int)uVar3 < 0x41) {
      return;
    }
    if (0 < (int)uVar1) {
      uVar1 = FUN_144a3809e(uVar1,0);
      uVar2 = *(uint *)(param_1 + 0x2c);
    }
  }
  if (uVar1 == uVar2) {
    return;
  }
  *(uint *)(param_1 + 0x2c) = uVar1;
  FUN_145cc9052(param_1,*(undefined4 *)(param_1 + 0x28),uVar1,1);
  return;
}



// FUNCTION 1488d2242 FUN_1488d2242 body=114 status=ok
// SIG undefined FUN_1488d2242(void)

void FUN_1488d2242(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0xc) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0xc);
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



// FUNCTION 1488d22b4 FUN_1488d22b4 body=107 status=ok
// SIG undefined FUN_1488d22b4(void)

/* WARNING: Removing unreachable block (ram,0x0001488d22e6) */
/* WARNING: Removing unreachable block (ram,0x0001488d22c2) */
/* WARNING: Removing unreachable block (ram,0x0001488d22d8) */
/* WARNING: Removing unreachable block (ram,0x0001488d22f1) */
/* WARNING: Removing unreachable block (ram,0x0001488d22da) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d22b4(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = DAT_14cb841c0;
  LOCK();
  UNLOCK();
  DAT_14cb841c0 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    _DAT_14cb841c8 = _DAT_14cb841c8 + -1;
    UNLOCK();
    do {
      puVar1 = (undefined8 *)*puVar2;
      if (puVar2[2] != 0) {
        puVar2[2] = 0;
        puVar2[3] = 0;
        *puVar2 = 0;
        puVar2[1] = 0;
      }
      puVar2 = puVar1;
    } while (puVar1 != (undefined8 *)0x0);
    LOCK();
    _DAT_14cb841c8 = _DAT_14cb841c8 + 1;
    UNLOCK();
  }
  return;
}



// FUNCTION 1488d2320 FUN_1488d2320 body=31 status=ok
// SIG undefined FUN_1488d2320(void)

undefined8 FUN_1488d2320(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d2356 FUN_1488d2356 body=93 status=ok
// SIG undefined FUN_1488d2356(void)

void FUN_1488d2356(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488d23b4 FUN_1488d23b4 body=93 status=ok
// SIG undefined FUN_1488d23b4(void)

void FUN_1488d23b4(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412d70;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412580;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488d2412 FUN_1488d2412 body=126 status=ok
// SIG undefined FUN_1488d2412(void)

void FUN_1488d2412(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b412d70;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412580;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d2481. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d249a FUN_1488d249a body=20 status=ok
// SIG undefined FUN_1488d249a(void)

undefined8 FUN_1488d249a(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1488d24b0 FUN_1488d24b0 body=31 status=ok
// SIG undefined FUN_1488d24b0(void)

undefined8 FUN_1488d24b0(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d24e2 FUN_1488d24e2 body=93 status=ok
// SIG undefined FUN_1488d24e2(void)

void FUN_1488d24e2(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4125f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488d2540 FUN_1488d2540 body=93 status=ok
// SIG undefined FUN_1488d2540(void)

void FUN_1488d2540(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412660;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b4125f0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  return;
}



// FUNCTION 1488d259e FUN_1488d259e body=126 status=ok
// SIG undefined FUN_1488d259e(void)

void FUN_1488d259e(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b412660;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b4125f0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d260d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d2626 FUN_1488d2626 body=20 status=ok
// SIG undefined FUN_1488d2626(void)

undefined8 FUN_1488d2626(longlong param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x18))(param_2);
  return 1;
}



// FUNCTION 1488d263c FUN_1488d263c body=31 status=ok
// SIG undefined FUN_1488d263c(void)

undefined8 FUN_1488d263c(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d2670 FUN_1488d2670 body=85 status=ok
// SIG undefined FUN_1488d2670(void)

void FUN_1488d2670(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  
  if ((int)param_2[1] != 2) {
    FUN_1446efa72(param_2,0,2,0x10);
    *(undefined4 *)(param_2 + 1) = 2;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14a1c87c0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412780;
  return;
}



// FUNCTION 1488d26c6 FUN_1488d26c6 body=118 status=ok
// SIG undefined FUN_1488d26c6(void)

void FUN_1488d26c6(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 2) {
    FUN_1446efa72(param_2 + 1,0,2,0x10);
    param_2[1].LockCount = 2;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14a1c87c0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412780;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d272d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d273c FUN_1488d273c body=101 status=ok
// SIG undefined FUN_1488d273c(void)

undefined8 FUN_1488d273c(void)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_48 [40];
  undefined1 local_20 [8];
  longlong *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_48;
  FUN_1461b52da(local_20);
  if (local_18 != (longlong *)0x0) {
    LOCK();
    plVar1 = local_18 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)*local_18)(local_18);
      LOCK();
      piVar2 = (int *)((longlong)local_18 + 0xc);
      *piVar2 = *piVar2 + -1;
      UNLOCK();
      if (*piVar2 == 0) {
        (**(code **)(*local_18 + 0x10))(local_18);
      }
    }
  }
  if ((local_10 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d27a2 FUN_1488d27a2 body=45 status=ok
// SIG undefined FUN_1488d27a2(void)

longlong FUN_1488d27a2(longlong param_1,int param_2)

{
  param_1 = param_1 + -0x20;
  FUN_145bccf26(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d27d0 FUN_1488d27d0 body=54 status=ok
// SIG undefined FUN_1488d27d0(void)

longlong FUN_1488d27d0(longlong param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)plVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*plVar2 + 0x10))();
    }
  }
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d2806 FUN_1488d2806 body=62 status=ok
// SIG undefined FUN_1488d2806(void)

void FUN_1488d2806(longlong param_1)

{
  int iVar1;
  
  iVar1 = FUN_1488d2844(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  if (iVar1 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = iVar1;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),iVar1,0xe8,8);
  }
  return;
}



// FUNCTION 1488d2844 FUN_1488d2844 body=110 status=ok
// SIG undefined FUN_1488d2844(void)

ulonglong FUN_1488d2844(uint param_1,ulonglong param_2)

{
  int iVar1;
  
  iVar1 = (int)param_2 - param_1;
  if ((ulonglong)((longlong)iVar1 * 0xe8) < 0x4000) {
    if ((int)param_2 * 2 <= (int)(param_1 * 3)) goto LAB_1488d287d;
  }
  if (param_1 == 0 || 0x40 < iVar1) {
    if ((int)param_1 < 1) {
      param_2 = (ulonglong)param_1;
    }
    else {
      param_2 = FUN_144a3809e((ulonglong)param_1 * 0xe8,8);
      param_2 = param_2 / 0xe8;
    }
  }
LAB_1488d287d:
  return param_2 & 0xffffffff;
}



// FUNCTION 1488d28b2 FUN_1488d28b2 body=110 status=ok
// SIG undefined FUN_1488d28b2(void)

void FUN_1488d28b2(longlong param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  
  uVar1 = *(uint *)(param_1 + 0x48);
  if (param_2 <= (int)uVar1) {
    iVar5 = 8;
    if (8 < uVar1) {
      lVar4 = (longlong)(int)uVar1;
      if (8 < *(uint *)(param_1 + 0x4c)) {
        lVar4 = lVar4 + ((ulonglong)(lVar4 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      iVar2 = (int)(uVar3 >> 3);
      iVar5 = 0x7fffffff;
      if ((int)uVar1 <= iVar2) {
        iVar5 = iVar2;
      }
    }
    *(int *)(param_1 + 0x4c) = iVar5;
    FUN_1488d2922(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d2922 FUN_1488d2922 body=132 status=ok
// SIG undefined FUN_1488d2922(void)

void FUN_1488d2922(void *param_1,int param_2,undefined8 param_3)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x40);
  if ((uint)param_3 < 9) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x40,0,param_3,8);
    memmove(*(void **)((longlong)param_1 + 0x40),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x40,param_2,param_3,8);
  return;
}



// FUNCTION 1488d29a6 FUN_1488d29a6 body=110 status=ok
// SIG undefined FUN_1488d29a6(void)

void FUN_1488d29a6(longlong param_1,int param_2)

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
    FUN_1488d2a16(param_1,param_2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d2a16 FUN_1488d2a16 body=132 status=ok
// SIG undefined FUN_1488d2a16(void)

void FUN_1488d2a16(void *param_1,int param_2,undefined8 param_3)

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



// FUNCTION 1488d2a9a FUN_1488d2a9a body=28 status=ok
// SIG undefined FUN_1488d2a9a(void)

void FUN_1488d2a9a(longlong param_1)

{
  longlong lVar1;
  
  *(undefined ***)(param_1 + 0x10) = &PTR_FUN_14b3185b0;
  lVar1 = *(longlong *)(param_1 + 0x80);
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



// FUNCTION 1488d2ab6 FUN_1488d2ab6 body=29 status=ok
// SIG undefined FUN_1488d2ab6(void)

undefined8 FUN_1488d2ab6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d2ad4 FUN_1488d2ad4 body=322 status=ok
// SIG undefined FUN_1488d2ad4(void)

void FUN_1488d2ad4(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0xc + (longlong)iVar4 * 0x10) * 4) =
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



// FUNCTION 1488d2c18 FUN_1488d2c18 body=48 status=ok
// SIG undefined FUN_1488d2c18(void)

void FUN_1488d2c18(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1488d2c48 FUN_1488d2c48 body=48 status=ok
// SIG undefined FUN_1488d2c48(void)

void FUN_1488d2c48(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,0x10,8);
  }
  return;
}



// FUNCTION 1488d2c78 FUN_1488d2c78 body=130 status=ok
// SIG undefined FUN_1488d2c78(void)

void FUN_1488d2c78(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x1c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 3,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 3)) {
        uVar5 = uVar3 >> 3 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x1c) = (int)uVar5;
    FUN_1488d2cfc(param_1,param_2,uVar5,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488d2cfc FUN_1488d2cfc body=133 status=ok
// SIG undefined FUN_1488d2cfc(void)

void FUN_1488d2cfc(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x10);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 3);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x10,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x10),param_1,(longlong)param_2 << 3);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x10,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488d2d82 FUN_1488d2d82 body=130 status=ok
// SIG undefined FUN_1488d2d82(void)

void FUN_1488d2d82(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar1 = *(uint *)(param_1 + 0x28);
  if (param_2 <= (int)uVar1) {
    uVar5 = 2;
    if (2 < uVar1) {
      if (*(uint *)(param_1 + 0x2c) < 3) {
        uVar2 = 4;
        if (4 < uVar1) {
          uVar2 = uVar1;
        }
        lVar4 = (longlong)(int)uVar2;
      }
      else {
        lVar4 = (longlong)(int)uVar1 + ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + 0x10;
      }
      uVar3 = FUN_144a3809e(lVar4 << 4,0);
      uVar5 = 0x7fffffff;
      if ((int)uVar1 <= (int)(uVar3 >> 4)) {
        uVar5 = uVar3 >> 4 & 0xffffffff;
      }
    }
    *(int *)(param_1 + 0x2c) = (int)uVar5;
    FUN_1488d2e06(param_1,param_2,uVar5,0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488d2e06 FUN_1488d2e06 body=133 status=ok
// SIG undefined FUN_1488d2e06(void)

void FUN_1488d2e06(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x20);
  if ((uint)param_3 < 3) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 4);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x20,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x20),param_1,(longlong)param_2 << 4);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x20,param_2,param_3,param_4);
  return;
}



// FUNCTION 1488d2e8c FUN_1488d2e8c body=132 status=ok
// SIG undefined FUN_1488d2e8c(void)

void FUN_1488d2e8c(longlong param_1,int param_2)

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
    uVar3 = FUN_144a3809e(lVar4 << 3,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,8,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488d2f12 FUN_1488d2f12 body=114 status=ok
// SIG undefined FUN_1488d2f12(void)

void FUN_1488d2f12(longlong *param_1,int param_2)

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



// FUNCTION 1488d2f84 FUN_1488d2f84 body=113 status=ok
// SIG undefined FUN_1488d2f84(void)

void FUN_1488d2f84(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 * 0x18,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 / 0x18)) {
      uVar2 = uVar1 / 0x18 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x18,8);
  }
  return;
}



// FUNCTION 1488d2ffa FUN_1488d2ffa body=81 status=ok
// SIG undefined FUN_1488d2ffa(void)

undefined8 FUN_1488d2ffa(longlong param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) {
        return 0;
      }
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
    uVar6 = *(undefined8 *)(param_1 + 0x18);
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
  return uVar6;
}



// FUNCTION 1488d3052 FUN_1488d3052 body=89 status=ok
// SIG undefined FUN_1488d3052(void)

bool FUN_1488d3052(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  bool bVar7;
  
  plVar3 = *(longlong **)(param_1 + 0x20);
  if (plVar3 == (longlong *)0x0) {
    lVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    lVar6 = 0;
    do {
      if (iVar5 == 0) goto LAB_1488d309d;
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
    lVar6 = *(longlong *)(param_1 + 0x18);
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
LAB_1488d309d:
  return lVar6 == param_2;
}



// FUNCTION 1488d30ac FUN_1488d30ac body=118 status=ok
// SIG undefined FUN_1488d30ac(void)

void FUN_1488d30ac(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_149e020b0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412ad0;
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  puVar1[4] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488d3122 FUN_1488d3122 body=156 status=ok
// SIG undefined FUN_1488d3122(void)

void FUN_1488d3122(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  longlong lVar2;
  undefined8 uVar3;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_149e020b0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412ad0;
  (p_Var1->ProcessLocksList).Blink = *(_LIST_ENTRY **)(param_1 + 0x18);
  lVar2 = *(longlong *)(param_1 + 0x20);
  p_Var1->EntryCount = (int)lVar2;
  p_Var1->ContentionCount = (int)((ulonglong)lVar2 >> 0x20);
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar3;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar3 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar3 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d31ae. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d31be FUN_1488d31be body=94 status=ok
// SIG undefined FUN_1488d31be(void)

void FUN_1488d31be(longlong param_1)

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
                    /* WARNING: Could not recover jumptable at 0x0001488d3206. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar3 + 0x10))(plVar3);
            return;
          }
        }
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001488d3211. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_1 + 0x28))(0);
  return;
}



// FUNCTION 1488d321c FUN_1488d321c body=122 status=ok
// SIG undefined FUN_1488d321c(void)

void FUN_1488d321c(longlong *param_1,int param_2)

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



// FUNCTION 1488d3296 FUN_1488d3296 body=38 status=ok
// SIG undefined FUN_1488d3296(void)

undefined8 FUN_1488d3296(undefined8 param_1,int param_2)

{
  FUN_145c03c14();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d32ca FUN_1488d32ca body=38 status=ok
// SIG undefined FUN_1488d32ca(void)

undefined8 FUN_1488d32ca(undefined8 param_1,int param_2)

{
  FUN_145c03d38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d32f2 FUN_1488d32f2 body=38 status=ok
// SIG undefined FUN_1488d32f2(void)

undefined8 FUN_1488d32f2(undefined8 param_1,int param_2)

{
  FUN_145c03d38();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d3318 FUN_1488d3318 body=38 status=ok
// SIG undefined FUN_1488d3318(void)

undefined8 FUN_1488d3318(undefined8 param_1,int param_2)

{
  FUN_145c03dbe();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d333e FUN_1488d333e body=31 status=ok
// SIG undefined FUN_1488d333e(void)

undefined8 FUN_1488d333e(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d337a FUN_1488d337a body=101 status=ok
// SIG undefined FUN_1488d337a(void)

void FUN_1488d337a(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488d33e0 FUN_1488d33e0 body=101 status=ok
// SIG undefined FUN_1488d33e0(void)

void FUN_1488d33e0(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b3ec750;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412bc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  puVar1[5] = *(undefined8 *)(param_1 + 0x28);
  return;
}



// FUNCTION 1488d3446 FUN_1488d3446 body=134 status=ok
// SIG undefined FUN_1488d3446(void)

void FUN_1488d3446(longlong param_1,LPCRITICAL_SECTION param_2)

{
  PRTL_CRITICAL_SECTION_DEBUG p_Var1;
  undefined8 uVar2;
  undefined4 uVar3;
  DWORD DVar4;
  DWORD DVar5;
  
  EnterCriticalSection(param_2);
  if (param_2[1].LockCount != 3) {
    FUN_1446efa72(param_2 + 1,0,3,0x10);
    param_2[1].LockCount = 3;
  }
  p_Var1 = param_2[1].DebugInfo;
  *(undefined ***)p_Var1 = &PTR_LAB_14b3ec750;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412bc0;
  uVar3 = *(undefined4 *)(param_1 + 0x1c);
  DVar4 = *(DWORD *)(param_1 + 0x20);
  DVar5 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar3;
  p_Var1->EntryCount = DVar4;
  p_Var1->ContentionCount = DVar5;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  p_Var1->Flags = (int)uVar2;
  p_Var1->CreatorBackTraceIndexHigh = (short)((ulonglong)uVar2 >> 0x20);
  p_Var1->SpareWORD = (short)((ulonglong)uVar2 >> 0x30);
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d34bd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d34de FUN_1488d34de body=31 status=ok
// SIG undefined FUN_1488d34de(void)

undefined8 FUN_1488d34de(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 1488d350e FUN_1488d350e body=93 status=ok
// SIG undefined FUN_1488d350e(void)

void FUN_1488d350e(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488d356c FUN_1488d356c body=93 status=ok
// SIG undefined FUN_1488d356c(void)

void FUN_1488d356c(longlong param_1,longlong *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  if ((int)param_2[1] != 3) {
    FUN_1446efa72(param_2,0,3,0x10);
    *(undefined4 *)(param_2 + 1) = 3;
  }
  puVar1 = (undefined8 *)*param_2;
  *puVar1 = &PTR_LAB_14b412ca0;
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  *puVar1 = &PTR_FUN_14b412c30;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = uVar2;
  return;
}



// FUNCTION 1488d35ca FUN_1488d35ca body=126 status=ok
// SIG undefined FUN_1488d35ca(void)

void FUN_1488d35ca(longlong param_1,LPCRITICAL_SECTION param_2)

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
  *(undefined ***)p_Var1 = &PTR_LAB_14b412ca0;
  (p_Var1->ProcessLocksList).Flink = *(_LIST_ENTRY **)(param_1 + 0x10);
  *(undefined ***)p_Var1 = &PTR_FUN_14b412c30;
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  DVar3 = *(DWORD *)(param_1 + 0x20);
  DVar4 = *(DWORD *)(param_1 + 0x24);
  *(undefined4 *)&(p_Var1->ProcessLocksList).Blink = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((longlong)&(p_Var1->ProcessLocksList).Blink + 4) = uVar2;
  p_Var1->EntryCount = DVar3;
  p_Var1->ContentionCount = DVar4;
  if (param_2 != (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001488d3639. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection(param_2);
    return;
  }
  return;
}



// FUNCTION 1488d3654 FUN_1488d3654 body=173 status=ok
// SIG undefined FUN_1488d3654(void)

void FUN_1488d3654(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [32];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  uVar1 = *(undefined8 *)(param_1 + 8);
  cVar2 = FUN_144729dda();
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(param_1);
    uVar4 = FUN_14479d2ce(lVar3 + 0x9b8);
    FUN_140d8b18e(&local_40,uVar4);
    local_50 = local_40;
    local_58 = param_4;
    FUN_1411c57e0(uVar1,lVar3,param_2,param_3);
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_38 ^ (ulonglong)auStack_78);
  }
  if ((local_38 ^ (ulonglong)auStack_78) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d3702 FUN_1488d3702 body=148 status=ok
// SIG undefined FUN_1488d3702(void)

void FUN_1488d3702(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x180);
  if (*(longlong *)(param_1 + 0x180) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0x1ac) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0x1a8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0x1ac) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0x1a8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0x1a8) = param_2;
  *(int *)(param_1 + 0x1ac) = *(int *)(param_1 + 0x1ac) + 1;
  lVar5 = param_1 + 400;
  if (*(longlong *)(param_1 + 0x198) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x198);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488d3796 FUN_1488d3796 body=96 status=ok
// SIG undefined FUN_1488d3796(void)

void FUN_1488d3796(longlong param_1,int param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = FUN_144a3809e((longlong)param_2 << 4,8);
    uVar2 = 0x7fffffff;
    if (param_2 <= (int)(uVar1 >> 4)) {
      uVar2 = uVar1 >> 4 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x10,8);
  }
  return;
}



// FUNCTION 1488d37f6 FUN_1488d37f6 body=360 status=ok
// SIG undefined FUN_1488d37f6(void)

void FUN_1488d37f6(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0x130;
  if (*(longlong *)(param_1 + 0x150) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x150);
  }
  iVar6 = *(int *)(param_1 + 0x158);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 0x108) - *(int *)(param_1 + 300) < iVar3 >> 2) {
    lVar2 = param_1 + 0x110;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0x120) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0x120);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0x100);
        if (*(longlong *)(local_78 + 0x100) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0xc + (longlong)iVar3 * 0x10) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x158));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d3960 FUN_1488d3960 body=103 status=ok
// SIG undefined FUN_1488d3960(void)

undefined8 FUN_1488d3960(longlong param_1,uint param_2)

{
  undefined1 auVar1 [16];
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  
  uVar2 = FUN_144a3809e((ulonglong)param_2 * 0x18,8);
  auVar1._8_8_ = 0;
  auVar1._0_8_ = uVar2;
  uVar3 = SUB168(auVar1 * ZEXT816(0xaaaaaaaaaaaaaaab),0);
  uVar4 = 0x7fffffff;
  if ((int)param_2 <= (int)(uVar2 / 0x18)) {
    uVar4 = uVar2 / 0x18 & 0xffffffff;
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    uVar3 = FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x18,8);
  }
  return uVar3;
}



// FUNCTION 1488d39c8 FUN_1488d39c8 body=95 status=ok
// SIG undefined FUN_1488d39c8(void)

void FUN_1488d39c8(longlong *param_1,undefined8 *param_2)

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
    FUN_1488d3a28(param_1,iVar2);
  }
  FUN_148766c1d((longlong)iVar2 * 0x18 + *param_1,*param_2,uVar1);
  return;
}



// FUNCTION 1488d3a28 FUN_1488d3a28 body=147 status=ok
// SIG undefined FUN_1488d3a28(void)

void FUN_1488d3a28(longlong param_1,int param_2)

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
    uVar4 = FUN_144a3809e(lVar3 * 0x18,8);
    uVar5 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 / 0x18)) {
      uVar5 = uVar4 / 0x18 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,param_2,uVar5,0x18,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 1488d3abc FUN_1488d3abc body=144 status=ok
// SIG undefined FUN_1488d3abc(void)

void FUN_1488d3abc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  
  lVar2 = *param_1;
  lVar5 = (longlong)(int)param_1[1];
  if (lVar5 != 0) {
    uVar4 = 0;
    do {
      if ((*(longlong *)(lVar2 + uVar4) == *param_2) &&
         (*(int *)(lVar2 + 8 + uVar4) == (int)param_2[1])) {
        if ((int)(uVar4 >> 3) * -0x55555555 != -1) {
          return;
        }
        break;
      }
      lVar1 = lVar2 + uVar4;
      uVar4 = uVar4 + 0x18;
    } while (lVar1 + 0x18 != lVar2 + lVar5 * 0x18);
  }
  uVar3 = (int)param_1[1] + 1;
  *(uint *)(param_1 + 1) = uVar3;
  if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
    FUN_1488d3a28(param_1);
    lVar2 = *param_1;
  }
  *(longlong *)(lVar2 + lVar5 * 0x18) = *param_2;
  *(int *)(lVar2 + 8 + lVar5 * 0x18) = (int)param_2[1];
  *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = 0;
  return;
}



// FUNCTION 1488d3b4c FUN_1488d3b4c body=141 status=ok
// SIG undefined FUN_1488d3b4c(void)

void FUN_1488d3b4c(longlong param_1,int param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  longlong lVar3;
  ulonglong uVar4;
  int iVar5;
  int iVar6;
  
  uVar1 = *(uint *)(param_1 + 0xe08);
  if (param_2 <= (int)uVar1) {
    iVar6 = 0x10;
    if (0x10 < uVar1) {
      lVar3 = (longlong)(int)uVar1;
      if (0x10 < *(uint *)(param_1 + 0xe0c)) {
        lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
      }
      uVar4 = FUN_144a3809e(lVar3 * 0xe0,0);
      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar4 >> 5;
      iVar5 = SUB164(auVar2 * ZEXT816(0x2492492492492493),8);
      iVar6 = 0x7fffffff;
      if ((int)uVar1 <= iVar5) {
        iVar6 = iVar5;
      }
    }
    *(int *)(param_1 + 0xe0c) = iVar6;
    FUN_143dafd84(param_1,param_2,iVar6,0xe0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4(uVar1);
}



// FUNCTION 1488d3bda FUN_1488d3bda body=186 status=ok
// SIG undefined FUN_1488d3bda(void)

void FUN_1488d3bda(longlong param_1,int param_2,int param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  undefined4 *puVar7;
  
  lVar6 = *(longlong *)(param_1 + 0xe00);
  if (*(longlong *)(param_1 + 0xe00) == 0) {
    lVar6 = param_1;
  }
  if (param_3 != 0) {
    puVar7 = (undefined4 *)((longlong)param_2 * 0xe0 + lVar6 + 4);
    do {
      if (*(int *)(param_1 + 0xe2c) != 0) {
        *(int *)(lVar6 + (longlong)*(int *)(param_1 + 0xe28) * 0xe0) = param_2;
      }
      puVar7[-1] = 0xffffffff;
      if (*(int *)(param_1 + 0xe2c) < 1) {
        uVar3 = 0xffffffff;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0xe28);
      }
      *puVar7 = uVar3;
      *(int *)(param_1 + 0xe28) = param_2;
      *(int *)(param_1 + 0xe2c) = *(int *)(param_1 + 0xe2c) + 1;
      lVar4 = *(longlong *)(param_1 + 0xe18);
      if (*(longlong *)(param_1 + 0xe18) == 0) {
        lVar4 = param_1 + 0xe10;
      }
      iVar5 = param_2 + 0x1f;
      if (-1 < param_2) {
        iVar5 = param_2;
      }
      bVar2 = (byte)param_2 & 0x1f;
      puVar1 = (uint *)(lVar4 + (longlong)(iVar5 >> 5) * 4);
      *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
      param_2 = param_2 + 1;
      puVar7 = puVar7 + 0x38;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return;
}



// FUNCTION 1488d3c94 FUN_1488d3c94 body=138 status=ok
// SIG undefined FUN_1488d3c94(void)

longlong FUN_1488d3c94(undefined8 *param_1)

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
    if (DAT_14cb839f0 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = FUN_144837462(DAT_14cb839f0,local_40);
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



// FUNCTION 1488d3d20 FUN_1488d3d20 body=143 status=ok
// SIG undefined FUN_1488d3d20(void)

longlong FUN_1488d3d20(undefined8 *param_1)

{
  longlong lVar1;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined1 local_48 [24];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  lVar1 = param_1[2];
  if (lVar1 == 0) {
    local_50 = *param_1;
    FUN_1446dcdd4(local_48);
    FUN_1447325ac(local_48,&local_50,1);
    lVar1 = thunk_FUN_1488d657e(&local_50);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
    param_1[2] = lVar1;
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d3db0 FUN_1488d3db0 body=27 status=ok
// SIG undefined FUN_1488d3db0(void)

void FUN_1488d3db0(undefined8 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = 0;
    *(undefined4 *)(param_1 + 1) = 0x3f800000;
    param_1 = param_1 + 2;
  }
  return;
}



// FUNCTION 1488d3dcc FUN_1488d3dcc body=136 status=ok
// SIG undefined FUN_1488d3dcc(void)

void FUN_1488d3dcc(longlong param_1,ulonglong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  
  uVar1 = (ulonglong)
          ((((uint)(param_2 >> 1) & 0x7fffffff) - 1) + (uint)((param_2 >> 1 & 0x7fffffff) == 0)) * 2
          + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar3 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar3 = 4;
  }
  if ((uint)param_2 < 4) {
    iVar3 = 4;
  }
  if (*(int *)(param_1 + 0x108) < iVar3 && 0 < (int)(uint)param_2 ||
      iVar3 < *(int *)(param_1 + 0x108)) {
    FUN_1488d15ac(param_1,param_2 & 0xffffffff);
    *(int *)(param_1 + 0x108) = iVar3;
    FUN_1488d3fbe(param_1);
    return;
  }
  FUN_1488d3e54(param_1);
  FUN_1488d15ac(param_1,param_2 & 0xffffffff);
  return;
}



// FUNCTION 1488d3e54 FUN_1488d3e54 body=360 status=ok
// SIG undefined FUN_1488d3e54(void)

void FUN_1488d3e54(longlong param_1)

{
  undefined8 uVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 auStack_98 [32];
  longlong local_78;
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
  lVar5 = param_1 + 0xf0;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    lVar5 = *(longlong *)(param_1 + 0x100);
  }
  iVar6 = *(int *)(param_1 + 0x108);
  iVar3 = iVar6 + 3;
  if (-1 < iVar6) {
    iVar3 = iVar6;
  }
  if (*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec) < iVar3 >> 2) {
    lVar2 = param_1 + 0xd0;
    local_50 = 0x100000000;
    local_40 = 0xffffffff;
    uStack_38 = 0;
    uStack_48 = lVar2;
    if (*(int *)(param_1 + 0xe0) == 0) {
      iVar6 = 0;
    }
    else {
      FUN_144a81a4c(&local_50);
      iVar6 = *(int *)(param_1 + 0xe0);
    }
    uStack_58 = CONCAT44(uStack_34,uStack_38);
    local_70 = (undefined4)local_50;
    uStack_6c = local_50._4_4_;
    uStack_68 = (undefined4)uStack_48;
    uStack_64 = uStack_48._4_4_;
    local_60 = local_40;
    uVar1 = local_60;
    local_60._4_4_ = (int)((ulonglong)local_40 >> 0x20);
    iVar3 = local_60._4_4_;
    local_78 = param_1;
    if ((local_60._4_4_ != iVar6) || (local_60 = uVar1, uStack_48 != lVar2)) {
      do {
        local_60 = uVar1;
        lVar4 = *(longlong *)(local_78 + 0xc0);
        if (*(longlong *)(local_78 + 0xc0) == 0) {
          lVar4 = local_78;
        }
        *(undefined4 *)(lVar5 + (longlong)*(int *)(lVar4 + 0x14 + (longlong)iVar3 * 0x18) * 4) =
             0xffffffff;
        local_60 = CONCAT44(local_60._4_4_,(uint)local_60 & ~uStack_6c);
        FUN_144a81a4c(&local_70);
        iVar3 = local_60._4_4_;
        uVar1 = local_60;
      } while (local_78 != param_1 ||
               (CONCAT44(uStack_64,uStack_68) != lVar2 || local_60._4_4_ != iVar6));
    }
  }
  else if (0 < iVar6) {
    lVar2 = 0;
    do {
      *(undefined4 *)(lVar5 + lVar2 * 4) = 0xffffffff;
      lVar2 = lVar2 + 1;
    } while (lVar2 < *(int *)(param_1 + 0x108));
  }
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d3fbe FUN_1488d3fbe body=524 status=ok
// SIG undefined FUN_1488d3fbe(void)

void FUN_1488d3fbe(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_98 [40];
  longlong local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined8 local_48;
  longlong local_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  if (*(longlong *)(param_1 + 0x100) != 0) {
    FUN_1446efa72(param_1 + 0x100,0,0,4);
  }
  uVar7 = *(uint *)(param_1 + 0x108);
  uVar2 = local_58;
  if (uVar7 != 0) {
    lVar1 = param_1 + 0xf0;
    uVar6 = 0;
    FUN_144a8ab24(lVar1,0,uVar7,4);
    if (0 < (int)uVar7) {
      do {
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar5 = lVar1;
        }
        *(undefined4 *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) + 0x7fffffffU & uVar6) * 4) =
             0xffffffff;
        uVar6 = uVar6 + 1;
      } while (uVar7 != uVar6);
    }
    local_40 = param_1 + 0xd0;
    local_48 = 0x100000000;
    local_38 = 0xffffffff;
    local_30 = 0;
    if (*(int *)(param_1 + 0xe0) != 0) {
      FUN_144a81a4c(&local_48);
    }
    local_68 = local_48;
    local_60 = local_40;
    local_58 = local_38;
    uVar2 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < *(int *)(local_40 + 0x10)) {
      iVar3 = local_58._4_4_;
      local_58 = uVar2;
      do {
        lVar5 = *(longlong *)(local_70 + 0xc0);
        if (*(longlong *)(local_70 + 0xc0) == 0) {
          lVar5 = local_70;
        }
        lVar4 = (longlong)iVar3;
        uVar10 = *(ulonglong *)(lVar5 + lVar4 * 0x18);
        uVar7 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
        uVar7 = (uVar7 >> 0xd ^ uVar7) * -0x3d4d51cb;
        uVar10 = (longlong)(int)(uVar7 >> 0x10 ^ uVar7) & (longlong)*(int *)(param_1 + 0x108) - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar5 + 0x14 + lVar4 * 0x18) = iVar9;
        lVar8 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar8 = lVar1;
        }
        *(undefined4 *)(lVar5 + 0x10 + lVar4 * 0x18) =
             *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar10) * 4);
        lVar5 = *(longlong *)(param_1 + 0x100);
        if (*(longlong *)(param_1 + 0x100) == 0) {
          lVar5 = lVar1;
        }
        *(int *)(lVar5 + ((longlong)iVar9 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) = iVar3;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_144a81a4c(&local_68);
        iVar3 = local_58._4_4_;
        uVar2 = local_58;
      } while (local_58._4_4_ < *(int *)(local_60 + 0x10));
    }
  }
  local_58 = uVar2;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d41cc FUN_1488d41cc body=317 status=ok
// SIG undefined FUN_1488d41cc(void)

undefined4 * FUN_1488d41cc(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  ulonglong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488d430a(param_1,local_48);
  puVar1 = (undefined4 *)param_3[1];
  uVar6 = *(ulonglong *)*param_3;
  *local_40 = uVar6;
  *(undefined4 *)(local_40 + 1) = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar4 = ((uint)(uVar6 >> 0x14) & 0xffff ^ (uint)(uVar6 >> 4)) * -0x7a143595;
  uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
  uVar4 = uVar4 >> 0x10 ^ uVar4;
  cVar3 = FUN_1488d442e(param_1,uVar4,local_40,&local_4c);
  uVar2 = local_4c;
  if (cVar3 == '\0') {
    cVar3 = FUN_1488d455c(param_1,*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec));
    if (cVar3 == '\0') {
      uVar6 = (longlong)(int)uVar4 & (longlong)*(int *)(param_1 + 0x108) - 1U;
      iVar5 = (int)uVar6;
      *(int *)((longlong)local_40 + 0x14) = iVar5;
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1 + 0xf0;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x108) - 1U & uVar6) * 4);
      lVar7 = *(longlong *)(param_1 + 0x100);
      if (*(longlong *)(param_1 + 0x100) == 0) {
        lVar7 = param_1 + 0xf0;
      }
      *(undefined4 *)(lVar7 + ((longlong)iVar5 & (longlong)*(int *)(param_1 + 0x108) - 1U) * 4) =
           uVar2;
    }
  }
  *param_2 = uVar2;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d430a FUN_1488d430a body=291 status=ok
// SIG undefined FUN_1488d430a(void)

int * FUN_1488d430a(longlong param_1,int *param_2)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  
  if (*(int *)(param_1 + 0xec) == 0) {
    iVar6 = *(int *)(param_1 + 200);
    *(int *)(param_1 + 200) = iVar6 + 1;
    if (*(int *)(param_1 + 0xcc) == iVar6) {
      FUN_147f53d46(param_1,iVar6);
    }
    lVar7 = (longlong)iVar6;
    iVar4 = FUN_14489e6aa(param_1 + 0xd0,1);
    lVar5 = *(longlong *)(param_1 + 0xd8);
    if (*(longlong *)(param_1 + 0xd8) == 0) {
      lVar5 = param_1 + 0xd0;
    }
    iVar3 = iVar4 + 0x1f;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    bVar2 = (byte)iVar4 & 0x1f;
    puVar1 = (uint *)(lVar5 + (longlong)(iVar3 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar2 | 0xfffffffeU >> 0x20 - bVar2);
  }
  else {
    lVar5 = *(longlong *)(param_1 + 0xc0);
    if (*(longlong *)(param_1 + 0xc0) == 0) {
      lVar5 = param_1;
    }
    iVar6 = *(int *)(param_1 + 0xe8);
    lVar7 = (longlong)iVar6;
    iVar4 = *(int *)(lVar5 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 0xe8) = iVar4;
    iVar3 = *(int *)(param_1 + 0xec) + -1;
    *(int *)(param_1 + 0xec) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(lVar5 + (longlong)iVar4 * 0x18) = 0xffffffff;
    }
  }
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar4 = iVar6 + 0x1f;
  if (-1 < iVar6) {
    iVar4 = iVar6;
  }
  puVar1 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar6 & 0x1f);
  *param_2 = iVar6;
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  *(longlong *)(param_2 + 2) = lVar5 + lVar7 * 0x18;
  return param_2;
}



// FUNCTION 1488d442e FUN_1488d442e body=154 status=ok
// SIG undefined FUN_1488d442e(void)

undefined8 FUN_1488d442e(longlong param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  
  if ((*(int *)(param_1 + 200) - *(int *)(param_1 + 0xec) != 1) &&
     (*(int *)(param_1 + 200) != *(int *)(param_1 + 0xec))) {
    lVar5 = param_1 + 0xf0;
    if (*(longlong *)(param_1 + 0x100) != 0) {
      lVar5 = *(longlong *)(param_1 + 0x100);
    }
    iVar6 = *(int *)(lVar5 + (ulonglong)(*(int *)(param_1 + 0x108) - 1U & param_2) * 4);
    if (iVar6 != -1) {
      lVar5 = *(longlong *)(param_1 + 0xc0);
      if (*(longlong *)(param_1 + 0xc0) == 0) {
        lVar5 = param_1;
      }
      do {
        plVar1 = (longlong *)(lVar5 + (longlong)iVar6 * 0x18);
        if (*plVar1 == *param_3) {
          lVar5 = *param_3;
          uVar2 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar3 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar1 = (int)lVar5;
          *(undefined4 *)((longlong)plVar1 + 4) = uVar2;
          *(int *)(plVar1 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar1 + 0xc) = uVar3;
          FUN_1488d44c8((int)lVar5,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar1[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488d44c8 FUN_1488d44c8 body=148 status=ok
// SIG undefined FUN_1488d44c8(void)

void FUN_1488d44c8(longlong param_1,int param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  byte bVar3;
  int iVar4;
  longlong lVar5;
  undefined4 uVar6;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  if (*(longlong *)(param_1 + 0xc0) == 0) {
    lVar5 = param_1;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    *(int *)(lVar5 + (longlong)*(int *)(param_1 + 0xe8) * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar5 + (longlong)param_2 * 0x18);
  *puVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xec) < 1) {
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = *(undefined4 *)(param_1 + 0xe8);
  }
  puVar1[1] = uVar6;
  *(int *)(param_1 + 0xe8) = param_2;
  *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + 1;
  lVar5 = param_1 + 0xd0;
  if (*(longlong *)(param_1 + 0xd8) != 0) {
    lVar5 = *(longlong *)(param_1 + 0xd8);
  }
  iVar4 = param_2 + 0x1f;
  if (-1 < param_2) {
    iVar4 = param_2;
  }
  bVar3 = (byte)param_2 & 0x1f;
  puVar2 = (uint *)(lVar5 + (longlong)(iVar4 >> 5) * 4);
  *puVar2 = *puVar2 & (-2 << bVar3 | 0xfffffffeU >> 0x20 - bVar3);
  return;
}



// FUNCTION 1488d455c FUN_1488d455c body=99 status=ok
// SIG undefined FUN_1488d455c(void)

undefined8 FUN_1488d455c(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = (ulonglong)(((param_2 >> 1) - 1) + (uint)(param_2 >> 1 == 0)) * 2 + 1;
  lVar2 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
    }
  }
  iVar4 = 1 << ((byte)lVar2 & 0x1f);
  if ((uint)lVar2 < 2) {
    iVar4 = 4;
  }
  if (param_2 < 4) {
    iVar4 = 4;
  }
  if (((int)param_2 < 1) || (iVar4 <= *(int *)(param_1 + 0x108))) {
    uVar3 = 0;
  }
  else {
    *(int *)(param_1 + 0x108) = iVar4;
    FUN_1488d3fbe(param_1);
    uVar3 = 1;
  }
  return uVar3;
}



// FUNCTION 1488d45c0 FUN_1488d45c0 body=68 status=ok
// SIG undefined FUN_1488d45c0(void)

void FUN_1488d45c0(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1488d4604();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1488d4604 FUN_1488d4604 body=322 status=ok
// SIG undefined FUN_1488d4604(void)

void FUN_1488d4604(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1488d4748 FUN_1488d4748 body=411 status=ok
// SIG undefined FUN_1488d4748(void)

void FUN_1488d4748(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 1488d48e4 FUN_1488d48e4 body=473 status=ok
// SIG undefined FUN_1488d48e4(void)

void FUN_1488d48e4(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d4abe FUN_1488d4abe body=335 status=ok
// SIG undefined FUN_1488d4abe(void)

undefined4 * FUN_1488d4abe(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488d4c0e(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1488d4cf4(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1488d48e4(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d4c0e FUN_1488d4c0e body=230 status=ok
// SIG undefined FUN_1488d4c0e(void)

int * FUN_1488d4c0e(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1488d4cf4 FUN_1488d4cf4 body=128 status=ok
// SIG undefined FUN_1488d4cf4(void)

undefined8 FUN_1488d4cf4(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1488d4d74((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488d4d74 FUN_1488d4d74 body=114 status=ok
// SIG undefined FUN_1488d4d74(void)

void FUN_1488d4d74(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1488d4de6 FUN_1488d4de6 body=68 status=ok
// SIG undefined FUN_1488d4de6(void)

void FUN_1488d4de6(longlong param_1)

{
  if (*(int *)(param_1 + 8) != *(int *)(param_1 + 0x34)) {
    FUN_1488d4e2a();
    *(undefined4 *)(param_1 + 8) = 0;
    if (*(int *)(param_1 + 0xc) < 0) {
      FUN_144727cd0(param_1,0);
    }
    *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



// FUNCTION 1488d4e2a FUN_1488d4e2a body=322 status=ok
// SIG undefined FUN_1488d4e2a(void)

void FUN_1488d4e2a(longlong *param_1)

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
         ((longlong)plVar5 + (longlong)*(int *)(*local_78 + 0x14 + (longlong)iVar4 * 0x18) * 4) =
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



// FUNCTION 1488d4f6e FUN_1488d4f6e body=411 status=ok
// SIG undefined FUN_1488d4f6e(void)

void FUN_1488d4f6e(longlong *param_1,uint param_2)

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
      FUN_144727cd0(param_1);
      iVar11 = (int)param_1[1];
      iVar10 = *(int *)((longlong)param_1 + 0xc);
    }
    *(uint *)(param_1 + 1) = iVar11 + uVar7;
    if ((uint)(iVar10 - iVar11) < uVar7) {
      FUN_14482b872(param_1);
    }
    if (iVar11 < (int)param_2) {
      lVar2 = *param_1;
      uVar9 = (ulonglong)param_2;
      iVar10 = *(int *)((longlong)param_1 + 0x34);
      puVar5 = (undefined4 *)(lVar2 + uVar9 * 0x18 + -0x14);
      do {
        iVar8 = (int)uVar9;
        if (iVar10 != 0) {
          *(int *)(lVar2 + (longlong)(int)param_1[6] * 0x18) = iVar8 + -1;
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
        puVar5 = puVar5 + -6;
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



// FUNCTION 1488d510a FUN_1488d510a body=473 status=ok
// SIG undefined FUN_1488d510a(void)

void FUN_1488d510a(longlong *param_1)

{
  longlong *plVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
  longlong *plVar7;
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
  uVar2 = *(uint *)(param_1 + 9);
  uVar4 = local_58;
  if (uVar2 != 0) {
    plVar1 = param_1 + 7;
    uVar8 = 0;
    FUN_144a1cbf0(plVar1,0,uVar2,4);
    if (0 < (int)uVar2) {
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar8) * 4) =
             0xffffffff;
        uVar8 = uVar8 + 1;
      } while (uVar2 != uVar8);
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
    uVar4 = local_58;
    local_50 = local_30;
    local_4c = local_2c;
    local_58._4_4_ = (int)((ulonglong)local_38 >> 0x20);
    local_70 = param_1;
    if (local_58._4_4_ < (int)local_40[3]) {
      iVar5 = local_58._4_4_;
      local_58 = uVar4;
      do {
        lVar3 = *local_70;
        lVar6 = (longlong)iVar5;
        uVar4 = *(undefined8 *)(lVar3 + lVar6 * 0x18);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x10);
        uVar8 = (uint)uVar4 & 0xffff;
        uVar10 = (longlong)
                 (int)(((uint)uVar4 << 0x10 | uVar8) + (int)((ulonglong)uVar4 >> 0x20) +
                       (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar8 >> 4)) &
                 (longlong)(int)param_1[9] - 1U;
        iVar9 = (int)uVar10;
        *(int *)(lVar3 + 0x14 + lVar6 * 0x18) = iVar9;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar3 + 0x10 + lVar6 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar10) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar9 & (longlong)(int)param_1[9] - 1U) * 4) = iVar5;
        local_58 = CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
        FUN_1449c0562(&local_68);
        iVar5 = local_58._4_4_;
        uVar4 = local_58;
      } while (local_58._4_4_ < (int)local_60[3]);
    }
  }
  local_58 = uVar4;
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1488d52e4 FUN_1488d52e4 body=335 status=ok
// SIG undefined FUN_1488d52e4(void)

undefined4 * FUN_1488d52e4(longlong param_1,undefined4 *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  char cVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  undefined1 auStack_78 [44];
  undefined4 local_4c;
  undefined4 local_48 [2];
  undefined8 *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  FUN_1488d5434(param_1,local_48);
  puVar1 = (undefined8 *)param_3[1];
  uVar2 = *(undefined8 *)*param_3;
  *local_40 = uVar2;
  local_40[1] = *puVar1;
  *(undefined4 *)(local_40 + 2) = 0xffffffff;
  local_4c = local_48[0];
  uVar9 = (uint)((ulonglong)uVar2 >> 0x10);
  uVar5 = (uint)uVar2 & 0xffff;
  uVar9 = ((uint)uVar2 << 0x10 | uVar5) + (int)((ulonglong)uVar2 >> 0x20) +
          (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar5 >> 4);
  cVar4 = FUN_1488d551a(param_1,uVar9,local_40,&local_4c);
  uVar3 = local_4c;
  if (cVar4 == '\0') {
    uVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    iVar7 = 1;
    if (3 < uVar5) {
      uVar6 = (ulonglong)(uVar5 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar6 != 0) {
        for (; uVar6 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar7 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar5 < 1) || (iVar7 <= *(int *)(param_1 + 0x48))) {
      uVar9 = *(int *)(param_1 + 0x48) - 1U & uVar9;
      *(uint *)((longlong)local_40 + 0x14) = uVar9;
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(local_40 + 2) =
           *(undefined4 *)
            (lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4);
      lVar8 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar8 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar8 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar9) * 4)
           = local_4c;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar7;
      FUN_1488d510a(param_1);
    }
  }
  *param_2 = uVar3;
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d5434 FUN_1488d5434 body=230 status=ok
// SIG undefined FUN_1488d5434(void)

int * FUN_1488d5434(longlong *param_1,int *param_2)

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
      FUN_14482b872(param_1,iVar6);
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
    iVar4 = *(int *)(*param_1 + 4 + lVar7 * 0x18);
    *(int *)(param_1 + 6) = iVar4;
    iVar3 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar4 * 0x18) = 0xffffffff;
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
  *(longlong *)(param_2 + 2) = lVar7 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 1488d551a FUN_1488d551a body=128 status=ok
// SIG undefined FUN_1488d551a(void)

undefined8 FUN_1488d551a(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    iVar6 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar6 != -1) {
      do {
        plVar5 = (longlong *)(*param_1 + (longlong)iVar6 * 0x18);
        if (*plVar5 == *param_3) {
          lVar3 = *param_3;
          uVar1 = *(undefined4 *)((longlong)param_3 + 4);
          lVar4 = param_3[1];
          uVar2 = *(undefined4 *)((longlong)param_3 + 0xc);
          *(int *)plVar5 = (int)lVar3;
          *(undefined4 *)((longlong)plVar5 + 4) = uVar1;
          *(int *)(plVar5 + 1) = (int)lVar4;
          *(undefined4 *)((longlong)plVar5 + 0xc) = uVar2;
          FUN_1488d559a((int)lVar3,*param_4);
          *param_4 = iVar6;
          return 1;
        }
        iVar6 = (int)plVar5[2];
      } while (iVar6 != -1);
    }
  }
  return 0;
}



// FUNCTION 1488d559a FUN_1488d559a body=114 status=ok
// SIG undefined FUN_1488d559a(void)

void FUN_1488d559a(longlong *param_1,int param_2)

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
    *(int *)(lVar3 + (longlong)(int)param_1[6] * 0x18) = param_2;
  }
  puVar1 = (undefined4 *)(lVar3 + (longlong)param_2 * 0x18);
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



// FUNCTION 1488d560c FUN_1488d560c body=83 status=ok
// SIG undefined FUN_1488d560c(void)

longlong * FUN_1488d560c(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar3 = FUN_146527198();
    cVar2 = FUN_1448093f4(lVar1,uVar3);
    if (cVar2 != '\0') {
      *param_2 = *param_1;
      lVar1 = param_1[1];
      param_2[1] = lVar1;
      if (lVar1 == 0) {
        return param_2;
      }
      LOCK();
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
      UNLOCK();
      return param_2;
    }
  }
  *param_2 = 0;
  param_2[1] = 0;
  return param_2;
}



// FUNCTION 1488d5660 FUN_1488d5660 body=100 status=ok
// SIG undefined FUN_1488d5660(void)

undefined8 FUN_1488d5660(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  longlong *plVar3;
  
  if ((DAT_14cb84b50 != (longlong *)0x0 && DAT_14cb84b58 != 0) &&
     (cVar1 = (**(code **)(*DAT_14cb84b50 + 0x30))(), cVar1 != '\0')) {
    plVar3 = DAT_14cb84b50;
    if (DAT_14cb84b58 == 0) {
      plVar3 = (longlong *)0x0;
    }
                    /* WARNING: Could not recover jumptable at 0x0001488d56c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_1,param_2);
    return uVar2;
  }
  return 0;
}



// FUNCTION 1488d56c4 FUN_1488d56c4 body=312 status=ok
// SIG undefined FUN_1488d56c4(void)

void FUN_1488d56c4(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 *param_7,undefined4 param_8)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auStack_178 [32];
  undefined8 *local_158;
  undefined8 local_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined8 local_130;
  undefined4 local_128;
  undefined8 local_120;
  undefined8 local_118 [13];
  undefined **local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    local_b0 = &PTR_FUN_14b023b08;
    local_a8 = 0;
    local_a0 = 0;
    local_98 = 0;
    local_90 = 0;
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_68 = 0x3b9cbb9e;
    local_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    FUN_1457e05f4();
    local_148 = local_118;
    puVar2 = local_148;
    for (lVar1 = 0xc; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar2 = *param_7;
      param_7 = param_7 + 1;
      puVar2 = puVar2 + 1;
    }
    local_130 = *param_5;
    local_158 = &local_130;
    local_128 = *(undefined4 *)(param_5 + 1);
    local_120 = 0;
    local_140 = param_8;
    local_150 = param_6;
    FUN_143db2996(param_1,&local_b0,param_3,param_4);
    FUN_140485912(&local_b0);
  }
  if ((local_48 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d57fe FUN_1488d57fe body=209 status=ok
// SIG undefined FUN_1488d57fe(void)

void FUN_1488d57fe(undefined8 param_1,longlong *param_2,undefined4 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined **local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  if ((*param_2 != 0) && ((int)param_2[1] - 1U < 0xfffffffe)) {
    local_90 = &PTR_FUN_14b023b08;
    local_88 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0x3b9cbb9e;
    local_40 = 0;
    uStack_38 = 0;
    local_30 = 0;
    FUN_1457e05f4();
    local_98 = param_5;
    FUN_143db32ee(param_1,&local_90,param_3,param_4);
    FUN_140485912(&local_90);
  }
  if ((local_28 ^ (ulonglong)auStack_b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d58d0 FUN_1488d58d0 body=73 status=ok
// SIG undefined FUN_1488d58d0(void)

longlong * FUN_1488d58d0(longlong *param_1,longlong *param_2)

{
  if ((*param_1 != *param_2) || ((int)param_1[1] != (int)param_2[1])) {
    *param_1 = *param_2;
    *(int *)(param_1 + 1) = (int)param_2[1];
    param_1[2] = 0;
  }
  *(short *)(param_1 + 3) = (short)param_2[3];
  FUN_14029d0b6(param_1 + 4,param_2 + 4);
  return param_1;
}



// FUNCTION 1488d591a FUN_1488d591a body=351 status=ok
// SIG undefined FUN_1488d591a(void)

longlong FUN_1488d591a(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  uint uVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  
  lVar5 = *(longlong *)(param_1 + 0x1c);
  if ((lVar5 != 0) && (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74))) {
    uVar2 = (uint)((ulonglong)lVar5 >> 0x10);
    uVar7 = (uint)lVar5 & 0xffff;
    lVar6 = param_1 + 0x78;
    if (*(longlong *)(param_1 + 0x80) != 0) {
      lVar6 = *(longlong *)(param_1 + 0x80);
    }
    iVar8 = *(int *)(lVar6 + (ulonglong)
                             (*(int *)(param_1 + 0x88) - 1U &
                             (int)((ulonglong)lVar5 >> 0x20) + ((uint)lVar5 << 0x10 | uVar7) +
                             (uVar2 << 0x13 | uVar2 & 0xffff) + (uVar7 >> 4)) * 4);
    if (iVar8 != -1) {
      do {
        plVar1 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar8 * 0x18);
        if (*plVar1 == lVar5) {
          if ((plVar1 + 1 != (longlong *)0x0 && plVar1 != (longlong *)0x0) &&
             (lVar5 = plVar1[1], lVar5 != 0)) {
            return lVar5;
          }
          break;
        }
        iVar8 = (int)plVar1[2];
      } while (iVar8 != -1);
    }
  }
  lVar5 = *(longlong *)(param_1 + 0x30);
  if (lVar5 == 0) {
    uVar4 = FUN_1414d8654();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x30) = lVar5;
  }
  lVar6 = *(longlong *)(param_1 + 0x38);
  if (*(longlong *)(param_1 + 0x38) == 0) {
    if ((lVar5 != 0) && (*(longlong *)(param_1 + 0x28) != 0)) {
      plVar1 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x28));
        *(longlong *)(param_1 + 0x38) = lVar5;
        if (lVar5 != 0) {
          return lVar5;
        }
      }
    }
    lVar6 = 0;
    if (*(char *)(param_1 + 0x24) != '\0') {
      lVar6 = param_2;
    }
  }
  return lVar6;
}



// FUNCTION 1488d5a7a FUN_1488d5a7a body=219 status=ok
// SIG undefined FUN_1488d5a7a(void)

void FUN_1488d5a7a(longlong param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  longlong *plVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  
  if ((longlong)(int)param_2[1] != 0) {
    plVar5 = (longlong *)*param_2;
    plVar1 = plVar5 + (int)param_2[1];
    do {
      if (*(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74)) {
        lVar3 = *plVar5;
        uVar4 = (uint)((ulonglong)lVar3 >> 0x10);
        uVar6 = (uint)lVar3 & 0xffff;
        lVar8 = *(longlong *)(param_1 + 0x80);
        if (*(longlong *)(param_1 + 0x80) == 0) {
          lVar8 = param_1 + 0x78;
        }
        iVar7 = *(int *)(lVar8 + (ulonglong)
                                 (*(int *)(param_1 + 0x88) - 1U &
                                 (int)((ulonglong)lVar3 >> 0x20) + ((uint)lVar3 << 0x10 | uVar6) +
                                 (uVar4 << 0x13 | uVar4 & 0xffff) + (uVar6 >> 4)) * 4);
        if (iVar7 != -1) {
          do {
            plVar2 = (longlong *)(*(longlong *)(param_1 + 0x40) + (longlong)iVar7 * 0x18);
            if (*plVar2 == lVar3) {
              if ((plVar2 + 1 != (longlong *)0x0 && plVar2 != (longlong *)0x0) && (plVar2[1] != 0))
              {
                return;
              }
              break;
            }
            iVar7 = (int)plVar2[2];
          } while (iVar7 != -1);
        }
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
  }
  FUN_1488d591a(param_1,param_3);
  return;
}



// FUNCTION 1488d5b56 FUN_1488d5b56 body=155 status=ok
// SIG undefined FUN_1488d5b56(void)

undefined8 FUN_1488d5b56(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uVar1 = FUN_140dddafc(param_2);
    local_48[0] = DAT_14cb84418;
    FUN_1401533ba(local_54,local_48,1);
    FUN_1448075d0(local_48,local_54);
    FUN_14045886c(uVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d5bf2 FUN_1488d5bf2 body=155 status=ok
// SIG undefined FUN_1488d5bf2(void)

undefined8 FUN_1488d5bf2(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_78 [36];
  undefined1 local_54 [12];
  undefined8 local_48 [3];
  longlong local_30;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (((byte *)*param_2 != (byte *)0x0) && ((~*(byte *)*param_2 & 3) == 0)) {
    uVar1 = FUN_140dddafc(param_2);
    local_48[0] = DAT_14cb843f8;
    FUN_1401533ba(local_54,local_48,1);
    FUN_1448075d0(local_48,local_54);
    FUN_14045886c(uVar1,local_48);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d5c8e FUN_1488d5c8e body=62 status=ok
// SIG undefined FUN_1488d5c8e(void)

undefined8 * FUN_1488d5c8e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_1414bc928(&DAT_14cb84488);
  FUN_1470e6fca(puVar1);
  *puVar1 = &PTR_FUN_14b412ec0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return puVar1;
}



// FUNCTION 1488d5ccc FUN_1488d5ccc body=47 status=ok
// SIG undefined FUN_1488d5ccc(void)

undefined8 * FUN_1488d5ccc(undefined8 *param_1)

{
  FUN_1470e6fca();
  *param_1 = &PTR_FUN_14b412ec0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



// FUNCTION 1488d5cfc FUN_1488d5cfc body=44 status=ok
// SIG undefined FUN_1488d5cfc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d5cfc(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb84494 = _DAT_14cb84494 + -1;
  *param_1 = DAT_14cb84488;
  DAT_14cb84488 = param_1;
  return;
}



// FUNCTION 1488d5d28 FUN_1488d5d28 body=54 status=ok
// SIG undefined FUN_1488d5d28(void)

void FUN_1488d5d28(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1470e6fca(param_1);
  *param_1 = &PTR_FUN_14b412ec0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



// FUNCTION 1488d5d5e FUN_1488d5d5e body=101 status=ok
// SIG undefined FUN_1488d5d5e(void)

undefined8 * FUN_1488d5d5e(void)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_147f5e4ae(&DAT_14cb84580);
  FUN_1470e70b8(puVar1);
  *puVar1 = &PTR_FUN_14b33eb20;
  puVar1[0xc] = 0;
  *(undefined4 *)(puVar1 + 0xd) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined8 *)((longlong)puVar1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)puVar1 + 0x74) = 0;
  puVar1[0x10] = 0;
  *(undefined4 *)(puVar1 + 0x11) = 0;
  return puVar1;
}



// FUNCTION 1488d5dc4 FUN_1488d5dc4 body=86 status=ok
// SIG undefined FUN_1488d5dc4(void)

undefined8 * FUN_1488d5dc4(undefined8 *param_1)

{
  FUN_1470e70b8();
  *param_1 = &PTR_FUN_14b33eb20;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return param_1;
}



// FUNCTION 1488d5e1a FUN_1488d5e1a body=44 status=ok
// SIG undefined FUN_1488d5e1a(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1488d5e1a(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  _DAT_14cb8458c = _DAT_14cb8458c + -1;
  *param_1 = DAT_14cb84580;
  DAT_14cb84580 = param_1;
  return;
}



// FUNCTION 1488d5e46 FUN_1488d5e46 body=95 status=ok
// SIG undefined FUN_1488d5e46(void)

void FUN_1488d5e46(undefined8 *param_1)

{
  (**(code **)*param_1)(param_1,0);
  FUN_1470e70b8(param_1);
  *param_1 = &PTR_FUN_14b33eb20;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined8 *)((longlong)param_1 + 0x6c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0;
  param_1[0x10] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return;
}



// FUNCTION 1488d5eac FUN_1488d5eac body=399 status=ok
// SIG undefined FUN_1488d5eac(void)

undefined4 FUN_1488d5eac(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  longlong lVar10;
  undefined1 auStack_98 [32];
  longlong *local_78;
  undefined1 local_70 [8];
  longlong local_68;
  undefined1 *local_60;
  longlong *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_1488dba3c(param_1 + 0x40,(int)param_2[1]);
  lVar5 = param_2[1];
  if ((longlong)(int)lVar5 != 0) {
    lVar2 = *param_2;
    lVar10 = 0;
    do {
      plVar3 = *(longlong **)(lVar2 + lVar10);
      if (plVar3 != (longlong *)0x0) {
        lVar7 = (**(code **)(*plVar3 + 8))(plVar3);
        lVar8 = FUN_14652c078();
        if (((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar7 + 0x38))) &&
           (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30)) {
          lVar7 = plVar3[6];
          if (lVar7 == 0) {
            uVar9 = FUN_1414d8654();
            lVar7 = FUN_14477b664(uVar9);
            plVar3[6] = lVar7;
          }
          lVar8 = plVar3[7];
          if (lVar8 == 0) {
            if (lVar7 == 0) {
              lVar8 = 0;
            }
            else {
              plVar1 = plVar3 + 5;
              lVar8 = 0;
              if (*plVar1 != 0) {
                plVar4 = *(longlong **)(lVar7 + 0xb8);
                local_78 = plVar1;
                if ((plVar4 == (longlong *)0x0) ||
                   (cVar6 = (**(code **)(*plVar4 + 0x108))(), cVar6 == '\0')) {
                  lVar8 = 0;
                }
                else {
                  uVar9 = (**(code **)(*plVar4 + 0x110))(plVar4);
                  lVar8 = FUN_144aff482(uVar9,local_78);
                }
                plVar3[7] = lVar8;
              }
            }
          }
          local_68 = lVar8;
          FUN_1470e7168(plVar3,local_70);
          local_58 = &local_68;
          local_60 = local_70;
          FUN_1488dbdc8(param_1 + 0x40,local_4c,&local_60);
        }
      }
      lVar10 = lVar10 + 8;
    } while ((longlong)(int)lVar5 * 8 != lVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x48) >> 8),
                  *(int *)(param_1 + 0x48) != *(int *)(param_1 + 0x74));
}



// FUNCTION 1488d603e FUN_1488d603e body=78 status=ok
// SIG undefined FUN_1488d603e(void)

bool FUN_1488d603e(longlong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 auStack_38 [40];
  undefined8 local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_10 = param_2;
  iVar1 = FUN_1406fc600(param_1 + 0x30,(uint)param_2 ^ (uint)((ulonglong)param_2 >> 0x20));
  if ((local_8 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return iVar1 != -1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d61be FUN_1488d61be body=1 status=ok
// SIG undefined FUN_1488d61be(void)

void FUN_1488d61be(void)

{
  return;
}



// FUNCTION 1488d61c0 FUN_1488d61c0 body=1 status=ok
// SIG undefined FUN_1488d61c0(void)

void FUN_1488d61c0(void)

{
  return;
}



// FUNCTION 1488d61c2 FUN_1488d61c2 body=1 status=ok
// SIG undefined FUN_1488d61c2(void)

void FUN_1488d61c2(void)

{
  return;
}



// FUNCTION 1488d61c4 FUN_1488d61c4 body=3 status=ok
// SIG undefined FUN_1488d61c4(void)

undefined8 FUN_1488d61c4(void)

{
  return 0;
}



// FUNCTION 1488d61c8 FUN_1488d61c8 body=10 status=ok
// SIG undefined FUN_1488d61c8(void)

undefined8 * FUN_1488d61c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1488d61d2 FUN_1488d61d2 body=10 status=ok
// SIG undefined FUN_1488d61d2(void)

undefined8 * FUN_1488d61d2(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1488d61dc FUN_1488d61dc body=3 status=ok
// SIG undefined FUN_1488d61dc(void)

undefined8 FUN_1488d61dc(void)

{
  return 0;
}



// FUNCTION 1488d61e0 FUN_1488d61e0 body=10 status=ok
// SIG undefined FUN_1488d61e0(void)

undefined8 * FUN_1488d61e0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}



// FUNCTION 1488d61ea FUN_1488d61ea body=915 status=ok
// SIG undefined FUN_1488d61ea(void)

longlong * FUN_1488d61ea(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined1 auStack_a8 [32];
  ulonglong local_88;
  int local_80;
  undefined8 local_78;
  int local_70 [4];
  ulonglong *local_60;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48 [2];
  ulonglong *local_38;
  int local_2c;
  ulonglong local_28;
  
  plVar11 = DAT_14cb848c0;
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb848c0 != (longlong *)0x0) {
    cVar2 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar2 == '\0') {
      FUN_1446dcdd4(&local_50,param_1);
      lVar5 = FUN_1400e3c00(plVar11,&local_50,1);
      if (local_38 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
      if (lVar5 != 0) {
        FUN_1446dcdd4(&local_50,param_2);
        lVar5 = FUN_14013f0dc(plVar11,lVar5,&local_50,1);
        if (local_38 != (ulonglong *)0x0) {
          FUN_1400020a8();
        }
        if (lVar5 != 0) {
          bVar1 = *(byte *)(lVar5 + 0x2a);
          if ((((-1 < (char)bVar1) && ((int)(char)bVar1 < (int)plVar11[0x78])) &&
              (*(longlong *)(plVar11[0x77] + (ulonglong)bVar1 * 8) != DAT_14cb84658)) &&
             (plVar11 = *(longlong **)(lVar5 + 0x30), plVar11 != (longlong *)0x0)) {
            lVar5 = (**(code **)(*plVar11 + 8))(plVar11);
            lVar7 = FUN_140a90a2c();
            if ((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38))) {
              plVar10 = (longlong *)0x0;
              if (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                  == lVar7 + 0x30) {
                plVar10 = plVar11;
              }
              goto LAB_1488d64ad;
            }
          }
        }
      }
    }
    else {
      FUN_1446dcdd4(&local_50,param_1);
      if (((local_50 == 0) || (local_4c == 0)) || ((local_50 == DAT_14c948000 || (local_4c < 1)))) {
        local_70[0] = DAT_14c948620;
        local_78 = DAT_14c948618;
      }
      else {
        puVar8 = local_48;
        if (0 < local_2c) {
          puVar8 = local_38;
        }
        if (local_4c != 1) {
          puVar8 = local_38;
        }
        local_78 = *puVar8;
        local_70[0] = (int)puVar8[1];
      }
      uVar9 = local_78 & 0xffffffff;
      if (local_70[0] != 0) {
        uVar3 = FUN_144a78877(uVar9,local_70[0]);
        uVar9 = (ulonglong)uVar3;
      }
      iVar4 = FUN_1448467de(plVar11 + 0x3f,uVar9,&local_78);
      if (iVar4 != -1) {
        lVar5 = plVar11[0x3f];
        if ((lVar5 + (longlong)iVar4 * 0x70 + 0x10U & 0xffffffffffffffef) != 0) {
          FUN_1446dcdd4(&local_78,param_2);
          if ((((int)local_78 == 0) || (local_78._4_4_ == 0)) || ((int)local_78 == DAT_14c948000)) {
LAB_1488d655e:
            local_80 = DAT_14c948620;
            local_88 = DAT_14c948618;
          }
          else {
            puVar8 = local_60;
            if ((local_78._4_4_ < 2) && (local_54 < 1)) {
              puVar8 = (ulonglong *)local_70;
            }
            if (local_78._4_4_ < 1) goto LAB_1488d655e;
            local_80 = (int)puVar8[1];
            local_88 = *puVar8;
          }
          plVar10 = (longlong *)(lVar5 + (longlong)iVar4 * 0x70 + 0x18);
          uVar9 = local_88 & 0xffffffff;
          if (local_80 != 0) {
            uVar3 = FUN_144a78877(uVar9,local_80);
            uVar9 = (ulonglong)uVar3;
          }
          iVar4 = FUN_144a840a2(plVar10,uVar9,&local_88);
          if ((iVar4 == -1) ||
             (lVar5 = (longlong)iVar4 * 0x20 + *plVar10, puVar6 = (undefined8 *)(lVar5 + 0x10),
             puVar6 == (undefined8 *)0x0 || lVar5 == 0)) {
            plVar11 = (longlong *)&DAT_00000001;
          }
          else {
            plVar10 = (longlong *)*puVar6;
            if (plVar10 != (longlong *)0x0) {
              lVar5 = (**(code **)(*plVar10 + 8))(plVar10);
              lVar7 = FUN_140a90a2c();
              if ((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar5 + 0x38))) {
                plVar11 = (longlong *)0x0;
                if (*(longlong *)
                     (*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8) !=
                    lVar7 + 0x30) {
                  plVar10 = plVar11;
                }
                goto LAB_1488d648a;
              }
            }
            plVar11 = (longlong *)0x0;
            plVar10 = (longlong *)0x0;
          }
LAB_1488d648a:
          if (local_60 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          if (local_38 != (ulonglong *)0x0) {
            FUN_1400020a8();
          }
          if ((char)plVar11 == '\0') goto LAB_1488d64ad;
          goto LAB_1488d64ab;
        }
      }
      if (local_38 != (ulonglong *)0x0) {
        FUN_1400020a8();
      }
    }
  }
LAB_1488d64ab:
  plVar10 = (longlong *)0x0;
LAB_1488d64ad:
  if ((local_28 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar10;
}



// FUNCTION 1488d657e FUN_1488d657e body=249 status=ok
// SIG undefined FUN_1488d657e(void)

undefined8 FUN_1488d657e(void)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined1 local_40 [8];
  longlong local_38 [2];
  undefined8 *local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FUN_1400021e4(0,local_38);
  FUN_1403de9f2(local_38,&local_28,&DAT_149e0635c,1);
  if (local_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)uStack_20 == 2) {
    puVar3 = &DAT_149dfb77a;
    puVar2 = &DAT_149dfb77a;
    if (*(int *)(local_28 + 3) != 0) {
      puVar2 = (undefined2 *)local_28[2];
    }
    FUN_1446f470e(local_38,puVar2,1);
    if (*(int *)(local_28 + 1) != 0) {
      puVar3 = (undefined2 *)*local_28;
    }
    FUN_1446f470e(local_40,puVar3,1);
    uVar1 = FUN_1488d61ea(local_40,local_38);
  }
  else {
    uVar1 = 0;
  }
  FUN_1447a1747(local_28,(int)uStack_20);
  if (local_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d6678 FUN_1488d6678 body=140 status=ok
// SIG undefined FUN_1488d6678(void)

undefined8 FUN_1488d6678(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_88;
  local_50 = *param_1;
  local_48 = *param_2;
  FUN_144a63cba(local_40);
  local_60 = &local_50;
  local_58 = local_40;
  FUN_14581cf4c(local_40,&local_60,0);
  uVar1 = FUN_14005f05e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d6706 FUN_1488d6706 body=1053 status=ok
// SIG undefined FUN_1488d6706(void)

longlong * FUN_1488d6706(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  longlong *local_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong local_90;
  undefined8 *puStack_88;
  ulonglong local_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  undefined8 local_68;
  longlong local_60;
  undefined8 local_58;
  undefined4 local_50;
  int local_4c;
  ulonglong local_48;
  
  plVar2 = DAT_14cb848c0;
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb848c0 != (longlong *)0x0) {
    cVar4 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar4 == '\0') {
      FUN_1446dcdd4(&local_70,param_1);
      lVar13 = FUN_1400e3c00(plVar2,&local_70,1);
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = 0;
      if (lVar13 != 0) {
        plVar1 = (longlong *)(lVar13 + 0x70);
        lVar9 = lVar13 + 0x80;
        local_b8 = (longlong *)&DAT_100000000;
        puStack_a8 = (undefined8 *)&DAT_ffffffff;
        local_a0 = local_a0 & 0xffffffff00000000;
        local_b0 = lVar9;
        if (*(int *)(lVar13 + 0x98) != 0) {
          FUN_1449c0562(&local_b8);
          iVar6 = *(int *)(lVar13 + 0x98);
        }
        local_68 = local_b8;
        local_60 = local_b0;
        local_58 = puStack_a8;
        puVar10 = local_58;
        local_50 = (uint)local_a0;
        local_4c = local_a0._4_4_;
        local_58._4_4_ = (int)((ulonglong)puStack_a8 >> 0x20);
        iVar7 = local_58._4_4_;
        local_70 = plVar1;
        if ((local_58._4_4_ != iVar6) || (local_58 = puStack_a8, local_b0 != lVar9)) {
          do {
            local_58 = puVar10;
            lVar13 = *(longlong *)(*local_70 + 0x10 + (longlong)iVar7 * 0x20);
            if ((lVar13 != 0) &&
               (plVar12 = *(longlong **)(lVar13 + 0x30), plVar12 != (longlong *)0x0)) {
              bVar3 = *(byte *)(lVar13 + 0x2a);
              if (((-1 < (char)bVar3) && ((int)(char)bVar3 < (int)plVar2[0x78])) &&
                 (*(longlong *)(plVar2[0x77] + (ulonglong)bVar3 * 8) == DAT_14cb84658)) {
                lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
                lVar8 = FUN_14005f2f0();
                if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
                    (*(longlong *)
                      (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                     lVar8 + 0x30)) && (lVar13 = FUN_14087df18(plVar12), lVar13 == param_2))
                goto LAB_1488d6818;
              }
            }
            local_58 = (undefined8 *)CONCAT44(local_58._4_4_,(uint)local_58 & ~local_68._4_4_);
            FUN_1449c0562(&local_68);
            iVar7 = local_58._4_4_;
            puVar10 = local_58;
          } while (local_70 != plVar1 || (local_60 != lVar9 || local_58._4_4_ != iVar6));
        }
      }
    }
    else {
      FUN_1446dcdd4(&local_70,param_1);
      if ((((int)local_70 == 0) || (local_70._4_4_ == 0)) ||
         (((int)local_70 == DAT_14c948000 || (local_70._4_4_ < 1)))) {
        local_b8 = DAT_14c948618;
        iVar6 = DAT_14c948620;
      }
      else {
        puVar10 = &local_68;
        if (0 < local_4c) {
          puVar10 = local_58;
        }
        if (local_70._4_4_ != 1) {
          puVar10 = local_58;
        }
        local_b8 = (longlong *)*puVar10;
        iVar6 = *(int *)(puVar10 + 1);
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar6);
      uVar11 = (ulonglong)local_b8 & 0xffffffff;
      if (iVar6 != 0) {
        uVar5 = FUN_144a78877(uVar11,iVar6);
        uVar11 = (ulonglong)uVar5;
      }
      iVar6 = FUN_1448467de(plVar2 + 0x3f,uVar11,&local_b8);
      if (iVar6 != -1) {
        lVar13 = plVar2[0x3f];
        if ((lVar13 + (longlong)iVar6 * 0x70 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar13 = lVar13 + (longlong)iVar6 * 0x70;
          plVar2 = (longlong *)(lVar13 + 0x18);
          puVar10 = (undefined8 *)(lVar13 + 0x28);
          local_90 = 0x100000000;
          local_80 = 0xffffffff;
          uStack_78 = 0;
          puStack_88 = puVar10;
          if (*(int *)(lVar13 + 0x40) == 0) {
            iVar6 = 0;
          }
          else {
            FUN_1449c0562(&local_90);
            iVar6 = *(int *)(lVar13 + 0x40);
          }
          uStack_98 = CONCAT44(uStack_74,uStack_78);
          local_a0 = local_80;
          uVar11 = local_a0;
          local_b0 = local_90;
          puStack_a8 = puStack_88;
          local_a0._4_4_ = (int)(local_80 >> 0x20);
          iVar7 = local_a0._4_4_;
          local_b8 = plVar2;
          if ((local_a0._4_4_ != iVar6) || (local_a0 = local_80, puStack_88 != puVar10)) {
            do {
              local_a0 = uVar11;
              plVar12 = *(longlong **)(*local_b8 + 0x10 + (longlong)iVar7 * 0x20);
              if (plVar12 != (longlong *)0x0) {
                lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
                lVar9 = FUN_14005f2f0();
                if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
                    (*(longlong *)
                      (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30)) && (lVar13 = FUN_14087df18(plVar12), lVar13 == param_2)) {
                  if (local_58 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1488d6818;
                }
              }
              local_a0 = CONCAT44(local_a0._4_4_,(uint)local_a0 & ~local_b0._4_4_);
              FUN_1449c0562(&local_b0);
              iVar7 = local_a0._4_4_;
              uVar11 = local_a0;
            } while (local_b8 != plVar2 || (puStack_a8 != puVar10 || local_a0._4_4_ != iVar6));
          }
        }
      }
      if (local_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1488d6818:
  if ((local_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12;
}



// FUNCTION 1488d6b24 FUN_1488d6b24 body=1005 status=ok
// SIG undefined FUN_1488d6b24(void)

void FUN_1488d6b24(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined8 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  if (DAT_14cb848c0 != 0) {
    FUN_1406fa324();
    iVar3 = (int)param_1[1];
    if (1 < (longlong)iVar3) {
      lVar1 = *param_1;
      memset(local_338,0,0x2f0);
      local_340 = lVar1 + (longlong)iVar3 * 8 + -8;
      local_348 = lVar1;
      fVar22 = logf((float)iVar3);
      local_338[0] = (int)(longlong)(fVar22 + fVar22);
      plVar9 = &local_348;
      do {
        puVar13 = (undefined8 *)*plVar9;
        puVar12 = (undefined8 *)plVar9[1];
        iVar3 = (int)plVar9[2];
        iVar4 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar13) >> 3);
        uVar18 = iVar4 + 1;
        puVar14 = puVar13;
        puVar16 = puVar12;
        puVar15 = puVar13;
        local_360 = plVar9;
        if (iVar3 != 0) {
LAB_1488d6be3:
          if (8 < (int)uVar18) {
            uVar2 = puVar15[uVar18 >> 1];
            puVar15[uVar18 >> 1] = *puVar15;
            *puVar15 = uVar2;
            puVar11 = puVar16 + 1;
            puVar13 = puVar15;
            local_354 = iVar3;
            local_350 = puVar14;
            do {
              puVar14 = puVar13 + 1;
              puVar17 = puVar13 + 1;
              do {
                puVar13 = puVar17;
                puVar7 = puVar14;
                if (puVar16 < puVar13) break;
                iVar3 = FUN_144a78538(puVar15,puVar13);
                puVar14 = puVar7 + 1;
                puVar17 = puVar13 + 1;
              } while (-1 < iVar3);
              puVar14 = puVar11 + -2;
              do {
                puVar17 = puVar11;
                puVar8 = puVar14;
                puVar11 = puVar17 + -1;
                if (puVar11 <= puVar15) break;
                iVar3 = FUN_144a78538(puVar11,puVar15);
                puVar14 = puVar8 + -1;
              } while (-1 < iVar3);
              if (puVar11 < puVar13) goto LAB_1488d6c7b;
              uVar2 = *puVar13;
              *puVar13 = *puVar11;
              *puVar11 = uVar2;
            } while( true );
          }
          for (; plVar9 = local_360, puVar12 = puVar15, puVar13 = puVar15, puVar15 < puVar16;
              puVar16 = puVar16 + -1) {
            while (puVar14 = puVar12, puVar13 = puVar13 + 1, puVar13 <= puVar16) {
              iVar3 = FUN_144a78538(puVar14,puVar13);
              puVar12 = puVar13;
              if (-1 < iVar3) {
                puVar12 = puVar14;
              }
            }
            uVar2 = *puVar14;
            *puVar14 = *puVar16;
            *puVar16 = uVar2;
          }
          goto LAB_1488d6ed2;
        }
LAB_1488d6d2f:
        plVar9 = local_360;
        if (uVar18 != 0) {
          iVar3 = (iVar4 - (iVar4 + -1 >> 0x1f)) + -1 >> 1;
          iVar4 = iVar3;
joined_r0x0001488d6d54:
          do {
            iVar6 = iVar3 * 2 + 1;
            if (iVar6 < (int)uVar18) {
              iVar10 = iVar3 * 2 + 2;
              if ((iVar10 < (int)uVar18) &&
                 (iVar5 = FUN_144a78538(puVar13 + iVar10,puVar13 + iVar6), -1 < iVar5)) {
                iVar6 = iVar10;
              }
              puVar16 = puVar13 + iVar3;
              puVar12 = puVar13 + iVar6;
              iVar3 = FUN_144a78538(puVar16,puVar12);
              if (iVar3 < 0) {
                uVar2 = *puVar16;
                *puVar16 = *puVar12;
                *puVar12 = uVar2;
                iVar3 = iVar6;
                goto joined_r0x0001488d6d54;
              }
            }
            bVar21 = iVar4 != 0;
            iVar3 = iVar4 + -1;
            iVar4 = iVar3;
          } while (bVar21);
          plVar9 = local_360;
          if (1 < (int)uVar18) {
            uVar19 = (ulonglong)uVar18;
            uVar2 = *puVar13;
            *puVar13 = puVar13[uVar19 - 1];
            puVar13[uVar19 - 1] = uVar2;
            if (uVar18 != 2) {
              do {
                uVar20 = uVar19 - 1;
                iVar3 = 0;
                iVar6 = 1;
                iVar4 = 0;
                do {
                  iVar3 = iVar3 + 2;
                  iVar10 = iVar6;
                  if (((longlong)iVar3 < (longlong)uVar20) &&
                     (iVar6 = FUN_144a78538(puVar13 + iVar3,puVar13 + iVar6), -1 < iVar6)) {
                    iVar10 = iVar3;
                  }
                  puVar16 = puVar13 + iVar4;
                  puVar12 = puVar13 + iVar10;
                  iVar3 = FUN_144a78538(puVar16,puVar12);
                  if (-1 < iVar3) break;
                  uVar2 = *puVar16;
                  *puVar16 = *puVar12;
                  *puVar12 = uVar2;
                  iVar3 = iVar10 * 2;
                  iVar6 = iVar10 * 2 + 1;
                  iVar4 = iVar10;
                } while ((longlong)iVar6 < (longlong)uVar20);
                uVar2 = *puVar13;
                *puVar13 = puVar13[uVar19 - 2];
                puVar13[uVar19 - 2] = uVar2;
                plVar9 = local_360;
                uVar19 = uVar20;
              } while (2 < uVar20);
            }
          }
        }
LAB_1488d6ed2:
        plVar9 = plVar9 + -3;
      } while (&local_348 <= plVar9);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1488d6c7b:
  uVar2 = *puVar15;
  *puVar15 = *puVar11;
  *puVar11 = uVar2;
  iVar3 = local_354 + -1;
  puVar17 = puVar17 + -2;
  if ((longlong)puVar8 - (longlong)local_350 < (longlong)puVar12 - (longlong)puVar7) {
    plVar9 = local_360;
    if (puVar13 < puVar16) {
      *local_360 = (longlong)puVar13;
      local_360[1] = (longlong)puVar16;
      *(int *)(local_360 + 2) = iVar3;
      plVar9 = local_360 + 3;
    }
    puVar13 = puVar15;
    puVar12 = puVar8;
    if (puVar11 <= puVar15 + 1) goto LAB_1488d6ed2;
  }
  else {
    if (puVar15 + 1 < puVar11) {
      *local_360 = (longlong)puVar15;
      local_360[1] = (longlong)puVar17;
      *(int *)(local_360 + 2) = iVar3;
      local_360 = local_360 + 3;
    }
    plVar9 = local_360;
    puVar15 = puVar7;
    puVar17 = puVar16;
    puVar12 = puVar16;
    if (puVar16 <= puVar13) goto LAB_1488d6ed2;
  }
  local_360 = plVar9;
  iVar4 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar15) >> 3);
  uVar18 = iVar4 + 1;
  puVar14 = puVar15;
  puVar16 = puVar17;
  puVar15 = puVar13;
  if (iVar3 == 0) goto LAB_1488d6d2f;
  goto LAB_1488d6be3;
}



// FUNCTION 1488d6f12 FUN_1488d6f12 body=1201 status=ok
// SIG undefined FUN_1488d6f12(void)

void FUN_1488d6f12(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong **pplVar10;
  int iVar11;
  longlong *plVar12;
  longlong *plVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  longlong *plVar18;
  longlong lVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  bool bVar22;
  float fVar23;
  undefined1 auStack_3a8 [40];
  longlong **local_380;
  int local_374;
  longlong *local_370;
  longlong *local_368;
  longlong *local_360;
  uint local_358;
  int iStack_354;
  undefined4 local_350;
  undefined4 local_34c;
  longlong *local_348;
  undefined8 local_340;
  longlong *local_338;
  uint local_330;
  int iStack_32c;
  undefined4 local_328;
  undefined4 local_324;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_3a8;
  local_348 = (longlong *)FUN_14574be64();
  local_360 = local_348 + 2;
  local_368 = (longlong *)&DAT_100000000;
  local_358 = 0xffffffff;
  iStack_354 = 0;
  local_350 = 0;
  if ((int)local_348[5] != 0) {
    FUN_1449c0562(&local_368);
  }
  local_330 = local_358;
  iStack_32c = iStack_354;
  local_328 = local_350;
  local_324 = local_34c;
  local_340 = local_368;
  local_338 = local_360;
  if (iStack_354 < (int)local_360[3]) {
    do {
      lVar19 = (longlong)iStack_32c;
      lVar1 = *local_348;
      lVar2 = param_1[1];
      uVar3 = (int)lVar2 + 1;
      *(uint *)(param_1 + 1) = uVar3;
      if (*(uint *)((longlong)param_1 + 0xc) < uVar3) {
        FUN_1446f84a2(param_1);
      }
      *(undefined8 *)(*param_1 + (longlong)(int)lVar2 * 8) = *(undefined8 *)(lVar19 * 0x20 + lVar1);
      local_330 = local_330 & ~local_340._4_4_;
      FUN_1449c0562(&local_340);
    } while (iStack_32c < (int)local_338[3]);
  }
  iVar4 = (int)param_1[1];
  if (1 < (longlong)iVar4) {
    param_1 = (longlong *)*param_1;
    memset(&local_338,0,0x2f0);
    local_340 = param_1 + (longlong)iVar4 + -1;
    local_348 = param_1;
    fVar23 = logf((float)iVar4);
    local_338 = (longlong *)CONCAT44(local_338._4_4_,(int)(longlong)(fVar23 + fVar23));
    pplVar10 = &local_348;
    do {
      plVar14 = *pplVar10;
      plVar13 = pplVar10[1];
      iVar4 = *(int *)(pplVar10 + 2);
      iVar5 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar14) >> 3);
      uVar3 = iVar5 + 1;
      plVar15 = plVar14;
      plVar17 = plVar13;
      plVar16 = plVar14;
      local_380 = pplVar10;
      if (iVar4 != 0) {
LAB_1488d7095:
        if (8 < (int)uVar3) {
          lVar1 = plVar16[uVar3 >> 1];
          plVar16[uVar3 >> 1] = *plVar16;
          *plVar16 = lVar1;
          plVar12 = plVar17 + 1;
          plVar14 = plVar16;
          local_374 = iVar4;
          local_370 = plVar15;
          do {
            plVar15 = plVar14 + 1;
            plVar18 = plVar14 + 1;
            do {
              plVar14 = plVar18;
              plVar8 = plVar15;
              if (plVar17 < plVar14) break;
              iVar4 = FUN_144a78538(plVar16,plVar14);
              plVar15 = plVar8 + 1;
              plVar18 = plVar14 + 1;
            } while (-1 < iVar4);
            plVar15 = plVar12 + -2;
            do {
              plVar18 = plVar12;
              plVar9 = plVar15;
              plVar12 = plVar18 + -1;
              if (plVar12 <= plVar16) break;
              iVar4 = FUN_144a78538(plVar12,plVar16);
              plVar15 = plVar9 + -1;
            } while (-1 < iVar4);
            if (plVar12 < plVar14) goto LAB_1488d712d;
            lVar1 = *plVar14;
            *plVar14 = *plVar12;
            *plVar12 = lVar1;
          } while( true );
        }
        for (; pplVar10 = local_380, plVar13 = plVar16, plVar14 = plVar16, plVar16 < plVar17;
            plVar17 = plVar17 + -1) {
          while (plVar15 = plVar13, plVar14 = plVar14 + 1, plVar14 <= plVar17) {
            iVar4 = FUN_144a78538(plVar15,plVar14);
            plVar13 = plVar14;
            if (-1 < iVar4) {
              plVar13 = plVar15;
            }
          }
          lVar1 = *plVar15;
          *plVar15 = *plVar17;
          *plVar17 = lVar1;
        }
        goto LAB_1488d7384;
      }
LAB_1488d71e1:
      pplVar10 = local_380;
      if (uVar3 != 0) {
        iVar4 = (iVar5 - (iVar5 + -1 >> 0x1f)) + -1 >> 1;
        iVar5 = iVar4;
joined_r0x0001488d7206:
        do {
          iVar7 = iVar4 * 2 + 1;
          if (iVar7 < (int)uVar3) {
            iVar11 = iVar4 * 2 + 2;
            if ((iVar11 < (int)uVar3) &&
               (iVar6 = FUN_144a78538(plVar14 + iVar11,plVar14 + iVar7), -1 < iVar6)) {
              iVar7 = iVar11;
            }
            plVar17 = plVar14 + iVar4;
            plVar13 = plVar14 + iVar7;
            iVar4 = FUN_144a78538(plVar17,plVar13);
            if (iVar4 < 0) {
              lVar1 = *plVar17;
              *plVar17 = *plVar13;
              *plVar13 = lVar1;
              iVar4 = iVar7;
              goto joined_r0x0001488d7206;
            }
          }
          bVar22 = iVar5 != 0;
          iVar4 = iVar5 + -1;
          iVar5 = iVar4;
        } while (bVar22);
        pplVar10 = local_380;
        if (1 < (int)uVar3) {
          uVar20 = (ulonglong)uVar3;
          lVar1 = *plVar14;
          *plVar14 = plVar14[uVar20 - 1];
          plVar14[uVar20 - 1] = lVar1;
          if (uVar3 != 2) {
            do {
              uVar21 = uVar20 - 1;
              iVar4 = 0;
              iVar7 = 1;
              iVar5 = 0;
              do {
                iVar4 = iVar4 + 2;
                iVar11 = iVar7;
                if (((longlong)iVar4 < (longlong)uVar21) &&
                   (iVar7 = FUN_144a78538(plVar14 + iVar4,plVar14 + iVar7), -1 < iVar7)) {
                  iVar11 = iVar4;
                }
                plVar17 = plVar14 + iVar5;
                plVar13 = plVar14 + iVar11;
                iVar4 = FUN_144a78538(plVar17,plVar13);
                if (-1 < iVar4) break;
                lVar1 = *plVar17;
                *plVar17 = *plVar13;
                *plVar13 = lVar1;
                iVar4 = iVar11 * 2;
                iVar7 = iVar11 * 2 + 1;
                iVar5 = iVar11;
              } while ((longlong)iVar7 < (longlong)uVar21);
              lVar1 = *plVar14;
              *plVar14 = plVar14[uVar20 - 2];
              plVar14[uVar20 - 2] = lVar1;
              pplVar10 = local_380;
              uVar20 = uVar21;
            } while (2 < uVar21);
          }
        }
      }
LAB_1488d7384:
      pplVar10 = pplVar10 + -3;
    } while (&local_348 <= pplVar10);
  }
  if ((local_48 ^ (ulonglong)auStack_3a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1488d712d:
  lVar1 = *plVar16;
  *plVar16 = *plVar12;
  *plVar12 = lVar1;
  iVar4 = local_374 + -1;
  plVar18 = plVar18 + -2;
  if ((longlong)plVar9 - (longlong)local_370 < (longlong)plVar13 - (longlong)plVar8) {
    pplVar10 = local_380;
    if (plVar14 < plVar17) {
      *local_380 = plVar14;
      local_380[1] = plVar17;
      *(int *)(local_380 + 2) = iVar4;
      pplVar10 = local_380 + 3;
    }
    plVar14 = plVar16;
    plVar13 = plVar9;
    if (plVar12 <= plVar16 + 1) goto LAB_1488d7384;
  }
  else {
    if (plVar16 + 1 < plVar12) {
      *local_380 = plVar16;
      local_380[1] = plVar18;
      *(int *)(local_380 + 2) = iVar4;
      local_380 = local_380 + 3;
    }
    pplVar10 = local_380;
    plVar16 = plVar8;
    plVar18 = plVar17;
    plVar13 = plVar17;
    if (plVar17 <= plVar14) goto LAB_1488d7384;
  }
  local_380 = pplVar10;
  iVar5 = (int)((ulonglong)((longlong)plVar13 - (longlong)plVar16) >> 3);
  uVar3 = iVar5 + 1;
  plVar15 = plVar16;
  plVar17 = plVar18;
  plVar16 = plVar14;
  if (iVar4 == 0) goto LAB_1488d71e1;
  goto LAB_1488d7095;
}



// FUNCTION 1488d73c4 FUN_1488d73c4 body=1 status=ok
// SIG undefined FUN_1488d73c4(void)

void FUN_1488d73c4(void)

{
  return;
}



// FUNCTION 1488d73c6 FUN_1488d73c6 body=11 status=ok
// SIG undefined FUN_1488d73c6(void)

undefined8 * FUN_1488d73c6(undefined8 *param_1)

{
  *param_1 = 0;
  return param_1;
}



// FUNCTION 1488d73d2 FUN_1488d73d2 body=993 status=ok
// SIG undefined FUN_1488d73d2(void)

void FUN_1488d73d2(longlong *param_1)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  int iVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  ulonglong uVar19;
  ulonglong uVar20;
  bool bVar21;
  float fVar22;
  undefined1 auStack_388 [40];
  longlong *local_360;
  int local_354;
  undefined8 *local_350;
  longlong local_348;
  longlong local_340;
  undefined4 local_338 [188];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_388;
  uVar6 = FUN_140265f12();
  FUN_147091128(uVar6);
  iVar2 = (int)param_1[1];
  if (1 < (longlong)iVar2) {
    lVar1 = *param_1;
    memset(local_338,0,0x2f0);
    local_340 = lVar1 + (longlong)iVar2 * 8 + -8;
    local_348 = lVar1;
    fVar22 = logf((float)iVar2);
    local_338[0] = (int)(longlong)(fVar22 + fVar22);
    plVar9 = &local_348;
    do {
      puVar13 = (undefined8 *)*plVar9;
      puVar12 = (undefined8 *)plVar9[1];
      iVar2 = (int)plVar9[2];
      iVar3 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar13) >> 3);
      uVar18 = iVar3 + 1;
      puVar14 = puVar13;
      puVar16 = puVar12;
      puVar15 = puVar13;
      local_360 = plVar9;
      if (iVar2 != 0) {
LAB_1488d7485:
        if (8 < (int)uVar18) {
          uVar6 = puVar15[uVar18 >> 1];
          puVar15[uVar18 >> 1] = *puVar15;
          *puVar15 = uVar6;
          puVar11 = puVar16 + 1;
          puVar13 = puVar15;
          local_354 = iVar2;
          local_350 = puVar14;
          do {
            puVar14 = puVar13 + 1;
            puVar17 = puVar13 + 1;
            do {
              puVar13 = puVar17;
              puVar7 = puVar14;
              if (puVar16 < puVar13) break;
              iVar2 = FUN_144a78538(puVar15,puVar13);
              puVar14 = puVar7 + 1;
              puVar17 = puVar13 + 1;
            } while (-1 < iVar2);
            puVar14 = puVar11 + -2;
            do {
              puVar17 = puVar11;
              puVar8 = puVar14;
              puVar11 = puVar17 + -1;
              if (puVar11 <= puVar15) break;
              iVar2 = FUN_144a78538(puVar11,puVar15);
              puVar14 = puVar8 + -1;
            } while (-1 < iVar2);
            if (puVar11 < puVar13) goto LAB_1488d751d;
            uVar6 = *puVar13;
            *puVar13 = *puVar11;
            *puVar11 = uVar6;
          } while( true );
        }
        for (; plVar9 = local_360, puVar12 = puVar15, puVar13 = puVar15, puVar15 < puVar16;
            puVar16 = puVar16 + -1) {
          while (puVar14 = puVar12, puVar13 = puVar13 + 1, puVar13 <= puVar16) {
            iVar2 = FUN_144a78538(puVar14,puVar13);
            puVar12 = puVar13;
            if (-1 < iVar2) {
              puVar12 = puVar14;
            }
          }
          uVar6 = *puVar14;
          *puVar14 = *puVar16;
          *puVar16 = uVar6;
        }
        goto LAB_1488d7774;
      }
LAB_1488d75d1:
      plVar9 = local_360;
      if (uVar18 != 0) {
        iVar2 = (iVar3 - (iVar3 + -1 >> 0x1f)) + -1 >> 1;
        iVar3 = iVar2;
joined_r0x0001488d75f6:
        do {
          iVar5 = iVar2 * 2 + 1;
          if (iVar5 < (int)uVar18) {
            iVar10 = iVar2 * 2 + 2;
            if ((iVar10 < (int)uVar18) &&
               (iVar4 = FUN_144a78538(puVar13 + iVar10,puVar13 + iVar5), -1 < iVar4)) {
              iVar5 = iVar10;
            }
            puVar16 = puVar13 + iVar2;
            puVar12 = puVar13 + iVar5;
            iVar2 = FUN_144a78538(puVar16,puVar12);
            if (iVar2 < 0) {
              uVar6 = *puVar16;
              *puVar16 = *puVar12;
              *puVar12 = uVar6;
              iVar2 = iVar5;
              goto joined_r0x0001488d75f6;
            }
          }
          bVar21 = iVar3 != 0;
          iVar2 = iVar3 + -1;
          iVar3 = iVar2;
        } while (bVar21);
        plVar9 = local_360;
        if (1 < (int)uVar18) {
          uVar19 = (ulonglong)uVar18;
          uVar6 = *puVar13;
          *puVar13 = puVar13[uVar19 - 1];
          puVar13[uVar19 - 1] = uVar6;
          if (uVar18 != 2) {
            do {
              uVar20 = uVar19 - 1;
              iVar2 = 0;
              iVar5 = 1;
              iVar3 = 0;
              do {
                iVar2 = iVar2 + 2;
                iVar10 = iVar5;
                if (((longlong)iVar2 < (longlong)uVar20) &&
                   (iVar5 = FUN_144a78538(puVar13 + iVar2,puVar13 + iVar5), -1 < iVar5)) {
                  iVar10 = iVar2;
                }
                puVar16 = puVar13 + iVar3;
                puVar12 = puVar13 + iVar10;
                iVar2 = FUN_144a78538(puVar16,puVar12);
                if (-1 < iVar2) break;
                uVar6 = *puVar16;
                *puVar16 = *puVar12;
                *puVar12 = uVar6;
                iVar2 = iVar10 * 2;
                iVar5 = iVar10 * 2 + 1;
                iVar3 = iVar10;
              } while ((longlong)iVar5 < (longlong)uVar20);
              uVar6 = *puVar13;
              *puVar13 = puVar13[uVar19 - 2];
              puVar13[uVar19 - 2] = uVar6;
              plVar9 = local_360;
              uVar19 = uVar20;
            } while (2 < uVar20);
          }
        }
      }
LAB_1488d7774:
      plVar9 = plVar9 + -3;
    } while (&local_348 <= plVar9);
  }
  if ((local_48 ^ (ulonglong)auStack_388) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
LAB_1488d751d:
  uVar6 = *puVar15;
  *puVar15 = *puVar11;
  *puVar11 = uVar6;
  iVar2 = local_354 + -1;
  puVar17 = puVar17 + -2;
  if ((longlong)puVar8 - (longlong)local_350 < (longlong)puVar12 - (longlong)puVar7) {
    plVar9 = local_360;
    if (puVar13 < puVar16) {
      *local_360 = (longlong)puVar13;
      local_360[1] = (longlong)puVar16;
      *(int *)(local_360 + 2) = iVar2;
      plVar9 = local_360 + 3;
    }
    puVar13 = puVar15;
    puVar12 = puVar8;
    if (puVar11 <= puVar15 + 1) goto LAB_1488d7774;
  }
  else {
    if (puVar15 + 1 < puVar11) {
      *local_360 = (longlong)puVar15;
      local_360[1] = (longlong)puVar17;
      *(int *)(local_360 + 2) = iVar2;
      local_360 = local_360 + 3;
    }
    plVar9 = local_360;
    puVar15 = puVar7;
    puVar17 = puVar16;
    puVar12 = puVar16;
    if (puVar16 <= puVar13) goto LAB_1488d7774;
  }
  local_360 = plVar9;
  iVar3 = (int)((ulonglong)((longlong)puVar12 - (longlong)puVar15) >> 3);
  uVar18 = iVar3 + 1;
  puVar14 = puVar15;
  puVar16 = puVar17;
  puVar15 = puVar13;
  if (iVar2 == 0) goto LAB_1488d75d1;
  goto LAB_1488d7485;
}



// FUNCTION 1488d77b4 FUN_1488d77b4 body=231 status=ok
// SIG undefined FUN_1488d77b4(void)

void FUN_1488d77b4(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = (int)param_2[1];
  *(uint *)(param_2 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
    FUN_1446f84a2(param_2,iVar1);
  }
  *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = 0;
  lVar2 = FUN_1401fe4bc(param_1);
  if (lVar2 != 0) {
    lVar3 = FUN_140d0eb38();
    if (((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
        (*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30)) && (0 < *(int *)(lVar2 + 0x590))) {
      lVar3 = (longlong)(int)(*(longlong **)(lVar2 + 0x588))[1];
      if (lVar3 != 0) {
        lVar2 = **(longlong **)(lVar2 + 0x588);
        lVar4 = 0;
        do {
          iVar1 = (int)param_2[1];
          *(uint *)(param_2 + 1) = iVar1 + 1U;
          if (*(uint *)((longlong)param_2 + 0xc) < iVar1 + 1U) {
            FUN_1446f84a2(param_2,iVar1);
          }
          *(undefined8 *)(*param_2 + (longlong)iVar1 * 8) = *(undefined8 *)(lVar2 + lVar4);
          lVar4 = lVar4 + 0x24;
        } while (lVar3 * 0x24 != lVar4);
      }
    }
  }
  if (*(longlong *)(param_1 + 0x18) == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1488d78c3 FUN_1488d78c3 body=96 status=ok
// SIG undefined FUN_1488d78c3(void)

undefined8 FUN_1488d78c3(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  undefined1 local_40 [24];
  longlong local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1446dcdd4(local_40,param_1);
  uVar1 = FUN_14005f05e(local_40);
  if (local_28 != 0) {
    FUN_1400020a8();
  }
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d7924 thunk_FUN_1488d6706 body=5 status=ok
// SIG undefined thunk_FUN_1488d6706(void)

longlong * thunk_FUN_1488d6706(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  longlong *plVar12;
  longlong lVar13;
  undefined1 auStack_d8 [32];
  longlong *plStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  longlong lStack_90;
  undefined8 *puStack_88;
  ulonglong uStack_80;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  longlong lStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  int iStack_4c;
  ulonglong uStack_48;
  
  plVar2 = DAT_14cb848c0;
  uStack_48 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  if (DAT_14cb848c0 != (longlong *)0x0) {
    cVar4 = (**(code **)(*DAT_14cb848c0 + 0x300))(DAT_14cb848c0);
    if (cVar4 == '\0') {
      FUN_1446dcdd4(&uStack_70,param_1);
      lVar13 = FUN_1400e3c00(plVar2,&uStack_70,1);
      if (uStack_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
      iVar6 = 0;
      if (lVar13 != 0) {
        plVar1 = (longlong *)(lVar13 + 0x70);
        lVar9 = lVar13 + 0x80;
        plStack_b8 = (longlong *)&DAT_100000000;
        puStack_a8 = (undefined8 *)&DAT_ffffffff;
        uStack_a0 = uStack_a0 & 0xffffffff00000000;
        uStack_b0 = lVar9;
        if (*(int *)(lVar13 + 0x98) != 0) {
          FUN_1449c0562(&plStack_b8);
          iVar6 = *(int *)(lVar13 + 0x98);
        }
        uStack_68 = plStack_b8;
        lStack_60 = uStack_b0;
        uStack_58 = puStack_a8;
        puVar10 = uStack_58;
        uStack_50 = (uint)uStack_a0;
        iStack_4c = uStack_a0._4_4_;
        uStack_58._4_4_ = (int)((ulonglong)puStack_a8 >> 0x20);
        iVar7 = uStack_58._4_4_;
        uStack_70 = plVar1;
        if ((uStack_58._4_4_ != iVar6) || (uStack_58 = puStack_a8, uStack_b0 != lVar9)) {
          do {
            uStack_58 = puVar10;
            lVar13 = *(longlong *)(*uStack_70 + 0x10 + (longlong)iVar7 * 0x20);
            if ((lVar13 != 0) &&
               (plVar12 = *(longlong **)(lVar13 + 0x30), plVar12 != (longlong *)0x0)) {
              bVar3 = *(byte *)(lVar13 + 0x2a);
              if (((-1 < (char)bVar3) && ((int)(char)bVar3 < (int)plVar2[0x78])) &&
                 (*(longlong *)(plVar2[0x77] + (ulonglong)bVar3 * 8) == DAT_14cb84658)) {
                lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
                lVar8 = FUN_14005f2f0();
                if ((((lVar8 != 0) && (*(int *)(lVar8 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
                    (*(longlong *)
                      (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
                     lVar8 + 0x30)) && (lVar13 = FUN_14087df18(plVar12), lVar13 == param_2))
                goto LAB_1488d6818;
              }
            }
            uStack_58 = (undefined8 *)CONCAT44(uStack_58._4_4_,(uint)uStack_58 & ~uStack_68._4_4_);
            FUN_1449c0562(&uStack_68);
            iVar7 = uStack_58._4_4_;
            puVar10 = uStack_58;
          } while (uStack_70 != plVar1 || (lStack_60 != lVar9 || uStack_58._4_4_ != iVar6));
        }
      }
    }
    else {
      FUN_1446dcdd4(&uStack_70,param_1);
      if ((((int)uStack_70 == 0) || (uStack_70._4_4_ == 0)) ||
         (((int)uStack_70 == DAT_14c948000 || (uStack_70._4_4_ < 1)))) {
        plStack_b8 = DAT_14c948618;
        iVar6 = DAT_14c948620;
      }
      else {
        puVar10 = &uStack_68;
        if (0 < iStack_4c) {
          puVar10 = uStack_58;
        }
        if (uStack_70._4_4_ != 1) {
          puVar10 = uStack_58;
        }
        plStack_b8 = (longlong *)*puVar10;
        iVar6 = *(int *)(puVar10 + 1);
      }
      uStack_b0 = CONCAT44(uStack_b0._4_4_,iVar6);
      uVar11 = (ulonglong)plStack_b8 & 0xffffffff;
      if (iVar6 != 0) {
        uVar5 = FUN_144a78877(uVar11,iVar6);
        uVar11 = (ulonglong)uVar5;
      }
      iVar6 = FUN_1448467de(plVar2 + 0x3f,uVar11,&plStack_b8);
      if (iVar6 != -1) {
        lVar13 = plVar2[0x3f];
        if ((lVar13 + (longlong)iVar6 * 0x70 + 0x10U & 0xffffffffffffffef) != 0) {
          lVar13 = lVar13 + (longlong)iVar6 * 0x70;
          plVar2 = (longlong *)(lVar13 + 0x18);
          puVar10 = (undefined8 *)(lVar13 + 0x28);
          lStack_90 = 0x100000000;
          uStack_80 = 0xffffffff;
          uStack_78 = 0;
          puStack_88 = puVar10;
          if (*(int *)(lVar13 + 0x40) == 0) {
            iVar6 = 0;
          }
          else {
            FUN_1449c0562(&lStack_90);
            iVar6 = *(int *)(lVar13 + 0x40);
          }
          uStack_98 = CONCAT44(uStack_74,uStack_78);
          uStack_a0 = uStack_80;
          uVar11 = uStack_a0;
          uStack_b0 = lStack_90;
          puStack_a8 = puStack_88;
          uStack_a0._4_4_ = (int)(uStack_80 >> 0x20);
          iVar7 = uStack_a0._4_4_;
          plStack_b8 = plVar2;
          if ((uStack_a0._4_4_ != iVar6) || (uStack_a0 = uStack_80, puStack_88 != puVar10)) {
            do {
              uStack_a0 = uVar11;
              plVar12 = *(longlong **)(*plStack_b8 + 0x10 + (longlong)iVar7 * 0x20);
              if (plVar12 != (longlong *)0x0) {
                lVar13 = (**(code **)(*plVar12 + 8))(plVar12);
                lVar9 = FUN_14005f2f0();
                if ((((lVar9 != 0) && (*(int *)(lVar9 + 0x38) <= *(int *)(lVar13 + 0x38))) &&
                    (*(longlong *)
                      (*(longlong *)(lVar13 + 0x30) + (longlong)*(int *)(lVar9 + 0x38) * 8) ==
                     lVar9 + 0x30)) && (lVar13 = FUN_14087df18(plVar12), lVar13 == param_2)) {
                  if (uStack_58 != (undefined8 *)0x0) {
                    FUN_1400020a8();
                  }
                  goto LAB_1488d6818;
                }
              }
              uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
              FUN_1449c0562(&uStack_b0);
              iVar7 = uStack_a0._4_4_;
              uVar11 = uStack_a0;
            } while (plStack_b8 != plVar2 || (puStack_a8 != puVar10 || uStack_a0._4_4_ != iVar6));
          }
        }
      }
      if (uStack_58 != (undefined8 *)0x0) {
        FUN_1400020a8();
      }
    }
  }
  plVar12 = (longlong *)0x0;
LAB_1488d6818:
  if ((uStack_48 ^ (ulonglong)auStack_d8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return plVar12;
}



// FUNCTION 1488d7929 thunk_FUN_1488d657e body=5 status=ok
// SIG undefined thunk_FUN_1488d657e(void)

undefined8 thunk_FUN_1488d657e(void)

{
  undefined8 uVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  undefined1 auStack_68 [40];
  undefined1 auStack_40 [8];
  longlong alStack_38 [2];
  undefined8 *puStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  puStack_28 = (undefined8 *)0x0;
  uStack_20 = 0;
  FUN_1400021e4(0,alStack_38);
  FUN_1403de9f2(alStack_38,&puStack_28,&DAT_149e0635c,1);
  if (alStack_38[0] != 0) {
    FUN_1400020a8();
  }
  if ((int)uStack_20 == 2) {
    puVar3 = &DAT_149dfb77a;
    puVar2 = &DAT_149dfb77a;
    if (*(int *)(puStack_28 + 3) != 0) {
      puVar2 = (undefined2 *)puStack_28[2];
    }
    FUN_1446f470e(alStack_38,puVar2,1);
    if (*(int *)(puStack_28 + 1) != 0) {
      puVar3 = (undefined2 *)*puStack_28;
    }
    FUN_1446f470e(auStack_40,puVar3,1);
    uVar1 = FUN_1488d61ea(auStack_40,alStack_38);
  }
  else {
    uVar1 = 0;
  }
  FUN_1447a1747(puStack_28,(int)uStack_20);
  if (puStack_28 != (undefined8 *)0x0) {
    FUN_1400020a8();
  }
  if ((uStack_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d7a96 FUN_1488d7a96 body=29 status=ok
// SIG undefined FUN_1488d7a96(void)

void FUN_1488d7a96(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_1408c99be();
  FUN_147091128(uVar1,param_1);
  return;
}



// FUNCTION 1488d7adc FUN_1488d7adc body=54 status=ok
// SIG undefined FUN_1488d7adc(void)

undefined8 FUN_1488d7adc(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  while( true ) {
    lVar1 = (**(code **)(lVar1 + 8))(param_1);
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != lVar2) break;
    lVar1 = *param_1;
  }
  return 0;
}



// FUNCTION 1488d7b12 FUN_1488d7b12 body=333 status=ok
// SIG undefined FUN_1488d7b12(void)

undefined8 FUN_1488d7b12(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_118 [32];
  longlong local_f8 [2];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0 [4];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong *local_b0;
  undefined4 *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  local_e8 = *(undefined8 *)(param_1 + 0x48);
  FUN_1400021e4(&local_e8,&local_e0);
  local_d0[0] = 3;
  local_c0 = (undefined4)local_e0;
  uStack_bc = local_e0._4_4_;
  uStack_b8 = (undefined4)uStack_d8;
  uStack_b4 = uStack_d8._4_4_;
  local_e0 = 0;
  uStack_d8 = 0;
  FUN_1400b22c2(local_f8,"{attribute}");
  local_b0 = local_f8;
  local_a8 = local_d0;
  FUN_1472ad862(&local_98,local_9c,&local_b0,0);
  if (local_f8[0] != 0) {
    FUN_1400020a8();
  }
  if (CONCAT44(uStack_bc,local_c0) != 0) {
    FUN_1400020a8();
  }
  FUN_140230a63();
  FUN_140a69a96(&DAT_14c8731a8,param_2,L"Numeric: {attribute}",&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_98);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d7c64 FUN_1488d7c64 body=37 status=ok
// SIG undefined FUN_1488d7c64(void)

undefined8 FUN_1488d7c64(longlong param_1,undefined8 param_2)

{
  FUN_140002266(param_2,L"Inventory Equip Slot %i",*(undefined1 *)(param_1 + 0x20));
  return param_2;
}



// FUNCTION 1488d7c8a FUN_1488d7c8a body=32 status=ok
// SIG undefined FUN_1488d7c8a(void)

undefined8 FUN_1488d7c8a(undefined8 param_1,undefined8 param_2)

{
  FUN_140056680(param_2,L"Inventory Item");
  return param_2;
}



// FUNCTION 1488d7caa FUN_1488d7caa body=609 status=ok
// SIG undefined FUN_1488d7caa(void)

longlong * FUN_1488d7caa(undefined8 param_1,longlong *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  ushort uVar4;
  ulonglong uVar5;
  ushort uVar6;
  ulonglong uVar7;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_138 [2];
  longlong local_128;
  int local_120;
  longlong local_118;
  int local_110;
  undefined4 local_10c;
  longlong local_108;
  int local_100;
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
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  local_98 = 0;
  local_90 = 0x8000000000;
  uStack_88 = 0xffffffff;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_d8 = 0;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  local_40 = 0xf;
  local_38 = 1;
  local_34 = 0;
  uStack_2c = 0;
  cVar2 = FUN_14088c870(&local_f8,param_3);
  if (cVar2 == '\0') {
    FUN_140056680(param_2,L"Invalid");
  }
  else {
    FUN_140baf434(&local_f8,&local_108);
    FUN_140baf5f0(&local_f8);
    if (1 < local_100) {
      if (local_110 == local_100) {
        lVar3 = 0;
        while( true ) {
          uVar4 = *(ushort *)(local_118 + lVar3);
          uVar5 = (ulonglong)uVar4;
          uVar6 = *(ushort *)(local_108 + lVar3);
          if (uVar4 != uVar6) break;
          if (uVar4 == 0) goto LAB_1488d7d70;
LAB_1488d7e2d:
          lVar3 = lVar3 + 2;
        }
        if ((uVar6 | uVar4) < 0x80) {
          uVar4 = (ushort)(byte)(&DAT_149e05da0)[uVar5];
          uVar7 = (ulonglong)uVar6;
          uVar6 = (ushort)(byte)(&DAT_149e05da0)[uVar7];
          if ((&DAT_149e05da0)[uVar5] == (&DAT_149e05da0)[uVar7]) goto LAB_1488d7e2d;
        }
        if (uVar4 != uVar6) goto LAB_1488d7e9c;
      }
      else if (local_110 + local_100 != 1) {
LAB_1488d7e9c:
        FUN_140b1283a(local_138,&DAT_149e06140,&local_108);
        FUN_144a882a8(&local_128,local_138,&DAT_149e06144);
        iVar1 = local_120 + -1;
        if (local_120 == 0) {
          iVar1 = 0;
        }
        FUN_1400020e8(&local_118,local_128,iVar1);
        if (local_128 != 0) {
          FUN_1400020a8();
        }
        if (local_138[0] != 0) {
          FUN_1400020a8();
        }
      }
    }
LAB_1488d7d70:
    if (local_110 < 2) {
      local_148 = 0;
      FUN_143da6aec(&local_f8,param_2,1,5);
      if (local_118 != 0) {
        FUN_1400020a8();
      }
    }
    else {
      *param_2 = local_118;
      local_118 = 0;
      *(int *)(param_2 + 1) = local_110;
      *(undefined4 *)((longlong)param_2 + 0xc) = local_10c;
    }
    if (local_108 != 0) {
      FUN_1400020a8();
    }
  }
  FUN_140368b56(&local_f8);
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488d7f0c FUN_1488d7f0c body=734 status=ok
// SIG undefined FUN_1488d7f0c(void)

undefined8 FUN_1488d7f0c(longlong param_1,undefined8 param_2)

{
  int iVar1;
  char cVar2;
  longlong lVar3;
  undefined2 *puVar4;
  ushort uVar5;
  ulonglong uVar6;
  ushort uVar7;
  ulonglong uVar8;
  undefined1 auStack_168 [32];
  undefined8 local_148;
  longlong local_138 [2];
  undefined2 *local_128;
  int local_120;
  undefined4 local_11c;
  undefined2 *local_118;
  int local_110;
  undefined4 local_10c;
  longlong local_108;
  int local_100;
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
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined2 local_38;
  undefined8 local_34;
  undefined8 uStack_2c;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_168;
  FUN_140056680(param_2,L"Inventory Serial Number");
  if (1 < *(int *)(param_1 + 0x28)) {
    local_98 = 0;
    local_90 = 0x8000000000;
    uStack_88 = 0xffffffff;
    local_f8 = 0;
    uStack_f0 = 0;
    local_e8 = 0;
    uStack_e0 = 0;
    local_d8 = 0;
    uStack_d0 = 0;
    local_c8 = 0;
    uStack_c0 = 0;
    local_b8 = 0;
    uStack_b0 = 0;
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    local_38 = 1;
    local_34 = 0;
    uStack_2c = 0;
    cVar2 = FUN_14088c870(&local_f8,param_1 + 0x20);
    if (cVar2 == '\0') {
      FUN_1400020e8(param_2,L" !!INVALID SN!!",0xf);
    }
    else {
      FUN_140baf434(&local_f8,&local_108);
      FUN_140baf5f0(&local_f8);
      if (1 < local_100) {
        if (local_110 == local_100) {
          lVar3 = 0;
          while( true ) {
            uVar5 = *(ushort *)((longlong)local_118 + lVar3);
            uVar6 = (ulonglong)uVar5;
            uVar7 = *(ushort *)(local_108 + lVar3);
            if (uVar5 != uVar7) break;
            if (uVar5 == 0) goto LAB_1488d7ff6;
LAB_1488d80d9:
            lVar3 = lVar3 + 2;
          }
          if ((uVar7 | uVar5) < 0x80) {
            uVar5 = (ushort)(byte)(&DAT_149e05da0)[uVar6];
            uVar8 = (ulonglong)uVar7;
            uVar7 = (ushort)(byte)(&DAT_149e05da0)[uVar8];
            if ((&DAT_149e05da0)[uVar6] == (&DAT_149e05da0)[uVar8]) goto LAB_1488d80d9;
          }
          if (uVar5 != uVar7) goto LAB_1488d817b;
        }
        else if (local_110 + local_100 != 1) {
LAB_1488d817b:
          FUN_140b1283a(local_138,&DAT_149e06140,&local_108);
          FUN_144a882a8(&local_128,local_138,&DAT_149e06144);
          iVar1 = local_120 + -1;
          if (local_120 == 0) {
            iVar1 = 0;
          }
          FUN_1400020e8(&local_118,local_128,iVar1);
          if (local_128 != (undefined2 *)0x0) {
            FUN_1400020a8();
          }
          if (local_138[0] != 0) {
            FUN_1400020a8();
          }
        }
      }
LAB_1488d7ff6:
      puVar4 = local_118;
      if (local_110 < 2) {
        local_148 = 0;
        FUN_143da6aec(&local_f8,&local_128,1,0);
        if (local_118 != (undefined2 *)0x0) {
          FUN_1400020a8();
        }
        local_118 = local_128;
        local_110 = local_120;
        local_10c = local_11c;
        puVar4 = &DAT_149dfb77a;
        if (local_120 != 0) {
          puVar4 = local_128;
        }
      }
      FUN_140002266(&local_128,L" [%s]",puVar4);
      iVar1 = local_120 + -1;
      if (local_120 == 0) {
        iVar1 = 0;
      }
      FUN_1400020e8(param_2,local_128,iVar1);
      if (local_128 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_118 != (undefined2 *)0x0) {
        FUN_1400020a8();
      }
      if (local_108 != 0) {
        FUN_1400020a8();
      }
    }
    FUN_140368b56(&local_f8);
  }
  if ((local_20 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_2;
}



// FUNCTION 1488d81ec FUN_1488d81ec body=54 status=ok
// SIG undefined FUN_1488d81ec(void)

undefined8 FUN_1488d81ec(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = *param_1;
  while( true ) {
    lVar1 = (**(code **)(lVar1 + 8))(param_1);
    lVar2 = (**(code **)(*param_2 + 8))(param_2);
    if (lVar1 != lVar2) break;
    lVar1 = *param_1;
  }
  return 0;
}



// FUNCTION 1488d8222 FUN_1488d8222 body=428 status=ok
// SIG undefined FUN_1488d8222(void)

undefined8 FUN_1488d8222(longlong param_1,undefined8 param_2)

{
  void *_Src;
  undefined8 *puVar1;
  longlong lVar2;
  undefined1 auStack_118 [40];
  longlong local_f0 [2];
  void *local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0 [4];
  void *local_c0;
  int local_b8;
  undefined4 local_b4;
  longlong *local_b0;
  undefined4 *local_a8;
  undefined1 local_9c [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  local_78 = 0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0xffffffff00000080;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  puVar1 = (undefined8 *)FUN_1447a1f4a(param_1 + 0x48);
  local_e0 = (void *)0x0;
  uStack_d8._0_4_ = *(int *)(puVar1 + 1);
  lVar2 = (longlong)(int)uStack_d8;
  _Src = (void *)*puVar1;
  local_c0 = (void *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  if (lVar2 != 0) {
    FUN_1446dd670(&local_e0,(int)uStack_d8,0);
    memcpy(local_e0,_Src,lVar2 * 2);
    local_c0 = local_e0;
    local_b8 = (int)uStack_d8;
    local_b4 = uStack_d8._4_4_;
  }
  local_d0[0] = 3;
  local_e0 = (void *)0x0;
  uStack_d8 = 0;
  FUN_1400b22c2(local_f0,"{format_text}");
  local_b0 = local_f0;
  local_a8 = local_d0;
  FUN_1472ad862(&local_98,local_9c,&local_b0,0);
  if (local_f0[0] != 0) {
    FUN_1400020a8();
  }
  if (local_c0 != (void *)0x0) {
    FUN_1400020a8();
  }
  FUN_140230a63();
  FUN_140a69a96(&DAT_14c8731a8,param_2,L"String: {format_text}",&local_98);
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  FUN_140b40bda(&local_98);
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d83e4 FUN_1488d83e4 body=30 status=ok
// SIG undefined FUN_1488d83e4(void)

void FUN_1488d83e4(longlong param_1)

{
  FUN_145dd7080(param_1 + 0x60);
  FUN_145e36b8a(param_1);
  return;
}



// FUNCTION 1488d8402 FUN_1488d8402 body=201 status=ok
// SIG undefined FUN_1488d8402(void)

void FUN_1488d8402(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_1b8 [32];
  undefined1 local_198 [376];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_1b8;
  lVar1 = param_1 + 0x1d8;
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_1b8);
  }
  cVar2 = FUN_144729dda(lVar1);
  if (cVar2 != '\0') {
    lVar3 = FUN_14479d2ce(lVar1);
    if (*(char *)(lVar3 + 0x178) == '\x03') {
      uVar4 = FUN_14479d2ce(lVar1);
      FUN_14154dd46(local_198,param_1 + 0x60);
      FUN_1486dc532(uVar4,local_198);
    }
    else {
      FUN_145e36b8a(param_1);
    }
    FUN_145e36b1e(param_1 + 0x60);
  }
  if ((local_20 ^ (ulonglong)auStack_1b8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d84de FUN_1488d84de body=165 status=ok
// SIG undefined FUN_1488d84de(void)

undefined8
FUN_1488d84de(longlong param_1,longlong *param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  
  lVar2 = (**(code **)(*param_2 + 0x20))(param_2,param_3);
  if (lVar2 == 0) {
    return 0;
  }
  if ((param_5 == -1) || (*(char *)(lVar2 + 0x147) != '\x01')) {
    bVar6 = false;
  }
  else {
    lVar4 = (longlong)*(int *)(*(longlong *)(lVar2 + 0xa0) + 0x120);
    bVar6 = true;
    if (lVar4 != 0) {
      lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0xa0) + 0x118);
      lVar5 = 0;
      do {
        if (*(char *)(lVar1 + 0x10d + lVar5) == param_5) {
          bVar6 = lVar1 + lVar5 == -0x10;
          break;
        }
        lVar5 = lVar5 + 0x150;
      } while (lVar4 * 0x150 - lVar5 != 0);
    }
  }
  uVar3 = FUN_1412e0532(lVar2,param_1 + 8,param_4,bVar6);
  return uVar3;
}



// FUNCTION 1488d8584 FUN_1488d8584 body=237 status=ok
// SIG undefined FUN_1488d8584(void)

void FUN_1488d8584(longlong param_1,byte param_2,longlong param_3,int *param_4,longlong *param_5,
                  longlong *param_6)

{
  char cVar1;
  longlong lVar2;
  undefined4 *puVar3;
  
  cVar1 = FUN_144729dda(param_1 + 0x1d8);
  if ((((cVar1 != '\0') && (*param_4 != -1)) && (*param_5 != 0)) &&
     (((*param_6 != 0 && (param_6[1] != 0)) && ((param_2 == 3 || (param_3 != 0)))))) {
    FUN_145e36b1e(param_1 + 0x60);
    *(int *)(param_1 + 100) = *param_4;
    *(longlong *)(param_1 + 0x188) = *param_5;
    lVar2 = *param_6;
    if (DAT_14c950c29 == '\x01') {
      if (lVar2 == 0) {
        lVar2 = 0;
      }
      else {
        FUN_1456cec3c();
        lVar2 = *param_6;
      }
    }
    *(longlong *)(param_1 + 0x70) = lVar2;
    *(longlong *)(param_1 + 0x78) = param_6[1];
    *(undefined1 *)(param_1 + 0x60) = 0xe;
    puVar3 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_3 + 8) != (undefined4 *)0x0) {
      puVar3 = *(undefined4 **)(param_3 + 8);
    }
    FUN_1447715ec(param_1 + 0x198,puVar3);
    *(uint *)(param_1 + 0x1c4) = (uint)param_2;
    FUN_145e369de(param_1);
    return;
  }
  return;
}



// FUNCTION 1488d8671 FUN_1488d8671 body=321 status=ok
// SIG undefined FUN_1488d8671(void)

undefined4 FUN_1488d8671(longlong param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStack_198 [32];
  undefined4 local_178;
  undefined1 local_170;
  longlong local_168;
  ulonglong uStack_160;
  undefined1 local_150 [40];
  undefined4 local_128;
  undefined1 local_120 [216];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_198;
  uVar1 = 0;
  if (((param_2 != 0) && (param_3 != 0)) && (*(longlong *)(param_1 + 0xf0) != 0)) {
    local_168 = 0;
    uStack_160 = 0;
    uVar1 = FUN_1488da4d7(0,&local_168,param_3);
    uVar2 = uStack_160 & 0xffffffff;
    if ((char)uVar1 != '\0') {
      if ((int)uStack_160 == 0) {
        uVar2 = 0;
      }
      else {
        lVar3 = (longlong)(int)uStack_160 * 0x68;
        lVar4 = local_168;
        do {
          local_150[0] = 0;
          local_128 = 0;
          FUN_1456bb102(local_150,param_3);
          FUN_140368c94(lVar4,local_120,local_150,0);
          local_170 = 0;
          local_178 = 0xffffffff;
          FUN_1488c68b6(param_2,local_120,0xff);
          FUN_140368b56(local_120);
          FUN_144a5ac3a(local_150);
          lVar4 = lVar4 + 0x68;
          lVar3 = lVar3 + -0x68;
        } while (lVar3 != 0);
        uVar2 = uStack_160 & 0xffffffff;
      }
    }
    FUN_14036924e(local_168,uVar2);
    if (local_168 != 0) {
      FUN_1400020a8();
    }
  }
  if ((local_48 ^ (ulonglong)auStack_198) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d87b3 FUN_1488d87b3 body=1589 status=ok
// SIG undefined FUN_1488d87b3(void)

ulonglong FUN_1488d87b3(longlong param_1,longlong *param_2,longlong param_3,undefined1 *param_4)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  longlong *plVar9;
  undefined8 ****ppppuVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  char *pcVar15;
  ulonglong uVar16;
  undefined1 auStack_178 [32];
  undefined8 local_158;
  undefined1 local_150;
  char local_145;
  undefined4 local_144;
  longlong *local_140;
  longlong local_138;
  undefined8 uStack_130;
  undefined8 ***local_128;
  longlong *plStack_120;
  undefined8 ***local_118;
  longlong *plStack_110;
  ushort local_100;
  byte local_f8;
  undefined4 local_f0;
  undefined8 ***local_e8 [3];
  ushort local_d0;
  byte local_c8;
  undefined1 local_c0 [24];
  longlong local_a8;
  undefined4 local_98;
  undefined1 local_90 [40];
  undefined4 local_68;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  uVar11 = 0;
  if (((param_1 == 0) || (param_2 == (longlong *)0x0)) || (param_3 == 0)) goto LAB_1488d880a;
  if ((param_4 == (undefined1 *)0x0) && (*(char *)(param_1 + 0x60) != '\0')) {
    uVar11 = 0;
    goto LAB_1488d880a;
  }
  local_90[0] = 0;
  local_68 = 0;
  FUN_1488dc622(local_90,param_2);
  if ((*(int *)(param_1 + 0x58) == 0) && (*(int *)(param_1 + 0x80) == 0)) {
    plVar9 = (longlong *)0x0;
LAB_1488d8875:
    uVar7 = FUN_1488c69ac(local_c0,param_2,param_1 + 0x28,param_4);
    if ((char)local_98 == '\x01') {
      local_128 = (undefined8 ****)0x0;
      plStack_120 = (longlong *)0x0;
      local_144 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),0xff);
      local_145 = -1;
      if (param_4 != (undefined1 *)0x0) {
        local_e8[0] = (undefined8 ****)0x0;
        lVar14 = FUN_1488c6656(param_2,param_4);
        local_144 = (undefined4)CONCAT71((int7)((ulonglong)lVar14 >> 8),0xff);
        if (lVar14 == 0) {
          local_145 = -1;
        }
        else {
          if (*(char *)(param_1 + 0x60) == '\x01') {
            FUN_140c65c56(lVar14 + 8,&local_118);
            plVar1 = plStack_110;
            plVar8 = plStack_120;
            local_128 = local_118;
            local_118 = (undefined8 ****)0x0;
            if (plStack_110 == plStack_120) {
LAB_1488d8ce3:
              plVar8 = plStack_110;
              if (plStack_110 != (longlong *)0x0) {
                LOCK();
                plVar1 = plStack_110 + 1;
                *(int *)plVar1 = (int)*plVar1 + -1;
                UNLOCK();
                if ((int)*plVar1 == 0) {
                  (**(code **)*plStack_110)(plStack_110);
                  LOCK();
                  piVar2 = (int *)((longlong)plVar8 + 0xc);
                  *piVar2 = *piVar2 + -1;
                  UNLOCK();
                  if (*piVar2 == 0) {
                    (**(code **)(*plVar8 + 0x10))(plVar8);
                  }
                }
              }
            }
            else {
              plStack_110 = (longlong *)0x0;
              plStack_120 = plVar1;
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
                goto LAB_1488d8ce3;
              }
            }
            uVar7 = FUN_1408403ca(local_90,&local_128);
            local_144 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),0xff);
          }
          cVar4 = *(char *)(lVar14 + 0xfd);
          local_145 = -1;
          if (cVar4 != -1) {
            uVar7 = (**(code **)(*param_2 + 0x18))(param_2,&local_118);
            local_144 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),0xff);
            local_145 = cVar4;
            if (plStack_110 != (longlong *)0x0 && (undefined8 ****)local_118 != (undefined8 ****)0x0
               ) {
              local_144 = (**(code **)(*plStack_110 + 0x80))(plStack_110,(int)cVar4);
            }
          }
        }
      }
      local_138 = 0;
      uStack_130 = 0;
      if ((longlong)*(int *)(param_1 + 0x70) != 0) {
        pcVar15 = *(char **)(param_1 + 0x68);
        lVar14 = (longlong)*(int *)(param_1 + 0x70) * 0xf0;
        local_140 = plVar9;
        do {
          local_118 = (undefined8 ****)0x0;
          plStack_110 = (longlong *)0x0;
          local_158 = (**(code **)(*param_2 + 8))(param_2);
          FUN_1488da384(pcVar15,&local_118,param_2,param_4);
          uVar11 = uStack_130;
          lVar12 = (longlong)(int)(uint)plStack_110;
          if (*pcVar15 == '\x01') {
            if ((uint)plStack_110 == 0) {
              FUN_141286ed4(local_118,0);
              if ((undefined8 ****)local_118 != (undefined8 ****)0x0) {
                FUN_1400020a8();
              }
              goto LAB_1488d8d8b;
            }
LAB_1488d8917:
            iVar6 = (int)uStack_130;
            lVar13 = (longlong)(int)uStack_130;
            uStack_130 = CONCAT44(uStack_130._4_4_,(uint)plStack_110 + (int)uStack_130);
            if ((uint)(uStack_130._4_4_ - iVar6) < (uint)plStack_110) {
              FUN_1465551ca(&local_138,uVar11 & 0xffffffff);
            }
            memmove((void *)(lVar13 * 0xd8 + local_138),local_118,lVar12 * 0xd8);
            plStack_110 = (longlong *)((ulonglong)plStack_110 & 0xffffffff00000000);
          }
          else if ((uint)plStack_110 != 0) goto LAB_1488d8917;
          FUN_141286ed4(local_118,0);
          if ((undefined8 ****)local_118 != (undefined8 ****)0x0) {
            FUN_1400020a8();
          }
          pcVar15 = pcVar15 + 0xf0;
          lVar14 = lVar14 + -0xf0;
          plVar9 = local_140;
        } while (lVar14 != 0);
      }
      if ((longlong)*(int *)(param_1 + 0x80) != 0) {
        param_4 = *(undefined1 **)(param_1 + 0x78);
        lVar14 = (longlong)*(int *)(param_1 + 0x80) * 0x60;
        do {
          local_118 = (undefined8 ***)((ulonglong)local_118 & 0xffffffffffffff00);
          local_f0 = 0;
          FUN_1488dc9d4(&local_118,plVar9);
          FUN_1448729ea(param_4 + 0x10,local_e8,&local_118);
          uVar5 = FUN_140103fe6(local_e8);
          pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_c8 * 0x120));
          if (pcVar3 != (code *)0x0) {
            ppppuVar10 = local_e8;
            if (0x18 < local_d0) {
              ppppuVar10 = (undefined8 ****)local_e8[0];
            }
            (*pcVar3)(ppppuVar10);
          }
          if (0x18 < local_d0) {
            FUN_1400020a8(local_e8[0]);
          }
          FUN_144a5ac3a(&local_118);
          (**(code **)(*plVar9 + 0x28))(plVar9,param_4,uVar5);
          param_4 = param_4 + 0x60;
          lVar14 = lVar14 + -0x60;
        } while (lVar14 != 0);
      }
      cVar4 = FUN_1488c633e(param_2,local_c0);
      if (cVar4 == '\0') {
LAB_1488d8d8b:
        uVar11 = 0;
      }
      else {
        if ((longlong)*(int *)(param_1 + 0x58) != 0) {
          lVar14 = *(longlong *)(param_1 + 0x50);
          lVar12 = (longlong)*(int *)(param_1 + 0x58) * 0x60;
          param_4 = local_90;
          do {
            FUN_1448729ea(lVar14 + 0x10,&local_118,param_4);
            iVar6 = FUN_140103fe6(&local_118);
            pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_f8 * 0x120));
            if (pcVar3 != (code *)0x0) {
              ppppuVar10 = &local_118;
              if (0x18 < local_100) {
                ppppuVar10 = (undefined8 ****)local_118;
              }
              (*pcVar3)(ppppuVar10);
            }
            if (0x18 < local_100) {
              FUN_1400020a8(local_118);
            }
            if (iVar6 != 0) {
              (**(code **)(*plVar9 + 0x30))(plVar9,lVar14,iVar6);
            }
            lVar14 = lVar14 + 0x60;
            lVar12 = lVar12 + -0x60;
          } while (lVar12 != 0);
        }
        uVar5 = local_144;
        uVar11 = CONCAT71((int7)((ulonglong)plVar9 >> 8),1);
        if ((longlong)(int)uStack_130 != 0) {
          lVar12 = (longlong)(int)uStack_130 * 0xd8;
          uVar16 = CONCAT71((int7)((ulonglong)param_4 >> 8),local_145);
          lVar14 = local_138;
          do {
            local_150 = 0;
            local_158 = CONCAT44(local_158._4_4_,0xffffffff);
            FUN_1488c68b6(param_3,lVar14,uVar16 & 0xffffffff,uVar5);
            lVar14 = lVar14 + 0xd8;
            lVar12 = lVar12 + -0xd8;
          } while (lVar12 != 0);
        }
      }
      FUN_141286ed4(local_138,uStack_130 & 0xffffffff);
      if (local_138 != 0) {
        FUN_1400020a8();
      }
      plVar8 = plStack_120;
      if (plStack_120 != (longlong *)0x0) {
        LOCK();
        plVar9 = plStack_120 + 1;
        *(int *)plVar9 = (int)*plVar9 + -1;
        UNLOCK();
        if ((int)*plVar9 == 0) {
          (**(code **)*plStack_120)(plStack_120);
          LOCK();
          piVar2 = (int *)((longlong)plVar8 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            (**(code **)(*plVar8 + 0x10))(plVar8);
          }
        }
      }
    }
    else {
      uVar11 = 0;
    }
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    local_c0[0] = 0;
    local_98 = 0;
    FUN_1488dc622(local_c0,param_2);
    plVar8 = (longlong *)FUN_1447262c2(local_c0);
    if (plVar8 == (longlong *)0x0) {
LAB_1488d8c22:
      FUN_144a5ac3a(local_c0);
    }
    else {
      uVar7 = FUN_140ac4d32();
      plVar8 = (longlong *)(**(code **)(*plVar8 + 0x288))(plVar8,uVar7);
      if (plVar8 == (longlong *)0x0) goto LAB_1488d8c22;
      uVar7 = FUN_140ac4d32();
      plVar9 = (longlong *)FUN_144718840(plVar8,uVar7);
      if (plVar8 == plVar9) goto LAB_1488d8c22;
      FUN_144a5ac3a(local_c0);
      if (plVar9 != (longlong *)0x0) goto LAB_1488d8875;
    }
    uVar11 = 0;
  }
  FUN_144a5ac3a(local_90);
LAB_1488d880a:
  if ((local_60 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar11 & 0xffffffff;
}



// FUNCTION 1488d8e12 FUN_1488d8e12 body=533 status=ok
// SIG undefined FUN_1488d8e12(void)

ulonglong FUN_1488d8e12(longlong param_1,longlong param_2,longlong param_3)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 ***pppuVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auStack_c8 [40];
  undefined8 **local_a0 [3];
  ushort local_88;
  byte local_80;
  undefined1 local_78 [24];
  longlong local_60;
  undefined4 local_50 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  if (param_2 != 0) {
    if (*(int *)(param_1 + 0x30) < 1) {
LAB_1488d8e4f:
      FUN_1488c69ac(local_78,param_2,param_1,0);
      uVar7 = CONCAT71((int7)((ulonglong)param_1 >> 8),(undefined1)local_50[0]);
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      goto LAB_1488d8f25;
    }
    local_78[0] = 0;
    local_50[0] = 0;
    FUN_1488dc622(local_78,param_2);
    plVar4 = (longlong *)FUN_1447262c2(local_78);
    if (plVar4 != (longlong *)0x0) {
      uVar5 = FUN_140ac4d32();
      plVar4 = (longlong *)(**(code **)(*plVar4 + 0x288))(plVar4,uVar5);
      if (plVar4 != (longlong *)0x0) {
        uVar5 = FUN_140ac4d32();
        plVar6 = (longlong *)FUN_144718840(plVar4,uVar5);
        if (plVar4 != plVar6) {
          FUN_144a5ac3a(local_78);
          if (plVar6 == (longlong *)0x0) goto LAB_1488d8f23;
          local_78[0] = 0;
          local_50[0] = 0;
          FUN_1488dc622(local_78,param_2);
          if (*(char *)(param_1 + 0x38) == '\x01') {
            cVar2 = FUN_1447f8eee(param_3);
            if (cVar2 != '\0') goto LAB_1488d8f19;
            FUN_1447f8f6a(local_78,param_3);
            FUN_14495544a(local_50,param_3 + 0x28);
          }
          if ((longlong)*(int *)(param_1 + 0x30) != 0) {
            lVar10 = *(longlong *)(param_1 + 0x28);
            lVar9 = (longlong)*(int *)(param_1 + 0x30) * 0x60;
            do {
              FUN_1448729ea(lVar10 + 0x10,local_a0,local_78);
              uVar3 = FUN_140103fe6(local_a0);
              pcVar1 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_80 * 0x120));
              if (pcVar1 != (code *)0x0) {
                pppuVar8 = local_a0;
                if (0x18 < local_88) {
                  pppuVar8 = (undefined8 ***)local_a0[0];
                }
                (*pcVar1)(pppuVar8);
              }
              if (0x18 < local_88) {
                FUN_1400020a8(local_a0[0]);
              }
              uVar7 = (**(code **)(*plVar6 + 0x18))(plVar6,lVar10);
              if (uVar7 < uVar3) goto LAB_1488d8f19;
              lVar10 = lVar10 + 0x60;
              lVar9 = lVar9 + -0x60;
            } while (lVar9 != 0);
          }
          FUN_144a5ac3a(local_78);
          goto LAB_1488d8e4f;
        }
      }
    }
LAB_1488d8f19:
    FUN_144a5ac3a(local_78);
  }
LAB_1488d8f23:
  uVar7 = 0;
LAB_1488d8f25:
  FUN_144a5ac3a(param_3);
  if ((local_48 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d9028 FUN_1488d9028 body=53 status=ok
// SIG undefined FUN_1488d9028(void)

undefined8 FUN_1488d9028(longlong param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_144837462(DAT_14cb84a90,param_1);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  return uVar1;
}



// FUNCTION 1488d905e FUN_1488d905e body=121 status=ok
// SIG undefined FUN_1488d905e(void)

void FUN_1488d905e(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  
  if (*(longlong *)(param_1 + 8) != 0) {
    if ((longlong)*(int *)(param_1 + 0x20) != 0) {
      lVar1 = 0;
      do {
        if (*(longlong *)(*(longlong *)(param_1 + 0x18) + lVar1) == 0) {
          return;
        }
        lVar1 = lVar1 + 8;
      } while ((longlong)*(int *)(param_1 + 0x20) * 8 != lVar1);
    }
    if (*(longlong *)(param_1 + 0x10) != 0) {
      lVar1 = FUN_143da445a();
      (**(code **)(*param_2 + 0x20))(param_2,0);
      param_2[1] = *(longlong *)(lVar1 + 8);
      FUN_1406022fe(param_2 + 2,lVar1 + 0x10);
      return;
    }
  }
  return;
}



// FUNCTION 1488d90d8 FUN_1488d90d8 body=601 status=ok
// SIG undefined FUN_1488d90d8(void)

longlong FUN_1488d90d8(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStack_c8 [32];
  longlong local_a8;
  ulonglong uStack_a0;
  undefined1 *local_98 [2];
  undefined ***local_88;
  undefined **local_78;
  code *local_70;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar8 = *(longlong *)(param_1 + 0xe0);
  if (lVar8 == 0) {
    local_88 = (undefined ***)0x0;
    local_78 = &PTR_LAB_14b406f80;
    local_70 = FUN_143dbc5fc;
    local_98[0] = &LAB_140255cce;
    local_a8 = 0;
    uStack_a0 = 0;
    lVar8 = 0;
    FUN_140255853(param_1 + 8,0,local_98,&local_a8);
    uVar6 = uStack_a0 & 0xffffffff;
    if (0 < (int)uStack_a0) {
      puVar3 = (undefined8 *)FUN_14001cc68(0x28,0x10);
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[1] = 0;
      *puVar3 = &PTR_FUN_14b18fbe0;
      puVar3[3] = 0;
      puVar3[4] = 0;
      puVar1 = *(undefined8 **)(param_1 + 0xe0);
      *(undefined8 **)(param_1 + 0xe0) = puVar3;
      if (puVar1 != (undefined8 *)0x0) {
        (**(code **)*puVar1)(puVar1,1);
      }
      lVar8 = local_a8;
      lVar7 = (longlong)(int)uStack_a0;
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        lVar9 = 0;
        do {
          lVar2 = *(longlong *)(lVar8 + lVar9);
          if (lVar2 != 0) {
            lVar4 = FUN_1488d9332(*(longlong *)(param_1 + 0xe0) + 0x18);
            if ((*(longlong *)(lVar4 + 8) != *(longlong *)(lVar2 + 0x30)) ||
               (*(int *)(lVar4 + 0x10) != *(int *)(lVar2 + 0x38))) {
              *(longlong *)(lVar4 + 8) = *(longlong *)(lVar2 + 0x30);
              *(undefined4 *)(lVar4 + 0x10) = *(undefined4 *)(lVar2 + 0x38);
              *(undefined8 *)(lVar4 + 0x18) = 0;
            }
            FUN_140d02432(lVar4 + 0x70,lVar2 + 0x48);
            if ((*(longlong *)(lVar4 + 0xc0) != *(longlong *)(lVar2 + 0x98)) ||
               (*(int *)(lVar4 + 200) != *(int *)(lVar2 + 0xa0))) {
              *(longlong *)(lVar4 + 0xc0) = *(longlong *)(lVar2 + 0x98);
              *(undefined4 *)(lVar4 + 200) = *(undefined4 *)(lVar2 + 0xa0);
              *(undefined8 *)(lVar4 + 0xd0) = 0;
            }
            if ((*(longlong *)(lVar4 + 0xd8) != *(longlong *)(lVar2 + 0xb0)) ||
               (*(int *)(lVar4 + 0xe0) != *(int *)(lVar2 + 0xb8))) {
              *(longlong *)(lVar4 + 0xd8) = *(longlong *)(lVar2 + 0xb0);
              *(undefined4 *)(lVar4 + 0xe0) = *(undefined4 *)(lVar2 + 0xb8);
              *(undefined8 *)(lVar4 + 0xe8) = 0;
            }
          }
          lVar9 = lVar9 + 0x10;
        } while (lVar7 * 0x10 != lVar9);
        uVar6 = uStack_a0 & 0xffffffff;
      }
      lVar8 = *(longlong *)(param_1 + 0xe0);
    }
    FUN_140255aed(local_a8,uVar6);
    if (local_a8 != 0) {
      FUN_1400020a8();
    }
    if (local_98[0] != (undefined1 *)0x0) {
      pppuVar5 = local_88;
      if (local_88 == (undefined ***)0x0) {
        pppuVar5 = &local_78;
      }
      (*(code *)(*pppuVar5)[2])();
    }
  }
  if ((local_50 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return lVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d9332 FUN_1488d9332 body=62 status=ok
// SIG undefined FUN_1488d9332(void)

longlong FUN_1488d9332(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_1488dc69a(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 0xf0 + *param_1;
  FUN_1488dc695(lVar2);
  return lVar2;
}



// FUNCTION 1488d9370 FUN_1488d9370 body=168 status=ok
// SIG undefined FUN_1488d9370(void)

longlong * FUN_1488d9370(longlong *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  param_2 = param_2 + 1;
  puVar1 = *(undefined4 **)param_1[1];
  if ((undefined4 *)((undefined8 *)param_1[1])[1] < puVar1 + 1) {
    if ((*(byte *)((longlong)param_1 + 0x2a) & 2) == 0) {
      (**(code **)(*param_1 + 0x170))(param_1,param_2,4);
    }
    else {
      FUN_14572512c(param_1,param_2);
    }
  }
  else {
    *param_2 = *puVar1;
    *(longlong *)param_1[1] = *(longlong *)param_1[1] + 4;
  }
  return param_1;
}



// FUNCTION 1488d9418 FUN_1488d9418 body=22 status=ok
// SIG undefined FUN_1488d9418(void)

undefined8 FUN_1488d9418(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  uint uVar6;
  uint *puVar7;
  longlong lVar8;
  undefined8 *puVar9;
  uint uVar10;
  longlong *plVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  
  plVar4 = DAT_14cb84ad8;
  if (DAT_14cb84ad8 == (longlong *)0x0) {
    return 0;
  }
  if (*(code **)(*DAT_14cb84ad8 + 0x300) == (code *)&LAB_144837a50) {
    if (((*(byte *)((longlong)DAT_14cb84ad8 + 0x154) & 1) == 0) ||
       ((int)DAT_14cb84ad8[0x3a] <= *(int *)((longlong)DAT_14cb84ad8 + 0x1fc))) {
LAB_144837614:
      lVar8 = FUN_144837648(plVar4,param_1,1);
      if (lVar8 == 0) {
        return 0;
      }
      FUN_14012a344(plVar4,lVar8,0);
      puVar9 = (undefined8 *)(lVar8 + 0x30);
      goto LAB_144837566;
    }
  }
  else {
    cVar5 = (**(code **)(*DAT_14cb84ad8 + 0x300))(DAT_14cb84ad8);
    if (cVar5 == '\0') goto LAB_144837614;
  }
  puVar7 = (uint *)&DAT_14c948618;
  if (((*param_1 != 0) && (0 < param_1[1])) && (*param_1 != DAT_14c948000)) {
    puVar7 = (uint *)(param_1 + 2);
    if (0 < param_1[9]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
    if (1 < (uint)param_1[1]) {
      puVar7 = *(uint **)(param_1 + 6);
    }
  }
  uVar2 = *puVar7;
  uVar3 = puVar7[2];
  uVar6 = uVar2;
  if (uVar3 != 0) {
    uVar6 = uVar3 >> 0xd ^ uVar2 - uVar3;
    uVar10 = uVar6 << 8 ^ (-0x61c88647 - uVar3) - uVar6;
    uVar13 = uVar10 >> 0xd ^ (uVar3 - uVar6) - uVar10;
    uVar6 = uVar13 >> 0xc ^ (uVar6 - uVar10) - uVar13;
    uVar15 = uVar6 << 0x10 ^ (uVar10 - uVar13) - uVar6;
    uVar10 = uVar15 >> 5 ^ (uVar13 - uVar6) - uVar15;
    uVar13 = uVar10 >> 3 ^ (uVar6 - uVar15) - uVar10;
    uVar6 = uVar13 << 10 ^ (uVar15 - uVar10) - uVar13;
    uVar6 = uVar6 >> 0xf ^ uVar10 - (uVar13 + uVar6);
  }
  if ((int)plVar4[0x3a] != *(int *)((longlong)plVar4 + 0x1fc)) {
    plVar11 = plVar4 + 0x40;
    if ((longlong *)plVar4[0x41] != (longlong *)0x0) {
      plVar11 = (longlong *)plVar4[0x41];
    }
    iVar12 = *(int *)((longlong)plVar11 + (ulonglong)((int)plVar4[0x42] - 1U & uVar6) * 4);
    if (iVar12 != -1) {
      lVar8 = plVar4[0x39];
      while ((lVar14 = (longlong)iVar12 * 0x20, *(uint *)(lVar8 + lVar14) != uVar2 ||
             (lVar1 = lVar8 + lVar14, *(uint *)(lVar1 + 8) != uVar3))) {
        iVar12 = *(int *)(lVar8 + 0x18 + lVar14);
        if (iVar12 == -1) {
          return 0;
        }
      }
      if (lVar1 == 0) {
        return 0;
      }
      puVar9 = (undefined8 *)(lVar1 + 0x10);
      if (puVar9 == (undefined8 *)0x0) {
        return 0;
      }
LAB_144837566:
      return *puVar9;
    }
  }
  return 0;
}



// FUNCTION 1488d942e FUN_1488d942e body=366 status=ok
// SIG undefined FUN_1488d942e(void)

undefined *
FUN_1488d942e(undefined **param_1,longlong *param_2,longlong *param_3,undefined **param_4)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [32];
  undefined *local_88;
  undefined *local_80;
  code *local_78 [2];
  undefined ***local_68;
  undefined **local_58;
  undefined **local_50;
  undefined **local_48;
  undefined **local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (longlong *)0x0) {
    if (param_1[0x1e] == (undefined *)0x0) {
      local_80 = (undefined *)0x0;
      local_88 = (undefined *)0x0;
      local_78[0] = (code *)0x0;
      local_68 = (undefined ***)FUN_14001cc68(0x28,8);
      *local_68 = &PTR_FUN_14b413400;
      local_68[1] = &local_80;
      local_68[2] = &local_88;
      local_68[3] = param_4;
      local_68[4] = param_1;
      if (local_68 + 1 != (undefined ***)0x0) {
        local_78[0] = FUN_143dbc63e;
      }
      (**(code **)(*param_2 + 0x60))(param_2,local_78);
      puVar3 = local_80;
      *param_3 = (longlong)local_88;
      if (local_78[0] != (code *)0x0) {
        pppuVar2 = local_68;
        if (local_68 == (undefined ***)0x0) {
          pppuVar2 = &local_58;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      goto LAB_1488d9480;
    }
    lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x1e);
    if (lVar1 != 0) {
      local_50 = &local_80;
      local_80 = (undefined *)0x0;
      local_68 = (undefined ***)0x0;
      local_58 = &PTR_LAB_14b413420;
      local_78[0] = FUN_143dbc770;
      local_48 = param_4;
      local_40 = param_1;
      FUN_1488c6230(lVar1);
      puVar3 = (undefined *)0x0;
      if (local_80 != (undefined *)0x0) {
        *param_3 = lVar1;
        puVar3 = local_80;
      }
      goto LAB_1488d9480;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_1488d9480:
  if ((local_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1488d959e thunk_FUN_1488d942e body=5 status=ok
// SIG undefined thunk_FUN_1488d942e(void)

undefined *
thunk_FUN_1488d942e(undefined **param_1,longlong *param_2,longlong *param_3,undefined **param_4)

{
  longlong lVar1;
  undefined ***pppuVar2;
  undefined *puVar3;
  undefined1 auStack_a8 [32];
  undefined *puStack_88;
  undefined *puStack_80;
  code *apcStack_78 [2];
  undefined ***pppuStack_68;
  undefined **ppuStack_58;
  undefined **ppuStack_50;
  undefined **ppuStack_48;
  undefined **ppuStack_40;
  ulonglong uStack_38;
  
  uStack_38 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_2 != (longlong *)0x0) {
    if (param_1[0x1e] == (undefined *)0x0) {
      puStack_80 = (undefined *)0x0;
      puStack_88 = (undefined *)0x0;
      apcStack_78[0] = (code *)0x0;
      pppuStack_68 = (undefined ***)FUN_14001cc68(0x28,8);
      *pppuStack_68 = &PTR_FUN_14b413400;
      pppuStack_68[1] = &puStack_80;
      pppuStack_68[2] = &puStack_88;
      pppuStack_68[3] = param_4;
      pppuStack_68[4] = param_1;
      if (pppuStack_68 + 1 != (undefined ***)0x0) {
        apcStack_78[0] = FUN_143dbc63e;
      }
      (**(code **)(*param_2 + 0x60))(param_2,apcStack_78);
      puVar3 = puStack_80;
      *param_3 = (longlong)puStack_88;
      if (apcStack_78[0] != (code *)0x0) {
        pppuVar2 = pppuStack_68;
        if (pppuStack_68 == (undefined ***)0x0) {
          pppuVar2 = &ppuStack_58;
        }
        (*(code *)(*pppuVar2)[2])();
      }
      goto LAB_1488d9480;
    }
    lVar1 = (**(code **)(*param_2 + 0x20))(param_2,param_1 + 0x1e);
    if (lVar1 != 0) {
      ppuStack_50 = &puStack_80;
      puStack_80 = (undefined *)0x0;
      pppuStack_68 = (undefined ***)0x0;
      ppuStack_58 = &PTR_LAB_14b413420;
      apcStack_78[0] = FUN_143dbc770;
      ppuStack_48 = param_4;
      ppuStack_40 = param_1;
      FUN_1488c6230(lVar1);
      puVar3 = (undefined *)0x0;
      if (puStack_80 != (undefined *)0x0) {
        *param_3 = lVar1;
        puVar3 = puStack_80;
      }
      goto LAB_1488d9480;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_1488d9480:
  if ((uStack_38 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}


