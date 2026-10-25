// batch file for Borderlands4.exe — decompiled pseudocode, blocks marked by // FUNCTION <entry> <name>

// FUNCTION 140426f90 FUN_140426f90 body=369 status=ok
// SIG undefined FUN_140426f90(void)

void FUN_140426f90(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0x68;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140427015;
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
LAB_140427015:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x68)) {
    uVar7 = uVar5 / 0x68 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x68,8);
  return;
}



// FUNCTION 140427102 FUN_140427102 body=333 status=ok
// SIG undefined FUN_140427102(void)

void FUN_140427102(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 0x68;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0x13b) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7ffffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14042716b;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7ffffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14042716b:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 / 0x68)) {
      uVar4 = uVar3 / 0x68 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,0x68,8);
  }
  return;
}



// FUNCTION 140427250 FUN_140427250 body=183 status=ok
// SIG undefined FUN_140427250(void)

undefined8 FUN_140427250(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  if (param_4 != 0) {
    lVar3 = 0;
    do {
      lVar1 = param_2 + lVar3;
      lVar2 = param_3 + lVar3;
      FUN_140427308(lVar1 + 8,lVar2 + 8);
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
      *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar2 + 0x28);
      *(undefined8 *)(lVar1 + 0x20) = *(undefined8 *)(lVar2 + 0x20);
      lVar1 = param_2 + 0x30 + lVar3;
      FUN_1447715ec(lVar1,param_3 + lVar3 + 0x30);
      *(undefined1 *)(lVar1 + 0x28) = *(undefined1 *)(param_3 + lVar3 + 0x58);
      FUN_140427366(param_3 + lVar3 + 0x60,param_2 + lVar3 + 0x60);
      *(undefined1 *)(param_2 + lVar3 + 0x90) = *(undefined1 *)(param_3 + lVar3 + 0x90);
      lVar3 = lVar3 + 0x98;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  return 1;
}



// FUNCTION 140427308 FUN_140427308 body=93 status=ok
// SIG undefined FUN_140427308(void)

undefined8 * FUN_140427308(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (param_1 != param_2) {
    FUN_1400fd473(*param_1,*(undefined4 *)(param_1 + 1));
    iVar1 = *(int *)(param_2 + 1);
    uVar2 = *param_2;
    *(int *)(param_1 + 1) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0xc) == 0) {
      *(undefined4 *)((longlong)param_1 + 0xc) = 0;
    }
    else {
      FUN_140427458(param_1,iVar1);
      FUN_14042740c(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 140427366 FUN_140427366 body=166 status=ok
// SIG undefined FUN_140427366(void)

void FUN_140427366(char *param_1,char *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  
  *param_2 = *param_1;
  *(undefined8 *)(param_2 + 4) = *(undefined8 *)(param_1 + 4);
  if ((*(longlong *)(param_2 + 0x10) != *(longlong *)(param_1 + 0x10)) ||
     (*(int *)(param_2 + 0x18) != *(int *)(param_1 + 0x18))) {
    *(longlong *)(param_2 + 0x10) = *(longlong *)(param_1 + 0x10);
    *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    param_2[0x20] = '\0';
    param_2[0x21] = '\0';
    param_2[0x22] = '\0';
    param_2[0x23] = '\0';
    param_2[0x24] = '\0';
    param_2[0x25] = '\0';
    param_2[0x26] = '\0';
    param_2[0x27] = '\0';
  }
  if ((*param_1 == '\x03') && (lVar2 = *(longlong *)(param_1 + 0x28), lVar2 != 0)) {
    uVar1 = FUN_14001cc68(0x38,0x10);
    FUN_14034cca6(uVar1,lVar2);
    lVar2 = *(longlong *)(param_2 + 0x28);
    *(undefined8 *)(param_2 + 0x28) = uVar1;
    if (lVar2 != 0) {
LAB_1404273f5:
      FUN_144a2da94(lVar2);
      FUN_1400020a8(lVar2);
      return;
    }
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x28);
    if (lVar2 != 0) {
      param_2[0x28] = '\0';
      param_2[0x29] = '\0';
      param_2[0x2a] = '\0';
      param_2[0x2b] = '\0';
      param_2[0x2c] = '\0';
      param_2[0x2d] = '\0';
      param_2[0x2e] = '\0';
      param_2[0x2f] = '\0';
      goto LAB_1404273f5;
    }
  }
  return;
}



// FUNCTION 14042740c FUN_14042740c body=76 status=ok
// SIG undefined FUN_14042740c(void)

void FUN_14042740c(undefined8 *param_1,longlong param_2,int param_3)

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



// FUNCTION 140427458 FUN_140427458 body=334 status=ok
// SIG undefined FUN_140427458(void)

void FUN_140427458(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404274ca;
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
LAB_1404274ca:
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



// FUNCTION 1404275a6 FUN_1404275a6 body=26 status=ok
// SIG undefined FUN_1404275a6(void)

void FUN_1404275a6(undefined8 param_1)

{
  FUN_1401b2056();
  FUN_1404275c0(param_1);
  return;
}



// FUNCTION 1404275c0 FUN_1404275c0 body=570 status=ok
// SIG undefined FUN_1404275c0(void)

void FUN_1404275c0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  wchar_t *local_58;
  code *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar3 = *(longlong *)(param_1 + 0x438);
  if (DAT_14c950c29 == '\x01') {
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      FUN_1456cec3c();
      lVar3 = *(longlong *)(param_1 + 0x438);
    }
  }
  *(longlong *)(param_1 + 0x440) = lVar3;
  plVar1 = *(longlong **)(param_1 + 0x430);
  if (plVar1 != (longlong *)0x0) {
    if (DAT_14cb22468 == 0) {
      local_40 = &local_20;
      local_20 = FUN_1449e2820;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_1427b09ee;
      local_48 = &LAB_147f2c44f;
      local_50 = FUN_146438a21;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10004001;
      local_70 = 8;
      local_78 = 0x28;
      FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
    }
    plVar1 = (longlong *)(**(code **)(*plVar1 + 0x288))(plVar1,DAT_14cb22468);
    if (plVar1 != (longlong *)0x0) {
      if (DAT_14cb22468 == 0) {
        local_40 = &local_20;
        local_20 = FUN_1449e2820;
        local_30 = FUN_14081d0ea;
        local_38 = FUN_1427b09ee;
        local_48 = &LAB_147f2c44f;
        local_50 = FUN_146438a21;
        local_58 = L"Engine";
        local_60 = 0;
        local_68 = 0x10004001;
        local_70 = 8;
        local_78 = 0x28;
        FUN_14081cfa3(L"/Script/GbxAI",L"GbxTerritoryProvider",&DAT_14cb22468,&DAT_147f2c44e);
      }
      plVar2 = (longlong *)FUN_144718840(plVar1,DAT_14cb22468);
      if ((plVar1 != plVar2) && (plVar2 != (longlong *)0x0)) {
        lVar3 = (**(code **)(*plVar2 + 0x10))(plVar2);
        if (lVar3 != 0) {
          if (DAT_14c950c29 == '\x01') {
            FUN_1456cec3c(lVar3);
          }
          *(longlong *)(param_1 + 0x440) = lVar3;
        }
      }
    }
  }
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404277fc FUN_1404277fc body=73 status=ok
// SIG undefined FUN_1404277fc(void)

longlong FUN_1404277fc(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = FUN_140427846();
  if (lVar1 == param_2) {
    lVar1 = *(longlong *)(param_1 + 0x400);
  }
  else {
    lVar1 = FUN_144862176(param_1 + 0x740,param_2);
    if (lVar1 == 0) {
      lVar1 = switchD_143c3d4dc::caseD_57(param_1,param_2);
      return lVar1;
    }
  }
  return lVar1;
}



// FUNCTION 140427846 FUN_140427846 body=228 status=ok
// SIG undefined FUN_140427846(void)

longlong FUN_140427846(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb697d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487558e3;
    local_40 = FUN_146521b4f;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"FactsSystemObject",&DAT_14cb697d8,&DAT_1487558e2);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb697d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042792c FUN_14042792c body=95 status=ok
// SIG undefined FUN_14042792c(void)

undefined8 FUN_14042792c(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x440);
  if (plVar2 != (longlong *)0x0) {
    uVar1 = FUN_1449a018c();
    plVar2 = (longlong *)(**(code **)(*plVar2 + 0x288))(plVar2,uVar1);
    if (plVar2 != (longlong *)0x0) {
      uVar1 = FUN_1449a018c();
      plVar3 = (longlong *)FUN_144718840(plVar2,uVar1);
      if ((plVar2 != plVar3) && (plVar3 != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140427987. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar1 = (**(code **)(*plVar3 + 0x10))(plVar3);
        return uVar1;
      }
    }
  }
  return 0;
}



// FUNCTION 14042798c FUN_14042798c body=63 status=ok
// SIG undefined FUN_14042798c(void)

undefined8 FUN_14042798c(longlong param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_140427846();
  if (lVar1 != param_2) {
    lVar1 = FUN_1404279cc();
    if (lVar1 != param_2) {
      uVar2 = switchD_143c3d4dc::caseD_57(param_1,param_2);
      return uVar2;
    }
  }
  return *(undefined8 *)(param_1 + 0x410);
}



// FUNCTION 1404279cc FUN_1404279cc body=228 status=ok
// SIG undefined FUN_1404279cc(void)

longlong FUN_1404279cc(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb6eed0 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1487a0f07;
    local_40 = FUN_14653ea93;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxGame",L"RefreshActor",&DAT_14cb6eed0,&DAT_1487a0f06);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb6eed0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140427ab2 FUN_140427ab2 body=65 status=ok
// SIG undefined FUN_140427ab2(void)

longlong FUN_140427ab2(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x28);
  if (lVar1 == 0) {
    FUN_1404275c0(param_1 + -0x418);
    if (*(longlong *)(param_1 + 0x28) == 0) {
      lVar1 = 0;
    }
    else {
      FUN_145c41650(param_1 + -0x418);
      lVar1 = *(longlong *)(param_1 + 0x28);
    }
  }
  return lVar1;
}



// FUNCTION 140427af4 FUN_140427af4 body=96 status=ok
// SIG undefined FUN_140427af4(void)

ulonglong FUN_140427af4(longlong param_1)

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
LAB_140427b37:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140427b37;
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



// FUNCTION 140427b54 FUN_140427b54 body=1124 status=ok
// SIG undefined FUN_140427b54(void)

void FUN_140427b54(longlong param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  int *piVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  longlong lVar9;
  float *pfVar10;
  int iVar11;
  longlong lVar12;
  float *pfVar13;
  longlong *plVar14;
  longlong lVar15;
  bool bVar16;
  float fVar17;
  undefined1 auStack_f8 [40];
  char local_d0 [8];
  longlong local_c8;
  longlong *local_c0;
  undefined8 local_b8;
  undefined1 local_b0;
  int local_a8;
  float local_a0;
  undefined4 uStack_9c;
  ushort local_88;
  byte local_80;
  float local_78;
  undefined4 uStack_74;
  ushort local_60;
  byte local_58;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_f8;
  lVar15 = *(longlong *)(param_2 + 0x40);
  if (lVar15 == 0) {
    lVar9 = 0;
    param_2 = 0;
  }
  else {
    if (*(int *)(lVar15 + 0x4c) == 0) {
LAB_140427ddf:
      lVar9 = 0;
    }
    else {
      uVar7 = *(uint *)(lVar15 + 0x48);
      lVar9 = 0;
      if ((-1 < (int)uVar7) && ((int)uVar7 < DAT_14c9647dc)) {
        plVar14 = (longlong *)
                  ((ulonglong)((uVar7 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar7 >> 0x10) * 8));
        if ((plVar14 == (longlong *)0x0) ||
           (((int)plVar14[2] != *(int *)(lVar15 + 0x4c) ||
            ((*(uint *)(plVar14 + 1) & 0x10200000) != 0)))) goto LAB_140427ddf;
        lVar9 = *plVar14;
      }
    }
    plVar14 = *(longlong **)(lVar15 + 0x118);
    if (plVar14 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar14 + 1) = (int)plVar14[1] + 1;
      UNLOCK();
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      LOCK();
      plVar1 = plVar14 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)*plVar14)(plVar14);
        LOCK();
        piVar2 = (int *)((longlong)plVar14 + 0xc);
        *piVar2 = *piVar2 + -1;
        UNLOCK();
        if (*piVar2 == 0) {
          (**(code **)(*plVar14 + 0x10))(plVar14);
        }
      }
      LOCK();
      *(int *)((longlong)plVar14 + 0xc) = *(int *)((longlong)plVar14 + 0xc) + 1;
      UNLOCK();
      bVar5 = false;
      local_c8 = param_2;
      local_c0 = plVar14;
      goto LAB_140427c2d;
    }
  }
  local_c0 = (longlong *)0x0;
  bVar5 = true;
  local_c8 = param_2;
LAB_140427c2d:
  plVar14 = local_c0;
  local_a8 = 0;
  local_d0[0] = '\x03';
  local_b8._0_4_ = 0;
  if (lVar9 == 0) {
    iVar6 = 0;
    uVar7 = (uint)local_b8;
  }
  else {
    uVar7 = *(uint *)(lVar9 + 0xc);
    local_b8 = (ulonglong)uVar7;
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
      iVar11 = DAT_14c964868 + 1;
      bVar16 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar6;
      if (bVar16) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar6 = *(int *)(lVar15 + 0x10);
      bVar16 = iVar6 == 0;
      if (bVar16) {
        *(int *)(lVar15 + 0x10) = iVar11;
        iVar6 = 0;
      }
      UNLOCK();
      uVar7 = (uint)local_b8;
      if (bVar16) {
        iVar6 = iVar11;
      }
    }
  }
  local_b8._0_4_ = uVar7;
  local_b8 = CONCAT44(iVar6,(uint)local_b8);
  local_b0 = 2;
  if (local_a8 != 0) {
    FUN_1417398fc(&DAT_14c9a3da0,local_a8 + -1,1);
    local_a8 = 0;
  }
  if (!bVar5) {
    LOCK();
    piVar2 = (int *)((longlong)plVar14 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*plVar14 + 0x10))(plVar14);
    }
  }
  pfVar10 = &local_a0;
  FUN_1447c3578(param_1 + 0x1d0,pfVar10,local_d0);
  if (local_80 == 3) {
    uVar7 = 3;
    fVar17 = local_a0;
  }
  else {
    pfVar13 = &local_78;
    FUN_1400b56fe(pfVar13,&local_a0,3);
    fVar17 = 0.0;
    if (local_58 != 0) {
      fVar17 = local_78;
    }
    pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)((uint)local_58 * 0x120));
    if (pcVar3 != (code *)0x0) {
      if (0x18 < local_60) {
        pfVar13 = (float *)CONCAT44(uStack_74,local_78);
      }
      (*pcVar3)(pfVar13);
    }
    if (0x18 < local_60) {
      FUN_1400020a8(CONCAT44(uStack_74,local_78));
    }
    uVar7 = (uint)local_80;
  }
  pcVar3 = *(code **)((longlong)&DAT_14c9a85d0 + (ulonglong)(uVar7 * 0x120));
  if (pcVar3 != (code *)0x0) {
    if (0x18 < local_88) {
      pfVar10 = (float *)CONCAT44(uStack_9c,local_a0);
    }
    (*pcVar3)(pfVar10);
  }
  if (0x18 < local_88) {
    FUN_1400020a8(CONCAT44(uStack_9c,local_a0));
  }
  lVar15 = DAT_14c9a3da0;
  if ((longlong)local_a8 != 0) {
    lVar12 = (longlong)local_a8 + -1;
    lVar9 = lVar12 * 0x10;
    FUN_1448176ff(*(undefined8 *)(DAT_14c9a3da0 + lVar9),*(undefined4 *)(DAT_14c9a3da0 + 8 + lVar9))
    ;
    if (*(longlong *)(lVar15 + lVar9) != 0) {
      FUN_1400020a8();
    }
    lVar15 = DAT_14c9a3da0;
    iVar6 = (int)lVar12;
    if (DAT_14c9a3dd4 != 0) {
      *(int *)(DAT_14c9a3da0 + (longlong)DAT_14c9a3dd0 * 0x10) = iVar6;
    }
    *(undefined4 *)(lVar15 + lVar9) = 0xffffffff;
    iVar11 = -1;
    if (0 < DAT_14c9a3dd4) {
      iVar11 = DAT_14c9a3dd0;
    }
    *(int *)(lVar15 + 4 + lVar9) = iVar11;
    DAT_14c9a3dd4 = DAT_14c9a3dd4 + 1;
    puVar8 = &DAT_14c9a3db0;
    if (DAT_14c9a3dc0 != (undefined *)0x0) {
      puVar8 = DAT_14c9a3dc0;
    }
    iVar11 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar11 = iVar6;
    }
    bVar4 = (byte)lVar12 & 0x1f;
    DAT_14c9a3dd0 = iVar6;
    *(uint *)(puVar8 + (longlong)(iVar11 >> 5) * 4) =
         *(uint *)(puVar8 + (longlong)(iVar11 >> 5) * 4) &
         (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
    local_a8 = 0;
  }
  if ((local_d0[0] == '\x03') && (local_c0 != (longlong *)0x0)) {
    LOCK();
    piVar2 = (int *)((longlong)local_c0 + 0xc);
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (*piVar2 == 0) {
      (**(code **)(*local_c0 + 0x10))();
    }
  }
  *(bool *)(param_3 + 0xa9) = 0.0 < fVar17;
  if ((local_50 ^ (ulonglong)auStack_f8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140427fba FUN_140427fba body=515 status=ok
// SIG undefined FUN_140427fba(void)

void FUN_140427fba(longlong param_1,undefined8 param_2)

{
  byte *pbVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  int iVar5;
  longlong lVar6;
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
  code *local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar2 = FUN_1404281d6(param_1 + -0x3c68);
  if (lVar2 != 0) {
    if (DAT_14cbbd498 == 0) {
      local_40 = &local_28;
      local_28 = FUN_140940982;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_146572ba2;
      local_48 = &LAB_148ca13ba;
      local_50 = &LAB_140e51436;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x1068;
      FUN_14081cfa3(L"/Script/OakGame",L"OakWeapon",&DAT_14cbbd498,FUN_14660ec2c);
    }
    if ((*(int *)(DAT_14cbbd498 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbbd498 + 0x38) * 8) == DAT_14cbbd498 + 0x30)) {
      lVar3 = FUN_1403ca35b();
      if (*(int *)(lVar3 + 0x168) != *(int *)(lVar3 + 0x194)) {
        lVar6 = lVar3 + 0x198;
        if (*(longlong *)(lVar3 + 0x1a0) != 0) {
          lVar6 = *(longlong *)(lVar3 + 0x1a0);
        }
        iVar5 = *(int *)(lVar6 + (ulonglong)
                                 (*(int *)(lVar3 + 0x1a8) - 1U & (uint)*(byte *)(lVar2 + 0xe39)) * 4
                        );
        if (iVar5 != -1) {
          do {
            pbVar1 = (byte *)(*(longlong *)(lVar3 + 0x160) + (longlong)iVar5 * 0x14);
            if (*pbVar1 == *(byte *)(lVar2 + 0xe39)) {
              if (pbVar1 != (byte *)0x0) {
                lVar3 = FUN_140316ff8();
                FUN_140428482(param_2,lVar3 + 0x288,pbVar1 + 4);
              }
              break;
            }
            iVar5 = *(int *)(pbVar1 + 0xc);
          } while (iVar5 != -1);
        }
      }
      if ((*(longlong *)(lVar2 + 0x3f0) != 0) && (lVar2 = FUN_140a2d0dc(), lVar2 != 0)) {
        uVar4 = FUN_1403ca35b();
        lVar2 = FUN_1404288c8(uVar4,lVar2);
        if (lVar2 != 0) {
          FUN_140316ff8();
                    /* WARNING: Subroutine does not return */
          FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_98);
        }
      }
    }
  }
  if ((local_20 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404281d6 FUN_1404281d6 body=327 status=ok
// SIG undefined FUN_1404281d6(void)

longlong FUN_1404281d6(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  uVar1 = FUN_14042831e();
  if (((-1 < (int)uVar1) && ((int)uVar1 < *(int *)(param_1 + 0x78f0))) &&
     (lVar2 = (ulonglong)uVar1 * 0x48 + *(longlong *)(param_1 + 0x78e8), lVar2 != 0)) {
    lVar3 = 0;
    if ((*(longlong *)(lVar2 + 0x20) == 0) || (*(longlong **)(lVar2 + 0x28) == (longlong *)0x0))
    goto LAB_14042825d;
    lVar3 = (**(code **)(**(longlong **)(lVar2 + 0x28) + 8))();
    if (lVar3 != 0) {
      if (DAT_14cb939a8 == 0) {
        local_30 = &local_18;
        local_18 = FUN_140940982;
        local_20 = FUN_14081d0ea;
        local_28 = &LAB_146522c26;
        local_38 = &LAB_148a0db91;
        local_40 = &LAB_146572ba7;
        local_48 = L"Engine";
        local_50 = 0;
        local_58 = 0x10000004;
        local_60 = 8;
        local_68 = 0xdd8;
        FUN_14081cfa3(L"/Script/GbxWeapon",L"Weapon",&DAT_14cb939a8,FUN_146572b80);
      }
      if ((*(int *)(DAT_14cb939a8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14cb939a8 + 0x38) * 8) == DAT_14cb939a8 + 0x30))
      goto LAB_14042825d;
    }
  }
  lVar3 = 0;
LAB_14042825d:
  if ((local_10 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042831e FUN_14042831e body=338 status=ok
// SIG undefined FUN_14042831e(void)

undefined4 FUN_14042831e(longlong *param_1)

{
  undefined4 uVar1;
  char cVar2;
  longlong lVar3;
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
  lVar3 = (**(code **)(*param_1 + 0x5e8))();
  if (lVar3 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = &LAB_1464f5fc4;
      local_48 = &LAB_148c3dd26;
      local_50 = &LAB_1459673ba;
      local_58 = L"Engine";
      local_60 = 0;
      local_68 = 0x10000004;
      local_70 = 0x10;
      local_78 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
    }
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(*(longlong *)(lVar3 + 0x10) + 0x38)) &&
       (*(longlong *)
         (*(longlong *)(*(longlong *)(lVar3 + 0x10) + 0x30) +
         (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8) == DAT_14cbae3d8 + 0x30)) {
      uVar1 = *(undefined4 *)(lVar3 + 0xce0);
      goto LAB_140428397;
    }
  }
  if ((longlong *)param_1[0x7ee] != (longlong *)0x0) {
    cVar2 = (**(code **)(*(longlong *)param_1[0x7ee] + 0x80))();
    if (cVar2 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_18 ^ (ulonglong)auStack_98);
    }
  }
  uVar1 = *(undefined4 *)((longlong)param_1 + 0x790c);
LAB_140428397:
  if ((local_18 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140428482 FUN_140428482 body=905 status=ok
// SIG undefined FUN_140428482(void)

void FUN_140428482(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  int iVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  undefined **ppuVar15;
  longlong lVar16;
  longlong lVar17;
  longlong local_78;
  
  lVar14 = param_2[1];
  if (lVar14 == 0) {
    uVar8 = FUN_140490c9a();
    lVar14 = FUN_14477b664(uVar8);
    param_2[1] = lVar14;
  }
  local_78 = *param_2;
  if (param_2[2] == 0) {
    if (lVar14 == 0) {
      return;
    }
    if (local_78 == 0) {
      return;
    }
    plVar2 = *(longlong **)(lVar14 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar5 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar5 == '\0')) {
      param_2[2] = 0;
      return;
    }
    uVar8 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar14 = FUN_144aff482(uVar8,param_2);
    param_2[2] = lVar14;
    if (lVar14 == 0) {
      return;
    }
    local_78 = *param_2;
    lVar14 = param_2[1];
  }
  uVar8 = FUN_14477b664(lVar14);
  lVar9 = FUN_14477b664(uVar8);
  lVar14 = *(longlong *)(param_1 + 0x2d8);
  if (*(longlong *)(param_1 + 0x2d8) == 0) {
    lVar14 = param_1 + 0x18;
  }
  iVar1 = *(int *)(param_1 + 0x2e0);
  if ((longlong)iVar1 != 0) {
    lVar17 = 8;
    lVar16 = 0;
    do {
      if (*(longlong *)(lVar14 + lVar17) == 0) {
        uVar8 = FUN_140490c9a();
        uVar8 = FUN_14477b664(uVar8);
        *(undefined8 *)(lVar14 + lVar17) = uVar8;
      }
      lVar10 = lVar9;
      if (lVar9 == 0) {
        lVar10 = FUN_140490c9a(0);
      }
      lVar10 = FUN_14477b664(lVar10);
      iVar6 = 0;
      if ((lVar10 != 0) && (plVar2 = *(longlong **)(lVar10 + 0xb8), plVar2 != (longlong *)0x0)) {
        lVar11 = *plVar2;
        pcVar3 = *(code **)(lVar11 + 0x108);
        if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
          cVar5 = (*pcVar3)(plVar2);
          iVar6 = 0;
          if (cVar5 == '\0') goto LAB_1404285a9;
          lVar11 = *plVar2;
        }
        pcVar3 = *(code **)(lVar11 + 0x110);
        ppuVar15 = &PTR_PTR_14c763408;
        if ((pcVar3 != (code *)&LAB_144783426) &&
           (ppuVar15 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
          ppuVar15 = (undefined **)(*pcVar3)(plVar2);
        }
        iVar6 = FUN_144aff48c(ppuVar15);
      }
LAB_1404285a9:
      lVar11 = *(longlong *)(lVar14 + -8 + lVar17);
      lVar4 = *(longlong *)(lVar14 + lVar17);
      iVar7 = 0;
      if ((lVar4 != 0) &&
         (plVar2 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar2 != (longlong *)0x0)) {
        lVar12 = *plVar2;
        pcVar3 = *(code **)(lVar12 + 0x108);
        if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
          cVar5 = (*pcVar3)(plVar2);
          if (cVar5 == '\0') goto LAB_140428612;
          lVar12 = *plVar2;
        }
        pcVar3 = *(code **)(lVar12 + 0x110);
        ppuVar15 = &PTR_PTR_14c763408;
        if ((pcVar3 != (code *)&LAB_144783426) &&
           (ppuVar15 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
          ppuVar15 = (undefined **)(*pcVar3)(plVar2);
        }
        iVar7 = FUN_144aff48c(ppuVar15);
      }
LAB_140428612:
      if ((iVar7 == iVar6) && (lVar11 == local_78)) {
        if (lVar4 == lVar10) {
LAB_1404286b9:
          if (lVar14 - lVar16 != 0) {
            puVar13 = (undefined8 *)((lVar14 - lVar16) + 0x18);
            goto LAB_1404286db;
          }
          break;
        }
        if ((lVar10 != 0) && (lVar4 != 0)) {
          iVar6 = *(int *)(lVar10 + 0x38);
          iVar7 = *(int *)(lVar4 + 0x38);
          if (((iVar6 <= iVar7) &&
              (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar10 + 0x30))
             || ((iVar7 <= iVar6 &&
                 (*(longlong *)(*(longlong *)(lVar10 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)
                 ))) goto LAB_1404286b9;
        }
      }
      lVar16 = lVar16 + -0x58;
      lVar17 = lVar17 + 0x58;
    } while ((longlong)iVar1 * -0x58 != lVar16);
  }
  puVar13 = (undefined8 *)FUN_14042880c(param_1 + 0x18,param_2);
LAB_1404286db:
  (*(code *)(&switchD_143c3d4dc::switchdataD_14aff4ad0)[*(byte *)(puVar13 + 7)])(puVar13);
  *puVar13 = *param_3;
  *(undefined1 *)(puVar13 + 7) = 5;
  return;
}



// FUNCTION 14042880c FUN_14042880c body=188 status=ok
// SIG undefined FUN_14042880c(void)

longlong FUN_14042880c(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  
  iVar2 = *(int *)(param_1 + 0x2c8);
  *(uint *)(param_1 + 0x2c8) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x2cc) < iVar2 + 1U) {
    FUN_140428d4a(param_1,iVar2);
  }
  lVar4 = *(longlong *)(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    lVar4 = param_1;
  }
  lVar5 = (longlong)iVar2 * 0x58;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = 0;
  *(undefined8 *)(lVar4 + lVar5) = 0;
  ((undefined8 *)(lVar4 + lVar5))[1] = 0;
  *(undefined8 *)(lVar4 + lVar5) = *param_2;
  uVar3 = FUN_14477b664(param_2[1]);
  uVar3 = FUN_14477b664(uVar3);
  *(undefined8 *)(lVar4 + 8 + lVar5) = uVar3;
  *(undefined8 *)(lVar4 + 0x10 + lVar5) = param_2[2];
  *(undefined1 *)(lVar4 + 0x50 + lVar5) = 0;
  *(undefined8 *)(lVar4 + 0x28 + lVar5) = 0;
  puVar1 = (undefined8 *)(lVar4 + 0x18 + lVar5);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar4 = *(longlong *)(param_1 + 0x2c0);
  if (*(longlong *)(param_1 + 0x2c0) == 0) {
    lVar4 = param_1;
  }
  return lVar4 + lVar5 + 0x18;
}



// FUNCTION 1404288c8 FUN_1404288c8 body=454 status=ok
// SIG undefined FUN_1404288c8(void)

longlong FUN_1404288c8(longlong param_1,longlong param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (param_2 == 0) {
    lVar5 = 0;
  }
  else {
    puVar9 = &DAT_14c9485f0;
    if (*(undefined4 **)(param_2 + 8) != (undefined4 *)0x0) {
      puVar9 = *(undefined4 **)(param_2 + 8);
    }
    if (DAT_14c947fe0 == 0) {
      lVar5 = FUN_14001cc68(0x140,0x10);
      FUN_1456b2032(lVar5);
      DAT_14c947fe0 = lVar5;
    }
    FUN_140045924(DAT_14c947fe0,&local_48,puVar9,1);
    local_40 = local_48;
    local_38 = 0;
    uStack_30 = 0;
    uVar3 = FUN_140428d10();
    uVar4 = FUN_14477b664(uVar3);
    uVar1 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
    uVar6 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    uVar6 = uVar6 >> 0x10 ^ uVar6;
    uVar1 = (uint)((ulonglong)local_48 >> 0x10);
    uVar8 = (uint)local_48 & 0xffff;
    uVar1 = uVar6 >> 0xd ^
            (((uint)local_48 << 0x10 | uVar8) + (int)((ulonglong)local_48 >> 0x20) +
             (uVar1 << 0x13 | uVar1 & 0xffff) + (uVar8 >> 4)) - uVar6;
    uVar8 = uVar1 << 8 ^ (-0x61c88647 - uVar6) - uVar1;
    uVar10 = uVar8 >> 0xd ^ (uVar6 - uVar1) - uVar8;
    uVar1 = uVar10 >> 0xc ^ (uVar1 - uVar8) - uVar10;
    uVar6 = uVar1 << 0x10 ^ (uVar8 - uVar10) - uVar1;
    uVar10 = uVar6 >> 5 ^ (uVar10 - uVar1) - uVar6;
    uVar8 = uVar10 >> 3 ^ (uVar1 - uVar6) - uVar10;
    uVar1 = uVar8 << 10 ^ (uVar6 - uVar10) - uVar8;
    iVar2 = FUN_140428a90((longlong *)(param_1 + 0x1b0),uVar1 >> 0xf ^ uVar10 - (uVar8 + uVar1),
                          &local_40);
    if (iVar2 == -1) {
      lVar7 = 0;
    }
    else {
      lVar7 = (longlong)iVar2 * 0x28 + *(longlong *)(param_1 + 0x1b0);
    }
    lVar5 = lVar7 + 0x18;
    if (lVar7 == 0) {
      lVar5 = 0;
    }
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140428a90 FUN_140428a90 body=639 status=ok
// SIG undefined FUN_140428a90(void)

int FUN_140428a90(longlong *param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  longlong *plVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 uVar12;
  undefined **ppuVar13;
  int iVar14;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar8 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar8 = (longlong *)param_1[8];
    }
    iVar14 = *(int *)((longlong)plVar8 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar14 != -1) {
      lVar9 = *param_1;
      do {
        plVar8 = (longlong *)(lVar9 + (longlong)iVar14 * 0x28);
        if (plVar8[1] == 0) {
          uVar12 = FUN_140428d10();
          lVar9 = FUN_14477b664(uVar12);
          plVar8[1] = lVar9;
        }
        lVar9 = param_3[1];
        if (lVar9 == 0) {
          lVar9 = FUN_140428d10();
        }
        lVar1 = *param_3;
        lVar9 = FUN_14477b664(lVar9);
        iVar6 = 0;
        if ((lVar9 != 0) && (plVar2 = *(longlong **)(lVar9 + 0xb8), plVar2 != (longlong *)0x0)) {
          lVar10 = *plVar2;
          pcVar3 = *(code **)(lVar10 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar2);
            iVar6 = 0;
            if (cVar5 == '\0') goto LAB_140428b88;
            lVar10 = *plVar2;
          }
          pcVar3 = *(code **)(lVar10 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar2);
          }
          iVar6 = FUN_144aff48c(ppuVar13);
        }
LAB_140428b88:
        lVar10 = *plVar8;
        lVar4 = plVar8[1];
        iVar7 = 0;
        if ((lVar4 != 0) &&
           (plVar8 = *(longlong **)(lVar4 + 0xb8), iVar7 = 0, plVar8 != (longlong *)0x0)) {
          lVar11 = *plVar8;
          pcVar3 = *(code **)(lVar11 + 0x108);
          if (pcVar3 != (code *)&LAB_14478342e && pcVar3 != (code *)&LAB_144783422) {
            cVar5 = (*pcVar3)(plVar8);
            if (cVar5 == '\0') goto LAB_140428bf0;
            lVar11 = *plVar8;
          }
          pcVar3 = *(code **)(lVar11 + 0x110);
          ppuVar13 = &PTR_PTR_14c763408;
          if ((pcVar3 != (code *)&LAB_144783426) &&
             (ppuVar13 = &PTR_PTR_14c75f798, pcVar3 != (code *)&LAB_144783432)) {
            ppuVar13 = (undefined **)(*pcVar3)(plVar8);
          }
          iVar7 = FUN_144aff48c(ppuVar13);
        }
LAB_140428bf0:
        if ((iVar7 == iVar6) && (lVar10 == lVar1)) {
          if (lVar4 == lVar9) {
            return iVar14;
          }
          if ((lVar9 != 0) && (lVar4 != 0)) {
            iVar6 = *(int *)(lVar9 + 0x38);
            iVar7 = *(int *)(lVar4 + 0x38);
            if ((iVar6 <= iVar7) &&
               (*(longlong *)(*(longlong *)(lVar4 + 0x30) + (longlong)iVar6 * 8) == lVar9 + 0x30)) {
              return iVar14;
            }
            if ((iVar7 <= iVar6) &&
               (*(longlong *)(*(longlong *)(lVar9 + 0x30) + (longlong)iVar7 * 8) == lVar4 + 0x30)) {
              return iVar14;
            }
          }
        }
        lVar9 = *param_1;
        iVar14 = *(int *)(lVar9 + 0x20 + (longlong)iVar14 * 0x28);
      } while (iVar14 != -1);
    }
  }
  return -1;
}



// FUNCTION 140428d10 FUN_140428d10 body=57 status=ok
// SIG undefined FUN_140428d10(void)

void FUN_140428d10(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6b6d8 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6b6d8 = FUN_140002ddd(FUN_14652c6eb,uVar1,L"ManufacturerDef");
  }
  return;
}



// FUNCTION 140428d4a FUN_140428d4a body=372 status=ok
// SIG undefined FUN_140428d4a(void)

void FUN_140428d4a(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar2 = *(uint *)(param_1 + 0x2c8);
  if ((int)uVar2 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(uVar2);
  }
  if (uVar2 < 9) {
    uVar6 = 8;
  }
  else {
    lVar3 = (longlong)(int)uVar2;
    if (8 < *(uint *)(param_1 + 0x2cc)) {
      lVar3 = lVar3 + ((ulonglong)(lVar3 * 3) >> 3) + 0x10;
    }
    uVar4 = lVar3 * 0x58;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar6 = uVar4 + 0xf;
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
        }
        else {
          if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
            bVar1 = (&DAT_14c841e00)[uVar6 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar1) {
              uVar5 = (ulonglong)bVar1;
            }
            uVar7 = 0x32 - (ulonglong)bVar1;
            do {
              uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140428dd1;
              lVar3 = uVar5 + 1 + uVar7;
              uVar7 = uVar7 - 1;
            } while (lVar3 != 0x33);
          }
          uVar4 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar4 = (ulonglong)DAT_14c841df8;
          }
          uVar4 = -uVar4 & ((uVar6 & 0xfffffffffffffff0) + uVar4) - 1;
        }
      }
      else {
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,0);
      }
    }
LAB_140428dd1:
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 / 0x58)) {
      uVar6 = uVar4 / 0x58 & 0xffffffff;
    }
  }
  *(int *)(param_1 + 0x2cc) = (int)uVar6;
  FUN_1408d8056(param_1,param_2,uVar6,0x58);
  return;
}



// FUNCTION 140428ebe FUN_140428ebe body=5390 status=ok
// SIG undefined FUN_140428ebe(void)

void FUN_140428ebe(ulonglong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  int *piVar1;
  undefined **ppuVar2;
  longlong *plVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ushort *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  DWORD DVar13;
  DWORD DVar14;
  longlong lVar15;
  uint *puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  longlong lVar22;
  ushort uVar23;
  longlong *plVar24;
  undefined8 *puVar25;
  ulonglong uVar26;
  longlong *plVar27;
  byte bVar28;
  PSRWLOCK pRVar29;
  ulonglong uVar30;
  ushort uVar31;
  int iVar32;
  int *piVar33;
  ulonglong uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined8 in_R10;
  uint uVar38;
  void *pvVar39;
  uint uVar40;
  longlong lVar41;
  bool bVar42;
  bool bVar43;
  undefined1 auStack_1f8 [40];
  longlong *local_1d0;
  PSRWLOCK local_1c8;
  ulonglong local_1c0;
  void *local_1b8;
  undefined4 local_1ac;
  ulonglong local_1a8;
  PSRWLOCK local_1a0;
  int *local_198;
  uint *local_190;
  ulonglong local_188;
  uint *local_180;
  undefined **local_178;
  undefined8 uStack_170;
  undefined4 local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined4 uStack_14c;
  longlong local_148;
  longlong lStack_140;
  undefined2 local_138;
  undefined4 local_134;
  undefined1 local_130;
  undefined4 local_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong *plStack_110;
  void *local_108;
  int local_100;
  int local_fc;
  longlong local_c8;
  longlong local_b0;
  undefined4 local_68;
  undefined4 uStack_64;
  int iStack_60;
  longlong local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_1f8;
  if ((*(int *)(param_1 + 0x208) == 0) ||
     (pvVar39 = *(void **)(param_1 + 0x288), pvVar39 == (void *)0x0)) goto LAB_14042963e;
  piVar33 = (int *)(param_1 + 0x208);
  local_1c0 = param_1;
  FUN_1448d5e3c(&local_178,piVar33);
  puVar5 = (undefined4 *)local_178[0x4c];
  pRVar29 = (PSRWLOCK)(puVar5 + 0x24);
  AcquireSRWLockShared(pRVar29);
  plVar24 = uStack_170;
  if (uStack_170 != (longlong *)0x0) {
    LOCK();
    plVar3 = uStack_170 + 1;
    *(int *)plVar3 = (int)*plVar3 + -1;
    UNLOCK();
    if ((int)*plVar3 == 0) {
      (**(code **)*uStack_170)(uStack_170);
      LOCK();
      piVar1 = (int *)((longlong)plVar24 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar24 + 0x10))(plVar24);
      }
    }
  }
  uVar26 = local_1c0;
  if (*(int *)((longlong)pvVar39 + 0xac) != puVar5[0x22]) {
    *(undefined4 *)((longlong)pvVar39 + 0xac) = puVar5[0x22];
    iVar20 = *(int *)(local_1c0 + 0x2b0);
    iVar11 = puVar5[1];
    if (iVar20 != iVar11) {
      *(undefined4 *)(local_1c0 + 0x2ac) = *puVar5;
      *(undefined4 *)(local_1c0 + 0x2b0) = puVar5[1];
    }
    uVar38 = *(uint *)(local_1c0 + 0x2b8);
    uVar12 = puVar5[3];
    uVar30 = (ulonglong)uVar12;
    if (uVar38 != uVar12) {
      *(undefined4 *)(local_1c0 + 0x2b4) = puVar5[2];
      param_4 = (ulonglong)(uint)puVar5[3];
      *(undefined4 *)(local_1c0 + 0x2b8) = puVar5[3];
    }
    iVar32 = *(int *)(local_1c0 + 0x2c0);
    iVar17 = puVar5[5];
    if (iVar32 != iVar17) {
      *(undefined4 *)(local_1c0 + 700) = puVar5[4];
      *(undefined4 *)(local_1c0 + 0x2c0) = puVar5[5];
    }
    iVar18 = *(int *)((longlong)pvVar39 + 0xb4);
    bVar42 = iVar18 != puVar5[7];
    if (bVar42) {
      *(undefined1 *)((longlong)pvVar39 + 0xb0) = *(undefined1 *)(puVar5 + 6);
      *(undefined4 *)((longlong)pvVar39 + 0xb4) = puVar5[7];
      *(undefined1 *)(local_1c0 + 0x29c) = 1;
      iVar18 = *(int *)((longlong)pvVar39 + 0xb4);
    }
    local_1c8 = (PSRWLOCK)
                CONCAT71(local_1c8._1_7_,
                         bVar42 || ((iVar20 != iVar11 || uVar38 != uVar12) || iVar32 != iVar17));
    bVar42 = iVar18 == 0 || *(char *)(puVar5 + 6) != *(char *)((longlong)pvVar39 + 0xb0);
    if (bVar42) {
      *(char *)((longlong)pvVar39 + 0xb0) = *(char *)(puVar5 + 6);
      *(int *)((longlong)pvVar39 + 0xb4) = iVar18 + 1;
    }
    iVar20 = *(int *)((longlong)pvVar39 + 0xc4);
    if (*(char *)(puVar5 + 10) == *(char *)((longlong)pvVar39 + 0xc0)) {
      param_4 = 0;
      uVar37 = 0;
      bVar43 = iVar20 == 0;
      iVar20 = 0;
      if (bVar43) goto LAB_14042996c;
    }
    else {
LAB_14042996c:
      *(char *)((longlong)pvVar39 + 0xc0) = *(char *)(puVar5 + 10);
      *(int *)((longlong)pvVar39 + 0xc4) = iVar20 + 1;
      uVar37 = (undefined4)CONCAT71((int7)(param_4 >> 8),1);
    }
    iVar20 = *(int *)((longlong)pvVar39 + 0xbc);
    if (*(char *)(puVar5 + 8) == *(char *)((longlong)pvVar39 + 0xb8)) {
      in_R10 = 0;
      uVar36 = 0;
      bVar43 = iVar20 == 0;
      iVar20 = 0;
      if (bVar43) goto LAB_140429986;
    }
    else {
LAB_140429986:
      *(char *)((longlong)pvVar39 + 0xb8) = *(char *)(puVar5 + 8);
      *(int *)((longlong)pvVar39 + 0xbc) = iVar20 + 1;
      uVar36 = (undefined4)CONCAT71((int7)((ulonglong)in_R10 >> 8),1);
    }
    iVar20 = *(int *)((longlong)pvVar39 + 0xf4);
    if (*(char *)(puVar5 + 0x20) == *(char *)((longlong)pvVar39 + 0xf0)) {
      uVar30 = 0;
      uVar35 = 0;
      bVar43 = iVar20 == 0;
      iVar20 = 0;
      if (bVar43) goto LAB_140429fac;
    }
    else {
LAB_140429fac:
      *(char *)((longlong)pvVar39 + 0xf0) = *(char *)(puVar5 + 0x20);
      *(int *)((longlong)pvVar39 + 0xf4) = iVar20 + 1;
      uVar35 = (undefined4)CONCAT71((int7)(uVar30 >> 8),1);
    }
    local_1d0 = (longlong *)((longlong)pvVar39 + 200);
    iVar20 = *(int *)((longlong)pvVar39 + 0xd0);
    iVar11 = puVar5[0xe] - puVar5[0x19];
    local_1b8 = pvVar39;
    local_1a0 = pRVar29;
    local_198 = piVar33;
    if (iVar20 == iVar11) {
      local_178 = (undefined **)0x0;
      uStack_170 = (longlong *)0x0;
      if (iVar20 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar20);
      }
      local_1a8 = CONCAT44(local_1a8._4_4_,uVar37);
      local_190 = (uint *)CONCAT44(local_190._4_4_,uVar35);
      local_1ac = uVar36;
      if (iVar20 != 0) {
        FUN_14042a632(&local_178);
      }
      puVar16 = puVar5 + 0x10;
      iVar20 = puVar5[0x16];
      local_188 = CONCAT71(local_188._1_7_,bVar42);
      uVar37 = local_1ac;
      if (iVar20 == 0) {
        uVar30 = 1;
        uVar26 = 0;
        iVar11 = 0;
        iVar32 = 0;
      }
      else {
        puVar21 = *(uint **)(puVar5 + 0x14);
        if (*(uint **)(puVar5 + 0x14) == (uint *)0x0) {
          puVar21 = puVar16;
        }
        uVar38 = *puVar21;
        if (uVar38 == 0) {
          iVar11 = iVar20 + 0x1e;
          if (-1 < iVar20 + -1) {
            iVar11 = iVar20 + -1;
          }
          uVar26 = 0;
          uVar30 = (ulonglong)(uint)(iVar11 >> 5);
          if (iVar11 >> 5 < 1) {
            uVar30 = uVar26;
          }
          iVar32 = 0;
          do {
            if (uVar30 == uVar26) goto LAB_140429247;
            iVar32 = iVar32 + 0x20;
            uVar38 = puVar21[uVar26 + 1];
            uVar26 = uVar26 + 1;
          } while (uVar38 == 0);
        }
        else {
          uVar26 = 0;
          iVar32 = 0;
        }
        uVar30 = (ulonglong)(-uVar38 & uVar38);
        uVar34 = uVar30 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar34 != 0) {
          for (; uVar34 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar11 = (iVar32 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if (iVar20 <= iVar11) {
          iVar11 = iVar20;
        }
      }
      if (iVar11 < iVar20) {
        uVar38 = 0xffffffff;
        do {
          plVar24 = uStack_170;
          lVar15 = *(longlong *)(puVar5 + 0xc);
          lVar41 = (longlong)(int)uStack_170;
          uVar12 = (int)uStack_170 + 1;
          uStack_170 = (longlong *)CONCAT44(uStack_170._4_4_,uVar12);
          if (uStack_170._4_4_ < uVar12) {
            local_180 = puVar16;
            FUN_148e77990(&local_178,(ulonglong)plVar24 & 0xffffffff);
            puVar16 = local_180;
            uVar37 = local_1ac;
          }
          lVar15 = (longlong)iVar11 * 0x30 + lVar15;
          uVar36 = *(undefined4 *)(lVar15 + 8);
          uVar35 = *(undefined4 *)(lVar15 + 0xc);
          uVar8 = *(undefined4 *)(lVar15 + 0x10);
          uVar9 = *(undefined4 *)(lVar15 + 0x14);
          puVar7 = *(undefined **)(lVar15 + 0x20);
          local_178[lVar41 * 4 + 2] = *(undefined **)(lVar15 + 0x18);
          (local_178 + lVar41 * 4 + 2)[1] = puVar7;
          ppuVar2 = local_178 + lVar41 * 4;
          *(undefined4 *)ppuVar2 = uVar36;
          *(undefined4 *)((longlong)ppuVar2 + 4) = uVar35;
          *(undefined4 *)(ppuVar2 + 1) = uVar8;
          *(undefined4 *)((longlong)ppuVar2 + 0xc) = uVar9;
          uVar38 = uVar38 & ~(uint)uVar30;
          puVar21 = *(uint **)(puVar5 + 0x14);
          if (*(uint **)(puVar5 + 0x14) == (uint *)0x0) {
            puVar21 = puVar16;
          }
          iVar20 = puVar5[0x16];
          iVar11 = (int)uVar26;
          lVar15 = (longlong)iVar11;
          uVar12 = puVar21[lVar15] & uVar38;
          if (uVar12 == 0) {
            iVar17 = iVar20 + 0x1e;
            if (-1 < iVar20 + -1) {
              iVar17 = iVar20 + -1;
            }
            iVar17 = iVar17 >> 5;
            iVar18 = iVar17;
            if (iVar17 < iVar11) {
              iVar18 = iVar11;
            }
            if (iVar17 <= iVar11) break;
            lVar41 = 0;
            while( true ) {
              iVar32 = iVar32 + 0x20;
              uVar12 = puVar21[lVar15 + lVar41 + 1];
              if (uVar12 != 0) break;
              lVar41 = lVar41 + 1;
              if (iVar18 - lVar15 == lVar41) goto LAB_140429247;
            }
            uVar26 = (ulonglong)(iVar11 + (int)lVar41 + 1);
            uVar38 = 0xffffffff;
          }
          uVar30 = (ulonglong)(-uVar12 & uVar12);
          uVar34 = uVar30 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar34 != 0) {
            for (; uVar34 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          iVar11 = (iVar32 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        } while (iVar11 < iVar20);
      }
LAB_140429247:
      pvVar39 = local_1b8;
      uVar26 = local_1c0;
      if ((int)uStack_170 != *(int *)((longlong)local_1b8 + 0xd0)) {
        pRVar29 = local_1a0;
        piVar33 = local_198;
        if (local_178 != (undefined **)0x0) {
          FUN_1400020a8();
          pRVar29 = local_1a0;
          piVar33 = local_198;
          uVar26 = local_1c0;
        }
        goto LAB_14042938a;
      }
      bVar28 = (byte)local_1c8 | (byte)local_1a8;
      if (0 < (int)uStack_170) {
        lVar41 = 0;
        lVar15 = 0;
        do {
          cVar10 = FUN_14042a434(uVar26,(longlong)local_178 + lVar41);
          if ((cVar10 != '\0') &&
             (puVar6 = *(ushort **)((longlong)pvVar39 + 0x80), puVar6 != (ushort *)0x0)) {
            *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)((longlong)pvVar39 + 0x78) & 0x3f));
          }
          lVar15 = lVar15 + 1;
          lVar41 = lVar41 + 0x20;
        } while (lVar15 < *(int *)((longlong)pvVar39 + 0xd0));
      }
      bVar28 = bVar28 | (byte)uVar37 | (byte)local_190;
      if (local_178 != (undefined **)0x0) {
        FUN_1400020a8();
      }
      bVar28 = (byte)local_188 | bVar28;
      pRVar29 = local_1a0;
      piVar33 = local_198;
    }
    else {
      if (iVar11 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar11);
      }
      if (*(int *)((longlong)pvVar39 + 0xd4) < iVar11) {
        FUN_14570e6d8(local_1d0,iVar11);
      }
      else {
        FUN_14042ab82(*(undefined8 *)((longlong)pvVar39 + 200));
        *(undefined4 *)((longlong)pvVar39 + 0xd0) = 0;
      }
      local_190 = puVar5 + 0x10;
      uVar38 = puVar5[0x16];
      if (uVar38 == 0) {
        uVar34 = 1;
        uVar30 = 0;
        uVar12 = 0;
        iVar20 = 0;
      }
      else {
        puVar16 = *(uint **)(puVar5 + 0x14);
        if (*(uint **)(puVar5 + 0x14) == (uint *)0x0) {
          puVar16 = local_190;
        }
        uVar12 = *puVar16;
        if (uVar12 == 0) {
          iVar20 = uVar38 + 0x1e;
          if (-1 < (int)(uVar38 - 1)) {
            iVar20 = uVar38 - 1;
          }
          uVar30 = 0;
          uVar34 = (ulonglong)(uint)(iVar20 >> 5);
          if (iVar20 >> 5 < 1) {
            uVar34 = uVar30;
          }
          iVar20 = 0;
          do {
            if (uVar34 == uVar30) goto LAB_140429965;
            iVar20 = iVar20 + 0x20;
            uVar12 = puVar16[uVar30 + 1];
            uVar30 = uVar30 + 1;
          } while (uVar12 == 0);
        }
        else {
          uVar30 = 0;
          iVar20 = 0;
        }
        uVar34 = (ulonglong)(-uVar12 & uVar12);
        uVar4 = uVar34 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar12 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        if ((int)uVar38 <= (int)uVar12) {
          uVar12 = uVar38;
        }
      }
      pRVar29 = local_1a0;
      piVar33 = local_198;
      if (uVar12 != uVar38) {
        uVar40 = 0xffffffff;
        local_1a8 = (ulonglong)uVar38;
        do {
          local_1c8 = (PSRWLOCK)CONCAT44(local_1c8._4_4_,iVar20);
          lVar15 = *(longlong *)(puVar5 + 0xc);
          iVar20 = *(int *)((longlong)pvVar39 + 0xd0);
          *(uint *)((longlong)pvVar39 + 0xd0) = iVar20 + 1U;
          local_188 = uVar30;
          if (*(uint *)((longlong)pvVar39 + 0xd4) < iVar20 + 1U) {
            FUN_148e778fc(local_1d0,iVar20);
          }
          lVar41 = (longlong)iVar20 * 0x110 + *local_1d0;
          FUN_14042a706(lVar41);
          FUN_14042a7f6(&local_178,lVar41);
          FUN_14042a434(uVar26,lVar15 + (longlong)(int)uVar12 * 0x30 + 8,&local_178);
          local_178 = &PTR_FUN_14b8a2700;
          if (local_b0 != 0) {
            FUN_1400020a8();
          }
          puVar16 = local_190;
          pvVar39 = local_1b8;
          if (local_c8 != 0) {
            FUN_1400020a8();
          }
          local_178 = &PTR_FUN_14b473650;
          if (plStack_110 != (longlong *)0x0) {
            LOCK();
            piVar33 = (int *)((longlong)plStack_110 + 0xc);
            *piVar33 = *piVar33 + -1;
            UNLOCK();
            if (*piVar33 == 0) {
              (**(code **)(*plStack_110 + 0x10))();
            }
          }
          uVar30 = local_188;
          if (lStack_140 != 0) {
            FUN_1400020a8();
          }
          iVar20 = (int)local_1c8;
          if (CONCAT44(uStack_14c,
                       CONCAT13(uStack_14d,CONCAT12(uStack_14e,CONCAT11(uStack_14f,local_150)))) !=
              0) {
            FUN_1400020a8();
            iVar20 = (int)local_1c8;
          }
          if (CONCAT44(uStack_15c,local_160) != 0) {
            FUN_1400020a8();
            iVar20 = (int)local_1c8;
          }
          if (uStack_170 != (longlong *)0x0) {
            FUN_1400020a8();
            iVar20 = (int)local_1c8;
          }
          uVar40 = uVar40 & ~(uint)uVar34;
          puVar21 = *(uint **)(puVar5 + 0x14);
          if (*(uint **)(puVar5 + 0x14) == (uint *)0x0) {
            puVar21 = puVar16;
          }
          uVar38 = puVar5[0x16];
          iVar11 = (int)uVar30;
          lVar15 = (longlong)iVar11;
          uVar12 = puVar21[lVar15] & uVar40;
          if (uVar12 == 0) {
            iVar32 = uVar38 + 0x1e;
            if (-1 < (int)(uVar38 - 1)) {
              iVar32 = uVar38 - 1;
            }
            iVar32 = iVar32 >> 5;
            iVar20 = iVar20 + 0x20;
            iVar17 = iVar32;
            if (iVar32 < iVar11) {
              iVar17 = iVar11;
            }
            if (iVar11 < iVar32) {
              lVar41 = 0;
              do {
                uVar12 = puVar21[lVar15 + lVar41 + 1];
                if (uVar12 != 0) {
                  uVar30 = (ulonglong)(iVar11 + (int)lVar41 + 1);
                  uVar40 = 0xffffffff;
                  goto LAB_1404298eb;
                }
                iVar20 = iVar20 + 0x20;
                lVar41 = lVar41 + 1;
              } while (iVar17 - lVar15 != lVar41);
              uVar40 = 0xffffffff;
              iVar11 = iVar17;
            }
            uVar30 = (ulonglong)(iVar11 + 1);
            pvVar39 = local_1b8;
            uVar26 = local_1c0;
            uVar12 = uVar38;
          }
          else {
LAB_1404298eb:
            uVar34 = (ulonglong)(-uVar12 & uVar12);
            uVar4 = uVar34 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar4 != 0) {
              for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            uVar12 = (iVar20 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if ((int)uVar38 <= (int)uVar12) {
              uVar12 = uVar38;
            }
          }
          pRVar29 = local_1a0;
          piVar33 = local_198;
        } while (uVar12 != (uint)local_1a8);
      }
LAB_140429965:
      bVar28 = 1;
    }
    if (((((*(int *)(uVar26 + 0x34) == 0) || (uVar38 = *(uint *)(uVar26 + 0x30), (int)uVar38 < 0))
         || (DAT_14c9647dc <= (int)uVar38)) ||
        ((plVar24 = (longlong *)
                    ((ulonglong)((uVar38 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar38 >> 0x10) * 8)),
         plVar24 == (longlong *)0x0 || ((int)plVar24[2] != *(int *)(uVar26 + 0x34))))) ||
       ((*(uint *)(plVar24 + 1) & 0x10200000) != 0)) {
LAB_140429382:
      if (bVar28 == 0) goto LAB_14042938a;
    }
    else {
      if ((*(uint *)(plVar24 + 1) & 0x10200000) == 0) {
        lVar15 = *plVar24;
      }
      else {
        lVar15 = 0;
      }
      cVar10 = FUN_140426394(lVar15 + 0x3c0,&DAT_14cbd95b0);
      if (*(char *)((longlong)pvVar39 + 0xe8) == cVar10) {
        if (*(int *)((longlong)pvVar39 + 0xec) != 0) goto LAB_140429382;
        iVar20 = 1;
      }
      else {
        iVar20 = *(int *)((longlong)pvVar39 + 0xec) + 1;
      }
      *(char *)((longlong)pvVar39 + 0xe8) = cVar10;
      *(int *)((longlong)pvVar39 + 0xec) = iVar20;
      uVar26 = local_1c0;
    }
    puVar6 = *(ushort **)((longlong)pvVar39 + 0x80);
    if (puVar6 != (ushort *)0x0) {
      *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)((longlong)pvVar39 + 0x78) & 0x3f));
    }
  }
LAB_14042938a:
  ReleaseSRWLockShared(pRVar29);
  lVar15 = DAT_14cbdbb28;
  if ((*piVar33 != 0) && (lVar41 = *(longlong *)(uVar26 + 0x288), lVar41 != 0)) {
    iVar20 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8)
                     + 0xc60);
    if (iVar20 == 0x40000002) {
      uVar30 = 0;
    }
    else {
      bVar42 = true;
      if ((DAT_14c86a9f8 == '\x01') && (iVar20 != 2)) {
        if (iVar20 == 1) {
          DVar13 = FUN_140ad26c0();
          DVar14 = GetCurrentThreadId();
          bVar42 = DVar13 == DVar14;
        }
        else {
          bVar42 = false;
        }
      }
      uVar30 = (ulonglong)(bVar42 ^ 1);
    }
    if (*(char *)(lVar15 + uVar30) == '\0') {
      if (0 < *(int *)(lVar41 + 0xe0)) {
        iVar20 = *(int *)(lVar41 + 0xe4);
        FUN_14042a3cd(*(undefined8 *)(lVar41 + 0xd8));
        *(undefined4 *)(lVar41 + 0xe0) = 0;
        if ((iVar20 < 0) && (*(int *)(lVar41 + 0xe4) != 0)) {
          FUN_145707740(lVar41 + 0xd8);
        }
        puVar6 = *(ushort **)(lVar41 + 0x80);
        if (puVar6 != (ushort *)0x0) {
          *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar41 + 0x78) & 0x3f));
        }
      }
    }
    else {
      FUN_1448d5e3c(&local_178,piVar33);
      puVar7 = local_178[0x48];
      pRVar29 = (PSRWLOCK)(puVar7 + 0xa0);
      AcquireSRWLockShared(pRVar29);
      plVar24 = uStack_170;
      if (uStack_170 != (longlong *)0x0) {
        LOCK();
        plVar3 = uStack_170 + 1;
        *(int *)plVar3 = (int)*plVar3 + -1;
        UNLOCK();
        if ((int)*plVar3 == 0) {
          (**(code **)*uStack_170)(uStack_170);
          LOCK();
          piVar33 = (int *)((longlong)plVar24 + 0xc);
          *piVar33 = *piVar33 + -1;
          UNLOCK();
          if (*piVar33 == 0) {
            (**(code **)(*plVar24 + 0x10))(plVar24);
          }
        }
      }
      bVar28 = *(byte *)(uVar26 + 0x29c);
      uVar30 = (ulonglong)bVar28;
      if ((*(int *)(uVar26 + 0x298) != *(int *)(puVar7 + 0x98)) || ((bVar28 & 1) != 0)) {
        *(int *)(uVar26 + 0x298) = *(int *)(puVar7 + 0x98);
        *(undefined1 *)(uVar26 + 0x29c) = 0;
        if (*(char *)(lVar41 + 0xb0) == '\x01') {
          local_58 = 0;
          uStack_50 = 0;
          iVar20 = *(int *)(puVar7 + 0x70);
          uStack_50._0_4_ = 0;
          local_1c0 = CONCAT71(local_1c0._1_7_,bVar28);
          if (iVar20 == 0) {
            uVar26 = 1;
            uVar30 = 0;
            iVar11 = 0;
            iVar32 = 0;
          }
          else {
            puVar16 = *(uint **)(puVar7 + 0x68);
            if (*(uint **)(puVar7 + 0x68) == (uint *)0x0) {
              puVar16 = (uint *)(puVar7 + 0x58);
            }
            uVar38 = *puVar16;
            if (uVar38 == 0) {
              iVar11 = iVar20 + 0x1e;
              if (-1 < iVar20 + -1) {
                iVar11 = iVar20 + -1;
              }
              uVar30 = 0;
              uVar26 = (ulonglong)(uint)(iVar11 >> 5);
              if (iVar11 >> 5 < 1) {
                uVar26 = uVar30;
              }
              iVar32 = 0;
              do {
                if (uVar26 == uVar30) {
                  uStack_50._0_4_ = 0;
                  goto LAB_1404295e5;
                }
                iVar32 = iVar32 + 0x20;
                uVar38 = puVar16[uVar30 + 1];
                uVar30 = uVar30 + 1;
              } while (uVar38 == 0);
            }
            else {
              uVar30 = 0;
              iVar32 = 0;
            }
            uVar26 = (ulonglong)(-uVar38 & uVar38);
            uVar34 = uVar26 * 2 + 1;
            lVar15 = 0x3f;
            if (uVar34 != 0) {
              for (; uVar34 >> lVar15 == 0; lVar15 = lVar15 + -1) {
              }
            }
            iVar11 = (iVar32 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
            if (iVar20 <= iVar11) {
              iVar11 = iVar20;
            }
          }
          if (iVar11 != iVar20) {
            uVar38 = 0xffffffff;
            iVar17 = iVar20;
            local_1c8 = pRVar29;
            do {
              lVar15 = *(longlong *)(*(longlong *)(puVar7 + 0x48) + 8 + (longlong)iVar11 * 0x58);
              if ((lVar15 != 0) && (*(char *)(lVar15 + 0x120) == '\x01')) {
                local_1d0 = (longlong *)(*(longlong *)(puVar7 + 0x48) + (longlong)iVar11 * 0x58 + 8)
                ;
                local_168 = 0;
                local_178 = (undefined **)0x0;
                uStack_170 = (longlong *)0x0;
                local_160 = (undefined4)DAT_14c8463f0;
                uStack_15c = DAT_14c8463f0._4_4_;
                uStack_158 = (undefined4)DAT_14c8463f8;
                uStack_154 = DAT_14c8463f8._4_4_;
                local_150 = 1;
                local_134 = 0;
                local_130 = 0;
                uStack_14f = 0;
                uStack_14e = 0;
                uStack_14d = 0;
                uStack_14c._0_1_ = 0;
                local_148 = 0;
                lStack_140 = 0;
                local_138 = 0;
                local_12c = 4;
                local_128 = 0;
                uStack_120 = 0;
                local_118 = 0;
                plStack_110 = (longlong *)0x0;
                FUN_1400b22c2(&local_108,&DAT_149e02088);
                FUN_140390f7a(*local_1d0 + 0x18,&local_178);
                local_160 = (undefined4)local_1d0[6];
                uStack_15c = *(undefined4 *)((longlong)local_1d0 + 0x34);
                uStack_158 = (undefined4)local_1d0[7];
                uStack_154 = *(undefined4 *)((longlong)local_1d0 + 0x3c);
                local_130 = *(undefined1 *)((longlong)local_1d0 + 0xc);
                local_138 = CONCAT11(local_138._1_1_,*(undefined1 *)((longlong)local_1d0 + 0xd));
                uStack_14c = CONCAT31(uStack_14c._1_3_,*(undefined1 *)((longlong)local_1d0 + 0xb));
                local_12c = (undefined4)local_1d0[3];
                FUN_1400021e4((longlong)local_1d0 + 0x1c,&local_68);
                if (local_128 != 0) {
                  FUN_1400020a8();
                }
                local_128 = CONCAT44(uStack_64,local_68);
                uStack_120._0_4_ = iStack_60;
                FUN_1400021e4((longlong)local_1d0 + 0x24);
                if (local_118 != 0) {
                  FUN_1400020a8();
                }
                local_118 = CONCAT44(uStack_64,local_68);
                local_150 = (undefined1)local_1d0[1];
                uStack_14f = *(undefined1 *)((longlong)local_1d0 + 9);
                uStack_14e = *(undefined1 *)((longlong)local_1d0 + 10);
                if (1 < (int)uStack_120) {
                  uStack_14d = 1;
                }
                if (5.0 < *(float *)(local_1d0 + 2)) {
                  if (*(float *)((longlong)local_1d0 + 0x14) <= 15.0) {
                    if (-15.0 <= *(float *)((longlong)local_1d0 + 0x14)) {
                      puVar25 = &DAT_14cbdacc8;
                    }
                    else {
                      puVar25 = &DAT_14cbdacd8;
                    }
                  }
                  else {
                    puVar25 = &DAT_14cbdacb8;
                  }
                  FUN_144a787a6(&local_108,puVar25);
                }
                else {
                  local_100 = DAT_14cbdacd0;
                  if (DAT_14cbdacd0 == 0 && local_fc == 0) {
                    local_fc = 0;
                  }
                  else {
                    local_1b8 = DAT_14cbdacc8;
                    local_1d0 = (longlong *)(longlong)DAT_14cbdacd0;
                    FUN_1446dd670(&local_108);
                    if ((int)local_1d0 != 0) {
                      memcpy(local_108,local_1b8,(longlong)local_1d0 * 2);
                    }
                  }
                }
                plVar24 = (longlong *)(longlong)(int)uStack_50;
                uVar12 = (int)uStack_50 + 1;
                uStack_50 = CONCAT44(uStack_50._4_4_,uVar12);
                if (uStack_50._4_4_ < uVar12) {
                  local_1d0 = plVar24;
                  FUN_14039166c(&local_58,plVar24);
                  plVar24 = local_1d0;
                }
                FUN_140391044((longlong)plVar24 * 0x80 + local_58,&local_178);
                if (local_108 != (void *)0x0) {
                  FUN_1400020a8();
                }
                if (local_118 != 0) {
                  FUN_1400020a8();
                }
                if (local_128 != 0) {
                  FUN_1400020a8();
                }
                if (local_148 != 0) {
                  FUN_1400020a8();
                }
                if (local_178 != (undefined **)0x0) {
                  FUN_1400020a8();
                }
                iVar17 = *(int *)(puVar7 + 0x70);
              }
              uVar38 = uVar38 & ~(uint)uVar26;
              puVar16 = *(uint **)(puVar7 + 0x68);
              if (*(uint **)(puVar7 + 0x68) == (uint *)0x0) {
                puVar16 = (uint *)(puVar7 + 0x58);
              }
              iVar11 = (int)uVar30;
              lVar15 = (longlong)iVar11;
              uVar12 = puVar16[lVar15] & uVar38;
              if (uVar12 == 0) {
                iVar18 = iVar17 + 0x1e;
                if (-1 < iVar17 + -1) {
                  iVar18 = iVar17 + -1;
                }
                iVar18 = iVar18 >> 5;
                iVar32 = iVar32 + 0x20;
                iVar19 = iVar18;
                if (iVar18 < iVar11) {
                  iVar19 = iVar11;
                }
                if (iVar11 < iVar18) {
                  lVar22 = 0;
                  do {
                    uVar12 = puVar16[lVar15 + lVar22 + 1];
                    if (uVar12 != 0) {
                      uVar30 = (ulonglong)(iVar11 + (int)lVar22 + 1);
                      uVar38 = 0xffffffff;
                      goto LAB_1404295af;
                    }
                    iVar32 = iVar32 + 0x20;
                    lVar22 = lVar22 + 1;
                  } while (iVar19 - lVar15 != lVar22);
                  uVar38 = 0xffffffff;
                  iVar11 = iVar19;
                }
                uVar30 = (ulonglong)(iVar11 + 1);
                iVar11 = iVar17;
              }
              else {
LAB_1404295af:
                uVar26 = (ulonglong)(-uVar12 & uVar12);
                uVar34 = uVar26 * 2 + 1;
                lVar15 = 0x3f;
                if (uVar34 != 0) {
                  for (; uVar34 >> lVar15 == 0; lVar15 = lVar15 + -1) {
                  }
                }
                iVar11 = (iVar32 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
                if (iVar17 <= iVar11) {
                  iVar11 = iVar17;
                }
              }
            } while (iVar11 != iVar20);
            pRVar29 = local_1c8;
          }
LAB_1404295e5:
          plVar24 = (longlong *)(lVar41 + 0xd8);
          if (*(int *)(lVar41 + 0xe0) == (int)uStack_50) {
            if (0 < (int)uStack_50) {
              lVar15 = 0;
              do {
                lVar22 = lVar15 * 0x80;
                plVar3 = (longlong *)(local_58 + lVar22);
                iVar20 = *(int *)(*plVar24 + 8 + lVar22);
                plVar27 = (longlong *)(*plVar24 + lVar22);
                iVar11 = *(int *)(local_58 + 8 + lVar22);
                if (iVar20 == iVar11) {
                  if (1 < iVar20) {
                    lVar22 = 0;
                    while( true ) {
                      uVar23 = *(ushort *)(*plVar27 + lVar22);
                      uVar26 = (ulonglong)uVar23;
                      uVar31 = *(ushort *)(*plVar3 + lVar22);
                      if (uVar23 != uVar31) {
                        if ((uVar31 | uVar23) < 0x80) {
                          uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                          uVar30 = (ulonglong)uVar31;
                          uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                          if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar30])
                          goto LAB_140429a0a;
                        }
                        if (uVar23 == uVar31) goto LAB_140429fe1;
                        goto LAB_14042a2b3;
                      }
                      if (uVar23 == 0) break;
LAB_140429a0a:
                      lVar22 = lVar22 + 2;
                    }
                  }
                  bVar42 = false;
                }
                else if (iVar11 + iVar20 == 1) {
LAB_140429fe1:
                  bVar42 = false;
                }
                else {
LAB_14042a2b3:
                  FUN_144a787a6(plVar27,plVar3);
                  bVar42 = true;
                }
                if (((double)plVar27[3] != (double)plVar3[3]) ||
                   (NAN((double)plVar27[3]) || NAN((double)plVar3[3]))) {
LAB_140429a4b:
                  uVar37 = *(undefined4 *)((longlong)plVar3 + 0x1c);
                  lVar22 = plVar3[4];
                  uVar36 = *(undefined4 *)((longlong)plVar3 + 0x24);
                  *(int *)(plVar27 + 3) = (int)plVar3[3];
                  *(undefined4 *)((longlong)plVar27 + 0x1c) = uVar37;
                  *(int *)(plVar27 + 4) = (int)lVar22;
                  *(undefined4 *)((longlong)plVar27 + 0x24) = uVar36;
                  bVar42 = true;
                }
                else if (((double)plVar27[4] != (double)plVar3[4]) ||
                        (NAN((double)plVar27[4]) || NAN((double)plVar3[4]))) goto LAB_140429a4b;
                if ((char)plVar27[9] != (char)plVar3[9]) {
                  *(char *)(plVar27 + 9) = (char)plVar3[9];
                  bVar42 = true;
                }
                if ((char)plVar27[8] != (char)plVar3[8]) {
                  *(char *)(plVar27 + 8) = (char)plVar3[8];
                  bVar42 = true;
                }
                if (*(char *)((longlong)plVar27 + 0x2c) != *(char *)((longlong)plVar3 + 0x2c)) {
                  *(char *)((longlong)plVar27 + 0x2c) = *(char *)((longlong)plVar3 + 0x2c);
                  bVar42 = true;
                }
                if (*(int *)((longlong)plVar27 + 0x4c) != *(int *)((longlong)plVar3 + 0x4c)) {
                  *(int *)((longlong)plVar27 + 0x4c) = *(int *)((longlong)plVar3 + 0x4c);
                  bVar42 = true;
                }
                iVar20 = (int)plVar27[0xb];
                if (iVar20 == (int)plVar3[0xb]) {
                  if (1 < iVar20) {
                    lVar22 = 0;
                    while( true ) {
                      uVar23 = *(ushort *)(plVar27[10] + lVar22);
                      uVar26 = (ulonglong)uVar23;
                      uVar31 = *(ushort *)(plVar3[10] + lVar22);
                      if (uVar23 != uVar31) break;
                      if (uVar23 == 0) goto LAB_140429b01;
LAB_140429ad1:
                      lVar22 = lVar22 + 2;
                    }
                    if ((uVar31 | uVar23) < 0x80) {
                      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                      uVar30 = (ulonglong)uVar31;
                      uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                      if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar30]) goto LAB_140429ad1;
                    }
                    if (uVar23 != uVar31) goto LAB_14042a2fa;
                  }
                }
                else if ((int)plVar3[0xb] + iVar20 != 1) {
LAB_14042a2fa:
                  FUN_144a787a6();
                  bVar42 = true;
                }
LAB_140429b01:
                iVar20 = (int)plVar27[0xd];
                if (iVar20 == (int)plVar3[0xd]) {
                  if (1 < iVar20) {
                    lVar22 = 0;
                    while( true ) {
                      uVar23 = *(ushort *)(plVar27[0xc] + lVar22);
                      uVar26 = (ulonglong)uVar23;
                      uVar31 = *(ushort *)(plVar3[0xc] + lVar22);
                      if (uVar23 != uVar31) break;
                      if (uVar23 == 0) goto LAB_140429b6e;
LAB_140429b3e:
                      lVar22 = lVar22 + 2;
                    }
                    if ((uVar31 | uVar23) < 0x80) {
                      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                      uVar30 = (ulonglong)uVar31;
                      uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                      if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar30]) goto LAB_140429b3e;
                    }
                    if (uVar23 != uVar31) goto LAB_14042a313;
                  }
                }
                else if ((int)plVar3[0xd] + iVar20 != 1) {
LAB_14042a313:
                  FUN_144a787a6();
                  bVar42 = true;
                }
LAB_140429b6e:
                if ((char)plVar27[5] != (char)plVar3[5]) {
                  *(char *)(plVar27 + 5) = (char)plVar3[5];
                  bVar42 = true;
                }
                if (*(char *)((longlong)plVar27 + 0x29) != *(char *)((longlong)plVar3 + 0x29)) {
                  *(char *)((longlong)plVar27 + 0x29) = *(char *)((longlong)plVar3 + 0x29);
                  bVar42 = true;
                }
                if (*(char *)((longlong)plVar27 + 0x2a) != *(char *)((longlong)plVar3 + 0x2a)) {
                  *(char *)((longlong)plVar27 + 0x2a) = *(char *)((longlong)plVar3 + 0x2a);
                  bVar42 = true;
                }
                iVar20 = (int)plVar27[0xf];
                if (iVar20 == (int)plVar3[0xf]) {
                  if (1 < iVar20) {
                    lVar22 = 0;
                    while( true ) {
                      uVar23 = *(ushort *)(plVar27[0xe] + lVar22);
                      uVar26 = (ulonglong)uVar23;
                      uVar31 = *(ushort *)(plVar3[0xe] + lVar22);
                      if (uVar23 != uVar31) break;
                      if (uVar23 == 0) goto LAB_140429bff;
LAB_140429bd2:
                      lVar22 = lVar22 + 2;
                    }
                    if ((uVar31 | uVar23) < 0x80) {
                      uVar23 = (ushort)(byte)(&DAT_149e05da0)[uVar26];
                      uVar30 = (ulonglong)uVar31;
                      uVar31 = (ushort)(byte)(&DAT_149e05da0)[uVar30];
                      if ((&DAT_149e05da0)[uVar26] == (&DAT_149e05da0)[uVar30]) goto LAB_140429bd2;
                    }
                    if (uVar23 != uVar31) goto LAB_14042a348;
                  }
LAB_140429bff:
                  if (bVar42) goto LAB_140429c03;
                }
                else {
                  if ((int)plVar3[0xf] + iVar20 == 1) goto LAB_140429bff;
LAB_14042a348:
                  FUN_144a787a6(plVar27 + 0xe,plVar3 + 0xe);
LAB_140429c03:
                  puVar6 = *(ushort **)(lVar41 + 0x80);
                  if (puVar6 != (ushort *)0x0) {
                    *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar41 + 0x78) & 0x3f));
                  }
                }
                lVar15 = lVar15 + 1;
              } while (lVar15 < *(int *)(lVar41 + 0xe0));
            }
          }
          else {
            iVar20 = *(int *)(lVar41 + 0xe4);
            FUN_14042a3cd(*(undefined8 *)(lVar41 + 0xd8));
            *(undefined4 *)(lVar41 + 0xe0) = 0;
            if ((iVar20 < 0) && (*(int *)(lVar41 + 0xe4) != 0)) {
              FUN_145707740(plVar24);
            }
            FUN_14570e782(plVar24,&local_58);
            local_1c0 = CONCAT71(local_1c0._1_7_,1);
          }
          FUN_14042a3cd(local_58,uStack_50 & 0xffffffff);
          if (local_58 != 0) {
            FUN_1400020a8();
          }
          uVar30 = local_1c0 & 0xff;
        }
        if (((uVar30 & 1) != 0) && (puVar6 = *(ushort **)(lVar41 + 0x80), puVar6 != (ushort *)0x0))
        {
          *puVar6 = *puVar6 | (ushort)(1L << (*(byte *)(lVar41 + 0x78) & 0x3f));
        }
      }
      ReleaseSRWLockShared(pRVar29);
    }
  }
LAB_14042963e:
  if ((local_48 ^ (ulonglong)auStack_1f8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042a3cd FUN_14042a3cd body=103 status=ok
// SIG undefined FUN_14042a3cd(void)

void FUN_14042a3cd(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 0x70);
    do {
      if (*plVar1 != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-2] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-4] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-8] != 0) {
        FUN_1400020a8();
      }
      if (plVar1[-0xe] != 0) {
        FUN_1400020a8();
      }
      plVar1 = plVar1 + 0x10;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}



// FUNCTION 14042a434 FUN_14042a434 body=510 status=ok
// SIG undefined FUN_14042a434(void)

ulonglong FUN_14042a434(longlong param_1,longlong param_2,longlong param_3)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 unaff_RBP;
  byte bVar10;
  bool bVar11;
  
  fVar1 = *(float *)(param_2 + 0xc);
  bVar3 = fVar1 != *(float *)(param_3 + 0xe0);
  iVar2 = *(int *)(param_3 + 0xe4);
  if (iVar2 == 0 || bVar3) {
    *(float *)(param_3 + 0xe0) = fVar1;
    *(int *)(param_3 + 0xe4) = iVar2 + 1;
  }
  if ((*(double *)(param_2 + 0x10) != *(double *)(param_3 + 0xe8)) ||
     (NAN(*(double *)(param_2 + 0x10)) || NAN(*(double *)(param_3 + 0xe8)))) {
    iVar8 = *(int *)(param_3 + 0xf8);
  }
  else {
    iVar8 = *(int *)(param_3 + 0xf8);
    if (((*(double *)(param_2 + 0x18) == *(double *)(param_3 + 0xf0)) &&
        (!NAN(*(double *)(param_2 + 0x18)) && !NAN(*(double *)(param_3 + 0xf0)))) && (iVar8 != 0)) {
      bVar10 = 0;
      goto LAB_14042a4cb;
    }
  }
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_3 + 0xe8) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_3 + 0xf0) = uVar5;
  *(int *)(param_3 + 0xf8) = iVar8 + 1;
  bVar10 = 1;
LAB_14042a4cb:
  bVar11 = *(int *)(param_3 + 0x104) == 0 || *(char *)(param_2 + 1) != *(char *)(param_3 + 0x100);
  if (bVar11) {
    *(char *)(param_3 + 0x100) = *(char *)(param_2 + 1);
    *(int *)(param_3 + 0x104) = *(int *)(param_3 + 0x104) + 1;
  }
  bVar4 = *(int *)(param_3 + 0x10c) == 0 || *(char *)(param_2 + 2) != *(char *)(param_3 + 0x108);
  if (bVar4) {
    *(char *)(param_3 + 0x108) = *(char *)(param_2 + 2);
    *(int *)(param_3 + 0x10c) = *(int *)(param_3 + 0x10c) + 1;
  }
  fVar1 = *(float *)(param_2 + 4);
  if ((*(float *)(param_1 + 0x2ac) < fVar1) || (fVar1 < *(float *)(param_1 + 0x2a4))) {
    if ((*(float *)(param_1 + 0x2a4) <= fVar1) || (fVar1 < *(float *)(param_1 + 0x2a0))) {
      puVar9 = &DAT_14cbdada8;
    }
    else {
      puVar9 = &DAT_14cbdad98;
    }
  }
  else {
    puVar9 = &DAT_14cbdad88;
  }
  bVar6 = FUN_1449a0272(param_3 + 0xb0,puVar9);
  if (*(float *)(param_1 + 0x2a8) < *(float *)(param_2 + 8)) {
    puVar9 = &DAT_14cbdadc8;
  }
  else if (*(float *)(param_2 + 8) < -*(float *)(param_1 + 0x2a8)) {
    puVar9 = &DAT_14cbdade8;
  }
  else {
    puVar9 = &DAT_14cbdadd8;
  }
  bVar7 = FUN_1449a0272(param_3 + 200,puVar9);
  return CONCAT71((int7)((ulonglong)unaff_RBP >> 8),
                  bVar4 | bVar11 | (iVar2 == 0 || bVar3) | bVar10 | bVar6 | bVar7) & 0xffffffff;
}



// FUNCTION 14042a632 FUN_14042a632 body=212 status=ok
// SIG undefined FUN_14042a632(void)

void FUN_14042a632(longlong param_1,uint param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = (ulonglong)param_2 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (param_2 < 0x400) {
          uVar1 = (ulonglong)
                  (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[(ulonglong)param_2 * 2]];
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
    if ((int)param_2 <= (int)(uVar1 >> 5)) {
      uVar2 = uVar1 >> 5 & 0xffffffff;
    }
  }
  if ((int)uVar2 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar2;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar2,0x20,8);
  }
  return;
}



// FUNCTION 14042a706 FUN_14042a706 body=238 status=ok
// SIG undefined FUN_14042a706(void)

void FUN_14042a706(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_58 [32];
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  FUN_1408f3f9e();
  *param_1 = &PTR_FUN_14b8a2700;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x16] = local_38;
  *(undefined4 *)(param_1 + 0x17) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xbc) = local_2c;
  *(undefined4 *)(param_1 + 0x18) = 0;
  FUN_1400b22c2(&local_38,&DAT_149e02088);
  param_1[0x19] = local_38;
  *(undefined4 *)(param_1 + 0x1a) = local_30;
  *(undefined4 *)((longlong)param_1 + 0xd4) = local_2c;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x1c] = 0;
  uVar3 = DAT_14c8463f8._4_4_;
  uVar2 = (undefined4)DAT_14c8463f8;
  uVar1 = DAT_14c8463f0._4_4_;
  *(undefined4 *)(param_1 + 0x1d) = (undefined4)DAT_14c8463f0;
  *(undefined4 *)((longlong)param_1 + 0xec) = uVar1;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0xf4) = uVar3;
  *(undefined4 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042a7f6 FUN_14042a7f6 body=471 status=ok
// SIG undefined FUN_14042a7f6(void)

undefined8 * FUN_14042a7f6(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  undefined8 uVar3;
  
  FUN_14042a9ce();
  *param_1 = &PTR_FUN_14b8a2700;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (param_1 == param_2) {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 0x17);
    pvVar2 = (void *)param_2[0x16];
    *(int *)(param_1 + 0x17) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xbc) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x16,iVar1,0);
      memcpy((void *)param_1[0x16],pvVar2,(longlong)iVar1 * 2);
    }
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
    param_1[0x19] = 0;
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x1b) = 0;
    iVar1 = *(int *)(param_2 + 0x1a);
    pvVar2 = (void *)param_2[0x19];
    *(int *)(param_1 + 0x1a) = iVar1;
    if ((longlong)iVar1 == 0) {
      *(undefined4 *)((longlong)param_1 + 0xd4) = 0;
    }
    else {
      FUN_1446dd670(param_1 + 0x19,iVar1,0);
      memcpy((void *)param_1[0x19],pvVar2,(longlong)iVar1 * 2);
    }
  }
  *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
  param_1[0x1c] = 0;
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)((longlong)param_1 + 0xe4) = *(undefined4 *)((longlong)param_2 + 0xe4);
  *(undefined4 *)(param_1 + 0x1f) = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  uVar3 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar3;
  *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined4 *)((longlong)param_1 + 0x104) = 0;
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x104) = *(undefined4 *)((longlong)param_2 + 0x104);
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined4 *)((longlong)param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined4 *)((longlong)param_1 + 0x10c) = *(undefined4 *)((longlong)param_2 + 0x10c);
  return param_1;
}



// FUNCTION 14042a9ce FUN_14042a9ce body=436 status=ok
// SIG undefined FUN_14042a9ce(void)

undefined8 * FUN_14042a9ce(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  *param_1 = &PTR_FUN_14b473650;
  param_1[1] = 0;
  iVar1 = *(int *)(param_2 + 0x10);
  pvVar2 = *(void **)(param_2 + 8);
  *(int *)(param_1 + 2) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x14) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 1,iVar1,0);
    memcpy((void *)param_1[1],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 0x20);
  pvVar2 = *(void **)(param_2 + 0x18);
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  iVar1 = *(int *)(param_2 + 0x30);
  pvVar2 = *(void **)(param_2 + 0x28);
  *(int *)(param_1 + 6) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x34) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 5,iVar1,0);
    memcpy((void *)param_1[5],pvVar2,(longlong)iVar1 * 2);
  }
  param_1[7] = 0;
  iVar1 = *(int *)(param_2 + 0x40);
  pvVar2 = *(void **)(param_2 + 0x38);
  *(int *)(param_1 + 8) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x44) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 7,iVar1,0);
    memcpy((void *)param_1[7],pvVar2,(longlong)iVar1 * 2);
  }
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0x58);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  param_1[9] = *(undefined8 *)(param_2 + 0x48);
  param_1[10] = uVar4;
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  lVar3 = *(longlong *)(param_2 + 0x68);
  param_1[0xd] = lVar3;
  if (lVar3 != 0) {
    LOCK();
    *(int *)(lVar3 + 0xc) = *(int *)(lVar3 + 0xc) + 1;
    UNLOCK();
  }
  uVar4 = *(undefined8 *)(param_2 + 0x70);
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  uVar6 = *(undefined8 *)(param_2 + 0x80);
  uVar7 = *(undefined8 *)(param_2 + 0x88);
  uVar8 = *(undefined8 *)(param_2 + 0x90);
  uVar9 = *(undefined8 *)(param_2 + 0x98);
  uVar10 = *(undefined8 *)(param_2 + 0xa8);
  param_1[0x14] = *(undefined8 *)(param_2 + 0xa0);
  param_1[0x15] = uVar10;
  param_1[0x12] = uVar8;
  param_1[0x13] = uVar9;
  param_1[0x10] = uVar6;
  param_1[0x11] = uVar7;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar5;
  return param_1;
}



// FUNCTION 14042ab82 FUN_14042ab82 body=188 status=ok
// SIG undefined FUN_14042ab82(void)

void FUN_14042ab82(undefined8 *param_1,int param_2)

{
  int *piVar1;
  longlong *plVar2;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = &PTR_FUN_14b8a2700;
    if (param_1[0x19] != 0) {
      FUN_1400020a8();
    }
    if (param_1[0x16] != 0) {
      FUN_1400020a8();
    }
    *param_1 = &PTR_FUN_14b473650;
    plVar2 = (longlong *)param_1[0xd];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      piVar1 = (int *)((longlong)plVar2 + 0xc);
      *piVar1 = *piVar1 + -1;
      UNLOCK();
      if (*piVar1 == 0) {
        (**(code **)(*plVar2 + 0x10))();
      }
    }
    if (param_1[7] != 0) {
      FUN_1400020a8();
    }
    if (param_1[5] != 0) {
      FUN_1400020a8();
    }
    if (param_1[3] != 0) {
      FUN_1400020a8();
    }
    if (param_1[1] != 0) {
      FUN_1400020a8();
    }
    param_1 = param_1 + 0x22;
  }
  return;
}



// FUNCTION 14042ac3e FUN_14042ac3e body=352 status=ok
// SIG undefined FUN_14042ac3e(void)

undefined8 FUN_14042ac3e(longlong param_1)

{
  undefined8 uVar1;
  longlong *plVar2;
  longlong lVar3;
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
  code *local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x398);
  if (lVar3 != 0) {
    if (DAT_14cbae3d8 == 0) {
      local_30 = &local_18;
      local_18 = FUN_141030f22;
      local_20 = FUN_14081d0ea;
      local_28 = &LAB_1464f5fc4;
      local_38 = &LAB_148c3dd26;
      local_40 = &LAB_1459673ba;
      local_48 = L"Engine";
      local_50 = 0;
      local_58 = 0x10000004;
      local_60 = 0x10;
      local_68 = 0x1360;
      FUN_14081cfa3(L"/Script/OakGame",L"OakPlayerState",&DAT_14cbae3d8,FUN_1465eb604);
      lVar3 = *(longlong *)(param_1 + 0x398);
      if (lVar3 == 0) goto LAB_14042ad98;
    }
    uVar1 = 0;
    if ((DAT_14cbae3d8 == 0) || (lVar3 = *(longlong *)(lVar3 + 0x10), lVar3 == 0))
    goto LAB_14042acce;
    if ((*(int *)(DAT_14cbae3d8 + 0x38) <= *(int *)(lVar3 + 0x38)) &&
       (((*(longlong *)(*(longlong *)(lVar3 + 0x30) + (longlong)*(int *)(DAT_14cbae3d8 + 0x38) * 8)
          == DAT_14cbae3d8 + 0x30 &&
         (plVar2 = (longlong *)FUN_14042ada0(), plVar2 != (longlong *)0x0)) &&
        (lVar3 = (**(code **)(*plVar2 + 0x3a0))(plVar2), lVar3 != 0)))) {
      uVar1 = *(undefined8 *)(lVar3 + 0x160);
      goto LAB_14042acce;
    }
  }
LAB_14042ad98:
  uVar1 = 0;
LAB_14042acce:
  if ((local_10 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar1;
}



// FUNCTION 14042ada0 FUN_14042ada0 body=216 status=ok
// SIG undefined FUN_14042ada0(void)

longlong FUN_14042ada0(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_58 [44];
  short local_2c [2];
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  lVar1 = FUN_1447210f0();
  if ((lVar1 != 0) && (lVar1 = FUN_1400f6e0c(lVar1), lVar1 != 0)) {
    lVar2 = *(longlong *)(lVar1 + 0x68);
    if ((lVar2 != 0) &&
       ((FUN_14042af24(lVar2,local_2c,param_1), -1 < local_2c[0] &&
        (lVar2 = FUN_14042ae8c(lVar2,local_2c), lVar2 != 0)))) {
      lVar3 = FUN_1406f6176();
      if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8
           ) == lVar3 + 0x30)) goto LAB_14042ae1f;
    }
    lVar2 = *(longlong *)(lVar1 + 0xa8);
    if (lVar2 != 0) {
      if (*(char *)(lVar2 + 0x1f0) != '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_58);
      }
      goto LAB_14042ae1f;
    }
  }
  lVar2 = 0;
LAB_14042ae1f:
  if ((local_28 ^ (ulonglong)auStack_58) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return lVar2;
}



// FUNCTION 14042ae8c FUN_14042ae8c body=152 status=ok
// SIG undefined FUN_14042ae8c(void)

undefined8 FUN_14042ae8c(longlong param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  
  uVar1 = *param_2;
  if ((-1 < (short)uVar1) && ((int)(short)uVar1 < *(int *)(param_1 + 0x10))) {
    lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (ulonglong)uVar1 * 8);
    if ((lVar5 != 0) && (*(uint *)(lVar5 + 8) == (uint)param_2[1])) {
      if (-1 < *(short *)(lVar5 + 4)) {
        do {
          lVar5 = *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)*(short *)(lVar5 + 2) * 8);
        } while (-1 < *(short *)(lVar5 + 4));
        if (lVar5 == 0) {
          return 0;
        }
      }
      if (*(int *)(lVar5 + 0xb8) != 0) {
        uVar2 = *(uint *)(lVar5 + 0xb4);
        uVar3 = 0;
        if ((-1 < (int)uVar2) && ((int)uVar2 < DAT_14c9647dc)) {
          puVar4 = (undefined8 *)
                   ((ulonglong)((uVar2 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar2 >> 0x10) * 8));
          if (puVar4 == (undefined8 *)0x0) {
            return 0;
          }
          if (*(int *)(puVar4 + 2) != *(int *)(lVar5 + 0xb8)) {
            return 0;
          }
          if ((*(uint *)(puVar4 + 1) & 0x10200000) != 0) {
            return 0;
          }
          uVar3 = *puVar4;
        }
        return uVar3;
      }
    }
  }
  return 0;
}



// FUNCTION 14042af24 FUN_14042af24 body=192 status=ok
// SIG undefined FUN_14042af24(void)

void FUN_14042af24(longlong param_1,undefined2 *param_2,longlong param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  
  uVar4 = 0xffff;
  if ((param_3 != 0) && ((longlong)*(int *)(param_1 + 0x10) != 0)) {
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(*(longlong *)(param_1 + 8) + lVar5);
      if ((lVar2 != 0) && (*(short *)(lVar2 + 4) < 0)) {
        if ((*(int *)(lVar2 + 0x1c) == 0) || (uVar1 = *(uint *)(lVar2 + 0x18), (int)uVar1 < 0)) {
LAB_14042afd2:
          lVar6 = 0;
        }
        else {
          lVar6 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar7 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar7 == (longlong *)0x0) || ((int)plVar7[2] != *(int *)(lVar2 + 0x1c))) ||
               ((*(uint *)(plVar7 + 1) & 0x10200000) != 0)) goto LAB_14042afd2;
            lVar6 = *plVar7;
          }
        }
        if (lVar6 == param_3) {
          uVar4 = *(undefined2 *)(lVar2 + 2);
          uVar3 = *(undefined2 *)(lVar2 + 8);
          goto LAB_14042afc3;
        }
      }
      lVar5 = lVar5 + 8;
    } while ((longlong)*(int *)(param_1 + 0x10) * 8 != lVar5);
  }
  uVar3 = 0;
LAB_14042afc3:
  *param_2 = uVar4;
  param_2[1] = uVar3;
  return;
}



// FUNCTION 14042afe4 FUN_14042afe4 body=50 status=ok
// SIG undefined FUN_14042afe4(void)

void FUN_14042afe4(longlong param_1)

{
  FUN_14042b052();
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400337aa();
  }
  FUN_14042b016(param_1 + 0x550);
  return;
}



// FUNCTION 14042b016 FUN_14042b016 body=60 status=ok
// SIG undefined FUN_14042b016(void)

void FUN_14042b016(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = *(int *)(param_1 + 0x38);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x30);
    lVar3 = 0;
    do {
      if (*(longlong *)(lVar2 + 8 + lVar3) != 0) {
        FUN_1400337aa();
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  return;
}



// FUNCTION 14042b052 FUN_14042b052 body=127 status=ok
// SIG undefined FUN_14042b052(void)

void FUN_14042b052(longlong param_1)

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



// FUNCTION 14042b0e6 FUN_14042b0e6 body=260 status=ok
// SIG undefined FUN_14042b0e6(void)

void FUN_14042b0e6(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_98 [32];
  undefined1 local_78 [24];
  longlong local_60;
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_98;
  FUN_14042b5a6(local_78,*(undefined8 *)(param_1 + 0x198));
  FUN_14042b1ec(param_2,local_78,1);
  if (local_30 != (longlong *)0x0) {
    LOCK();
    piVar1 = (int *)((longlong)local_30 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)(*local_30 + 0x10))();
    }
  }
  if (local_60 != 0) {
    FUN_1400020a8();
  }
  if ((longlong)*(int *)(param_1 + 0xb0) != 0) {
    lVar2 = *(longlong *)(param_1 + 0xa8);
    lVar3 = (longlong)*(int *)(param_1 + 0xb0) << 3;
    do {
      FUN_14042bd7c(local_78,lVar2);
      FUN_14042b1ec(param_2,local_78,1);
      if (local_30 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)local_30 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*local_30 + 0x10))();
        }
      }
      if (local_60 != 0) {
        FUN_1400020a8();
      }
      lVar2 = lVar2 + 8;
      lVar3 = lVar3 + -8;
    } while (lVar3 != 0);
  }
  if ((local_28 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042b1ec FUN_14042b1ec body=229 status=ok
// SIG undefined FUN_14042b1ec(void)

void FUN_14042b1ec(longlong param_1,longlong param_2,char param_3)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  if ((*(longlong *)(param_2 + 8) != 0) ||
     ((*(longlong *)(param_2 + 0x28) != 0 && (*(longlong *)(param_2 + 0x30) != 0)))) {
    lVar3 = *(longlong *)(param_1 + 0x3c0);
    if (*(longlong *)(param_1 + 0x3c0) == 0) {
      lVar3 = param_1;
    }
    if ((longlong)*(int *)(param_1 + 0x3c8) == 0) {
      iVar2 = 0;
    }
    else {
      lVar4 = (longlong)*(int *)(param_1 + 0x3c8) * 0x50;
      do {
        cVar1 = FUN_14042b392(lVar3,param_2);
        if (cVar1 != '\0') {
          return;
        }
        lVar3 = lVar3 + 0x50;
        lVar4 = lVar4 + -0x50;
      } while (lVar4 != 0);
      iVar2 = *(int *)(param_1 + 0x3c8);
    }
    *(uint *)(param_1 + 0x3c8) = iVar2 + 1U;
    if (*(uint *)(param_1 + 0x3cc) < iVar2 + 1U) {
      FUN_1470d98e6(param_1,iVar2);
    }
    lVar3 = *(longlong *)(param_1 + 0x3c0);
    if (*(longlong *)(param_1 + 0x3c0) == 0) {
      lVar3 = param_1;
    }
    FUN_14042b2d2((longlong)iVar2 * 0x50 + lVar3,param_2);
    if (param_3 != '\0') {
      FUN_14042b762(param_2,param_1);
      return;
    }
  }
  return;
}



// FUNCTION 14042b2d2 FUN_14042b2d2 body=192 status=ok
// SIG undefined FUN_14042b2d2(void)

undefined8 * FUN_14042b2d2(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *_Src;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar3 = *(undefined4 *)((longlong)param_2 + 0xc);
  uVar4 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined4 *)((longlong)param_2 + 0x14);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar5;
  param_1[3] = 0;
  iVar1 = *(int *)(param_2 + 4);
  _Src = (void *)param_2[3];
  *(int *)(param_1 + 4) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  }
  else {
    FUN_1446dd670(param_1 + 3,iVar1,0);
    memcpy((void *)param_1[3],_Src,(longlong)iVar1 * 2);
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = param_2[5];
  uVar6 = FUN_14477b664(param_2[6]);
  uVar6 = FUN_14477b664(uVar6);
  param_1[6] = uVar6;
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  lVar2 = param_2[9];
  param_1[9] = lVar2;
  if (lVar2 != 0) {
    LOCK();
    *(int *)(lVar2 + 0xc) = *(int *)(lVar2 + 0xc) + 1;
    UNLOCK();
  }
  return param_1;
}



// FUNCTION 14042b392 FUN_14042b392 body=532 status=ok
// SIG undefined FUN_14042b392(void)

ulonglong FUN_14042b392(longlong param_1,longlong param_2)

{
  ushort uVar1;
  ushort uVar2;
  longlong *plVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined **ppuVar8;
  ulonglong unaff_RSI;
  longlong lVar9;
  uint uVar10;
  bool bVar11;
  
  if (*(longlong *)(param_1 + 8) == 0) {
    unaff_RSI = 0;
    if (*(longlong *)(param_1 + 0x28) != *(longlong *)(param_2 + 0x28)) goto LAB_14042b3b1;
    if ((*(longlong *)(param_1 + 0x30) != 0) &&
       (plVar3 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xb8), plVar3 != (longlong *)0x0)) {
      lVar9 = *plVar3;
      pcVar4 = *(code **)(lVar9 + 0x108);
      if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
        cVar5 = (*pcVar4)(plVar3);
        unaff_RSI = 0;
        if (cVar5 == '\0') goto LAB_14042b42f;
        lVar9 = *plVar3;
      }
      pcVar4 = *(code **)(lVar9 + 0x110);
      if (pcVar4 == (code *)&LAB_144783426) {
        ppuVar8 = &PTR_PTR_14c763408;
      }
      else if (pcVar4 == (code *)&LAB_144783432) {
        ppuVar8 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar8 = (undefined **)(*pcVar4)(plVar3);
      }
      uVar6 = FUN_144aff48c(ppuVar8);
      unaff_RSI = (ulonglong)uVar6;
    }
LAB_14042b42f:
    iVar7 = 0;
    if ((*(longlong *)(param_2 + 0x30) != 0) &&
       (plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0xb8), plVar3 != (longlong *)0x0)) {
      lVar9 = *plVar3;
      pcVar4 = *(code **)(lVar9 + 0x108);
      if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
        cVar5 = (*pcVar4)(plVar3);
        if (cVar5 == '\0') goto LAB_14042b499;
        lVar9 = *plVar3;
      }
      pcVar4 = *(code **)(lVar9 + 0x110);
      if (pcVar4 == (code *)&LAB_144783426) {
        ppuVar8 = &PTR_PTR_14c763408;
      }
      else if (pcVar4 == (code *)&LAB_144783432) {
        ppuVar8 = &PTR_PTR_14c75f798;
      }
      else {
        ppuVar8 = (undefined **)(*pcVar4)(plVar3);
      }
      iVar7 = FUN_144aff48c(ppuVar8);
    }
LAB_14042b499:
    bVar11 = (int)unaff_RSI == iVar7;
  }
  else {
    if ((*(longlong *)(param_1 + 8) != *(longlong *)(param_2 + 8)) ||
       (*(longlong *)(param_1 + 0x10) != *(longlong *)(param_2 + 0x10))) {
      unaff_RSI = 0;
      goto LAB_14042b3b1;
    }
    iVar7 = *(int *)(param_1 + 0x20);
    if (iVar7 == *(int *)(param_2 + 0x20)) {
      unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),1);
      if (iVar7 < 2) goto LAB_14042b3b1;
      lVar9 = 0;
      while( true ) {
        uVar1 = *(ushort *)(*(longlong *)(param_1 + 0x18) + lVar9);
        uVar6 = (uint)uVar1;
        uVar2 = *(ushort *)(*(longlong *)(param_2 + 0x18) + lVar9);
        uVar10 = (uint)uVar2;
        if (uVar1 != uVar2) {
          if ((uVar2 | uVar1) < 0x80) {
            uVar6 = (uint)(byte)(&DAT_149e05da0)[uVar1];
            uVar10 = (uint)(byte)(&DAT_149e05da0)[uVar2];
            if ((&DAT_149e05da0)[uVar1] == (&DAT_149e05da0)[uVar2]) goto LAB_14042b4f6;
          }
          iVar7 = uVar6 - uVar10;
          goto LAB_14042b595;
        }
        if (uVar1 == 0) break;
LAB_14042b4f6:
        lVar9 = lVar9 + 2;
      }
      iVar7 = 0;
LAB_14042b595:
      bVar11 = iVar7 == 0;
    }
    else {
      bVar11 = *(int *)(param_2 + 0x20) + iVar7 == 1;
    }
  }
  unaff_RSI = CONCAT71((int7)(unaff_RSI >> 8),bVar11);
LAB_14042b3b1:
  return unaff_RSI & 0xffffffff;
}



// FUNCTION 14042b5a6 FUN_14042b5a6 body=437 status=ok
// SIG undefined FUN_14042b5a6(void)

uint * FUN_14042b5a6(uint *param_1,longlong param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  if (param_2 == 0) {
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_28 ^ (ulonglong)auStack_68);
  }
  FUN_1400bbfc4(&local_48);
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  if (param_1 + 2 == &local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 6) = local_38;
    local_38 = 0;
    param_1[8] = local_30;
    param_1[9] = local_2c;
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  uVar3 = *(uint *)(param_2 + 0xc);
  if (cVar2 != '\0') {
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      goto LAB_14042b66e;
    }
  }
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
    uVar5 = DAT_14c964868 + 1;
    bVar6 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar5);
    }
    LOCK();
    uVar3 = *(uint *)(lVar4 + 0x10);
    bVar6 = uVar3 == 0;
    if (bVar6) {
      *(uint *)(lVar4 + 0x10) = uVar5;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar6) {
      uVar3 = uVar5;
    }
  }
  param_1[1] = uVar3;
LAB_14042b66e:
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14042b762 FUN_14042b762 body=752 status=ok
// SIG undefined FUN_14042b762(void)

void FUN_14042b762(longlong param_1)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  plVar2 = *(longlong **)(param_1 + 0x38);
  if (plVar2 == (longlong *)0x0) {
    if ((*(longlong *)(param_1 + 0x28) != 0) && (*(longlong *)(param_1 + 0x30) != 0)) {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar1 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar1 == '\0')) {
        *(undefined8 *)(param_1 + 0x38) = 0;
      }
      else {
        uVar3 = (**(code **)(*plVar2 + 0x110))(plVar2);
        plVar2 = (longlong *)FUN_144aff482(uVar3,(longlong *)(param_1 + 0x28));
        *(longlong **)(param_1 + 0x38) = plVar2;
        if (plVar2 != (longlong *)0x0) goto LAB_14042ba12;
      }
    }
    plVar2 = (longlong *)FUN_1401fe4bc(param_1);
    if (plVar2 != (longlong *)0x0) {
      uVar3 = FUN_14042ba7c();
      lVar4 = (**(code **)(*plVar2 + 0x288))(plVar2,uVar3);
      if (lVar4 != 0) {
        uVar3 = FUN_14042ba7c();
        lVar5 = FUN_144718840(lVar4,uVar3);
        if ((lVar4 != lVar5) && (lVar5 != 0)) goto LAB_14042b7f5;
      }
      if (DAT_14c949118 == 0) {
        local_40 = FUN_140631fbe;
        lVar4 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c949118 = lVar4;
        FUN_1446f470e(local_38,L"Class",1);
        local_58 = &LAB_146891e90;
        local_60 = &LAB_146273097;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x20;
        local_80 = 0x10000000;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_40;
        FUN_14574b4b2(lVar4);
        DAT_14c949118 = lVar4;
        uVar3 = FUN_144a7a812();
        lVar4 = DAT_14c949118;
        uVar6 = FUN_1449e2fb2();
        local_88 = L"Class";
        FUN_14574b446(uVar6,lVar4,uVar3,L"/Script/CoreUObject");
      }
      if (((*(int *)(DAT_14c949118 + 0x38) <= *(int *)(plVar2[2] + 0x38)) &&
          (*(longlong *)
            (*(longlong *)(plVar2[2] + 0x30) + (longlong)*(int *)(DAT_14c949118 + 0x38) * 8) ==
           DAT_14c949118 + 0x30)) && (-1 < *(int *)((longlong)plVar2 + 0xd4))) {
        plVar7 = (longlong *)plVar2[0x22];
        if (plVar7 == (longlong *)0x0) {
          FUN_140aa6c08(plVar2);
          plVar7 = (longlong *)plVar2[0x22];
          if (plVar7 == (longlong *)0x0) goto LAB_14042ba48;
        }
        uVar3 = FUN_14042ba7c();
        lVar4 = (**(code **)(*plVar7 + 0x288))(plVar7,uVar3);
        if (lVar4 != 0) {
          uVar3 = FUN_14042ba7c();
          lVar5 = FUN_144718840(lVar4,uVar3);
          if ((lVar4 != lVar5) && (lVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
          }
        }
      }
    }
  }
  else {
LAB_14042ba12:
    uVar3 = (**(code **)(*plVar2 + 8))(plVar2);
    lVar4 = FUN_14042bb62(uVar3);
    if (lVar4 != 0) {
LAB_14042b7f5:
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
    }
  }
LAB_14042ba48:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042ba7c FUN_14042ba7c body=228 status=ok
// SIG undefined FUN_14042ba7c(void)

longlong FUN_14042ba7c(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14c9a44d8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_1470b855b;
    local_40 = FUN_1462a74ce;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxActorStateSchemaSourceProvider",&DAT_14c9a44d8,
                  &DAT_1470b855a);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a44d8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042bb62 FUN_14042bb62 body=536 status=ok
// SIG undefined FUN_14042bb62(void)

ulonglong * FUN_14042bb62(ulonglong param_1)

{
  ulonglong *puVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulonglong *puVar8;
  undefined1 auStack_a8 [32];
  wchar_t *local_88;
  undefined4 local_80;
  undefined8 local_78;
  wchar_t *local_70;
  undefined4 local_68;
  code *local_60;
  undefined1 *local_58;
  undefined2 **local_50;
  undefined2 *local_40;
  undefined1 local_38 [8];
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1 != 0) {
    while ((*(uint *)(param_1 + 8) >> 0x1e & 1) == 0) {
      if (DAT_14c9a6350 != DAT_14c9a637c) {
        uVar3 = ((uint)(param_1 >> 0x14) & 0xffff ^ (uint)(param_1 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        puVar4 = DAT_14c9a6388;
        if (DAT_14c9a6388 == (undefined *)0x0) {
          puVar4 = &DAT_14c9a6380;
        }
        iVar2 = *(int *)(puVar4 + (ulonglong)(DAT_14c9a6390 - 1U & (uVar3 >> 0x10 ^ uVar3)) * 4);
        while (iVar2 != -1) {
          puVar1 = (ulonglong *)(DAT_14c9a6348 + (longlong)iVar2 * 0x18);
          if (*puVar1 == param_1) {
            puVar8 = puVar1 + 1;
            if (puVar8 != (ulonglong *)0x0 && puVar1 != (ulonglong *)0x0) goto LAB_14042bc68;
            break;
          }
          iVar2 = (int)puVar1[2];
        }
      }
      param_1 = *(ulonglong *)(param_1 + 0x40);
      if (param_1 == 0) break;
      if (DAT_14c948fa0 == 0) {
        local_40 = &DAT_1427db2a2;
        lVar5 = FUN_1446f8604(&DAT_14c9640e0,0x250,8,1);
        DAT_14c948fa0 = lVar5;
        FUN_1446f470e(local_38,L"ScriptStruct",1);
        local_58 = &LAB_1468915ce;
        local_60 = FUN_1427dc742;
        local_70 = L"Engine";
        local_68 = 199;
        local_78 = 0x10;
        local_80 = 0x10000020;
        local_88 = (wchar_t *)CONCAT44(local_88._4_4_,8);
        local_50 = &local_40;
        FUN_14574b4b2(lVar5);
        DAT_14c948fa0 = lVar5;
        uVar6 = FUN_1446f8646();
        lVar5 = DAT_14c948fa0;
        uVar7 = FUN_1449e2fb2();
        local_88 = L"ScriptStruct";
        FUN_14574b446(uVar7,lVar5,uVar6,L"/Script/CoreUObject");
      }
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(DAT_14c948fa0 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14c948fa0 + 0x38) * 8) != DAT_14c948fa0 + 0x30)) break;
    }
  }
  puVar8 = (ulonglong *)0x0;
LAB_14042bc68:
  if ((local_30 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return puVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042bd7c FUN_14042bd7c body=499 status=ok
// SIG undefined FUN_14042bd7c(void)

uint * FUN_14042bd7c(uint *param_1,longlong *param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  longlong lVar4;
  uint uVar5;
  bool bVar6;
  undefined1 auStack_68 [32];
  uint local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  longlong local_38;
  uint local_30;
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  lVar4 = *param_2;
  if ((lVar4 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c(lVar4);
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  else {
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    if (lVar4 == 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      goto LAB_14042be5b;
    }
  }
  FUN_1400bbfc4(&local_48,lVar4);
  param_1[2] = local_48;
  param_1[3] = uStack_44;
  param_1[4] = uStack_40;
  param_1[5] = uStack_3c;
  if (param_1 + 2 == &local_48) {
    if (local_38 != 0) {
      FUN_1400020a8();
    }
  }
  else {
    if (*(longlong *)(param_1 + 6) != 0) {
      FUN_1400020a8();
    }
    *(longlong *)(param_1 + 6) = local_38;
    local_38 = 0;
    param_1[8] = local_30;
    param_1[9] = local_2c;
  }
  cVar2 = (*(code *)PTR_FUN_14c758760)();
  uVar3 = *(uint *)(lVar4 + 0xc);
  if (cVar2 != '\0') {
    if ((int)uVar3 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar3 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    if ((*(uint *)(lVar4 + 8) & 0x8400000) != 0) {
      param_1[0] = 0;
      param_1[1] = 0;
      goto LAB_14042be5b;
    }
  }
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
    uVar5 = DAT_14c964868 + 1;
    bVar6 = DAT_14c964868 < 1000;
    DAT_14c964868 = iVar1;
    if (bVar6) {
      FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                    L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                    uVar5);
    }
    LOCK();
    uVar3 = *(uint *)(lVar4 + 0x10);
    bVar6 = uVar3 == 0;
    if (bVar6) {
      *(uint *)(lVar4 + 0x10) = uVar5;
      uVar3 = 0;
    }
    UNLOCK();
    if (bVar6) {
      uVar3 = uVar5;
    }
  }
  param_1[1] = uVar3;
LAB_14042be5b:
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((local_28 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return param_1;
}



// FUNCTION 14042bf70 FUN_14042bf70 body=367 status=ok
// SIG undefined FUN_14042bf70(void)

/* WARNING: Type propagation algorithm not settling */

void FUN_14042bf70(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_88 [32];
  longlong *local_68;
  longlong local_60 [4];
  undefined1 local_40;
  longlong local_38 [5];
  
  local_38[4] = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14042c0e0();
  if ((((*(longlong *)(param_1 + 0x29c) != 0) && (lVar2 = FUN_14479d2ce(param_1 + 0x30), lVar2 != 0)
       ) && (lVar2 = FUN_14101baae(lVar2), lVar2 != 0)) &&
     ((lVar2 = FUN_1400b6e86(lVar2), lVar2 != 0 &&
      (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x30) + 0x10))(lVar2 + 0x30), lVar2 != 0)))) {
    lVar3 = FUN_140dd10c4();
    if ((*(int *)(lVar3 + 0x38) <= *(int *)(*(longlong *)(lVar2 + 0x10) + 0x38)) &&
       ((*(longlong *)
          (*(longlong *)(*(longlong *)(lVar2 + 0x10) + 0x30) + (longlong)*(int *)(lVar3 + 0x38) * 8)
         == lVar3 + 0x30 && ((longlong)*(int *)(lVar2 + 0x548) != 0)))) {
      lVar3 = 0;
      do {
        lVar1 = *(longlong *)(*(longlong *)(lVar2 + 0x540) + 0x20 + lVar3);
        if (*(longlong *)(param_1 + 0x29c) == *(longlong *)(lVar1 + 0x18)) {
          local_38[2] = 0;
          local_38[3] = 0;
          local_38[0] = 0;
          local_38[1] = 0;
          local_60[1] = 0x3ff0000000000000;
          local_60[2] = 0;
          local_60[3] = 0;
          local_40 = 0;
          local_60[0] = lVar1;
          if ((lVar1 != 0) && (DAT_14c950c29 != '\0')) {
            FUN_1456cec3c();
          }
          local_68 = local_38 + 2;
          FUN_14570e87e(lVar2,local_60,local_60 + 1,local_38);
          if (local_38[0] != 0) {
            FUN_1400020a8();
          }
          if (local_38[2] != 0) {
            FUN_1400020a8();
          }
          break;
        }
        lVar3 = lVar3 + 0x50;
      } while ((longlong)*(int *)(lVar2 + 0x548) * 0x50 != lVar3);
    }
  }
  if ((local_38[4] ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042c0e0 FUN_14042c0e0 body=542 status=ok
// SIG undefined FUN_14042c0e0(void)

void FUN_14042c0e0(longlong *param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  longlong lVar4;
  longlong lVar5;
  uint uVar6;
  bool bVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  longlong lVar11;
  
  uVar6 = *(uint *)((longlong)param_1 + 0x8c);
  uVar3 = uVar6 >> 0x11 & 0xffffff01;
  if (((*(int *)((longlong)param_1 + 0x34) != 0) &&
      (uVar1 = *(uint *)(param_1 + 6), -1 < (int)uVar1)) && ((int)uVar1 < DAT_14c9647dc)) {
    plVar10 = (longlong *)
              ((ulonglong)((uVar1 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
    if (((((plVar10 != (longlong *)0x0) && ((int)plVar10[2] == *(int *)((longlong)param_1 + 0x34)))
         && (((*(uint *)(plVar10 + 1) & 0x10200000) == 0 &&
             ((lVar11 = *plVar10, lVar11 != 0 && (*(int *)(lVar11 + 0x388) != 0)))))) &&
        (uVar1 = *(uint *)(lVar11 + 900), -1 < (int)uVar1)) &&
       (((((int)uVar1 < DAT_14c9647dc &&
          (plVar8 = (longlong *)
                    ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                    *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
          plVar8 != (longlong *)0x0)) && ((int)plVar8[2] == *(int *)(lVar11 + 0x388))) &&
        (((*(uint *)(plVar8 + 1) & 0x10200000) == 0 && (*plVar8 != 0)))))) {
      if ((uVar6 & 0x10) == 0) {
        lVar2 = param_1[0x29];
        lVar5 = 0;
        lVar4 = 0;
        if ((*(uint *)(plVar10 + 1) & 0x10200000) != 0) {
          lVar11 = lVar5;
        }
        if (((*(int *)(lVar11 + 0x388) != 0) && (uVar3 = *(uint *)(lVar11 + 900), -1 < (int)uVar3))
           && (((int)uVar3 < DAT_14c9647dc &&
               (((puVar9 = (undefined8 *)
                           ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                           *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
                 lVar5 = lVar4, puVar9 != (undefined8 *)0x0 &&
                 (*(int *)(puVar9 + 2) == *(int *)(lVar11 + 0x388))) &&
                ((*(uint *)(puVar9 + 1) & 0x10200000) == 0)))))) {
          if ((*(uint *)(puVar9 + 1) & 0x10200000) == 0) {
            plVar10 = (longlong *)*puVar9;
          }
          else {
            plVar10 = (longlong *)0x0;
          }
          lVar5 = (**(code **)(*plVar10 + 0x2b8))();
          uVar6 = *(uint *)((longlong)param_1 + 0x8c);
        }
        bVar7 = (int)lVar5 <= (int)lVar2;
      }
      else {
        bVar7 = true;
      }
      uVar3 = (uint)((byte)(uVar6 >> 0x11) & 1 & bVar7);
    }
  }
  if (((uVar6 >> 0x10 & 1) != 0) &&
     ((((*(int *)((longlong)param_1 + 0x294) == 0 ||
        (uVar1 = *(uint *)(param_1 + 0x52), (int)uVar1 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar1 ||
        ((lVar11 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8), lVar11 == 0 ||
         (*(int *)(lVar11 + 0x10) != *(int *)((longlong)param_1 + 0x294))))))) ||
      ((*(uint *)(lVar11 + 8) & 0x10200000) != 0)))) {
    uVar6 = uVar6 & 0xfffeffff;
    *(uint *)((longlong)param_1 + 0x8c) = uVar6;
  }
  if ((uVar6 >> 0x10 & 1) == (uVar3 & 0xff)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00014042c2f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x70 + (ulonglong)(byte)((byte)uVar3 ^ 1) * 8))(param_1);
  return;
}



// FUNCTION 14042c2fe FUN_14042c2fe body=70 status=ok
// SIG undefined FUN_14042c2fe(void)

undefined8 FUN_14042c2fe(ushort *param_1)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14042c344(*param_1);
  if (((cVar1 == '\0') || (DAT_14c760e18 != '\x01')) ||
     ((*(uint *)(param_1 + 0x1c) & 0x2000006) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = CONCAT71((int7)((ulonglong)*param_1 * 0x3c >> 8),
                     2 < (int)(&DAT_14ca814b8)[(ulonglong)*param_1 * 0xf]);
  }
  return uVar2;
}



// FUNCTION 14042c344 FUN_14042c344 body=109 status=ok
// SIG undefined FUN_14042c344(void)

undefined8 FUN_14042c344(void)

{
  uint uVar1;
  longlong lVar2;
  DWORD DVar3;
  DWORD DVar4;
  ulonglong uVar5;
  undefined4 extraout_var;
  ulonglong uVar6;
  
  lVar2 = DAT_14ca9ecb8;
  uVar1 = *(uint *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xc60);
  uVar5 = (ulonglong)uVar1;
  if (((uVar1 == 0x40000002) || (DAT_14c86a9f8 != '\x01')) || (uVar1 == 2)) {
    uVar6 = 0;
  }
  else if (uVar1 == 1) {
    DVar3 = FUN_140ad26c0();
    DVar4 = GetCurrentThreadId();
    uVar5 = CONCAT44(extraout_var,DVar4);
    uVar6 = (ulonglong)(DVar3 != DVar4);
  }
  else {
    uVar6 = 1;
  }
  return CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar2 + uVar6 * 4) == 1);
}



// FUNCTION 14042c3b2 FUN_14042c3b2 body=40 status=ok
// SIG undefined FUN_14042c3b2(void)

undefined8 FUN_14042c3b2(undefined8 param_1,int param_2)

{
  FUN_14042c3da();
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 14042c3da FUN_14042c3da body=117 status=ok
// SIG undefined FUN_14042c3da(void)

void FUN_14042c3da(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_14b08d760;
  param_1[5] = &PTR_FUN_14b08da60;
  param_1[6] = &PTR_FUN_14b08da90;
  if (param_1[0x12] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  FUN_14042c44f(param_1[0xe],*(undefined4 *)(param_1 + 0xf));
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_144760e82(param_1);
  return;
}



// FUNCTION 14042c44f FUN_14042c44f body=49 status=ok
// SIG undefined FUN_14042c44f(void)

void FUN_14042c44f(longlong param_1,int param_2)

{
  longlong *plVar1;
  
  if (param_2 != 0) {
    plVar1 = (longlong *)(param_1 + 8);
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



// FUNCTION 14042c486 FUN_14042c486 body=57 status=ok
// SIG undefined FUN_14042c486(void)

void FUN_14042c486(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6a058 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6a058 = FUN_140002ddd(FUN_146524a46,uVar1,L"InventoryTypeDef");
  }
  return;
}



// FUNCTION 14042c4c0 FUN_14042c4c0 body=373 status=ok
// SIG undefined FUN_14042c4c0(void)

void FUN_14042c4c0(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
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
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x14;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14042c54b;
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
LAB_14042c54b:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x14)) {
    uVar7 = uVar5 / 0x14 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x14,4);
  return;
}



// FUNCTION 14042c636 FUN_14042c636 body=373 status=ok
// SIG undefined FUN_14042c636(void)

void FUN_14042c636(longlong param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
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
    lVar4 = (longlong)(int)uVar3;
  }
  else {
    lVar4 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar5 = lVar4 * 0x24;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14042c6c1;
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
LAB_14042c6c1:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0x24)) {
    uVar7 = uVar5 / 0x24 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0x24,4);
  return;
}



// FUNCTION 14042c7ac FUN_14042c7ac body=382 status=ok
// SIG undefined FUN_14042c7ac(void)

void FUN_14042c7ac(ulonglong *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar2 = (uint)param_1[1];
  if ((int)uVar2 < (int)param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4();
  }
  if (*(int *)((longlong)param_1 + 0xc) == 0) {
    uVar5 = 4;
    if (4 < uVar2) {
      uVar5 = uVar2;
    }
    lVar3 = (longlong)(int)uVar5;
  }
  else {
    lVar3 = ((ulonglong)((longlong)(int)uVar2 * 3) >> 3) + (longlong)(int)uVar2 + 0x10;
  }
  uVar4 = lVar3 * 4;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar7 = uVar4 + 0xf;
      if (0x7ff0 < uVar4) {
        uVar6 = uVar7 & 0xfffffffffffffff0;
        if (uVar6 < 0x7ff1) goto LAB_14042c8b2;
        goto LAB_14042c885;
      }
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar7 >> 4]];
    }
    else {
      uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,4);
    }
  }
LAB_14042c831:
  do {
    uVar6 = 0x7fffffff;
    if ((int)uVar2 <= (int)(uVar4 >> 2)) {
      uVar6 = uVar4 >> 2 & 0xffffffff;
    }
    uVar5 = (uint)uVar6;
    *(uint *)((longlong)param_1 + 0xc) = uVar5;
    uVar4 = *param_1;
    if ((uVar4 & 1) == 0) {
      if ((uVar4 == 0) && ((int)uVar5 < 1)) {
        return;
      }
      if (-1 < (int)uVar5) {
        uVar4 = FUN_14001fdce(uVar4,uVar6 << 2,4);
        *param_1 = uVar4;
        return;
      }
    }
    else if (uVar5 <= param_2) {
      return;
    }
    uVar7 = 0;
    FUN_1467ac767();
LAB_14042c8b2:
    bVar1 = (&DAT_14c841e00)[uVar7 >> 4];
    uVar7 = 0x32;
    if (0x32 < bVar1) {
      uVar7 = (ulonglong)bVar1;
    }
    uVar8 = 0x32 - (ulonglong)bVar1;
    do {
      uVar4 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar8 & 0xffffffff];
      if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14042c831;
      lVar3 = uVar7 + 1 + uVar8;
      uVar8 = uVar8 - 1;
    } while (lVar3 != 0x33);
LAB_14042c885:
    uVar4 = 0x10;
    if (0x10 < DAT_14c841df8) {
      uVar4 = (ulonglong)DAT_14c841df8;
    }
    uVar4 = -uVar4 & (uVar6 + uVar4) - 1;
  } while( true );
}



// FUNCTION 14042c92a FUN_14042c92a body=113 status=ok
// SIG undefined FUN_14042c92a(void)

undefined8 FUN_14042c92a(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar2 = (**(code **)(*param_1 + 8))();
  FUN_1402057ac(param_2,param_1,uVar2,0);
  (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if (*param_2 == 0) {
    puVar3 = &DAT_14c9a1308;
  }
  else {
    puVar3 = (undefined8 *)FUN_1446e60f4(*param_2,&DAT_14cb87170);
  }
  if (((byte *)*puVar3 != (byte *)0x0) && ((*(byte *)*puVar3 & 3) != 0)) {
    uVar1 = FUN_1410c4486(puVar3,0);
    *(undefined1 *)((longlong)param_1 + 0x7d) = uVar1;
  }
  return 1;
}



// FUNCTION 14042c9a2 FUN_14042c9a2 body=57 status=ok
// SIG undefined FUN_14042c9a2(void)

void FUN_14042c9a2(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6dc80 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6dc80 = FUN_140002ddd(FUN_14653825d,uVar1,L"ObjectiveTypeSettings_Composite");
  }
  return;
}



// FUNCTION 14042c9dc FUN_14042c9dc body=157 status=ok
// SIG undefined FUN_14042c9dc(void)

void FUN_14042c9dc(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined1 auStackY_58 [32];
  uint local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStackY_58;
  if (*(int *)(param_1 + 0x10) != 0) {
    do {
      lVar1 = *(longlong *)(param_1 + 8);
      lVar2 = *(longlong *)(lVar1 + 0x10);
      if (lVar2 != 0) {
        LOCK();
        *(undefined4 *)(*(longlong *)(lVar2 + 0x50) + 8) = 1;
        UNLOCK();
        local_2c = *(uint *)(lVar2 + 0x38);
        AK::SoundEngine::PrepareEvent
                  (1,&local_2c,1,(_func_void_uint_void_ptr_AKRESULT_void_ptr *)&LAB_1438abac4,
                   *(void **)(lVar2 + 0x50));
      }
      FUN_14042ca7a(param_1,lVar1);
    } while (*(int *)(param_1 + 0x10) != 0);
  }
  if ((local_28 ^ (ulonglong)auStackY_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042ca7a FUN_14042ca7a body=75 status=ok
// SIG undefined FUN_14042ca7a(void)

void FUN_14042ca7a(longlong *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if ((longlong *)param_2[1] == (longlong *)0x0) {
    *param_1 = lVar2;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 8) = 0;
      lVar2 = *param_2;
      goto LAB_14042ca9e;
    }
  }
  else {
    *(longlong *)param_2[1] = lVar2;
LAB_14042ca9e:
    if (lVar2 != 0) {
      *(longlong *)(lVar2 + 8) = param_2[1];
      goto LAB_14042cac1;
    }
  }
  puVar1 = (undefined8 *)param_2[1];
  param_1[1] = (longlong)puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 0;
  }
LAB_14042cac1:
  *(int *)(param_1 + 2) = (int)param_1[2] + -1;
  return;
}



// FUNCTION 14042cac6 FUN_14042cac6 body=1908 status=ok
// SIG undefined FUN_14042cac6(void)

void FUN_14042cac6(longlong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  ulonglong uVar20;
  longlong lVar21;
  undefined1 auStack_138 [36];
  uint local_114;
  uint *local_110;
  int local_104;
  longlong *local_100;
  uint *local_f8;
  uint *local_f0;
  uint local_e4;
  uint *local_e0;
  ulonglong local_d8;
  undefined8 *local_d0;
  ulonglong local_c8;
  int *local_c0;
  uint *local_b8;
  undefined8 uStack_b0;
  ulonglong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulonglong uStack_70;
  longlong *local_68;
  ulonglong uStack_60;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_138;
  local_d0 = param_2;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  if (cVar4 == '\0') {
    local_110 = (uint *)(param_1 + 0x5d);
    plVar1 = param_1 + 0x5f;
    local_b8 = (uint *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = uStack_a0 & 0xffffffff00000000;
    uStack_b0 = plVar1;
    if ((int)param_1[0x62] == 0) {
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_b8);
      iVar12 = (int)param_1[0x62];
    }
    local_78 = local_a8;
    uVar13 = local_78;
    uStack_70 = uStack_a0;
    local_88 = local_b8;
    uStack_80 = uStack_b0;
    local_90 = local_110;
    local_78._4_4_ = (uint)(local_a8 >> 0x20);
    if ((local_78._4_4_ != iVar12) || (uStack_b0 != plVar1)) {
      iVar19 = local_78._4_4_;
      local_78 = uVar13;
      do {
        lVar15 = *(longlong *)(*(longlong *)local_90 + 0x10 + (longlong)iVar19 * 0x20);
        if ((lVar15 != 0) && (*(longlong *)(lVar15 + 0x30) != 0)) {
          uVar13 = lVar15 + 0x80;
          local_68 = (longlong *)&DAT_100000000;
          local_58 = 0xffffffff;
          uStack_50 = 0;
          uStack_60 = uVar13;
          if (*(int *)(lVar15 + 0x98) == 0) {
            iVar19 = 0;
          }
          else {
            FUN_1449c0562(&local_68);
            iVar19 = *(int *)(lVar15 + 0x98);
          }
          puVar10 = (uint *)(lVar15 + 0x70);
          uStack_98 = CONCAT44(uStack_4c,uStack_50);
          uStack_a0 = local_58;
          uVar16 = uStack_a0;
          uStack_b0 = local_68;
          local_a8 = uStack_60;
          uStack_a0._4_4_ = (int)(local_58 >> 0x20);
          iVar5 = uStack_a0._4_4_;
          local_b8 = puVar10;
          if ((uStack_a0._4_4_ != iVar19) || (uStack_a0 = uVar16, uStack_60 != uVar13)) {
            do {
              uStack_a0 = uVar16;
              plVar2 = *(longlong **)
                        (*(longlong *)(*(longlong *)local_b8 + 0x10 + (longlong)iVar5 * 0x20) + 0x30
                        );
              if (plVar2 != (longlong *)0x0) {
                lVar15 = (**(code **)(*plVar2 + 8))(plVar2);
                lVar21 = FUN_140067708();
                if (((lVar21 != 0) && (*(int *)(lVar21 + 0x38) <= *(int *)(lVar15 + 0x38))) &&
                   (*(longlong *)
                     (*(longlong *)(lVar15 + 0x30) + (longlong)*(int *)(lVar21 + 0x38) * 8) ==
                    lVar21 + 0x30)) {
                  (*(code *)*local_d0)(local_d0[1],plVar2);
                }
              }
              uStack_a0 = CONCAT44(uStack_a0._4_4_,(uint)uStack_a0 & ~uStack_b0._4_4_);
              FUN_1449c0562(&uStack_b0);
              iVar5 = uStack_a0._4_4_;
              uVar16 = uStack_a0;
            } while (local_b8 != puVar10 || (local_a8 != uVar13 || uStack_a0._4_4_ != iVar19));
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~local_88._4_4_);
        FUN_1449c0562(&local_88);
        iVar19 = local_78._4_4_;
        uVar13 = local_78;
      } while (local_90 != local_110 || (uStack_80 != plVar1 || local_78._4_4_ != iVar12));
    }
  }
  else {
    local_f8 = (uint *)(param_1 + 0x41);
    local_90 = (uint *)&DAT_100000000;
    uStack_80 = (longlong *)&DAT_ffffffff;
    local_78 = (ulonglong)local_78._4_4_ << 0x20;
    local_88 = local_f8;
    if ((int)param_1[0x44] == 0) {
      uVar16 = 1;
      uVar17 = 0xffffffff;
      uVar11 = 0;
      iVar12 = 0;
      uVar8 = 0;
      uVar20 = 0;
    }
    else {
      FUN_1449c0562(&local_90);
      uVar20 = (ulonglong)local_90 & 0xffffffff;
      uVar16 = (ulonglong)local_90 >> 0x20;
      uVar11 = *(uint *)(param_1 + 0x44);
      uVar17 = (uint)uStack_80;
      uVar8 = uStack_80._4_4_;
      iVar12 = (uint)local_78;
    }
    plVar1 = param_1;
    puVar10 = local_88;
    uVar13 = local_78;
    if (uVar8 != uVar11 || local_88 != local_f8) {
      do {
        local_e0 = puVar10;
        local_100 = plVar1;
        local_114 = uVar11;
        lVar15 = local_100[0x3f];
        lVar21 = (longlong)(int)uVar8 * 0x70;
        local_110 = (uint *)(lVar15 + lVar21 + 0x28);
        iVar19 = *(int *)(lVar15 + lVar21 + 0x40);
        iVar18 = 0;
        uVar13 = 1;
        iVar9 = 0;
        iVar5 = 0;
        if (iVar19 != 0) {
          puVar10 = *(uint **)(lVar15 + 0x38 + lVar21);
          if (puVar10 == (uint *)0x0) {
            puVar10 = local_110;
          }
          uVar11 = *puVar10;
          if (uVar11 == 0) {
            iVar5 = iVar19 + 0x1e;
            if (-1 < iVar19 + -1) {
              iVar5 = iVar19 + -1;
            }
            uVar14 = 0;
            uVar13 = (ulonglong)(uint)(iVar5 >> 5);
            if (iVar5 >> 5 < 1) {
              uVar13 = uVar14;
            }
            iVar18 = (int)uVar13 + 1;
            iVar9 = (int)uVar13 * 0x20 + 0x20;
            iVar5 = 0;
            do {
              if (uVar13 == uVar14) {
                uVar13 = 1;
                iVar5 = iVar19;
                goto LAB_14042cc73;
              }
              iVar5 = iVar5 + 0x20;
              uVar11 = puVar10[uVar14 + 1];
              uVar14 = uVar14 + 1;
            } while (uVar11 == 0);
            iVar18 = (int)uVar14;
            iVar9 = iVar5;
          }
          else {
            iVar9 = 0;
          }
          uVar13 = (ulonglong)(-uVar11 & uVar11);
          uVar14 = uVar13 * 2 + 1;
          lVar6 = 0x3f;
          if (uVar14 != 0) {
            for (; uVar14 >> lVar6 == 0; lVar6 = lVar6 + -1) {
            }
          }
          iVar5 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
          if (iVar19 <= iVar5) {
            iVar5 = iVar19;
          }
        }
LAB_14042cc73:
        local_c0 = (int *)(lVar15 + lVar21 + 0x40);
        local_90 = (uint *)CONCAT44(1 << ((byte)iVar19 & 0x1f),iVar19 >> 5);
        uStack_80 = (longlong *)CONCAT44(iVar19,-1 << ((byte)iVar19 & 0x1f));
        local_78 = CONCAT44(local_78._4_4_,iVar19) & 0xffffffffffffffe0;
        local_104 = iVar12;
        local_e4 = uVar17;
        local_d8 = uVar16;
        local_c8 = uVar20;
        local_88 = local_110;
        if (*local_c0 != iVar19) {
          local_f0 = local_110;
          FUN_1449c0562(&local_90);
          iVar19 = uStack_80._4_4_;
        }
        local_f0 = local_88;
        if ((iVar5 != iVar19) || (local_110 != local_88)) {
          uVar11 = 0xffffffff;
          do {
            plVar1 = *(longlong **)
                      (*(longlong *)(lVar15 + lVar21 + 0x18) + 0x10 + (longlong)iVar5 * 0x20);
            if (plVar1 != (longlong *)0x0) {
              lVar6 = (**(code **)(*plVar1 + 8))(plVar1);
              lVar7 = FUN_140067708();
              if (((lVar7 != 0) && (*(int *)(lVar7 + 0x38) <= *(int *)(lVar6 + 0x38))) &&
                 (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(lVar7 + 0x38) * 8)
                  == lVar7 + 0x30)) {
                (*(code *)*local_d0)(local_d0[1],plVar1);
              }
            }
            uVar11 = uVar11 & ~(uint)uVar13;
            puVar10 = *(uint **)(lVar15 + lVar21 + 0x38);
            if (puVar10 == (uint *)0x0) {
              puVar10 = local_110;
            }
            iVar12 = *local_c0;
            lVar6 = (longlong)iVar18;
            uVar17 = puVar10[lVar6] & uVar11;
            if (uVar17 == 0) {
              iVar5 = iVar12 + 0x1e;
              if (-1 < iVar12 + -1) {
                iVar5 = iVar12 + -1;
              }
              iVar5 = iVar5 >> 5;
              iVar9 = iVar9 + 0x20;
              iVar3 = iVar5;
              if (iVar5 < iVar18) {
                iVar3 = iVar18;
              }
              if (iVar18 < iVar5) {
                lVar7 = 0;
                do {
                  uVar17 = puVar10[lVar6 + lVar7 + 1];
                  if (uVar17 != 0) {
                    iVar18 = iVar18 + (int)lVar7 + 1;
                    uVar11 = 0xffffffff;
                    goto LAB_14042cdbf;
                  }
                  iVar9 = iVar9 + 0x20;
                  lVar7 = lVar7 + 1;
                } while (iVar3 - lVar6 != lVar7);
                uVar11 = 0xffffffff;
                iVar18 = iVar3;
              }
              iVar18 = iVar18 + 1;
              iVar5 = iVar12;
            }
            else {
LAB_14042cdbf:
              uVar13 = (ulonglong)(-uVar17 & uVar17);
              uVar16 = uVar13 * 2 + 1;
              lVar6 = 0x3f;
              if (uVar16 != 0) {
                for (; uVar16 >> lVar6 == 0; lVar6 = lVar6 + -1) {
                }
              }
              iVar5 = (iVar9 - ((uint)lVar6 ^ 0x3f)) + 0x3e;
              if (iVar12 <= iVar5) {
                iVar5 = iVar12;
              }
            }
          } while ((iVar5 != iVar19) || (local_110 != local_f0));
        }
        uVar17 = local_e4 & ~(uint)local_d8;
        puVar10 = *(uint **)(local_e0 + 4);
        if (*(uint **)(local_e0 + 4) == (uint *)0x0) {
          puVar10 = local_e0;
        }
        uVar11 = local_e0[6];
        iVar19 = (int)local_c8;
        lVar15 = (longlong)iVar19;
        uVar8 = puVar10[lVar15] & uVar17;
        uVar20 = local_c8;
        iVar12 = local_104;
        if (uVar8 == 0) {
          iVar5 = uVar11 + 0x1e;
          if (-1 < (int)(uVar11 - 1)) {
            iVar5 = uVar11 - 1;
          }
          iVar5 = iVar5 >> 5;
          iVar12 = local_104 + 0x20;
          iVar18 = iVar5;
          if (iVar5 < iVar19) {
            iVar18 = iVar19;
          }
          if (iVar19 < iVar5) {
            lVar21 = 0;
            do {
              uVar8 = puVar10[lVar15 + lVar21 + 1];
              if (uVar8 != 0) {
                uVar17 = 0xffffffff;
                uVar20 = (ulonglong)(iVar19 + (int)lVar21 + 1);
                goto LAB_14042ce8c;
              }
              iVar12 = iVar12 + 0x20;
              lVar21 = lVar21 + 1;
            } while (iVar18 - lVar15 != lVar21);
            uVar17 = 0xffffffff;
            iVar19 = iVar18;
          }
          uVar20 = (ulonglong)(iVar19 + 1);
          uVar16 = local_d8;
          uVar8 = uVar11;
        }
        else {
LAB_14042ce8c:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar13 = uVar16 * 2 + 1;
          lVar15 = 0x3f;
          if (uVar13 != 0) {
            for (; uVar13 >> lVar15 == 0; lVar15 = lVar15 + -1) {
            }
          }
          uVar8 = (iVar12 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
          if ((int)uVar11 <= (int)uVar8) {
            uVar8 = uVar11;
          }
        }
        uVar11 = local_114;
        plVar1 = local_100;
        puVar10 = local_e0;
        uVar13 = local_78;
      } while (uVar8 != local_114 || local_e0 != local_f8);
    }
  }
  local_78 = uVar13;
  if ((local_48 ^ (ulonglong)auStack_138) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042d23c FUN_14042d23c body=4493 status=ok
// SIG undefined FUN_14042d23c(void)

void FUN_14042d23c(longlong *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  int iVar13;
  ulonglong uVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong *plVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong *plVar21;
  uint *puVar22;
  longlong *plVar23;
  undefined8 *puVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  undefined1 auStack_178 [40];
  uint *local_150;
  longlong *local_148;
  uint *local_140;
  uint *local_138;
  longlong *local_130;
  uint *local_128;
  uint local_11c;
  uint *local_118;
  ulonglong local_110;
  longlong *local_108;
  ulonglong local_100;
  ulonglong local_f8;
  char local_ec [4];
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  char local_b9;
  longlong *local_b8;
  longlong *plStack_b0;
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined8 local_80;
  ulonglong uStack_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_178;
  cVar4 = (**(code **)(*param_1 + 0x300))();
  local_148 = param_1;
  if (cVar4 == '\0') {
    local_140 = (uint *)(param_1 + 0x5d);
    local_130 = param_1 + 0x5f;
    local_e8 = (longlong *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = (uint *)local_130;
    if ((int)param_1[0x62] == 0) {
      local_138 = (uint *)((ulonglong)local_138 & 0xffffffff00000000);
    }
    else {
      FUN_1449c0562(&local_e8);
      local_138 = (uint *)CONCAT44(local_138._4_4_,(int)local_148[0x62]);
    }
    plVar23 = local_148;
    local_88 = (undefined4)uStack_e0;
    uStack_84 = uStack_e0._4_4_;
    uStack_78 = uStack_d0;
    local_80 = local_d8;
    plVar21 = local_80;
    uStack_90 = local_e8;
    local_98 = (longlong *)local_140;
    local_80._4_4_ = (int)((ulonglong)local_d8 >> 0x20);
    iVar13 = local_80._4_4_;
    if ((local_80._4_4_ != (int)local_138) || (local_80 = local_d8, uStack_e0 != (uint *)local_130))
    {
      do {
        local_80 = plVar21;
        local_150 = (uint *)*local_98;
        lVar18 = *(longlong *)((longlong)local_150 + ((longlong)iVar13 * 4 + 2) * 8);
        if (lVar18 != 0) {
          plVar21 = (longlong *)(lVar18 + 0x80);
          local_b8 = (longlong *)&DAT_100000000;
          local_a8 = 0xffffffff;
          uStack_a0 = 0;
          plStack_b0 = plVar21;
          if (*(int *)(lVar18 + 0x98) == 0) {
            iVar12 = 0;
          }
          else {
            FUN_1449c0562(&local_b8);
            iVar12 = *(int *)(lVar18 + 0x98);
          }
          plVar17 = (longlong *)(lVar18 + 0x70);
          local_c8 = CONCAT44(uStack_9c,uStack_a0);
          uStack_d0 = local_a8;
          uVar16 = uStack_d0;
          uStack_e0 = (uint *)local_b8;
          local_d8 = plStack_b0;
          uStack_d0._4_4_ = (uint)(local_a8 >> 0x20);
          iVar6 = uStack_d0._4_4_;
          local_e8 = plVar17;
          if ((uStack_d0._4_4_ != iVar12) || (uStack_d0 = uVar16, plStack_b0 != plVar21)) {
            do {
              uStack_d0 = uVar16;
              lVar18 = *local_e8;
              lVar25 = (longlong)iVar6 * 0x20;
              (**(code **)(*plVar23 + 0x478))
                        (plVar23,*(undefined8 *)(*(longlong *)(lVar18 + 0x10 + lVar25) + 0x30));
              *(undefined8 *)(*(longlong *)(lVar18 + 0x10 + lVar25) + 0x30) = 0;
              (**(code **)(*plVar23 + 0x488))
                        (plVar23,*(undefined8 *)(*(longlong *)(lVar18 + 0x10 + lVar25) + 0x38));
              *(undefined8 *)(*(longlong *)(lVar18 + 0x10 + lVar25) + 0x38) = 0;
              uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
              FUN_1449c0562(&uStack_e0);
              iVar6 = uStack_d0._4_4_;
              uVar16 = uStack_d0;
            } while (local_e8 != plVar17 || (local_d8 != plVar21 || uStack_d0._4_4_ != iVar12));
          }
          plVar21 = (longlong *)((longlong)local_150 + ((longlong)iVar13 * 4 + 2) * 8);
          (**(code **)(*local_148 + 0x468))(local_148,*(undefined8 *)(*plVar21 + 0x30));
          *(undefined8 *)(*plVar21 + 0x30) = 0;
        }
        local_80 = (longlong *)CONCAT44(local_80._4_4_,(uint)local_80 & ~uStack_90._4_4_);
        FUN_1449c0562(&uStack_90);
        iVar13 = local_80._4_4_;
        plVar21 = local_80;
      } while ((uint *)local_98 != local_140 ||
               ((longlong *)CONCAT44(uStack_84,local_88) != local_130 ||
               local_80._4_4_ != (int)local_138));
    }
  }
  else {
    uStack_78 = 0;
    iVar13 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffffffffff00);
    local_150 = (uint *)(param_1 + 0x6a);
    local_e8 = (longlong *)0x100000000;
    local_d8 = (longlong *)0xffffffff;
    uStack_d0 = (ulonglong)uStack_d0._4_4_ << 0x20;
    uStack_e0 = local_150;
    if ((int)param_1[0x6d] == 0) {
      uVar16 = 1;
      local_d8._0_4_ = 0xffffffff;
      iVar12 = 0;
      local_d8._4_4_ = 0;
      local_e8._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar16 = (ulonglong)local_e8 >> 0x20;
      iVar13 = (int)param_1[0x6d];
      iVar12 = (uint)uStack_d0;
    }
    plVar23 = (longlong *)uStack_e0;
    iVar6 = (uint)local_e8;
    uVar15 = (uint)local_d8;
    iVar5 = local_d8._4_4_;
    if (local_d8._4_4_ != iVar13 || uStack_e0 != local_150) {
      do {
        lVar18 = param_1[0x68];
        if (*(longlong *)(lVar18 + 8 + (longlong)iVar5 * 0x18) != 0) {
          puVar24 = (undefined8 *)(lVar18 + (longlong)iVar5 * 0x18 + 8);
          FUN_14042e8e0(&local_98,&local_e8,puVar24,&local_b8);
          if ((char)local_b8 == '\0') {
            (**(code **)(*local_148 + 0x488))(local_148,*puVar24);
          }
        }
        uVar15 = uVar15 & ~(uint)uVar16;
        plVar21 = (longlong *)plVar23[2];
        if ((longlong *)plVar23[2] == (longlong *)0x0) {
          plVar21 = plVar23;
        }
        iVar1 = (int)plVar23[3];
        lVar18 = (longlong)iVar6;
        uVar7 = *(uint *)((longlong)plVar21 + lVar18 * 4) & uVar15;
        if (uVar7 == 0) {
          iVar5 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar5 = iVar1 + -1;
          }
          iVar5 = iVar5 >> 5;
          iVar12 = iVar12 + 0x20;
          iVar3 = iVar5;
          if (iVar5 < iVar6) {
            iVar3 = iVar6;
          }
          if (iVar6 < iVar5) {
            lVar25 = 0;
            do {
              uVar7 = *(uint *)((longlong)plVar21 + lVar25 * 4 + lVar18 * 4 + 4);
              if (uVar7 != 0) {
                iVar6 = iVar6 + (int)lVar25 + 1;
                uVar15 = 0xffffffff;
                goto LAB_14042d41b;
              }
              iVar12 = iVar12 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar3 - lVar18 != lVar25);
            uVar15 = 0xffffffff;
            iVar6 = iVar3;
          }
          iVar6 = iVar6 + 1;
          iVar5 = iVar1;
        }
        else {
LAB_14042d41b:
          uVar16 = (ulonglong)(-uVar7 & uVar7);
          uVar27 = uVar16 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar5 = (iVar12 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar5) {
            iVar5 = iVar1;
          }
        }
      } while (iVar5 != iVar13 || (uint *)plVar23 != local_150);
    }
    FUN_14570f2d8(param_1 + 0x68);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar23 = local_148;
    uVar15 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b8 = (longlong *)((ulonglong)local_b8 & 0xffffffffffffff00);
    local_150 = (uint *)(local_148 + 0x74);
    local_e8 = (longlong *)0x100000000;
    local_d8 = (longlong *)0xffffffff;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    uStack_e0 = local_150;
    if ((int)local_148[0x77] == 0) {
      uVar16 = 1;
      local_d8._0_4_ = 0xffffffff;
      iVar13 = 0;
      local_d8._4_4_ = 0;
      local_e8._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar16 = (ulonglong)local_e8 >> 0x20;
      uVar15 = *(uint *)(plVar23 + 0x77);
      iVar13 = (uint)uStack_d0;
    }
    puVar20 = uStack_e0;
    plVar23 = plVar23 + 0x72;
    iVar12 = (uint)local_e8;
    uVar7 = (uint)local_d8;
    uVar8 = local_d8._4_4_;
    if (local_d8._4_4_ != uVar15 || uStack_e0 != local_150) {
      do {
        lVar18 = *plVar23;
        if (*(longlong *)(lVar18 + 8 + (longlong)(int)uVar8 * 0x18) != 0) {
          puVar24 = (undefined8 *)(lVar18 + (longlong)(int)uVar8 * 0x18 + 8);
          FUN_14042e8e0(&local_98,&local_e8,puVar24,&local_b8);
          if ((char)local_b8 == '\0') {
            (**(code **)(*local_148 + 0x488))(local_148,*puVar24);
          }
        }
        uVar7 = uVar7 & ~(uint)uVar16;
        puVar22 = *(uint **)(puVar20 + 4);
        if (*(uint **)(puVar20 + 4) == (uint *)0x0) {
          puVar22 = puVar20;
        }
        uVar2 = puVar20[6];
        lVar18 = (longlong)iVar12;
        uVar8 = puVar22[lVar18] & uVar7;
        if (uVar8 == 0) {
          iVar6 = uVar2 + 0x1e;
          if (-1 < (int)(uVar2 - 1)) {
            iVar6 = uVar2 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar13 = iVar13 + 0x20;
          iVar5 = iVar6;
          if (iVar6 < iVar12) {
            iVar5 = iVar12;
          }
          if (iVar12 < iVar6) {
            lVar25 = 0;
            do {
              uVar8 = puVar22[lVar18 + lVar25 + 1];
              if (uVar8 != 0) {
                iVar12 = iVar12 + (int)lVar25 + 1;
                uVar7 = 0xffffffff;
                goto LAB_14042d619;
              }
              iVar13 = iVar13 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar5 - lVar18 != lVar25);
            uVar7 = 0xffffffff;
            iVar12 = iVar5;
          }
          iVar12 = iVar12 + 1;
          uVar8 = uVar2;
        }
        else {
LAB_14042d619:
          uVar16 = (ulonglong)(-uVar8 & uVar8);
          uVar27 = uVar16 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar8 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar2 <= (int)uVar8) {
            uVar8 = uVar2;
          }
        }
      } while (uVar8 != uVar15 || puVar20 != local_150);
    }
    FUN_14570f2d8(plVar23);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar23 = local_148;
    uVar16 = 0;
    uStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_ec[0] = '\0';
    local_128 = (uint *)(local_148 + 0x41);
    local_e8 = (longlong *)0x100000000;
    local_d8._0_4_ = 0xffffffff;
    local_d8._4_4_ = 0;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    uStack_e0 = local_128;
    if ((int)local_148[0x44] == 0) {
      uVar27 = 1;
      iVar13 = 0;
      local_e8._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar27 = (ulonglong)local_e8 >> 0x20;
      uVar16 = (ulonglong)*(uint *)(plVar23 + 0x44);
      iVar13 = (uint)uStack_d0;
    }
    uVar26 = (ulonglong)(uint)local_e8;
    local_108 = plVar23 + 0x3f;
    uVar15 = (uint)local_d8;
    uVar7 = local_d8._4_4_;
    puVar20 = uStack_e0;
    if (local_d8._4_4_ != (uint)uVar16 || uStack_e0 != local_128) {
      do {
        local_110 = uVar16;
        local_118 = puVar20;
        lVar18 = *local_108;
        lVar25 = (longlong)(int)uVar7 * 0x70;
        local_e8 = *(longlong **)(lVar18 + 0x10 + lVar25);
        local_11c = uVar15;
        if ((local_e8 != (longlong *)0x0) &&
           (FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec), local_ec[0] == '\0')) {
          (**(code **)(*plVar23 + 0x468))(plVar23,*(undefined8 *)(lVar18 + lVar25 + 0x10));
        }
        local_150 = (uint *)(lVar18 + lVar25 + 0x28);
        local_d8._4_4_ = *(uint *)(lVar18 + lVar25 + 0x40);
        uVar16 = 1;
        local_130 = (longlong *)CONCAT44(local_130._4_4_,iVar13);
        if (local_d8._4_4_ == 0) {
          uVar14 = 0;
          iVar13 = 0;
          uVar15 = 0;
        }
        else {
          puVar20 = *(uint **)(lVar18 + 0x38 + lVar25);
          if (puVar20 == (uint *)0x0) {
            puVar20 = local_150;
          }
          uVar15 = *puVar20;
          if (uVar15 == 0) {
            iVar13 = local_d8._4_4_ + 0x1e;
            if (-1 < (int)(local_d8._4_4_ - 1)) {
              iVar13 = local_d8._4_4_ - 1;
            }
            uVar19 = 0;
            uVar9 = (ulonglong)(uint)(iVar13 >> 5);
            if (iVar13 >> 5 < 1) {
              uVar9 = uVar19;
            }
            uVar14 = (ulonglong)((int)uVar9 + 1);
            iVar13 = (int)uVar9 * 0x20 + 0x20;
            iVar12 = 0;
            do {
              uVar15 = local_d8._4_4_;
              if (uVar9 == uVar19) goto LAB_14042d87c;
              iVar12 = iVar12 + 0x20;
              uVar15 = puVar20[uVar19 + 1];
              uVar19 = uVar19 + 1;
            } while (uVar15 == 0);
            uVar14 = uVar19 & 0xffffffff;
            iVar13 = iVar12;
          }
          else {
            uVar14 = 0;
            iVar13 = 0;
          }
          uVar16 = (ulonglong)(-uVar15 & uVar15);
          uVar9 = uVar16 * 2 + 1;
          lVar10 = 0x3f;
          if (uVar9 != 0) {
            for (; uVar9 >> lVar10 == 0; lVar10 = lVar10 + -1) {
            }
          }
          uVar15 = (iVar13 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
          if ((int)local_d8._4_4_ <= (int)uVar15) {
            uVar15 = local_d8._4_4_;
          }
        }
LAB_14042d87c:
        local_140 = (uint *)(lVar18 + lVar25 + 0x40);
        local_e8 = (longlong *)CONCAT44(1 << ((byte)local_d8._4_4_ & 0x1f),(int)local_d8._4_4_ >> 5)
        ;
        local_d8._0_4_ = -1 << ((byte)local_d8._4_4_ & 0x1f);
        uStack_d0 = CONCAT44(uStack_d0._4_4_,local_d8._4_4_) & 0xffffffffffffffe0;
        local_100 = uVar27;
        local_f8 = uVar26;
        uStack_e0 = local_150;
        if (*local_140 != local_d8._4_4_) {
          local_138 = local_150;
          FUN_1449c0562(&local_e8);
        }
        uVar7 = local_d8._4_4_;
        local_138 = uStack_e0;
        if ((uVar15 != local_d8._4_4_) || (local_150 != uStack_e0)) {
          uVar8 = 0xffffffff;
          do {
            iVar12 = (int)uVar14;
            lVar10 = *(longlong *)(lVar25 + lVar18 + 0x18);
            local_e8 = *(longlong **)(lVar10 + 0x10 + (longlong)(int)uVar15 * 0x20);
            FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec);
            if (local_ec[0] == '\0') {
              (**(code **)(*local_148 + 0x478))
                        (local_148,*(undefined8 *)(lVar10 + (longlong)(int)uVar15 * 0x20 + 0x10));
            }
            uVar8 = uVar8 & ~(uint)uVar16;
            puVar20 = *(uint **)(lVar25 + lVar18 + 0x38);
            if (puVar20 == (uint *)0x0) {
              puVar20 = local_150;
            }
            uVar2 = *local_140;
            lVar10 = (longlong)iVar12;
            uVar15 = puVar20[lVar10] & uVar8;
            if (uVar15 == 0) {
              iVar6 = uVar2 + 0x1e;
              if (-1 < (int)(uVar2 - 1)) {
                iVar6 = uVar2 - 1;
              }
              iVar6 = iVar6 >> 5;
              iVar13 = iVar13 + 0x20;
              iVar5 = iVar6;
              if (iVar6 < iVar12) {
                iVar5 = iVar12;
              }
              if (iVar12 < iVar6) {
                lVar11 = 0;
                do {
                  uVar15 = puVar20[lVar10 + lVar11 + 1];
                  if (uVar15 != 0) {
                    uVar14 = (ulonglong)(iVar12 + (int)lVar11 + 1);
                    uVar8 = 0xffffffff;
                    goto LAB_14042d9d7;
                  }
                  iVar13 = iVar13 + 0x20;
                  lVar11 = lVar11 + 1;
                } while (iVar5 - lVar10 != lVar11);
                uVar8 = 0xffffffff;
                iVar12 = iVar5;
              }
              uVar14 = (ulonglong)(iVar12 + 1);
              uVar15 = uVar2;
            }
            else {
LAB_14042d9d7:
              uVar16 = (ulonglong)(-uVar15 & uVar15);
              uVar27 = uVar16 * 2 + 1;
              lVar10 = 0x3f;
              if (uVar27 != 0) {
                for (; uVar27 >> lVar10 == 0; lVar10 = lVar10 + -1) {
                }
              }
              uVar15 = (iVar13 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
              if ((int)uVar2 <= (int)uVar15) {
                uVar15 = uVar2;
              }
            }
          } while ((uVar15 != uVar7) || (local_150 != local_138));
        }
        uVar15 = local_11c & ~(uint)local_100;
        puVar20 = *(uint **)(local_118 + 4);
        if (*(uint **)(local_118 + 4) == (uint *)0x0) {
          puVar20 = local_118;
        }
        uVar8 = local_118[6];
        iVar12 = (int)local_f8;
        lVar18 = (longlong)iVar12;
        uVar7 = puVar20[lVar18] & uVar15;
        uVar26 = local_f8;
        iVar13 = (int)local_130;
        if (uVar7 == 0) {
          iVar6 = uVar8 + 0x1e;
          if (-1 < (int)(uVar8 - 1)) {
            iVar6 = uVar8 - 1;
          }
          iVar6 = iVar6 >> 5;
          iVar13 = (int)local_130 + 0x20;
          iVar5 = iVar6;
          if (iVar6 < iVar12) {
            iVar5 = iVar12;
          }
          if (iVar12 < iVar6) {
            lVar25 = 0;
            do {
              uVar7 = puVar20[lVar18 + lVar25 + 1];
              if (uVar7 != 0) {
                uVar15 = 0xffffffff;
                uVar26 = (ulonglong)(iVar12 + (int)lVar25 + 1);
                goto LAB_14042daa6;
              }
              iVar13 = iVar13 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar5 - lVar18 != lVar25);
            uVar15 = 0xffffffff;
            iVar12 = iVar5;
          }
          uVar26 = (ulonglong)(iVar12 + 1);
          uVar27 = local_100;
          uVar7 = uVar8;
        }
        else {
LAB_14042daa6:
          uVar27 = (ulonglong)(-uVar7 & uVar7);
          uVar16 = uVar27 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar16 != 0) {
            for (; uVar16 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          uVar7 = (iVar13 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if ((int)uVar8 <= (int)uVar7) {
            uVar7 = uVar8;
          }
        }
        plVar23 = local_148;
        puVar20 = local_118;
        uVar16 = local_110;
      } while (uVar7 != (uint)local_110 || local_118 != local_128);
    }
    iVar13 = 0;
    FUN_14570f31c(local_108,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    plVar21 = plVar23 + 0x49;
    uStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_b9 = '\0';
    plVar17 = plVar23 + 0x4b;
    local_b8 = (longlong *)&DAT_100000000;
    local_a8 = 0xffffffff;
    uStack_a0 = 0;
    plStack_b0 = plVar17;
    if ((int)plVar23[0x4e] != 0) {
      FUN_1449c0562(&local_b8);
      iVar13 = (int)plVar23[0x4e];
    }
    uStack_d0 = local_a8;
    uVar16 = uStack_d0;
    local_c8 = CONCAT44(uStack_9c,uStack_a0);
    uStack_e0 = (uint *)local_b8;
    local_d8 = plStack_b0;
    uStack_d0._4_4_ = (uint)(local_a8 >> 0x20);
    iVar12 = uStack_d0._4_4_;
    local_e8 = plVar21;
    if ((uStack_d0._4_4_ != iVar13) || (uStack_d0 = uVar16, plStack_b0 != plVar17)) {
      do {
        uStack_d0 = uVar16;
        lVar18 = *local_e8;
        plVar23 = *(longlong **)(lVar18 + 0x10 + (longlong)iVar12 * 0x20);
        if ((plVar23 != (longlong *)0x0) &&
           (local_b8 = plVar23, FUN_14042e430(&local_98,local_ec,&local_b8,&local_b9),
           local_b9 == '\0')) {
          (**(code **)(*local_148 + 0x468))
                    (local_148,*(undefined8 *)(lVar18 + (longlong)iVar12 * 0x20 + 0x10));
        }
        uStack_d0 = CONCAT44(uStack_d0._4_4_,(uint)uStack_d0 & ~uStack_e0._4_4_);
        FUN_1449c0562(&uStack_e0);
        iVar12 = uStack_d0._4_4_;
        uVar16 = uStack_d0;
      } while (((uStack_d0._4_4_ != iVar13) || (local_d8 != plVar17)) ||
              (plVar23 = local_148, local_e8 != plVar21));
    }
    iVar13 = 0;
    FUN_1410f1df6(plVar21,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
    uStack_78 = 0;
    local_70 = 0;
    local_98 = (longlong *)0x0;
    uStack_90 = (longlong *)0x0;
    local_6c = 0xffffffff00000080;
    local_64 = 0;
    local_58 = 0;
    local_50 = 0;
    local_ec[0] = '\0';
    local_140 = (uint *)(plVar23 + 0x55);
    local_e8 = (longlong *)&DAT_100000000;
    local_d8 = (longlong *)&DAT_ffffffff;
    uStack_d0 = uStack_d0 & 0xffffffff00000000;
    uStack_e0 = local_140;
    if ((int)plVar23[0x58] == 0) {
      uVar16 = 1;
      uVar15 = 0xffffffff;
      iVar5 = 0;
      iVar6 = 0;
      iVar12 = 0;
    }
    else {
      FUN_1449c0562(&local_e8);
      uVar16 = (ulonglong)local_e8 >> 0x20;
      iVar13 = (int)plVar23[0x58];
      iVar12 = (uint)local_e8;
      uVar15 = (uint)local_d8;
      iVar6 = local_d8._4_4_;
      iVar5 = (uint)uStack_d0;
    }
    plVar21 = (longlong *)uStack_e0;
    local_150 = (uint *)(plVar23 + 0x53);
    if (iVar6 != iVar13 || uStack_e0 != local_140) {
      do {
        lVar18 = *(longlong *)local_150;
        plVar23 = *(longlong **)(lVar18 + 0x10 + (longlong)iVar6 * 0x20);
        if ((plVar23 != (longlong *)0x0) &&
           (local_e8 = plVar23, FUN_14042e430(&local_98,&local_b8,&local_e8,local_ec),
           local_ec[0] == '\0')) {
          (**(code **)(*local_148 + 0x478))
                    (local_148,*(undefined8 *)(lVar18 + (longlong)iVar6 * 0x20 + 0x10));
        }
        uVar15 = uVar15 & ~(uint)uVar16;
        plVar23 = (longlong *)plVar21[2];
        if ((longlong *)plVar21[2] == (longlong *)0x0) {
          plVar23 = plVar21;
        }
        iVar1 = (int)plVar21[3];
        lVar18 = (longlong)iVar12;
        uVar7 = *(uint *)((longlong)plVar23 + lVar18 * 4) & uVar15;
        if (uVar7 == 0) {
          iVar6 = iVar1 + 0x1e;
          if (-1 < iVar1 + -1) {
            iVar6 = iVar1 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar5 = iVar5 + 0x20;
          iVar3 = iVar6;
          if (iVar6 < iVar12) {
            iVar3 = iVar12;
          }
          if (iVar12 < iVar6) {
            lVar25 = 0;
            do {
              uVar7 = *(uint *)((longlong)plVar23 + lVar25 * 4 + lVar18 * 4 + 4);
              if (uVar7 != 0) {
                iVar12 = iVar12 + (int)lVar25 + 1;
                uVar15 = 0xffffffff;
                goto LAB_14042ddfe;
              }
              iVar5 = iVar5 + 0x20;
              lVar25 = lVar25 + 1;
            } while (iVar3 - lVar18 != lVar25);
            uVar15 = 0xffffffff;
            iVar12 = iVar3;
          }
          iVar12 = iVar12 + 1;
          iVar6 = iVar1;
        }
        else {
LAB_14042ddfe:
          uVar16 = (ulonglong)(-uVar7 & uVar7);
          uVar27 = uVar16 * 2 + 1;
          lVar18 = 0x3f;
          if (uVar27 != 0) {
            for (; uVar27 >> lVar18 == 0; lVar18 = lVar18 + -1) {
            }
          }
          iVar6 = (iVar5 - ((uint)lVar18 ^ 0x3f)) + 0x3e;
          if (iVar1 <= iVar6) {
            iVar6 = iVar1;
          }
        }
      } while (iVar6 != iVar13 || (uint *)plVar21 != local_140);
    }
    FUN_14570f388(local_150,0);
    local_50 = 0;
    if (local_58 != 0) {
      FUN_1400020a8();
    }
    FUN_14041e672(&local_98);
  }
  FUN_14042ef50(local_148);
  if ((local_48 ^ (ulonglong)auStack_178) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042e3ca FUN_14042e3ca body=50 status=ok
// SIG undefined FUN_14042e3ca(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042e3ca(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    AK::SoundEngine::CancelBankCallbackCookie(param_2);
    _DAT_14cb263b4 = _DAT_14cb263b4 + -1;
    *param_2 = DAT_14cb263a8;
    DAT_14cb263a8 = param_2;
  }
  return;
}



// FUNCTION 14042e3fc FUN_14042e3fc body=52 status=ok
// SIG undefined FUN_14042e3fc(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042e3fc(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb263a4 = _DAT_14cb263a4 + -1;
    *param_2 = DAT_14cb26398;
    DAT_14cb26398 = param_2;
  }
  return;
}



// FUNCTION 14042e430 FUN_14042e430 body=335 status=ok
// SIG undefined FUN_14042e430(void)

undefined4 *
FUN_14042e430(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_14042e610(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14042e580(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      FUN_14042ebda(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042e580 FUN_14042e580 body=144 status=ok
// SIG undefined FUN_14042e580(void)

void FUN_14042e580(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_14042eb50(param_1,*param_4,1);
          *param_4 = iVar3;
          uVar1 = 1;
          goto LAB_14042e5eb;
        }
        iVar3 = (int)plVar2[1];
      } while (iVar3 != -1);
    }
  }
  uVar1 = 0;
LAB_14042e5eb:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar1;
  }
  return;
}



// FUNCTION 14042e610 FUN_14042e610 body=719 status=ok
// SIG undefined FUN_14042e610(void)

int * FUN_14042e610(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_1446efaca(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14042e7d2;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14042e7d2:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x10);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x10) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x10 + *param_1;
  return param_2;
}



// FUNCTION 14042e8e0 FUN_14042e8e0 body=335 status=ok
// SIG undefined FUN_14042e8e0(void)

undefined4 *
FUN_14042e8e0(longlong param_1,undefined4 *param_2,ulonglong *param_3,undefined8 param_4)

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
  FUN_14042e610(param_1,local_50);
  uVar3 = *param_3;
  *local_48 = uVar3;
  *(undefined4 *)(local_48 + 1) = 0xffffffff;
  local_54 = local_50[0];
  uVar2 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
  uVar2 = (uVar2 >> 0xd ^ uVar2) * -0x3d4d51cb;
  uVar2 = uVar2 >> 0x10 ^ uVar2;
  local_68 = param_4;
  cVar1 = FUN_14042e580(param_1,uVar2,local_48);
  if (cVar1 == '\0') {
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x34);
    if (uVar4 < 4) {
      iVar5 = 1;
    }
    else {
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
      FUN_14042ebda(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042ea30 FUN_14042ea30 body=52 status=ok
// SIG undefined FUN_14042ea30(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042ea30(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb263c4 = _DAT_14cb263c4 + -1;
    *param_2 = DAT_14cb263b8;
    DAT_14cb263b8 = param_2;
  }
  return;
}



// FUNCTION 14042ea64 FUN_14042ea64 body=132 status=ok
// SIG undefined FUN_14042ea64(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_14042ea64(undefined8 *param_1,int param_2)

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



// FUNCTION 14042eae8 FUN_14042eae8 body=52 status=ok
// SIG undefined FUN_14042eae8(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042eae8(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb264ec = _DAT_14cb264ec + -1;
    *param_2 = DAT_14cb264e0;
    DAT_14cb264e0 = param_2;
  }
  return;
}



// FUNCTION 14042eb1c FUN_14042eb1c body=52 status=ok
// SIG undefined FUN_14042eb1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042eb1c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb26414 = _DAT_14cb26414 + -1;
    *param_2 = DAT_14cb26408;
    DAT_14cb26408 = param_2;
  }
  return;
}



// FUNCTION 14042eb50 FUN_14042eb50 body=138 status=ok
// SIG undefined FUN_14042eb50(void)

void FUN_14042eb50(longlong *param_1,int param_2,int param_3)

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



// FUNCTION 14042ebda FUN_14042ebda body=670 status=ok
// SIG undefined FUN_14042ebda(void)

void FUN_14042ebda(longlong *param_1)

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
    if ((int)uVar7 < 1) goto LAB_14042ec4d;
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
LAB_14042ec4d:
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



// FUNCTION 14042ee78 FUN_14042ee78 body=52 status=ok
// SIG undefined FUN_14042ee78(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042ee78(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb26424 = _DAT_14cb26424 + -1;
    *param_2 = DAT_14cb26418;
    DAT_14cb26418 = param_2;
  }
  return;
}



// FUNCTION 14042eeac FUN_14042eeac body=52 status=ok
// SIG undefined FUN_14042eeac(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042eeac(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb264fc = _DAT_14cb264fc + -1;
    *param_2 = DAT_14cb264f0;
    DAT_14cb264f0 = param_2;
  }
  return;
}



// FUNCTION 14042eee0 FUN_14042eee0 body=60 status=ok
// SIG undefined FUN_14042eee0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042eee0(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    AK::SoundEngine::CancelBankCallbackCookie(param_2);
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_2 + 1));
    _DAT_14cb2646c = _DAT_14cb2646c + -1;
    *param_2 = DAT_14cb26460;
    DAT_14cb26460 = param_2;
  }
  return;
}



// FUNCTION 14042ef1c FUN_14042ef1c body=52 status=ok
// SIG undefined FUN_14042ef1c(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14042ef1c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    (**(code **)*param_2)(param_2,0);
    _DAT_14cb2635c = _DAT_14cb2635c + -1;
    *param_2 = DAT_14cb26350;
    DAT_14cb26350 = param_2;
  }
  return;
}



// FUNCTION 14042ef50 FUN_14042ef50 body=603 status=ok
// SIG undefined FUN_14042ef50(void)

void FUN_14042ef50(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int iVar13;
  undefined1 auStack_98 [36];
  int local_74;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  iVar7 = *(int *)(param_1 + 0x1e0);
  if ((longlong)iVar7 != 0) {
    lVar10 = *(longlong *)(param_1 + 0x1d8);
    lVar12 = 0;
    do {
      if (*(longlong *)(lVar10 + lVar12) != 0) {
        FUN_14570f3f4();
      }
      lVar12 = lVar12 + 8;
    } while ((longlong)iVar7 * 8 != lVar12);
  }
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if (*(int *)(param_1 + 0x1e4) != 0) {
    FUN_14042f1ac(param_1 + 0x1d8);
  }
  lVar10 = param_1 + 0x2f8;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = lVar10;
  if (*(int *)(param_1 + 0x310) == 0) {
    uVar11 = 1;
    iVar7 = 0;
    local_58._4_4_ = 0;
    uVar6 = 0xffffffff;
    iVar4 = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar11 = local_68 >> 0x20;
    iVar7 = *(int *)(param_1 + 0x310);
    uVar6 = (uint)local_58;
    iVar4 = (int)local_68;
  }
  lVar12 = local_60;
  iVar3 = local_58._4_4_;
  iVar13 = local_50;
  if (local_58._4_4_ != iVar7 || local_60 != lVar10) {
    do {
      local_70 = lVar10;
      local_74 = iVar7;
      lVar10 = *(longlong *)(param_1 + 0x2e8);
      lVar8 = *(longlong *)(lVar10 + 0x10 + (longlong)iVar3 * 0x20);
      if (lVar8 != 0) {
        FUN_1401c3698(lVar8);
        FUN_1400020a8(lVar8);
        *(undefined8 *)(lVar10 + (longlong)iVar3 * 0x20 + 0x10) = 0;
      }
      uVar6 = uVar6 & ~(uint)uVar11;
      lVar10 = *(longlong *)(lVar12 + 0x10);
      if (*(longlong *)(lVar12 + 0x10) == 0) {
        lVar10 = lVar12;
      }
      iVar7 = *(int *)(lVar12 + 0x18);
      lVar8 = (longlong)iVar4;
      uVar5 = *(uint *)(lVar10 + lVar8 * 4) & uVar6;
      if (uVar5 == 0) {
        iVar3 = iVar7 + 0x1e;
        if (-1 < iVar7 + -1) {
          iVar3 = iVar7 + -1;
        }
        iVar3 = iVar3 >> 5;
        iVar13 = iVar13 + 0x20;
        iVar2 = iVar3;
        if (iVar3 < iVar4) {
          iVar2 = iVar4;
        }
        if (iVar4 < iVar3) {
          lVar9 = 0;
          do {
            uVar5 = *(uint *)(lVar10 + lVar8 * 4 + 4 + lVar9 * 4);
            if (uVar5 != 0) {
              iVar4 = iVar4 + (int)lVar9 + 1;
              uVar6 = 0xffffffff;
              goto LAB_14042f0e4;
            }
            iVar13 = iVar13 + 0x20;
            lVar9 = lVar9 + 1;
          } while (iVar2 - lVar8 != lVar9);
          uVar6 = 0xffffffff;
          iVar4 = iVar2;
        }
        iVar4 = iVar4 + 1;
        iVar3 = iVar7;
      }
      else {
LAB_14042f0e4:
        uVar11 = (ulonglong)(-uVar5 & uVar5);
        uVar1 = uVar11 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar3 = (iVar13 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar7 <= iVar3) {
          iVar3 = iVar7;
        }
      }
      iVar7 = local_74;
      lVar10 = local_70;
    } while (iVar3 != local_74 || lVar12 != local_70);
  }
  FUN_14042f1dc((longlong *)(param_1 + 0x2e8));
  if ((local_48 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042f1ac FUN_14042f1ac body=48 status=ok
// SIG undefined FUN_14042f1ac(void)

void FUN_14042f1ac(longlong param_1)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),0,8,8);
  }
  return;
}



// FUNCTION 14042f1dc FUN_14042f1dc body=368 status=ok
// SIG undefined FUN_14042f1dc(void)

void FUN_14042f1dc(longlong *param_1)

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
  iVar6 = (int)param_1[9];
  if (iVar6 < 2) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
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
    else if (iVar6 == 1) {
      lVar3 = 0;
      do {
        *(undefined4 *)((longlong)plVar5 + lVar3 * 4) = 0xffffffff;
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[9]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_98);
  }
  FUN_1406d0424(param_1,0);
  *(undefined4 *)(param_1 + 9) = 1;
  if ((local_30 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  FUN_1402211e2(param_1);
  return;
}



// FUNCTION 14042f362 FUN_14042f362 body=548 status=ok
// SIG undefined FUN_14042f362(void)

longlong * FUN_14042f362(longlong *param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  uint *puVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong uVar15;
  
  *param_1 = 0;
  param_1[1] = 0;
  iVar4 = DAT_14caa7238 - DAT_14caa7264;
  if (iVar4 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar4);
  }
  if (iVar4 != 0) {
    FUN_14042f586(param_1);
  }
  iVar4 = DAT_14caa7258;
  if (DAT_14caa7258 == 0) {
    uVar13 = 1;
    uVar15 = 0;
    iVar5 = 0;
    iVar9 = 0;
  }
  else {
    puVar12 = &DAT_14caa7240;
    if (DAT_14caa7250 != (uint *)0x0) {
      puVar12 = DAT_14caa7250;
    }
    uVar14 = *puVar12;
    if (uVar14 == 0) {
      iVar5 = DAT_14caa7258 + 0x1e;
      if (-1 < DAT_14caa7258 + -1) {
        iVar5 = DAT_14caa7258 + -1;
      }
      uVar15 = 0;
      uVar13 = (ulonglong)(uint)(iVar5 >> 5);
      if (iVar5 >> 5 < 1) {
        uVar13 = uVar15;
      }
      iVar9 = 0;
      do {
        if (uVar13 == uVar15) {
          return param_1;
        }
        iVar9 = iVar9 + 0x20;
        uVar14 = puVar12[uVar15 + 1];
        uVar15 = uVar15 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar15 = 0;
      iVar9 = 0;
    }
    uVar13 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar13 * 2 + 1;
    lVar2 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar2 == 0; lVar2 = lVar2 + -1) {
      }
    }
    iVar5 = (iVar9 - ((uint)lVar2 ^ 0x3f)) + 0x3e;
    if (DAT_14caa7258 <= iVar5) {
      iVar5 = DAT_14caa7258;
    }
  }
  if (iVar5 != DAT_14caa7258) {
    uVar14 = 0xffffffff;
    lVar2 = DAT_14caa7230;
    iVar3 = DAT_14caa7258;
    do {
      lVar10 = *(longlong *)(lVar2 + 8 + (longlong)iVar5 * 0x18);
      if (*(longlong *)(lVar10 + 0x200) == param_2) {
        iVar5 = (int)param_1[1];
        *(uint *)(param_1 + 1) = iVar5 + 1U;
        if (*(uint *)((longlong)param_1 + 0xc) < iVar5 + 1U) {
          FUN_1474719c2(param_1,iVar5);
        }
        *(longlong *)(*param_1 + (longlong)iVar5 * 8) = lVar10;
        lVar2 = DAT_14caa7230;
        iVar3 = DAT_14caa7258;
      }
      uVar14 = uVar14 & ~(uint)uVar13;
      puVar12 = DAT_14caa7250;
      if (DAT_14caa7250 == (uint *)0x0) {
        puVar12 = &DAT_14caa7240;
      }
      iVar5 = (int)uVar15;
      lVar10 = (longlong)iVar5;
      uVar6 = puVar12[lVar10] & uVar14;
      if (uVar6 == 0) {
        iVar7 = iVar3 + 0x1e;
        if (-1 < iVar3 + -1) {
          iVar7 = iVar3 + -1;
        }
        iVar7 = iVar7 >> 5;
        iVar9 = iVar9 + 0x20;
        iVar8 = iVar7;
        if (iVar7 < iVar5) {
          iVar8 = iVar5;
        }
        if (iVar5 < iVar7) {
          lVar11 = 0;
          do {
            uVar6 = puVar12[lVar10 + lVar11 + 1];
            if (uVar6 != 0) {
              uVar15 = (ulonglong)(iVar5 + (int)lVar11 + 1);
              uVar14 = 0xffffffff;
              goto LAB_14042f4ed;
            }
            iVar9 = iVar9 + 0x20;
            lVar11 = lVar11 + 1;
          } while (iVar8 - lVar10 != lVar11);
          uVar14 = 0xffffffff;
          iVar5 = iVar8;
        }
        uVar15 = (ulonglong)(iVar5 + 1);
        iVar5 = iVar3;
      }
      else {
LAB_14042f4ed:
        uVar13 = (ulonglong)(-uVar6 & uVar6);
        uVar1 = uVar13 * 2 + 1;
        lVar10 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
          }
        }
        iVar5 = (iVar9 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
        if (iVar3 <= iVar5) {
          iVar5 = iVar3;
        }
      }
    } while (iVar5 != iVar4);
  }
  return param_1;
}



// FUNCTION 14042f586 FUN_14042f586 body=320 status=ok
// SIG undefined FUN_14042f586(void)

void FUN_14042f586(longlong param_1,uint param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar3 = (ulonglong)param_2 * 8;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        uVar4 = uVar3 + 0xf;
        if (param_2 < 0xfff) {
          uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar4 >> 4]];
        }
        else {
          if ((uVar4 & 0x7fffffff0) < 0x7ff1) {
            bVar2 = (&DAT_14c841e00)[uVar4 >> 4];
            uVar5 = 0x32;
            if (0x32 < bVar2) {
              uVar5 = (ulonglong)bVar2;
            }
            uVar6 = 0x32 - (ulonglong)bVar2;
            do {
              uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar6 & 0xffffffff];
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14042f5ef;
              lVar1 = uVar5 + 1 + uVar6;
              uVar6 = uVar6 - 1;
            } while (lVar1 != 0x33);
          }
          uVar3 = 0x10;
          if (0x10 < DAT_14c841df8) {
            uVar3 = (ulonglong)DAT_14c841df8;
          }
          uVar3 = -uVar3 & ((uVar4 & 0x7fffffff0) + uVar3) - 1;
        }
      }
      else {
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14042f5ef:
    uVar4 = 0x7fffffff;
    if ((int)param_2 <= (int)(uVar3 >> 3)) {
      uVar4 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar4 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar4;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar4,8,8);
  }
  return;
}



// FUNCTION 14042f6c6 FUN_14042f6c6 body=781 status=ok
// SIG undefined FUN_14042f6c6(void)

void FUN_14042f6c6(longlong param_1,undefined8 param_2,undefined4 *param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_a8 [32];
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  undefined8 *local_60;
  longlong local_58;
  undefined *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar4 = puVar5 + 4;
  if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
    FUN_140023dd8(puVar1,0x30);
    puVar5 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar4 = puVar5 + 4;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar4;
  *puVar5 = &PTR_FUN_14a38be40;
  puVar4 = puVar5 + 2;
  puVar5[2] = 0;
  iVar2 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar2 + 1U) {
    FUN_1448cfae8(param_1 + 0x98,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar2 * 8) = puVar5;
  puVar5[2] = param_2;
  local_78 = *param_3;
  uStack_74 = param_3[1];
  uStack_70 = param_3[2];
  uStack_6c = param_3[3];
  local_68 = puVar4;
  FUN_1415b8508();
  FUN_140069376(param_1);
  local_60 = puVar4;
  if ((param_4 & 4) == 0) {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3b;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1e0);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x3b;
    }
    *puVar1 = (ulonglong)puVar4;
    local_58 = DAT_14ca96278;
    if (DAT_14ca96278 != 0) {
      LOCK();
      *(int *)(DAT_14ca96278 + 8) = *(int *)(DAT_14ca96278 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca96230;
    local_88 = 2;
    FUN_140068f1a(puVar5);
    *puVar5 = &PTR_FUN_14a38be70;
    puVar5[0x37] = &local_68;
    puVar5[0x38] = param_2;
    *(undefined4 *)(puVar5 + 0x39) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0x1cc) = uStack_74;
    *(undefined4 *)(puVar5 + 0x3a) = uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x1d4) = uStack_6c;
  }
  else {
    puVar5 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar4 = puVar5 + 0x3c;
    if (*(undefined8 **)(param_1 + 0x78) < puVar4) {
      FUN_140023dd8(puVar1,0x1e8);
      puVar5 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar4 = puVar5 + 0x3c;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar4;
    uVar3 = *(undefined4 *)(param_1 + 0x660);
    local_58 = DAT_14ca96278;
    if (DAT_14ca96278 != 0) {
      LOCK();
      *(int *)(DAT_14ca96278 + 8) = *(int *)(DAT_14ca96278 + 8) + 1;
      UNLOCK();
    }
    local_50 = &DAT_14ca96230;
    local_88 = 2;
    FUN_140068f1a(puVar5);
    puVar5[0x37] = &local_68;
    puVar5[0x38] = param_2;
    *(undefined4 *)(puVar5 + 0x39) = local_78;
    *(undefined4 *)((longlong)puVar5 + 0x1cc) = uStack_74;
    *(undefined4 *)(puVar5 + 0x3a) = uStack_70;
    *(undefined4 *)((longlong)puVar5 + 0x1d4) = uStack_6c;
    *puVar5 = &PTR_FUN_14a38be50;
    *(undefined4 *)(puVar5 + 0x3b) = uVar3;
  }
  iVar2 = *(int *)(param_1 + 0x170);
  *(uint *)(param_1 + 0x170) = iVar2 + 1U;
  if (*(uint *)(param_1 + 0x174) < iVar2 + 1U) {
    FUN_14470e57a(param_1 + 0x168,iVar2);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x168) + (longlong)iVar2 * 8) = puVar5;
  *(int *)((longlong)puVar5 + 0x2c) = *(int *)(param_1 + 0x170) + -1;
  FUN_140069100(param_1,puVar5);
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042f9da FUN_14042f9da body=280 status=ok
// SIG undefined FUN_14042f9da(void)

void FUN_14042f9da(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong lVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  longlong local_40;
  undefined8 uStack_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_50 = param_2;
  local_48[0] = FUN_144830b78(local_48,&DAT_14cb420d0);
  local_40 = 0;
  uStack_38 = 0;
  if (*(longlong *)(param_1 + 0x760) == 0) {
    lVar1 = param_1 + 0x678;
    piVar2 = (int *)(**(code **)(*(longlong *)(param_1 + 0x678) + 0x58))(lVar1,&local_50,0);
    if (piVar2 == (int *)0x0) {
      local_2c = -1;
    }
    else {
      local_2c = *piVar2;
      if ((longlong)local_2c != -1) {
        *(undefined4 *)(*(longlong *)(param_1 + 0x698) + (longlong)local_2c) = param_3;
        *(byte *)(param_1 + 0x6f8) = *(byte *)(param_1 + 0x6f8) | 1;
        goto LAB_14042fa35;
      }
    }
    local_58 = &local_2c;
    (**(code **)(*(longlong *)(param_1 + 0x678) + 0x10))(lVar1,&local_50,0,0);
    *(undefined4 *)(*(longlong *)(param_1 + 0x698) + (longlong)local_2c) = param_3;
    FUN_140219f72(lVar1);
  }
  else {
    FUN_14042faf4(*(longlong *)(param_1 + 0x760),param_2,param_3);
  }
LAB_14042fa35:
  if (local_40 != 0) {
    FUN_1400020a8();
  }
  if ((local_28 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042faf4 FUN_14042faf4 body=226 status=ok
// SIG undefined FUN_14042faf4(void)

void FUN_14042faf4(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  int *piVar2;
  undefined1 auStack_78 [32];
  int *local_58;
  undefined8 local_48;
  undefined4 local_40 [2];
  longlong local_38;
  undefined8 uStack_30;
  int local_24;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (*(longlong *)(param_1 + 0x28) == 0) goto LAB_14042fb77;
  local_48 = param_2;
  local_40[0] = FUN_144830b78(local_40,&DAT_14cb420d0);
  local_38 = 0;
  uStack_30 = 0;
  plVar1 = *(longlong **)(param_1 + 0x28);
  piVar2 = (int *)(**(code **)(*plVar1 + 0x58))(plVar1,&local_48,0);
  if (piVar2 == (int *)0x0) {
    local_24 = -1;
LAB_14042fb9e:
    local_58 = &local_24;
    (**(code **)(*plVar1 + 0x10))(plVar1,&local_48,0,0);
    *(undefined4 *)(plVar1[4] + (longlong)local_24) = param_3;
    FUN_140219f72(plVar1);
  }
  else {
    local_24 = *piVar2;
    if ((longlong)local_24 == -1) goto LAB_14042fb9e;
    *(undefined4 *)(plVar1[4] + (longlong)local_24) = param_3;
    *(byte *)(plVar1 + 0x10) = *(byte *)(plVar1 + 0x10) | 1;
  }
  if (local_38 != 0) {
    FUN_1400020a8();
  }
LAB_14042fb77:
  if ((local_20 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14042fbd8 FUN_14042fbd8 body=898 status=ok
// SIG undefined FUN_14042fbd8(void)

void FUN_14042fbd8(longlong param_1,longlong *param_2)

{
  int *piVar1;
  uint *puVar2;
  ulonglong *puVar3;
  undefined8 uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  bool bVar8;
  undefined1 auStack_228 [32];
  undefined1 local_208;
  undefined2 local_200;
  undefined1 local_1f8;
  undefined1 local_1f0;
  undefined8 *local_1e8;
  undefined8 uStack_1e0;
  int local_1d0;
  int local_1cc;
  undefined **local_1c8;
  longlong *plStack_1c0;
  undefined ***local_1b8;
  undefined ****local_1b0;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_228;
  local_1b0 = &local_1b8;
  local_1c8 = &PTR_FUN_149e37810;
  local_1b8 = &local_1c8;
  plStack_1c0 = param_2;
  switchD_143c3d4dc::caseD_20();
  uVar4 = (**(code **)(*param_2 + 0x28))(param_2);
  local_1cc = 4;
  local_1d0 = -0x5dc80dc9;
  puVar3 = (ulonglong *)param_2[1];
  piVar1 = (int *)*puVar3 + 1;
  if ((int *)puVar3[1] < piVar1) {
    if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
      (**(code **)(*param_2 + 0x170))(param_2,&local_1d0,4);
    }
    else {
      thunk_FUN_14572512c(param_2,&local_1d0);
    }
  }
  else {
    local_1d0 = *(int *)*puVar3;
    *puVar3 = (ulonglong)piVar1;
  }
  if (local_1d0 == -0x5dc80dc9) {
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_1cc,4);
      }
      else {
        thunk_FUN_14572512c(param_2,&local_1cc);
      }
    }
    else {
      local_1cc = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
  }
  else {
    local_1cc = 1;
    (**(code **)(*param_2 + 0x1a0))(param_2,uVar4);
  }
  local_1c8 = (undefined **)0x0;
  plStack_1c0 = (longlong *)0x0;
  FUN_1402ac1b3(param_2);
  uVar6 = 0;
  if (param_2[0xd] != 0) {
    uVar6 = (uint)(*(longlong *)(param_2[0xd] + 0x10) != 0);
  }
  puVar3 = (ulonglong *)param_2[1];
  puVar2 = (uint *)*puVar3 + 1;
  if ((uint *)puVar3[1] < puVar2) {
    local_1e8 = (undefined8 *)CONCAT44(local_1e8._4_4_,uVar6);
    (**(code **)(*param_2 + 0x170))(param_2,&local_1e8,4);
    uVar6 = (uint)local_1e8;
    if (1 < (uint)local_1e8) {
      FUN_14572541c(param_2);
      uVar6 = (uint)local_1e8;
    }
  }
  else {
    uVar6 = *(uint *)*puVar3;
    *puVar3 = (ulonglong)puVar2;
  }
  if ((uVar6 == 0) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    FUN_144750a86(param_1,&local_1e8,0,0);
    puVar7 = local_1e8;
    if ((int)uStack_1e0 == 0) {
      puVar7 = (undefined8 *)&DAT_149dfb77a;
    }
    FUN_140033559(".\\Runtime/NavigationSystem/Private/NavCollision.cpp",0x1fc,
                  L"This platform requires cooked packages, and NavCollision data was not cooked into %s."
                  ,puVar7);
    if (local_1e8 != (undefined8 *)0x0) {
      FUN_1400020a8();
    }
  }
  uVar4 = DAT_14cb1d500;
  bVar8 = true;
  bVar5 = true;
  if ((*(byte *)(param_1 + 0xe0) & 1) == 0) {
    bVar8 = *(int *)(param_1 + 0xc0) == 0 && *(int *)(param_1 + 0xd0) == 0;
    bVar5 = 0 < *(int *)(param_1 + 0xc0) || 0 < *(int *)(param_1 + 0xd0);
  }
  if (uVar6 != 0) {
    if (3 < local_1cc) {
      bVar8 = bVar5;
    }
    if (bVar8) {
      if ((param_2[0xd] == 0) || (*(longlong *)(param_2[0xd] + 0x10) == 0)) {
        local_1f8 = 1;
        local_208 = 1;
        local_1f0 = 0;
        local_200 = 0;
        FUN_14042ff5c(param_1 + 0xf8,param_2,param_1,0);
      }
      else {
        FUN_14383145c(param_1,DAT_14cb1d500);
        local_1e8 = (undefined8 *)0x0;
        uStack_1e0 = 1;
        FUN_1446f84a2(&local_1e8,0);
        *local_1e8 = uVar4;
        local_1f8 = 1;
        local_208 = 1;
        local_1f0 = 0;
        local_200 = 0;
        FUN_14042ff5c(param_1 + 0xf8,param_2,param_1,&local_1e8);
        if (local_1e8 != (undefined8 *)0x0) {
          FUN_1400020a8();
        }
      }
    }
  }
  if (1 < local_1cc) {
    (**(code **)(*param_2 + 0x138))(param_2,param_1 + 0xd8);
  }
  if ((local_30 ^ (ulonglong)auStack_228) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14042ff5c FUN_14042ff5c body=708 status=ok
// SIG undefined FUN_14042ff5c(void)

void FUN_14042ff5c(longlong *param_1,longlong *param_2,undefined8 param_3,longlong *param_4,
                  char param_5,undefined8 param_6,char param_7,byte param_8)

{
  int *piVar1;
  uint uVar2;
  ulonglong *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong *plVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined1 local_60;
  longlong local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if ((longlong)(int)param_1[1] == 0) {
      local_4c = 0;
    }
    else {
      plVar8 = (longlong *)*param_1;
      plVar7 = plVar8 + (longlong)(int)param_1[1] * 2;
      local_4c = 0;
      do {
        if ((int)param_4[1] != 0) {
          lVar11 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar11) == *plVar8) {
              local_4c = local_4c +
                         (uint)(*(char *)(plVar8[1] + 0xc) != '\0' || *(int *)(plVar8[1] + 8) != 0);
              break;
            }
            lVar11 = lVar11 + 8;
          } while ((longlong)(int)param_4[1] << 3 != lVar11);
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar7);
    }
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_4c);
      }
      else {
        FUN_14572512c(param_2,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if ((longlong)(int)param_1[1] != 0) {
      plVar8 = (longlong *)*param_1;
      plVar7 = plVar8 + (longlong)(int)param_1[1] * 2;
      do {
        local_58 = *plVar8;
        if ((longlong)(int)param_4[1] != 0) {
          lVar11 = plVar8[1];
          lVar10 = 0;
          do {
            if (*(longlong *)(*param_4 + lVar10) == local_58) {
              if (*(char *)(lVar11 + 0xc) != '\0' || *(int *)(lVar11 + 8) != 0) {
                local_4c = local_4c + -1;
                (**(code **)(*param_2 + 0x160))(param_2,&local_58);
                uVar2 = *(uint *)(lVar11 + 0x14);
                uVar4 = uVar2 & 0xffffebbf | 0x40;
                if (param_7 == '\0') {
                  uVar4 = uVar2 & 0xfffffbbf | (uint)param_8 << 0xc | 0x400;
                }
                uVar5 = uVar4 | 8;
                if (param_5 == '\0') {
                  uVar5 = uVar4;
                }
                *(uint *)(lVar11 + 0x14) = uVar5;
                local_60 = 0;
                local_68 = 1;
                FUN_140430222(lVar11,param_2,param_3,0);
                *(uint *)(lVar11 + 0x14) = uVar2;
              }
              break;
            }
            lVar10 = lVar10 + 8;
          } while ((longlong)(int)param_4[1] * 8 != lVar10);
        }
        plVar8 = plVar8 + 2;
      } while (plVar8 != plVar7);
    }
  }
  else {
    local_4c = 0;
    puVar3 = (ulonglong *)param_2[1];
    piVar1 = (int *)*puVar3 + 1;
    if ((int *)puVar3[1] < piVar1) {
      if ((*(byte *)((longlong)param_2 + 0x2a) & 2) == 0) {
        (**(code **)(*param_2 + 0x170))(param_2,&local_4c,4);
      }
      else {
        FUN_14572512c(param_2,&local_4c);
      }
    }
    else {
      local_4c = *(int *)*puVar3;
      *puVar3 = (ulonglong)piVar1;
    }
    if (0 < local_4c) {
      iVar9 = 0;
      do {
        local_58 = 0;
        (**(code **)(*param_2 + 0x160))(param_2,&local_58);
        uVar6 = FUN_14043030a(param_1,local_58);
        local_60 = 0;
        local_68 = 1;
        FUN_140430222(uVar6,param_2,param_3,0);
        iVar9 = iVar9 + 1;
      } while (iVar9 < local_4c);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140430222 FUN_140430222 body=231 status=ok
// SIG undefined FUN_140430222(void)

void FUN_140430222(undefined8 *param_1,longlong *param_2,undefined8 param_3,undefined1 param_4,
                  int param_5,undefined1 param_6)

{
  undefined4 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [32];
  undefined4 local_48;
  undefined8 local_38;
  int local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_30 = param_5;
  local_2c = param_6;
  local_2a = 0;
  local_38 = param_3;
  local_2b = param_4;
  cVar2 = (**(code **)(*param_2 + 0x1c8))(param_2,param_1,&local_38);
  if ((((cVar2 == '\0') && ((*(byte *)((longlong)param_2 + 0x29) & 1) != 0)) &&
      ((*(byte *)((longlong)param_2 + 0x2b) & 0x12) == 0)) && ((*(byte *)(param_2 + 5) & 1) != 0)) {
    FUN_14607a792(param_2,(longlong)param_5,param_1 + 1,&local_38);
    *(undefined4 *)(param_1 + 4) = DAT_14c845dc4;
    param_1[3] = DAT_14c845dbc;
    uVar1 = *(undefined4 *)((longlong)param_1 + 0x14);
    uVar3 = FUN_14001fdce(*param_1,(ulonglong)*(uint5 *)(param_1 + 1),0);
    *param_1 = uVar3;
    local_48 = uVar1;
    FUN_1427d8aaa();
  }
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043030a FUN_14043030a body=288 status=ok
// SIG undefined FUN_14043030a(void)

undefined8 * FUN_14043030a(longlong *param_1,undefined8 param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_58;
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  uVar8 = 0;
  iVar4 = (int)((ulonglong)param_2 >> 0x20);
  if (0 < (int)uVar1) {
    uVar8 = 0;
    uVar10 = (ulonglong)uVar1;
    do {
      uVar7 = (int)(uVar10 >> 1) + (int)uVar8;
      lVar5 = (ulonglong)uVar7 * 0x10;
      iVar6 = *(int *)(lVar2 + lVar5) - (int)param_2;
      if (iVar6 == 0) {
        iVar6 = *(int *)(lVar2 + 4 + lVar5) - iVar4;
      }
      uVar9 = (uint)uVar10;
      if (iVar6 < 0) {
        uVar8 = (ulonglong)(uVar7 + (uVar9 & 1));
      }
      uVar10 = uVar10 >> 1;
    } while (1 < uVar9);
  }
  local_30 = param_2;
  if ((int)uVar8 < (int)uVar1) {
    lVar5 = uVar8 * 0x10;
    iVar6 = (int)param_2 - *(int *)(lVar2 + lVar5);
    if (iVar6 == 0) {
      iVar6 = iVar4 - *(int *)(lVar2 + 4 + lVar5);
    }
    if (((-1 < iVar6) && (puVar3 = (undefined8 *)(lVar2 + lVar5 + 8), puVar3 != (undefined8 *)0x0))
       && (puVar3 = (undefined8 *)*puVar3, puVar3 != (undefined8 *)0x0)) goto LAB_14043040b;
  }
  local_38 = (undefined8 *)FUN_14001cc68(0x28,0x10);
  *local_38 = 0;
  local_38[1] = 0;
  local_38[2] = 0;
  *(undefined1 *)((longlong)local_38 + 0x11) = 0xff;
  *(undefined4 *)((longlong)local_38 + 0xd) = 0xffffffff;
  local_38[3] = DAT_14c845dbc;
  *(undefined4 *)(local_38 + 4) = DAT_14c845dc4;
  FUN_14043042c(param_1,&local_30,&local_38);
  puVar3 = local_38;
LAB_14043040b:
  if ((local_28 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043042c FUN_14043042c body=255 status=ok
// SIG undefined FUN_14043042c(void)

undefined8 * FUN_14043042c(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  
  uVar1 = *(uint *)(param_1 + 1);
  lVar2 = *param_1;
  uVar7 = 0;
  if (0 < (int)uVar1) {
    uVar7 = 0;
    uVar5 = (ulonglong)uVar1;
    do {
      uVar6 = (int)(uVar5 >> 1) + uVar7;
      lVar8 = (ulonglong)uVar6 * 0x10;
      iVar3 = *(int *)(lVar2 + lVar8) - *param_2;
      if (iVar3 == 0) {
        iVar3 = *(int *)(lVar2 + 4 + lVar8) - param_2[1];
      }
      uVar4 = (uint)uVar5;
      if (iVar3 < 0) {
        uVar7 = uVar6 + (uVar4 & 1);
      }
      uVar5 = uVar5 >> 1;
    } while (1 < uVar4);
    if ((int)uVar7 < (int)uVar1) {
      lVar8 = (ulonglong)uVar7 * 0x10;
      iVar3 = *param_2 - *(int *)(lVar2 + lVar8);
      if (iVar3 == 0) {
        iVar3 = param_2[1] - *(int *)(lVar2 + 4 + lVar8);
      }
      if (-1 < iVar3) {
        puVar9 = (undefined8 *)(lVar2 + lVar8);
        goto LAB_140430491;
      }
    }
  }
  *(uint *)(param_1 + 1) = uVar1 + 1;
  if (*(uint *)((longlong)param_1 + 0xc) == uVar1) {
    FUN_14043052c(param_1,uVar1);
    lVar2 = *param_1;
  }
  lVar8 = (ulonglong)uVar7 * 0x10;
  memmove((void *)(lVar2 + lVar8 + 0x10),(void *)(lVar2 + lVar8),(ulonglong)(uVar1 - uVar7) << 4);
  puVar9 = (undefined8 *)(lVar8 + *param_1);
LAB_140430491:
  *puVar9 = *(undefined8 *)param_2;
  puVar9[1] = *param_3;
  return puVar9 + 1;
}



// FUNCTION 14043052c FUN_14043052c body=269 status=ok
// SIG undefined FUN_14043052c(void)

void FUN_14043052c(longlong param_1,int param_2)

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



// FUNCTION 14043063a FUN_14043063a body=162 status=ok
// SIG undefined FUN_14043063a(void)

longlong FUN_14043063a(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x18);
  FUN_1404306dc(param_1 + 0x20,param_2 + 0x20);
  uVar1 = *(undefined4 *)(param_2 + 0x34);
  uVar2 = *(undefined4 *)(param_2 + 0x38);
  uVar3 = *(undefined4 *)(param_2 + 0x3c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  FUN_140430734(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 100) == '\x01') {
      *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(param_2 + 0x60);
      uVar4 = 1;
    }
    else {
      if (*(char *)(param_1 + 100) != '\x01') goto LAB_14043069f;
      uVar4 = 0;
    }
    *(undefined1 *)(param_1 + 100) = uVar4;
  }
LAB_14043069f:
  FUN_14043078c(param_1 + 0x68,param_2 + 0x68);
  FUN_1404307f4(param_1 + 0x100,param_2 + 0x100);
  return param_1;
}



// FUNCTION 1404306dc FUN_1404306dc body=88 status=ok
// SIG undefined FUN_1404306dc(void)

undefined8 * FUN_1404306dc(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14043085e(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 140430734 FUN_140430734 body=88 status=ok
// SIG undefined FUN_140430734(void)

undefined8 * FUN_140430734(undefined8 *param_1,undefined8 *param_2)

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
      FUN_1474d1be8(param_1,iVar1);
      if (iVar1 != 0) {
        memcpy((void *)*param_1,_Src,(longlong)iVar1 << 4);
      }
    }
  }
  return param_1;
}



// FUNCTION 14043078c FUN_14043078c body=103 status=ok
// SIG undefined FUN_14043078c(void)

longlong FUN_14043078c(longlong param_1,longlong param_2)

{
  undefined1 uVar1;
  
  if (param_2 != param_1) {
    if (*(char *)(param_2 + 0x90) == '\x01') {
      if ((*(char *)(param_1 + 0x90) != '\0') && (*(longlong *)(param_1 + 0x60) != 0)) {
        FUN_1400020a8();
      }
      FUN_1474d1c4a(param_1,param_2);
      uVar1 = 1;
    }
    else {
      if (*(char *)(param_1 + 0x90) == '\0') {
        return param_1;
      }
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1400020a8();
      }
      uVar1 = 0;
    }
    *(undefined1 *)(param_1 + 0x90) = uVar1;
  }
  return param_1;
}



// FUNCTION 1404307f4 FUN_1404307f4 body=106 status=ok
// SIG undefined FUN_1404307f4(void)

void * FUN_1404307f4(void *param_1,void *param_2)

{
  int iVar1;
  void *_Dst;
  void *_Src;
  
  if (param_1 != param_2) {
    _Src = *(void **)((longlong)param_2 + 0x20);
    if (*(void **)((longlong)param_2 + 0x20) == (void *)0x0) {
      _Src = param_2;
    }
    iVar1 = *(int *)((longlong)param_2 + 0x28);
    *(int *)((longlong)param_1 + 0x28) = iVar1;
    if (iVar1 == 0 && *(int *)((longlong)param_1 + 0x2c) == 0) {
      *(undefined4 *)((longlong)param_1 + 0x2c) = 8;
    }
    else {
      FUN_140320716(param_1,iVar1);
      if (iVar1 != 0) {
        _Dst = *(void **)((longlong)param_1 + 0x20);
        if (*(void **)((longlong)param_1 + 0x20) == (void *)0x0) {
          _Dst = param_1;
        }
        memcpy(_Dst,_Src,(longlong)iVar1 << 2);
      }
    }
  }
  return param_1;
}



// FUNCTION 14043085e FUN_14043085e body=228 status=ok
// SIG undefined FUN_14043085e(void)

void FUN_14043085e(longlong param_1,int param_2,int param_3)

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



// FUNCTION 140430942 FUN_140430942 body=472 status=ok
// SIG undefined FUN_140430942(void)

undefined8 * FUN_140430942(undefined8 *param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  
  *param_1 = &PTR_FUN_14a9d3350;
  if (param_1[0x3e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x3a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x38] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x36] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x34] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x32] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x30] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2c] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x2a] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x28] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x26] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x24] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x22] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x20] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1e] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x1c] != 0) {
    FUN_1400020a8();
  }
  puVar2 = (undefined8 *)param_1[0x19];
  if (puVar2 != (undefined8 *)0x0) {
    LOCK();
    piVar1 = (int *)(puVar2 + 0xc);
    *piVar1 = *piVar1 + -1;
    UNLOCK();
    if (*piVar1 == 0) {
      (**(code **)*puVar2)(puVar2,1);
    }
  }
  FUN_140430b1a(param_1);
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140430b1a FUN_140430b1a body=352 status=ok
// SIG undefined FUN_140430b1a(void)

void FUN_140430b1a(longlong *param_1)

{
  int iVar1;
  byte bVar2;
  DWORD DVar3;
  DWORD DVar4;
  longlong *plVar5;
  
  *param_1 = (longlong)&PTR_LAB_14a9d8de0;
  iVar1 = *(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                  0xc60);
  if (DAT_14c86a9fc == 0) {
    if (iVar1 != 2) {
      if (iVar1 != 1) goto LAB_140430b53;
      DVar3 = FUN_140ad26c0();
      DVar4 = GetCurrentThreadId();
      if (DVar3 != DVar4) goto LAB_140430b68;
    }
  }
  else {
LAB_140430b53:
    if (iVar1 != 0x10) goto LAB_140430b68;
  }
  if (DAT_14caec570 != 0) {
    FUN_144740518();
  }
LAB_140430b68:
  if ((int)param_1[1] != -1) {
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  bVar2 = *(byte *)((longlong)param_1 + 0xac);
  if ((bVar2 & 8) != 0) {
    plVar5 = (longlong *)FUN_144a7b9cd();
    (**(code **)(*plVar5 + 0x160))(plVar5,param_1);
    bVar2 = *(byte *)((longlong)param_1 + 0xac) & 0xf7;
  }
  *(byte *)((longlong)param_1 + 0xac) = bVar2 | 2;
  if (param_1[0x13] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0x10] != 0) {
    FUN_1400020a8();
  }
  if (param_1[0xe] != 0) {
    FUN_1400020a8();
  }
  FUN_140430c7a(param_1 + 2);
  *param_1 = (longlong)&PTR_FUN_14a38cd70;
  *(undefined1 *)((longlong)param_1 + 0xe) = 2;
  if (((int)param_1[1] != -1) && (DAT_14c868880 == '\0')) {
    FUN_140033559(".\\Runtime/RenderCore/Private/RenderResource.cpp",0xfe,
                  L"A FRenderResource was deleted without being released first!");
  }
  return;
}



// FUNCTION 140430c7a FUN_140430c7a body=390 status=ok
// SIG undefined FUN_140430c7a(void)

void FUN_140430c7a(longlong *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (0 < (int)param_1[4]) {
    lVar5 = 0;
    do {
      if (DAT_14cad8310 == (longlong *)0x0) {
        FUN_1446f470e(&local_28,L"Renderer",1);
        uVar3 = local_28;
        uVar4 = FUN_144a52528();
        DAT_14cad8310 = (longlong *)FUN_14493e38c(uVar4,uVar3);
      }
      (**(code **)(*DAT_14cad8310 + 0x130))(DAT_14cad8310,*(undefined8 *)(param_1[3] + lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar5 < (int)param_1[4]);
  }
  if (*(int *)((longlong)param_1 + 0x14) < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    FUN_141787eac(param_1 + 1,0);
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if (*(int *)((longlong)param_1 + 0x24) < 0) {
    FUN_141787eac(param_1 + 3,0);
  }
  lVar5 = *param_1;
  if (lVar5 != 0) {
    *param_1 = 0;
    LOCK();
    puVar1 = (uint *)(lVar5 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
      FUN_144a54812();
    }
  }
  if (param_1[5] != 0) {
    FUN_1400020a8();
  }
  if (param_1[3] != 0) {
    FUN_1400020a8();
  }
  if (param_1[1] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 != 0) {
    LOCK();
    puVar1 = (uint *)(*param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if ((uVar2 & 0x3fffffff) == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_144d8e3a0(local_20 ^ (ulonglong)auStack_48);
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140430e10 FUN_140430e10 body=353 status=ok
// SIG undefined FUN_140430e10(void)

void FUN_140430e10(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140430e95;
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
LAB_140430e95:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 140430f72 FUN_140430f72 body=244 status=ok
// SIG undefined FUN_140430f72(void)

longlong * FUN_140430f72(void)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  longlong lVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  longlong local_30;
  undefined8 uStack_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb88d98 == (longlong *)0x0) {
    memset(&DAT_14cb88da0,0,0x110);
    FUN_145c75ac4(&DAT_14cb88da0);
    DAT_14cb88d98 = (longlong *)&DAT_14cb88da0;
  }
  plVar1 = DAT_14cb88d98;
  plVar3 = DAT_14cb88d98 + 1;
  if ((char)DAT_14cb88d98[2] == '\0') {
LAB_140430f9f:
    if (*plVar3 == 0) goto LAB_14043100c;
    cVar2 = FUN_1449e3c20(DAT_14cb88d98);
    if (cVar2 == '\0') goto LAB_140430fb5;
  }
  else {
    if ((char)DAT_14cb88d98[2] == '\x02') {
      plVar3 = (longlong *)(*plVar3 + 0x30);
      goto LAB_140430f9f;
    }
LAB_14043100c:
    lVar4 = FUN_140162146();
    if (lVar4 == 0) goto LAB_140430fb5;
    local_48 = 0;
    uStack_40 = 0;
    local_38 = 0;
    local_30 = 0;
    uStack_28 = 0;
    FUN_1446ddda2(&local_48,"def_globals_physics",0);
    FUN_140024ada(&local_48,plVar1);
    if (local_30 != 0) {
      FUN_1400020a8();
    }
  }
  (**(code **)(*plVar1 + 0x20))(plVar1);
LAB_140430fb5:
  if ((local_18 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return plVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140431068 FUN_140431068 body=162 status=ok
// SIG undefined FUN_140431068(void)

undefined8 FUN_140431068(longlong param_1,longlong param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0xa4)) {
    uVar1 = (uint)(ushort)((ulonglong)param_2 >> 0x10);
    lVar3 = param_1 + 0xa8;
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      lVar3 = *(longlong *)(param_1 + 0xb0);
    }
    iVar2 = *(int *)(lVar3 + (ulonglong)
                             (*(int *)(param_1 + 0xb8) - 1U &
                             (int)((ulonglong)param_2 >> 0x20) +
                             ((int)param_2 << 0x10 | (uint)(ushort)param_2) +
                             (uVar1 << 0x13 | uVar1) + (uint)(ushort)((ushort)param_2 >> 4)) * 4);
    if (iVar2 != -1) {
      do {
        plVar4 = (longlong *)(*(longlong *)(param_1 + 0x70) + (longlong)iVar2 * 0x14);
        if (*plVar4 == param_2) goto LAB_1404310ea;
        iVar2 = *(int *)((longlong)plVar4 + 0xc);
      } while (iVar2 != -1);
    }
  }
  plVar4 = (longlong *)0x0;
LAB_1404310ea:
  plVar5 = plVar4 + 1;
  if (plVar4 == (longlong *)0x0) {
    plVar5 = (longlong *)0x0;
  }
  if (plVar5 != (longlong *)0x0) {
    *param_3 = (int)*plVar5;
  }
  return CONCAT71((int7)((ulonglong)plVar4 >> 8),plVar5 != (longlong *)0x0);
}



// FUNCTION 14043110a FUN_14043110a body=32 status=ok
// SIG undefined FUN_14043110a(void)

undefined8 * FUN_14043110a(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x24) = *(byte *)((longlong)param_1 + 0x24) & 0xfe;
  *(undefined4 *)(param_1 + 5) = 0;
  return param_1;
}



// FUNCTION 14043112a FUN_14043112a body=51 status=ok
// SIG undefined FUN_14043112a(void)

undefined8 * FUN_14043112a(undefined8 *param_1)

{
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  FUN_14043115e();
  return param_1;
}



// FUNCTION 14043115e FUN_14043115e body=112 status=ok
// SIG undefined FUN_14043115e(void)

void FUN_14043115e(longlong param_1)

{
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(byte *)(param_1 + 0x38) = *(byte *)(param_1 + 0x38) & 0xfe;
  *(undefined8 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_14810bf96(param_1,0);
  }
  FUN_14017aeb5(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_1481c54fc(param_1 + 0x10,0);
  }
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 2;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



// FUNCTION 1404311ce FUN_1404311ce body=77 status=ok
// SIG undefined FUN_1404311ce(void)

void FUN_1404311ce(longlong param_1,undefined8 param_2)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar2 = *(int *)(param_1 + 0x20);
  if (0 < iVar2) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x18) + lVar3);
      if (plVar1 != (longlong *)0x0) {
        (**(code **)(*plVar1 + 0x18))(plVar1,param_2);
        iVar2 = *(int *)(param_1 + 0x20);
      }
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x10;
    } while (lVar4 < iVar2);
  }
  return;
}



// FUNCTION 14043121c FUN_14043121c body=114 status=ok
// SIG undefined FUN_14043121c(void)

void FUN_14043121c(longlong param_1,longlong *param_2)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x18);
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
  }
  iVar1 = *(int *)(param_1 + 0x30);
  if (0 < (longlong)iVar1) {
    lVar3 = 0;
    do {
      plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x28) + lVar3);
      if (plVar2 != (longlong *)0x0) {
        (**(code **)(*plVar2 + 0x18))(plVar2,param_2);
      }
      lVar3 = lVar3 + 0x10;
    } while ((longlong)iVar1 * 0x10 != lVar3);
  }
  FUN_14043128e(param_1,*(undefined8 *)(*param_2 + 0x6a0),*(undefined8 *)(*param_2 + 0x140));
  return;
}



// FUNCTION 14043128e FUN_14043128e body=485 status=ok
// SIG undefined FUN_14043128e(void)

void FUN_14043128e(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  longlong lVar5;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  code *local_58;
  longlong *local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (*(short *)(param_2 + 0xf8) != *(short *)(param_1 + 0xe0)) {
    cVar4 = FUN_14007ddf6(param_1,param_3);
    if (cVar4 == '\0') {
      FUN_14007e38c(param_1,param_3);
    }
    iVar1 = *(int *)(param_2 + 8);
    FUN_14007dd7a(param_1 + 0x70,iVar1,1);
    if (0 < (longlong)iVar1) {
      lVar5 = 0;
      do {
        iVar2 = *(int *)(*(longlong *)(param_2 + 0x70) + lVar5 * 4);
        if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x98))) {
          *(undefined8 *)(*(longlong *)(param_1 + 0x70) + lVar5 * 8) =
               *(undefined8 *)(*(longlong *)(param_1 + 0x90) + (longlong)iVar2 * 8);
        }
        lVar5 = lVar5 + 1;
      } while (iVar1 != lVar5);
    }
    lVar5 = param_1 + 0x80;
    FUN_14007db62(lVar5);
    uVar3 = *(uint *)(param_1 + 0x78);
    iVar1 = *(int *)(param_1 + 0x88);
    *(uint *)(param_1 + 0x88) = uVar3 + iVar1;
    if ((uint)(*(int *)(param_1 + 0x8c) - iVar1) < uVar3) {
      FUN_14007e22a(lVar5);
    }
    memset((void *)((longlong)iVar1 * 8 + *(longlong *)(param_1 + 0x80)),0,(longlong)(int)uVar3 << 3
          );
    FUN_1449a40d4(param_1 + 0x70,lVar5,param_1 + 0x60);
    iVar1 = *(int *)(param_1 + 0xac);
    *(undefined4 *)(param_1 + 0xa8) = 0;
    if (iVar1 < 0) {
      FUN_140bca8f8(param_1 + 0xa0,0);
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
    local_50 = &local_68;
    local_58 = FUN_1432898de;
    local_68 = param_1;
    local_60 = param_2;
    lVar5 = FUN_14498be06(param_3 + 0x28);
    if (lVar5 != 0) {
      (**(code **)(*(longlong *)(lVar5 + 0x28) + 0x10))(lVar5 + 0x28,&local_58);
    }
    if ((iVar1 < *(int *)(param_1 + 0xa8)) && (*(int *)(param_1 + 0xac) != *(int *)(param_1 + 0xa8))
       ) {
      FUN_140bca8f8(param_1 + 0xa0);
    }
    *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(param_2 + 0xf8);
  }
  if ((local_48 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140431476 FUN_140431476 body=334 status=ok
// SIG undefined FUN_140431476(void)

undefined1 * FUN_140431476(longlong *param_1,undefined1 *param_2)

{
  char cVar1;
  undefined1 auStack_118 [32];
  undefined1 local_f8 [8];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined1 local_d8;
  undefined1 local_d0 [80];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_48;
  undefined4 local_44;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_118;
  if ((*(byte *)(param_1 + 6) & 1) != 0) {
    cVar1 = (**(code **)(*param_1 + 400))();
    if (cVar1 != '\0') {
      cVar1 = (**(code **)(*DAT_14c968098 + 0xa8))();
      if (cVar1 != '\a') {
        local_f8[0] = 1;
        local_d8 = 0;
        local_f0 = 0;
        uStack_e8 = 0;
        memset(local_d0,0,0x88);
        local_44 = 0;
        local_48 = CONCAT22(1,CONCAT11(cVar1,2));
        local_80 = 0;
        uStack_78 = 0;
        *param_2 = 1;
        param_2[0x20] = 0;
        *(undefined8 *)(param_2 + 8) = 0;
        *(undefined8 *)(param_2 + 0x10) = 0;
        memset(param_2 + 0x28,0,0x88);
        *(undefined4 *)(param_2 + 0xb0) = local_48;
        param_2[0xb4] = (undefined1)local_44;
        FUN_14493db24(local_f8);
        goto LAB_1404314ff;
      }
    }
  }
  *param_2 = 0;
  param_2[0x20] = 0;
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x10) = 0;
  memset(param_2 + 0x28,0,0x88);
  *(undefined4 *)(param_2 + 0xb0) = 0x20702;
  param_2[0xb4] = 0;
LAB_1404314ff:
  if ((local_40 ^ (ulonglong)auStack_118) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404315e8 FUN_1404315e8 body=85 status=ok
// SIG undefined FUN_1404315e8(void)

undefined8 FUN_1404315e8(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_2);
  if (cVar1 == '\0') {
    (**(code **)(*param_2 + 0x20))(param_2);
    uVar2 = (**(code **)(*param_2 + 0x28))(param_2);
    FUN_1470eb664(param_1,param_2,uVar2);
  }
  else {
    (**(code **)(*param_2 + 0x28))(param_2);
    FUN_14078599e(param_1);
  }
  return 0;
}



// FUNCTION 14043163e FUN_14043163e body=1090 status=ok
// SIG undefined FUN_14043163e(void)

void FUN_14043163e(longlong *param_1,undefined1 (*param_2) [16])

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  longlong lVar16;
  longlong lVar17;
  longlong lVar18;
  undefined1 auStack_c8 [32];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  lVar18 = *param_1;
  lVar16 = *(longlong *)(lVar18 + 0x40);
  bVar7 = *(byte *)(lVar16 + 0x90);
  if ((lVar16 == 0 || bVar7 == 0) || ((1 < bVar7 && (*(char *)(lVar16 + 0x1ac) != '\x02')))) {
    if (((bVar7 < 2 || lVar16 == 0) || (*(char *)(lVar16 + 0x1ac) != '\x01')) &&
       (((((ABS(*(double *)(lVar16 + 0x20) - *(double *)param_2[2]) <= 9.99999993922529e-09 &&
           (ABS(*(double *)(lVar16 + 0x28) - *(double *)(param_2[2] + 8)) <= 9.99999993922529e-09))
          && (ABS(*(double *)(lVar16 + 0x30) - *(double *)param_2[3]) <= 9.99999993922529e-09)) &&
         ((ABS(*(double *)*param_2 - (double)*(float *)(lVar16 + 0x40)) <= 9.99999993922529e-09 &&
          (ABS(*(double *)(*param_2 + 8) - (double)*(float *)(lVar16 + 0x44)) <=
           9.99999993922529e-09)))) &&
        (ABS(*(double *)param_2[1] - (double)*(float *)(lVar16 + 0x48)) <= 9.99999993922529e-09))))
    goto LAB_14043190f;
    if ((lVar16 != 0 && bVar7 != 0) && ((bVar7 < 2 || (*(char *)(lVar16 + 0x1ac) == '\x02'))))
    goto LAB_14043169c;
  }
  else {
LAB_14043169c:
    dVar3 = *(double *)(param_2[1] + 8);
    dVar4 = *(double *)param_2[1];
    uVar12 = *(undefined4 *)(param_2[2] + 4);
    uVar13 = *(undefined4 *)(param_2[2] + 8);
    uVar14 = *(undefined4 *)(param_2[2] + 0xc);
    dVar5 = *(double *)(*param_2 + 8);
    uVar15 = *(undefined8 *)param_2[3];
    dVar6 = *(double *)*param_2;
    lVar10 = *(longlong *)(lVar16 + 0x10);
    *(undefined4 *)(lVar16 + 0xb0) = *(undefined4 *)param_2[2];
    *(undefined4 *)(lVar16 + 0xb4) = uVar12;
    *(undefined4 *)(lVar16 + 0xb8) = uVar13;
    *(undefined4 *)(lVar16 + 0xbc) = uVar14;
    *(undefined8 *)(lVar16 + 0xc0) = uVar15;
    *(float *)(lVar16 + 0xd0) = (float)dVar6;
    *(float *)(lVar16 + 0xd4) = (float)dVar5;
    *(float *)(lVar16 + 0xd8) = (float)dVar4;
    *(float *)(lVar16 + 0xdc) = (float)dVar3;
    *(undefined4 *)(lVar16 + 0xe0) = 2;
    *(byte *)(lVar16 + 0x94) = *(byte *)(lVar16 + 0x94) | 0x40;
    if ((lVar10 != 0) && (lVar16 = *(longlong *)(lVar10 + 8), lVar16 != 0)) {
      if (DAT_14c992a90 == '\x01') {
        AcquireSRWLockExclusive((PSRWLOCK)(lVar16 + 0x128));
        if (*(int *)(lVar10 + 0x18) == -1) {
          lVar11 = *(longlong *)(lVar16 + 0x98);
          uVar9 = *(uint *)(lVar10 + 0x1c);
          piVar2 = (int *)(lVar11 + 0x160 + (ulonglong)uVar9 * 4);
          *piVar2 = *piVar2 + 1;
          *(int *)(lVar11 + 0x194) = *(int *)(lVar11 + 0x194) + 1;
          lVar11 = lVar11 + (ulonglong)uVar9 * 0x10;
          iVar8 = *(int *)(lVar11 + 0x1a0);
          *(int *)(lVar10 + 0x18) = iVar8;
          *(uint *)(lVar11 + 0x1a0) = iVar8 + 1U;
          if (*(uint *)(lVar11 + 0x1a4) < iVar8 + 1U) {
            FUN_140431d5c((longlong *)(lVar11 + 0x198),iVar8);
          }
          lVar11 = *(longlong *)(lVar11 + 0x198);
          lVar17 = (longlong)iVar8 * 0x20;
          *(longlong *)(lVar11 + lVar17) = lVar10;
          *(undefined4 *)(lVar11 + 8 + lVar17) = 0;
          puVar1 = (undefined8 *)(lVar11 + 0x10 + lVar17);
          *puVar1 = 0;
          puVar1[1] = 0;
        }
        ReleaseSRWLockExclusive((PSRWLOCK)(lVar16 + 0x128));
      }
      else {
        FUN_144aa3818(*(longlong *)(lVar16 + 0x98) + 0x160,lVar10);
      }
    }
    local_98._0_8_ = DAT_14c8464f0;
    local_a8._4_4_ = DAT_14c8464e0._4_4_;
    local_a8._0_4_ = (undefined4)DAT_14c8464e0;
    local_a8._8_4_ = (undefined4)DAT_14c8464e8;
    local_a8._12_4_ = DAT_14c8464e8._4_4_;
    FUN_1402a3ce4(lVar18,local_a8,1);
    local_98._0_8_ = DAT_14c8464f0;
    local_a8._4_4_ = DAT_14c8464e0._4_4_;
    local_a8._0_4_ = (undefined4)DAT_14c8464e0;
    local_a8._8_4_ = (undefined4)DAT_14c8464e8;
    local_a8._12_4_ = DAT_14c8464e8._4_4_;
    FUN_140431a82(lVar18,local_a8,1);
  }
  local_a8 = param_2[2];
  local_98._0_8_ = *(undefined8 *)param_2[3];
  FUN_1449a414e(lVar18,local_a8,1);
  local_a8 = *param_2;
  local_98 = param_2[1];
  FUN_1449a4304(lVar18,local_a8,1);
  lVar18 = *(longlong *)(lVar18 + 0x40);
  local_a8._8_4_ = SUB84((double)*(float *)(lVar18 + 0x44),0);
  local_a8._0_8_ = (double)*(float *)(lVar18 + 0x40);
  local_a8._12_4_ = (int)((ulonglong)(double)*(float *)(lVar18 + 0x44) >> 0x20);
  local_98._8_4_ = SUB84((double)*(float *)(lVar18 + 0x4c),0);
  local_98._0_8_ = (double)*(float *)(lVar18 + 0x48);
  local_98._12_4_ = (int)((ulonglong)(double)*(float *)(lVar18 + 0x4c) >> 0x20);
  local_88 = *(undefined8 *)(lVar18 + 0x20);
  uStack_80 = *(undefined8 *)(lVar18 + 0x28);
  local_78 = *(undefined8 *)(lVar18 + 0x30);
  uStack_70 = 0;
  local_68 = 0x3ff0000000000000;
  uStack_60 = 0x3ff0000000000000;
  local_58 = 0x3ff0000000000000;
  uStack_50 = 0;
  if ((*(longlong *)(lVar18 + 0x50) != 0) &&
     (*(char *)(*(longlong *)(lVar18 + 0x50) + 0x1a) == '\x01')) {
    lVar16 = lVar18 + 0x78;
    if (*(longlong *)(lVar18 + 0x80) != 0) {
      lVar16 = *(longlong *)(lVar18 + 0x80);
    }
    iVar8 = *(int *)(lVar18 + 0x88);
    if ((longlong)iVar8 != 0) {
      lVar18 = 0;
      do {
        FUN_14484a332(*(undefined8 *)(lVar16 + lVar18),local_a8);
        lVar18 = lVar18 + 8;
      } while ((longlong)iVar8 * 8 != lVar18);
    }
  }
  if ((*param_1 == 0) || (lVar18 = *(longlong *)(*param_1 + 8), lVar18 == 0)) {
    uVar15 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar18 + 0x260);
  }
  FUN_144840e24(uVar15,param_1);
LAB_14043190f:
  if ((local_40 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140431a82 FUN_140431a82 body=464 status=ok
// SIG undefined FUN_140431a82(void)

void FUN_140431a82(longlong param_1,double *param_2,ulonglong param_3)

{
  longlong *plVar1;
  int *piVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined1 auStack_88 [32];
  double **local_68;
  double *local_58;
  double local_50;
  double local_48;
  double local_40;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  lVar3 = *(longlong *)(param_1 + 0x40);
  if ((lVar3 != 0) && (*(byte *)(lVar3 + 0x90) != 0)) {
    uVar9 = param_3 & 0xffffffff;
    if ((1 < *(byte *)(lVar3 + 0x90)) &&
       ((uVar9 = param_3 & 0xffffffff, (char)param_3 != '\0' &&
        (uVar9 = CONCAT71((int7)(uVar9 >> 8),1), *(char *)(lVar3 + 0x1ac) == '\x01')))) {
      if ((9.999999747378752e-05 < ABS(*param_2)) ||
         ((9.999999747378752e-05 < ABS(param_2[1]) || (9.999999747378752e-05 < ABS(param_2[2]))))) {
        FUN_144a05e16(lVar3,4,1,1);
      }
    }
    local_68 = &local_58;
    local_58 = param_2;
    FUN_140431c54(lVar3 + 0x98,uVar9,lVar3 + 0x94,*(undefined8 *)(lVar3 + 0x10));
  }
  if ((((*param_2 == 0.0) && (!NAN(*param_2))) && (param_2[1] == 0.0)) && (!NAN(param_2[1]))) {
    if ((param_2[2] == 0.0) && (!NAN(param_2[2]))) {
      lVar3 = *(longlong *)(param_1 + 0x40);
      local_40 = (double)*(float *)(lVar3 + 0x4c);
      local_48 = (double)*(float *)(lVar3 + 0x48);
      local_50 = (double)*(float *)(lVar3 + 0x44);
      local_58 = (double *)(double)*(float *)(lVar3 + 0x40);
      FUN_1449a4304(param_1,&local_58,param_3 & 0xffffffff);
    }
  }
  lVar3 = *(longlong *)(param_1 + 0x20);
  plVar4 = *(longlong **)(param_1 + 0x28);
  if (plVar4 != (longlong *)0x0) {
    LOCK();
    *(int *)(plVar4 + 1) = (int)plVar4[1] + 1;
    UNLOCK();
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
  if (*(longlong *)(param_1 + 8) == 0) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = *(undefined4 *)(*(longlong *)(param_1 + 8) + 0x78);
  }
  *(double *)(lVar3 + 0x90) = param_2[2];
  uVar5 = *(undefined4 *)((longlong)param_2 + 4);
  uVar6 = *(undefined4 *)(param_2 + 1);
  uVar7 = *(undefined4 *)((longlong)param_2 + 0xc);
  *(undefined4 *)(lVar3 + 0x80) = *(undefined4 *)param_2;
  *(undefined4 *)(lVar3 + 0x84) = uVar5;
  *(undefined4 *)(lVar3 + 0x88) = uVar6;
  *(undefined4 *)(lVar3 + 0x8c) = uVar7;
  *(undefined4 *)(lVar3 + 0x98) = uVar8;
  if ((local_30 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140431c54 FUN_140431c54 body=264 status=ok
// SIG undefined FUN_140431c54(void)

void FUN_140431c54(longlong param_1,char param_2,byte *param_3,longlong param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  int *piVar2;
  double dVar3;
  double dVar4;
  uint uVar5;
  int iVar6;
  double *pdVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  
  pdVar7 = (double *)*param_5;
  dVar3 = pdVar7[2];
  dVar4 = pdVar7[1];
  *(float *)(param_1 + 0xc) = (float)*pdVar7;
  *(float *)(param_1 + 0x10) = (float)dVar4;
  *(float *)(param_1 + 0x14) = (float)dVar3;
  if (((param_2 != '\0') && (*param_3 = *param_3 | 2, param_4 != 0)) &&
     (lVar8 = *(longlong *)(param_4 + 8), lVar8 != 0)) {
    if (DAT_14c992a90 == '\x01') {
      AcquireSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      if (*(int *)(param_4 + 0x18) == -1) {
        lVar9 = *(longlong *)(lVar8 + 0x98);
        uVar5 = *(uint *)(param_4 + 0x1c);
        piVar2 = (int *)(lVar9 + 0x160 + (ulonglong)uVar5 * 4);
        *piVar2 = *piVar2 + 1;
        *(int *)(lVar9 + 0x194) = *(int *)(lVar9 + 0x194) + 1;
        lVar9 = lVar9 + (ulonglong)uVar5 * 0x10;
        iVar6 = *(int *)(lVar9 + 0x1a0);
        *(int *)(param_4 + 0x18) = iVar6;
        *(uint *)(lVar9 + 0x1a0) = iVar6 + 1U;
        if (*(uint *)(lVar9 + 0x1a4) < iVar6 + 1U) {
          FUN_140431d5c((longlong *)(lVar9 + 0x198),iVar6);
        }
        lVar9 = *(longlong *)(lVar9 + 0x198);
        lVar10 = (longlong)iVar6 * 0x20;
        *(longlong *)(lVar9 + lVar10) = param_4;
        *(undefined4 *)(lVar9 + 8 + lVar10) = 0;
        puVar1 = (undefined8 *)(lVar9 + 0x10 + lVar10);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
                    /* WARNING: Could not recover jumptable at 0x000140431cca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      ReleaseSRWLockExclusive((PSRWLOCK)(lVar8 + 0x128));
      return;
    }
    FUN_144aa3818(*(longlong *)(lVar8 + 0x98) + 0x160,param_4);
    return;
  }
  return;
}



// FUNCTION 140431d5c FUN_140431d5c body=255 status=ok
// SIG undefined FUN_140431d5c(void)

void FUN_140431d5c(longlong param_1,int param_2)

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
      uVar3 = (ulonglong)(int)uVar2;
    }
    else {
      uVar3 = ((ulonglong)((longlong)(int)uVar1 * 3) >> 3) + (longlong)(int)uVar1 + 0x10;
    }
    uVar4 = uVar3 * 0x20;
    if (DAT_14c872d28 != (longlong *)0x0) {
      if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
        if (uVar4 < 0x7ff1) {
          uVar4 = (ulonglong)
                  (ushort)(&DAT_14c841d90)
                          [0x32 - (byte)(&DAT_14c841e00)[(uVar3 & 0x7ffffffffffffff) * 2]];
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
        uVar4 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar4,8);
      }
    }
    uVar3 = 0x7fffffff;
    if ((int)uVar1 <= (int)(uVar4 >> 5)) {
      uVar3 = uVar4 >> 5 & 0xffffffff;
    }
    *(int *)(param_1 + 0xc) = (int)uVar3;
    FUN_1446f8d3c(param_1,param_2,uVar3,0x20,8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1456afac4();
}



// FUNCTION 140431e5c FUN_140431e5c body=137 status=ok
// SIG undefined FUN_140431e5c(void)

void FUN_140431e5c(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined2 *)(param_1 + 0xb4) = 0;
  lVar2 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar3 = 0;
    do {
      (**(code **)(**(longlong **)(lVar2 + lVar3) + 0xd0))();
      lVar3 = lVar3 + 8;
    } while ((longlong)iVar1 * 8 != lVar3);
  }
  if ((0 < *(int *)(param_1 + 0x1a8)) &&
     ((longlong *)**(longlong **)(param_1 + 0x1a0) != (longlong *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000140431ed3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(longlong *)**(longlong **)(param_1 + 0x1a0) + 0xd0))();
    return;
  }
  return;
}



// FUNCTION 140431ee6 FUN_140431ee6 body=85 status=ok
// SIG undefined FUN_140431ee6(void)

void FUN_140431ee6(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  *(undefined2 *)(param_1 + 0xb4) = 0;
  lVar3 = param_1 + 0xd8;
  if (*(longlong *)(param_1 + 0x118) != 0) {
    lVar3 = *(longlong *)(param_1 + 0x118);
  }
  iVar1 = *(int *)(param_1 + 0x120);
  if ((longlong)iVar1 != 0) {
    lVar2 = 0;
    do {
      (**(code **)(**(longlong **)(lVar3 + lVar2) + 0xd0))();
      lVar2 = lVar2 + 8;
    } while ((longlong)iVar1 * 8 != lVar2);
  }
  return;
}



// FUNCTION 140431f46 FUN_140431f46 body=117 status=ok
// SIG undefined FUN_140431f46(void)

void FUN_140431f46(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 140431fbc FUN_140431fbc body=117 status=ok
// SIG undefined FUN_140431fbc(void)

void FUN_140431fbc(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_144727cd0(param_1,param_2);
  }
  *(undefined8 *)(param_1 + 0x30) = 0xffffffff;
  uVar2 = param_2 + 0x1fU & 0xffffffe0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x2c) < (int)uVar2 || 0x80 < *(int *)(param_1 + 0x2c)) {
    uVar1 = 0x80;
    if (0x80 < (int)uVar2) {
      uVar1 = uVar2;
    }
    *(uint *)(param_1 + 0x2c) = uVar1;
    FUN_1446efbd8(param_1 + 0x10,0);
    return;
  }
  return;
}



// FUNCTION 140432032 FUN_140432032 body=480 status=ok
// SIG undefined FUN_140432032(void)

void FUN_140432032(longlong *param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  undefined1 auStack_98 [40];
  longlong *local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_98;
  local_70 = param_1 + 2;
  local_68 = 0x100000000;
  local_58 = 0xffffffff;
  local_50 = 0;
  local_60 = local_70;
  if ((int)param_1[5] == 0) {
    uVar12 = 1;
    local_58._0_4_ = 0xffffffff;
    local_58._4_4_ = 0;
    local_68._0_4_ = 0;
  }
  else {
    FUN_1449c0562(&local_68);
    uVar12 = local_68 >> 0x20;
  }
  plVar4 = local_60;
  iVar13 = (int)local_68;
  uVar11 = (uint)local_58;
  iVar6 = local_58._4_4_;
  iVar8 = local_50;
  if (local_58._4_4_ < (int)local_60[3]) {
    do {
      lVar10 = *param_1;
      lVar9 = (longlong)iVar6 * 0x78;
      *(undefined4 *)(lVar10 + 0x50 + lVar9) = 0;
      if (*(longlong *)(lVar10 + 0x48 + lVar9) != 0) {
        FUN_1400020a8();
      }
      FUN_140432214(lVar10 + lVar9 + 8);
      uVar11 = uVar11 & ~(uint)uVar12;
      plVar7 = (longlong *)plVar4[2];
      if ((longlong *)plVar4[2] == (longlong *)0x0) {
        plVar7 = plVar4;
      }
      iVar2 = (int)plVar4[3];
      lVar10 = (longlong)iVar13;
      uVar5 = *(uint *)((longlong)plVar7 + lVar10 * 4) & uVar11;
      if (uVar5 == 0) {
        iVar6 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar6 = iVar2 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar3 = iVar6;
        if (iVar6 < iVar13) {
          iVar3 = iVar13;
        }
        if (iVar6 <= iVar13) break;
        lVar9 = 0;
        while( true ) {
          iVar8 = iVar8 + 0x20;
          uVar5 = *(uint *)((longlong)plVar7 + lVar9 * 4 + lVar10 * 4 + 4);
          if (uVar5 != 0) break;
          lVar9 = lVar9 + 1;
          if (iVar3 - lVar10 == lVar9) goto LAB_14043218b;
        }
        iVar13 = iVar13 + (int)lVar9 + 1;
        uVar11 = 0xffffffff;
      }
      uVar12 = (ulonglong)(-uVar5 & uVar5);
      uVar1 = uVar12 * 2 + 1;
      lVar10 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar10 == 0; lVar10 = lVar10 + -1) {
        }
      }
      iVar6 = (iVar8 - ((uint)lVar10 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar2);
  }
LAB_14043218b:
  *(undefined4 *)(param_1 + 1) = 0;
  if (*(int *)((longlong)param_1 + 0xc) != 0) {
    FUN_1410fd13e(param_1,0);
  }
  param_1[6] = 0xffffffff;
  *(undefined4 *)(param_1 + 5) = 0;
  if (0x80 < *(uint *)((longlong)param_1 + 0x2c)) {
    *(undefined4 *)((longlong)param_1 + 0x2c) = 0x80;
    FUN_1446efbd8(local_70,0);
  }
  if ((local_48 ^ (ulonglong)auStack_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140432214 FUN_140432214 body=55 status=ok
// SIG undefined FUN_140432214(void)

void FUN_140432214(longlong *param_1)

{
  FUN_14043224c(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 14043224c FUN_14043224c body=121 status=ok
// SIG undefined FUN_14043224c(void)

void FUN_14043224c(longlong param_1,int param_2)

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



// FUNCTION 1404322cc FUN_1404322cc body=57 status=ok
// SIG undefined FUN_1404322cc(void)

void FUN_1404322cc(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb6f448 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb6f448 = FUN_140002ddd(FUN_1465404d2,uVar1,L"SpawnPointBodySettings");
  }
  return;
}



// FUNCTION 140432306 FUN_140432306 body=50 status=ok
// SIG undefined FUN_140432306(void)

undefined8 FUN_140432306(void)

{
  char cVar1;
  undefined8 uVar2;
  
  if (DAT_14cb0d2b0 != 0) {
    uVar2 = FUN_140432380();
    cVar1 = FUN_140432338(uVar2);
    if (cVar1 != '\0') {
      return uVar2;
    }
  }
  return 0;
}



// FUNCTION 140432338 FUN_140432338 body=71 status=ok
// SIG undefined FUN_140432338(void)

undefined8 FUN_140432338(longlong param_1)

{
  uint uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  if ((param_1 != 0) && (*(longlong *)(param_1 + 0x10) != 0)) {
    uVar1 = *(uint *)(param_1 + 0xc);
    if ((ulonglong)uVar1 != 0xffffffff) {
      uVar3 = 0;
      if ((-1 < (int)uVar1) && ((int)uVar1 < DAT_14c9647dc)) {
        uVar2 = (ulonglong)uVar1 & 0xffff;
        uVar3 = CONCAT71((int7)(uVar2 * 3 >> 8),
                         *(longlong *)
                          (*(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8) +
                          uVar2 * 0x18) == param_1);
      }
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140432380 FUN_140432380 body=105 status=ok
// SIG undefined FUN_140432380(void)

void FUN_140432380(longlong param_1)

{
  undefined1 auStack_38 [32];
  longlong local_18;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_38;
  local_18 = FUN_140432436();
  if ((local_18 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_14689c22e(local_18);
  }
  FUN_1404323ea(param_1 + 0x1160,&local_18);
  if ((local_10 ^ (ulonglong)auStack_38) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 1404323ea FUN_1404323ea body=76 status=ok
// SIG undefined FUN_1404323ea(void)

void FUN_1404323ea(undefined8 param_1,longlong *param_2)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = *param_2;
  if (lVar2 != 0) {
    lVar1 = FUN_140432436();
    if (((lVar1 != 0) && (*(int *)(lVar1 + 0x38) <= *(int *)(lVar2 + 0x38))) &&
       (*(longlong *)(*(longlong *)(lVar2 + 0x30) + (longlong)*(int *)(lVar1 + 0x38) * 8) ==
        lVar1 + 0x30)) {
      lVar2 = *param_2;
      goto LAB_140432427;
    }
  }
  lVar2 = 0;
LAB_140432427:
  FUN_1448a6f9c(param_1,lVar2);
  return;
}



// FUNCTION 140432436 FUN_140432436 body=228 status=ok
// SIG undefined FUN_140432436(void)

longlong FUN_140432436(void)

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
  if (DAT_14cb90878 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1411791a2;
    local_38 = &LAB_1489c8b81;
    local_40 = FUN_146566a4c;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x68;
    FUN_14081cfa3(L"/Script/CohtmlPlugin",L"CohtmlSystemEngineSubsystem",&DAT_14cb90878,
                  &DAT_1489c8b80);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb90878;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043251c FUN_14043251c body=33 status=ok
// SIG undefined FUN_14043251c(void)

void FUN_14043251c(longlong param_1)

{
  FUN_140433374(param_1 + 0x40);
  FUN_14043253e(param_1 + 0x40);
  return;
}



// FUNCTION 14043253e FUN_14043253e body=65 status=ok
// SIG undefined FUN_14043253e(void)

void FUN_14043253e(longlong param_1)

{
  if (*(char *)(param_1 + 0x340) == '\x01') {
    param_1 = param_1 + 0x80;
    FUN_140432580(param_1);
    FUN_14043282a(param_1);
    FUN_140432e94(param_1);
    FUN_140432b30(param_1);
    return;
  }
  return;
}



// FUNCTION 140432580 FUN_140432580 body=383 status=ok
// SIG undefined FUN_140432580(void)

void FUN_140432580(longlong param_1)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  undefined1 auStackY_98 [32];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  float local_38 [8];
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStackY_98;
  if (DAT_14cb259f8 != 0) {
    lVar7 = *(longlong *)(DAT_14cb259f8 + 0x70);
    plVar3 = *(longlong **)(DAT_14cb259f8 + 0x78);
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      UNLOCK();
    }
    plVar4 = *(longlong **)(lVar7 + 0x20);
    plVar5 = *(longlong **)(lVar7 + 0x28);
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      *(int *)(plVar5 + 1) = (int)plVar5[1] + 1;
      UNLOCK();
    }
    if (plVar4 != (longlong *)0x0) {
      local_38[0] = 0.0;
      local_38[1] = 0.0;
      local_38[2] = 0.0;
      local_38[3] = 0.0;
      local_48 = 0;
      uStack_40 = 0;
      local_58 = 0;
      uStack_50 = 0;
      local_38[4] = 0.0;
      iVar2 = *(int *)(param_1 + 0xa8);
      lVar7 = 3;
      lVar8 = 0;
      do {
        if (lVar8 < iVar2) {
          lVar9 = *(longlong *)(param_1 + 0xa0);
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            lVar9 = param_1;
          }
          *(undefined4 *)((longlong)&local_58 + lVar8 * 4) = *(undefined4 *)(lVar9 + lVar7 * 4);
          *(undefined4 *)((longlong)&local_48 + lVar8 * 4) = *(undefined4 *)(lVar9 + -8 + lVar7 * 4)
          ;
          local_38[lVar8] = *(float *)(lVar9 + -4 + lVar7 * 4) * *(float *)(param_1 + 0x250);
        }
        lVar8 = lVar8 + 1;
        lVar7 = lVar7 + 10;
      } while (lVar8 != 4);
      uVar6 = (**(code **)(*plVar4 + 0x20))(plVar4);
      if (DAT_14cb25ab0 == '\x01') {
        AK::SoundEngine::SendPluginCustomGameData
                  (uVar6,0xffffffffffffffff,(AkPluginType)CONCAT71((int7)((ulonglong)lVar7 >> 8),3),
                   0x40,0x401c,&local_58,0x34);
      }
    }
    if (plVar5 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar5 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
        (**(code **)*plVar5)(plVar5);
        LOCK();
        piVar1 = (int *)((longlong)plVar5 + 0xc);
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (*piVar1 == 0) {
          (**(code **)(*plVar5 + 0x10))(plVar5);
        }
      }
    }
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      plVar4 = plVar3 + 1;
      *(int *)plVar4 = (int)*plVar4 + -1;
      UNLOCK();
      if ((int)*plVar4 == 0) {
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
  if ((local_18 ^ (ulonglong)auStackY_98) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140432700 FUN_140432700 body=297 status=ok
// SIG undefined FUN_140432700(void)

undefined4 FUN_140432700(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  
  lVar5 = *(longlong *)(param_1 + 0x28);
  if (lVar5 == 0) {
    uVar4 = FUN_140d47262();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
  }
  plVar1 = (longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x30);
  if (lVar6 == 0) {
    if (lVar5 == 0) {
      return 0;
    }
    if (*plVar1 == 0) {
      return 0;
    }
    plVar2 = *(longlong **)(lVar5 + 0xb8);
    if ((plVar2 == (longlong *)0x0) ||
       (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
      *(undefined8 *)(param_1 + 0x30) = 0;
      return 0;
    }
    uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
    lVar6 = FUN_144aff482(uVar4,plVar1);
    *(longlong *)(param_1 + 0x30) = lVar6;
    if (lVar6 == 0) {
      return 0;
    }
    lVar5 = *(longlong *)(param_1 + 0x28);
  }
  if (lVar5 == 0) {
    uVar4 = FUN_140d47262();
    lVar5 = FUN_14477b664(uVar4);
    *(longlong *)(param_1 + 0x28) = lVar5;
    lVar6 = *(longlong *)(param_1 + 0x30);
    if (((lVar6 == 0) && (lVar6 = 0, lVar5 != 0)) && (*plVar1 != 0)) {
      plVar2 = *(longlong **)(lVar5 + 0xb8);
      if ((plVar2 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
        lVar6 = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar6 = FUN_144aff482(uVar4,plVar1);
      }
      *(longlong *)(param_1 + 0x30) = lVar6;
    }
  }
  return *(undefined4 *)(lVar6 + 0x38);
}



// FUNCTION 14043282a FUN_14043282a body=737 status=ok
// SIG undefined FUN_14043282a(void)

void FUN_14043282a(void)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_147f6f09d;
    local_60 = &LAB_146201c25;
    local_68 = L"Game";
    local_70 = 0;
    local_78 = 0x10000006;
    local_80 = 8;
    local_88 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar2 = DAT_14cb253f8;
  if (((DAT_14cb253f8[0x22] != 0) ||
      ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar2[0x22] != 0)) &&
     (lVar1 = DAT_14cb25be0, DAT_14cb25be0 != 0)) {
    if (DAT_14cb5e220 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1459ebe90;
      local_58 = &LAB_1486a1487;
      local_60 = &LAB_1464e0171;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x440;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
    }
    lVar5 = *(longlong *)(lVar1 + 0x10);
    if (((*(int *)(DAT_14cb5e220 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8)
         == DAT_14cb5e220 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x2e0), lVar1 != 0)) {
      lVar5 = *(longlong *)(lVar1 + 0x430);
      if (lVar5 == 0) {
        uVar4 = FUN_1407f787c();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar1 + 0x430) = lVar5;
      }
      if (*(longlong *)(lVar1 + 0x438) == 0) {
        if ((lVar5 == 0) || (*(longlong *)(lVar1 + 0x428) == 0)) goto LAB_140432adf;
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(lVar1 + 0x438) = 0;
          goto LAB_140432adf;
        }
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x428));
        *(longlong *)(lVar1 + 0x438) = lVar5;
        if (lVar5 == 0) goto LAB_140432adf;
      }
      if (DAT_14cb259f8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
  }
LAB_140432adf:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140432b30 FUN_140432b30 body=831 status=ok
// SIG undefined FUN_140432b30(void)

void FUN_140432b30(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  char cVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_147f6f09d;
    local_60 = &LAB_146201c25;
    local_68 = L"Game";
    local_70 = 0;
    local_78 = 0x10000006;
    local_80 = 8;
    local_88 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar2 = DAT_14cb253f8;
  if (((DAT_14cb253f8[0x22] != 0) ||
      ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar2[0x22] != 0)) &&
     (lVar1 = DAT_14cb25be0, DAT_14cb25be0 != 0)) {
    if (DAT_14cb5e220 == 0) {
      local_50 = &local_38;
      local_38 = FUN_1449e2820;
      local_40 = FUN_14081d0ea;
      local_48 = (code *)&LAB_1459ebe90;
      local_58 = &LAB_1486a1487;
      local_60 = &LAB_1464e0171;
      local_68 = L"Engine";
      local_70 = 0;
      local_78 = 0x10000000;
      local_80 = 8;
      local_88 = 0x440;
      FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
    }
    lVar5 = *(longlong *)(lVar1 + 0x10);
    if (((*(int *)(DAT_14cb5e220 + 0x38) <= *(int *)(lVar5 + 0x38)) &&
        (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8)
         == DAT_14cb5e220 + 0x30)) && (lVar1 = *(longlong *)(lVar1 + 0x2e0), lVar1 != 0)) {
      fVar8 = 0.0;
      lVar5 = 4;
      lVar6 = 0;
      do {
        if (lVar6 < *(int *)(param_1 + 0xa8)) {
          lVar7 = *(longlong *)(param_1 + 0xa0);
          if (*(longlong *)(param_1 + 0xa0) == 0) {
            lVar7 = param_1;
          }
          fVar8 = fVar8 + *(float *)(lVar7 + lVar5);
        }
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0x28;
      } while (lVar5 != 0xa4);
      *(float *)(param_1 + 0x25c) = *(float *)(param_1 + 0x25c) * 0.95 + fVar8 * 0.25 * 0.050000012;
      lVar5 = *(longlong *)(lVar1 + 0x468);
      if (lVar5 == 0) {
        uVar4 = FUN_1407f787c();
        lVar5 = FUN_14477b664(uVar4);
        *(longlong *)(lVar1 + 0x468) = lVar5;
      }
      if (*(longlong *)(lVar1 + 0x470) == 0) {
        if ((lVar5 == 0) || (*(longlong *)(lVar1 + 0x460) == 0)) goto LAB_140432e43;
        plVar2 = *(longlong **)(lVar5 + 0xb8);
        if ((plVar2 == (longlong *)0x0) ||
           (cVar3 = (**(code **)(*plVar2 + 0x108))(plVar2), cVar3 == '\0')) {
          *(undefined8 *)(lVar1 + 0x470) = 0;
          goto LAB_140432e43;
        }
        uVar4 = (**(code **)(*plVar2 + 0x110))(plVar2);
        lVar5 = FUN_144aff482(uVar4,(longlong *)(lVar1 + 0x460));
        *(longlong *)(lVar1 + 0x470) = lVar5;
        if (lVar5 == 0) goto LAB_140432e43;
      }
      if (DAT_14cb259f8 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
      }
    }
  }
LAB_140432e43:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140432e94 FUN_140432e94 body=1212 status=ok
// SIG undefined FUN_140432e94(void)

void FUN_140432e94(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  undefined8 uVar5;
  longlong lVar6;
  float *pfVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 local_80;
  undefined4 local_78;
  undefined8 local_70;
  wchar_t *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  code **local_50;
  code *local_48;
  code *local_40;
  code *local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (DAT_14cb253f8 == (longlong *)0x0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = FUN_14081d0ea;
    local_58 = &LAB_147f6f09d;
    local_60 = &LAB_146201c25;
    local_68 = L"Game";
    local_70 = 0;
    local_78 = 0x10000006;
    local_80 = 8;
    local_88 = 0x480;
    FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
  }
  plVar3 = DAT_14cb253f8;
  if (((DAT_14cb253f8[0x22] == 0) &&
      ((**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8), plVar3[0x22] == 0)) ||
     (lVar2 = DAT_14cb25be0, DAT_14cb25be0 == 0)) goto LAB_140433277;
  if (DAT_14cb5e220 == 0) {
    local_50 = &local_38;
    local_38 = FUN_1449e2820;
    local_40 = FUN_14081d0ea;
    local_48 = (code *)&LAB_1459ebe90;
    local_58 = &LAB_1486a1487;
    local_60 = &LAB_1464e0171;
    local_68 = L"Engine";
    local_70 = 0;
    local_78 = 0x10000000;
    local_80 = 8;
    local_88 = 0x440;
    FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
  }
  lVar6 = *(longlong *)(lVar2 + 0x10);
  if (((*(int *)(lVar6 + 0x38) < *(int *)(DAT_14cb5e220 + 0x38)) ||
      (*(longlong *)(*(longlong *)(lVar6 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8) !=
       DAT_14cb5e220 + 0x30)) || (lVar2 = *(longlong *)(lVar2 + 0x2e0), lVar2 == 0))
  goto LAB_140433277;
  uVar1 = *(uint *)(param_1 + 0x248);
  if ((int)uVar1 < 7) {
    if (2 < (int)uVar1) {
      pfVar8 = *(float **)(param_1 + 0x240);
      fVar9 = 0.0;
      goto LAB_140432f55;
    }
    if (uVar1 == 2) {
      pfVar8 = *(float **)(param_1 + 0x240);
      fVar9 = 0.0;
      goto LAB_140432f7c;
    }
    if (0 < (int)uVar1) {
      pfVar8 = *(float **)(param_1 + 0x240);
      fVar10 = 0.0;
      fVar9 = 0.0;
      goto LAB_140432f8f;
    }
    fVar9 = 0.0;
    fVar10 = 0.0;
LAB_140433366:
    fVar11 = 0.0;
LAB_14043336c:
    fVar13 = 0.0;
    fVar12 = 0.0;
    fVar14 = 0.0;
  }
  else {
    pfVar8 = *(float **)(param_1 + 0x240);
    pfVar7 = (float *)(param_1 + 0xb0);
    if (pfVar8 != (float *)0x0) {
      pfVar7 = pfVar8;
    }
    fVar9 = pfVar7[0x3c];
LAB_140432f55:
    pfVar7 = (float *)(param_1 + 0xb0);
    if (pfVar8 != (float *)0x0) {
      pfVar7 = pfVar8;
    }
    fVar9 = fVar9 * 0.01 + pfVar7[0x14] * 0.01;
LAB_140432f7c:
    pfVar7 = (float *)(param_1 + 0xb0);
    if (pfVar8 != (float *)0x0) {
      pfVar7 = pfVar8;
    }
    fVar10 = pfVar7[10];
LAB_140432f8f:
    pfVar7 = (float *)(param_1 + 0xb0);
    if (pfVar8 != (float *)0x0) {
      pfVar7 = pfVar8;
    }
    fVar10 = fVar10 * 0.01 + *pfVar7 * 0.01;
    if (uVar1 < 8) {
      if (uVar1 < 4) goto LAB_140433366;
      fVar12 = 0.0;
      fVar11 = pfVar7[0x1e] * 0.01 + 0.0;
      if (5 < uVar1) {
        fVar13 = pfVar7[0x32];
        goto LAB_1404332db;
      }
      fVar13 = 0.0;
      if (uVar1 == 5) goto LAB_14043300f;
      goto LAB_14043336c;
    }
    fVar11 = pfVar7[0x46] * 0.01 + pfVar7[0x1e] * 0.01;
    fVar13 = pfVar7[0x32];
    if (uVar1 == 8) {
LAB_1404332db:
      fVar12 = 0.0;
      fVar13 = fVar13 * 0.01 + 0.0;
    }
    else {
      fVar13 = pfVar7[0x50] * 0.01 + fVar13 * 0.01;
      if (uVar1 == 9) {
        fVar12 = 0.0;
      }
      else {
        fVar12 = pfVar7[0x5a];
      }
    }
LAB_14043300f:
    fVar14 = pfVar7[0x28] * 0.01;
  }
  fVar14 = fVar12 * 0.01 + fVar14;
  if (fVar14 <= fVar13) {
    fVar13 = fVar14;
  }
  if (fVar13 <= fVar11) {
    fVar11 = fVar13;
  }
  if (fVar11 <= fVar10) {
    fVar10 = fVar11;
  }
  if (fVar10 <= fVar9) {
    fVar9 = fVar10;
  }
  *(float *)(param_1 + 600) = *(float *)(param_1 + 600) * 0.95 + fVar9 * 0.050000012;
  lVar6 = *(longlong *)(lVar2 + 0x450);
  if (lVar6 == 0) {
    uVar5 = FUN_1407f787c();
    lVar6 = FUN_14477b664(uVar5);
    *(longlong *)(lVar2 + 0x450) = lVar6;
  }
  if (*(longlong *)(lVar2 + 0x458) == 0) {
    if ((lVar6 == 0) || (*(longlong *)(lVar2 + 0x448) == 0)) goto LAB_140433277;
    plVar3 = *(longlong **)(lVar6 + 0xb8);
    if ((plVar3 == (longlong *)0x0) ||
       (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
      *(undefined8 *)(lVar2 + 0x458) = 0;
      goto LAB_140433277;
    }
    uVar5 = (**(code **)(*plVar3 + 0x110))(plVar3);
    lVar6 = FUN_144aff482(uVar5,(longlong *)(lVar2 + 0x448));
    *(longlong *)(lVar2 + 0x458) = lVar6;
    if (lVar6 == 0) goto LAB_140433277;
  }
  if (DAT_14cb259f8 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_30 ^ (ulonglong)auStack_a8);
  }
LAB_140433277:
  if ((local_30 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140433374 FUN_140433374 body=4432 status=ok
// SIG undefined FUN_140433374(void)

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014b3ef9dd) overlaps instruction at (ram,0x00014b3ef9db)
    */
/* WARNING: Removing unreachable block (ram,0x00014b3ef9e7) */
/* WARNING: Removing unreachable block (ram,0x00014b3ef97c) */

void FUN_140433374(int *param_1)

{
  longlong *plVar1;
  int *piVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  longlong lVar6;
  bool bVar7;
  bool bVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  char cVar19;
  bool bVar20;
  char cVar26;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int *piVar25;
  ulonglong uVar27;
  char *pcVar28;
  undefined2 uVar29;
  longlong *plVar30;
  longlong lVar31;
  char *pcVar32;
  char *pcVar33;
  longlong *plVar35;
  undefined **ppuVar36;
  undefined1 *puVar37;
  char *pcVar38;
  uint uVar39;
  longlong **pplVar40;
  longlong lVar41;
  longlong *plVar42;
  uint uVar43;
  uint uVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined4 uVar48;
  float fVar49;
  int iVar50;
  double dVar51;
  float fVar52;
  double dVar53;
  undefined *puStack_260;
  undefined1 auStack_258 [32];
  undefined4 local_238;
  undefined4 local_230;
  undefined4 local_228;
  undefined8 local_220;
  wchar_t *local_218;
  undefined1 *local_210;
  undefined1 *local_208;
  code **local_200;
  code *local_1f8;
  code *local_1f0;
  char cStack_1e1;
  longlong *local_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 local_1c8 [16];
  undefined1 local_1b8 [16];
  int *local_1a0;
  longlong *local_198;
  int *local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  double local_158;
  longlong *local_148;
  undefined8 uStack_140;
  double local_138;
  double local_130;
  double local_128;
  double local_120;
  double dStack_118;
  double local_110;
  code *local_108;
  double local_100;
  double local_f8;
  ulonglong local_f0;
  uint *puVar24;
  char cVar34;
  
  ppuVar36 = (undefined **)auStack_258;
  puVar37 = auStack_258;
  local_f0 = DAT_14c707940 ^ (ulonglong)auStack_258;
  if (((((((char)param_1[0xd0] != '\x01') || (param_1[0x19] == 0)) ||
        (uVar22 = param_1[0x18], (int)uVar22 < 0)) ||
       ((DAT_14c9647dc <= (int)uVar22 ||
        (plVar30 = (longlong *)
                   ((ulonglong)((uVar22 & 0xffff) * 0x18) +
                   *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar22 >> 0x10) * 8)),
        plVar30 == (longlong *)0x0)))) ||
      (((int)plVar30[2] != param_1[0x19] ||
       (((*(uint *)(plVar30 + 1) & 0x10200000) != 0 || (lVar41 = *plVar30, lVar41 == 0)))))) ||
     ((*(longlong *)(lVar41 + 0x30) != 0 &&
      (((lVar31 = *(longlong *)(*(longlong *)(lVar41 + 0x30) + 0x2b0), lVar31 != 0 &&
        (*(longlong *)(lVar31 + 0x588) != 0)) &&
       (*(double *)(lVar41 + 0x708) <= *(double *)(lVar41 + 0x6d0))))))) goto LAB_140433501;
  if ((*(byte *)(lVar41 + 0x154) & 0x40) != 0) {
    puStack_260 = (undefined *)0x14043358f;
    iVar21 = FUN_14490d72a(lVar41);
    if (iVar21 == 3) goto LAB_140433501;
  }
  if ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) != 0) {
    lVar31 = 0;
    do {
      lVar6 = *(longlong *)(*(longlong *)(DAT_14cb0d2b0 + 0x1148) + lVar31);
      if (*(longlong *)(lVar6 + 0x360) == lVar41) {
        if ((lVar6 != 0) && ((*(byte *)(lVar6 + 0x278) & 1) != 0)) goto LAB_140433501;
        break;
      }
      lVar31 = lVar31 + 8;
    } while ((longlong)*(int *)(DAT_14cb0d2b0 + 0x1150) * 8 != lVar31);
  }
  puStack_260 = (undefined *)0x1404335a5;
  cVar19 = FUN_144a80e00(lVar41);
  if (((cVar19 != '\0') && (*(char *)(lVar41 + 0x155) < '\0')) || (DAT_14cb259f8 == 0))
  goto LAB_140433501;
  if (DAT_14cb25ab0 == '\x01') {
    local_148 = (longlong *)0x0;
    uStack_140 = 0;
    lVar41 = (longlong)*(int *)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x18);
    uVar22 = 0;
    if (lVar41 == 0) goto LAB_1404343b4;
    plVar30 = *(longlong **)(*(longlong *)(DAT_14cb259f8 + 0x40) + 0x10);
    plVar42 = plVar30 + lVar41 * 2;
    pplVar40 = &local_148;
    do {
      uVar27 = uStack_140;
      lVar41 = *plVar30;
      plVar35 = (longlong *)plVar30[1];
      if (plVar35 != (longlong *)0x0) {
        LOCK();
        *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
        UNLOCK();
      }
      if ((lVar41 != 0) && (*(longlong *)(lVar41 + 0xf0) != 0)) {
        if (plVar35 != (longlong *)0x0) {
          LOCK();
          *(int *)(plVar35 + 1) = (int)plVar35[1] + 1;
          UNLOCK();
        }
        lVar31 = (longlong)(int)(uint)uStack_140;
        uVar22 = (uint)uStack_140 + 1;
        uStack_140 = CONCAT44(uStack_140._4_4_,uVar22);
        if (uStack_140._4_4_ < uVar22) {
          puStack_260 = (undefined *)0x140433657;
          FUN_144796c16(pplVar40,uVar27 & 0xffffffff);
        }
        local_148[lVar31 * 2] = lVar41;
        local_148[lVar31 * 2 + 1] = (longlong)plVar35;
      }
      if (plVar35 != (longlong *)0x0) {
        LOCK();
        plVar1 = plVar35 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          puStack_260 = (undefined *)0x14043368a;
          (**(code **)*plVar35)(plVar35);
          LOCK();
          piVar2 = (int *)((longlong)plVar35 + 0xc);
          *piVar2 = *piVar2 + -1;
          UNLOCK();
          if (*piVar2 == 0) {
            puStack_260 = (undefined *)0x140433699;
            (**(code **)(*plVar35 + 0x10))(plVar35);
          }
        }
      }
      plVar30 = plVar30 + 2;
    } while (plVar30 != plVar42);
    uVar27 = (ulonglong)(int)(uint)uStack_140;
    local_1e0 = local_148;
    if ((longlong)uVar27 < 2) {
      uVar22 = 0;
      if ((uint)uStack_140 != 0) {
        local_198 = local_148 + uVar27 * 2;
        local_190 = param_1 + 0x20;
        piVar2 = param_1 + 0x4c;
        local_1a0 = param_1 + 200;
LAB_1404336fb:
        lVar41 = *local_1e0;
        local_1d8 = *(double *)(lVar41 + 0x90);
        dStack_1d0 = *(double *)(lVar41 + 0x98);
        auVar4 = *(undefined1 (*) [16])(lVar41 + 0xa0);
        dVar11 = auVar4._0_8_;
        dVar14 = auVar4._8_8_;
        local_168 = *(double *)(lVar41 + 0xb0);
        dStack_160 = *(double *)(lVar41 + 0xb8);
        local_158 = *(double *)(lVar41 + 0xc0);
        uVar16 = *(undefined8 *)(lVar41 + 200);
        local_178 = *(undefined8 *)(lVar41 + 0xe0);
        uStack_170 = *(undefined8 *)(lVar41 + 0xe8);
        local_188 = *(undefined8 *)(lVar41 + 0xd0);
        uStack_180 = *(undefined8 *)(lVar41 + 0xd8);
        uVar17 = local_188;
        uVar18 = uStack_180;
        lVar41 = 0x10;
        lVar31 = 0;
        do {
          piVar25 = *(int **)(param_1 + 0xb0);
          if (*(int **)(param_1 + 0xb0) == (int *)0x0) {
            piVar25 = piVar2;
          }
          *(float *)((longlong)piVar25 + lVar31) =
               *(float *)((longlong)piVar25 + lVar31) -
               (float)((local_158 - *(double *)(param_1 + 0xc4)) *
                       *(double *)(DAT_14cb72588 + lVar41) +
                      (local_168 - *(double *)(param_1 + 0xc0)) *
                      *(double *)(DAT_14cb72588 + -0x10 + lVar41) +
                      (dStack_160 - *(double *)(param_1 + 0xc2)) *
                      *(double *)(DAT_14cb72588 + -8 + lVar41));
          lVar41 = lVar41 + 0x18;
          lVar31 = lVar31 + 0x28;
        } while (lVar41 != 0x100);
        uVar48 = (undefined4)((ulonglong)dStack_1d0 >> 0x20);
        uVar27 = 0;
        dVar9 = dStack_1d0 * 0.0;
        dVar10 = dVar11 * 0.0 + local_1d8 * -0.0;
        dVar53 = (local_1d8 - dVar9) + (local_1d8 - dVar9);
        dVar10 = dVar10 + dVar10;
        dVar13 = (dVar9 - dVar11) + (dVar9 - dVar11);
        dVar12 = (dVar11 * dVar13 - dVar53 * local_1d8) + dVar14 * dVar10 + 1.0;
        dVar51 = (dStack_1d0 * dVar53 - dVar10 * dVar11) + dVar14 * dVar13 + 0.0;
        dVar15 = dVar51 * dVar51 + dVar12 * dVar12;
        bVar20 = NAN(dVar15);
        bVar7 = dVar15 == 1.0;
        local_1b8._8_4_ = SUB84(dStack_1d0,0);
        local_1b8._0_8_ = dVar51 * (1.0 / SQRT(dVar15));
        local_1b8._12_4_ = uVar48;
        if ((bVar7) && (!bVar20)) {
          local_1b8._0_8_ = dVar51;
        }
        dVar51 = (1.0 / SQRT(dVar15)) * dVar12;
        if ((bVar7) && (!bVar20)) {
          dVar51 = dVar12;
        }
        local_1c8 = ZEXT816(0);
        if ((bVar7) && (local_1c8 = ZEXT816(0), !bVar20)) {
          dVar10 = (dVar10 * local_1d8 - dVar13 * dStack_1d0) + dVar53 * dVar14 + 0.0;
          local_1c8._8_4_ = auVar4._8_4_;
          local_1c8._0_8_ = -(ulonglong)(dVar10 == 0.0) & (ulonglong)dVar10;
          local_1c8._12_4_ = auVar4._12_4_;
        }
        dVar12 = dVar11 - local_1d8 * 0.0;
        dVar10 = local_1d8 * 0.0 - dStack_1d0;
        dVar9 = dVar9 + dVar11 * -0.0;
        dVar10 = dVar10 + dVar10;
        dVar12 = dVar12 + dVar12;
        dVar9 = dVar9 + dVar9;
        dVar53 = (dVar11 * dVar9 - dVar10 * local_1d8) + dVar14 * dVar12 + 0.0;
        dVar11 = (dStack_1d0 * dVar10 - dVar12 * dVar11) + dVar14 * dVar9 + 1.0;
        dVar13 = dVar11 * dVar11 + dVar53 * dVar53;
        bVar20 = NAN(dVar13);
        bVar8 = dVar13 == 1.0;
        if ((bVar8) && (!bVar20)) {
          dVar14 = (dVar12 * local_1d8 - dVar9 * dStack_1d0) + dVar14 * dVar10 + 0.0;
          uVar27 = -(ulonglong)(dVar14 == 0.0) & (ulonglong)dVar14;
        }
        dVar14 = dVar53 * (1.0 / SQRT(dVar13));
        if ((bVar8) && (!bVar20)) {
          dVar14 = dVar53;
        }
        dVar9 = (1.0 / SQRT(dVar13)) * dVar11;
        if ((bVar8) && (!bVar20)) {
          dVar9 = dVar11;
        }
        bVar20 = 9.99999993922529e-09 <= dVar13 || bVar8;
        puVar24 = (uint *)CONCAT71(1,bVar20);
        pcVar28 = (char *)CONCAT71((int7)((ulonglong)lVar31 >> 8),
                                   9.99999993922529e-09 <= dVar15 || bVar7);
        pcVar33 = (char *)0x0;
        lVar41 = 0;
switchD_140433b56_caseD_0:
        pcVar32 = pcVar33;
        uVar48 = local_1c8._0_4_;
        uVar22 = local_1c8._4_4_;
        dVar11 = dVar51;
        dVar10 = (double)local_1b8._0_8_;
        if (dVar15 < 9.99999993922529e-09 && !bVar7) goto LAB_14043437a;
LAB_140433ad8:
        do {
          piVar25 = *(int **)(param_1 + 0x48);
          if (*(int **)(param_1 + 0x48) == (int *)0x0) {
            piVar25 = local_190;
          }
          *(float *)((longlong)piVar25 + lVar41) =
               *(float *)((longlong)piVar25 + lVar41) -
               (float)((local_168 - *(double *)(param_1 + 0xc0)) * dVar10 +
                       (dStack_160 - *(double *)(param_1 + 0xc2)) * dVar11 +
                      (local_158 - *(double *)(param_1 + 0xc4)) * (double)CONCAT44(uVar22,uVar48));
          pcVar33 = pcVar32 + 1;
          if (pcVar33 == &DAT_00000004) {
            *(double *)(param_1 + 0xb8) = local_1d8;
            *(double *)(param_1 + 0xba) = dStack_1d0;
            *(undefined1 (*) [16])(param_1 + 0xbc) = auVar4;
            *(double *)(param_1 + 0xc0) = local_168;
            *(double *)(param_1 + 0xc2) = dStack_160;
            *(double *)(param_1 + 0xc4) = local_158;
            *(undefined8 *)(param_1 + 0xc6) = uVar16;
            local_188._4_4_ = (int)((ulonglong)local_188 >> 0x20);
            uStack_180._4_4_ = (int)((ulonglong)uStack_180 >> 0x20);
            *(undefined8 *)(local_1a0 + 4) = local_178;
            *(undefined8 *)(local_1a0 + 6) = uStack_170;
            *local_1a0 = (int)local_188;
            local_1a0[1] = local_188._4_4_;
            local_1a0[2] = (int)uStack_180;
            local_1a0[3] = uStack_180._4_4_;
            iVar21 = 0;
            local_188 = uVar17;
            uStack_180 = uVar18;
            goto LAB_140433bbe;
          }
          lVar41 = lVar41 + 0x28;
          uVar48 = (undefined4)uVar27;
          uVar22 = (uint)(uVar27 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch((ulonglong)pcVar33 & 0xff) {
          case 0:
            goto switchD_140433b56_caseD_0;
          case 1:
            pcVar32 = pcVar33;
            dVar11 = dVar14;
            dVar10 = dVar9;
            if (dVar13 < 9.99999993922529e-09 && !bVar8) {
LAB_14043437a:
              pcVar32 = pcVar33;
              uVar48 = (int)DAT_14c8464f0;
              uVar22 = (uint)((ulonglong)DAT_14c8464f0 >> 0x20);
              dVar11 = DAT_14c8464e8;
              dVar10 = DAT_14c8464e0;
            }
            goto LAB_140433ad8;
          case 2:
            uVar48 = local_1c8._0_4_;
            uVar22 = local_1c8._4_4_;
            dVar11 = dVar51;
            dVar10 = (double)local_1b8._0_8_;
            if (9.99999993922529e-09 > dVar15 && !bVar7) {
LAB_140434333:
              uVar48 = (int)DAT_14c8464f0;
              uVar22 = (uint)((ulonglong)DAT_14c8464f0 >> 0x20);
              dVar11 = DAT_14c8464e8;
              dVar10 = DAT_14c8464e0;
            }
            break;
          case 3:
            dVar11 = dVar14;
            dVar10 = dVar9;
            if (dVar13 < 9.99999993922529e-09 && !bVar8) goto LAB_140434333;
            break;
          case 4:
            pcVar32[0x43] = pcVar32[0x43] & 0xda;
            plVar35 = plVar35 + 0x9a15b3d;
            *(int *)plVar35 = (int)*plVar35 + (int)pcVar28;
            in(0xb1);
            if ((int)*plVar35 < 0) {
              *param_1 = *param_1 + (int)pplVar40;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            return;
          case 5:
            pcVar38 = (char *)(ulonglong)(puVar24[0x1d] * 0x64617200);
            lVar41 = (longlong)*(int *)((longlong)pplVar40 + 0x5f) * 0x69726373;
            cVar19 = (char)((ulonglong)lVar31 >> 8);
            if ((int)lVar41 != lVar41) {
LAB_14b3ef998:
              *pcVar28 = *pcVar28 + cVar19;
              uVar22 = *puVar24;
              *(byte *)(ulonglong)uVar22 = *(byte *)(ulonglong)uVar22 & (byte)uVar22;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            pcVar3 = (char *)((longlong)pplVar40 + 0x62);
            *pcVar3 = *pcVar3 + bVar20;
            cVar34 = (char)((ulonglong)pcVar33 >> 8);
            uVar29 = SUB82(pcVar33,0);
            if (*pcVar3 < '\0') {
              pcVar32 = (char *)((longlong)pplVar40 + 0x62);
              *pcVar32 = *pcVar32 + bVar20;
              if (-1 < *pcVar32) {
                if (*pcVar32 == '\0') {
                  out(*(undefined4 *)pcVar38,uVar29);
                  *pcVar33 = *pcVar33 + '\x01';
                  *(char *)plVar35 = (char)*plVar35 + cVar34;
                  iVar21 = in(uVar29);
                  *(int *)pplVar40 = iVar21;
                  *(byte *)puVar24 = (byte)*puVar24 + cVar34;
                  *pcVar28 = *pcVar28 + cVar19;
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                pcVar28 = (char *)((longlong)puVar24 * 2 + 100);
                *pcVar28 = *pcVar28 + cVar19;
                *(byte *)puVar24 = (byte)*puVar24 + bVar20;
                goto LAB_14b3ef9c8;
              }
            }
            else {
              if (*pcVar3 != '\0') {
                *(char *)plVar35 = (char)*plVar35 + cVar34;
                iVar21 = in(uVar29);
                *(int *)pplVar40 = iVar21;
                *(byte *)puVar24 = (byte)*puVar24 + cVar34;
                goto LAB_14b3ef998;
              }
              lVar41 = (longlong)*(int *)((longlong)pplVar40 + 0x2e) * 0x69646152;
              out(*(undefined4 *)pcVar38,uVar29);
              ppuVar36 = &puStack_260;
              pcVar38 = (char *)(ulonglong)*(uint *)(pcVar32 + 0x6a);
              if ((int)lVar41 == lVar41) {
                *(byte *)puVar24 = (byte)*puVar24 + bVar20;
                *(byte *)puVar24 = (byte)*puVar24 + bVar20;
                *(byte *)puVar24 = (byte)*puVar24 + bVar20;
                (&cStack_1e1)[(longlong)puVar24 * 2] =
                     (&cStack_1e1)[(longlong)puVar24 * 2] + (char)pcVar33;
                *(byte **)puVar24 = (byte *)(*(longlong *)puVar24 + (longlong)puVar24);
                *(byte *)puVar24 = (byte)*puVar24 + bVar20;
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              *pcVar38 = *pcVar38 + cVar19;
            }
            uVar22 = *puVar24;
            puVar24 = (uint *)(ulonglong)uVar22;
            cVar19 = (char)(uVar22 >> 8);
            *(byte *)(puVar24 + 0x3fc0000000) = (byte)puVar24[0x3fc0000000] + cVar19;
            *(char *)plVar35 = (char)*plVar35 + cVar34;
            pcVar28 = (char *)((longlong)&FiberData + (longlong)puVar24 * 2);
            *pcVar28 = *pcVar28 + cVar34;
            *pcVar38 = *pcVar38 + cVar19;
            out(*(undefined4 *)pcVar38,uVar29);
            *pcVar33 = *pcVar33 + cVar34;
            *(byte *)puVar24 = (byte)*puVar24 & (byte)uVar22;
            puVar37 = (undefined1 *)ppuVar36;
            pcVar38 = pcVar38 + 4;
LAB_14b3ef9c8:
            *(undefined8 *)(puVar37 + -8) = 0x73006900;
            cVar26 = (char)((ulonglong)puVar24 >> 8);
            *(byte *)puVar24 = (byte)*puVar24 + cVar26;
            *(char *)pplVar40 = *(char *)pplVar40 + cVar34;
            out(*(undefined4 *)pcVar38,uVar29);
            *pcVar33 = *pcVar33 + cVar34;
            cVar19 = in(uVar29);
            *(char *)pplVar40 = cVar19;
            *(char *)((longlong)puVar24 * 2) = *(char *)((longlong)puVar24 * 2) + cVar26;
            *(char *)((longlong)pplVar40 + 1) = *(char *)((longlong)pplVar40 + 1) + cVar26;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          default:
            goto code_r0x00014b3ef814;
          case 7:
            goto code_r0x00014b3ef814;
          }
          pcVar32 = pcVar33;
          uVar22 = uVar22 ^ 0x80000000;
          dVar11 = -dVar11;
          dVar10 = -dVar10;
        } while( true );
      }
      goto LAB_1404343b4;
    }
  }
  else {
    local_148 = (longlong *)0x0;
    uStack_140 = 0;
    uVar22 = 0;
LAB_1404343b4:
    uVar27 = (ulonglong)uVar22;
  }
  puStack_260 = (undefined *)0x1404343c1;
  local_1e0 = local_148;
  FUN_144796acb(local_148,uVar27);
  if (local_148 != (longlong *)0x0) {
    puStack_260 = (undefined *)0x1404343d7;
    FUN_1400020a8();
  }
LAB_140433501:
  if ((local_f0 ^ (ulonglong)auStack_258) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  puStack_260 = &UNK_140433586;
  FUN_144d8e3a0();
LAB_140433bbe:
  do {
    bVar5 = *(byte *)(param_1 + 0x1f);
    uVar22 = (iVar21 + (uint)bVar5 & 0xffff) / 10;
    uVar39 = (uint)bVar5 + uVar22 * -10 + iVar21;
    uVar22 = (uint)(byte)(bVar5 + (char)uVar22 * -10) + iVar21;
    plVar35 = (longlong *)(ulonglong)uVar22;
    fVar45 = 0.0;
    uVar43 = uVar39 & 0xffff;
    uVar27 = (ulonglong)uVar43;
    if ((char)uVar22 == '\x02') {
      fVar47 = 90.0;
LAB_140433dae:
      fVar46 = 0.0;
      fVar52 = fVar47;
    }
    else {
      if ((uVar22 & 0xff) == 6) {
        fVar47 = -90.0;
        goto LAB_140433dae;
      }
      if (DAT_14cb253f8 == (longlong *)0x0) {
        local_108 = FUN_1449e2820;
        local_1f0 = FUN_14081d0ea;
        local_1f8 = FUN_14081d0ea;
        local_200 = &local_108;
        local_208 = &LAB_147f6f09d;
        local_210 = &LAB_146201c25;
        local_218 = L"Game";
        local_220 = 0;
        local_228 = 0x10000006;
        local_230 = 8;
        local_238 = 0x480;
        puStack_260 = (undefined *)0x140434238;
        FUN_14081cfa3(L"/Script/GbxAudio",L"GbxAudioSettings",&DAT_14cb253f8,&DAT_147f6f09c);
      }
      plVar30 = DAT_14cb253f8;
      if (DAT_14cb253f8[0x22] == 0) {
        puStack_260 = (undefined *)0x140434251;
        (**(code **)(*DAT_14cb253f8 + 1000))(DAT_14cb253f8);
        fVar45 = 0.0;
        fVar46 = 0.0;
        fVar47 = 0.0;
        fVar52 = 0.0;
        if (plVar30[0x22] != 0) goto LAB_140433c22;
      }
      else {
LAB_140433c22:
        lVar41 = DAT_14cb25be0;
        fVar45 = 0.0;
        if (DAT_14cb25be0 != 0) {
          if (DAT_14cb5e220 == 0) {
            local_108 = FUN_1449e2820;
            local_1f0 = FUN_14081d0ea;
            local_1f8 = (code *)&LAB_1459ebe90;
            local_200 = &local_108;
            local_208 = &LAB_1486a1487;
            local_210 = &LAB_1464e0171;
            local_218 = L"Engine";
            local_220 = 0;
            local_228 = 0x10000000;
            local_230 = 8;
            local_238 = 0x440;
            puStack_260 = (undefined *)0x140434199;
            FUN_14081cfa3(L"/Script/GbxGame",L"GbxGameAudioGlobals",&DAT_14cb5e220,&DAT_1486a1486);
          }
          lVar31 = *(longlong *)(lVar41 + 0x10);
          if ((*(int *)(DAT_14cb5e220 + 0x38) <= *(int *)(lVar31 + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(lVar31 + 0x30) + (longlong)*(int *)(DAT_14cb5e220 + 0x38) * 8) ==
              DAT_14cb5e220 + 0x30)) {
            lVar41 = *(longlong *)(lVar41 + 0x2e0);
            fVar46 = 0.0;
            fVar47 = 0.0;
            fVar52 = 0.0;
            if (lVar41 != 0) {
              puStack_260 = (undefined *)0x140433c97;
              lVar31 = FUN_1447e736e(lVar41 + 0x298);
              if (lVar31 == 0) {
                lVar31 = lVar41 + 0x218;
              }
              else {
                puStack_260 = (undefined *)0x14043427f;
                lVar31 = FUN_1447e736e(lVar41 + 0x298);
                lVar31 = lVar31 + 0x30;
              }
              if (lVar31 == 0) {
                fVar52 = 0.0;
                fVar47 = 0.0;
              }
              else {
                if ((int)uVar43 < param_1[0xb2]) {
                  piVar25 = *(int **)(param_1 + 0xb0);
                  if (*(int **)(param_1 + 0xb0) == (int *)0x0) {
                    piVar25 = piVar2;
                  }
                  iVar50 = piVar25[uVar27 * 10];
                }
                else {
                  iVar50 = 0;
                }
                puStack_260 = (undefined *)0x140433cdd;
                fVar45 = (float)FUN_1448c9f94(lVar31,iVar50,0);
                fVar47 = (float)param_1[0x1b];
                if ((float)param_1[0x1b] <= 0.0 - fVar45) {
                  fVar47 = 0.0 - fVar45;
                }
                uVar44 = -(uint)((float)param_1[0x1c] < fVar45);
                fVar52 = (float)(uVar44 & param_1[0x1c] | ~uVar44 & (uint)(fVar45 + 0.0));
              }
              puStack_260 = (undefined *)0x140433d24;
              lVar31 = FUN_1447e736e(lVar41 + 0x1e8);
              if (lVar31 == 0) {
                lVar41 = lVar41 + 0x168;
              }
              else {
                puStack_260 = (undefined *)0x1404342aa;
                lVar41 = FUN_1447e736e(lVar41 + 0x1e8);
                lVar41 = lVar41 + 0x30;
              }
              if (lVar41 == 0) {
                fVar45 = 0.0;
                fVar46 = 0.0;
              }
              else {
                if ((int)uVar43 < param_1[0xb2]) {
                  piVar25 = *(int **)(param_1 + 0xb0);
                  if (*(int **)(param_1 + 0xb0) == (int *)0x0) {
                    piVar25 = piVar2;
                  }
                  iVar50 = piVar25[uVar27 * 10];
                }
                else {
                  iVar50 = 0;
                }
                puStack_260 = (undefined *)0x140433d6c;
                fVar46 = (float)FUN_1448c9f94(lVar41,iVar50,0);
                fVar49 = (float)*(double *)(DAT_14cb72598 + 8 + uVar27 * 0x18);
                fVar45 = fVar49 - fVar46;
                fVar46 = fVar46 + fVar49;
              }
            }
            goto LAB_140433db3;
          }
        }
        fVar46 = 0.0;
        fVar47 = 0.0;
        fVar52 = 0.0;
      }
    }
LAB_140433db3:
    puStack_260 = (undefined *)0x140433dc2;
    uVar44 = rand();
    puStack_260 = (undefined *)0x140433df0;
    uVar23 = rand();
    puStack_260 = (undefined *)0x140433e25;
    dVar14 = (double)FUN_144719204(SUB84((double)(((float)(uVar44 & 0x7fff) / 32767.0) *
                                                  (fVar52 - fVar47) + fVar47),0),0);
    puStack_260 = (undefined *)0x140433e34;
    dVar10 = (double)FUN_144719204(SUB84((double)(((float)(uVar23 & 0x7fff) / 32767.0) *
                                                  (fVar46 - fVar45) + fVar45),0),0);
    puStack_260 = (undefined *)0x140433e4f;
    dVar11 = sin(dVar14 * 0.017453292519943295);
    puStack_260 = (undefined *)0x140433e5d;
    dVar14 = cos(dVar14 * 0.017453292519943295);
    puStack_260 = (undefined *)0x140433e71;
    dVar9 = sin(dVar10 * 0.017453292519943295);
    puStack_260 = (undefined *)0x140433e80;
    dVar10 = cos(dVar10 * 0.017453292519943295);
    local_100 = dVar9 * dVar14;
    local_108 = (code *)(dVar10 * dVar14);
    dVar14 = (double)(float)param_1[0x1a];
    local_110 = dVar11 * dVar14 + local_158;
    dStack_118 = local_100 * dVar14 + dStack_160;
    local_120 = (double)local_108 * dVar14 + local_168;
    local_238 = CONCAT31(local_238._1_3_,(char)uVar22);
    puStack_260 = (undefined *)0x140433f17;
    local_f8 = dVar11;
    FUN_1400cb01c(param_1,&local_168,&local_120,&local_108);
    uVar39 = uVar39 & 0xb;
    pplVar40 = (longlong **)(ulonglong)uVar39;
    if ((short)uVar39 != 2) {
      if ((int)uVar43 < param_1[0xb2]) {
        piVar25 = *(int **)(param_1 + 0xb0);
        if (*(int **)(param_1 + 0xb0) == (int *)0x0) {
          piVar25 = piVar2;
        }
        fVar45 = (float)piVar25[uVar27 * 10];
      }
      else {
        fVar45 = 0.0;
      }
      fVar47 = fVar45 + -10.0;
      if ((float)param_1[0x1d] <= fVar45 + -10.0) {
        fVar47 = (float)param_1[0x1d];
      }
      lVar41 = (ulonglong)(uVar43 << 3) * 3;
      dVar11 = (double)fVar47;
      local_128 = *(double *)(DAT_14cb72588 + 0x10 + lVar41) * dVar11 + local_158;
      local_130 = *(double *)(DAT_14cb72588 + 8 + lVar41) * dVar11 + dStack_160;
      local_138 = dVar11 * *(double *)(DAT_14cb72588 + lVar41) + local_168;
      dVar11 = *(double *)(DAT_14cb72598 + 8 + lVar41);
      puStack_260 = (undefined *)0x140433fe6;
      dVar14 = (double)FUN_144719204(SUB84((double)(float)param_1[0x1e],0),0);
      puStack_260 = (undefined *)0x140433ff5;
      dVar10 = (double)FUN_144719204(SUB84((double)(float)dVar11,0),0);
      puStack_260 = (undefined *)0x140434010;
      dVar11 = sin(dVar14 * 0.017453292519943295);
      puStack_260 = (undefined *)0x14043401e;
      dVar14 = cos(dVar14 * 0.017453292519943295);
      puStack_260 = (undefined *)0x140434032;
      dVar9 = sin(dVar10 * 0.017453292519943295);
      puStack_260 = (undefined *)0x140434041;
      dVar10 = cos(dVar10 * 0.017453292519943295);
      local_100 = dVar9 * dVar14;
      local_108 = (code *)(dVar10 * dVar14);
      dVar14 = (double)(float)param_1[0x1a];
      local_110 = dVar11 * dVar14 + local_128;
      dStack_118 = local_100 * dVar14 + local_130;
      local_120 = (double)local_108 * dVar14 + local_138;
      local_238 = CONCAT31(local_238._1_3_,2);
      puStack_260 = (undefined *)0x1404340d9;
      local_f8 = dVar11;
      FUN_1400cb01c(param_1,&local_138,&local_120,&local_108);
    }
    iVar21 = iVar21 + 1;
  } while ((short)iVar21 != 3);
  *(byte *)(param_1 + 0x1f) =
       *(byte *)(param_1 + 0x1f) + ((byte)((*(byte *)(param_1 + 0x1f) + 3) / 5) & 0xfe) * -5 +
       '\x03';
  local_1e0 = local_1e0 + 2;
  if (local_1e0 == local_198) goto LAB_14043439f;
  goto LAB_1404336fb;
LAB_14043439f:
  uVar22 = (uint)uStack_140;
  goto LAB_1404343b4;
code_r0x00014b3ef814:
  *(int *)pplVar40 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



// FUNCTION 140434402 FUN_140434402 body=698 status=ok
// SIG undefined FUN_140434402(void)

void FUN_140434402(longlong param_1,undefined8 param_2,longlong *param_3,undefined4 param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_b8 [32];
  undefined4 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined8 local_78;
  ulonglong local_70;
  
  local_70 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar4 = param_3[1];
  if ((longlong)(int)lVar4 == 0) goto LAB_140434455;
  if (*(char *)(param_1 + 0x2c) != '\x01') {
    lVar1 = *param_3;
    lVar7 = 0;
    do {
      if (*(longlong *)(lVar1 + lVar7) != 0) {
        local_88 = param_7;
        local_90 = param_6;
        local_98 = param_5;
        FUN_1404346ee(param_1,param_2,*(longlong *)(lVar1 + lVar7),param_4);
      }
      lVar7 = lVar7 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar7);
    goto LAB_140434455;
  }
  if (((((*(int *)(param_1 + 0x28) == 0) || (uVar3 = *(uint *)(param_1 + 0x24), (int)uVar3 < 0)) ||
       (DAT_14c9647dc <= (int)uVar3)) ||
      ((plVar5 = (longlong *)
                 ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
       plVar5 == (longlong *)0x0 || ((int)plVar5[2] != *(int *)(param_1 + 0x28))))) ||
     (((*(uint *)(plVar5 + 1) & 0x10200000) != 0 ||
      (((longlong *)*plVar5 == (longlong *)0x0 ||
       (plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar5 + 0x498))(),
       plVar5 == (longlong *)0x0)))))) goto LAB_140434455;
  lVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5);
  if (lVar4 == 0) {
LAB_140434567:
    uVar8 = *(uint *)((longlong)plVar5 + 0xc);
    if ((int)uVar8 < DAT_14c9647dc) {
      lVar4 = (ulonglong)((uVar8 & 0xffff) * 0x18) +
              *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar8 >> 0x10) * 8);
    }
    else {
      lVar4 = 0;
    }
    uVar3 = *(uint *)(lVar4 + 0x10);
    if (*(uint *)(lVar4 + 0x10) == 0) {
      LOCK();
      iVar2 = DAT_14c964868 + 1;
      UNLOCK();
      uVar6 = DAT_14c964868 + 1;
      bVar9 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar2;
      if (bVar9) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      uVar6);
      }
      LOCK();
      uVar3 = *(uint *)(lVar4 + 0x10);
      bVar9 = uVar3 == 0;
      if (bVar9) {
        *(uint *)(lVar4 + 0x10) = uVar6;
        uVar3 = 0;
      }
      UNLOCK();
      if (bVar9) {
        uVar3 = uVar6;
      }
    }
  }
  else {
    plVar5 = *(longlong **)(lVar4 + 0x1de8);
    uVar8 = 0;
    uVar3 = 0;
    if (plVar5 != (longlong *)0x0) goto LAB_140434567;
  }
  local_78 = CONCAT44(uVar3,uVar8);
  iVar2 = FUN_14043498a(uVar3 ^ uVar8);
  if (((((iVar2 != -1) && (lVar4 = (longlong)iVar2 * 0x18 + DAT_14cb7c3c0, lVar4 != 0)) &&
       (*(int *)(lVar4 + 0xc) != 0)) &&
      (((uVar3 = *(uint *)(lVar4 + 8), -1 < (int)uVar3 && ((int)uVar3 < DAT_14c9647dc)) &&
       ((plVar5 = (longlong *)
                  ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                  *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
        plVar5 != (longlong *)0x0 &&
        (((int)plVar5[2] == *(int *)(lVar4 + 0xc) && ((*(uint *)(plVar5 + 1) & 0x10200000) == 0)))))
       ))) && (*plVar5 != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0(local_70 ^ (ulonglong)auStack_b8);
  }
LAB_140434455:
  if ((local_70 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 1404346ee FUN_1404346ee body=666 status=ok
// SIG undefined FUN_1404346ee(void)

void FUN_1404346ee(uint *param_1,undefined8 *param_2,longlong *param_3,float param_4,float param_5,
                  float param_6,undefined8 *param_7)

{
  uint uVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  int iVar6;
  longlong lVar7;
  longlong *plVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  float fVar12;
  undefined1 auStack_88 [32];
  float *local_68;
  longlong *local_60;
  char local_56;
  char local_55;
  float local_54;
  ulonglong local_50;
  
  local_50 = DAT_14c707940 ^ (ulonglong)auStack_88;
  plVar2 = (longlong *)(**(code **)*param_3)(param_3);
  plVar3 = (longlong *)(**(code **)(*param_3 + 0x20))(param_3);
  if ((int)plVar2[1] != *(int *)((longlong)plVar2 + 0x34)) {
    plVar8 = plVar2 + 7;
    if ((longlong *)plVar2[8] != (longlong *)0x0) {
      plVar8 = (longlong *)plVar2[8];
    }
    iVar6 = *(int *)((longlong)plVar8 + (ulonglong)((int)plVar2[9] - 1U & *param_1) * 4);
    if (iVar6 != -1) {
      do {
        bVar10 = *(uint *)(*plVar2 + (longlong)iVar6 * 0x10) == *param_1;
        if (bVar10) break;
        iVar6 = *(int *)((longlong)iVar6 * 0x10 + *plVar2 + 8);
      } while (iVar6 != -1);
      goto LAB_140434781;
    }
  }
  bVar10 = false;
LAB_140434781:
  lVar4 = (**(code **)(*plVar3 + 0x180))(plVar3);
  if (lVar4 == 0) {
    lVar7 = *(longlong *)(param_1 + 0xaa);
    bVar11 = false;
  }
  else {
    lVar7 = *(longlong *)(param_1 + 0xaa);
    bVar11 = *(longlong *)(lVar4 + 0x18) == lVar7;
  }
  if (((lVar7 == 0) || (!(bool)(~bVar11 & lVar7 != DAT_14cb7c538))) &&
     ((longlong)*(int *)(param_2 + 1) != 0)) {
    if (bVar10 != false) {
      param_4 = param_5;
    }
    plVar2 = (longlong *)*param_2;
    lVar4 = (longlong)*(int *)(param_2 + 1) * 0x48;
    do {
      if ((char)param_1[0xb] == '\x01') {
        if ((param_1[10] == 0) || (uVar1 = param_1[9], (int)uVar1 < 0)) {
LAB_1404348df:
          lVar7 = 0;
        }
        else {
          lVar7 = 0;
          if ((int)uVar1 < DAT_14c9647dc) {
            plVar8 = (longlong *)
                     ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                     *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8));
            if (((plVar8 == (longlong *)0x0) || (*(uint *)(plVar8 + 2) != param_1[10])) ||
               ((*(uint *)(plVar8 + 1) & 0x10200000) != 0)) goto LAB_1404348df;
            lVar7 = *plVar8;
          }
        }
        if (plVar2[1] == lVar7) goto LAB_140434851;
      }
      else {
LAB_140434851:
        plVar8 = plVar2;
        if (((longlong *)*plVar2 != (longlong *)0x0) &&
           (plVar5 = (longlong *)(**(code **)(*(longlong *)*plVar2 + 0x2b8))(),
           plVar5 != (longlong *)0x0)) {
          lVar7 = (**(code **)(*plVar5 + 0x2b8))();
          plVar8 = (longlong *)(lVar7 + 0x1de8);
        }
        if (((longlong *)*plVar8 == plVar3) &&
           ((float)(((double)plVar2[5] - *(double *)(param_1 + 0x58)) *
                    ((double)plVar2[5] - *(double *)(param_1 + 0x58)) +
                   ((double)plVar2[3] - *(double *)(param_1 + 0x54)) *
                   ((double)plVar2[3] - *(double *)(param_1 + 0x54)) +
                   ((double)plVar2[4] - *(double *)(param_1 + 0x56)) *
                   ((double)plVar2[4] - *(double *)(param_1 + 0x56))) <= param_4)) {
          cVar9 = '\x01';
          goto LAB_1404348e8;
        }
      }
      plVar2 = plVar2 + 9;
      lVar4 = lVar4 + -0x48;
    } while (lVar4 != 0);
  }
  cVar9 = '\0';
LAB_1404348e8:
  if (bVar10 != false) {
    if (cVar9 == '\0') {
      fVar12 = (float)(**(code **)(*param_3 + 0x30))(param_3,param_1);
      if (param_6 - fVar12 < 3.0) {
        cVar9 = '\x01';
      }
    }
    else {
      (**(code **)(*param_3 + 0x38))(param_3,param_1,param_6);
    }
  }
  local_68 = &local_54;
  local_54 = param_6;
  local_60 = param_3;
  local_56 = bVar10;
  local_55 = cVar9;
  (*(code *)*param_7)(param_7[1]);
  if ((local_50 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14043498a FUN_14043498a body=196 status=ok
// SIG undefined FUN_14043498a(void)

int FUN_14043498a(uint param_1,undefined8 *param_2)

{
  char cVar1;
  undefined *puVar2;
  int iVar3;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (DAT_14cb7c3c8 != DAT_14cb7c3f4) {
    puVar2 = &DAT_14cb7c3f8;
    if (DAT_14cb7c400 != (undefined *)0x0) {
      puVar2 = DAT_14cb7c400;
    }
    iVar3 = *(int *)(puVar2 + (ulonglong)(DAT_14cb7c408 - 1U & param_1) * 4);
    if (iVar3 != -1) {
      do {
        local_40 = *param_2;
        local_38 = *(undefined8 *)(DAT_14cb7c3c0 + (longlong)iVar3 * 0x18);
        cVar1 = FUN_140434a50(&local_38,&local_40);
        if (cVar1 != '\0') goto LAB_140434a2a;
        iVar3 = *(int *)(DAT_14cb7c3c0 + 0x10 + (longlong)iVar3 * 0x18);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_140434a2a:
  if ((local_30 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140434a50 FUN_140434a50 body=104 status=ok
// SIG undefined FUN_140434a50(void)

ulonglong FUN_140434a50(uint *param_1,uint *param_2)

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



// FUNCTION 140434ac6 FUN_140434ac6 body=31 status=ok
// SIG undefined FUN_140434ac6(void)

undefined8 FUN_140434ac6(undefined8 param_1,int param_2)

{
  if (param_2 != 0) {
    FUN_1400020a8(param_1);
  }
  return param_1;
}



// FUNCTION 140434ae6 FUN_140434ae6 body=102 status=ok
// SIG undefined FUN_140434ae6(void)

ulonglong FUN_140434ae6(longlong param_1)

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
LAB_140434b2f:
    uVar7 = 0;
  }
  else {
    iVar6 = (int)plVar3[1];
    do {
      if (iVar6 == 0) goto LAB_140434b2f;
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
      (**(code **)(param_1 + 0x28))(lVar4 + *(int *)(param_1 + 0x30));
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



// FUNCTION 140434b4c FUN_140434b4c body=217 status=ok
// SIG undefined FUN_140434b4c(void)

void FUN_140434b4c(longlong *param_1,float param_2)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  
  if (((*(float *)(param_1 + 0xe) != *(float *)((longlong)param_1 + 0x74)) ||
      (NAN(*(float *)(param_1 + 0xe)) || NAN(*(float *)((longlong)param_1 + 0x74)))) &&
     ((longlong *)param_1[0xc] != (longlong *)0x0)) {
    fVar5 = (float)(**(code **)(*(longlong *)param_1[0xc] + 0x10))();
    fVar6 = *(float *)(param_1 + 0xe);
    fVar1 = *(float *)((longlong)param_1 + 0x74);
    if (fVar6 <= fVar1) {
      fVar6 = fVar5 * param_2 + fVar6;
      if (fVar1 <= fVar6) {
        fVar6 = fVar1;
      }
    }
    else {
      fVar6 = fVar6 - fVar5 * param_2;
      if (fVar6 <= fVar1) {
        fVar6 = fVar1;
      }
    }
    *(float *)(param_1 + 0xe) = fVar6;
    FUN_140434c6e(param_1);
    lVar3 = param_1[10];
    if ((longlong)(int)lVar3 != 0) {
      lVar2 = param_1[9];
      lVar4 = 0;
      do {
        (**(code **)(**(longlong **)(lVar2 + lVar4) + 8))
                  (*(longlong **)(lVar2 + lVar4),(int)param_1[0xe]);
        lVar4 = lVar4 + 0x10;
      } while ((longlong)(int)lVar3 * 0x10 != lVar4);
    }
  }
  (**(code **)(*param_1 + 0x20))(param_1,param_2);
  if ((*(byte *)(param_1 + 0xf) & 1) != 0) {
    if ((*(float *)(param_1 + 0xe) != *(float *)((longlong)param_1 + 0x74)) ||
       (NAN(*(float *)(param_1 + 0xe)) || NAN(*(float *)((longlong)param_1 + 0x74)))) {
      return;
    }
  }
  FUN_140434fde(param_1);
  return;
}



// FUNCTION 140434c6e FUN_140434c6e body=181 status=ok
// SIG undefined FUN_140434c6e(void)

void FUN_140434c6e(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  char cVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  if ((longlong)*(int *)(param_1 + 0x40) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x38);
    lVar5 = (longlong)*(int *)(param_1 + 0x40) * 0x40 + lVar6;
    do {
      plVar2 = *(longlong **)(lVar6 + 0x10);
      if (((plVar2 != (longlong *)0x0) &&
          (cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar6), cVar4 != '\0')) &&
         (iVar1 = *(int *)(lVar6 + 0x28), (longlong)iVar1 != 0)) {
        lVar3 = *(longlong *)(lVar6 + 0x20);
        lVar7 = 0;
        do {
          plVar2 = *(longlong **)(lVar3 + lVar7);
          cVar4 = (**(code **)(*plVar2 + 0x10))(plVar2,lVar6,*(undefined4 *)(param_1 + 0x70));
          if (cVar4 != '\0') {
            *(int *)(lVar6 + 8) = *(int *)(lVar6 + 8) + 1;
            iVar1 = *(int *)(lVar6 + 0x38);
            if ((longlong)iVar1 != 0) {
              lVar3 = *(longlong *)(lVar6 + 0x30);
              lVar7 = 0;
              do {
                plVar2 = *(longlong **)(lVar3 + lVar7);
                (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
                lVar7 = lVar7 + 0x10;
              } while ((longlong)iVar1 * 0x10 != lVar7);
            }
            break;
          }
          lVar7 = lVar7 + 0x10;
        } while ((longlong)iVar1 * 0x10 != lVar7);
      }
      lVar6 = lVar6 + 0x40;
    } while (lVar6 != lVar5);
  }
  return;
}



// FUNCTION 140434d2e FUN_140434d2e body=347 status=ok
// SIG undefined FUN_140434d2e(void)

void FUN_140434d2e(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  int *piVar2;
  uint uVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong local_40;
  longlong *local_38;
  undefined4 local_30;
  undefined1 local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if (((*(int *)((longlong)param_1 + 0x4c) != 0) &&
      (uVar3 = *(uint *)(param_1 + 9), -1 < (int)uVar3)) && ((int)uVar3 < DAT_14c9647dc)) {
    plVar5 = (longlong *)
             ((ulonglong)((uVar3 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
    if (((plVar5 != (longlong *)0x0) && ((int)plVar5[2] == *(int *)((longlong)param_1 + 0x4c))) &&
       (((*(uint *)(plVar5 + 1) & 0x10200000) == 0 &&
        ((lVar4 = *plVar5, lVar4 != 0 && ((*(uint *)(lVar4 + 8) >> 0x1e & 1) == 0)))))) {
      lVar6 = 0;
      if ((*(uint *)(plVar5 + 1) & 0x10200000) == 0) {
        lVar6 = lVar4;
      }
      if ((*(byte *)(lVar6 + 0x9e) & 0x10) != 0) {
        local_40 = param_1[3];
        local_38 = (longlong *)param_1[4];
        if (local_38 != (longlong *)0x0) {
          LOCK();
          *(int *)(local_38 + 1) = (int)local_38[1] + 1;
          UNLOCK();
        }
        local_48 = lVar4;
        local_30 = param_2;
        local_2c = (**(code **)(*param_1 + 0x38))(param_1);
        lVar4 = (longlong)*(int *)(param_1[8] + 0x48);
        if (lVar4 != 0) {
          lVar6 = *(longlong *)(param_1[8] + 0x40);
          lVar7 = 0;
          do {
            plVar5 = *(longlong **)(lVar6 + lVar7);
            if (plVar5 != (longlong *)0x0) {
              (**(code **)(*plVar5 + 0x10))(plVar5,&local_48);
            }
            lVar7 = lVar7 + 0x18;
          } while (lVar4 * 0x18 != lVar7);
        }
        plVar5 = local_38;
        if (local_38 != (longlong *)0x0) {
          LOCK();
          plVar1 = local_38 + 1;
          *(int *)plVar1 = (int)*plVar1 + -1;
          UNLOCK();
          if ((int)*plVar1 == 0) {
            (**(code **)*local_38)(local_38);
            LOCK();
            piVar2 = (int *)((longlong)plVar5 + 0xc);
            *piVar2 = *piVar2 + -1;
            UNLOCK();
            if (*piVar2 == 0) {
              (**(code **)(*plVar5 + 0x10))(plVar5);
            }
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



// FUNCTION 140434ebc FUN_140434ebc body=105 status=ok
// SIG undefined FUN_140434ebc(void)

void FUN_140434ebc(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 uVar3;
  
  lVar2 = *(longlong *)(param_1 + 0x98) + 0x30;
  if (*(longlong *)(param_1 + 0x98) == 0) {
    lVar2 = param_1 + 0x18;
  }
  if (lVar2 != 0) {
    plVar1 = (longlong *)*param_2;
    if ((*(char *)(param_1 + 0x10) == '\x01') && ((*(byte *)((longlong)param_2 + 0x1c) & 1) == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = FUN_1448c9f94(lVar2,*(undefined4 *)(param_2 + 3),0);
    }
                    /* WARNING: Could not recover jumptable at 0x000140434f16. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa08))(plVar1,*(undefined8 *)(param_1 + 8),uVar3);
    return;
  }
  return;
}



// FUNCTION 140434f26 FUN_140434f26 body=113 status=ok
// SIG undefined FUN_140434f26(void)

void FUN_140434f26(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  float fVar4;
  
  plVar1 = (longlong *)*param_2;
  iVar3 = 0;
  if ((*(char *)(param_1 + 0x10) != '\x01') || ((*(byte *)((longlong)param_2 + 0x1c) & 1) != 0)) {
    lVar2 = *(longlong *)(param_1 + 0x98) + 0x30;
    if (*(longlong *)(param_1 + 0x98) == 0) {
      lVar2 = param_1 + 0x18;
    }
    if (lVar2 != 0) {
      fVar4 = (float)FUN_1448c9f94(lVar2,*(undefined4 *)(param_2 + 3),0);
      iVar3 = (int)ROUND(fVar4 + fVar4 + -0.5) >> 1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000140434f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0xa00))(plVar1,*(undefined8 *)(param_1 + 8),iVar3);
  return;
}



// FUNCTION 140434fde FUN_140434fde body=122 status=ok
// SIG undefined FUN_140434fde(void)

void FUN_140434fde(longlong param_1)

{
  byte bVar1;
  longlong lVar2;
  char cVar3;
  
  if ((*(byte *)(param_1 + 0x78) & 4) == 0) {
    return;
  }
  if (*(longlong *)(param_1 + 0x58) != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    cVar3 = FUN_14480f766(lVar2 + 0x98);
    if (cVar3 != '\0') {
      cVar3 = FUN_140547b60(lVar2);
      if (cVar3 == '\0') {
        FUN_1405485da(lVar2);
      }
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  bVar1 = *(byte *)(param_1 + 0x78);
  *(byte *)(param_1 + 0x78) = bVar1 & 0xfb;
  if ((bVar1 & 8) == 0) {
    FUN_140435058();
    return;
  }
  FUN_140b14b16(param_1);
  return;
}



// FUNCTION 140435058 FUN_140435058 body=174 status=ok
// SIG undefined FUN_140435058(void)

void FUN_140435058(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  byte bVar4;
  byte bVar5;
  longlong lVar6;
  
  bVar5 = *(byte *)(param_1 + 0x78);
  if (((bVar5 & 0x10) == 0) == ((bVar5 & 0x21) == 0x21)) {
    bVar4 = 0x10;
    if ((bVar5 & 0x21) != 0x21) {
      if ((bVar5 & 4) != 0) {
        return;
      }
      bVar4 = 0;
    }
    *(byte *)(param_1 + 0x78) = bVar5 & 0xef | bVar4;
    iVar1 = *(int *)(param_1 + 0x50);
    if ((longlong)iVar1 != 0) {
      lVar2 = *(longlong *)(param_1 + 0x48);
      lVar6 = 0;
      do {
        plVar3 = *(longlong **)(lVar2 + lVar6);
        bVar5 = *(byte *)(plVar3 + 7) & 6;
        if ((*(byte *)(param_1 + 0x78) & 0x10) == 0) {
          if (bVar5 == 2) {
            (**(code **)(*plVar3 + 0x20))(plVar3);
            *(byte *)(plVar3 + 7) = *(byte *)(plVar3 + 7) & 0xfd;
          }
        }
        else if (bVar5 == 0) {
          *(byte *)(plVar3 + 7) = *(byte *)(plVar3 + 7) | 2;
          (**(code **)(*plVar3 + 0x18))(plVar3);
          (**(code **)(*plVar3 + 8))(plVar3,*(undefined4 *)(plVar3[5] + 0x70));
        }
        lVar6 = lVar6 + 0x10;
      } while ((longlong)iVar1 * 0x10 != lVar6);
    }
  }
  return;
}



// FUNCTION 140435106 FUN_140435106 body=303 status=ok
// SIG undefined FUN_140435106(void)

void FUN_140435106(longlong param_1,longlong param_2)

{
  uint uVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined1 auStack_d8 [32];
  undefined8 *local_b8;
  undefined8 *local_b0;
  uint local_a8;
  undefined1 local_a0;
  undefined1 local_98;
  undefined1 local_90;
  undefined1 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_d8;
  lVar2 = *(longlong *)(param_2 + 0x18);
  if ((*(longlong **)(lVar2 + 0x20) != (longlong *)0x0) && (*(int *)(lVar2 + 0x1c) != 0)) {
    uVar1 = *(uint *)(lVar2 + 0x18);
    uVar3 = 0;
    if (((int)uVar1 < 0) || (DAT_14c9647dc <= (int)uVar1)) goto LAB_14043517d;
    lVar4 = (ulonglong)((uVar1 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8);
    if (((lVar4 != 0) && (*(int *)(lVar4 + 0x10) == *(int *)(lVar2 + 0x1c))) &&
       ((*(uint *)(lVar4 + 8) & 0x10200000) == 0)) {
      uVar3 = (**(code **)(**(longlong **)(lVar2 + 0x20) + 8))();
      goto LAB_14043517d;
    }
  }
  uVar3 = 0;
LAB_14043517d:
  lVar2 = FUN_140bfe17c(param_1 + 0x68,uVar3);
  if (lVar2 != 0) {
    local_28 = *(undefined8 *)(param_1 + 0x58);
    local_b0 = &local_38;
    local_38 = *(undefined8 *)(param_1 + 0x48);
    uStack_30 = *(undefined8 *)(param_1 + 0x50);
    local_48 = *(undefined8 *)(param_1 + 0x40);
    local_b8 = &local_58;
    local_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    local_78 = *(undefined4 *)(param_1 + 0x18);
    uStack_74 = *(undefined4 *)(param_1 + 0x1c);
    uStack_70 = *(undefined4 *)(param_1 + 0x20);
    uStack_6c = *(undefined4 *)(param_1 + 0x24);
    local_68 = *(undefined8 *)(param_1 + 0x28);
    local_88 = 1;
    local_90 = 1;
    local_98 = 1;
    local_a0 = 1;
    local_a8 = (uint)*(byte *)(param_1 + 0x10);
    FUN_140e3e448(*(undefined8 *)(param_1 + 8),lVar2,*(undefined8 *)(param_1 + 0x60));
  }
  if ((local_18 ^ (ulonglong)auStack_d8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140435236 FUN_140435236 body=1378 status=ok
// SIG undefined FUN_140435236(void)

void FUN_140435236(longlong param_1,longlong param_2,longlong param_3)

{
  ulonglong *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  
  puVar1 = (ulonglong *)(param_1 + 0x70);
  puVar8 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 0xfU & 0xfffffffffffffff0);
  puVar5 = puVar8 + 0x14;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0xb0);
    puVar8 = (undefined8 *)(*puVar1 + 0xf & 0xfffffffffffffff0);
    puVar5 = puVar8 + 0x14;
  }
  *(undefined8 **)(param_1 + 0x70) = puVar5;
  *puVar8 = &PTR_FUN_14a2781e8;
  puVar8[8] = 0;
  puVar8[9] = 0;
  puVar8[10] = 0;
  puVar8[0xb] = 0;
  puVar8[0xc] = 0;
  puVar8[0xd] = 0;
  puVar8[0xe] = 0;
  puVar8[0xf] = 0;
  puVar8[0x10] = 0;
  puVar8[0x11] = 0;
  puVar8[0x12] = 0;
  puVar8[0x13] = 0;
  iVar3 = *(int *)(param_1 + 0xa0);
  *(uint *)(param_1 + 0xa0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0xa4) < iVar3 + 1U) {
    FUN_1448cfae8((longlong *)(param_1 + 0x98),iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x98) + (longlong)iVar3 * 8) = puVar8;
  *(undefined4 *)(puVar8 + 2) =
       *(undefined4 *)(param_2 + 0x3c + (ulonglong)*(byte *)(param_2 + 0x108) * 4);
  *(undefined4 *)((longlong)puVar8 + 0x14) =
       *(undefined4 *)(param_2 + 0x2cc + (ulonglong)*(byte *)(param_2 + 0x398) * 4);
  *(undefined4 *)(puVar8 + 3) =
       *(undefined4 *)(param_2 + 0x67c + (ulonglong)*(byte *)(param_2 + 0x748) * 4);
  *(undefined4 *)((longlong)puVar8 + 0x1c) =
       *(undefined4 *)(param_2 + 0x55c + (ulonglong)*(byte *)(param_2 + 0x628) * 4);
  *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(param_2 + 400);
  fVar10 = (float)(int)*(undefined8 *)(param_2 + 0xa24);
  fVar11 = (float)(int)((ulonglong)*(undefined8 *)(param_2 + 0xa24) >> 0x20);
  *(float *)(puVar8 + 5) = fVar10;
  *(float *)((longlong)puVar8 + 0x2c) = fVar11;
  *(float *)(puVar8 + 6) = 1.0 / fVar10;
  *(float *)((longlong)puVar8 + 0x34) = 1.0 / fVar11;
  *(undefined4 *)(puVar8 + 7) = 0x3f800000;
  if (*(longlong *)(param_3 + 0x88) == 0) {
    lVar4 = FUN_144735828(&DAT_14ca63b10,param_1,0x10);
    if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x1c;
    }
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar9 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x50);
      puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar9 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    puVar9[1] = *(undefined8 *)(lVar4 + 8);
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 3;
    *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
    *puVar9 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar9 + 5) = uVar7;
    *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000000;
    puVar9[7] = 0;
    puVar9[8] = lVar4;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar9;
    *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar8[8] = puVar9;
    puVar8[10] = puVar9;
    puVar8[0xb] = puVar9;
    puVar8[9] = puVar9;
    puVar8[0xc] = puVar9;
    lVar4 = FUN_14489a2c5(param_1,&DAT_14ca63c48,&DAT_14ca63c78,0x10,2,0);
    if ((*(byte *)(lVar4 + 0x68) & 0x80) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x1c;
    }
    puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
    puVar5 = puVar9 + 9;
    if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
      FUN_140023dd8(puVar1,0x50);
      puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
      puVar5 = puVar9 + 9;
    }
    *(undefined8 **)(param_1 + 0x70) = puVar5;
    puVar9[1] = *(undefined8 *)(lVar4 + 8);
    puVar9[2] = 0;
    *(undefined1 *)(puVar9 + 3) = 3;
    *(undefined8 *)((longlong)puVar9 + 0x1c) = 0xffffffffffffffff;
    *puVar9 = &PTR_FUN_14a1fb168;
    *(undefined1 *)(puVar9 + 5) = uVar7;
    *(undefined8 *)((longlong)puVar9 + 0x2c) = 0xffffffff00000000;
    puVar9[7] = 0;
    puVar9[8] = lVar4;
    iVar3 = *(int *)(param_1 + 0x1a0);
    *(uint *)(param_1 + 0x1a0) = iVar3 + 1U;
    if (*(uint *)(param_1 + 0x1a4) < iVar3 + 1U) {
      FUN_1447568fc(param_1 + 0x198,iVar3);
    }
    *(undefined8 **)(*(longlong *)(param_1 + 0x198) + (longlong)iVar3 * 8) = puVar9;
    *(int *)((longlong)puVar9 + 0x1c) = *(int *)(param_1 + 0x1a0) + -1;
    puVar8[0xe] = puVar9;
    puVar8[0xd] = puVar9;
  }
  else {
    puVar8[8] = *(longlong *)(param_3 + 0x88);
    puVar8[10] = *(undefined8 *)(param_3 + 0x90);
    puVar8[0xb] = *(undefined8 *)(param_3 + 0x98);
    puVar8[0xc] = *(undefined8 *)(param_3 + 0xa0);
    puVar8[0xe] = *(undefined8 *)(param_3 + 0xa8);
    puVar8[0xd] = *(undefined8 *)(param_3 + 0xb0);
    puVar8[9] = *(undefined8 *)(param_3 + 0xb8);
  }
  if (*(longlong *)(param_3 + 0x28) == 0) {
    uVar6 = FUN_14476842e(param_1,&DAT_14ca63b28,L"BlackDummy",2);
    puVar8[0x12] = uVar6;
    puVar8[0x11] = uVar6;
    puVar8[0x10] = uVar6;
    puVar8[0xf] = uVar6;
  }
  else {
    puVar8[0xf] = *(longlong *)(param_3 + 0x28);
    puVar8[0x10] = *(undefined8 *)(param_3 + 0x30);
    puVar8[0x11] = *(undefined8 *)(param_3 + 0x38);
    puVar8[0x12] = *(undefined8 *)(param_3 + 0x40);
    uVar6 = *(undefined8 *)(param_3 + 0x48);
  }
  puVar8[0x13] = uVar6;
  FUN_1449a4512();
  uVar6 = DAT_14c9fbc38;
  puVar9 = (undefined8 *)(*(longlong *)(param_1 + 0x70) + 7U & 0xfffffffffffffff8);
  puVar5 = puVar9 + 9;
  if (*(undefined8 **)(param_1 + 0x78) < puVar5) {
    FUN_140023dd8(puVar1,0x50);
    puVar9 = (undefined8 *)(*puVar1 + 7 & 0xfffffffffffffff8);
    puVar5 = puVar9 + 9;
  }
  *puVar1 = (ulonglong)puVar5;
  puVar9[1] = uVar6;
  puVar9[2] = 0;
  *puVar9 = &PTR_FUN_14a1fb9b8;
  FUN_1449a4512();
  puVar9[3] = puVar8 + 2;
  lVar4 = DAT_14c9fbc68;
  puVar9[4] = DAT_14c9fbc68;
  if (lVar4 != 0) {
    LOCK();
    piVar2 = (int *)(lVar4 + 8);
    *piVar2 = *piVar2 + 1;
    UNLOCK();
  }
  puVar9[5] = &DAT_14c9fbc20;
  puVar9[6] = 0;
  *(undefined4 *)(puVar9 + 7) = 0xffffffff;
  *(undefined1 *)((longlong)puVar9 + 0x3c) = 0;
  *puVar9 = &PTR_FUN_14a2781f0;
  puVar9[8] = puVar8 + 2;
  iVar3 = *(int *)(param_1 + 0x1b0);
  *(uint *)(param_1 + 0x1b0) = iVar3 + 1U;
  if (*(uint *)(param_1 + 0x1b4) < iVar3 + 1U) {
    FUN_1402aa76e(param_1 + 0x1a8,iVar3);
  }
  *(undefined8 **)(*(longlong *)(param_1 + 0x1a8) + (longlong)iVar3 * 8) = puVar9;
  *(int *)(puVar9 + 7) = *(int *)(param_1 + 0x1b0) + -1;
  *(undefined8 **)(param_3 + 0xe8) = puVar9;
  return;
}



// FUNCTION 140435798 FUN_140435798 body=226 status=ok
// SIG undefined FUN_140435798(void)

longlong * FUN_140435798(longlong *param_1)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  longlong lVar14;
  longlong lVar15;
  undefined4 uVar16;
  undefined4 extraout_XMM0_Da;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_10;
  
  local_10 = DAT_14c707940 ^ (ulonglong)auStack_68;
  uVar16 = 0;
  *param_1 = 0;
  param_1[1] = 0;
  pcVar13 = FUN_1462e51da;
  do {
    pcVar13 = (code *)(*pcVar13)(uVar16,param_1);
    uVar16 = extraout_XMM0_Da;
  } while (pcVar13 != (code *)0x0);
  uVar4 = *(uint *)(param_1 + 1);
  if (1 < (longlong)(int)uVar4) {
    lVar5 = *param_1;
    lVar14 = (longlong)(int)uVar4 * 0x30;
    lVar15 = 0;
    do {
      lVar14 = lVar14 + -0x30;
      uVar6 = *(undefined8 *)(lVar5 + lVar15);
      uVar7 = ((undefined8 *)(lVar5 + lVar15))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      local_38 = *puVar2;
      uStack_30 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      local_28 = *puVar2;
      uStack_20 = puVar2[1];
      uVar8 = *(undefined8 *)(lVar5 + lVar14);
      uVar9 = ((undefined8 *)(lVar5 + lVar14))[1];
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      uVar10 = *puVar2;
      uVar11 = puVar2[1];
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      uVar12 = puVar2[1];
      puVar3 = (undefined8 *)(lVar5 + 0x20 + lVar15);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar15);
      *puVar2 = uVar10;
      puVar2[1] = uVar11;
      *(undefined8 *)(lVar5 + lVar15) = uVar8;
      ((undefined8 *)(lVar5 + lVar15))[1] = uVar9;
      local_48._0_4_ = (undefined4)uVar6;
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      uStack_40._0_4_ = (undefined4)uVar7;
      uStack_40._4_4_ = (undefined4)((ulonglong)uVar7 >> 0x20);
      puVar2 = (undefined8 *)(lVar5 + 0x20 + lVar14);
      *puVar2 = local_28;
      puVar2[1] = uStack_20;
      puVar2 = (undefined8 *)(lVar5 + 0x10 + lVar14);
      *puVar2 = local_38;
      puVar2[1] = uStack_30;
      puVar1 = (undefined4 *)(lVar5 + lVar14);
      *puVar1 = (undefined4)local_48;
      puVar1[1] = local_48._4_4_;
      puVar1[2] = (undefined4)uStack_40;
      puVar1[3] = uStack_40._4_4_;
      lVar15 = lVar15 + 0x30;
      local_48 = uVar6;
      uStack_40 = uVar7;
    } while ((ulonglong)(uVar4 >> 1) * 0x30 != lVar15);
  }
  if ((local_10 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043587c FUN_14043587c body=2538 status=ok
// SIG undefined FUN_14043587c(void)

void FUN_14043587c(longlong param_1)

{
  void *_Src;
  ulonglong uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int iVar11;
  longlong lVar12;
  uint uVar13;
  longlong lVar14;
  uint uVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_168 [40];
  longlong *local_140;
  uint local_134;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  void *local_118;
  int local_110;
  undefined4 local_10c;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  longlong *local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined8 local_b8;
  longlong local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined8 local_6c;
  undefined4 local_64;
  longlong local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_168;
  if (((((*(int *)(param_1 + 0x28) == 0) || (uVar13 = *(uint *)(param_1 + 0x24), (int)uVar13 < 0))
       || (DAT_14c9647dc <= (int)uVar13)) ||
      ((plVar9 = (longlong *)
                 ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
       plVar9 == (longlong *)0x0 || ((int)plVar9[2] != *(int *)(param_1 + 0x28))))) ||
     ((*(uint *)(plVar9 + 1) & 0x10200000) != 0)) {
    lVar14 = (**(code **)(*(longlong *)(param_1 + -0x28) + 0x180))();
    if ((lVar14 == 0) || (plVar9 = *(longlong **)(lVar14 + 0x1f0), plVar9 == (longlong *)0x0))
    goto LAB_140435cbf;
    lVar14 = FUN_1403ca142();
    if ((*(int *)(plVar9[2] + 0x38) < *(int *)(lVar14 + 0x38)) ||
       (*(longlong *)(*(longlong *)(plVar9[2] + 0x30) + (longlong)*(int *)(lVar14 + 0x38) * 8) !=
        lVar14 + 0x30)) goto LAB_140435cbf;
    uVar13 = *(uint *)((longlong)plVar9 + 0xc);
    *(uint *)(param_1 + 0x24) = uVar13;
    if ((int)uVar13 < DAT_14c9647dc) {
      lVar14 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
               *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
    }
    else {
      lVar14 = 0;
    }
    iVar10 = *(int *)(lVar14 + 0x10);
    if (*(int *)(lVar14 + 0x10) == 0) {
      LOCK();
      iVar10 = DAT_14c964868 + 1;
      UNLOCK();
      iVar11 = DAT_14c964868 + 1;
      bVar17 = DAT_14c964868 < 1000;
      DAT_14c964868 = iVar10;
      if (bVar17) {
        FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                      L"UObject serial numbers overflowed (trying to allocate serial number %d).",
                      iVar11);
      }
      LOCK();
      iVar10 = *(int *)(lVar14 + 0x10);
      bVar17 = iVar10 == 0;
      if (bVar17) {
        *(int *)(lVar14 + 0x10) = iVar11;
        iVar10 = 0;
      }
      UNLOCK();
      if (bVar17) {
        iVar10 = iVar11;
      }
    }
    *(int *)(param_1 + 0x28) = iVar10;
  }
  else if (((*(uint *)(plVar9 + 1) & 0x10200000) != 0) ||
          (plVar9 = (longlong *)*plVar9, plVar9 == (longlong *)0x0)) goto LAB_140435cbf;
  if (*(code **)(*plVar9 + 0x498) == (code *)&LAB_14015c36e) {
    cVar3 = (char)plVar9[0x42];
  }
  else {
    cVar3 = (**(code **)(*plVar9 + 0x498))();
  }
  if (cVar3 != '\b') goto LAB_140435cbf;
  local_118 = (void *)0x0;
  local_110 = *(int *)(param_1 + 0x18);
  lVar14 = (longlong)local_110;
  _Src = *(void **)(param_1 + 0x10);
  if (lVar14 == 0) {
    local_10c = 0;
    iVar10 = 0;
  }
  else {
    FUN_1404363d6(&local_118,local_110);
    memcpy(local_118,_Src,lVar14 << 3);
    iVar10 = local_110;
  }
  iVar10 = *(int *)(param_1 + 0x20) % iVar10;
  *(int *)(param_1 + 0x20) = iVar10;
  lVar14 = *(longlong *)((longlong)local_118 + (longlong)iVar10 * 8);
  if ((*(char *)(lVar14 + 0x2669) == '\0') &&
     ((FUN_14129796c(lVar14), *(char *)(lVar14 + 0x2669) != '\x01' ||
      (*(char *)(lVar14 + 0x2668) == '\0')))) {
    lVar6 = FUN_1447210f0(lVar14);
    if ((lVar6 != 0) &&
       ((lVar6 = FUN_1400f6e0c(lVar6), lVar6 != 0 && (*(longlong *)(lVar6 + 200) != 0)))) {
      FUN_14104df36(*(longlong *)(lVar6 + 200),lVar14);
      goto LAB_1404359a1;
    }
  }
  else {
LAB_1404359a1:
    lVar6 = FUN_1447210f0(lVar14);
    if (lVar6 != 0) {
      local_140 = (longlong *)(lVar14 + 0x2610);
      local_130 = lVar14 + 0x2680;
      if (0 < *(int *)(lVar6 + 0x238)) {
        lVar12 = 0;
        do {
          iVar10 = *(int *)(*(longlong *)(lVar6 + 0x230) + 4 + lVar12 * 8);
          if ((((iVar10 != 0) &&
               (uVar13 = *(uint *)(*(longlong *)(lVar6 + 0x230) + lVar12 * 8), -1 < (int)uVar13)) &&
              ((int)uVar13 < DAT_14c9647dc)) &&
             (((plVar9 = (longlong *)
                         ((ulonglong)((uVar13 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8)),
               plVar9 != (longlong *)0x0 && ((int)plVar9[2] == iVar10)) &&
              (((*(uint *)(plVar9 + 1) & 0x10200000) == 0 &&
               ((plVar9 = (longlong *)*plVar9, plVar9 != (longlong *)0x0 &&
                (lVar7 = (**(code **)(*plVar9 + 0x5f0))(plVar9), lVar7 != 0)))))))) {
            uVar13 = *(uint *)((longlong)plVar9 + 0xc);
            if ((int)uVar13 < DAT_14c9647dc) {
              lVar16 = (ulonglong)((uVar13 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar13 >> 0x10) * 8);
            }
            else {
              lVar16 = 0;
            }
            uVar5 = *(uint *)(lVar16 + 0x10);
            if (*(uint *)(lVar16 + 0x10) == 0) {
              LOCK();
              iVar10 = DAT_14c964868 + 1;
              UNLOCK();
              uVar15 = DAT_14c964868 + 1;
              bVar17 = DAT_14c964868 < 1000;
              DAT_14c964868 = iVar10;
              if (bVar17) {
                local_134 = uVar15;
                FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                              L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                              ,uVar15);
                uVar15 = local_134;
              }
              LOCK();
              uVar5 = *(uint *)(lVar16 + 0x10);
              bVar17 = uVar5 == 0;
              if (bVar17) {
                *(uint *)(lVar16 + 0x10) = uVar15;
                uVar5 = 0;
              }
              UNLOCK();
              if (bVar17) {
                uVar5 = uVar15;
              }
            }
            local_98 = CONCAT44(uVar5,uVar13);
            iVar10 = FUN_14043631c(local_140,uVar13 ^ uVar5,&local_98);
            if ((iVar10 == -1) ||
               ((*local_140 + (longlong)iVar10 * 0x18 + 8U & 0xfffffffffffffff7) == 0)) {
              local_98 = 0;
              lVar16 = *(longlong *)(lVar7 + 0x1c8);
              if (lVar16 == 0) {
                local_e8 = DAT_14c8464f0;
                local_f8 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
                uStack_f0 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
              }
              else {
                local_f8 = *(undefined8 *)(lVar16 + 0x260);
                uStack_f0 = *(undefined8 *)(lVar16 + 0x268);
                local_e8 = *(undefined8 *)(lVar16 + 0x270);
              }
              cVar3 = FUN_140436508(local_130,&local_f8,&local_98,*(undefined1 *)(lVar14 + 0x25fc));
              if (cVar3 != '\0') {
                FUN_148cf1804(lVar14,lVar7,local_98);
              }
            }
          }
          lVar12 = lVar12 + 1;
        } while ((int)lVar12 < *(int *)(lVar6 + 0x238));
      }
      local_108 = (longlong *)0x0;
      uStack_100 = 0;
      uVar13 = *(int *)(lVar14 + 0x2618) - *(int *)(lVar14 + 0x2644);
      local_78 = 0;
      local_70 = 0;
      local_98 = 0;
      uStack_90 = 0;
      local_6c = 0xffffffff00000080;
      local_64 = 0;
      local_58 = 0;
      local_50 = 0;
      if (uVar13 != 0) {
        if ((int)uVar13 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456acd4b((longlong)(int)uVar13);
        }
        FUN_148cf9770(&local_98,uVar13);
        iVar10 = 1;
        if (3 < uVar13) {
          uVar13 = (uVar13 | 1) + 0xe;
          iVar10 = 0x1f;
          if (uVar13 != 0) {
            for (; uVar13 >> iVar10 == 0; iVar10 = iVar10 + -1) {
            }
          }
          iVar10 = 1 << ((byte)iVar10 & 0x1f);
        }
        if ((local_50 == 0) || (local_50 < iVar10)) {
          local_50 = iVar10;
          FUN_145752ade();
        }
      }
      iVar10 = *(int *)(lVar14 + 0x2618) - *(int *)(lVar14 + 0x2644);
      if (iVar10 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1456afac4(iVar10);
      }
      if ((int)uStack_100._4_4_ < iVar10) {
        FUN_148cf9710(&local_108);
      }
      local_b0 = lVar14 + 0x2620;
      local_b8 = 0x100000000;
      local_a8 = 0xffffffff;
      local_a0 = 0;
      if (*(int *)(lVar14 + 0x2638) != 0) {
        FUN_1449c0562(&local_b8);
      }
      local_c8 = local_a8;
      uVar2 = local_c8;
      local_c0 = local_a0;
      local_bc = local_9c;
      local_d8 = local_b8;
      local_d0 = local_b0;
      local_e0 = local_140;
      local_c8._4_4_ = (int)((ulonglong)local_a8 >> 0x20);
      if (local_c8._4_4_ < *(int *)(local_b0 + 0x18)) {
        iVar10 = local_c8._4_4_;
        local_c8 = uVar2;
        do {
          local_b8 = *(undefined8 *)(*local_e0 + (longlong)iVar10 * 0x18);
          iVar10 = FUN_14088c3be(&local_98,(uint)((ulonglong)local_b8 >> 0x20) ^ (uint)local_b8,
                                 &local_b8);
          uVar1 = uStack_100;
          if (iVar10 == -1) {
            lVar12 = (longlong)local_c8._4_4_;
            lVar6 = *local_e0;
            lVar7 = (longlong)(int)uStack_100;
            uVar13 = (int)uStack_100 + 1;
            uStack_100 = CONCAT44(uStack_100._4_4_,uVar13);
            if (uStack_100._4_4_ < uVar13) {
              FUN_145ac483a(&local_108,uVar1 & 0xffffffff);
            }
            local_108[lVar7] = *(longlong *)(lVar12 * 0x18 + lVar6);
            FUN_148cf990e(&local_98,&local_b8,(longlong)local_c8._4_4_ * 0x18 + *local_e0);
          }
          local_c8 = CONCAT44(local_c8._4_4_,(uint)local_c8 & ~local_d8._4_4_);
          FUN_1449c0562(&local_d8);
          iVar10 = local_c8._4_4_;
          uVar2 = local_c8;
        } while (local_c8._4_4_ < *(int *)(local_d0 + 0x18));
      }
      local_c8 = uVar2;
      local_50 = 0;
      if (local_58 != 0) {
        FUN_1400020a8();
      }
      FUN_140436268(&local_98);
      if ((longlong)(int)uStack_100 != 0) {
        lVar6 = (longlong)(int)uStack_100 << 3;
        plVar9 = local_108;
        do {
          plVar8 = (longlong *)FUN_14479d2ce(plVar9);
          if ((plVar8 != (longlong *)0x0) &&
             (lVar12 = (**(code **)(*plVar8 + 0x5f0))(plVar8), lVar12 != 0)) {
            local_e0 = (longlong *)*plVar9;
            iVar10 = FUN_14043631c(local_140,(uint)((ulonglong)local_e0 >> 0x20) ^ (uint)local_e0,
                                   &local_e0);
            if (iVar10 == -1) {
              lVar7 = 0;
            }
            else {
              lVar7 = (longlong)iVar10 * 0x18 + *local_140;
            }
            local_120 = FUN_14479d2ce(lVar7 + 8);
            local_b8 = 0;
            lVar7 = *(longlong *)(lVar12 + 0x1c8);
            if (lVar7 == 0) {
              local_88 = DAT_14c8464f0;
              local_98 = CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
              uStack_90 = CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
            }
            else {
              local_98 = *(undefined8 *)(lVar7 + 0x260);
              uStack_90 = *(undefined8 *)(lVar7 + 0x268);
              local_88 = *(undefined8 *)(lVar7 + 0x270);
            }
            uVar4 = FUN_140436508(local_130,&local_98,&local_b8,*(undefined1 *)(lVar14 + 0x25fc));
            local_134 = CONCAT31(local_134._1_3_,uVar4);
            local_e0 = (longlong *)*plVar9;
            iVar10 = FUN_14043631c(local_140,(uint)((ulonglong)local_e0 >> 0x20) ^ (uint)local_e0,
                                   &local_e0);
            if (iVar10 == -1) {
              lVar7 = 0;
            }
            else {
              lVar7 = (longlong)iVar10 * 0x18 + *local_140;
            }
            cVar3 = FUN_148cf1924(lVar7 + 8,local_b8);
            if (cVar3 == '\0') {
              local_128 = local_b8;
              local_e0 = (longlong *)*plVar9;
              iVar10 = FUN_14043631c(local_140,(uint)((ulonglong)local_e0 >> 0x20) ^ (uint)local_e0,
                                     &local_e0);
              if (iVar10 == -1) {
                lVar7 = 0;
              }
              else {
                lVar7 = (longlong)iVar10 * 0x18 + *local_140;
              }
              FUN_14485c47a(lVar7 + 8,local_128);
            }
            if ((char)local_134 == '\0') {
              FUN_1440d4a06(lVar14,lVar12,local_120);
            }
            else {
              FUN_148cf118e(lVar14,plVar8);
            }
          }
          plVar9 = plVar9 + 1;
          lVar6 = lVar6 + -8;
        } while (lVar6 != 0);
      }
      if (local_108 != (longlong *)0x0) {
        FUN_1400020a8(local_108);
      }
    }
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (local_118 != (void *)0x0) {
    FUN_1400020a8();
  }
LAB_140435cbf:
  if ((local_48 ^ (ulonglong)auStack_168) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 140436268 FUN_140436268 body=55 status=ok
// SIG undefined FUN_140436268(void)

void FUN_140436268(longlong *param_1)

{
  FUN_1404362a0(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 1404362a0 FUN_1404362a0 body=123 status=ok
// SIG undefined FUN_1404362a0(void)

void FUN_1404362a0(longlong param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(param_2);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int *)(param_1 + 0xc) != param_2) {
    FUN_14472eb64(param_1,param_2);
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



// FUNCTION 14043631c FUN_14043631c body=185 status=ok
// SIG undefined FUN_14043631c(void)

int FUN_14043631c(longlong *param_1,uint param_2,undefined8 *param_3)

{
  char cVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined1 auStack_68 [32];
  undefined8 local_48;
  undefined8 local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar4 = *(int *)((longlong)plVar2 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
    if (iVar4 != -1) {
      lVar3 = *param_1;
      do {
        local_48 = *param_3;
        local_40 = *(undefined8 *)(lVar3 + (longlong)iVar4 * 0x18);
        cVar1 = FUN_1400ff418(&local_40,&local_48);
        if (cVar1 != '\0') goto LAB_140436345;
        lVar3 = *param_1;
        iVar4 = *(int *)(lVar3 + 0x10 + (longlong)iVar4 * 0x18);
      } while (iVar4 != -1);
    }
  }
  iVar4 = -1;
LAB_140436345:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return iVar4;
}



// FUNCTION 1404363d6 FUN_1404363d6 body=306 status=ok
// SIG undefined FUN_1404363d6(void)

void FUN_1404363d6(longlong param_1,int param_2)

{
  longlong lVar1;
  byte bVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar3 = (longlong)param_2 * 8;
  if (DAT_14c872d28 != (longlong *)0x0) {
    if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
      uVar6 = uVar3 + 0xf;
      if (uVar3 < 0x7ff1) {
        uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 >> 4]];
      }
      else {
        if ((uVar6 & 0xfffffffffffffff0) < 0x7ff1) {
          bVar2 = (&DAT_14c841e00)[uVar6 >> 4];
          uVar4 = 0x32;
          if (0x32 < bVar2) {
            uVar4 = (ulonglong)bVar2;
          }
          uVar7 = 0x32 - (ulonglong)bVar2;
          do {
            uVar3 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar7 & 0xffffffff];
            if (((&DAT_14c841d90)[uVar7 & 0xffffffff] & 0xf) == 0) goto LAB_140436438;
            lVar1 = uVar4 + 1 + uVar7;
            uVar7 = uVar7 - 1;
          } while (lVar1 != 0x33);
        }
        uVar3 = 0x10;
        if (0x10 < DAT_14c841df8) {
          uVar3 = (ulonglong)DAT_14c841df8;
        }
        uVar3 = -uVar3 & ((uVar6 & 0xfffffffffffffff0) + uVar3) - 1;
      }
    }
    else {
      uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
    }
  }
LAB_140436438:
  uVar6 = 0x7fffffff;
  if (param_2 <= (int)(uVar3 >> 3)) {
    uVar6 = uVar3 >> 3 & 0xffffffff;
  }
  iVar5 = (int)uVar6;
  if (iVar5 < 1) {
    iVar5 = 0;
  }
  else {
    FUN_1446f8d3c(param_1,0,uVar6,8,8);
  }
  *(int *)(param_1 + 0xc) = iVar5;
  return;
}



// FUNCTION 140436508 FUN_140436508 body=951 status=ok
// SIG undefined FUN_140436508(void)

undefined8 FUN_140436508(longlong *param_1,undefined4 *param_2,undefined8 *param_3,char param_4)

{
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  undefined8 uVar8;
  int iVar9;
  uint uVar10;
  longlong *plVar11;
  longlong lVar12;
  undefined8 *puVar13;
  uint uVar14;
  int iVar15;
  longlong lVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined1 auStack_c8 [40];
  undefined4 *local_a0;
  uint *local_98;
  undefined8 *local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  iVar2 = (int)param_1[5];
  local_a0 = param_2;
  local_90 = param_3;
  if (iVar2 == 0) {
    uVar17 = 1;
    uVar18 = 0;
    iVar9 = 0;
    iVar19 = 0;
  }
  else {
    puVar7 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 2);
    }
    uVar14 = *puVar7;
    if (uVar14 == 0) {
      iVar9 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar9 = iVar2 + -1;
      }
      uVar18 = 0;
      uVar17 = (ulonglong)(uint)(iVar9 >> 5);
      if (iVar9 >> 5 < 1) {
        uVar17 = uVar18;
      }
      iVar19 = 0;
      do {
        if (uVar17 == uVar18) goto LAB_140436839;
        iVar19 = iVar19 + 0x20;
        uVar14 = puVar7[uVar18 + 1];
        uVar18 = uVar18 + 1;
      } while (uVar14 == 0);
    }
    else {
      uVar18 = 0;
      iVar19 = 0;
    }
    uVar17 = (ulonglong)(-uVar14 & uVar14);
    uVar1 = uVar17 * 2 + 1;
    lVar12 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
      }
    }
    iVar9 = (iVar19 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar9) {
      iVar9 = iVar2;
    }
  }
  if (iVar9 == iVar2) {
LAB_140436839:
    uVar8 = 0;
  }
  else {
    uVar14 = 0xffffffff;
    iVar15 = iVar2;
    do {
      uVar10 = *(uint *)(*param_1 + 4 + (longlong)iVar9 * 0x28);
      if (uVar10 != 0) {
        puVar7 = (uint *)(*param_1 + (longlong)iVar9 * 0x28);
        uVar3 = *puVar7;
        if ((((-1 < (int)uVar3) && ((int)uVar3 < DAT_14c9647dc)) &&
            (plVar11 = (longlong *)
                       ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                       *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8)),
            plVar11 != (longlong *)0x0)) &&
           ((*(uint *)(plVar11 + 2) == uVar10 && ((*(uint *)(plVar11 + 1) & 0x10200000) == 0)))) {
          if ((*(uint *)(plVar11 + 1) & 0x10200000) == 0) {
            lVar12 = *plVar11;
          }
          else {
            lVar12 = 0;
          }
          if (*(longlong *)(lVar12 + 0x1c8) == 0) {
            uVar20 = (undefined4)DAT_14c8464f0;
            uVar21 = (undefined4)((ulonglong)DAT_14c8464f0 >> 0x20);
          }
          else {
            uVar8 = *(undefined8 *)(*(longlong *)(lVar12 + 0x1c8) + 0x270);
            uVar20 = (undefined4)uVar8;
            uVar21 = (undefined4)((ulonglong)uVar8 >> 0x20);
          }
          if (param_4 == '\0') {
            local_58 = *(undefined8 *)(puVar7 + 6);
            local_68 = *(undefined8 *)(puVar7 + 2);
            uStack_60 = *(undefined8 *)(puVar7 + 4);
LAB_140436699:
            uVar3 = *puVar7;
            if ((int)uVar3 < 0) goto LAB_140436855;
            lVar12 = 0;
            if ((int)uVar3 < DAT_14c9647dc) {
              plVar11 = (longlong *)
                        ((ulonglong)((uVar3 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar3 >> 0x10) * 8));
              if (((plVar11 == (longlong *)0x0) || (*(uint *)(plVar11 + 2) != uVar10)) ||
                 ((*(uint *)(plVar11 + 1) & 0x10200000) != 0)) goto LAB_140436855;
              lVar12 = *plVar11;
            }
          }
          else {
            *(ulonglong *)(local_a0 + 4) = CONCAT44(uVar21,uVar20);
            uVar10 = puVar7[1];
            local_58 = *(undefined8 *)(puVar7 + 6);
            local_68 = *(undefined8 *)(puVar7 + 2);
            uStack_60 = *(undefined8 *)(puVar7 + 4);
            if (uVar10 != 0) goto LAB_140436699;
LAB_140436855:
            lVar12 = 0;
          }
          puVar13 = (undefined8 *)(*(longlong *)(lVar12 + 0x1c8) + 0x240);
          if (*(longlong *)(lVar12 + 0x1c8) == 0) {
            puVar13 = &DAT_14c846480;
          }
          local_78 = *(undefined8 *)(local_a0 + 4);
          local_88 = *local_a0;
          uStack_84 = local_a0[1];
          uStack_80 = local_a0[2];
          uStack_7c = local_a0[3];
          local_98 = puVar7;
          cVar4 = FUN_1404368c0(&local_88,puVar13,&local_68);
          if (cVar4 != '\0') {
            uVar8 = FUN_14479d2ce(local_98);
            *local_90 = uVar8;
            uVar8 = 1;
            break;
          }
          iVar15 = (int)param_1[5];
        }
      }
      uVar14 = uVar14 & ~(uint)uVar17;
      puVar7 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 2);
      }
      iVar9 = (int)uVar18;
      lVar12 = (longlong)iVar9;
      uVar10 = puVar7[lVar12] & uVar14;
      if (uVar10 == 0) {
        iVar5 = iVar15 + 0x1e;
        if (-1 < iVar15 + -1) {
          iVar5 = iVar15 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar19 = iVar19 + 0x20;
        iVar6 = iVar5;
        if (iVar5 < iVar9) {
          iVar6 = iVar9;
        }
        if (iVar9 < iVar5) {
          lVar16 = 0;
          do {
            uVar10 = puVar7[lVar12 + lVar16 + 1];
            if (uVar10 != 0) {
              uVar18 = (ulonglong)(iVar9 + (int)lVar16 + 1);
              uVar14 = 0xffffffff;
              goto LAB_1404367d0;
            }
            iVar19 = iVar19 + 0x20;
            lVar16 = lVar16 + 1;
          } while (iVar6 - lVar12 != lVar16);
          uVar14 = 0xffffffff;
          iVar9 = iVar6;
        }
        uVar18 = (ulonglong)(iVar9 + 1);
        iVar9 = iVar15;
      }
      else {
LAB_1404367d0:
        uVar17 = (ulonglong)(-uVar10 & uVar10);
        uVar1 = uVar17 * 2 + 1;
        lVar12 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar12 == 0; lVar12 = lVar12 + -1) {
          }
        }
        iVar9 = (iVar19 - ((uint)lVar12 ^ 0x3f)) + 0x3e;
        if (iVar15 <= iVar9) {
          iVar9 = iVar15;
        }
      }
      uVar8 = 0;
    } while (iVar9 != iVar2);
  }
  if ((local_48 ^ (ulonglong)auStack_c8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 1404368c0 FUN_1404368c0 body=527 status=ok
// SIG undefined FUN_1404368c0(void)

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1404368c0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  uint uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  undefined1 auVar9 [16];
  double dVar10;
  double dVar11;
  undefined1 auVar12 [16];
  double dVar13;
  
  dVar10 = *param_1 - param_2[4];
  dVar11 = param_1[1] - param_2[5];
  dVar6 = param_1[2] - param_2[6];
  auVar9 = *(undefined1 (*) [16])(param_2 + 8);
  dVar1 = -*param_2;
  dVar2 = -param_2[1];
  dVar5 = param_2[2] * -1.0;
  dVar7 = param_2[3] * 1.0;
  dVar13 = dVar10 * dVar5 - dVar1 * dVar6;
  dVar8 = dVar11 * dVar1 - dVar10 * dVar2;
  dVar3 = dVar6 * dVar2 - dVar11 * dVar5;
  dVar3 = dVar3 + dVar3;
  dVar13 = dVar13 + dVar13;
  dVar8 = dVar8 + dVar8;
  auVar12 = divpd(_DAT_149934d80,auVar9);
  dVar10 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar9._0_8_)) & auVar12._0_8_) *
           ((dVar8 * dVar2 - dVar13 * dVar5) + dVar7 * dVar3 + dVar10);
  dVar5 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(auVar9._8_8_)) & auVar12._8_8_) *
          (*param_2 * dVar8 + dVar5 * dVar3 + dVar7 * dVar13 + dVar11);
  uVar4 = 0;
  if ((-*param_3 <= dVar10) && (dVar10 <= *param_3)) {
    auVar9._8_8_ = 0x3ff0000000000000;
    auVar9._0_8_ = param_2[10];
    auVar9 = divpd(ZEXT816(0x3ff0000000000000),auVar9);
    dVar7 = (double)(-(ulonglong)(9.99999993922529e-09 < ABS(param_2[10])) & auVar9._0_8_) *
            (dVar6 + dVar7 * dVar8 + (dVar13 * dVar1 - dVar3 * dVar2));
    uVar4 = -(uint)((dVar5 <= param_3[1] && -param_3[1] <= dVar5) &&
                   (dVar7 <= param_3[2] && -param_3[2] <= dVar7));
  }
  return uVar4 & 0xffffff01;
}



// FUNCTION 140436ad0 FUN_140436ad0 body=209 status=ok
// SIG undefined FUN_140436ad0(void)

void FUN_140436ad0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_58 [32];
  undefined8 *local_38;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  local_38 = &param_5;
  local_28 = param_3;
  local_20 = param_4;
  cVar3 = FUN_140436ba2(param_1,&local_2c);
  if (cVar3 != '\0') {
    *(undefined4 *)
     (*(longlong *)(*(longlong *)(param_1 + 0xa8) + (longlong)local_2c * 8) +
     (longlong)*(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)local_2c * 4) * 4) = param_2;
    lVar4 = (longlong)local_2c;
    lVar2 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar4 * 8);
    iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 4);
    lVar5 = (longlong)iVar1;
    *(int *)(*(longlong *)(param_1 + 0xb8) + lVar4 * 4) = iVar1 + 1;
    *(undefined8 *)(lVar2 + lVar5 * 0x18) = local_28;
    *(undefined8 *)(lVar2 + 8 + lVar5 * 0x18) = local_20;
    *(undefined8 *)(lVar2 + 0x10 + lVar5 * 0x18) = param_5;
  }
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140436ba2 FUN_140436ba2 body=79 status=ok
// SIG undefined FUN_140436ba2(void)

undefined4 FUN_140436ba2(longlong param_1,int *param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_140436bf2();
  if (((char)uVar1 != '\0') &&
     (*(int *)(*(longlong *)(param_1 + 0xb8) + (longlong)*param_2 * 4) ==
      *(int *)(*(longlong *)(param_1 + 0xc0) + (longlong)*param_2 * 4))) {
    FUN_140436daa(param_1);
  }
  return uVar1;
}



// FUNCTION 140436bf2 FUN_140436bf2 body=439 status=ok
// SIG undefined FUN_140436bf2(void)

undefined8 FUN_140436bf2(int *param_1,int *param_2,double *param_3,double *param_4,double *param_5)

{
  undefined8 uVar1;
  ulonglong uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  double dVar6;
  
  dVar6 = (*param_3 - *(double *)(param_1 + 0x1c)) * *(double *)(param_1 + 0xc);
  iVar5 = (int)dVar6 - (uint)(dVar6 < 0.0);
  *param_2 = iVar5;
  if ((char)param_1[0x28] == '\x01') {
    iVar3 = *param_1;
    if (iVar5 < 0) {
      iVar3 = (iVar3 - ((iVar3 + -1) - iVar5) % iVar3) + -1;
    }
    else {
      iVar3 = iVar5 % iVar3;
    }
    *param_3 = (double)(iVar3 - iVar5) * *(double *)(param_1 + 6) + *param_3;
    *param_2 = iVar3;
LAB_140436c3c:
    dVar6 = (*param_4 - *(double *)(param_1 + 0x20)) * *(double *)(param_1 + 0xe);
    iVar5 = (int)dVar6 - (uint)(dVar6 < 0.0);
    if (*(char *)((longlong)param_1 + 0xa1) == '\x01') {
      iVar3 = param_1[1];
      if (iVar5 < 0) {
        iVar3 = (iVar3 - ((iVar3 + -1) - iVar5) % iVar3) + -1;
      }
      else {
        iVar3 = iVar5 % iVar3;
      }
      *param_4 = (double)(iVar3 - iVar5) * *(double *)(param_1 + 8) + *param_4;
    }
    else if ((iVar5 < 0) || (iVar3 = iVar5, param_1[1] <= iVar5)) goto LAB_140436cd6;
    dVar6 = (*param_5 - *(double *)(param_1 + 0x24)) * *(double *)(param_1 + 0x10);
    uVar2 = 0;
    iVar5 = (int)dVar6 - (uint)(dVar6 < 0.0);
    if (*(char *)((longlong)param_1 + 0xa2) == '\x01') {
      iVar4 = param_1[2];
      if (iVar5 < 0) {
        iVar4 = (iVar4 - ((iVar4 + -1) - iVar5) % iVar4) + -1;
      }
      else {
        iVar4 = iVar5 % iVar4;
      }
      uVar2 = (ulonglong)(uint)(iVar4 - iVar5);
      *param_5 = (double)(iVar4 - iVar5) * *(double *)(param_1 + 10) + *param_5;
    }
    else if ((iVar5 < 0) || (iVar4 = iVar5, param_1[2] <= iVar5)) goto LAB_140436cd6;
    *param_2 = *param_2 + iVar4 * param_1[3] + iVar3 * *param_1;
    uVar1 = CONCAT71((int7)(uVar2 >> 8),1);
  }
  else {
    if ((-1 < iVar5) && (iVar5 < *param_1)) goto LAB_140436c3c;
LAB_140436cd6:
    uVar1 = 0;
  }
  return uVar1;
}



// FUNCTION 140436daa FUN_140436daa body=301 status=ok
// SIG undefined FUN_140436daa(void)

void FUN_140436daa(longlong param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  longlong lVar11;
  
  lVar5 = *(longlong *)(param_1 + 0xc0);
  lVar11 = (longlong)param_2;
  iVar3 = *(int *)(lVar5 + lVar11 * 4) * 2;
  lVar6 = (longlong)iVar3 * 4 + (ulonglong)((longlong)iVar3 * 4 == 0);
  if (iVar3 < 0) {
    lVar6 = -1;
  }
  lVar6 = FUN_14001cc68(lVar6,0x10);
  iVar1 = *(int *)(*(longlong *)(param_1 + 0xb8) + lVar11 * 4);
  if (0 < (longlong)iVar1) {
    lVar8 = *(longlong *)(*(longlong *)(param_1 + 0xa8) + lVar11 * 8);
    lVar7 = 0;
    do {
      *(undefined4 *)(lVar6 + lVar7 * 4) = *(undefined4 *)(lVar8 + lVar7 * 4);
      lVar7 = lVar7 + 1;
    } while (iVar1 != lVar7);
  }
  iVar2 = *(int *)(param_1 + 200);
  iVar4 = iVar2 * iVar3;
  lVar8 = (longlong)iVar4 * 8;
  lVar8 = lVar8 + (ulonglong)(lVar8 == 0);
  if (iVar4 < 0) {
    lVar8 = -1;
  }
  lVar8 = FUN_14001cc68(lVar8);
  uVar10 = iVar1 * iVar2;
  if (0 < (int)uVar10) {
    lVar7 = *(longlong *)(*(longlong *)(param_1 + 0xb0) + lVar11 * 8);
    uVar9 = 0;
    do {
      *(undefined8 *)(lVar8 + uVar9 * 8) = *(undefined8 *)(lVar7 + uVar9 * 8);
      uVar9 = uVar9 + 1;
    } while (uVar10 != uVar9);
  }
  *(int *)(lVar5 + lVar11 * 4) = iVar3;
  lVar5 = *(longlong *)(param_1 + 0xa8);
  if (*(longlong *)(lVar5 + lVar11 * 8) != 0) {
    FUN_1400020a8();
    lVar5 = *(longlong *)(param_1 + 0xa8);
  }
  *(longlong *)(lVar5 + lVar11 * 8) = lVar6;
  lVar5 = *(longlong *)(param_1 + 0xb0);
  if (*(longlong *)(lVar5 + lVar11 * 8) != 0) {
    FUN_1400020a8();
    lVar5 = *(longlong *)(param_1 + 0xb0);
  }
  *(longlong *)(lVar5 + lVar11 * 8) = lVar8;
  return;
}



// FUNCTION 140436ed7 FUN_140436ed7 body=1164 status=ok
// SIG undefined FUN_140436ed7(void)

double * FUN_140436ed7(double *param_1,longlong param_2,longlong param_3,double *param_4,
                      char param_5)

{
  double *pdVar1;
  longlong *plVar2;
  int *piVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  longlong *plVar8;
  char cVar9;
  undefined1 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  float fVar16;
  undefined1 auStack_158 [32];
  longlong local_138;
  double local_128;
  double dStack_120;
  double local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  longlong *plStack_f0;
  undefined4 local_e8;
  undefined8 local_e0;
  undefined4 local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  double local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  undefined8 local_88;
  ulonglong local_80;
  
  local_80 = DAT_14c707940 ^ (ulonglong)auStack_158;
  dVar14 = *(double *)(param_3 + 0x78);
  dVar13 = *(double *)(param_3 + 0x80);
  dVar4 = *(double *)(param_3 + 0x88);
  uVar11 = SUB84(dVar4,0);
  uVar12 = (undefined4)((ulonglong)dVar4 >> 0x20);
  dVar15 = *param_4;
  if (*(float *)(param_3 + 0xcc) < 1.0) {
    local_a8 = param_4[1];
    local_a0 = param_4[2];
LAB_1404370a5:
    if (param_5 == '\0') {
      dVar5 = dVar13 - local_a8;
      dVar4 = dVar14 - dVar15;
      dVar6 = dVar4 * dVar4 + dVar5 * dVar5;
      if ((dVar6 != 1.0) || (NAN(dVar6))) {
        if (dVar6 < 9.99999993922529e-09) {
LAB_140437316:
          dVar4 = (double)CONCAT44(DAT_14c8464e0._4_4_,(undefined4)DAT_14c8464e0);
          dVar5 = (double)CONCAT44(DAT_14c8464e8._4_4_,(undefined4)DAT_14c8464e8);
          dVar6 = DAT_14c8464f0;
        }
        else {
          dVar5 = dVar5 * (1.0 / SQRT(dVar6));
          dVar4 = dVar4 * (1.0 / SQRT(dVar6));
          dVar6 = 0.0;
        }
      }
      else {
        dVar6 = (double)CONCAT44(uVar12,uVar11) - local_a0;
        dVar6 = (double)(-(ulonglong)(dVar6 == 0.0) & (ulonglong)dVar6);
      }
    }
    else {
      dVar6 = (double)CONCAT44(uVar12,uVar11) - local_a0;
      dVar5 = dVar13 - local_a8;
      dVar4 = dVar14 - dVar15;
      dVar7 = dVar6 * dVar6 + dVar4 * dVar4 + dVar5 * dVar5;
      if ((dVar7 != 1.0) || (NAN(dVar7))) {
        if (dVar7 < 9.99999993922529e-09) goto LAB_140437316;
        dVar7 = 1.0 / SQRT(dVar7);
        dVar6 = dVar6 * dVar7;
        dVar5 = dVar5 * dVar7;
        dVar4 = dVar4 * dVar7;
      }
    }
    if (0.0 < dVar6 * *(double *)(param_2 + 0x28) +
              dVar4 * *(double *)(param_2 + 0x18) + dVar5 * *(double *)(param_2 + 0x20)) {
      *param_1 = dVar15;
      param_1[1] = local_a8;
      param_1[2] = local_a0;
      param_1[3] = dVar14;
      param_1[4] = dVar13;
      param_1[5] = (double)CONCAT44(uVar12,uVar11);
      uVar10 = 1;
      goto LAB_140437166;
    }
  }
  else {
    fVar16 = *(float *)(param_3 + 0xcc) + 10.0;
    if ((double)(fVar16 * fVar16) <
        (dVar4 - param_4[2]) * (dVar4 - param_4[2]) +
        (dVar13 - param_4[1]) * (dVar13 - param_4[1]) + (dVar14 - dVar15) * (dVar14 - dVar15)) {
      pdVar1 = (double *)(param_3 + 0x78);
      if (*(char *)(param_3 + 0xfa) == '\0') {
        local_118 = param_4[2];
        local_128 = *param_4;
        dStack_120 = param_4[1];
        local_110 = DAT_14cb1c860;
        uStack_108 = DAT_14cb1c868;
        local_100 = DAT_14cb1c870;
        local_f8 = 0;
        plStack_f0 = (longlong *)0x0;
        local_e8 = 0xffffffff;
        local_e0 = 0xffffffffffffffff;
        local_d8 = 0xffffffff;
        local_cc = 0;
        local_d4 = 0;
        local_c8 = (undefined4)DAT_14c8464e0;
        uStack_c4 = DAT_14c8464e0._4_4_;
        uStack_c0 = (undefined4)DAT_14c8464e8;
        uStack_bc = DAT_14c8464e8._4_4_;
        local_b8 = DAT_14c8464f0;
        FUN_140437364(&local_b0,*(undefined4 *)(param_3 + 0xf0),&local_128,pdVar1);
      }
      else {
        local_138 = param_3 + 0x60;
        local_118 = param_4[2];
        local_128 = *param_4;
        dStack_120 = param_4[1];
        local_110 = DAT_14cb1c860;
        uStack_108 = DAT_14cb1c868;
        local_100 = DAT_14cb1c870;
        local_f8 = 0;
        plStack_f0 = (longlong *)0x0;
        local_e8 = 0xffffffff;
        local_e0 = 0xffffffffffffffff;
        local_d8 = 0xffffffff;
        local_cc = 0;
        local_d4 = 0;
        local_c8 = (undefined4)DAT_14c8464e0;
        uStack_c4 = DAT_14c8464e0._4_4_;
        uStack_c0 = (undefined4)DAT_14c8464e8;
        uStack_bc = DAT_14c8464e8._4_4_;
        local_b8 = DAT_14c8464f0;
        FUN_140437443(&local_b0,*(undefined4 *)(param_3 + 0xf0),&local_128,pdVar1);
        plVar8 = plStack_f0;
        if (plStack_f0 != (longlong *)0x0) {
          LOCK();
          plVar2 = plStack_f0 + 1;
          *(int *)plVar2 = (int)*plVar2 + -1;
          UNLOCK();
          if ((int)*plVar2 == 0) {
            (**(code **)*plStack_f0)(plStack_f0);
            LOCK();
            piVar3 = (int *)((longlong)plVar8 + 0xc);
            *piVar3 = *piVar3 + -1;
            UNLOCK();
            if (*piVar3 == 0) {
              (**(code **)(*plVar8 + 0x10))(plVar8);
            }
          }
        }
      }
      local_118 = *(double *)(param_3 + 0x88);
      local_128 = *pdVar1;
      dStack_120 = *(double *)(param_3 + 0x80);
      cVar9 = FUN_14025bfa8(&local_98,&local_128,param_3,param_3 + 0x30);
      if (cVar9 != '\0') {
        uVar11 = (undefined4)local_88;
        uVar12 = (undefined4)((ulonglong)local_88 >> 0x20);
        dVar13 = local_90;
        dVar14 = local_98;
        dVar15 = local_b0;
        goto LAB_1404370a5;
      }
    }
  }
  uVar10 = 0;
LAB_140437166:
  *(undefined1 *)(param_1 + 6) = uVar10;
  if ((local_80 ^ (ulonglong)auStack_158) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140437364 FUN_140437364 body=222 status=ok
// SIG undefined FUN_140437364(void)

longlong FUN_140437364(longlong param_1,undefined8 param_2,undefined8 *param_3,longlong param_4)

{
  undefined1 auStack_c8 [32];
  undefined8 *local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_c8;
  local_98 = *param_3;
  uStack_90 = param_3[1];
  local_88 = *(undefined8 *)(param_4 + 0x10);
  local_44 = *(undefined4 *)((longlong)param_3 + 0x54);
  local_80 = DAT_14cb1c860;
  uStack_78 = DAT_14cb1c868;
  local_70 = DAT_14cb1c870;
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0xffffffff;
  local_50 = 0xffffffffffffffff;
  local_48 = 0xffffffff;
  local_40 = 0;
  local_3c = 0;
  local_38 = (undefined4)DAT_14c8464e0;
  uStack_34 = DAT_14c8464e0._4_4_;
  uStack_30 = (undefined4)DAT_14c8464e8;
  uStack_2c = DAT_14c8464e8._4_4_;
  local_28 = DAT_14c8464f0;
  local_a8 = &DAT_14c8463b8;
  FUN_140437443();
  *(undefined8 *)(param_1 + 0x10) = param_3[2];
  if ((local_18 ^ (ulonglong)auStack_c8) == DAT_14c707940) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140437443 FUN_140437443 body=1349 status=ok
// SIG undefined FUN_140437443(void)

double * FUN_140437443(double *param_1,undefined4 param_2,double *param_3,double *param_4,
                      double *param_5)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  
  dVar7 = param_4[2] - param_3[2];
  dVar14 = param_4[1] - param_3[1];
  dVar11 = *param_4 - *param_3;
  fVar8 = (float)SQRT(dVar7 * dVar7 + dVar11 * dVar11 + dVar14 * dVar14);
  dVar16 = DAT_14c8464f0;
  dVar1 = DAT_14c8464e8;
  dVar4 = DAT_14c8464e0;
  if (1e-08 < fVar8) {
    dVar4 = (double)(1.0 / fVar8);
    dVar16 = dVar7 * dVar4;
    dVar1 = dVar14 * dVar4;
    dVar4 = dVar11 * dVar4;
  }
  switch(param_2) {
  case 0:
    fVar8 = (*(float *)((longlong)param_4 + 0x54) - *(float *)((longlong)param_3 + 0x54)) / fVar8;
    fVar17 = fVar8;
    if (1.0 <= fVar8) {
      fVar17 = 1.0;
    }
    fVar8 = asinf((float)(-(uint)(fVar8 < -1.0) & 0xbf800000 | ~-(uint)(fVar8 < -1.0) & (uint)fVar17
                         ));
    fVar8 = fVar8 * 57.295776 + 90.0;
    break;
  case 1:
    fVar8 = (*(float *)((longlong)param_4 + 0x54) - *(float *)((longlong)param_3 + 0x54)) / fVar8;
    fVar17 = fVar8;
    if (1.0 <= fVar8) {
      fVar17 = 1.0;
    }
    fVar8 = asinf((float)(-(uint)(fVar8 < -1.0) & 0xbf800000 | ~-(uint)(fVar8 < -1.0) & (uint)fVar17
                         ));
    fVar8 = fVar8 * -57.295776 + -90.0;
    break;
  case 2:
    fVar17 = 57.295776;
    goto LAB_1404377bc;
  case 3:
    fVar17 = -57.295776;
LAB_1404377bc:
    fVar8 = (*(float *)((longlong)param_4 + 0x54) + *(float *)((longlong)param_3 + 0x54)) / fVar8;
    fVar9 = fVar8;
    if (1.0 <= fVar8) {
      fVar9 = 1.0;
    }
    fVar8 = acosf((float)(-(uint)(fVar8 < -1.0) & 0xbf800000 | ~-(uint)(fVar8 < -1.0) & (uint)fVar9)
                 );
    dVar7 = (double)(fVar8 * fVar17) * 0.017453292519943295;
LAB_140437804:
    dVar5 = sin(dVar7);
    dVar6 = cos(dVar7);
    dVar7 = *param_5;
    dVar11 = param_5[1];
    dVar14 = param_5[2];
    dVar3 = 1.0 - dVar6;
    dVar10 = dVar7 * dVar14 * dVar3;
    dVar12 = dVar11 * dVar14 * dVar3;
    dVar2 = (dVar14 * dVar14 * dVar3 + dVar6) * dVar16 +
            (dVar10 - dVar5 * dVar11) * dVar4 + (dVar12 + dVar5 * dVar7) * dVar1;
    dVar13 = dVar7 * dVar11 * dVar3;
    dVar12 = (dVar12 - dVar5 * dVar7) * dVar16 +
             (dVar13 + dVar5 * dVar14) * dVar4 + (dVar11 * dVar11 * dVar3 + dVar6) * dVar1;
    dVar15 = (double)*(float *)((longlong)param_4 + 0x54);
    dVar11 = (dVar10 + dVar5 * dVar11) * dVar16 +
             (dVar3 * dVar7 * dVar7 + dVar6) * dVar4 + (dVar13 - dVar5 * dVar14) * dVar1;
    dVar7 = param_4[2] - dVar2 * dVar15;
    dVar14 = *param_4 - dVar15 * dVar11;
    dVar16 = param_4[1] - dVar12 * dVar15;
    goto LAB_1404376d2;
  default:
    dVar7 = 0.0;
    goto LAB_140437804;
  }
  dVar5 = sin((double)fVar8 * 0.017453292519943295);
  dVar6 = cos((double)fVar8 * 0.017453292519943295);
  dVar7 = *param_5;
  dVar11 = param_5[1];
  dVar14 = param_5[2];
  dVar3 = 1.0 - dVar6;
  dVar10 = dVar7 * dVar14 * dVar3;
  dVar12 = dVar11 * dVar14 * dVar3;
  dVar2 = (dVar14 * dVar14 * dVar3 + dVar6) * dVar16 +
          (dVar10 - dVar5 * dVar11) * dVar4 + (dVar12 + dVar5 * dVar7) * dVar1;
  dVar13 = dVar7 * dVar11 * dVar3;
  dVar12 = (dVar12 - dVar5 * dVar7) * dVar16 +
           (dVar13 + dVar5 * dVar14) * dVar4 + (dVar11 * dVar11 * dVar3 + dVar6) * dVar1;
  dVar15 = (double)*(float *)((longlong)param_4 + 0x54);
  dVar11 = (dVar10 + dVar5 * dVar11) * dVar16 +
           (dVar3 * dVar7 * dVar7 + dVar6) * dVar4 + (dVar13 - dVar5 * dVar14) * dVar1;
  dVar7 = dVar2 * dVar15 + param_4[2];
  dVar16 = dVar12 * dVar15 + param_4[1];
  dVar14 = dVar15 * dVar11 + *param_4;
LAB_1404376d2:
  dVar3 = (double)*(float *)((longlong)param_3 + 0x54);
  dVar1 = param_3[2];
  dVar4 = param_3[1];
  *param_1 = dVar11 * dVar3 + *param_3;
  param_1[1] = dVar12 * dVar3 + dVar4;
  param_1[2] = dVar2 * dVar3 + dVar1;
  param_1[3] = dVar14;
  param_1[4] = dVar16;
  param_1[5] = dVar7;
  return param_1;
}



// FUNCTION 140437988 FUN_140437988 body=228 status=ok
// SIG undefined FUN_140437988(void)

longlong FUN_140437988(void)

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
  if (DAT_14c9a42b8 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = &LAB_1462a6978;
    local_38 = &LAB_1470b722f;
    local_40 = FUN_1462a697d;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/GbxEngine",L"GbxActorStateOwner",&DAT_14c9a42b8,&DAT_1470b722e);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14c9a42b8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140437a6e FUN_140437a6e body=77 status=ok
// SIG undefined FUN_140437a6e(void)

longlong FUN_140437a6e(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x3d0);
  if (plVar1 != (longlong *)0x0) {
    uVar2 = FUN_140437cd0();
    lVar3 = (**(code **)(*plVar1 + 0x288))(plVar1,uVar2);
    if (lVar3 != 0) {
      uVar2 = FUN_140437cd0();
      lVar4 = FUN_144718840(lVar3,uVar2);
      if (lVar3 != lVar4) {
        return lVar4;
      }
    }
  }
  return 0;
}



// FUNCTION 140437abc FUN_140437abc body=72 status=ok
// SIG undefined FUN_140437abc(void)

undefined8 FUN_140437abc(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar1 != 0) {
    if ((*(longlong *)(&DAT_00001ce8 + lVar1) == 0) ||
       (*(byte *)(*(longlong *)(&DAT_00001ce8 + lVar1) + 0x178) < 2)) {
      return CONCAT71((int7)((ulonglong)lVar1 >> 8),*(char *)(lVar1 + 0x1ee9) != '\0');
    }
    plVar2 = *(longlong **)(lVar1 + 0x1eb8);
    if (plVar2 != (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140437af2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*plVar2 + 0x70))(plVar2,0);
      return uVar3;
    }
  }
  return 0;
}



// FUNCTION 140437b04 FUN_140437b04 body=228 status=ok
// SIG undefined FUN_140437b04(void)

longlong FUN_140437b04(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4170 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148bc4feb;
    local_40 = FUN_1465bcae9;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"Grappleable",&DAT_14cba4170,&DAT_148bc4fea);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4170;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140437bea FUN_140437bea body=228 status=ok
// SIG undefined FUN_140437bea(void)

longlong FUN_140437bea(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cb9fc98 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148b87c21;
    local_40 = FUN_1465a7117;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"Carryable",&DAT_14cb9fc98,&DAT_148b87c20);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cb9fc98;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140437cd0 FUN_140437cd0 body=228 status=ok
// SIG undefined FUN_140437cd0(void)

longlong FUN_140437cd0(void)

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
  code *local_28;
  code *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cba4188 == 0) {
    local_30 = &local_10;
    local_10 = FUN_1449e2820;
    local_20 = FUN_14081d0ea;
    local_28 = FUN_1427b09ee;
    local_38 = &LAB_148bc4fef;
    local_40 = FUN_1465bcb40;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10004001;
    local_60 = 8;
    local_68 = 0x28;
    FUN_14081cfa3(L"/Script/OakGame",L"Grappler",&DAT_14cba4188,&DAT_148bc4fee);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cba4188;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140437db6 FUN_140437db6 body=141 status=ok
// SIG undefined FUN_140437db6(void)

void FUN_140437db6(void *param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  void *_Src;
  
  _Src = *(void **)((longlong)param_1 + 0x80);
  if ((uint)param_3 < 0x21) {
    if (_Src == (void *)0x0) {
      return;
    }
    memmove(param_1,_Src,(longlong)param_2 << 2);
    param_2 = 0;
    param_3 = 0;
  }
  else if (_Src == (void *)0x0) {
    FUN_1446efa72((longlong)param_1 + 0x80,0,param_3,param_4);
    memmove(*(void **)((longlong)param_1 + 0x80),param_1,(longlong)param_2 << 2);
    return;
  }
  FUN_1446efa72((longlong)param_1 + 0x80,param_2,param_3,param_4);
  return;
}



// FUNCTION 140437e44 FUN_140437e44 body=95 status=ok
// SIG undefined FUN_140437e44(void)

ulonglong FUN_140437e44(longlong param_1)

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
LAB_140437e86:
    uVar6 = 0;
  }
  else {
    iVar5 = (int)plVar3[1];
    do {
      if (iVar5 == 0) goto LAB_140437e86;
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



// FUNCTION 140437ea4 FUN_140437ea4 body=134 status=ok
// SIG undefined FUN_140437ea4(void)

void FUN_140437ea4(longlong *param_1)

{
  longlong *plVar1;
  int *piVar2;
  longlong *plVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  bool bVar7;
  
  (**(code **)(*param_1 + 8))();
  cVar5 = (**(code **)(*param_1 + 0x10))(param_1);
  if ((cVar5 == '\0') && ((char)param_1[4] == '\x01')) {
    *(undefined1 *)(param_1 + 4) = 0;
    plVar3 = (longlong *)param_1[2];
    if (plVar3 != (longlong *)0x0) {
      iVar6 = (int)plVar3[1];
      do {
        if (iVar6 == 0) {
          return;
        }
        LOCK();
        iVar4 = (int)plVar3[1];
        bVar7 = iVar6 == iVar4;
        if (bVar7) {
          *(int *)(plVar3 + 1) = iVar6 + 1;
          iVar4 = iVar6;
        }
        iVar6 = iVar4;
        UNLOCK();
      } while (!bVar7);
      if ((param_1[1] != 0) && (param_1[3] != 0)) {
        FUN_14480f766(param_1[1] + 0x28);
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
                    /* WARNING: Could not recover jumptable at 0x000140437f26. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar3 + 0x10))(plVar3);
          return;
        }
      }
    }
  }
  return;
}



// FUNCTION 140437f2a FUN_140437f2a body=311 status=ok
// SIG undefined FUN_140437f2a(void)

void FUN_140437f2a(float *param_1,longlong param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar2 = *(float *)(param_2 + 0x33c);
  fVar1 = *(float *)(param_2 + 0x36c);
  if (*(int *)(param_4 + 0xc) < 1) {
    fVar3 = 0.0;
    if (*(int *)(param_4 + 0x10) < 1) {
      fVar2 = 0.0;
    }
    fVar4 = 0.0;
    fVar5 = fVar2;
  }
  else {
    fVar3 = 0.0;
    fVar5 = fVar2;
    if (*(int *)(param_4 + 0x10) == 0 || (*(byte *)(param_2 + 0x374) & 0xc0) == 0) {
      fVar3 = fVar2;
      fVar5 = 0.0;
    }
    fVar4 = *(float *)(param_2 + 0x340);
    if (*(float *)(param_2 + 0x340) <= fVar2) {
      fVar4 = fVar2;
    }
  }
  *param_1 = fVar4;
  param_1[1] = fVar3;
  param_1[2] = fVar5;
  param_1[3] = fVar1;
  param_1[4] = *(float *)(param_2 + 0x370);
  param_1[5] = 0.0;
  param_1[8] = *(float *)(param_2 + 0x34c);
  param_1[9] = *(float *)(param_2 + 0x354);
  param_1[10] = 1.0;
  param_1[0xe] = *(float *)(param_2 + 0x350);
  param_1[0xf] = *(float *)(param_2 + 0x358);
  param_1[0x10] = 1.0;
  *(bool *)param_5 = (*(ushort *)(param_2 + 0x374) & 0xc) != 4;
  FUN_1449a602d(param_1,param_2,param_3,0,*(undefined4 *)(param_2 + 0x5b0),param_4);
  fVar2 = *(float *)(param_2 + 0x368);
  if ((((fVar2 != 0.0) || (NAN(fVar2))) && (DAT_14c75f0e4 == '\x01')) && (0 < (int)param_1[0x16])) {
    param_1[5] = fVar2;
  }
  return;
}



// FUNCTION 140438062 FUN_140438062 body=28 status=ok
// SIG undefined FUN_140438062(void)

void FUN_140438062(undefined8 param_1)

{
  FUN_14043807e(param_1,1);
  FUN_1401c4d14(param_1);
  return;
}



// FUNCTION 14043807e FUN_14043807e body=172 status=ok
// SIG undefined FUN_14043807e(void)

undefined8 FUN_14043807e(longlong param_1,char param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x7cc);
  uVar2 = uVar3 | 0x40;
  uVar4 = (ulonglong)uVar2;
  *(uint *)(param_1 + 0x7cc) = uVar2;
  if (((DAT_14c762820 != 0) && (*(longlong *)(param_1 + 0x668) != 0)) &&
     ((*(byte *)(*(longlong *)(param_1 + 0x668) + 0x4f8) & 1) == 0)) {
    if ((uVar3 & 0x20) == 0) {
      bVar1 = FUN_14043812a(param_1);
      uVar3 = (uint)(bVar1 ^ 1) << 6;
      uVar2 = *(uint *)(param_1 + 0x7cc);
    }
    else {
      uVar3 = 0;
    }
    uVar3 = uVar2 & 0xffffffbf | uVar3;
    uVar4 = (ulonglong)uVar3;
    *(uint *)(param_1 + 0x7cc) = uVar3;
  }
  if (param_2 != '\0') {
    if ((uVar4 & 0x40) == 0) {
      if ((char)uVar4 < '\0') {
        FUN_14083f3f8(param_1,0,1);
      }
      uVar4 = FUN_140388f74(param_1);
    }
    else if ((*(byte *)(param_1 + 0x9e) & 0x10) != 0) {
      uVar4 = FUN_14043827e(param_1);
    }
  }
  uVar4 = CONCAT71((int7)(uVar4 >> 8),*(undefined1 *)(param_1 + 0x7cc)) & 0xffffffffffffff40;
  return CONCAT71((int7)(uVar4 >> 8),(byte)uVar4 >> 6);
}



// FUNCTION 14043812a FUN_14043812a body=339 status=ok
// SIG undefined FUN_14043812a(void)

undefined8 FUN_14043812a(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined2 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  code **local_40;
  code *local_38;
  code *local_30;
  code *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_98;
  lVar1 = *(longlong *)(param_1 + 0xa8);
  if (lVar1 == 0) {
LAB_140438187:
    if ((*(longlong *)(param_1 + 0x120) == 0) || (cVar2 = FUN_14043812a(), cVar2 == '\0')) {
      uVar3 = 0;
      goto LAB_14043819e;
    }
  }
  else {
    if (DAT_14caf64b8 == 0) {
      local_40 = &local_20;
      local_20 = FUN_141030f22;
      local_30 = FUN_14081d0ea;
      local_38 = FUN_142b4754c;
      local_48 = &LAB_147c45ce0;
      local_50 = &LAB_1463f1ff4;
      local_58 = &DAT_149e063b2;
      local_60 = 0x4000000000;
      local_68 = 0x10000004;
      local_70 = 8;
      local_78 = 0x428;
      FUN_14081cfa3(L"/Script/Engine",L"Pawn",&DAT_14caf64b8,FUN_1463f1fd2);
    }
    if ((((*(int *)(*(longlong *)(lVar1 + 0x10) + 0x38) < *(int *)(DAT_14caf64b8 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar1 + 0x10) + 0x30) +
           (longlong)*(int *)(DAT_14caf64b8 + 0x38) * 8) != DAT_14caf64b8 + 0x30)) ||
        ((*(byte *)(lVar1 + 0x398) & 0x40) == 0)) &&
       ((*(longlong *)(lVar1 + 0x1b0) == 0 ||
        ((*(byte *)(*(longlong *)(lVar1 + 0x1b0) + 0x398) & 0x40) == 0)))) goto LAB_140438187;
  }
  uVar3 = 1;
LAB_14043819e:
  if ((local_18 ^ (ulonglong)auStack_98) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar3;
}



// FUNCTION 14043827e FUN_14043827e body=120 status=ok
// SIG undefined FUN_14043827e(void)

void FUN_14043827e(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  if ((((*(int *)(param_1 + 0x828) == -1) && ((~*(uint *)(param_1 + 0x7cc) & 0x50) == 0)) &&
      (*(longlong *)(param_1 + 0x668) != 0)) &&
     (lVar1 = *(longlong *)(*(longlong *)(param_1 + 0x668) + 0x68), lVar1 != 0)) {
    lVar2 = *(longlong *)(param_1 + 0xb0);
    if (lVar2 == 0) {
      lVar2 = FUN_1448abda6(param_1);
    }
    lVar2 = FUN_1400bd118(lVar2);
    if (lVar2 != 0) {
      *(longlong *)(param_1 + 0x820) = lVar1;
      FUN_1404382f6(lVar2,param_1,lVar1);
      return;
    }
  }
  return;
}



// FUNCTION 1404382f6 FUN_1404382f6 body=378 status=ok
// SIG undefined FUN_1404382f6(void)

void FUN_1404382f6(longlong param_1,undefined8 param_2,undefined8 ***param_3)

{
  uint uVar1;
  int iVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined1 auStack_68 [40];
  undefined8 **local_40;
  undefined8 **local_38;
  int local_2c;
  ulonglong local_28;
  
  local_28 = DAT_14c707940 ^ (ulonglong)auStack_68;
  if ((param_3 == (undefined8 ***)0x0) || (DAT_14cb444a0 == '\x02')) goto LAB_1404383b8;
  if (DAT_14c950c29 == 1) {
    FUN_1456cec3c(param_3);
  }
  local_38 = param_3;
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_3);
  }
  plVar3 = (longlong *)(param_1 + 0x1ba0);
  if ((DAT_14c950c29 & 1) != 0) {
    FUN_1456cec3c(param_3);
  }
  uVar1 = ((uint)((ulonglong)param_3 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_3 >> 4)) *
          -0x7a143595;
  uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
  iVar2 = FUN_140438472(plVar3,uVar1 >> 0x10 ^ uVar1,&local_38);
  if (iVar2 == -1) {
LAB_1404383d9:
    local_40 = param_3;
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_3);
    }
    local_38 = &local_40;
    FUN_14043928e(plVar3,&local_2c,&local_38,0);
    puVar4 = (undefined8 *)(*plVar3 + (longlong)local_2c * 0xf0 + 8);
    if (DAT_14c950c29 == 1) {
      FUN_1456cec3c(param_3);
    }
    *puVar4 = param_3;
  }
  else {
    if (*plVar3 + (longlong)iVar2 * 0xf0 == 0) goto LAB_1404383d9;
    puVar4 = (undefined8 *)(*plVar3 + (longlong)iVar2 * 0xf0 + 8);
  }
  FUN_140438542(puVar4,param_2);
LAB_1404383b8:
  if ((local_28 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140438472 FUN_140438472 body=208 status=ok
// SIG undefined FUN_140438472(void)

int FUN_140438472(longlong *param_1,uint param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  longlong *plVar5;
  
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    plVar5 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar5 = (longlong *)param_1[8];
    }
    bVar4 = DAT_14c950c29;
    for (iVar1 = *(int *)((longlong)plVar5 + (ulonglong)((int)param_1[9] - 1U & param_2) * 4);
        iVar1 != -1; iVar1 = *(int *)(*param_1 + 0xe8 + (longlong)iVar1 * 0xf0)) {
      lVar2 = *param_3;
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      lVar3 = *(longlong *)(*param_1 + (longlong)iVar1 * 0xf0);
      if (((bVar4 & 1) != 0) && (lVar3 != 0)) {
        FUN_1456cec3c(lVar3);
        bVar4 = DAT_14c950c29;
      }
      if ((lVar2 != 0 & bVar4) == 1) {
        FUN_1456cec3c(lVar2);
        bVar4 = DAT_14c950c29;
      }
      if (lVar3 == lVar2) {
        return iVar1;
      }
    }
  }
  return -1;
}



// FUNCTION 140438542 FUN_140438542 body=492 status=ok
// SIG undefined FUN_140438542(void)

void FUN_140438542(longlong param_1,longlong param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  ulonglong uVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  iVar5 = *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x10) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x14) < iVar5 + 1U) {
    FUN_14043878c((longlong *)(param_1 + 8),iVar5);
  }
  *(longlong *)(*(longlong *)(param_1 + 8) + (longlong)iVar5 * 8) = param_2;
  if ((param_2 != 0) && (DAT_14c950c29 != '\0')) {
    FUN_1456cec3c(param_2);
  }
  *(int *)(param_2 + 0x828) = iVar5;
  iVar5 = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x20) = iVar5 + 1U;
  if (*(uint *)(param_1 + 0x24) < iVar5 + 1U) {
    FUN_1404388ee(param_1 + 0x18,iVar5);
  }
  FUN_14043872e((longlong)iVar5 * 0xc + *(longlong *)(param_1 + 0x18));
  uVar2 = *(uint *)(param_1 + 0xc0);
  if (0 < (int)uVar2) {
    lVar10 = param_1 + 0xa8;
    iVar5 = uVar2 + 1;
    if (uVar2 >> 5 == uVar2 - 1 >> 5) {
      *(int *)(param_1 + 0xc0) = iVar5;
    }
    else {
      if (*(int *)(param_1 + 0xc4) <= (int)uVar2) {
        if (uVar2 < 0x80) {
          iVar5 = 0x80;
          uVar8 = uVar2;
        }
        else {
          uVar9 = (ulonglong)uVar2 + 0x20 >> 5;
          uVar8 = (uint)uVar9;
          if (*(int *)(param_1 + 0xc4) + 0x1fU < 0xa0) {
            uVar6 = 4;
            if (4 < uVar8) {
              uVar6 = uVar9;
            }
          }
          else {
            uVar6 = uVar9 + (uVar8 * 3 >> 3) + 0x10;
          }
          uVar9 = FUN_144a3809e(uVar6 << 2,0);
          iVar3 = (int)(uVar9 >> 2);
          iVar5 = -0x20;
          if ((int)uVar8 <= iVar3) {
            iVar5 = iVar3 << 5;
          }
          uVar8 = *(uint *)(param_1 + 0xc0);
        }
        *(int *)(param_1 + 0xc4) = iVar5;
        FUN_1446efbd8(lVar10,uVar8);
        iVar5 = *(int *)(param_1 + 0xc0) + 1;
      }
      iVar3 = iVar5 + 0x1f;
      if (-1 < iVar5) {
        iVar3 = iVar5;
      }
      *(int *)(param_1 + 0xc0) = iVar5;
      if (iVar5 % 0x20 != 0) {
        lVar7 = *(longlong *)(param_1 + 0xb8);
        if (*(longlong *)(param_1 + 0xb8) == 0) {
          lVar7 = lVar10;
        }
        bVar4 = -(char)(iVar5 % 0x20);
        *(uint *)(lVar7 + (longlong)(iVar3 >> 5) * 4) =
             (uint)(*(int *)(lVar7 + (longlong)(iVar3 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    if (*(longlong *)(param_1 + 0xb8) != 0) {
      lVar10 = *(longlong *)(param_1 + 0xb8);
    }
    puVar1 = (uint *)(lVar10 + (ulonglong)(uVar2 >> 5) * 4);
    *puVar1 = *puVar1 | 1 << ((byte)uVar2 & 0x1f);
  }
  FUN_1449a78be(param_1,*(undefined4 *)(param_2 + 0x828),0);
  return;
}



// FUNCTION 14043872e FUN_14043872e body=18 status=ok
// SIG undefined FUN_14043872e(void)

void FUN_14043872e(undefined8 *param_1)

{
  *param_1 = 0x3f800000;
  *(undefined2 *)(param_1 + 1) = 0xffff;
  *(undefined1 *)((longlong)param_1 + 10) = 1;
  return;
}



// FUNCTION 140438740 FUN_140438740 body=64 status=ok
// SIG undefined FUN_140438740(void)

longlong FUN_140438740(longlong *param_1)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = (int)param_1[1];
  *(uint *)(param_1 + 1) = iVar1 + 1U;
  if (*(uint *)((longlong)param_1 + 0xc) < iVar1 + 1U) {
    FUN_140439118(param_1,iVar1);
  }
  lVar2 = (longlong)iVar1 * 6 + *param_1;
  FUN_140438780(lVar2);
  return lVar2;
}



// FUNCTION 140438780 FUN_140438780 body=11 status=ok
// SIG undefined FUN_140438780(void)

void FUN_140438780(undefined4 *param_1)

{
  *param_1 = 0;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xfc;
  return;
}



// FUNCTION 14043878c FUN_14043878c body=353 status=ok
// SIG undefined FUN_14043878c(void)

void FUN_14043878c(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140438811;
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
LAB_140438811:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 1404388ee FUN_1404388ee body=373 status=ok
// SIG undefined FUN_1404388ee(void)

void FUN_1404388ee(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 0xc;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_140438977;
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
LAB_140438977:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 0xc)) {
    uVar7 = uVar5 / 0xc & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,0xc,4);
  return;
}



// FUNCTION 140438a64 FUN_140438a64 body=1715 status=ok
// SIG undefined FUN_140438a64(void)

int * FUN_140438a64(longlong *param_1,int *param_2,undefined8 *param_3)

{
  uint *puVar1;
  ulonglong *puVar2;
  ulonglong *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong *plVar9;
  ulonglong uVar10;
  byte bVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  longlong *plVar17;
  ulonglong uVar18;
  int iVar19;
  uint uVar20;
  ulonglong uVar21;
  longlong lVar22;
  int iVar23;
  ulonglong uVar24;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar19 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar19 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar19) {
      FUN_14482b872(param_1,iVar19);
    }
    iVar23 = (int)param_1[5];
    if (iVar23 == 0) {
      iVar6 = -1;
    }
    else {
      iVar6 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar6 = iVar23 + -1;
      }
      iVar6 = iVar6 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar12 = iVar23 + 1;
    iVar16 = iVar23 + 0x1f;
    if (-1 < iVar23) {
      iVar16 = iVar23;
    }
    if (iVar16 >> 5 == iVar6) {
      *(int *)(param_1 + 5) = iVar12;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar23) {
        iVar6 = iVar23;
        if (iVar23 + 0x20U < 0xa0) {
          iVar12 = 0x80;
        }
        else {
          uVar15 = iVar23 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar14 = 4;
            if (4 < uVar15) {
              uVar14 = uVar15;
            }
          }
          else {
            uVar14 = uVar15 + (uVar15 * 3 >> 3) + 0x10;
          }
          uVar10 = (ulonglong)(uVar14 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar20 = (uint)(uVar10 + 0xf);
              if (uVar14 < 0x1ffd) {
                uVar10 = (ulonglong)
                         (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar10 + 0xf >> 4]];
              }
              else {
                uVar18 = (ulonglong)(uVar20 & 0xfffffff0);
                if (uVar18 < 0x7ff1) {
                  bVar11 = (&DAT_14c841e00)[uVar20 >> 4];
                  uVar24 = 0x32;
                  if (0x32 < bVar11) {
                    uVar24 = (ulonglong)bVar11;
                  }
                  uVar21 = 0x32 - (ulonglong)bVar11;
                  do {
                    uVar10 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar21 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar21 & 0xffffffff] & 0xf) == 0) goto LAB_140438f90;
                    lVar8 = uVar24 + 1 + uVar21;
                    uVar21 = uVar21 - 1;
                  } while (lVar8 != 0x33);
                }
                uVar10 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar10 = (ulonglong)DAT_14c841df8;
                }
                uVar10 = -uVar10 & (uVar18 + uVar10) - 1;
              }
            }
            else {
              uVar10 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar10,0);
              iVar6 = (int)param_1[5];
            }
          }
LAB_140438f90:
          iVar7 = (int)(uVar10 >> 2);
          iVar12 = -0x20;
          if ((int)uVar15 <= iVar7) {
            iVar12 = iVar7 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar12;
        FUN_1446efbd8(plVar9,iVar6);
        iVar12 = (int)param_1[5] + 1;
      }
      iVar6 = iVar12 + 0x1f;
      if (-1 < iVar12) {
        iVar6 = iVar12;
      }
      *(int *)(param_1 + 5) = iVar12;
      if (iVar12 % 0x20 != 0) {
        plVar17 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar17 = plVar9;
        }
        bVar11 = -(char)(iVar12 % 0x20);
        *(uint *)((longlong)plVar17 + (longlong)(iVar6 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar17 + (longlong)(iVar6 >> 5) * 4) << (bVar11 & 0x1f)) >>
             (bVar11 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar19;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar11 = (byte)iVar23 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar11 | 0xfffffffeU >> 0x20 - bVar11);
  }
  else {
    iVar19 = (int)param_1[6];
    lVar8 = (longlong)iVar19;
    iVar23 = *(int *)(*param_1 + 4 + lVar8 * 0x18);
    *(int *)(param_1 + 6) = iVar23;
    iVar6 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar6;
    if (iVar6 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar23 * 0x18) = 0xffffffff;
    }
  }
  puVar1 = (uint *)(param_1 + 2);
  uVar15 = 1;
  puVar13 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar13 = puVar1;
  }
  iVar23 = iVar19 + 0x1f;
  if (-1 < iVar19) {
    iVar23 = iVar19;
  }
  puVar13[iVar23 >> 5] = puVar13[iVar23 >> 5] | 1 << ((byte)iVar19 & 0x1f);
  puVar2 = (ulonglong *)(*param_1 + lVar8 * 0x18);
  uVar10 = *(ulonglong *)*param_3;
  *puVar2 = uVar10;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)(puVar2 + 2) = 0xffffffff;
  uVar14 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar14 = uVar14 >> 0x10 ^ uVar14;
  uVar20 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  if (1 < uVar20) {
    plVar9 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[8];
    }
    iVar23 = *(int *)((longlong)plVar9 + (ulonglong)((int)param_1[9] - 1U & uVar14) * 4);
    if (iVar23 != -1) {
      do {
        puVar3 = (ulonglong *)(*param_1 + (longlong)iVar23 * 0x18);
        if (*puVar3 == uVar10) {
          uVar4 = *(undefined4 *)((longlong)puVar2 + 4);
          uVar10 = puVar2[1];
          uVar5 = *(undefined4 *)((longlong)puVar2 + 0xc);
          *(int *)puVar3 = (int)*puVar2;
          *(undefined4 *)((longlong)puVar3 + 4) = uVar4;
          *(int *)(puVar3 + 1) = (int)uVar10;
          *(undefined4 *)((longlong)puVar3 + 0xc) = uVar5;
          FUN_1481f1eea(param_1,iVar19);
          iVar19 = iVar23;
          goto LAB_140438c18;
        }
        iVar23 = (int)puVar3[2];
      } while (iVar23 != -1);
    }
  }
  if (3 < uVar20) {
    uVar10 = (ulonglong)(uVar20 & 0xfffffffe) + 0xf;
    lVar8 = 0x3f;
    if (uVar10 != 0) {
      for (; uVar10 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    uVar15 = 1 << ((byte)lVar8 & 0x1f);
  }
  if (((int)uVar20 < 1) || ((int)uVar15 <= (int)param_1[9])) {
    uVar14 = (int)param_1[9] - 1U & uVar14;
    *(uint *)((longlong)puVar2 + 0x14) = uVar14;
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(undefined4 *)(puVar2 + 2) =
         *(undefined4 *)
          ((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4);
    plVar9 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar9 = param_1 + 7;
    }
    *(int *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar14) * 4) =
         iVar19;
    goto LAB_140438c18;
  }
  *(uint *)(param_1 + 9) = uVar15;
  plVar9 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar9,0,0,4);
    uVar15 = *(uint *)(param_1 + 9);
  }
  plVar17 = param_1 + 7;
  if (uVar15 == 1) {
    if (*plVar9 != 0) {
      FUN_1446efa72(plVar9,0,0,4);
    }
LAB_140438ce8:
    uVar14 = 0;
    do {
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)((longlong)plVar9 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar14) * 4) =
           0xffffffff;
      uVar14 = uVar14 + 1;
    } while (uVar15 != uVar14);
  }
  else {
    if (uVar15 == 0) goto LAB_140438c18;
    FUN_1446efa72(plVar9,0,uVar15,4);
    if (0 < (int)uVar15) goto LAB_140438ce8;
  }
  iVar23 = (int)param_1[5];
  if (iVar23 == 0) {
    uVar10 = 0;
    uVar18 = 1;
    iVar6 = 0;
    iVar12 = 0;
  }
  else {
    puVar13 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar13 = puVar1;
    }
    uVar15 = *puVar13;
    if (uVar15 == 0) {
      iVar6 = iVar23 + 0x1e;
      if (-1 < iVar23 + -1) {
        iVar6 = iVar23 + -1;
      }
      uVar10 = 0;
      uVar18 = (ulonglong)(uint)(iVar6 >> 5);
      if (iVar6 >> 5 < 1) {
        uVar18 = uVar10;
      }
      iVar12 = 0;
      do {
        if (uVar18 == uVar10) goto LAB_140438c18;
        iVar12 = iVar12 + 0x20;
        uVar15 = puVar13[uVar10 + 1];
        uVar10 = uVar10 + 1;
      } while (uVar15 == 0);
    }
    else {
      uVar10 = 0;
      iVar12 = 0;
    }
    uVar18 = (ulonglong)(-uVar15 & uVar15);
    uVar24 = uVar18 * 2 + 1;
    lVar8 = 0x3f;
    if (uVar24 != 0) {
      for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
      }
    }
    iVar6 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    if (iVar23 <= iVar6) {
      iVar6 = iVar23;
    }
  }
  if (iVar6 < iVar23) {
    uVar15 = 0xffffffff;
    do {
      lVar8 = *param_1;
      lVar22 = (longlong)iVar6;
      uVar24 = *(ulonglong *)(lVar8 + lVar22 * 0x18);
      uVar14 = ((uint)(uVar24 >> 0x14) & 0xffff ^ (uint)(uVar24 >> 4)) * -0x7a143595;
      uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
      uVar24 = (longlong)(int)(uVar14 >> 0x10 ^ uVar14) & (longlong)(int)param_1[9] - 1U;
      iVar23 = (int)uVar24;
      *(int *)(lVar8 + 0x14 + lVar22 * 0x18) = iVar23;
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(undefined4 *)(lVar8 + 0x10 + lVar22 * 0x18) =
           *(undefined4 *)((longlong)plVar9 + ((longlong)(int)param_1[9] - 1U & uVar24) * 4);
      plVar9 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar9 = plVar17;
      }
      *(int *)((longlong)plVar9 + ((longlong)iVar23 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6;
      uVar15 = ~(uint)uVar18 & uVar15;
      puVar13 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar13 = puVar1;
      }
      iVar23 = (int)param_1[5];
      iVar6 = (int)uVar10;
      lVar8 = (longlong)iVar6;
      uVar14 = puVar13[lVar8] & uVar15;
      if (uVar14 == 0) {
        iVar16 = iVar23 + 0x1e;
        if (-1 < iVar23 + -1) {
          iVar16 = iVar23 + -1;
        }
        iVar16 = iVar16 >> 5;
        iVar7 = iVar16;
        if (iVar16 < iVar6) {
          iVar7 = iVar6;
        }
        if (iVar16 <= iVar6) break;
        lVar22 = 0;
        while( true ) {
          iVar12 = iVar12 + 0x20;
          uVar14 = puVar13[lVar8 + lVar22 + 1];
          if (uVar14 != 0) break;
          lVar22 = lVar22 + 1;
          if (iVar7 - lVar8 == lVar22) goto LAB_140438c18;
        }
        uVar10 = (ulonglong)(iVar6 + (int)lVar22 + 1);
        uVar15 = 0xffffffff;
      }
      uVar18 = (ulonglong)(-uVar14 & uVar14);
      uVar24 = uVar18 * 2 + 1;
      lVar8 = 0x3f;
      if (uVar24 != 0) {
        for (; uVar24 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar6 = (iVar12 - ((uint)lVar8 ^ 0x3f)) + 0x3e;
    } while (iVar6 < iVar23);
  }
LAB_140438c18:
  *param_2 = iVar19;
  return param_2;
}



// FUNCTION 140439118 FUN_140439118 body=372 status=ok
// SIG undefined FUN_140439118(void)

void FUN_140439118(longlong param_1,int param_2)

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
  uVar5 = lVar4 * 6;
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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_1404391a0;
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
      uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,2);
    }
  }
LAB_1404391a0:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 / 6)) {
    uVar7 = uVar5 / 6 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,6,2);
  return;
}



// FUNCTION 14043928e FUN_14043928e body=1656 status=ok
// SIG undefined FUN_14043928e(void)

int * FUN_14043928e(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  uint *puVar1;
  ulonglong *_Src;
  longlong lVar2;
  void *pvVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  undefined1 *_Src_00;
  longlong *plVar15;
  int iVar16;
  ulonglong *_Dst;
  undefined1 auStack_178 [40];
  ulonglong local_150;
  ulonglong local_148 [9];
  undefined8 local_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined4 local_ec;
  undefined8 local_e0;
  undefined4 local_d8;
  void *local_d0;
  int iStack_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  void *local_b0;
  ulonglong uStack_a8;
  undefined1 local_a0 [16];
  undefined1 *local_90;
  undefined8 local_88;
  ulonglong local_80;
  undefined4 local_78;
  undefined1 local_70;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_178;
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar14 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar14 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar14) {
      FUN_14571140a(param_1,iVar14);
    }
    iVar6 = (int)param_1[5];
    if (iVar6 == 0) {
      iVar10 = -1;
    }
    else {
      iVar10 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar10 = iVar6 + -1;
      }
      iVar10 = iVar10 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar11 = iVar6 + 1;
    iVar16 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar16 = iVar6;
    }
    if (iVar16 >> 5 == iVar10) {
      *(int *)(param_1 + 5) = iVar11;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar11 = 0x80;
          iVar10 = iVar6;
        }
        else {
          uVar5 = iVar6 + 0x20U >> 5;
          local_150 = (ulonglong)uVar5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar7 = 4;
            if (4 < uVar5) {
              uVar7 = uVar5;
            }
          }
          else {
            uVar7 = (uVar5 * 3 >> 3) + uVar5 + 0x10;
          }
          uVar13 = FUN_144a3809e(uVar7 << 2,0);
          iVar10 = (int)(uVar13 >> 2);
          iVar11 = -0x20;
          if ((int)local_150 <= iVar10) {
            iVar11 = iVar10 << 5;
          }
          iVar10 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar11;
        FUN_1446efbd8(plVar12,iVar10);
        iVar11 = (int)param_1[5] + 1;
      }
      iVar10 = iVar11 + 0x1f;
      if (-1 < iVar11) {
        iVar10 = iVar11;
      }
      *(int *)(param_1 + 5) = iVar11;
      if (iVar11 % 0x20 != 0) {
        plVar15 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar15 = plVar12;
        }
        bVar9 = -(char)(iVar11 % 0x20);
        *(uint *)((longlong)plVar15 + (longlong)(iVar10 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar15 + (longlong)(iVar10 >> 5) * 4) << (bVar9 & 0x1f)) >>
             (bVar9 & 0x1f);
      }
    }
    lVar8 = (longlong)iVar14;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar9 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar9 | 0xfffffffeU >> 0x20 - bVar9);
  }
  else {
    iVar14 = (int)param_1[6];
    lVar8 = (longlong)iVar14;
    iVar6 = *(int *)(*param_1 + 4 + lVar8 * 0xf0);
    *(int *)(param_1 + 6) = iVar6;
    iVar10 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar10;
    if (iVar10 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar6 * 0xf0) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar6 = iVar14 + 0x1f;
  if (-1 < iVar14) {
    iVar6 = iVar14;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar6 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar14 & 0x1f);
  _Src = (ulonglong *)(*param_1 + lVar8 * 0xf0);
  local_100 = 0;
  local_f8 = 0;
  local_148[0] = 0;
  local_148[1] = 0;
  local_148[2] = 0;
  local_148[3] = 0;
  local_148[4] = 0;
  local_148[5] = 0;
  local_148[6] = 0;
  local_f4 = 0xffffffff00000080;
  local_ec = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_90 = (undefined1 *)0x0;
  local_88 = 0x8000000000;
  local_d0 = (void *)0x0;
  iStack_c8 = 0;
  uStack_c4 = 0;
  local_c0 = 0;
  uStack_bf = 0;
  local_b8 = 0;
  local_b0 = (void *)0x0;
  uStack_a8 = 0;
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  lVar2 = *(longlong *)*param_3;
  *(longlong *)(*param_1 + lVar8 * 0xf0) = lVar2;
  if ((lVar2 != 0 & DAT_14c950c29) == 1) {
    FUN_1456cec3c();
  }
  _Src[10] = 0;
  *(undefined4 *)(_Src + 0xb) = 0;
  _Src[1] = 0;
  _Src[2] = 0;
  _Src[3] = 0;
  _Src[4] = 0;
  _Src[5] = 0;
  _Src[6] = 0;
  _Src[7] = 0;
  *(undefined8 *)((longlong)_Src + 0x5c) = 0xffffffff00000080;
  *(undefined4 *)((longlong)_Src + 100) = 0;
  _Src[0xe] = 0;
  *(undefined4 *)(_Src + 0xf) = 0;
  FUN_140439aac(_Src + 6,local_148 + 5);
  pvVar3 = local_d0;
  _Src[0x10] = 0;
  lVar8 = (longlong)iStack_c8;
  *(int *)(_Src + 0x11) = iStack_c8;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)_Src + 0x8c) = 0;
  }
  else {
    FUN_1481e9fbc(_Src + 0x10,iStack_c8,0);
    memcpy((void *)_Src[0x10],pvVar3,lVar8 * 6);
  }
  pvVar3 = local_b0;
  *(undefined1 *)(_Src + 0x13) = local_b8;
  _Src[0x12] = CONCAT71(uStack_bf,local_c0);
  _Src[0x14] = 0;
  lVar8 = (longlong)(int)uStack_a8;
  *(int *)(_Src + 0x15) = (int)uStack_a8;
  if (lVar8 == 0) {
    *(undefined4 *)((longlong)_Src + 0xac) = 0;
  }
  else {
    FUN_144a06ca8(_Src + 0x14,uStack_a8 & 0xffffffff,0);
    memcpy((void *)_Src[0x14],pvVar3,lVar8 << 2);
  }
  _Src[0x18] = 0;
  _Src[0x19] = 0;
  uVar5 = (int)local_88 + 0x1fU & 0xffffffe0;
  if (0 < (int)uVar5) {
    uVar7 = 0x80;
    if (0x80 < uVar5) {
      uVar7 = uVar5;
    }
    *(uint *)((longlong)_Src + 0xcc) = uVar7;
    FUN_1446efbd8(_Src + 0x16,0);
  }
  *(int *)(_Src + 0x19) = (int)local_88;
  if ((int)local_88 != 0) {
    _Src_00 = local_90;
    if (local_90 == (undefined1 *)0x0) {
      _Src_00 = local_a0;
    }
    _Dst = _Src + 0x16;
    if ((ulonglong *)_Src[0x18] != (ulonglong *)0x0) {
      _Dst = (ulonglong *)_Src[0x18];
    }
    memcpy(_Dst,_Src_00,(ulonglong)((int)local_88 + 0x1fU >> 3 & 0xfffffffc));
  }
  *(undefined4 *)(_Src + 0x1b) = local_78;
  _Src[0x1a] = local_80;
  *(undefined1 *)(_Src + 0x1c) = local_70;
  FUN_140439908();
  *(undefined4 *)(_Src + 0x1d) = 0xffffffff;
  uVar13 = *_Src;
  if ((DAT_14c950c29 == 1) && (uVar13 != 0)) {
    FUN_1456cec3c(uVar13);
  }
  uVar5 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
  uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
  uVar5 = uVar5 >> 0x10 ^ uVar5;
  if ((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) {
    local_148[0] = *_Src;
    if ((DAT_14c950c29 == 1) && (local_148[0] != 0)) {
      FUN_1456cec3c();
    }
    iVar6 = FUN_140438472(param_1,uVar5,local_148);
    if (iVar6 != -1) {
      lVar8 = *param_1;
      FUN_140439908((longlong)iVar6 * 0xf0 + lVar8 + 8);
      memmove((void *)(lVar8 + (longlong)iVar6 * 0xf0),_Src,0xe8);
      FUN_140dc4e36(param_1,iVar14);
      cVar4 = '\x01';
      goto LAB_1404395a2;
    }
  }
  cVar4 = '\0';
  iVar6 = iVar14;
LAB_1404395a2:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar4;
  }
  if (cVar4 == '\0') {
    uVar7 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
    if (uVar7 < 4) {
      iVar14 = 1;
    }
    else {
      uVar13 = (ulonglong)(uVar7 & 0xfffffffe) + 0xf;
      lVar8 = 0x3f;
      if (uVar13 != 0) {
        for (; uVar13 >> lVar8 == 0; lVar8 = lVar8 + -1) {
        }
      }
      iVar14 = 1 << ((byte)lVar8 & 0x1f);
    }
    if (((int)uVar7 < 1) || (iVar14 <= (int)param_1[9])) {
      uVar5 = (int)param_1[9] - 1U & uVar5;
      *(uint *)((longlong)_Src + 0xec) = uVar5;
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(undefined4 *)(_Src + 0x1d) =
           *(undefined4 *)
            ((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4);
      plVar12 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar12 = param_1 + 7;
      }
      *(int *)((longlong)plVar12 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar5) * 4) =
           iVar6;
    }
    else {
      *(int *)(param_1 + 9) = iVar14;
      FUN_140439c3c(param_1);
    }
  }
  *param_2 = iVar6;
  if ((local_60 ^ (ulonglong)auStack_178) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140439908 FUN_140439908 body=242 status=ok
// SIG undefined FUN_140439908(void)

void FUN_140439908(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 8);
    lVar4 = 0;
    do {
      lVar3 = *(longlong *)(lVar2 + lVar4);
      if (lVar3 != 0) {
        *(undefined4 *)(lVar3 + 0x828) = 0xffffffff;
      }
      lVar4 = lVar4 + 8;
    } while ((longlong)iVar1 * 8 != lVar4);
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_14574ac34((longlong *)(param_1 + 8),0);
  }
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x98) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 0x78) != 0) {
    FUN_1400020a8();
  }
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(longlong *)(param_1 + 0x68) != 0) {
    FUN_1400020a8();
  }
  FUN_1404399fa(param_1 + 0x28);
  if (*(longlong *)(param_1 + 0x18) != 0) {
    FUN_1400020a8();
  }
  if (*(longlong *)(param_1 + 8) != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 1404399fa FUN_1404399fa body=55 status=ok
// SIG undefined FUN_1404399fa(void)

void FUN_1404399fa(longlong *param_1)

{
  FUN_140439a32(param_1,0);
  if (param_1[4] != 0) {
    FUN_1400020a8();
  }
  if (*param_1 == 0) {
    return;
  }
  FUN_1400020a8();
  return;
}



// FUNCTION 140439a32 FUN_140439a32 body=121 status=ok
// SIG undefined FUN_140439a32(void)

void FUN_140439a32(longlong param_1,int param_2)

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



// FUNCTION 140439aac FUN_140439aac body=154 status=ok
// SIG undefined FUN_140439aac(void)

longlong FUN_140439aac(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_140439ad8;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_140439ad8:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_140439b46(param_1,param_2);
  return param_1;
}



// FUNCTION 140439b46 FUN_140439b46 body=245 status=ok
// SIG undefined FUN_140439b46(void)

undefined8 * FUN_140439b46(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *_Src;
  undefined8 *_Dst;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_140439a32(param_1,uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14482b872(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar4 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar4 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar4;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      _Src = param_2 + 2;
      if ((undefined8 *)param_2[4] != (undefined8 *)0x0) {
        _Src = (undefined8 *)param_2[4];
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,_Src,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (uVar1 != 0) {
      memcpy((void *)*param_1,(void *)*param_2,(longlong)(int)uVar1 * 0x18);
    }
  }
  return param_1;
}



// FUNCTION 140439c3c FUN_140439c3c body=674 status=ok
// SIG undefined FUN_140439c3c(void)

void FUN_140439c3c(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  byte bVar4;
  uint uVar5;
  longlong *plVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  undefined1 auStack_a8 [44];
  int local_7c;
  longlong *local_78;
  ulonglong local_70;
  ulonglong local_68;
  longlong *local_60;
  undefined8 local_58;
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar12 = *(uint *)(param_1 + 9);
  if (uVar12 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar12,4);
    if (0 < (int)uVar12) {
      uVar5 = 0;
      do {
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)((longlong)plVar6 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar5) * 4) =
             0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar12 != uVar5);
    }
    local_60 = param_1 + 2;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    local_50 = 0;
    if ((int)param_1[5] == 0) {
      uVar13 = 1;
      local_58._0_4_ = 0xffffffff;
      local_58._4_4_ = 0;
      local_68._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      uVar13 = local_68 >> 0x20;
    }
    uVar9 = (ulonglong)(uint)local_68;
    uVar12 = (uint)local_58;
    iVar10 = local_58._4_4_;
    iVar14 = local_50;
    bVar4 = DAT_14c950c29;
    plVar6 = local_60;
    if (local_58._4_4_ < (int)local_60[3]) {
      do {
        local_78 = plVar6;
        lVar15 = *param_1;
        uVar3 = *(ulonglong *)(lVar15 + (longlong)iVar10 * 0xf0);
        local_7c = iVar14;
        local_70 = uVar9;
        if (((bVar4 & 1) != 0) && (uVar3 != 0)) {
          FUN_1456cec3c(uVar3);
          bVar4 = DAT_14c950c29;
        }
        lVar15 = lVar15 + (longlong)iVar10 * 0xf0;
        uVar5 = ((uint)(uVar3 >> 0x14) & 0xffff ^ (uint)(uVar3 >> 4)) * -0x7a143595;
        uVar5 = (uVar5 >> 0xd ^ uVar5) * -0x3d4d51cb;
        uVar9 = (longlong)(int)(uVar5 >> 0x10 ^ uVar5) & (longlong)(int)param_1[9] - 1U;
        iVar14 = (int)uVar9;
        *(int *)(lVar15 + 0xec) = iVar14;
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(undefined4 *)(lVar15 + 0xe8) =
             *(undefined4 *)((longlong)plVar6 + ((longlong)(int)param_1[9] - 1U & uVar9) * 4);
        plVar6 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar6 = plVar1;
        }
        *(int *)((longlong)plVar6 + ((longlong)iVar14 & (longlong)(int)param_1[9] - 1U) * 4) =
             iVar10;
        uVar12 = uVar12 & ~(uint)uVar13;
        plVar6 = (longlong *)local_78[2];
        if ((longlong *)local_78[2] == (longlong *)0x0) {
          plVar6 = local_78;
        }
        iVar2 = (int)local_78[3];
        iVar10 = (int)local_70;
        lVar15 = (longlong)iVar10;
        uVar5 = *(uint *)((longlong)plVar6 + lVar15 * 4) & uVar12;
        uVar9 = local_70;
        iVar14 = local_7c;
        if (uVar5 == 0) {
          iVar7 = iVar2 + 0x1e;
          if (-1 < iVar2 + -1) {
            iVar7 = iVar2 + -1;
          }
          iVar7 = iVar7 >> 5;
          iVar8 = iVar7;
          if (iVar7 < iVar10) {
            iVar8 = iVar10;
          }
          if (iVar7 <= iVar10) break;
          lVar11 = 0;
          while( true ) {
            iVar14 = iVar14 + 0x20;
            uVar5 = *(uint *)((longlong)plVar6 + lVar11 * 4 + lVar15 * 4 + 4);
            if (uVar5 != 0) break;
            lVar11 = lVar11 + 1;
            if (iVar8 - lVar15 == lVar11) goto LAB_140439ea4;
          }
          uVar12 = 0xffffffff;
          uVar9 = (ulonglong)(iVar10 + (int)lVar11 + 1);
        }
        uVar13 = (ulonglong)(-uVar5 & uVar5);
        uVar3 = uVar13 * 2 + 1;
        lVar15 = 0x3f;
        if (uVar3 != 0) {
          for (; uVar3 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        iVar10 = (iVar14 - ((uint)lVar15 ^ 0x3f)) + 0x3e;
        plVar6 = local_78;
      } while (iVar10 < iVar2);
    }
  }
LAB_140439ea4:
  if ((local_48 ^ (ulonglong)auStack_a8) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 140439ee0 FUN_140439ee0 body=378 status=ok
// SIG undefined FUN_140439ee0(void)

void FUN_140439ee0(longlong param_1)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  iVar2 = *(int *)(param_1 + 0x5158);
  if (iVar2 == 0) {
    uVar9 = 0;
    uVar13 = 1;
    iVar3 = 0;
    iVar10 = 0;
  }
  else {
    puVar7 = *(uint **)(param_1 + 0x5150);
    if (*(uint **)(param_1 + 0x5150) == (uint *)0x0) {
      puVar7 = (uint *)(param_1 + 0x5140);
    }
    uVar12 = *puVar7;
    if (uVar12 == 0) {
      iVar3 = iVar2 + 0x1e;
      if (-1 < iVar2 + -1) {
        iVar3 = iVar2 + -1;
      }
      uVar9 = 0;
      uVar13 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar13 = uVar9;
      }
      iVar10 = 0;
      do {
        if (uVar13 == uVar9) {
          return;
        }
        iVar10 = iVar10 + 0x20;
        uVar12 = puVar7[uVar9 + 1];
        uVar9 = uVar9 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar9 = 0;
      iVar10 = 0;
    }
    uVar13 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar13 * 2 + 1;
    lVar11 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
  }
  if (iVar3 < iVar2) {
    uVar12 = 0xffffffff;
    do {
      FUN_14043a05a(*(undefined8 *)(*(longlong *)(param_1 + 0x5130) + (longlong)iVar3 * 8));
      uVar12 = ~(uint)uVar13 & uVar12;
      puVar7 = *(uint **)(param_1 + 0x5150);
      if (*(uint **)(param_1 + 0x5150) == (uint *)0x0) {
        puVar7 = (uint *)(param_1 + 0x5140);
      }
      iVar2 = *(int *)(param_1 + 0x5158);
      iVar3 = (int)uVar9;
      lVar11 = (longlong)iVar3;
      uVar4 = puVar7[lVar11] & uVar12;
      if (uVar4 == 0) {
        iVar5 = iVar2 + 0x1e;
        if (-1 < iVar2 + -1) {
          iVar5 = iVar2 + -1;
        }
        iVar5 = iVar5 >> 5;
        iVar6 = iVar5;
        if (iVar5 < iVar3) {
          iVar6 = iVar3;
        }
        if (iVar5 <= iVar3) {
          return;
        }
        lVar8 = 0;
        while( true ) {
          iVar10 = iVar10 + 0x20;
          uVar4 = puVar7[lVar11 + lVar8 + 1];
          if (uVar4 != 0) break;
          lVar8 = lVar8 + 1;
          if (iVar6 - lVar11 == lVar8) {
            return;
          }
        }
        uVar9 = (ulonglong)(iVar3 + (int)lVar8 + 1);
        uVar12 = 0xffffffff;
      }
      uVar13 = (ulonglong)(-uVar4 & uVar4);
      uVar1 = uVar13 * 2 + 1;
      lVar11 = 0x3f;
      if (uVar1 != 0) {
        for (; uVar1 >> lVar11 == 0; lVar11 = lVar11 + -1) {
        }
      }
      iVar3 = (iVar10 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
    } while (iVar3 < iVar2);
  }
  return;
}



// FUNCTION 14043a05a FUN_14043a05a body=368 status=ok
// SIG undefined FUN_14043a05a(void)

void FUN_14043a05a(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  if ((*(int *)(param_1 + 0x88) == 0) || (*(int *)(param_1 + 0x90) < 0)) goto LAB_14043a08c;
  if (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0xa8)) goto LAB_14043a08c;
  if (*(int *)(param_1 + 0xb4) == *(int *)(param_1 + 0xac)) goto LAB_14043a08c;
  uVar4 = 0;
  uVar3 = *(uint *)(DAT_14cb0fea0 + 4);
  if ((int)*(uint *)(DAT_14cb0fea0 + 4) < 1) {
    uVar3 = uVar4;
  }
  iVar1 = *(int *)(param_1 + 0xa0);
  if ((longlong)iVar1 < 3) {
    if (((*(int *)(param_1 + 0xa8) == 0) && (*(int *)(param_1 + 0xac) == 0)) &&
       (*(int *)(param_1 + 0xb0) == *(int *)(param_1 + 0x80))) {
      uVar4 = (uint)(*(int *)(param_1 + 0xb4) != *(int *)(param_1 + 0x84));
      goto LAB_14043a0f9;
    }
  }
  else {
LAB_14043a0f9:
    if (((char)uVar4 == '\0') && (*(char *)(param_1 + 0xb8) == '\0')) {
      FUN_14043a1ca(DAT_14ca712d8,param_1 + 0x88,*(undefined4 *)(param_1 + 0x8c),param_1 + 0xa8,
                    *(int *)(param_1 + 0x90),uVar3,0);
      goto LAB_14043a08c;
    }
  }
  if (iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x98);
    lVar5 = (longlong)iVar1 * 0x14;
    do {
      FUN_14043a1ca(DAT_14ca712d8,param_1 + 0x88,*(undefined4 *)(param_1 + 0x8c),lVar2,
                    *(undefined4 *)(param_1 + 0x90),uVar3,*(undefined1 *)(lVar2 + 0x10));
      lVar2 = lVar2 + 0x14;
      lVar5 = lVar5 + -0x14;
    } while (lVar5 != 0);
  }
LAB_14043a08c:
  if (*(int *)(param_1 + 0xa4) < 0) {
    *(undefined4 *)(param_1 + 0xa0) = 0;
    FUN_14734653a(param_1 + 0x98,0);
  }
  else {
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0xb0) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 0;
  return;
}



// FUNCTION 14043a1ca FUN_14043a1ca body=2129 status=ok
// SIG undefined FUN_14043a1ca(void)

ulonglong FUN_14043a1ca(uint *param_1,uint *param_2,int param_3,ulonglong *param_4,uint param_5,
                       uint param_6,undefined1 param_7)

{
  ulonglong *puVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  DWORD DVar5;
  uint uVar6;
  uint *puVar7;
  ulonglong uVar8;
  ulonglong *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  longlong lVar13;
  ulonglong uVar14;
  int iVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  longlong lVar23;
  int iVar24;
  ulonglong uVar25;
  bool bVar26;
  undefined1 auStack_118 [32];
  ulonglong *local_f8;
  uint local_f0;
  int local_e8;
  undefined1 local_e0;
  uint *local_d8;
  uint *local_c8;
  uint *local_c0;
  ulonglong *local_b8;
  uint *local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  uint *local_90;
  longlong local_88;
  undefined8 uStack_80;
  longlong local_78;
  undefined8 uStack_70;
  char local_61;
  ulonglong local_60;
  
  local_60 = DAT_14c707940 ^ (ulonglong)auStack_118;
  puVar7 = param_1 + 1;
  local_b0 = param_2;
  DVar5 = GetCurrentThreadId();
  uVar10 = param_1[1];
  if ((uVar10 & 1) == 0) {
    LOCK();
    uVar6 = *puVar7;
    bVar26 = uVar10 == uVar6;
    if (bVar26) {
      *puVar7 = uVar10 | 1;
      uVar6 = uVar10;
    }
    uVar10 = uVar6;
    UNLOCK();
    if (!bVar26) goto LAB_14043a22a;
    param_1[2] = DVar5;
  }
  else {
LAB_14043a22a:
    if (param_1[2] == DVar5) {
      LOCK();
      *puVar7 = *puVar7 + 4;
      UNLOCK();
    }
    else {
      FUN_1402441ea(puVar7,uVar10);
    }
  }
  uVar10 = *local_b0 & 0x3fffff;
  if (uVar10 < param_1[0x2a]) {
    lVar13 = (ulonglong)uVar10 * 0xf0;
    lVar18 = *(longlong *)(param_1 + 0x28) + lVar13;
    if ((lVar18 != 0) &&
       (*local_b0 >> 0x16 == (uint)*(ushort *)(*(longlong *)(param_1 + 0x28) + 0xec + lVar13))) {
      local_78 = 0;
      uStack_70 = 0;
      uVar8 = (ulonglong)*(byte *)(lVar18 + 0xbc);
      local_c8 = param_1;
      local_c0 = (uint *)lVar18;
      local_90 = puVar7;
      if (*(byte *)(lVar18 + 0xbc) != 0) {
        uVar25 = 0;
        do {
          lVar13 = *(longlong *)(*(longlong *)((longlong)local_c0 + 200) + uVar25 * 8);
          lVar18 = (longlong)(int)uStack_70;
          if (lVar18 != 0) {
            uVar16 = 0;
            do {
              if (*(longlong *)(local_78 + uVar16) == lVar13) {
                if ((int)(~uVar16 >> 3) != 0) goto LAB_14043a317;
                break;
              }
              uVar16 = uVar16 + 8;
            } while (lVar18 * 8 - uVar16 != 0);
          }
          uVar10 = (int)uStack_70 + 1;
          uStack_70 = CONCAT44(uStack_70._4_4_,uVar10);
          if (uStack_70._4_4_ < uVar10) {
            FUN_14083e4ca(&local_78);
          }
          *(longlong *)(local_78 + lVar18 * 8) = lVar13;
          uVar8 = (ulonglong)*(byte *)((longlong)local_c0 + 0xbc);
LAB_14043a317:
          uVar25 = uVar25 + 1;
        } while (uVar25 < uVar8);
      }
      iVar24 = *local_c8 - param_6;
      if (*local_c8 < param_6) {
        iVar24 = 0;
      }
      local_88 = 0;
      uStack_80 = 0;
      lVar13 = *(longlong *)(local_c8 + (longlong)param_3 * 2 + 0x76);
      if (lVar13 != 0) {
        lVar18 = *(longlong *)(lVar13 + 0x68);
        local_b8 = (ulonglong *)CONCAT44(local_b8._4_4_,*(int *)(lVar18 + 0xa0));
        iVar15 = (*(int *)(lVar13 + 0x70) + 1) * *(int *)(lVar18 + 0xa0);
        if (iVar15 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1456afac4(iVar15);
        }
        if (iVar15 != 0) {
          FUN_141787d32(&local_88);
          lVar18 = *(longlong *)(lVar13 + 0x68);
        }
        bVar2 = *(byte *)(lVar18 + 0x23);
        if (bVar2 <= param_5) {
          iVar15 = 1 << (bVar2 & 0x1f);
          uVar8 = *param_4;
          if ((int)local_b8 != 0) {
            uVar25 = (longlong)(iVar15 + (int)param_4[1] + -1) / (longlong)iVar15 & 0xffffffffU |
                     (longlong)((int)(param_4[1] >> 0x20) + iVar15 + -1) / (longlong)iVar15 << 0x20;
            iVar11 = 0;
            do {
              uVar16 = uStack_80;
              uVar3 = *(undefined4 *)
                       (*(longlong *)(*(longlong *)(lVar13 + 0x68) + 0x98) + (longlong)iVar11 * 8);
              lVar18 = (longlong)(int)uStack_80;
              uVar10 = (int)uStack_80 + 1;
              uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
              if (uStack_80._4_4_ < uVar10) {
                local_a8 = uVar25;
                FUN_1473432b8(&local_88,uVar16 & 0xffffffff);
                uVar25 = local_a8;
              }
              *(undefined4 *)(local_88 + lVar18 * 0x18) = uVar3;
              *(ulonglong *)(local_88 + 4 + lVar18 * 0x18) =
                   (longlong)((ulonglong)(uint)((int)uVar8 >> 0x1f) << 0x20 | uVar8 & 0xffffffff) /
                   (longlong)iVar15 & 0xffffffffU |
                   (longlong)((ulonglong)(uint)((longlong)uVar8 >> 0x3f) << 0x20 | uVar8 >> 0x20) /
                   (longlong)iVar15 << 0x20;
              *(ulonglong *)(local_88 + 0xc + lVar18 * 0x18) = uVar25;
              *(uint *)(local_88 + 0x14 + lVar18 * 0x18) = param_5 - bVar2;
              iVar11 = iVar11 + 1;
            } while ((int)local_b8 != iVar11);
          }
        }
        if ((longlong)*(int *)(lVar13 + 0x80) != 0) {
          puVar7 = *(uint **)(lVar13 + 0x78);
          puVar21 = puVar7 + (longlong)*(int *)(lVar13 + 0x80) * 4;
          do {
            if (*(longlong *)(puVar7 + 2) != 0) {
              bVar2 = *(byte *)(*(longlong *)(puVar7 + 2) + 0x23);
              if (bVar2 <= param_5) {
                uVar10 = *(uint *)(lVar13 + 0x60);
                iVar15 = *(int *)(lVar13 + 0x20);
                uVar22 = (uint)(*(int *)(lVar13 + 0xc) * *(int *)(lVar13 + 0x1c)) /
                         *(uint *)(lVar13 + 100);
                uVar6 = (uint)(*(int *)(lVar13 + 0x1c) * *(int *)(lVar13 + 8)) / uVar10;
                uVar20 = (*puVar7 % uVar10) * uVar6;
                if (((((int)*param_4 < (int)(uVar6 + iVar15 + uVar20)) &&
                     ((int)(uVar20 - iVar15) < (int)param_4[1])) &&
                    (uVar10 = (*puVar7 / uVar10) * uVar22,
                    *(int *)((longlong)param_4 + 4) < (int)(uVar22 + iVar15 + uVar10))) &&
                   ((int)(uVar10 - iVar15) < *(int *)((longlong)param_4 + 0xc))) {
                  iVar15 = 1 << (bVar2 & 0x1f);
                  if ((int)local_b8 != 0) {
                    uVar8 = (longlong)(int)((int)*param_4 - uVar20) / (longlong)iVar15 & 0xffffffffU
                            | (longlong)(int)((int)(*param_4 >> 0x20) - uVar10) / (longlong)iVar15
                              << 0x20;
                    local_a8 = (longlong)(int)(~uVar20 + (int)param_4[1] + iVar15) /
                               (longlong)iVar15 & 0xffffffffU |
                               (longlong)(int)((int)(param_4[1] >> 0x20) + iVar15 + ~uVar10) /
                               (longlong)iVar15 << 0x20;
                    iVar15 = 0;
                    do {
                      uVar3 = *(undefined4 *)
                               (*(longlong *)(*(longlong *)(puVar7 + 2) + 0x98) +
                               (longlong)iVar15 * 8);
                      lVar18 = (longlong)(int)uStack_80;
                      uVar10 = (int)uStack_80 + 1;
                      uStack_80 = CONCAT44(uStack_80._4_4_,uVar10);
                      if (uStack_80._4_4_ < uVar10) {
                        local_a0 = lVar18;
                        local_98 = uVar8;
                        FUN_1473432b8(&local_88);
                        uVar8 = local_98;
                        lVar18 = local_a0;
                      }
                      *(undefined4 *)(local_88 + lVar18 * 0x18) = uVar3;
                      *(ulonglong *)(local_88 + 4 + lVar18 * 0x18) = uVar8;
                      *(ulonglong *)(local_88 + 0xc + lVar18 * 0x18) = local_a8;
                      *(uint *)(local_88 + 0x14 + lVar18 * 0x18) = param_5 - bVar2;
                      iVar15 = iVar15 + 1;
                    } while ((int)local_b8 != iVar15);
                  }
                }
              }
            }
            puVar7 = puVar7 + 4;
          } while (puVar7 != puVar21);
        }
      }
      puVar7 = local_c8;
      local_b8 = param_4;
      if (0 < (int)uStack_70) {
        puVar21 = local_c8 + 0xf8;
        lVar13 = 0;
        do {
          lVar18 = *(longlong *)(local_78 + lVar13 * 8) + 0x48;
          if ((longlong)(int)uStack_80 == 0) {
            local_e0 = param_7;
            local_f0 = param_5;
            local_f8 = local_b8;
            local_e8 = iVar24;
            local_d8 = puVar21;
            FUN_14065caf0(lVar18,local_c8,local_b0,local_c0);
          }
          else {
            lVar17 = (longlong)(int)uStack_80 * 0x18;
            lVar23 = local_88;
            do {
              local_f0 = *(uint *)(lVar23 + 0x14);
              local_f8 = (ulonglong *)(lVar23 + 4);
              local_e0 = param_7;
              local_e8 = iVar24;
              local_d8 = puVar21;
              FUN_14065caf0(lVar18,puVar7,lVar23,local_c0);
              lVar23 = lVar23 + 0x18;
              lVar17 = lVar17 + -0x18;
            } while (lVar17 != 0);
          }
          lVar13 = lVar13 + 1;
        } while (lVar13 < (int)uStack_70);
      }
      local_c0 = local_c8 + 0xf8;
      local_b0 = local_c8 + 0xfc;
      uVar10 = local_c8[0x102];
      if (uVar10 == 0) {
        uVar8 = 1;
        uVar25 = 0;
        iVar24 = 0;
        uVar6 = 0;
      }
      else {
        puVar7 = *(uint **)(local_c8 + 0x100);
        if (*(uint **)(local_c8 + 0x100) == (uint *)0x0) {
          puVar7 = local_b0;
        }
        uVar6 = *puVar7;
        if (uVar6 == 0) {
          iVar24 = uVar10 + 0x1e;
          if (-1 < (int)(uVar10 - 1)) {
            iVar24 = uVar10 - 1;
          }
          uVar25 = 0;
          uVar8 = (ulonglong)(uint)(iVar24 >> 5);
          if (iVar24 >> 5 < 1) {
            uVar8 = uVar25;
          }
          iVar24 = 0;
          do {
            if (uVar8 == uVar25) goto LAB_14043a6f7;
            iVar24 = iVar24 + 0x20;
            uVar6 = puVar7[uVar25 + 1];
            uVar25 = uVar25 + 1;
          } while (uVar6 == 0);
        }
        else {
          uVar25 = 0;
          iVar24 = 0;
        }
        uVar8 = (ulonglong)(-uVar6 & uVar6);
        uVar16 = uVar8 * 2 + 1;
        lVar13 = 0x3f;
        if (uVar16 != 0) {
          for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
          }
        }
        uVar6 = (iVar24 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
        if ((int)uVar10 <= (int)uVar6) {
          uVar6 = uVar10;
        }
      }
      if (uVar6 != uVar10) {
        puVar7 = local_c8 + 0xe4;
        uVar20 = 0xffffffff;
        do {
          puVar1 = (ulonglong *)(*(longlong *)local_c0 + (longlong)(int)uVar6 * 0x10);
          local_61 = '\0';
          uVar4 = *(undefined8 *)(*(longlong *)local_c0 + (longlong)(int)uVar6 * 0x10);
          puVar9 = (ulonglong *)
                   FUN_14065d0da(puVar7,((uint)((ulonglong)uVar4 >> 0x20) & 0xfffffff) * 0x17 +
                                        (int)uVar4,puVar1,&local_61);
          if (local_61 == '\x01') {
            uVar14 = (ulonglong)((uint)(*puVar1 >> 0x3c) & 7);
            uVar16 = *puVar9;
            uVar19 = (ulonglong)((uint)(uVar16 >> 0x3c) & 7);
            if (uVar19 < uVar14) {
              uVar19 = uVar14;
            }
            *puVar9 = uVar16 & 0x8fffffffffffffff | uVar19 << 0x3c;
            uVar14 = uVar16 >> 0x3f;
            if (uVar16 >> 0x3f < *puVar1 >> 0x3f) {
              uVar14 = *puVar1 >> 0x3f;
            }
            *puVar9 = uVar16 & 0xfffffffffffffff | uVar19 << 0x3c | uVar14 << 0x3f;
          }
          uVar20 = uVar20 & ~(uint)uVar8;
          puVar21 = *(uint **)(local_c8 + 0x100);
          if (*(uint **)(local_c8 + 0x100) == (uint *)0x0) {
            puVar21 = local_b0;
          }
          uVar22 = local_c8[0x102];
          iVar15 = (int)uVar25;
          lVar13 = (longlong)iVar15;
          uVar6 = puVar21[lVar13] & uVar20;
          if (uVar6 == 0) {
            iVar11 = uVar22 + 0x1e;
            if (-1 < (int)(uVar22 - 1)) {
              iVar11 = uVar22 - 1;
            }
            iVar11 = iVar11 >> 5;
            iVar24 = iVar24 + 0x20;
            iVar12 = iVar11;
            if (iVar11 < iVar15) {
              iVar12 = iVar15;
            }
            if (iVar15 < iVar11) {
              lVar18 = 0;
              do {
                uVar6 = puVar21[lVar13 + lVar18 + 1];
                if (uVar6 != 0) {
                  uVar25 = (ulonglong)(iVar15 + (int)lVar18 + 1);
                  uVar20 = 0xffffffff;
                  goto LAB_14043a875;
                }
                iVar24 = iVar24 + 0x20;
                lVar18 = lVar18 + 1;
              } while (iVar12 - lVar13 != lVar18);
              uVar20 = 0xffffffff;
              iVar15 = iVar12;
            }
            uVar25 = (ulonglong)(iVar15 + 1);
            uVar6 = uVar22;
          }
          else {
LAB_14043a875:
            uVar8 = (ulonglong)(-uVar6 & uVar6);
            uVar16 = uVar8 * 2 + 1;
            lVar13 = 0x3f;
            if (uVar16 != 0) {
              for (; uVar16 >> lVar13 == 0; lVar13 = lVar13 + -1) {
              }
            }
            uVar6 = (iVar24 - ((uint)lVar13 ^ 0x3f)) + 0x3e;
            if ((int)uVar22 <= (int)uVar6) {
              uVar6 = uVar22;
            }
          }
        } while (uVar6 != uVar10);
      }
LAB_14043a6f7:
      param_1 = local_c8;
      FUN_1431239b8(local_c0);
      if (local_88 != 0) {
        FUN_1400020a8();
      }
      puVar7 = local_90;
      if (local_78 != 0) {
        FUN_1400020a8();
      }
    }
  }
  uVar10 = *puVar7;
  uVar8 = (ulonglong)uVar10;
  if (uVar10 < 4) {
    param_1[2] = 0;
    if (uVar10 < 2) {
      LOCK();
      uVar6 = *puVar7;
      if (uVar10 == uVar6) {
        *puVar7 = 0;
      }
      else {
        uVar8 = (ulonglong)uVar6;
      }
      UNLOCK();
      if (uVar10 == uVar6) goto LAB_14043a756;
    }
    uVar8 = FUN_140d366d2(puVar7);
  }
  else {
    LOCK();
    *puVar7 = *puVar7 - 4;
    UNLOCK();
  }
LAB_14043a756:
  if ((local_60 ^ (ulonglong)auStack_118) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar8;
}



// FUNCTION 14043aa1e FUN_14043aa1e body=118 status=ok
// SIG undefined FUN_14043aa1e(void)

undefined8 FUN_14043aa1e(undefined8 param_1,longlong param_2)

{
  undefined1 auStack_58 [40];
  longlong local_30;
  code *local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_58;
  *(undefined4 *)(param_2 + 8) = 0;
  if (*(int *)(param_2 + 0xc) != 0) {
    FUN_14798b44a(param_2,0);
  }
  local_20 = &local_30;
  local_28 = FUN_14341af62;
  local_30 = param_2;
  FUN_14043aa96(param_1);
  if ((local_18 ^ (ulonglong)auStack_58) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043aa96 FUN_14043aa96 body=129 status=ok
// SIG undefined FUN_14043aa96(void)

undefined8 FUN_14043aa96(longlong param_1,undefined8 *param_2)

{
  char cVar1;
  longlong lVar2;
  undefined1 auStack_48 [32];
  longlong local_28;
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if (param_1 != 0) {
    while( true ) {
      lVar2 = FUN_14043ab18();
      if ((*(int *)(*(longlong *)(param_1 + 0x10) + 0x38) < *(int *)(lVar2 + 0x38)) ||
         (*(longlong *)
           (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x30) +
           (longlong)*(int *)(lVar2 + 0x38) * 8) != lVar2 + 0x30)) break;
      local_28 = param_1;
      cVar1 = (*(code *)*param_2)(param_2[1],&local_28);
      if ((cVar1 == '\0') || (param_1 = *(longlong *)(param_1 + 0x40), param_1 == 0)) break;
    }
  }
  if ((local_20 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043ab18 FUN_14043ab18 body=228 status=ok
// SIG undefined FUN_14043ab18(void)

longlong FUN_14043ab18(void)

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
  undefined1 *local_20;
  code *local_10;
  ulonglong local_8;
  
  local_8 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if (DAT_14cace918 == 0) {
    local_30 = &local_10;
    local_10 = FUN_140631fbe;
    local_20 = &LAB_145834656;
    local_28 = &LAB_146272d4c;
    local_38 = &LAB_14797d5fb;
    local_40 = &LAB_14094d833;
    local_48 = L"Engine";
    local_50 = 0;
    local_58 = 0x10000000;
    local_60 = 8;
    local_68 = 0x3b0;
    FUN_14081cfa3(L"/Script/Engine",L"BlueprintGeneratedClass",&DAT_14cace918,&DAT_14797d5fa);
  }
  if ((local_8 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return DAT_14cace918;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043abfe FUN_14043abfe body=696 status=ok
// SIG undefined FUN_14043abfe(void)

undefined8 FUN_14043abfe(longlong param_1,longlong param_2,longlong *param_3)

{
  char cVar1;
  int iVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  wchar_t *pwVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  undefined1 auStack_88 [40];
  undefined2 *local_60;
  int local_58;
  undefined2 *local_50;
  int local_48;
  longlong local_40;
  undefined8 local_38;
  ulonglong local_30;
  
  local_30 = DAT_14c707940 ^ (ulonglong)auStack_88;
  cVar1 = FUN_14043aeb8();
  if (cVar1 == '\0') {
LAB_14043ac2a:
    uVar7 = 0;
  }
  else {
    plVar3 = (longlong *)FUN_14092a406(param_1);
    plVar4 = (longlong *)FUN_14092a406(param_2);
    if ((plVar3 == (longlong *)0x0) || (plVar4 == (longlong *)0x0)) {
      if (plVar3 != (longlong *)0x0 || plVar4 != (longlong *)0x0) {
        if (param_3 != (longlong *)0x0) {
          pwVar9 = L"Only one spawner specifies an ActorDef, must be both or neither";
LAB_14043adc6:
          FUN_14020fad6(param_3,pwVar9);
        }
        goto LAB_14043ac2a;
      }
    }
    else {
      lVar5 = *(longlong *)(param_1 + 0xbc8);
      if (((lVar5 == 0) || (lVar5 != *(longlong *)(param_2 + 0xbc8))) ||
         (*(char *)(lVar5 + 0x461) == '\0')) {
        lVar5 = (**(code **)(*plVar3 + 0x78))(plVar3);
        lVar6 = (**(code **)(*plVar4 + 0x78))(plVar4);
        if (lVar5 != 0 && lVar6 != 0) {
          iVar2 = FUN_1449029b8(lVar5,lVar6);
          if (iVar2 == 0) {
            iVar2 = FUN_1449029b8(lVar6,lVar5);
            if ((param_3 != (longlong *)0x0) && (iVar2 != 0)) {
              puVar8 = *(undefined4 **)(lVar5 + 8);
              if (puVar8 == (undefined4 *)0x0) {
                puVar8 = &DAT_14c9485f0;
              }
              FUN_141710b0e(puVar8,&local_50,1);
              puVar10 = &DAT_149dfb77a;
              if (local_48 != 0) {
                puVar10 = local_50;
              }
              puVar8 = &DAT_14c9485f0;
              if (*(undefined4 **)(lVar6 + 8) != (undefined4 *)0x0) {
                puVar8 = *(undefined4 **)(lVar6 + 8);
              }
              FUN_141710b0e(puVar8,&local_60,1);
              puVar11 = &DAT_149dfb77a;
              if (local_58 != 0) {
                puVar11 = local_60;
              }
              FUN_140002266(&local_40,L"Team \'%s\' isn\'t friendly toward Team \'%s\'",puVar11,
                            puVar10);
              if (&local_40 != param_3) goto LAB_14043ad5b;
LAB_14043ae9f:
              if (local_40 != 0) {
                FUN_1400020a8();
              }
              goto LAB_14043ad8a;
            }
            if (iVar2 == 0) goto LAB_14043adef;
          }
          else if (param_3 != (longlong *)0x0) {
            puVar8 = *(undefined4 **)(lVar6 + 8);
            if (puVar8 == (undefined4 *)0x0) {
              puVar8 = &DAT_14c9485f0;
            }
            FUN_141710b0e(puVar8,&local_50,1);
            puVar10 = &DAT_149dfb77a;
            if (local_48 != 0) {
              puVar10 = local_50;
            }
            puVar8 = &DAT_14c9485f0;
            if (*(undefined4 **)(lVar5 + 8) != (undefined4 *)0x0) {
              puVar8 = *(undefined4 **)(lVar5 + 8);
            }
            FUN_141710b0e(puVar8,&local_60,1);
            puVar11 = &DAT_149dfb77a;
            if (local_58 != 0) {
              puVar11 = local_60;
            }
            FUN_140002266(&local_40,L"Team \'%s\' isn\'t friendly toward Team \'%s\'",puVar11,
                          puVar10);
            if (&local_40 == param_3) goto LAB_14043ae9f;
LAB_14043ad5b:
            if (*param_3 != 0) {
              FUN_1400020a8();
            }
            *param_3 = local_40;
            local_40 = 0;
            *(undefined4 *)(param_3 + 1) = (undefined4)local_38;
            *(undefined4 *)((longlong)param_3 + 0xc) = local_38._4_4_;
            local_38 = 0;
LAB_14043ad8a:
            if (local_60 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
            if (local_50 != (undefined2 *)0x0) {
              FUN_1400020a8();
            }
          }
          goto LAB_14043ac2a;
        }
        if (lVar5 != 0 || lVar6 != 0) {
          if (param_3 != (longlong *)0x0) {
            pwVar9 = 
            L"Only one spawner specifies an ActorDef with a TeamDef, must be both or neither";
            goto LAB_14043adc6;
          }
          goto LAB_14043ac2a;
        }
      }
    }
LAB_14043adef:
    uVar7 = 1;
  }
  if ((local_30 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar7;
}



// FUNCTION 14043aeb8 FUN_14043aeb8 body=1294 status=ok
// SIG undefined FUN_14043aeb8(void)

ulonglong FUN_14043aeb8(longlong param_1,double *param_2,undefined8 *param_3)

{
  float fVar1;
  byte bVar2;
  double dVar3;
  longlong lVar4;
  longlong *plVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  char cVar10;
  char cVar11;
  double dVar12;
  longlong lVar13;
  wchar_t *pwVar14;
  undefined8 unaff_RDI;
  ulonglong uVar15;
  longlong lVar16;
  longlong lVar17;
  undefined1 auStack_108 [40];
  longlong local_e0;
  double local_d8;
  double dStack_d0;
  double local_c8;
  float local_bc;
  undefined1 local_b8 [24];
  ulonglong local_a0;
  
  local_a0 = DAT_14c707940 ^ (ulonglong)auStack_108;
  dVar12 = *(double *)(param_1 + 0xbc8);
  dVar3 = param_2[0x179];
  if (dVar12 == 0.0 && dVar3 == 0.0) {
    if (*(int *)(param_1 + 0x950) == 1) {
      if (param_3 != (undefined8 *)0x0) {
        pwVar14 = L"SpawnerGrouping is disabled on first spawner";
LAB_14043b3a8:
        FUN_14020fad6(param_3,pwVar14);
      }
    }
    else if (*(int *)(param_2 + 0x12a) == 1) {
      if (param_3 != (undefined8 *)0x0) {
        pwVar14 = L"SpawnerGrouping is disabled on other spawner";
        goto LAB_14043b3a8;
      }
    }
    else {
      cVar10 = FUN_14043b3c8(param_1,param_2);
      if (cVar10 == '\0') {
        cVar10 = FUN_14043b3c8(param_2,param_1);
        if (cVar10 == '\0') {
          dVar12 = *(double *)(param_1 + 0x260);
          dVar3 = *(double *)(param_1 + 0x268);
          dVar6 = *(double *)(param_1 + 0x270);
          dVar7 = param_2[0x4c];
          dVar8 = param_2[0x4d];
          lVar13 = 0x850;
          if (*(char *)(param_1 + 0x978) != '\0') {
            lVar13 = 0x958;
          }
          dVar9 = param_2[0x4e];
          cVar10 = *(char *)(param_2 + 0x12f);
          bVar2 = *(byte *)(param_1 + lVar13);
          if ((bVar2 == 0) || (bVar2 == 3)) {
            if (*(char *)(param_1 + 8 + lVar13) == '\x01') {
              fVar1 = *(float *)(param_1 + 4 + lVar13);
              if (((double)(fVar1 * fVar1) <
                   (dVar7 - dVar12) * (dVar7 - dVar12) + (dVar8 - dVar3) * (dVar8 - dVar3)) ||
                 ((double)*(float *)(param_1 + 0xc + lVar13) < ABS(dVar6 - dVar9)))
              goto LAB_14043b07d;
            }
            else {
              fVar1 = *(float *)(param_1 + 4 + lVar13);
              if (fVar1 * fVar1 <
                  (float)((dVar6 - dVar9) * (dVar6 - dVar9) +
                         (dVar12 - dVar7) * (dVar12 - dVar7) + (dVar3 - dVar8) * (dVar3 - dVar8))) {
LAB_14043b07d:
                if ((bVar2 | 2) == 3) goto LAB_14043b155;
                goto LAB_14043b089;
              }
            }
            goto LAB_14043b1fc;
          }
          if (bVar2 == 1) {
LAB_14043b155:
            lVar17 = (longlong)*(int *)(param_1 + 0x18 + lVar13);
            if (lVar17 != 0) {
              lVar13 = *(longlong *)(param_1 + 0x10 + lVar13);
              lVar16 = 0;
              do {
                if ((((*(longlong *)(lVar13 + lVar16) != 0) &&
                     (plVar5 = *(longlong **)(*(longlong *)(lVar13 + lVar16) + 0x3a8),
                     local_d8 = dVar7, dStack_d0 = dVar8, local_c8 = dVar9,
                     plVar5 != (longlong *)0x0)) &&
                    (local_e0 = lVar13,
                    cVar11 = (**(code **)(*plVar5 + 0x7c0))(plVar5,&local_d8,&local_bc),
                    lVar13 = local_e0, cVar11 != '\0')) && ((0.0 <= local_bc && (local_bc <= 0.0))))
                goto LAB_14043b1fc;
                lVar16 = lVar16 + 8;
              } while (lVar17 * 8 != lVar16);
            }
          }
LAB_14043b089:
          lVar13 = 0x850;
          if (cVar10 != '\0') {
            lVar13 = 0x958;
          }
          bVar2 = *(byte *)((longlong)param_2 + lVar13);
          if ((bVar2 == 0) || (bVar2 == 3)) {
            if (*(char *)((longlong)param_2 + lVar13 + 8) == '\x01') {
              fVar1 = *(float *)((longlong)param_2 + lVar13 + 4);
              if (((double)(fVar1 * fVar1) <
                   (dVar12 - dVar7) * (dVar12 - dVar7) + (dVar3 - dVar8) * (dVar3 - dVar8)) ||
                 ((double)*(float *)((longlong)param_2 + lVar13 + 0xc) < ABS(dVar9 - dVar6)))
              goto LAB_14043b0f8;
            }
            else {
              fVar1 = *(float *)((longlong)param_2 + lVar13 + 4);
              if (fVar1 * fVar1 <
                  (float)((dVar9 - dVar6) * (dVar9 - dVar6) +
                         (dVar7 - dVar12) * (dVar7 - dVar12) + (dVar8 - dVar3) * (dVar8 - dVar3))) {
LAB_14043b0f8:
                if ((bVar2 | 2) == 3) goto LAB_14043b247;
                goto LAB_14043b104;
              }
            }
LAB_14043b1fc:
            uVar15 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
            if (param_3 != (undefined8 *)0x0) {
              *(undefined4 *)(param_3 + 1) = 0;
              if (*(int *)((longlong)param_3 + 0xc) < 0) {
                FUN_1446f8c06(param_3,0);
              }
              if ((undefined2 *)*param_3 != (undefined2 *)0x0) {
                *(undefined2 *)*param_3 = 0;
              }
            }
            goto LAB_14043af4b;
          }
          if (bVar2 == 1) {
LAB_14043b247:
            lVar17 = (longlong)*(int *)((longlong)param_2 + lVar13 + 0x18);
            if (lVar17 != 0) {
              lVar13 = *(longlong *)((longlong)param_2 + lVar13 + 0x10);
              lVar16 = 0;
              param_2 = &local_d8;
              do {
                lVar4 = *(longlong *)(lVar13 + lVar16);
                if ((((lVar4 != 0) &&
                     (plVar5 = *(longlong **)(lVar4 + 0x3a8), local_d8 = dVar12, dStack_d0 = dVar3,
                     local_c8 = dVar6, plVar5 != (longlong *)0x0)) &&
                    (cVar10 = (**(code **)(*plVar5 + 0x7c0))(plVar5,param_2,&local_bc,local_b8),
                    cVar10 != '\0')) && ((0.0 <= local_bc && (local_bc <= 0.0))))
                goto LAB_14043b1fc;
                lVar16 = lVar16 + 8;
              } while (lVar17 * 8 != lVar16);
            }
          }
LAB_14043b104:
          if (param_3 != (undefined8 *)0x0) {
            pwVar14 = L"Activation areas don\'t overlap";
            goto LAB_14043b3a8;
          }
        }
        else if (param_3 != (undefined8 *)0x0) {
          pwVar14 = L"Other spawner\'s GroupExclusions manually excludes this spawner";
          goto LAB_14043b3a8;
        }
      }
      else if (param_3 != (undefined8 *)0x0) {
        pwVar14 = L"GroupExclusions manually excludes other spawner";
        goto LAB_14043b3a8;
      }
    }
  }
  else {
    if ((dVar3 != 0.0 & DAT_14c950c29) == 1) {
      FUN_1456cec3c(dVar3);
      dVar12 = *(double *)(param_1 + 0xbc8);
    }
    if (dVar12 == dVar3) {
      uVar15 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      goto LAB_14043af4b;
    }
    if (param_3 != (undefined8 *)0x0) {
      pwVar14 = L"Spawners are in different Encounters";
      goto LAB_14043b3a8;
    }
  }
  uVar15 = 0;
LAB_14043af4b:
  if ((local_a0 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar15 & 0xffffffff;
}



// FUNCTION 14043b3c8 FUN_14043b3c8 body=679 status=ok
// SIG undefined FUN_14043b3c8(void)

bool FUN_14043b3c8(longlong param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint *puVar10;
  longlong lVar11;
  bool bVar12;
  undefined1 auStack_68 [32];
  longlong local_48;
  longlong *local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_68;
  FUN_1448c1924(param_2,&local_48);
  if (local_40 != (longlong *)0x0) {
    LOCK();
    plVar6 = local_40 + 1;
    *(int *)plVar6 = (int)*plVar6 + -1;
    UNLOCK();
    if ((int)*plVar6 == 0) {
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
  if ((local_48 != 0) && (*(int *)(local_48 + 0x108) != 0)) {
    uVar5 = *(uint *)(local_48 + 0x104);
    bVar12 = false;
    if (((int)uVar5 < 0) || (DAT_14c9647dc <= (int)uVar5)) goto LAB_14043b470;
    plVar6 = (longlong *)
             ((ulonglong)((uVar5 & 0xffff) * 0x18) +
             *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8));
    if ((((plVar6 != (longlong *)0x0) && ((int)plVar6[2] == *(int *)(local_48 + 0x108))) &&
        ((*(uint *)(plVar6 + 1) & 0x10200000) == 0)) &&
       ((lVar2 = *plVar6, lVar2 != 0 && ((longlong)*(int *)(param_1 + 0x988) != 0)))) {
      puVar10 = *(uint **)(param_1 + 0x980);
      lVar11 = (longlong)*(int *)(param_1 + 0x988) * 0x28;
      do {
        lVar11 = lVar11 + -0x28;
        if ((((puVar10[1] == 0) || (uVar5 = *puVar10, (int)uVar5 < 0)) ||
            ((DAT_14c9647dc <= (int)uVar5 ||
             (((plVar6 = (longlong *)
                         ((ulonglong)((uVar5 & 0xffff) * 0x18) +
                         *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8)),
               plVar6 == (longlong *)0x0 || (*(uint *)(plVar6 + 2) != puVar10[1])) ||
              ((*(uint *)(plVar6 + 1) & 0x10200000) != 0)))))) || (lVar8 = *plVar6, lVar8 == 0)) {
          if (*(longlong *)(puVar10 + 2) != 0) {
            lVar8 = FUN_140007850();
            cVar4 = (*(code *)PTR_FUN_14c758760)();
            if ((lVar8 == 0) || (cVar4 == '\0')) {
              if (lVar8 == 0) {
                puVar10[0] = 0;
                puVar10[1] = 0;
                goto LAB_14043b5ba;
              }
              uVar5 = *(uint *)(lVar8 + 0xc);
              *puVar10 = uVar5;
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              uVar5 = *(uint *)(lVar7 + 0x10);
              if (*(uint *)(lVar7 + 0x10) == 0) {
                LOCK();
                iVar3 = DAT_14c964868 + 1;
                UNLOCK();
                uVar9 = DAT_14c964868 + 1;
                bVar12 = DAT_14c964868 < 1000;
                DAT_14c964868 = iVar3;
                if (bVar12) {
                  FUN_140033559(".\\Runtime/CoreUObject/Private/UObject/UObjectArray.cpp",0x23d,
                                L"UObject serial numbers overflowed (trying to allocate serial number %d)."
                                ,uVar9);
                }
                LOCK();
                uVar5 = *(uint *)(lVar7 + 0x10);
                bVar12 = uVar5 == 0;
                if (bVar12) {
                  *(uint *)(lVar7 + 0x10) = uVar9;
                  uVar5 = 0;
                }
                UNLOCK();
                if (bVar12) {
                  uVar5 = uVar9;
                }
              }
              puVar10[1] = uVar5;
            }
            else {
              uVar5 = *(uint *)(lVar8 + 0xc);
              if ((int)uVar5 < DAT_14c9647dc) {
                lVar7 = (ulonglong)((uVar5 & 0xffff) * 0x18) +
                        *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar5 >> 0x10) * 8);
              }
              else {
                lVar7 = 0;
              }
              if ((*(uint *)(lVar7 + 8) & 0x8400000) == 0) {
                FUN_14485c47a(puVar10,lVar8);
              }
            }
            if ((*(uint *)(lVar8 + 8) >> 0x1e & 1) == 0) goto LAB_14043b4f6;
          }
LAB_14043b5ba:
          lVar8 = 0;
        }
        else {
LAB_14043b4f6:
          lVar7 = FUN_140929c72();
          if ((*(int *)(*(longlong *)(lVar8 + 0x10) + 0x38) < *(int *)(lVar7 + 0x38)) ||
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar8 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar7 + 0x38) * 8) != lVar7 + 0x30)) goto LAB_14043b5ba;
        }
        bVar12 = lVar8 == lVar2;
      } while ((!bVar12) && (puVar10 = puVar10 + 10, lVar11 != 0));
      goto LAB_14043b470;
    }
  }
  bVar12 = false;
LAB_14043b470:
  if ((local_38 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return bVar12;
}



// FUNCTION 14043b670 FUN_14043b670 body=105 status=ok
// SIG undefined FUN_14043b670(void)

undefined1 FUN_14043b670(undefined8 param_1,longlong param_2,longlong param_3,int param_4)

{
  for (; param_4 != 0; param_4 = param_4 + -1) {
    FUN_1402ae190(param_2,param_3);
    FUN_14043b6da(param_2 + 0x88,param_3 + 0x88);
    param_3 = param_3 + 0xd8;
    param_2 = param_2 + 0xd8;
  }
  return 1;
}



// FUNCTION 14043b6da FUN_14043b6da body=154 status=ok
// SIG undefined FUN_14043b6da(void)

longlong FUN_14043b6da(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  int iVar2;
  void *_Dst;
  void *_Src;
  
  if (param_1 == param_2) {
    return param_1;
  }
  iVar2 = *(int *)(param_2 + 0x48);
  plVar1 = (longlong *)(param_1 + 0x40);
  if ((ulonglong)(longlong)iVar2 < 2) {
    if (*plVar1 != 0) {
      FUN_1446efa72(plVar1,0,0,4);
    }
    if (iVar2 == 0) goto LAB_14043b72f;
  }
  else {
    FUN_1446efa72(plVar1,0,iVar2,4);
  }
  _Dst = (void *)(param_1 + 0x38);
  if ((void *)*plVar1 != (void *)0x0) {
    _Dst = (void *)*plVar1;
  }
  _Src = (void *)(param_2 + 0x38);
  if (*(void **)(param_2 + 0x40) != (void *)0x0) {
    _Src = *(void **)(param_2 + 0x40);
  }
  memcpy(_Dst,_Src,(longlong)iVar2 << 2);
LAB_14043b72f:
  *(int *)(param_1 + 0x48) = iVar2;
  FUN_14043b774(param_1,param_2);
  return param_1;
}



// FUNCTION 14043b774 FUN_14043b774 body=344 status=ok
// SIG undefined FUN_14043b774(void)

undefined8 * FUN_14043b774(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined4 *puVar7;
  undefined8 *_Dst;
  undefined4 *puVar8;
  
  if (param_1 != param_2) {
    uVar1 = *(uint *)(param_2 + 1);
    FUN_1403aee50(param_1,(ulonglong)uVar1);
    iVar2 = *(int *)(param_1 + 1);
    *(uint *)(param_1 + 1) = iVar2 + uVar1;
    if ((uint)(*(int *)((longlong)param_1 + 0xc) - iVar2) < uVar1) {
      FUN_14021b4e8(param_1);
    }
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    *(undefined4 *)((longlong)param_1 + 0x34) = *(undefined4 *)((longlong)param_2 + 0x34);
    uVar3 = *(int *)(param_2 + 5) + 0x1fU & 0xffffffe0;
    *(undefined4 *)(param_1 + 5) = 0;
    if ((*(int *)((longlong)param_1 + 0x2c) < (int)uVar3) ||
       (0x80 < *(int *)((longlong)param_1 + 0x2c))) {
      uVar5 = 0x80;
      if (0x80 < (int)uVar3) {
        uVar5 = uVar3;
      }
      *(uint *)((longlong)param_1 + 0x2c) = uVar5;
      FUN_1446efbd8(param_1 + 2,0);
    }
    iVar2 = *(int *)(param_2 + 5);
    *(int *)(param_1 + 5) = iVar2;
    if (iVar2 != 0) {
      puVar4 = (undefined8 *)param_2[4];
      if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
        puVar4 = param_2 + 2;
      }
      _Dst = param_1 + 2;
      if ((undefined8 *)param_1[4] != (undefined8 *)0x0) {
        _Dst = (undefined8 *)param_1[4];
      }
      memcpy(_Dst,puVar4,(ulonglong)(iVar2 + 0x1fU >> 3 & 0xfffffffc));
    }
    if (0 < (int)uVar1) {
      puVar7 = (undefined4 *)*param_1;
      puVar8 = (undefined4 *)*param_2;
      uVar6 = 0;
      do {
        puVar4 = (undefined8 *)param_2[4];
        if ((undefined8 *)param_2[4] == (undefined8 *)0x0) {
          puVar4 = param_2 + 2;
        }
        if ((*(uint *)((longlong)puVar4 + (uVar6 >> 5 & 0x7ffffff) * 4) >> ((uint)uVar6 & 0x1f) & 1)
            == 0) {
          *puVar7 = *puVar8;
          puVar7[1] = puVar8[1];
        }
        else {
          FUN_14043b8cc(puVar7,puVar8);
          *(undefined8 *)(puVar7 + 0x10) = *(undefined8 *)(puVar8 + 0x10);
        }
        uVar6 = uVar6 + 1;
        puVar8 = puVar8 + 0x12;
        puVar7 = puVar7 + 0x12;
      } while (uVar1 != uVar6);
    }
  }
  return param_1;
}



// FUNCTION 14043b8cc FUN_14043b8cc body=186 status=ok
// SIG undefined FUN_14043b8cc(void)

undefined8 * FUN_14043b8cc(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  void *pvVar2;
  
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = *param_2;
  param_1[2] = 0;
  iVar1 = *(int *)(param_2 + 3);
  pvVar2 = (void *)param_2[2];
  *(int *)(param_1 + 3) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x1c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 2,iVar1,0);
    memcpy((void *)param_1[2],pvVar2,(longlong)iVar1);
  }
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  param_1[4] = param_2[4];
  param_1[6] = 0;
  iVar1 = *(int *)(param_2 + 7);
  pvVar2 = (void *)param_2[6];
  *(int *)(param_1 + 7) = iVar1;
  if ((longlong)iVar1 == 0) {
    *(undefined4 *)((longlong)param_1 + 0x3c) = 0;
  }
  else {
    FUN_1447a127e(param_1 + 6,iVar1,0);
    memcpy((void *)param_1[6],pvVar2,(longlong)iVar1);
  }
  return param_1;
}



// FUNCTION 14043b986 FUN_14043b986 body=81 status=ok
// SIG undefined FUN_14043b986(void)

void FUN_14043b986(longlong *param_1)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)param_1[0xd0a];
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0xf20))(plVar1,0,0);
  }
  *(byte *)(param_1 + 0xaa) = *(byte *)(param_1 + 0xaa) & 0xf7;
  (**(code **)(*param_1 + 0x808))(param_1);
  if (param_1[0x23d] != 0) {
    *(undefined4 *)(param_1[0x23d] + 0x2bd4) = 0xbf800000;
  }
  return;
}



// FUNCTION 14043b9d8 FUN_14043b9d8 body=165 status=ok
// SIG undefined FUN_14043b9d8(void)

void FUN_14043b9d8(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  char cVar3;
  
  lVar1 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar1 != 0) {
    cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xf0))(lVar1 + 0x178);
    if (cVar3 != '\0') {
      cVar3 = FUN_14043bad4(param_1 + 0x81a0);
      if (cVar3 != '\0') {
        uVar2 = *(undefined8 *)(param_1 + 0x568);
        FUN_14043ba7e(param_1);
        *(undefined8 *)(param_1 + 0x568) = uVar2;
        goto LAB_14043ba0d;
      }
    }
  }
  FUN_14043ba7e(param_1);
LAB_14043ba0d:
  lVar1 = *(longlong *)(&DAT_00006850 + param_1);
  if (lVar1 != 0) {
    cVar3 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xd8))(lVar1 + 0x178);
    if (cVar3 == '\0') {
                    /* WARNING: Could not recover jumptable at 0x00014043ba4a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(longlong **)(&DAT_00006850 + param_1) + 0xf18))
                (*(longlong **)(&DAT_00006850 + param_1),0);
      return;
    }
  }
  return;
}



// FUNCTION 14043ba7e FUN_14043ba7e body=86 status=ok
// SIG undefined FUN_14043ba7e(void)

void FUN_14043ba7e(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  
  *(byte *)(param_1 + 0x550) = *(byte *)(param_1 + 0x550) & 0xf7;
  *(byte *)(param_1 + 0x551) = *(byte *)(param_1 + 0x551) & 0xf7;
  *(undefined8 *)(param_1 + 0x554) = 0;
  lVar1 = *(longlong *)(param_1 + 0x430);
  if (lVar1 != 0) {
    cVar2 = (**(code **)(*(longlong *)(lVar1 + 0x178) + 0xd8))(lVar1 + 0x178);
    if (cVar2 == '\0') {
      *(undefined8 *)(param_1 + 0x568) = 0;
    }
  }
  return;
}



// FUNCTION 14043bad4 FUN_14043bad4 body=230 status=ok
// SIG undefined FUN_14043bad4(void)

undefined8 FUN_14043bad4(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  if (((((*(int *)(param_1 + 0xc) != 0) && (uVar1 = *(uint *)(param_1 + 8), -1 < (int)uVar1)) &&
       ((int)uVar1 < DAT_14c9647dc)) &&
      ((plVar3 = (longlong *)
                 ((ulonglong)((uVar1 & 0xffff) * 0x18) +
                 *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar1 >> 0x10) * 8)),
       plVar3 != (longlong *)0x0 && ((int)plVar3[2] == *(int *)(param_1 + 0xc))))) &&
     ((*(uint *)(plVar3 + 1) & 0x10200000) == 0)) {
    if ((*(uint *)(plVar3 + 1) & 0x10200000) == 0) {
      lVar4 = *plVar3;
    }
    else {
      lVar4 = 0;
    }
    lVar4 = *(longlong *)(lVar4 + 0x430);
    if (lVar4 != 0) {
      lVar2 = FUN_140993a2e();
      if ((*(int *)(lVar2 + 0x38) <= *(int *)(*(longlong *)(lVar4 + 0x10) + 0x38)) &&
         (*(longlong *)
           (*(longlong *)(*(longlong *)(lVar4 + 0x10) + 0x30) + (longlong)*(int *)(lVar2 + 0x38) * 8
           ) == lVar2 + 0x30)) {
        lVar2 = lVar4 + 0x1110;
        if (*(longlong *)(lVar4 + 0x1140) != 0) {
          lVar2 = *(longlong *)(lVar4 + 0x1140);
        }
        if ((longlong)*(int *)(lVar4 + 0x1148) != 0) {
          lVar4 = (longlong)*(int *)(lVar4 + 0x1148) * 0xc;
          do {
            if (*(longlong *)(lVar2 + 4) == DAT_14cb857e8) {
              if (lVar2 == 0) {
                return 0;
              }
              return CONCAT71((int7)((ulonglong)lVar2 >> 8),1);
            }
            lVar2 = lVar2 + 0xc;
            lVar4 = lVar4 + -0xc;
          } while (lVar4 != 0);
        }
      }
    }
  }
  return 0;
}



// FUNCTION 14043bbba FUN_14043bbba body=1485 status=ok
// SIG undefined FUN_14043bbba(void)

longlong *
FUN_14043bbba(longlong param_1,longlong *param_2,uint param_3,longlong *param_4,char *param_5)

{
  uint *puVar1;
  undefined4 uVar2;
  longlong *plVar3;
  ulonglong *puVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  int iVar11;
  uint uVar12;
  longlong *plVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  longlong lVar18;
  longlong lVar19;
  longlong lVar20;
  uint uVar21;
  ulonglong uVar22;
  undefined1 auStack_b8 [32];
  longlong local_98;
  longlong *local_90;
  uint local_88;
  uint local_84;
  longlong *local_80;
  ulonglong local_78;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  longlong local_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  lVar18 = *(longlong *)(param_1 + 0x2c8);
  local_90 = param_2;
  local_80 = param_4;
  local_58 = param_1;
  if (param_3 == 0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  else {
    lVar20 = *(longlong *)(lVar18 + 0x38);
    uVar12 = *(uint *)(lVar20 + 0x18);
    *(uint *)(lVar20 + 0x18) = uVar12 + param_3;
    iVar11 = *(int *)(lVar20 + 0x10);
    if ((longlong)iVar11 != 0) {
      lVar20 = *(longlong *)(lVar20 + 8);
      lVar19 = 0;
      do {
        plVar13 = *(longlong **)(lVar20 + lVar19);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 8))(plVar13,uVar12 + param_3);
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar11 * 8 != lVar19);
    }
    *local_90 = 0;
    local_90[1] = 0;
    *(uint *)(local_90 + 1) = param_3;
    FUN_14043c6b4(local_90,0);
    uVar14 = *(uint *)(lVar18 + 0x6e8);
    *(uint *)(lVar18 + 0x6e8) = uVar14 + param_3;
    iVar11 = *(int *)(lVar18 + 0x6e0);
    if ((longlong)iVar11 != 0) {
      lVar20 = *(longlong *)(lVar18 + 0x6d8);
      lVar19 = 0;
      do {
        plVar13 = *(longlong **)(lVar20 + lVar19);
        if (plVar13 != (longlong *)0x0) {
          (**(code **)(*plVar13 + 8))(plVar13,uVar14 + param_3);
        }
        lVar19 = lVar19 + 8;
      } while ((longlong)iVar11 * 8 != lVar19);
    }
    if (0 < (int)param_3) {
      local_60 = (ulonglong)param_3;
      local_68 = (longlong)(int)uVar14 * 8;
      lVar20 = (longlong)(int)uVar12 << 0x20;
      local_70 = (ulonglong)uVar12;
      local_78 = (ulonglong)uVar14;
      uVar22 = 0;
      plVar13 = local_80;
      do {
        local_50._4_4_ = 0x10000;
        lVar19 = *(longlong *)(lVar18 + 0x38);
        plVar6 = (longlong *)FUN_14001cc68(0x18,0x10);
        local_98 = (longlong)&local_50 + 4;
        FUN_1403f4226(plVar6,lVar19,(int)local_70 + (int)uVar22);
        *plVar6 = lVar19;
        *(longlong **)(*(longlong *)(lVar19 + 0x98) + (lVar20 >> 0x1d)) = plVar6;
        uVar14 = *(uint *)(lVar18 + 0x710);
        iVar11 = uVar14 + 1;
        *(int *)(lVar18 + 0x710) = iVar11;
        if (iVar11 != 0) {
          *(ulonglong *)(*(longlong *)(*plVar6 + 0x260) + (longlong)(int)plVar6[1] * 8) =
               (ulonglong)uVar14 << 0x20 | 0xffffffff;
        }
        puVar1 = (uint *)(*(longlong *)(*plVar6 + 0x248) + (longlong)(int)plVar6[1] * 4);
        *puVar1 = *puVar1 | *(uint *)(*(longlong *)(lVar18 + 0x38) + 0x74);
        *(longlong **)(*local_90 + uVar22 * 8) = plVar6;
        plVar3 = *(longlong **)(*local_90 + uVar22 * 8);
        plVar7 = plVar13;
        if (local_80 == (longlong *)0x0) {
          (**(code **)(**(longlong **)(lVar18 + 0x708) + 8))
                    (*(longlong **)(lVar18 + 0x708),&local_50);
          plVar7 = &local_50;
        }
        *(int *)(*(longlong *)(*plVar3 + 0x80) + (longlong)(int)plVar3[1] * 4) = (int)*plVar7;
        lVar8 = *(longlong *)(lVar18 + 0x6f8) + local_68;
        lVar19 = *(longlong *)(lVar8 + uVar22 * 8);
        *(longlong **)(lVar8 + uVar22 * 8) = plVar6;
        if (lVar19 != 0) {
          FUN_1400811d6(lVar19);
          FUN_1400020a8(lVar19);
        }
        *(undefined1 *)
         (uVar22 + *(longlong *)(*(longlong *)(lVar18 + 0x38) + 0xe0) + (longlong)(int)uVar12) = 1;
        uVar22 = uVar22 + 1;
        plVar13 = (longlong *)((longlong)plVar13 + 4);
        lVar20 = lVar20 + 0x100000000;
      } while (local_60 != uVar22);
    }
  }
  if ((*param_5 == '\0') && (lVar20 = local_90[1], (longlong)(int)lVar20 != 0)) {
    lVar19 = *local_90;
    lVar8 = 0;
    do {
      FUN_14043c188(lVar18,*(undefined8 *)(lVar19 + lVar8));
      lVar8 = lVar8 + 8;
    } while ((longlong)(int)lVar20 * 8 != lVar8);
  }
  if (param_5[1] == '\0') {
    FUN_14043c816(lVar18,local_90);
  }
  FUN_1447dd35a(lVar18);
  if ((longlong)(int)local_90[1] != 0) {
    plVar13 = (longlong *)*local_90;
    plVar6 = plVar13 + (int)local_90[1];
    uVar22 = local_58 + 0x360;
    local_58 = local_58 + 0x380;
    do {
      puVar4 = (ulonglong *)*plVar13;
      uVar5 = *puVar4;
      lVar18 = (longlong)(int)puVar4[1];
      if (((puVar4 == (ulonglong *)0x0) || (*(byte *)((longlong)puVar4 + 0xc) < 2)) ||
         (*(char *)(*(longlong *)(uVar5 + 0x2c0) + 0xd + lVar18 * 0x10) != '\x01')) {
LAB_14043bec0:
        if ((*(char *)(*(longlong *)(uVar5 + 0xe0) + lVar18) != '\0') || (DAT_14c9978a0 != 0)) {
          local_68 = CONCAT44(local_68._4_4_,
                              *(undefined4 *)(*(longlong *)(uVar5 + 0x80) + lVar18 * 4));
          local_80 = plVar6;
          local_60 = uVar22;
          puVar9 = (undefined8 *)FUN_1447eab44();
          *(undefined1 *)(puVar9 + 8) = 2;
          local_78 = *puVar4;
          local_70 = (ulonglong)(int)puVar4[1];
          lVar18 = *(longlong *)(local_78 + 0xf8) + local_70 * 0x18;
          lVar20 = *(longlong *)(lVar18 + 8);
          if (*(longlong *)(lVar18 + 8) == 0) {
            lVar20 = lVar18;
          }
          if ((longlong)*(int *)(lVar18 + 0x10) == 0) {
            uVar17 = 0;
            uVar16 = 0;
            local_88 = 0;
            local_84 = 0;
            uVar14 = 0;
            uVar21 = 0;
            uVar15 = 0;
            uVar12 = 0;
          }
          else {
            lVar19 = (longlong)*(int *)(lVar18 + 0x10) * 8;
            lVar18 = 0;
            local_84 = 0;
            local_88 = 0;
            uVar16 = 0;
            uVar17 = 0;
            do {
              lVar8 = *(longlong *)(lVar20 + lVar18);
              if ((lVar8 != 0) &&
                 ((*(byte *)(lVar8 + 0x71 + (ulonglong)((*(uint *)(lVar8 + 8) & 3) == 0) * 8) & 2)
                  != 0)) {
                uVar22 = (ulonglong)((*(uint *)(lVar8 + 8) & 3) == 0);
                uVar17 = uVar17 | *(uint *)(lVar8 + 0x48 + uVar22 * 8);
                uVar16 = uVar16 | *(uint *)(lVar8 + 0x4c + uVar22 * 8);
                local_88 = local_88 | *(uint *)(lVar8 + 0x50 + uVar22 * 8);
                local_84 = local_84 | *(uint *)(lVar8 + 0x54 + uVar22 * 8);
              }
              lVar18 = lVar18 + 8;
            } while (lVar19 != lVar18);
            lVar18 = 0;
            uVar14 = 0;
            uVar21 = 0;
            uVar15 = 0;
            uVar12 = 0;
            do {
              lVar8 = *(longlong *)(lVar20 + lVar18);
              if (lVar8 != 0) {
                if ((*(byte *)(lVar8 + 0x71 + (ulonglong)((*(uint *)(lVar8 + 8) & 3) == 0) * 8) & 5)
                    != 0) {
                  uVar22 = (ulonglong)((*(uint *)(lVar8 + 8) & 3) == 0);
                  uVar21 = uVar21 | *(uint *)(lVar8 + 0x58 + uVar22 * 8);
                  uVar14 = uVar14 | *(uint *)(lVar8 + 0x5c + uVar22 * 8);
                  uVar15 = uVar15 | *(uint *)(lVar8 + 0x60 + uVar22 * 8);
                  uVar12 = uVar12 | *(uint *)(lVar8 + 100 + uVar22 * 8);
                }
              }
              lVar18 = lVar18 + 8;
            } while (lVar19 != lVar18);
          }
          uVar2 = *(undefined4 *)(*(longlong *)(local_78 + 0x80) + local_70 * 4);
          *puVar9 = *(undefined8 *)(*(longlong *)(local_78 + 0xb0) + local_70 * 8);
          puVar9[1] = puVar4;
          *(undefined4 *)(puVar9 + 2) = uVar2;
          *(uint *)((longlong)puVar9 + 0x14) = uVar17;
          *(uint *)(puVar9 + 3) = uVar16;
          *(uint *)((longlong)puVar9 + 0x1c) = local_88;
          *(uint *)(puVar9 + 4) = local_84;
          *(uint *)((longlong)puVar9 + 0x24) = uVar21;
          *(uint *)(puVar9 + 5) = uVar14;
          *(uint *)((longlong)puVar9 + 0x2c) = uVar15;
          *(uint *)(puVar9 + 6) = uVar12;
          *(undefined1 *)((longlong)puVar9 + 0x34) = 1;
          *(undefined2 *)(puVar9 + 7) =
               *(undefined2 *)(*(longlong *)(*puVar4 + 0x170) + (longlong)(int)puVar4[1] * 2);
          puVar10 = (undefined8 *)FUN_1447eab44(local_58,local_68 & 0xffffffff,1);
          for (lVar18 = 9; uVar22 = local_60, plVar6 = local_80, lVar18 != 0; lVar18 = lVar18 + -1)
          {
            *puVar10 = *puVar9;
            puVar9 = puVar9 + 1;
            puVar10 = puVar10 + 1;
          }
        }
      }
      else if (((2 < *(byte *)((longlong)puVar4 + 0xc)) &&
               (plVar7 = *(longlong **)(*(longlong *)(uVar5 + 0x5a8) + lVar18 * 0x10),
               plVar7 != (longlong *)0x0)) && (2 < *(byte *)((longlong)plVar7 + 0xc))) {
        if (((*(byte *)(*(longlong *)(*plVar7 + 0x680) + (longlong)(int)plVar7[1]) & 1) != 0) &&
           (*(longlong *)(*(longlong *)(*plVar7 + 200) + (longlong)(int)plVar7[1] * 8) ==
            *(longlong *)(*(longlong *)(uVar5 + 200) + lVar18 * 8))) goto LAB_14043bec0;
      }
      plVar13 = plVar13 + 1;
    } while (plVar13 != plVar6);
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return local_90;
}



// FUNCTION 14043c188 FUN_14043c188 body=95 status=ok
// SIG undefined FUN_14043c188(void)

void FUN_14043c188(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(*param_2 + 0x2c0);
  lVar4 = (longlong)(int)param_2[1] * 0x10;
  if ((*(char *)(lVar2 + 0xd + lVar4) == '\0') &&
     (bVar3 = *(char *)(lVar2 + 0xb + lVar4) - 1, bVar3 < 4)) {
    lVar4 = (ulonglong)bVar3 * 8;
    lVar2 = *(longlong *)(&DAT_149f4c2b0 + lVar4);
    puVar1 = (uint *)(*(longlong *)(*param_2 + 0x248) + (longlong)(int)param_2[1] * 4);
    *puVar1 = *puVar1 | *(uint *)(param_1 + *(longlong *)(&DAT_149f4c2d0 + lVar4));
    FUN_14043c1e8(lVar2 + param_1);
    return;
  }
  return;
}



// FUNCTION 14043c1e8 FUN_14043c1e8 body=256 status=ok
// SIG undefined FUN_14043c1e8(void)

void FUN_14043c1e8(longlong *param_1,ulonglong param_2)

{
  uint uVar1;
  longlong *plVar2;
  int iVar3;
  undefined1 auStack_68 [36];
  undefined4 local_44;
  ulonglong local_40;
  ulonglong *local_38;
  undefined4 *local_30;
  undefined1 local_24 [4];
  ulonglong local_20;
  
  local_20 = DAT_14c707940 ^ (ulonglong)auStack_68;
  local_40 = param_2;
  if ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34)) {
    uVar1 = ((uint)(param_2 >> 0x14) & 0xffff ^ (uint)(param_2 >> 4)) * -0x7a143595;
    uVar1 = (uVar1 >> 0xd ^ uVar1) * -0x3d4d51cb;
    plVar2 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar2 = (longlong *)param_1[8];
    }
    iVar3 = *(int *)((longlong)plVar2 +
                    (ulonglong)((int)param_1[9] - 1U & (uVar1 >> 0x10 ^ uVar1)) * 4);
    if (iVar3 != -1) {
      do {
        if (*(ulonglong *)(*param_1 + (longlong)iVar3 * 0x18) == param_2) goto LAB_14043c2be;
        iVar3 = *(int *)(*param_1 + (longlong)iVar3 * 0x18 + 0x10);
      } while (iVar3 != -1);
    }
  }
  local_44 = (undefined4)param_1[0xb];
  local_30 = &local_44;
  local_38 = &local_40;
  FUN_14043c2ea(param_1,local_24,&local_38,0);
  iVar3 = (int)param_1[0xb];
  *(uint *)(param_1 + 0xb) = iVar3 + 1U;
  if (*(uint *)((longlong)param_1 + 0x5c) < iVar3 + 1U) {
    FUN_14043c6b4(param_1 + 10,iVar3);
  }
  *(ulonglong *)(param_1[10] + (longlong)iVar3 * 8) = local_40;
LAB_14043c2be:
  if ((local_20 ^ (ulonglong)auStack_68) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043c2ea FUN_14043c2ea body=347 status=ok
// SIG undefined FUN_14043c2ea(void)

undefined4 *
FUN_14043c2ea(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14043c4de(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14043c446(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_14043d1de(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043c446 FUN_14043c446 body=152 status=ok
// SIG undefined FUN_14043c446(void)

void FUN_14043c446(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1400caa76((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14043c4b3;
    }
  }
  uVar5 = 0;
LAB_14043c4b3:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14043c4de FUN_14043c4de body=470 status=ok
// SIG undefined FUN_14043c4de(void)

int * FUN_14043c4de(longlong *param_1,int *param_2)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  byte bVar4;
  int iVar5;
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
      iVar5 = -1;
    }
    else {
      iVar5 = iVar6 + 0x1e;
      if (-1 < iVar6 + -1) {
        iVar5 = iVar6 + -1;
      }
      iVar5 = iVar5 >> 5;
    }
    plVar9 = param_1 + 2;
    iVar8 = iVar6 + 1;
    iVar12 = iVar6 + 0x1f;
    if (-1 < iVar6) {
      iVar12 = iVar6;
    }
    if (iVar12 >> 5 == iVar5) {
      *(int *)(param_1 + 5) = iVar8;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar6) {
        if (iVar6 + 0x20U < 0xa0) {
          iVar8 = 0x80;
          iVar5 = iVar6;
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
          uVar3 = FUN_144a3809e(uVar7 << 2,0);
          iVar5 = (int)(uVar3 >> 2);
          iVar8 = -0x20;
          if ((int)uVar13 <= iVar5) {
            iVar8 = iVar5 << 5;
          }
          iVar5 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar8;
        FUN_1446efbd8(plVar9,iVar5);
        iVar8 = (int)param_1[5] + 1;
      }
      iVar5 = iVar8 + 0x1f;
      if (-1 < iVar8) {
        iVar5 = iVar8;
      }
      *(int *)(param_1 + 5) = iVar8;
      if (iVar8 % 0x20 != 0) {
        plVar10 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar10 = plVar9;
        }
        bVar4 = -(char)(iVar8 % 0x20);
        *(uint *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar10 + (longlong)(iVar5 >> 5) * 4) << (bVar4 & 0x1f)) >>
             (bVar4 & 0x1f);
      }
    }
    lVar2 = (longlong)iVar11;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar9 = (longlong *)param_1[4];
    }
    bVar4 = (byte)iVar6 & 0x1f;
    puVar1 = (uint *)((longlong)plVar9 + (longlong)(iVar12 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar4 | 0xfffffffeU >> 0x20 - bVar4);
  }
  else {
    iVar11 = (int)param_1[6];
    lVar2 = (longlong)iVar11;
    iVar6 = *(int *)(*param_1 + 4 + lVar2 * 0x18);
    *(int *)(param_1 + 6) = iVar6;
    iVar5 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar5;
    if (iVar5 != 0) {
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
  *(longlong *)(param_2 + 2) = lVar2 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14043c6b4 FUN_14043c6b4 body=353 status=ok
// SIG undefined FUN_14043c6b4(void)

void FUN_14043c6b4(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14043c739;
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
LAB_14043c739:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14043c816 FUN_14043c816 body=358 status=ok
// SIG undefined FUN_14043c816(void)

void FUN_14043c816(longlong param_1,longlong *param_2)

{
  uint *puVar1;
  void *pvVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  undefined1 auStack_78 [32];
  void *local_58;
  int local_50;
  undefined4 local_4c;
  void *local_48;
  int local_40;
  undefined4 local_3c;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  local_48 = (void *)0x0;
  local_40 = (int)param_2[1];
  lVar4 = (longlong)local_40;
  pvVar2 = (void *)*param_2;
  if (lVar4 == 0) {
    local_3c = 0;
  }
  else {
    FUN_140509e62(&local_48,local_40,0);
    memcpy(local_48,pvVar2,lVar4 << 3);
  }
  FUN_14043c97e(param_1,&local_48,param_1 + 0x1e8);
  if (*(char *)(param_1 + 0x488) == '\x01') {
    local_58 = (void *)0x0;
    local_50 = (int)param_2[1];
    lVar4 = (longlong)local_50;
    pvVar2 = (void *)*param_2;
    if (lVar4 == 0) {
      local_4c = 0;
    }
    else {
      FUN_140509e62(&local_58,local_50,0);
      memcpy(local_58,pvVar2,lVar4 << 3);
    }
    FUN_14043c97e(param_1,&local_58,param_1 + 800);
  }
  lVar4 = param_2[1];
  if ((longlong)(int)lVar4 != 0) {
    lVar3 = *param_2;
    lVar5 = 0;
    do {
      puVar1 = (uint *)(*(longlong *)(**(longlong **)(lVar3 + lVar5) + 0x248) +
                       (longlong)(int)(*(longlong **)(lVar3 + lVar5))[1] * 4);
      *puVar1 = *puVar1 & ~*(uint *)(param_1 + 0x2b0);
      FUN_1447dd1e0(param_1 + 0x250);
      lVar5 = lVar5 + 8;
    } while ((longlong)(int)lVar4 * 8 != lVar5);
  }
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043c97e FUN_14043c97e body=98 status=ok
// SIG undefined FUN_14043c97e(void)

void FUN_14043c97e(undefined8 param_1,longlong *param_2,longlong param_3)

{
  uint *puVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar3 = param_2[1];
  if ((longlong)(int)lVar3 != 0) {
    lVar2 = *param_2;
    lVar4 = 0;
    do {
      puVar1 = (uint *)(*(longlong *)(**(longlong **)(lVar2 + lVar4) + 0x248) +
                       (longlong)(int)(*(longlong **)(lVar2 + lVar4))[1] * 4);
      *puVar1 = *puVar1 | *(uint *)(param_3 + 0x60);
      lVar4 = lVar4 + 8;
    } while ((longlong)(int)lVar3 * 8 != lVar4);
  }
  FUN_14043c9e0(param_3,param_2);
  if (*param_2 != 0) {
    FUN_1400020a8();
    return;
  }
  return;
}



// FUNCTION 14043c9e0 FUN_14043c9e0 body=522 status=ok
// SIG undefined FUN_14043c9e0(void)

void FUN_14043c9e0(longlong *param_1,longlong *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  uint uVar4;
  longlong *plVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  undefined1 auStack_a8 [36];
  int local_84;
  ulonglong local_80;
  void *local_78;
  ulonglong uStack_70;
  ulonglong *local_60;
  int *local_58;
  undefined1 local_4c [4];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_a8;
  local_78 = (void *)0x0;
  uVar4 = *(uint *)(param_2 + 1);
  uStack_70 = (ulonglong)uVar4;
  if ((longlong)(int)uVar4 != 0) {
    FUN_1401c3474(&local_78);
  }
  memset(local_78,0,(longlong)(int)uVar4);
  iVar6 = (int)param_1[0xb];
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  if (0 < (int)*(uint *)(param_2 + 1)) {
    lVar8 = 0;
    do {
      local_80 = *(ulonglong *)(*param_2 + lVar8 * 8);
      if ((int)param_1[1] == *(int *)((longlong)param_1 + 0x34)) {
LAB_14043cabd:
        uVar3 = 0;
      }
      else {
        uVar4 = ((uint)(local_80 >> 0x14) & 0xffff ^ (uint)(local_80 >> 4)) * -0x7a143595;
        uVar4 = (uVar4 >> 0xd ^ uVar4) * -0x3d4d51cb;
        plVar5 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar5 = param_1 + 7;
        }
        iVar7 = *(int *)((longlong)plVar5 +
                        (ulonglong)((int)param_1[9] - 1U & (uVar4 >> 0x10 ^ uVar4)) * 4);
        if (iVar7 == -1) goto LAB_14043cabd;
        do {
          if (*(ulonglong *)(*param_1 + (longlong)iVar7 * 0x18) == local_80) {
            uVar3 = 1;
            break;
          }
          iVar7 = *(int *)(*param_1 + (longlong)iVar7 * 0x18 + 0x10);
          uVar3 = 0;
        } while (iVar7 != -1);
      }
      *(undefined1 *)((longlong)local_78 + lVar8) = uVar3;
      if (*(char *)((longlong)local_78 + lVar8) == '\0') {
        local_60 = &local_80;
        local_84 = iVar6;
        local_58 = &local_84;
        FUN_14043cbec(param_1,local_4c,&local_60,0);
        iVar6 = iVar6 + 1;
      }
      lVar8 = lVar8 + 1;
      uVar2 = (ulonglong)(int)param_2[1];
    } while (lVar8 < (longlong)uVar2);
  }
  if (iVar6 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1456afac4(iVar6);
  }
  plVar5 = param_1 + 10;
  if (*(int *)((longlong)param_1 + 0x5c) < iVar6) {
    FUN_14043d0a6(plVar5,iVar6);
    uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  }
  if (0 < (int)uVar2) {
    lVar8 = 0;
    do {
      if (*(char *)((longlong)local_78 + lVar8) == '\0') {
        uVar1 = *(undefined8 *)(*param_2 + lVar8 * 8);
        iVar6 = (int)param_1[0xb];
        *(uint *)(param_1 + 0xb) = iVar6 + 1U;
        if (*(uint *)((longlong)param_1 + 0x5c) < iVar6 + 1U) {
          FUN_1406b7a4a(plVar5,iVar6);
        }
        *(undefined8 *)(*plVar5 + (longlong)iVar6 * 8) = uVar1;
        uVar2 = (ulonglong)*(uint *)(param_2 + 1);
      }
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uVar2);
  }
  if (local_78 != (void *)0x0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_a8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14043cbec FUN_14043cbec body=347 status=ok
// SIG undefined FUN_14043cbec(void)

undefined4 *
FUN_14043cbec(longlong param_1,undefined4 *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined4 local_54;
  undefined4 local_50 [2];
  ulonglong *local_48;
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_88;
  FUN_14043cde0(param_1,local_50);
  puVar1 = (undefined4 *)param_3[1];
  uVar4 = *(ulonglong *)*param_3;
  *local_48 = uVar4;
  *(undefined4 *)(local_48 + 1) = *puVar1;
  *(undefined4 *)(local_48 + 2) = 0xffffffff;
  local_54 = local_50[0];
  uVar3 = ((uint)(uVar4 >> 0x14) & 0xffff ^ (uint)(uVar4 >> 4)) * -0x7a143595;
  uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
  uVar3 = uVar3 >> 0x10 ^ uVar3;
  local_68 = param_4;
  cVar2 = FUN_14043cd48(param_1,uVar3,local_48);
  if (cVar2 == '\0') {
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
      uVar3 = *(int *)(param_1 + 0x48) - 1U & uVar3;
      *(uint *)((longlong)local_48 + 0x14) = uVar3;
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(local_48 + 2) =
           *(undefined4 *)
            (lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4);
      lVar7 = *(longlong *)(param_1 + 0x40);
      if (*(longlong *)(param_1 + 0x40) == 0) {
        lVar7 = param_1 + 0x38;
      }
      *(undefined4 *)(lVar7 + ((longlong)*(int *)(param_1 + 0x48) - 1U & (longlong)(int)uVar3) * 4)
           = local_54;
    }
    else {
      *(int *)(param_1 + 0x48) = iVar6;
      FUN_140b47f3e(param_1);
    }
  }
  *param_2 = local_54;
  if ((local_40 ^ (ulonglong)auStack_88) == DAT_14c707940) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043cd48 FUN_14043cd48 body=152 status=ok
// SIG undefined FUN_14043cd48(void)

void FUN_14043cd48(longlong *param_1,uint param_2,longlong *param_3,int *param_4,undefined1 *param_5
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
          FUN_1400ca2ba((int)lVar3,*param_4,1);
          *param_4 = iVar7;
          uVar5 = 1;
          break;
        }
        iVar7 = (int)plVar6[2];
        uVar5 = 0;
      } while (iVar7 != -1);
      goto LAB_14043cd93;
    }
  }
  uVar5 = 0;
LAB_14043cd93:
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = uVar5;
  }
  return;
}



// FUNCTION 14043cde0 FUN_14043cde0 body=709 status=ok
// SIG undefined FUN_14043cde0(void)

int * FUN_14043cde0(longlong *param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  longlong *plVar13;
  ulonglong uVar14;
  int iVar15;
  int iVar16;
  ulonglong uVar17;
  uint uVar18;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar15 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar15 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar15) {
      FUN_14482b872(param_1,iVar15);
    }
    iVar8 = (int)param_1[5];
    if (iVar8 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = iVar8 + 0x1e;
      if (-1 < iVar8 + -1) {
        iVar2 = iVar8 + -1;
      }
      iVar2 = iVar2 >> 5;
    }
    plVar12 = param_1 + 2;
    iVar9 = iVar8 + 1;
    iVar16 = iVar8 + 0x1f;
    if (-1 < iVar8) {
      iVar16 = iVar8;
    }
    if (iVar16 >> 5 == iVar2) {
      *(int *)(param_1 + 5) = iVar9;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar8) {
        iVar2 = iVar8;
        if (iVar8 + 0x20U < 0xa0) {
          iVar9 = 0x80;
        }
        else {
          uVar18 = iVar8 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar11 = 4;
            if (4 < uVar18) {
              uVar11 = uVar18;
            }
          }
          else {
            uVar11 = uVar18 + (uVar18 * 3 >> 3) + 0x10;
          }
          uVar6 = (ulonglong)(uVar11 * 4);
          if (DAT_14c872d28 != (longlong *)0x0) {
            if (*(code **)(*DAT_14c872d28 + 0x60) == (code *)&LAB_14489e5c8) {
              uVar3 = (uint)(uVar6 + 0xf);
              if (uVar11 < 0x1ffd) {
                uVar6 = (ulonglong)
                        (ushort)(&DAT_14c841d90)[0x32 - (byte)(&DAT_14c841e00)[uVar6 + 0xf >> 4]];
              }
              else {
                uVar10 = (ulonglong)(uVar3 & 0xfffffff0);
                if (uVar10 < 0x7ff1) {
                  bVar7 = (&DAT_14c841e00)[uVar3 >> 4];
                  uVar14 = 0x32;
                  if (0x32 < bVar7) {
                    uVar14 = (ulonglong)bVar7;
                  }
                  uVar17 = 0x32 - (ulonglong)bVar7;
                  do {
                    uVar6 = (ulonglong)(ushort)(&DAT_14c841d90)[uVar17 & 0xffffffff];
                    if (((&DAT_14c841d90)[uVar17 & 0xffffffff] & 0xf) == 0) goto LAB_14043cfd0;
                    lVar5 = uVar14 + 1 + uVar17;
                    uVar17 = uVar17 - 1;
                  } while (lVar5 != 0x33);
                }
                uVar6 = 0x10;
                if (0x10 < DAT_14c841df8) {
                  uVar6 = (ulonglong)DAT_14c841df8;
                }
                uVar6 = -uVar6 & (uVar10 + uVar6) - 1;
              }
            }
            else {
              uVar6 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar6,0);
              iVar2 = (int)param_1[5];
            }
          }
LAB_14043cfd0:
          iVar4 = (int)(uVar6 >> 2);
          iVar9 = -0x20;
          if ((int)uVar18 <= iVar4) {
            iVar9 = iVar4 << 5;
          }
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar9;
        FUN_1446efbd8(plVar12,iVar2);
        iVar9 = (int)param_1[5] + 1;
      }
      iVar2 = iVar9 + 0x1f;
      if (-1 < iVar9) {
        iVar2 = iVar9;
      }
      *(int *)(param_1 + 5) = iVar9;
      if (iVar9 % 0x20 != 0) {
        plVar13 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar13 = plVar12;
        }
        bVar7 = -(char)(iVar9 % 0x20);
        *(uint *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar13 + (longlong)(iVar2 >> 5) * 4) << (bVar7 & 0x1f)) >>
             (bVar7 & 0x1f);
      }
    }
    lVar5 = (longlong)iVar15;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar12 = (longlong *)param_1[4];
    }
    bVar7 = (byte)iVar8 & 0x1f;
    puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar16 >> 5) * 4);
    *puVar1 = *puVar1 & (-2 << bVar7 | 0xfffffffeU >> 0x20 - bVar7);
  }
  else {
    iVar15 = (int)param_1[6];
    lVar5 = (longlong)iVar15;
    iVar8 = *(int *)(*param_1 + 4 + lVar5 * 0x18);
    *(int *)(param_1 + 6) = iVar8;
    iVar2 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar8 * 0x18) = 0xffffffff;
    }
  }
  plVar12 = param_1 + 2;
  if ((longlong *)param_1[4] != (longlong *)0x0) {
    plVar12 = (longlong *)param_1[4];
  }
  iVar8 = iVar15 + 0x1f;
  if (-1 < iVar15) {
    iVar8 = iVar15;
  }
  puVar1 = (uint *)((longlong)plVar12 + (longlong)(iVar8 >> 5) * 4);
  *puVar1 = *puVar1 | 1 << ((byte)iVar15 & 0x1f);
  *param_2 = iVar15;
  *(longlong *)(param_2 + 2) = lVar5 * 0x18 + *param_1;
  return param_2;
}



// FUNCTION 14043d0a6 FUN_14043d0a6 body=312 status=ok
// SIG undefined FUN_14043d0a6(void)

void FUN_14043d0a6(longlong param_1,int param_2)

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
    uVar3 = (longlong)param_2 * 8;
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
              if (((&DAT_14c841d90)[uVar6 & 0xffffffff] & 0xf) == 0) goto LAB_14043d110;
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
        uVar3 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar3,8);
      }
    }
LAB_14043d110:
    uVar5 = 0x7fffffff;
    if (param_2 <= (int)(uVar3 >> 3)) {
      uVar5 = uVar3 >> 3 & 0xffffffff;
    }
  }
  if ((int)uVar5 != *(int *)(param_1 + 0xc)) {
    *(int *)(param_1 + 0xc) = (int)uVar5;
    FUN_1446f8d3c(param_1,*(undefined4 *)(param_1 + 8),uVar5,8,8);
  }
  return;
}



// FUNCTION 14043d1de FUN_14043d1de body=600 status=ok
// SIG undefined FUN_14043d1de(void)

void FUN_14043d1de(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  longlong *plVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  int iVar12;
  ulonglong uVar13;
  undefined1 auStack_78 [32];
  ulonglong local_58;
  longlong *local_50;
  undefined8 local_48;
  int local_40;
  ulonglong local_38;
  
  local_38 = DAT_14c707940 ^ (ulonglong)auStack_78;
  if (param_1[8] != 0) {
    FUN_1446efa72(param_1 + 8,0,0,4);
  }
  uVar5 = *(uint *)(param_1 + 9);
  if (uVar5 != 0) {
    plVar1 = param_1 + 7;
    FUN_144a1cbf0(plVar1,0,uVar5,4);
    if (0 < (int)uVar5) {
      uVar3 = 0;
      do {
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)((longlong)plVar7 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar3) * 4) =
             0xffffffff;
        uVar3 = uVar3 + 1;
      } while (uVar5 != uVar3);
    }
    local_50 = param_1 + 2;
    local_58 = 0x100000000;
    local_48 = 0xffffffff;
    local_40 = 0;
    if ((int)param_1[5] == 0) {
      uVar8 = 1;
      local_48._0_4_ = 0xffffffff;
      local_48._4_4_ = 0;
      local_58._0_4_ = 0;
    }
    else {
      FUN_1449c0562(&local_58);
      uVar8 = local_58 >> 0x20;
    }
    iVar4 = (int)local_58;
    uVar5 = (uint)local_48;
    iVar6 = local_48._4_4_;
    iVar9 = local_40;
    if (local_48._4_4_ < (int)local_50[3]) {
      do {
        lVar11 = *param_1;
        lVar10 = (longlong)iVar6;
        uVar13 = *(ulonglong *)(lVar11 + lVar10 * 0x18);
        uVar3 = ((uint)(uVar13 >> 0x14) & 0xffff ^ (uint)(uVar13 >> 4)) * -0x7a143595;
        uVar3 = (uVar3 >> 0xd ^ uVar3) * -0x3d4d51cb;
        uVar13 = (longlong)(int)(uVar3 >> 0x10 ^ uVar3) & (longlong)(int)param_1[9] - 1U;
        iVar12 = (int)uVar13;
        *(int *)(lVar11 + 0x14 + lVar10 * 0x18) = iVar12;
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(undefined4 *)(lVar11 + 0x10 + lVar10 * 0x18) =
             *(undefined4 *)((longlong)plVar7 + ((longlong)(int)param_1[9] - 1U & uVar13) * 4);
        plVar7 = (longlong *)param_1[8];
        if ((longlong *)param_1[8] == (longlong *)0x0) {
          plVar7 = plVar1;
        }
        *(int *)((longlong)plVar7 + ((longlong)iVar12 & (longlong)(int)param_1[9] - 1U) * 4) = iVar6
        ;
        uVar5 = ~(uint)uVar8 & uVar5;
        plVar7 = (longlong *)local_50[2];
        if ((longlong *)local_50[2] == (longlong *)0x0) {
          plVar7 = local_50;
        }
        iVar12 = (int)local_50[3];
        lVar11 = (longlong)iVar4;
        uVar3 = *(uint *)((longlong)plVar7 + lVar11 * 4) & uVar5;
        if (uVar3 == 0) {
          iVar6 = iVar12 + 0x1e;
          if (-1 < iVar12 + -1) {
            iVar6 = iVar12 + -1;
          }
          iVar6 = iVar6 >> 5;
          iVar2 = iVar6;
          if (iVar6 < iVar4) {
            iVar2 = iVar4;
          }
          if (iVar6 <= iVar4) break;
          lVar10 = 0;
          while( true ) {
            iVar9 = iVar9 + 0x20;
            uVar3 = *(uint *)((longlong)plVar7 + lVar10 * 4 + lVar11 * 4 + 4);
            if (uVar3 != 0) break;
            lVar10 = lVar10 + 1;
            if (iVar2 - lVar11 == lVar10) goto LAB_14043d3d4;
          }
          iVar4 = iVar4 + (int)lVar10 + 1;
          uVar5 = 0xffffffff;
        }
        uVar8 = (ulonglong)(-uVar3 & uVar3);
        uVar13 = uVar8 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar13 != 0) {
          for (; uVar13 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        iVar6 = (iVar9 - ((uint)lVar11 ^ 0x3f)) + 0x3e;
      } while (iVar6 < iVar12);
    }
  }
LAB_14043d3d4:
  if ((local_38 ^ (ulonglong)auStack_78) == DAT_14c707940) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043d437 FUN_14043d437 body=704 status=ok
// SIG undefined FUN_14043d437(void)

ulonglong FUN_14043d437(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  ulonglong unaff_RBX;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined1 auStack_b8 [32];
  longlong local_98;
  ulonglong uStack_90;
  uint local_88 [4];
  uint *local_78;
  int local_70;
  uint local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_b8;
  uVar13 = 0;
  local_78 = (uint *)0x0;
  local_70 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_6c = 0x80;
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_58 = 0;
  local_50 = 0;
  FUN_14043d798(param_2);
  iVar2 = local_70;
  if (local_70 == 0) {
    uVar11 = 1;
    iVar3 = 0;
    iVar8 = 0;
  }
  else {
    puVar5 = local_78;
    if (local_78 == (uint *)0x0) {
      puVar5 = local_88;
    }
    uVar12 = *puVar5;
    if (uVar12 == 0) {
      iVar3 = local_70 + 0x1e;
      if (-1 < local_70 + -1) {
        iVar3 = local_70 + -1;
      }
      uVar13 = 0;
      uVar11 = (ulonglong)(uint)(iVar3 >> 5);
      if (iVar3 >> 5 < 1) {
        uVar11 = uVar13;
      }
      iVar8 = 0;
      do {
        if (uVar11 == uVar13) goto LAB_14043d681;
        iVar8 = iVar8 + 0x20;
        uVar12 = puVar5[uVar13 + 1];
        uVar13 = uVar13 + 1;
      } while (uVar12 == 0);
    }
    else {
      uVar13 = 0;
      iVar8 = 0;
    }
    uVar11 = (ulonglong)(-uVar12 & uVar12);
    uVar1 = uVar11 * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    iVar3 = (iVar8 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
    if (local_70 <= iVar3) {
      iVar3 = local_70;
    }
  }
  if (iVar3 == local_70) {
LAB_14043d681:
    unaff_RBX = 0;
  }
  else {
    uVar12 = 0xffffffff;
    do {
      uVar4 = FUN_14043d6f8(param_1,(longlong)iVar3 * 0x20 + local_98);
      if ((char)uVar4 != '\0') {
        unaff_RBX = CONCAT71((int7)(unaff_RBX >> 8),1);
        break;
      }
      unaff_RBX = (ulonglong)uVar4;
      uVar12 = uVar12 & ~(uint)uVar11;
      puVar5 = local_78;
      if (local_78 == (uint *)0x0) {
        puVar5 = local_88;
      }
      iVar3 = (int)uVar13;
      lVar9 = (longlong)iVar3;
      uVar4 = puVar5[lVar9] & uVar12;
      if (uVar4 == 0) {
        iVar6 = local_70 + 0x1e;
        if (-1 < local_70 + -1) {
          iVar6 = local_70 + -1;
        }
        iVar6 = iVar6 >> 5;
        iVar8 = iVar8 + 0x20;
        iVar7 = iVar6;
        if (iVar6 < iVar3) {
          iVar7 = iVar3;
        }
        if (iVar3 < iVar6) {
          lVar10 = 0;
          do {
            uVar4 = puVar5[lVar9 + lVar10 + 1];
            if (uVar4 != 0) {
              uVar13 = (ulonglong)(iVar3 + (int)lVar10 + 1);
              uVar12 = 0xffffffff;
              goto LAB_14043d5b1;
            }
            iVar8 = iVar8 + 0x20;
            lVar10 = lVar10 + 1;
          } while (iVar7 - lVar9 != lVar10);
          uVar12 = 0xffffffff;
          iVar3 = iVar7;
        }
        uVar13 = (ulonglong)(iVar3 + 1);
        iVar3 = local_70;
      }
      else {
LAB_14043d5b1:
        uVar11 = (ulonglong)(-uVar4 & uVar4);
        uVar1 = uVar11 * 2 + 1;
        lVar9 = 0x3f;
        if (uVar1 != 0) {
          for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
          }
        }
        iVar3 = (iVar8 - ((uint)lVar9 ^ 0x3f)) + 0x3e;
        if (local_70 <= iVar3) {
          iVar3 = local_70;
        }
      }
    } while (iVar3 != iVar2);
  }
  local_50 = 0;
  if (local_58 != 0) {
    FUN_1400020a8();
  }
  uVar13 = uStack_90 >> 0x20;
  uStack_90 = uStack_90 & 0xffffffff00000000;
  if ((int)uVar13 != 0) {
    FUN_1446f4a44(&local_98,0);
  }
  uStack_68 = 0xffffffff;
  local_64 = 0;
  local_70 = 0;
  if (0x80 < local_6c) {
    local_6c = 0x80;
    FUN_1446efbd8(local_88,0);
  }
  if (local_78 != (uint *)0x0) {
    FUN_1400020a8();
  }
  if (local_98 != 0) {
    FUN_1400020a8();
  }
  if ((local_48 ^ (ulonglong)auStack_b8) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return unaff_RBX & 0xffffffff;
}



// FUNCTION 14043d6f8 FUN_14043d6f8 body=159 status=ok
// SIG undefined FUN_14043d6f8(void)

bool FUN_14043d6f8(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  bool bVar2;
  undefined1 auStack_48 [32];
  uint local_28;
  int local_24;
  longlong local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  bVar2 = false;
  FUN_14043d8b4(*(undefined8 *)(param_1 + 0x40),&local_28,param_2,0);
  if (local_20 == 0) goto LAB_14043d72d;
  if (local_24 != 0) {
    bVar2 = false;
    if (((int)local_28 < 0) || (DAT_14c9647dc <= (int)local_28)) goto LAB_14043d72d;
    lVar1 = (ulonglong)((local_28 & 0xffff) * 0x18) +
            *(longlong *)(DAT_14c9647c8 + (ulonglong)(local_28 >> 0x10) * 8);
    if ((lVar1 != 0) && (*(int *)(lVar1 + 0x10) == local_24)) {
      bVar2 = (*(uint *)(lVar1 + 8) & 0x10200000) == 0;
      goto LAB_14043d72d;
    }
  }
  bVar2 = false;
LAB_14043d72d:
  if ((local_18 ^ (ulonglong)auStack_48) == DAT_14c707940) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_144d8e3a0();
}



// FUNCTION 14043d798 FUN_14043d798 body=283 status=ok
// SIG undefined FUN_14043d798(void)

void FUN_14043d798(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  undefined8 uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_68 [36];
  undefined1 local_44 [4];
  ulonglong local_40;
  
  local_40 = DAT_14c707940 ^ (ulonglong)auStack_68;
  iVar1 = *(int *)(param_1 + 0x20);
  if ((longlong)iVar1 != 0) {
    lVar2 = *(longlong *)(param_1 + 0x18);
    lVar8 = 0;
    do {
      plVar5 = (longlong *)FUN_1400c2ca6(*(undefined2 *)(lVar2 + 0x10 + lVar8));
      lVar7 = plVar5[1];
      if (lVar7 == 0) {
        uVar6 = FUN_14043db3a();
        lVar7 = FUN_14477b664(uVar6);
        plVar5[1] = lVar7;
      }
      if (plVar5[2] == 0) {
        if ((lVar7 != 0) && (*plVar5 != 0)) {
          plVar3 = *(longlong **)(lVar7 + 0xb8);
          if ((plVar3 == (longlong *)0x0) ||
             (cVar4 = (**(code **)(*plVar3 + 0x108))(plVar3), cVar4 == '\0')) {
            plVar5[2] = 0;
          }
          else {
            uVar6 = (**(code **)(*plVar3 + 0x110))(plVar3);
            lVar7 = FUN_144aff482(uVar6,plVar5);
            plVar5[2] = lVar7;
            if (lVar7 != 0) goto LAB_14043d7f8;
          }
        }
      }
      else {
LAB_14043d7f8:
        uVar6 = FUN_1400c2ca6(*(undefined2 *)(lVar2 + 0x10 + lVar8));
        FUN_14043db74(param_2,local_44,uVar6,0);
      }
      lVar8 = lVar8 + 0x60;
    } while ((longlong)iVar1 * 0x60 != lVar8);
  }
  if ((local_40 ^ (ulonglong)auStack_68) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14043d8b4 FUN_14043d8b4 body=415 status=ok
// SIG undefined FUN_14043d8b4(void)

undefined4 * FUN_14043d8b4(longlong param_1,undefined4 *param_2,longlong *param_3,int param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong *plVar5;
  char cVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  lVar7 = param_3[1];
  if (lVar7 == 0) {
    uVar8 = FUN_14043db3a();
    lVar7 = FUN_14477b664(uVar8);
    param_3[1] = lVar7;
  }
  lVar9 = param_3[2];
  if (lVar9 == 0) {
    if ((lVar7 == 0) || (*param_3 == 0)) goto LAB_14043d97b;
    plVar5 = *(longlong **)(lVar7 + 0xb8);
    if ((plVar5 == (longlong *)0x0) ||
       (cVar6 = (**(code **)(*plVar5 + 0x108))(plVar5), cVar6 == '\0')) {
      param_3[2] = 0;
      goto LAB_14043d97b;
    }
    uVar8 = (**(code **)(*plVar5 + 0x110))(plVar5);
    lVar9 = FUN_144aff482(uVar8,param_3);
    param_3[2] = lVar9;
    if (lVar9 == 0) goto LAB_14043d97b;
  }
  iVar2 = *(int *)(param_1 + 0x68);
  if ((longlong)iVar2 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x60);
    lVar11 = 0;
    do {
      plVar5 = *(longlong **)(lVar7 + 8 + lVar11);
      if ((((((plVar5 != (longlong *)0x0) && (iVar3 = *(int *)(lVar7 + 4 + lVar11), iVar3 != 0)) &&
            (uVar4 = *(uint *)(lVar7 + lVar11), -1 < (int)uVar4)) &&
           (((int)uVar4 < DAT_14c9647dc &&
            (lVar10 = (ulonglong)((uVar4 & 0xffff) * 0x18) +
                      *(longlong *)(DAT_14c9647c8 + (ulonglong)(uVar4 >> 0x10) * 8), lVar10 != 0))))
          && ((*(int *)(lVar10 + 0x10) == iVar3 &&
              (((*(uint *)(lVar10 + 8) & 0x10200000) == 0 &&
               (lVar10 = (**(code **)(*plVar5 + 0x10))(), lVar10 != 0)))))) &&
         (cVar6 = FUN_14043da5a(lVar10,lVar9), cVar6 != '\0')) {
        if (param_4 == 2) {
          if ((*(int *)(lVar10 + 0x18c) == 3) || ((*(byte *)(lVar10 + 400) & 1) != 0))
          goto LAB_14043da04;
        }
        else if ((param_4 != 1) ||
                ((*(int *)(lVar10 + 0x18c) != 3 && ((*(byte *)(lVar10 + 400) & 1) == 0)))) {
LAB_14043da04:
          puVar1 = (undefined4 *)(lVar7 + lVar11);
          uVar12 = *puVar1;
          uVar13 = puVar1[1];
          uVar14 = puVar1[2];
          uVar15 = puVar1[3];
          goto LAB_14043d97e;
        }
      }
      lVar11 = lVar11 + 0x10;
    } while ((longlong)iVar2 * 0x10 != lVar11);
  }
LAB_14043d97b:
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
LAB_14043d97e:
  *param_2 = uVar12;
  param_2[1] = uVar13;
  param_2[2] = uVar14;
  param_2[3] = uVar15;
  return param_2;
}



// FUNCTION 14043da5a FUN_14043da5a body=223 status=ok
// SIG undefined FUN_14043da5a(void)

undefined8 FUN_14043da5a(longlong param_1,ulonglong param_2)

{
  longlong *plVar1;
  byte bVar2;
  char cVar3;
  ulonglong in_RAX;
  undefined7 uVar5;
  undefined8 uVar4;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  uVar6 = *(ulonglong *)(param_1 + 0x150);
  if (*(ulonglong *)(param_1 + 0x150) == 0) {
    uVar4 = FUN_14043db3a();
    in_RAX = FUN_14477b664(uVar4);
    *(ulonglong *)(param_1 + 0x150) = in_RAX;
    uVar6 = in_RAX;
  }
  uVar8 = *(ulonglong *)(param_1 + 0x158);
  uVar7 = uVar8;
  if (uVar8 == 0) {
    bVar2 = 0;
    uVar5 = 0;
    if (uVar6 != 0) {
      if (*(longlong *)(param_1 + 0x148) == 0) goto LAB_14043da9b;
      plVar1 = *(longlong **)(uVar6 + 0xb8);
      if ((plVar1 == (longlong *)0x0) ||
         (cVar3 = (**(code **)(*plVar1 + 0x108))(plVar1), cVar3 == '\0')) {
        *(undefined8 *)(param_1 + 0x158) = 0;
      }
      else {
        uVar4 = (**(code **)(*plVar1 + 0x110))(plVar1);
        in_RAX = FUN_144aff482(uVar4,(longlong *)(param_1 + 0x148));
        *(ulonglong *)(param_1 + 0x158) = in_RAX;
        uVar8 = 0;
        uVar7 = in_RAX;
        if (in_RAX != 0) goto LAB_14043da81;
      }
    }
    bVar2 = 0;
    uVar5 = 0;
  }
  else {
LAB_14043da81:
    uVar5 = (undefined7)(in_RAX >> 8);
    bVar2 = 1;
    if (param_2 == 0) {
      uVar8 = 0;
    }
    else if (uVar7 == param_2) {
      uVar8 = 1;
    }
    else {
      uVar8 = (ulonglong)(*(ulonglong *)(uVar7 + 0xa0) == param_2);
    }
  }
LAB_14043da9b:
  return CONCAT71(uVar5,bVar2 & (byte)uVar8);
}



// FUNCTION 14043db3a FUN_14043db3a body=57 status=ok
// SIG undefined FUN_14043db3a(void)

void FUN_14043db3a(void)

{
  undefined8 uVar1;
  
  if (DAT_14cb570a0 == 0) {
    uVar1 = FUN_140325e72();
    DAT_14cb570a0 = FUN_140002ddd(FUN_14184717c,uVar1,L"GbxDialogNameTagDef");
  }
  return;
}



// FUNCTION 14043db74 FUN_14043db74 body=2684 status=ok
// SIG undefined FUN_14043db74(void)

void FUN_14043db74(longlong *param_1,int *param_2,undefined8 *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  longlong *plVar3;
  code *pcVar4;
  longlong lVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong lVar17;
  longlong lVar18;
  uint *puVar19;
  byte bVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  undefined **ppuVar24;
  uint uVar25;
  longlong lVar26;
  uint uVar27;
  longlong lVar28;
  undefined8 *puVar29;
  longlong *plVar30;
  uint uVar31;
  int iVar32;
  int iVar33;
  ulonglong uVar34;
  
  if (*(int *)((longlong)param_1 + 0x34) == 0) {
    iVar10 = (int)param_1[1];
    *(int *)(param_1 + 1) = iVar10 + 1;
    if (*(int *)((longlong)param_1 + 0xc) == iVar10) {
      FUN_1447711aa(param_1,iVar10);
    }
    iVar32 = (int)param_1[5];
    if (iVar32 == 0) {
      iVar8 = -1;
    }
    else {
      iVar8 = iVar32 + 0x1e;
      if (-1 < iVar32 + -1) {
        iVar8 = iVar32 + -1;
      }
      iVar8 = iVar8 >> 5;
    }
    plVar30 = param_1 + 2;
    iVar33 = iVar32 + 1;
    iVar22 = iVar32 + 0x1f;
    if (-1 < iVar32) {
      iVar22 = iVar32;
    }
    if (iVar22 >> 5 == iVar8) {
      *(int *)(param_1 + 5) = iVar33;
    }
    else {
      if (*(int *)((longlong)param_1 + 0x2c) <= iVar32) {
        if (iVar32 + 0x20U < 0xa0) {
          iVar33 = 0x80;
          iVar8 = iVar32;
        }
        else {
          uVar27 = iVar32 + 0x20U >> 5;
          if (*(int *)((longlong)param_1 + 0x2c) + 0x1fU < 0xa0) {
            uVar9 = 4;
            if (4 < uVar27) {
              uVar9 = uVar27;
            }
          }
          else {
            uVar9 = (uVar27 * 3 >> 3) + uVar27 + 0x10;
          }
          uVar14 = FUN_144a3809e(uVar9 << 2,0);
          iVar8 = (int)(uVar14 >> 2);
          iVar33 = -0x20;
          if ((int)uVar27 <= iVar8) {
            iVar33 = iVar8 << 5;
          }
          iVar8 = (int)param_1[5];
        }
        *(int *)((longlong)param_1 + 0x2c) = iVar33;
        FUN_1446efbd8(plVar30,iVar8);
        iVar33 = (int)param_1[5] + 1;
      }
      iVar8 = iVar33 + 0x1f;
      if (-1 < iVar33) {
        iVar8 = iVar33;
      }
      *(int *)(param_1 + 5) = iVar33;
      if (iVar33 % 0x20 != 0) {
        plVar16 = (longlong *)param_1[4];
        if ((longlong *)param_1[4] == (longlong *)0x0) {
          plVar16 = plVar30;
        }
        bVar20 = -(char)(iVar33 % 0x20);
        *(uint *)((longlong)plVar16 + (longlong)(iVar8 >> 5) * 4) =
             (uint)(*(int *)((longlong)plVar16 + (longlong)(iVar8 >> 5) * 4) << (bVar20 & 0x1f)) >>
             (bVar20 & 0x1f);
      }
    }
    lVar28 = (longlong)iVar10;
    if ((longlong *)param_1[4] != (longlong *)0x0) {
      plVar30 = (longlong *)param_1[4];
    }
    bVar20 = (byte)iVar32 & 0x1f;
    puVar2 = (uint *)((longlong)plVar30 + (longlong)(iVar22 >> 5) * 4);
    *puVar2 = *puVar2 & (-2 << bVar20 | 0xfffffffeU >> 0x20 - bVar20);
  }
  else {
    iVar10 = (int)param_1[6];
    lVar28 = (longlong)iVar10;
    iVar32 = *(int *)(*param_1 + 4 + lVar28 * 0x20);
    *(int *)(param_1 + 6) = iVar32;
    iVar8 = *(int *)((longlong)param_1 + 0x34) + -1;
    *(int *)((longlong)param_1 + 0x34) = iVar8;
    if (iVar8 != 0) {
      *(undefined4 *)(*param_1 + (longlong)iVar32 * 0x20) = 0xffffffff;
    }
  }
  uVar27 = 1 << ((byte)iVar10 & 0x1f);
  puVar2 = (uint *)(param_1 + 2);
  puVar19 = (uint *)param_1[4];
  if ((uint *)param_1[4] == (uint *)0x0) {
    puVar19 = puVar2;
  }
  iVar32 = iVar10 + 0x1f;
  if (-1 < iVar10) {
    iVar32 = iVar10;
  }
  puVar19[iVar32 >> 5] = puVar19[iVar32 >> 5] | uVar27;
  lVar26 = *param_1;
  lVar28 = lVar28 * 0x20;
  plVar30 = (longlong *)(lVar26 + lVar28);
  *(undefined8 *)(lVar26 + lVar28) = 0;
  ((undefined8 *)(lVar26 + lVar28))[1] = 0;
  *(undefined8 *)(lVar26 + 0x10 + lVar28) = 0;
  *(undefined8 *)(lVar26 + lVar28) = *param_3;
  uVar12 = FUN_14477b664(param_3[1]);
  lVar13 = FUN_14477b664(uVar12);
  *(longlong *)(lVar26 + 8 + lVar28) = lVar13;
  *(undefined8 *)(lVar26 + 0x10 + lVar28) = param_3[2];
  *(undefined4 *)(lVar26 + 0x18 + lVar28) = 0xffffffff;
  if (lVar13 == 0) {
    lVar13 = FUN_14043db3a();
  }
  lVar28 = *plVar30;
  uVar14 = FUN_14477b664(lVar13);
  uVar9 = ((uint)(uVar14 >> 0x14) & 0xffff ^ (uint)(uVar14 >> 4)) * -0x7a143595;
  uVar21 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  uVar21 = uVar21 >> 0x10 ^ uVar21;
  uVar9 = (uint)((ulonglong)lVar28 >> 0x10);
  uVar25 = (uint)lVar28 & 0xffff;
  uVar9 = uVar21 >> 0xd ^
          (((uint)lVar28 << 0x10 | uVar25) + (int)((ulonglong)lVar28 >> 0x20) +
           (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar25 >> 4)) - uVar21;
  uVar25 = uVar9 << 8 ^ (-0x61c88647 - uVar21) - uVar9;
  uVar31 = uVar25 >> 0xd ^ (uVar21 - uVar9) - uVar25;
  uVar9 = uVar31 >> 0xc ^ (uVar9 - uVar25) - uVar31;
  uVar21 = uVar9 << 0x10 ^ (uVar25 - uVar31) - uVar9;
  uVar25 = uVar21 >> 5 ^ (uVar31 - uVar9) - uVar21;
  uVar9 = uVar25 >> 3 ^ (uVar9 - uVar21) - uVar25;
  uVar21 = uVar9 << 10 ^ (uVar21 - uVar25) - uVar9;
  uVar9 = uVar21 >> 0xf ^ uVar25 - (uVar9 + uVar21);
  if (((int)param_1[1] - *(int *)((longlong)param_1 + 0x34) != 1) &&
     ((int)param_1[1] != *(int *)((longlong)param_1 + 0x34))) {
    plVar16 = param_1 + 7;
    if ((longlong *)param_1[8] != (longlong *)0x0) {
      plVar16 = (longlong *)param_1[8];
    }
    iVar8 = *(int *)((longlong)plVar16 + (ulonglong)((int)param_1[9] - 1U & uVar9) * 4);
    if (iVar8 != -1) {
      lVar28 = *param_1;
      do {
        lVar26 = (longlong)iVar8 * 0x20;
        plVar16 = (longlong *)(lVar28 + lVar26);
        if (*(longlong *)(lVar28 + 8 + lVar26) == 0) {
          uVar12 = FUN_14043db3a();
          lVar28 = FUN_14477b664(uVar12);
          plVar16[1] = lVar28;
        }
        lVar28 = plVar30[1];
        if (lVar28 == 0) {
          lVar28 = FUN_14043db3a();
        }
        lVar13 = *plVar30;
        lVar28 = FUN_14477b664(lVar28);
        iVar33 = 0;
        if ((lVar28 != 0) && (plVar3 = *(longlong **)(lVar28 + 0xb8), plVar3 != (longlong *)0x0)) {
          lVar17 = *plVar3;
          pcVar4 = *(code **)(lVar17 + 0x108);
          if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
            cVar7 = (*pcVar4)(plVar3);
            iVar33 = 0;
            if (cVar7 == '\0') goto LAB_14043e207;
            lVar17 = *plVar3;
          }
          pcVar4 = *(code **)(lVar17 + 0x110);
          ppuVar24 = &PTR_PTR_14c763408;
          if ((pcVar4 != (code *)&LAB_144783426) &&
             (ppuVar24 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
            ppuVar24 = (undefined **)(*pcVar4)(plVar3);
          }
          iVar33 = FUN_144aff48c(ppuVar24);
        }
LAB_14043e207:
        lVar17 = *plVar16;
        lVar5 = plVar16[1];
        if ((lVar5 == 0) || (plVar16 = *(longlong **)(lVar5 + 0xb8), plVar16 == (longlong *)0x0)) {
          iVar22 = 0;
        }
        else {
          lVar18 = *plVar16;
          pcVar4 = *(code **)(lVar18 + 0x108);
          if (pcVar4 != (code *)&LAB_14478342e && pcVar4 != (code *)&LAB_144783422) {
            cVar7 = (*pcVar4)(plVar16);
            iVar22 = 0;
            if (cVar7 == '\0') goto LAB_14043e282;
            lVar18 = *plVar16;
          }
          pcVar4 = *(code **)(lVar18 + 0x110);
          ppuVar24 = &PTR_PTR_14c763408;
          if ((pcVar4 != (code *)&LAB_144783426) &&
             (ppuVar24 = &PTR_PTR_14c75f798, pcVar4 != (code *)&LAB_144783432)) {
            ppuVar24 = (undefined **)(*pcVar4)(plVar16);
          }
          iVar22 = FUN_144aff48c(ppuVar24);
        }
LAB_14043e282:
        if ((iVar22 == iVar33) && (lVar17 == lVar13)) {
          if (lVar5 == lVar28) {
LAB_14043e339:
            lVar28 = *param_1;
            lVar13 = *plVar30;
            uVar11 = *(undefined4 *)((longlong)plVar30 + 4);
            lVar17 = plVar30[1];
            uVar6 = *(undefined4 *)((longlong)plVar30 + 0xc);
            *(longlong *)(lVar28 + 0x10 + lVar26) = plVar30[2];
            puVar1 = (undefined4 *)(lVar28 + lVar26);
            *puVar1 = (int)lVar13;
            puVar1[1] = uVar11;
            puVar1[2] = (int)lVar17;
            puVar1[3] = uVar6;
            lVar28 = *param_1;
            if (*(int *)((longlong)param_1 + 0x34) != 0) {
              *(int *)(lVar28 + (longlong)(int)param_1[6] * 0x20) = iVar10;
            }
            *(undefined4 *)(lVar28 + (longlong)iVar10 * 0x20) = 0xffffffff;
            uVar11 = 0xffffffff;
            if (0 < *(int *)((longlong)param_1 + 0x34)) {
              uVar11 = (undefined4)param_1[6];
            }
            *(undefined4 *)(lVar28 + (longlong)iVar10 * 0x20 + 4) = uVar11;
            *(int *)(param_1 + 6) = iVar10;
            *(int *)((longlong)param_1 + 0x34) = *(int *)((longlong)param_1 + 0x34) + 1;
            puVar19 = (uint *)param_1[4];
            if ((uint *)param_1[4] == (uint *)0x0) {
              puVar19 = puVar2;
            }
            puVar19[iVar32 >> 5] = puVar19[iVar32 >> 5] & ~uVar27;
            cVar7 = '\x01';
            goto LAB_14043dd9f;
          }
          if ((lVar28 != 0) && (lVar5 != 0)) {
            iVar33 = *(int *)(lVar28 + 0x38);
            iVar22 = *(int *)(lVar5 + 0x38);
            if (((iVar33 <= iVar22) &&
                (*(longlong *)(*(longlong *)(lVar5 + 0x30) + (longlong)iVar33 * 8) == lVar28 + 0x30)
                ) || ((iVar22 <= iVar33 &&
                      (*(longlong *)(*(longlong *)(lVar28 + 0x30) + (longlong)iVar22 * 8) ==
                       lVar5 + 0x30)))) goto LAB_14043e339;
          }
        }
        lVar28 = *param_1;
        iVar8 = *(int *)(lVar28 + 0x18 + lVar26);
      } while (iVar8 != -1);
    }
  }
  cVar7 = '\0';
  iVar8 = iVar10;
LAB_14043dd9f:
  if (param_4 != (char *)0x0) {
    *param_4 = cVar7;
  }
  if (cVar7 != '\0') goto LAB_14043e527;
  uVar21 = (int)param_1[1] - *(int *)((longlong)param_1 + 0x34);
  uVar27 = 1;
  if (3 < uVar21) {
    uVar14 = (ulonglong)(uVar21 & 0xfffffffe) + 0xf;
    lVar28 = 0x3f;
    if (uVar14 != 0) {
      for (; uVar14 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    uVar27 = 1 << ((byte)lVar28 & 0x1f);
  }
  if (((int)uVar21 < 1) || ((int)uVar27 <= (int)param_1[9])) {
    uVar9 = (int)param_1[9] - 1U & uVar9;
    *(uint *)((longlong)plVar30 + 0x1c) = uVar9;
    plVar16 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar16 = param_1 + 7;
    }
    *(undefined4 *)(plVar30 + 3) =
         *(undefined4 *)
          ((longlong)plVar16 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4);
    plVar30 = (longlong *)param_1[8];
    if ((longlong *)param_1[8] == (longlong *)0x0) {
      plVar30 = param_1 + 7;
    }
    *(int *)((longlong)plVar30 + ((longlong)(int)param_1[9] - 1U & (longlong)(int)uVar9) * 4) =
         iVar8;
    goto LAB_14043e527;
  }
  *(uint *)(param_1 + 9) = uVar27;
  plVar30 = param_1 + 8;
  if (param_1[8] != 0) {
    FUN_1446efa72(plVar30,0,0,4);
    uVar27 = *(uint *)(param_1 + 9);
  }
  plVar16 = param_1 + 7;
  if (uVar27 == 1) {
    if (*plVar30 != 0) {
      FUN_1446efa72(plVar30,0,0,4);
    }
LAB_14043de05:
    uVar9 = 0;
    do {
      plVar30 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar30 = plVar16;
      }
      *(undefined4 *)((longlong)plVar30 + (ulonglong)((int)param_1[9] + 0x7fffffffU & uVar9) * 4) =
           0xffffffff;
      uVar9 = uVar9 + 1;
    } while (uVar27 != uVar9);
  }
  else {
    if (uVar27 == 0) goto LAB_14043e527;
    FUN_1446efa72(plVar30,0,uVar27,4);
    if (0 < (int)uVar27) goto LAB_14043de05;
  }
  iVar10 = (int)param_1[5];
  if (iVar10 == 0) {
    uVar14 = 0;
    uVar34 = 1;
    iVar32 = 0;
    iVar33 = 0;
  }
  else {
    puVar19 = (uint *)param_1[4];
    if ((uint *)param_1[4] == (uint *)0x0) {
      puVar19 = puVar2;
    }
    uVar27 = *puVar19;
    if (uVar27 == 0) {
      iVar32 = iVar10 + 0x1e;
      if (-1 < iVar10 + -1) {
        iVar32 = iVar10 + -1;
      }
      uVar14 = 0;
      uVar34 = (ulonglong)(uint)(iVar32 >> 5);
      if (iVar32 >> 5 < 1) {
        uVar34 = uVar14;
      }
      iVar33 = 0;
      do {
        if (uVar34 == uVar14) goto LAB_14043e527;
        iVar33 = iVar33 + 0x20;
        uVar27 = puVar19[uVar14 + 1];
        uVar14 = uVar14 + 1;
      } while (uVar27 == 0);
    }
    else {
      uVar14 = 0;
      iVar33 = 0;
    }
    uVar34 = (ulonglong)(-uVar27 & uVar27);
    uVar15 = uVar34 * 2 + 1;
    lVar28 = 0x3f;
    if (uVar15 != 0) {
      for (; uVar15 >> lVar28 == 0; lVar28 = lVar28 + -1) {
      }
    }
    iVar32 = (iVar33 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    if (iVar10 <= iVar32) {
      iVar32 = iVar10;
    }
  }
  if (iVar32 < iVar10) {
    uVar27 = 0xffffffff;
    do {
      lVar28 = *param_1;
      lVar26 = *(longlong *)(lVar28 + 8 + (longlong)iVar32 * 0x20);
      if (lVar26 == 0) {
        lVar26 = FUN_14043db3a();
      }
      puVar29 = (undefined8 *)(lVar28 + (longlong)iVar32 * 0x20);
      uVar12 = *puVar29;
      uVar15 = FUN_14477b664(lVar26);
      uVar9 = ((uint)(uVar15 >> 0x14) & 0xffff ^ (uint)(uVar15 >> 4)) * -0x7a143595;
      uVar21 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      uVar21 = uVar21 >> 0x10 ^ uVar21;
      uVar9 = (uint)((ulonglong)uVar12 >> 0x10);
      uVar25 = (uint)uVar12 & 0xffff;
      uVar9 = uVar21 >> 0xd ^
              (((uint)uVar12 << 0x10 | uVar25) + (int)((ulonglong)uVar12 >> 0x20) +
               (uVar9 << 0x13 | uVar9 & 0xffff) + (uVar25 >> 4)) - uVar21;
      uVar25 = uVar9 << 8 ^ (-0x61c88647 - uVar21) - uVar9;
      uVar31 = uVar25 >> 0xd ^ (uVar21 - uVar9) - uVar25;
      uVar9 = uVar31 >> 0xc ^ (uVar9 - uVar25) - uVar31;
      uVar21 = uVar9 << 0x10 ^ (uVar25 - uVar31) - uVar9;
      uVar25 = uVar21 >> 5 ^ (uVar31 - uVar9) - uVar21;
      uVar31 = uVar25 >> 3 ^ (uVar9 - uVar21) - uVar25;
      uVar9 = uVar31 << 10 ^ (uVar21 - uVar25) - uVar31;
      uVar15 = (longlong)(int)(uVar9 >> 0xf ^ uVar25 - (uVar31 + uVar9)) &
               (longlong)(int)param_1[9] - 1U;
      iVar10 = (int)uVar15;
      *(int *)((longlong)puVar29 + 0x1c) = iVar10;
      plVar30 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar30 = plVar16;
      }
      *(undefined4 *)(puVar29 + 3) =
           *(undefined4 *)((longlong)plVar30 + ((longlong)(int)param_1[9] - 1U & uVar15) * 4);
      plVar30 = (longlong *)param_1[8];
      if ((longlong *)param_1[8] == (longlong *)0x0) {
        plVar30 = plVar16;
      }
      *(int *)((longlong)plVar30 + ((longlong)iVar10 & (longlong)(int)param_1[9] - 1U) * 4) = iVar32
      ;
      uVar27 = uVar27 & ~(uint)uVar34;
      puVar19 = (uint *)param_1[4];
      if ((uint *)param_1[4] == (uint *)0x0) {
        puVar19 = puVar2;
      }
      iVar10 = (int)param_1[5];
      iVar32 = (int)uVar14;
      lVar28 = (longlong)iVar32;
      uVar9 = puVar19[lVar28] & uVar27;
      if (uVar9 == 0) {
        iVar22 = iVar10 + 0x1e;
        if (-1 < iVar10 + -1) {
          iVar22 = iVar10 + -1;
        }
        iVar22 = iVar22 >> 5;
        iVar23 = iVar22;
        if (iVar22 < iVar32) {
          iVar23 = iVar32;
        }
        if (iVar22 <= iVar32) break;
        lVar26 = 0;
        while( true ) {
          iVar33 = iVar33 + 0x20;
          uVar9 = puVar19[lVar28 + lVar26 + 1];
          if (uVar9 != 0) break;
          lVar26 = lVar26 + 1;
          if (iVar23 - lVar28 == lVar26) goto LAB_14043e527;
        }
        uVar14 = (ulonglong)(iVar32 + (int)lVar26 + 1);
        uVar27 = 0xffffffff;
      }
      uVar34 = (ulonglong)(-uVar9 & uVar9);
      uVar15 = uVar34 * 2 + 1;
      lVar28 = 0x3f;
      if (uVar15 != 0) {
        for (; uVar15 >> lVar28 == 0; lVar28 = lVar28 + -1) {
        }
      }
      iVar32 = (iVar33 - ((uint)lVar28 ^ 0x3f)) + 0x3e;
    } while (iVar32 < iVar10);
  }
LAB_14043e527:
  *param_2 = iVar8;
  return;
}



// FUNCTION 14043e5f8 FUN_14043e5f8 body=353 status=ok
// SIG undefined FUN_14043e5f8(void)

void FUN_14043e5f8(longlong param_1,int param_2)

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
            if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14043e67d;
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
LAB_14043e67d:
  uVar7 = 0x7fffffff;
  if ((int)uVar2 <= (int)(uVar5 >> 3)) {
    uVar7 = uVar5 >> 3 & 0xffffffff;
  }
  *(int *)(param_1 + 0xc) = (int)uVar7;
  FUN_1446f8d3c(param_1,param_2,uVar7,8,8);
  return;
}



// FUNCTION 14043e75a FUN_14043e75a body=314 status=ok
// SIG undefined FUN_14043e75a(void)

void FUN_14043e75a(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14043e7c8;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_14043e7c8:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14043e894 FUN_14043e894 body=254 status=ok
// SIG undefined FUN_14043e894(void)

void FUN_14043e894(longlong param_1,longlong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  longlong lVar7;
  longlong lVar8;
  undefined1 auStack_88 [32];
  longlong local_68;
  longlong local_60;
  longlong local_58 [2];
  ulonglong local_48;
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_88;
  if ((*(int *)(param_1 + 0x18) != 0) && (iVar1 = *(int *)(param_2 + 0x110), iVar1 != 0)) {
    lVar7 = (longlong)*(int *)(*(longlong *)(param_2 + 0x38) + 0x488);
    if (lVar7 != 0) {
      lVar8 = *(longlong *)(param_2 + 0x108);
      lVar4 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 0x480);
      local_60 = lVar7 * 0xc;
      lVar7 = 0;
      do {
        iVar2 = *(int *)(lVar4 + 8 + lVar7);
        if ((-1 < (longlong)iVar2) && (iVar2 < *(int *)(param_1 + 0x18))) {
          iVar3 = *(int *)(lVar4 + lVar7);
          if ((-1 < (longlong)iVar3) &&
             ((iVar3 < iVar1 &&
              (plVar5 = *(longlong **)(*(longlong *)(param_1 + 0x10) + (longlong)iVar2 * 8),
              plVar5 != (longlong *)0x0)))) {
            plVar6 = *(longlong **)(lVar8 + (longlong)iVar3 * 0x10);
            iVar2 = *(int *)(lVar4 + 4 + lVar7);
            local_68 = lVar8;
            (**(code **)(*plVar6 + 0x78))(plVar6,local_58);
            (**(code **)(*plVar5 + 0x78))
                      (plVar5,*(undefined8 *)(local_58[0] + (longlong)iVar2 * 8),plVar6);
            lVar8 = local_68;
          }
        }
        lVar7 = lVar7 + 0xc;
      } while (local_60 != lVar7);
    }
  }
  if ((local_48 ^ (ulonglong)auStack_88) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}



// FUNCTION 14043e994 FUN_14043e994 body=181 status=ok
// SIG undefined FUN_14043e994(void)

undefined8 FUN_14043e994(longlong param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  char cVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  longlong *local_20;
  ulonglong local_18;
  
  local_18 = DAT_14c707940 ^ (ulonglong)auStack_48;
  if ((*(byte *)(param_1 + 0x2a8) & 1) == 0) {
    plVar3 = param_3;
    if (*(longlong *)(param_1 + 0x110) != 0) {
      do {
        if (*plVar3 == param_1) goto LAB_14043ea01;
        plVar1 = plVar3 + 1;
        plVar3 = (longlong *)*plVar1;
      } while ((longlong *)*plVar1 != (longlong *)0x0);
      *param_3 = param_1;
      local_28 = 0;
      local_20 = param_3;
      cVar2 = (**(code **)(**(longlong **)(param_1 + 0x110) + 0x358))
                        (*(longlong **)(param_1 + 0x110),param_2,&local_28);
      if (cVar2 != '\0') goto LAB_14043ea46;
    }
LAB_14043ea01:
    uVar4 = 0;
  }
  else {
    FUN_14043ea4a(param_2,param_1 + 0x260);
    FUN_14043ea4a(param_2 + 0x10,param_1 + 0x270);
LAB_14043ea46:
    uVar4 = 1;
  }
  if ((local_18 ^ (ulonglong)auStack_48) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return uVar4;
}



// FUNCTION 14043ea4a FUN_14043ea4a body=79 status=ok
// SIG undefined FUN_14043ea4a(void)

undefined8 * FUN_14043ea4a(undefined8 *param_1,undefined8 *param_2)

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
      FUN_14043eaea(param_1,iVar1);
      FUN_14043ea99(*param_1,uVar2,iVar1);
    }
  }
  return param_1;
}



// FUNCTION 14043ea99 FUN_14043ea99 body=80 status=ok
// SIG undefined FUN_14043ea99(void)

void FUN_14043ea99(longlong param_1,longlong param_2,int param_3)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  
  if (param_3 != 0) {
    lVar3 = 0;
    bVar2 = DAT_14c950c29;
    do {
      lVar1 = *(longlong *)(param_2 + lVar3 * 8);
      *(longlong *)(param_1 + lVar3 * 8) = lVar1;
      if (((bVar2 & 1) != 0) && (lVar1 != 0)) {
        FUN_14689c22e();
        bVar2 = DAT_14c950c29;
      }
      lVar3 = lVar3 + 1;
    } while (param_3 != (int)lVar3);
  }
  return;
}



// FUNCTION 14043eaea FUN_14043eaea body=317 status=ok
// SIG undefined FUN_14043eaea(void)

void FUN_14043eaea(longlong param_1,int param_2,int param_3)

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
              if (((&DAT_14c841d90)[uVar8 & 0xffffffff] & 0xf) == 0) goto LAB_14043eb58;
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
        uVar5 = (**(code **)(*DAT_14c872d28 + 0x60))(DAT_14c872d28,uVar5,8);
      }
    }
LAB_14043eb58:
    iVar4 = (int)(uVar5 >> 3);
    iVar7 = 0x7fffffff;
    if (param_2 <= iVar4) {
      iVar7 = iVar4;
    }
  }
  if (param_3 < iVar7) {
    FUN_1446f8d3c(param_1,0,iVar7,8,8);
    param_3 = iVar7;
  }
  *(int *)(param_1 + 0xc) = param_3;
  return;
}



// FUNCTION 14043ec28 FUN_14043ec28 body=2319 status=ok
// SIG undefined FUN_14043ec28(void)

void FUN_14043ec28(longlong param_1)

{
  code *pcVar1;
  byte *pbVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  int iVar13;
  undefined1 auStack_108 [32];
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined8 local_d0;
  wchar_t *local_c8;
  code *local_c0;
  undefined1 *local_b8;
  code **local_b0;
  code *local_a8;
  code *local_a0;
  code *local_90;
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
  
  local_48 = DAT_14c707940 ^ (ulonglong)auStack_108;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) | 0x40;
  uVar4 = local_78;
  if ((DAT_14cb11318 != 0) && (lVar7 = FUN_1447210f0(param_1), uVar4 = local_78, lVar7 != 0)) {
    lVar7 = FUN_1447210f0(param_1);
    bVar12 = *(byte *)(lVar7 + 0x152);
    if ((bVar12 == 1) || ((uVar4 = local_78, bVar12 < 7 && ((0x68U >> (bVar12 & 0x1f) & 1) != 0))))
    {
      lVar7 = FUN_144a3a302();
      if ((lVar7 == 0) || (DAT_14c950c29 == 0)) {
        if (lVar7 != 0) goto LAB_14043ee99;
        bVar3 = true;
LAB_14043eeb3:
        lVar11 = 0;
      }
      else {
        FUN_1456cec3c(lVar7);
LAB_14043ee99:
        lVar8 = FUN_144a78d6a();
        if ((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) {
          bVar3 = false;
          goto LAB_14043eeb3;
        }
        bVar3 = false;
        lVar11 = 0;
        if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
            lVar8 + 0x30) {
          lVar11 = lVar7;
        }
      }
      lVar8 = FUN_144a78d6a();
      bVar12 = lVar7 != 0 & DAT_14c950c29;
      if (lVar11 == lVar8) {
        if (bVar12 != 0) {
          FUN_1456cec3c(lVar7);
        }
        pcVar1 = (code *)(param_1 + 0x240);
        lVar7 = param_1 + 0x250;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar7;
        if (*(int *)(param_1 + 0x268) == 0) {
          iVar13 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar13 = *(int *)(param_1 + 0x268);
        }
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar4 = local_78;
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = pcVar1;
        if ((local_78._4_4_ != iVar13) || (uStack_60 != lVar7)) {
          iVar6 = local_78._4_4_;
          local_78 = uVar4;
          do {
            lVar8 = *(longlong *)(*(longlong *)local_90 + (longlong)iVar6 * 0x10);
            if (lVar8 != 0) {
              FUN_1417be62e(lVar8,0);
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar6 = local_78._4_4_;
            uVar4 = local_78;
          } while (local_90 != pcVar1 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar7 || local_78._4_4_ != iVar13));
        }
      }
      else {
        if (bVar12 != 0) {
          FUN_1456cec3c(lVar7);
        }
        pcVar1 = (code *)(param_1 + 0x240);
        lVar8 = param_1 + 0x250;
        local_68 = 0x100000000;
        local_58 = 0xffffffff;
        uStack_50 = 0;
        uStack_60 = lVar8;
        if (*(int *)(param_1 + 0x268) == 0) {
          iVar13 = 0;
        }
        else {
          FUN_1449c0562(&local_68);
          iVar13 = *(int *)(param_1 + 0x268);
        }
        local_88 = (undefined4)local_68;
        uStack_84 = local_68._4_4_;
        uStack_80 = (undefined4)uStack_60;
        uStack_7c = uStack_60._4_4_;
        uStack_70 = CONCAT44(uStack_4c,uStack_50);
        local_78 = local_58;
        uVar4 = local_78;
        local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
        local_90 = pcVar1;
        if ((local_78._4_4_ != iVar13) || (uStack_60 != lVar8)) {
          iVar6 = local_78._4_4_;
          local_78 = uVar4;
          do {
            lVar11 = *(longlong *)(*(longlong *)local_90 + (longlong)iVar6 * 0x10);
            if (lVar11 != 0) {
              if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
                FUN_1456cec3c(lVar7);
              }
              if (((bVar3) || (lVar10 = FUN_144a78d6a(), lVar10 == 0)) ||
                 (*(int *)(lVar7 + 0x38) < *(int *)(lVar10 + 0x38))) {
                lVar9 = 0;
              }
              else {
                lVar9 = 0;
                if (*(longlong *)
                     (*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8) ==
                    lVar10 + 0x30) {
                  lVar9 = lVar7;
                }
              }
              if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
                 (*(longlong *)
                   (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
                   (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
                FUN_1417be62e(lVar11,0);
              }
            }
            local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
            FUN_1449c0562(&local_88);
            iVar6 = local_78._4_4_;
            uVar4 = local_78;
          } while (local_90 != pcVar1 ||
                   (CONCAT44(uStack_7c,uStack_80) != lVar8 || local_78._4_4_ != iVar13));
        }
      }
    }
  }
  local_78 = uVar4;
  uVar4 = local_78;
  if (((param_1 == 0) || ((*(uint *)(param_1 + 8) >> 0x1e & 1) != 0)) ||
     (lVar7 = FUN_14043f728(param_1), uVar4 = local_78, lVar7 == 0)) goto LAB_14043ece5;
  if (DAT_14cae8b20 == 0) {
    local_b0 = &local_90;
    local_90 = (code *)&LAB_14355090c;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_147b8e16d;
    local_c0 = (code *)&LAB_140810a38;
    local_c8 = L"Engine";
    local_d0 = 0x800000000;
    local_d8 = 0x10000000;
    local_e0 = 8;
    local_e8 = 0x3f0;
    FUN_14081cfa3(L"/Script/Engine",L"Level",&DAT_14cae8b20,&DAT_147b8e16c);
  }
  lVar8 = DAT_14cae8b20;
  if (DAT_14c951858 == 0) {
    local_b0 = &local_90;
    local_90 = FUN_1449e2820;
    local_a0 = FUN_14081d0ea;
    local_a8 = FUN_14081d0ea;
    local_b8 = &LAB_1468c5283;
    local_c0 = FUN_142809da0;
    local_c8 = L"Engine";
    local_d0 = 0x400000000;
    local_d8 = 0x10000000;
    local_e0 = 8;
    local_e8 = 0x50;
    FUN_14081cfa3(L"/Script/CoreUObject",L"Package",&DAT_14c951858,&DAT_1468c5288);
  }
  lVar7 = *(longlong *)(lVar7 + 0x20);
  if (lVar7 == 0) {
    lVar11 = 0;
  }
  else {
    iVar13 = *(int *)(lVar8 + 0x38);
    do {
      if ((*(int *)(*(longlong *)(lVar7 + 0x10) + 0x38) < iVar13) ||
         (lVar11 = lVar7,
         *(longlong *)(*(longlong *)(*(longlong *)(lVar7 + 0x10) + 0x30) + (longlong)iVar13 * 8) !=
         lVar8 + 0x30)) {
        lVar11 = 0;
      }
    } while ((lVar11 == 0) && (lVar7 = *(longlong *)(lVar7 + 0x20), lVar7 != 0));
  }
  cVar5 = FUN_14043f538(lVar11);
  uVar4 = local_78;
  if (cVar5 == '\0') goto LAB_14043ece5;
  lVar7 = FUN_144a799b0();
  if ((lVar7 == 0) || (DAT_14c950c29 == 0)) {
    if (lVar7 != 0) goto LAB_14043f080;
    bVar3 = true;
LAB_14043f099:
    lVar11 = 0;
  }
  else {
    FUN_1456cec3c(lVar7);
LAB_14043f080:
    lVar8 = FUN_144a78d6a();
    if ((lVar8 == 0) || (*(int *)(lVar7 + 0x38) < *(int *)(lVar8 + 0x38))) {
      bVar3 = false;
      goto LAB_14043f099;
    }
    bVar3 = false;
    lVar11 = 0;
    if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar8 + 0x38) * 8) ==
        lVar8 + 0x30) {
      lVar11 = lVar7;
    }
  }
  lVar8 = FUN_144a78d6a();
  bVar12 = lVar7 != 0 & DAT_14c950c29;
  if (lVar11 == lVar8) {
    if (bVar12 != 0) {
      FUN_1456cec3c(lVar7);
    }
    pcVar1 = (code *)(param_1 + 0x240);
    lVar7 = param_1 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar7;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = *(int *)(param_1 + 0x268);
    }
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = pcVar1;
    if ((local_78._4_4_ != iVar13) || (uStack_60 != lVar7)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar8 = *(longlong *)(*(longlong *)local_90 + (longlong)iVar6 * 0x10);
        if (lVar8 != 0) {
          pbVar2 = (byte *)(lVar8 + 0x1fa);
          *pbVar2 = *pbVar2 & 0xfe;
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != pcVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar7 || local_78._4_4_ != iVar13));
    }
  }
  else {
    if (bVar12 != 0) {
      FUN_1456cec3c(lVar7);
    }
    pcVar1 = (code *)(param_1 + 0x240);
    lVar8 = param_1 + 0x250;
    local_68 = 0x100000000;
    local_58 = 0xffffffff;
    uStack_50 = 0;
    uStack_60 = lVar8;
    if (*(int *)(param_1 + 0x268) == 0) {
      iVar13 = 0;
    }
    else {
      FUN_1449c0562(&local_68);
      iVar13 = *(int *)(param_1 + 0x268);
    }
    local_88 = (undefined4)local_68;
    uStack_84 = local_68._4_4_;
    uStack_80 = (undefined4)uStack_60;
    uStack_7c = uStack_60._4_4_;
    uStack_70 = CONCAT44(uStack_4c,uStack_50);
    local_78 = local_58;
    uVar4 = local_78;
    local_78._4_4_ = (int)((ulonglong)local_58 >> 0x20);
    local_90 = pcVar1;
    if ((local_78._4_4_ != iVar13) || (uStack_60 != lVar8)) {
      iVar6 = local_78._4_4_;
      local_78 = uVar4;
      do {
        lVar11 = *(longlong *)(*(longlong *)local_90 + (longlong)iVar6 * 0x10);
        if (lVar11 != 0) {
          if ((lVar7 != 0) && (DAT_14c950c29 != 0)) {
            FUN_1456cec3c(lVar7);
          }
          if (((bVar3) || (lVar10 = FUN_144a78d6a(), lVar10 == 0)) ||
             (*(int *)(lVar7 + 0x38) < *(int *)(lVar10 + 0x38))) {
            lVar9 = 0;
          }
          else {
            lVar9 = 0;
            if (*(longlong *)(*(longlong *)(lVar7 + 0x30) + (longlong)*(int *)(lVar10 + 0x38) * 8)
                == lVar10 + 0x30) {
              lVar9 = lVar7;
            }
          }
          if ((*(int *)(lVar9 + 0x38) <= *(int *)(*(longlong *)(lVar11 + 0x10) + 0x38)) &&
             (*(longlong *)
               (*(longlong *)(*(longlong *)(lVar11 + 0x10) + 0x30) +
               (longlong)*(int *)(lVar9 + 0x38) * 8) == lVar9 + 0x30)) {
            *(byte *)(lVar11 + 0x1fa) = *(byte *)(lVar11 + 0x1fa) & 0xfe;
          }
        }
        local_78 = CONCAT44(local_78._4_4_,(uint)local_78 & ~uStack_84);
        FUN_1449c0562(&local_88);
        iVar6 = local_78._4_4_;
        uVar4 = local_78;
      } while (local_90 != pcVar1 ||
               (CONCAT44(uStack_7c,uStack_80) != lVar8 || local_78._4_4_ != iVar13));
    }
  }
LAB_14043ece5:
  local_78 = uVar4;
  if ((local_48 ^ (ulonglong)auStack_108) != DAT_14c707940) {
                    /* WARNING: Subroutine does not return */
    FUN_144d8e3a0();
  }
  return;
}


